# ExtractImages

Extracts item icons from the Mir 5 IoStore paks into `Tools/DarkSteelStudio/Images/Items/<ID_Icon>.png` (333 distinct icons, 331 resolve).

How it resolves an icon: `ItemBase.ID_Icon` -> `ResourceIcon.IconPath` (a Paper2D sprite) -> the sprite's atlas texture
(`BakedSourceTexture`) cropped at `BakedSourceUV` / `BakedSourceDimension`. A few icons (portraits) point straight at a texture and are used whole.
Needs the pak AES key (the README "Client AES" line) in the environment, .NET 10, and the sprite JSON from the FModel export.

```powershell
$env:MSBuildEnableWorkloadResolver='false'
dotnet build -c Release -o out
$env:MIR5_AES_KEY='0x<key from README>'
out\ExtractImages.exe <ProjectDS\Content\Paks> ..\ProjectDS.usmap <Server\Bin\Data\Common or the FModel Datas\Common> <FModel export root> ..\DarkSteelStudio\Images\Items
```
Uses CUE4Parse (NuGet). Known misses: icons 20113/20114 (sprite missing from the pak).
