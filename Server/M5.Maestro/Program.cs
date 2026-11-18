using M5.Core;
using Serilog;

/// <summary>
/// Maestro: the service-orchestration / admin web host. The Mir 4 admin controllers (atlas data browsers, accounts and
/// characters on Postgres) were removed together with the MirMobile library; for Mir 5 it only serves a health endpoint
/// until Mir 5 admin features are added. Same port as before (2025).
/// </summary>
try
{
    Logger.ConfigureLogger();
    Logger.Logo($"DarkSteel Mir 5 maestro | {DateTime.Now}");

    Config.Load();
    await Engine.InitializeAsync();

    var builder = WebApplication.CreateBuilder(args);
    builder.Logging.ClearProviders();
    builder.Logging.AddSerilog();
    builder.Services.AddControllers();

    var app = builder.Build();
    app.MapGet("/health/live", () => Results.Ok("live"));
    app.MapControllers();

    var url = $"http://{Config.Data.IpAddress}:2025";
    builder.WebHost.UseUrls(url);
    Logger.Info($"[WebServer] Maestro started on {url} ({DateTime.Now})");
    app.Run();
}
catch (Exception ex)
{
    Console.WriteLine("Fatal error during startup:");
    Console.WriteLine(ex.Message);
    Logger.Exception(ex, "Fatal error during startup");
    Console.ReadLine();
}