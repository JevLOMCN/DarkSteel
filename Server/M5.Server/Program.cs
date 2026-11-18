using M5.Core;
using M5.Server.Network.Mir5;

/// <summary>
/// Mir 5 game server: loads the data tables and serves the client's game TCP connection (Network/Mir5).
/// The Mir 4 world/dominion/guild managers and the internal server sockets were removed with the MirMobile library.
/// </summary>
public static class Program
{
    public static async Task Main(string[] args)
    {
        Logger.ConfigureLogger();
        try
        {
            Logger.Logo($"DarkSteel Mir 5 game server | {DateTime.Now}");
            AppDomain.CurrentDomain.UnhandledException += (sender, e) =>
            {
                Logger.Exception(e.ExceptionObject as Exception, "[Global] Unhandled exception");
            };
            TaskScheduler.UnobservedTaskException += (sender, e) =>
            {
                Logger.Exception(e.Exception, "[Global] Unobserved task exception");
            };

            await EarlyLoading();

            Logger.Info($"Settings loaded Version: {Config.Data.Client.Version} World: {Config.Data.world}");

            // Runs the accept loop for the lifetime of the process.
            await Mir5GameServer.StartAsync();
        }
        catch (Exception ex)
        {
            Logger.Exception(ex, "[Main] Fatal error in the game server");
            Thread.Sleep(5000);
        }
    }

    private static async Task EarlyLoading()
    {
        Logger.Info($"[EarlyLoading] Current Directory: {Directory.GetCurrentDirectory()}");
        Logger.Info($"[EarlyLoading] Base Directory: {AppContext.BaseDirectory}");

        Config.Load();
        var mysqlError = await M5.Database.Mysql.DsDatabase.VerifyAsync();
        if (mysqlError != null)
            Logger.Error($"[MySQL] {mysqlError}");

        await Engine.InitializeAsync();
        Logger.Info("All data is loaded.");
    }
}