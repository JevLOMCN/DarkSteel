using M5.Core.Tables;

namespace M5.Core;

/// <summary>
/// Locates the shared Data / Config folders and loads the game data tables.
/// All game data is read from Server/Bin/Data (the client's DataTable export, unmodified) through <see cref="DataTables"/>;
/// the old Mir 4 CSV model loaders and providers were removed together with the MirMobile library.
/// </summary>
public abstract class Engine
{
    public static string DATA_PATH = GetDataPath();

    private static string GetDataPath()
    {
        var envPath = Environment.GetEnvironmentVariable("DATA_PATH");
        if (!string.IsNullOrWhiteSpace(envPath) && Directory.Exists(envPath))
            return NormalizeDataPath(envPath);

        foreach (var root in EnumerateDataSearchRoots())
        {
            var resolvedPath = FindWorkspaceDataPath(root);
            if (resolvedPath != null)
                return resolvedPath;
        }

        // Fallback final: /app/Data (Docker)
        return "/app/Data" + Path.DirectorySeparatorChar;
    }

    private static IEnumerable<string> EnumerateDataSearchRoots()
    {
        var seen = new HashSet<string>(StringComparer.OrdinalIgnoreCase);
        var roots = new List<string>();

        void AddRoot(string? path)
        {
            if (string.IsNullOrWhiteSpace(path))
                return;

            var fullPath = Path.GetFullPath(path);
            if (Directory.Exists(fullPath) && seen.Add(fullPath))
                roots.Add(fullPath);
        }

        AddRoot(Environment.CurrentDirectory);
        AddRoot(AppDomain.CurrentDomain.BaseDirectory);

        return roots;
    }

    /// <summary>Finds a file (for example Config/settings.json) by walking up from the working directory and the exe folder.</summary>
    public static string? FindWorkspaceFile(string relativePath)
    {
        foreach (var root in EnumerateDataSearchRoots())
        {
            var searchPath = root;
            for (int i = 0; i < 8; i++)
            {
                var candidate = Path.GetFullPath(Path.Combine(searchPath, relativePath));
                if (File.Exists(candidate))
                    return candidate;

                var parent = Path.GetFullPath(Path.Combine(searchPath, ".."));
                if (string.Equals(parent, searchPath, StringComparison.OrdinalIgnoreCase))
                    break;

                searchPath = parent;
            }
        }

        return null;
    }

    private static string? FindWorkspaceDataPath(string root)
    {
        var searchPath = root;
        for (int i = 0; i < 8; i++)
        {
            var workspaceDataCandidate = Path.GetFullPath(Path.Combine(searchPath, "Data"));
            if (Directory.Exists(workspaceDataCandidate))
                return NormalizeDataPath(workspaceDataCandidate);

            var parent = Path.GetFullPath(Path.Combine(searchPath, ".."));
            if (string.Equals(parent, searchPath, StringComparison.OrdinalIgnoreCase))
                break;

            searchPath = parent;
        }

        return null;
    }

    private static string NormalizeDataPath(string path)
    {
        return Path.GetFullPath(path).TrimEnd(Path.DirectorySeparatorChar, Path.AltDirectorySeparatorChar)
            + Path.DirectorySeparatorChar;
    }

    /// <summary>Loads every table under <see cref="DATA_PATH"/> (Mir 5 DataTable exports).</summary>
    public static Task InitializeAsync()
    {
        try
        {
            DataTables.Load();
        }
        catch (Exception ex)
        {
            Logger.Error($"[Engine] DataTables.Load failed: {ex.GetType().Name}: {ex.Message}");
        }
        return Task.CompletedTask;
    }
}
