using Newtonsoft.Json;

namespace M5.Core;

/// <summary>
/// Settings loaded from Server/Bin/Config/settings.json (found by walking up from the running folder, or via the
/// SETTINGS_JSON_PATH environment variable). Only the keys Mir 5 reads are declared; any other key in the file is ignored.
/// </summary>
public class Config
{
    public static Settings Data { get; set; } = new();

    public static void Load()
    {
        try
        {
            var explicitConfigFile = Environment.GetEnvironmentVariable("SETTINGS_JSON_PATH");
            string configFile = !string.IsNullOrWhiteSpace(explicitConfigFile)
                ? explicitConfigFile
                : Path.Combine(Engine.DATA_PATH, "Config", "settings.json");
            if (!File.Exists(configFile))
            {
                var fallback = Engine.FindWorkspaceFile(Path.Combine("Config", "settings.json"));
                if (fallback != null)
                    configFile = fallback;
            }

            if (!File.Exists(configFile))
            {
                Logger.Dbg("Config file not found.");
                return;
            }

            var json = File.ReadAllText(configFile);
            var deserializedSettings = JsonConvert.DeserializeObject<Settings>(json);
            if (deserializedSettings != null)
            {
                Data = deserializedSettings;
            }
            else
            {
                Logger.Dbg("Deserialized settings are null.");
            }
        }
        catch (Exception ex)
        {
            Logger.Exception(ex);
        }
    }

    public class Settings
    {
        /// <summary>World id this game server serves.</summary>
        public int world { get; set; }

        [JsonProperty("IPAddress")]
        public string IpAddress { get; set; } = "";

        /// <summary>Gateway HTTP API port (the client's bootstrap and login requests).</summary>
        public long AuthPort { get; set; }

        /// <summary>Game server TCP port the Mir 5 client connects to.</summary>
        public int GamePort { get; set; }

        public Client Client { get; set; } = new();

        /// <summary>Mir 5 ds_* databases (MySQL).</summary>
        public MySql MySql { get; set; } = new();
    }

    public class MySql
    {
        public string Host { get; set; } = "127.0.0.1";

        public int Port { get; set; } = 3306;

        public string UserName { get; set; } = "dev";

        public string Password { get; set; } = "";
    }

    public class Client
    {
        public long Version { get; set; }
    }
}