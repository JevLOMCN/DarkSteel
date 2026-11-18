// Extracts item icons from the Mir 5 IoStore paks.
//   ItemBase.ID_Icon -> ResourceIcon.IconPath (PaperSprite) -> sprite BakedSourceTexture + BakedSourceUV/Dimension -> crop -> <ID_Icon>.png
// Usage: ExtractImages <paksDir> <usmap> <dataDir> <spriteExportDir> <outDir>   (AES key in env MIR5_AES_KEY, hex)
using System.Text.Json;
using CUE4Parse.Encryption.Aes;
using CUE4Parse.FileProvider;
using CUE4Parse.UE4.Objects.Core.Misc;
using CUE4Parse.UE4.Versions;
using CUE4Parse.MappingsProvider;
using CUE4Parse.MappingsProvider.Usmap;
using CUE4Parse.UE4.Assets.Exports.Texture;
using CUE4Parse_Conversion.Textures;
using SkiaSharp;

var paks = args[0]; var usmap = args[1]; var common = args[2]; var exportRoot = args[3]; var outDir = args[4];
var key = Environment.GetEnvironmentVariable("MIR5_AES_KEY") ?? throw new Exception("set MIR5_AES_KEY");
Directory.CreateDirectory(outDir);

var provider = new DefaultFileProvider(paks, SearchOption.TopDirectoryOnly, new VersionContainer(EGame.GAME_UE5_7), StringComparer.OrdinalIgnoreCase);
provider.MappingsContainer = new FileUsmapTypeMappingsProvider(usmap);
provider.Initialize();
provider.SubmitKey(new FGuid(), new FAesKey(key));
provider.PostMount();
Console.WriteLine($"mounted, {provider.Files.Count} files");

JsonElement Rows(string file) => JsonDocument.Parse(File.ReadAllText(file)).RootElement[0].GetProperty("Rows");
var items = Rows(Path.Combine(common, "ItemBase.json"));
var icons = Rows(Path.Combine(common, "ResourceIcon.json"));

var iconIds = new SortedSet<long>();
foreach (var r in items.EnumerateObject())
    if (r.Value.TryGetProperty("ID_Icon", out var ic) && ic.ValueKind == JsonValueKind.Number && ic.GetInt64() != 0) iconIds.Add(ic.GetInt64());
Console.WriteLine($"{iconIds.Count} distinct item icon ids");

var atlases = new Dictionary<string, SKBitmap?>(StringComparer.OrdinalIgnoreCase);
SKBitmap? Atlas(string objectPath)
{
    var p = objectPath.Contains('.') ? objectPath[..objectPath.LastIndexOf('.')] : objectPath;
    if (atlases.TryGetValue(p, out var b)) return b;
    SKBitmap? bmp = null;
    try { var tex = provider.LoadPackage(p).GetExports().OfType<UTexture2D>().First(); bmp = tex.Decode()?.ToSkBitmap(); }
    catch (Exception e) { Console.WriteLine($"  atlas {p}: {e.Message}"); }
    return atlases[p] = bmp;
}

int ok = 0; var failed = new List<string>();
foreach (var id in iconIds)
{
    try
    {
        if (!icons.TryGetProperty(id.ToString(), out var row)) { failed.Add($"{id}: no ResourceIcon row"); continue; }
        var assetPath = row.GetProperty("IconPath").GetProperty("AssetPathName").GetString()!;       // /Game/.../X_Sprite.X_Sprite
        var pkg = assetPath.LastIndexOf('.') > assetPath.LastIndexOf('/') ? assetPath[..assetPath.LastIndexOf('.')] : assetPath;
        var jsonFile = Path.Combine(exportRoot, pkg.Replace("/Game/", "Content/").Replace('/', '\\') + ".json");
        JsonElement sprite = default; bool isSprite = File.Exists(jsonFile) &&
            JsonDocument.Parse(File.ReadAllText(jsonFile)).RootElement.EnumerateArray().Any(e => e.GetProperty("Type").GetString() == "PaperSprite");
        if (isSprite) sprite = JsonDocument.Parse(File.ReadAllText(jsonFile)).RootElement.EnumerateArray().First(e => e.GetProperty("Type").GetString() == "PaperSprite").GetProperty("Properties");
        // sprite: crop its rect out of the atlas; plain texture (e.g. portraits): the whole texture
        double Num(JsonElement el, string a, string b) => el.ValueKind == JsonValueKind.Object && el.TryGetProperty(a, out var pa) && pa.TryGetProperty(b, out var v) ? v.GetDouble() : 0;
        var tex = isSprite ? sprite.GetProperty("BakedSourceTexture").GetProperty("ObjectPath").GetString()! : pkg;
        var atlas = Atlas(tex);
        if (atlas == null) { failed.Add($"{id}: texture {tex} not loaded"); continue; }
        int x = 0, y = 0, w = atlas.Width, h = atlas.Height;
        if (isSprite) { x = (int)Num(sprite, "BakedSourceUV", "X"); y = (int)Num(sprite, "BakedSourceUV", "Y"); w = (int)Num(sprite, "BakedSourceDimension", "X"); h = (int)Num(sprite, "BakedSourceDimension", "Y"); }
        using var crop = new SKBitmap(w, h, SKColorType.Rgba8888, SKAlphaType.Unpremul);
        using (var canvas = new SKCanvas(crop)) canvas.DrawBitmap(atlas, new SKRect(x, y, x + w, y + h), new SKRect(0, 0, w, h));
        using var data = SKImage.FromBitmap(crop).Encode(SKEncodedImageFormat.Png, 100);
        File.WriteAllBytes(Path.Combine(outDir, id + ".png"), data.ToArray());
        ok++;
    }
    catch (Exception e) { failed.Add($"{id}: {e.GetType().Name} {e.Message}"); }
}
Console.WriteLine($"wrote {ok} / {iconIds.Count} icons to {outDir}; {atlases.Count} atlases loaded");
foreach (var f in failed.Take(30)) Console.WriteLine("  FAIL " + f);



