using M5.Core;
using Serilog;
using System.Net;

/// <summary>
/// Mir 5 Gateway: the HTTP(S) API the client bootstraps against (server list, URLs, login, character/world info).
/// Controllers/Patcher/DevServerListController serves /api/get_dev_server_list and /api/urls,
/// Controllers/Mir5/Mir5ApiController serves the game API. The Mir 4 login queue, front sockets, Redis auth,
/// payment, coupons and Postgres services were removed with the MirMobile library.
/// </summary>
public static class Program
{
    public static async Task Main(string[] args)
    {
        Logger.ConfigureLogger();
        Logger.Logo($"DarkSteel Mir 5 gateway | {DateTime.Now}");

        AppDomain.CurrentDomain.UnhandledException += (sender, e) =>
        {
            Logger.Exception(e.ExceptionObject as Exception, "[Global] Unhandled exception");
        };
        TaskScheduler.UnobservedTaskException += (sender, e) =>
        {
            Logger.Exception(e.Exception, "[Global] Unobserved task exception");
        };

        await EarlyLoading();

        Logger.Info("====================================================================");
        Logger.Info($"[Gateway] API PORT: {Config.Data.AuthPort}");
        Logger.Info($"[Gateway] VERSION: {Config.Data.Client.Version}");
        Logger.Info("====================================================================");

        StartWebServer(args);
    }

    private static async Task EarlyLoading()
    {
        Logger.Info($"[EarlyLoading] Current Directory: {Directory.GetCurrentDirectory()}");
        Logger.Info($"[EarlyLoading] Base Directory: {AppContext.BaseDirectory}");

        try
        {
            Config.Load();
        }
        catch (Exception ex)
        {
            Logger.Exception(ex, "[EarlyLoading] Config.Load failed (continuing in fail-safe mode)");
        }

        var mysqlError = await M5.Database.Mysql.DsDatabase.VerifyAsync();
        if (mysqlError != null)
            Logger.Error($"[MySQL] {mysqlError}");
    }

    private static void StartWebServer(string[] args)
    {
        var builder = WebApplication.CreateBuilder(args);

        // HTTP API on AuthPort, plus HTTPS on 443 when Config/dev-cert.pfx exists. The Mir 5 client's bootstrap
        // requests go to https://mir5-master-config.azurewebsites.net/api/... (see DevServerListController);
        // with that name mapped to this machine in the hosts file, this certificate lets those requests reach us.
        var apiPort = Config.Data.AuthPort > 0 ? (int)Config.Data.AuthPort : 7000;
        var devCert = Engine.FindWorkspaceFile(Path.Combine("Config", "dev-cert.pfx"));
        builder.WebHost.ConfigureKestrel(o =>
        {
            o.Listen(IPAddress.Loopback, apiPort);
            if (devCert != null)
                o.Listen(IPAddress.Loopback, 443, l => l.UseHttps(devCert, "dev"));
        });
        Logger.Info(devCert != null
            ? $"[WebServer] HTTPS enabled on 443 using {Path.GetFileName(devCert)}"
            : "[WebServer] HTTPS disabled (Config/dev-cert.pfx not found)");

        // Reuse the global logger configured by Logger.ConfigureLogger().
        builder.Host.UseSerilog(Log.Logger, dispose: false);
        builder.Logging.ClearProviders();
        builder.Logging.AddSerilog();

        builder.Services.AddControllers();

        var app = builder.Build();
        app.UseSerilogRequestLogging();

        app.MapGet("/health/live", () => Results.Ok("live"));
        app.MapGet("/health/ready", () => Results.Ok("ready"));
        app.MapControllers();

        Logger.Info($"[WebServer] API started on http://127.0.0.1:{apiPort} ({DateTime.Now})");
        app.Run();
    }
}