using System.Runtime.CompilerServices;
using Serilog;
using Serilog.Events;
using Serilog.Formatting.Json;
using Serilog.Sinks.SystemConsole.Themes;

namespace M5.Core;

public class Logger
{
    // Verifica se está rodando em modo watch (dotnet watch)
    private static readonly bool IsWatchMode = !string.IsNullOrEmpty(Environment.GetEnvironmentVariable("DOTNET_WATCH"));
    private static readonly string LogDirectory = Path.Combine(AppContext.BaseDirectory, "logs");

    public const string Reset = "\u001b[0m";
    public const string Black = "\u001b[30m";
    public const string Red = "\u001b[31m";
    public const string Green = "\u001b[32m";
    public const string Yellow = "\u001b[33m";
    public const string Blue = "\u001b[34m";
    public const string Magenta = "\u001b[35m";
    public const string Cyan = "\u001b[36m";
    public const string White = "\u001b[37m";
    public const string BrightBlack = "\u001b[90m";
    public const string BrightRed = "\u001b[91m";
    public const string BrightGreen = "\u001b[92m";
    public const string BrightYellow = "\u001b[93m";
    public const string BrightBlue = "\u001b[94m";
    public const string BrightMagenta = "\u001b[95m";
    public const string BrightCyan = "\u001b[96m";
    public const string BrightWhite = "\u001b[97m";

    public static SystemConsoleTheme EmulatorTheme()
    {
        Dictionary<ConsoleThemeStyle, SystemConsoleThemeStyle> customThemeStyles = new()
        {
            {
                ConsoleThemeStyle.Text, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.White,
                }
            },
            {
                ConsoleThemeStyle.String, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.Gray,
                }
            },
            {
                ConsoleThemeStyle.Number, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.Cyan,
                }
            },
            {
                ConsoleThemeStyle.Boolean, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.Red,
                }
            },
            {
                ConsoleThemeStyle.LevelInformation, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.Green,
                }
            },
            {
                ConsoleThemeStyle.LevelDebug, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.Blue,
                }
            },
            {
                ConsoleThemeStyle.LevelWarning, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.Yellow,
                }
            },
            {
                ConsoleThemeStyle.LevelError, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.White,
                    Background = ConsoleColor.Red,
                }
            },
            {
                ConsoleThemeStyle.LevelFatal, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.White,
                    Background = ConsoleColor.DarkRed,
                }
            },
            {
                ConsoleThemeStyle.LevelVerbose, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.DarkGray
                }
            },
            {
                ConsoleThemeStyle.Scalar, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.White
                }
            },
            {
                ConsoleThemeStyle.SecondaryText, new SystemConsoleThemeStyle
                {
                    Foreground = ConsoleColor.DarkCyan
                }
            }
        };

        return new SystemConsoleTheme(customThemeStyles);
    }

    public static void ConfigureLogger()
    {
        var loggerConfig = new LoggerConfiguration()
            .MinimumLevel.Verbose()
            .MinimumLevel.Override("Microsoft", LogEventLevel.Error)
            .MinimumLevel.Override("System", LogEventLevel.Error)
            .Enrich.FromLogContext()
            .WriteTo.Console(
                outputTemplate: " {Timestamp:HH:mm:ss} | {Level:u3} | {Message:lj}{NewLine}{Exception}",
                theme: EmulatorTheme());

        // Always write a log file (next to the exe, in logs/). It used to require ASPNETCORE_ENVIRONMENT=Development, so servers
        // started from the DarkSteel Studio Servers page (no console, no env var) left no logs.
        loggerConfig.WriteTo.File(
            Path.Combine(LogDirectory, "log_.txt"),
            rollingInterval: RollingInterval.Day,
            outputTemplate: "{Timestamp:yyyy-MM-dd HH:mm:ss.fff} | {Level:u3} | {Message:lj}{NewLine}{Exception}{NewLine}");

        Log.Logger = loggerConfig.CreateLogger();
    }
    public static void Exception(Exception ex,
        [CallerFilePath] string filePath = "",
        [CallerLineNumber] int lineNumber = 0,
        [CallerMemberName] string memberName = "")
    {
        try
        {
            var threadId = Environment.CurrentManagedThreadId;
            var timestamp = DateTime.UtcNow;
            var stackTrace = new System.Diagnostics.StackTrace(ex, true);
            var frames = stackTrace.GetFrames() ?? Array.Empty<System.Diagnostics.StackFrame>();

            var detailedMessage = $@"[EXCEPTION LOG]
Timestamp: {timestamp:yyyy-MM-dd HH:mm:ss.fff}
Thread ID: {threadId}
Process ID: {Environment.ProcessId}

Exception Details:
Type: {ex.GetType().FullName}
Message: {ex.Message}
Source: {ex.Source}

Stack Trace:
{string.Join("\n", frames.Select((frame, index) => $"    {index}. {frame.GetMethod()?.DeclaringType?.FullName}.{frame.GetMethod()?.Name} in {Path.GetFileName(frame.GetFileName())}:{frame.GetFileLineNumber()}"))}

Inner Exceptions:";

            var currentEx = ex;
            var innerExCount = 0;
            while (currentEx.InnerException != null)
            {
                innerExCount++;
                currentEx = currentEx.InnerException;
                detailedMessage += $@"

Inner Exception #{innerExCount}:
Type: {currentEx.GetType().FullName}
Message: {currentEx.Message}
Source: {currentEx.Source}
Stack Trace:
{currentEx.StackTrace?.Replace("\n", "\n    ")}";
            }

            Log.Error(ex, detailedMessage);

            // Exception reports are written to the log folder (they used to go to Redis outside Development).
            SaveLogToFile(detailedMessage, timestamp);
        }
        catch (Exception logEx)
        {
            Console.WriteLine($"[Logger] Falha ao registrar exceção: {logEx.Message}");
        }
    }

    public static async Task ExceptionAsync(Exception ex,
        [CallerFilePath] string filePath = "",
        [CallerLineNumber] int lineNumber = 0,
        [CallerMemberName] string memberName = "")
    {
        try
        {
            var threadId = Environment.CurrentManagedThreadId;
            var timestamp = DateTime.UtcNow;
            var stackTrace = new System.Diagnostics.StackTrace(ex, true);
            var frames = stackTrace.GetFrames() ?? Array.Empty<System.Diagnostics.StackFrame>();

            var detailedMessage = new System.Text.StringBuilder();
            detailedMessage.AppendLine("[EXCEPTION LOG]");
            detailedMessage.AppendLine($"Timestamp: {timestamp:yyyy-MM-dd HH:mm:ss.fff}");
            detailedMessage.AppendLine($"Thread ID: {threadId}");
            detailedMessage.AppendLine($"Process ID: {Environment.ProcessId}");
            detailedMessage.AppendLine($"File: {filePath}");
            detailedMessage.AppendLine($"Line: {lineNumber}");
            detailedMessage.AppendLine($"Method: {memberName}");
            detailedMessage.AppendLine();
            detailedMessage.AppendLine("Exception Details:");
            detailedMessage.AppendLine($"Type: {ex.GetType().FullName}");
            detailedMessage.AppendLine($"Message: {ex.Message}");
            detailedMessage.AppendLine($"Source: {ex.Source}");
            detailedMessage.AppendLine();
            detailedMessage.AppendLine("Stack Trace:");

            foreach (var frame in frames)
            {
                var method = frame.GetMethod();
                if (method != null)
                {
                    detailedMessage.AppendLine($"    {method.DeclaringType?.FullName}.{method.Name} in {Path.GetFileName(frame.GetFileName())}:{frame.GetFileLineNumber()}");
                }
            }

            var currentEx = ex;
            var innerExCount = 0;
            while (currentEx.InnerException != null)
            {
                innerExCount++;
                currentEx = currentEx.InnerException;
                detailedMessage.AppendLine();
                detailedMessage.AppendLine($"Inner Exception #{innerExCount}:");
                detailedMessage.AppendLine($"Type: {currentEx.GetType().FullName}");
                detailedMessage.AppendLine($"Message: {currentEx.Message}");
                detailedMessage.AppendLine($"Source: {currentEx.Source}");
                detailedMessage.AppendLine("Stack Trace:");
                detailedMessage.AppendLine(currentEx.StackTrace?.Replace("\n", "\n    "));
            }

            var finalMessage = detailedMessage.ToString();
            Log.Error(ex, finalMessage);

            await SaveLogToFileAsync(finalMessage, timestamp);
        }
        catch (Exception logEx)
        {
            Console.WriteLine($"[Logger] Falha ao registrar exceção: {logEx.Message}");
        }
    }

    public static void Warning(string text, params (string text, ConsoleColor color)[] coloredParts)
    {
        if (coloredParts.Length == 0)
        {
            Log.Warning(text);
            return;
        }

        var coloredMessage = string.Join("", coloredParts.Select(p => $"{GetColorCode(p.color)}{p.text}{Reset}"));
        Log.Warning(coloredMessage);
    }

    public static void Info(string text, params (string text, ConsoleColor color)[] coloredParts)
    {
        if (coloredParts.Length == 0)
        {
            Log.Information(text);
            return;
        }

        var coloredMessage = string.Join("", coloredParts.Select(p => $"{GetColorCode(p.color)}{p.text}{Reset}"));
        Log.Information(coloredMessage);
    }    

    public static void Dbg(string text, params (string text, ConsoleColor color)[] coloredParts)
    {
        if (coloredParts.Length == 0)
        {
            Log.Debug(text);
            return;
        }

        var coloredMessage = string.Join("", coloredParts.Select(p => $"{GetColorCode(p.color)}{p.text}{Reset}"));
        Log.Debug(coloredMessage);
    }

    public static void Logo(string text)
    {
        Console.ForegroundColor = ConsoleColor.DarkCyan;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }


    public static void DarkGray(string text)
    {
        Log.Information(text);
        Console.ForegroundColor = ConsoleColor.DarkGray;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }

    public static void DarkCyan(string text)
    {
        Log.Information(text);
        Console.ForegroundColor = ConsoleColor.DarkCyan;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }


    public static void DarkYellow(string text)
    {
        //Log.Warning(text);
        Console.ForegroundColor = ConsoleColor.DarkYellow;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }

    public static void DarkGreen(string text)
    {
        Log.Information(text);
        Console.ForegroundColor = ConsoleColor.DarkGreen;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }


    public static void Error(string text)
    {
        Log.Error(text);
        Console.ForegroundColor = ConsoleColor.DarkRed;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }

    public static void DarkRed(string text)
    {
        Log.Error(text);
        Console.ForegroundColor = ConsoleColor.DarkRed;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }

    public static void DarkMagenta(string text)
    {
        Log.Information(text);
        Console.ForegroundColor = ConsoleColor.Magenta;
        Console.WriteLine($" {text}");
        Console.ResetColor();
    }

    public static void Recv(string text, string level = "RECV") => Log.ForContext("Level", level).Information(text);
    public static void Send(string text)
    {
        Log.ForContext("Level", "SEND").Information(text);
        // if (Config.Data.Logs.LogAck)
        // {
        Console.ForegroundColor = ConsoleColor.Green;
        Console.WriteLine($" {text}");
        // }
    }

    public static void Json(object msg, string desc = "")
    {
        try
        {
            // Configura o JsonSerializerOptions para ignorar valores nulos
            var options = new System.Text.Json.JsonSerializerOptions
            {
                DefaultIgnoreCondition = System.Text.Json.Serialization.JsonIgnoreCondition.WhenWritingNull,
                WriteIndented = true,
                ReferenceHandler = System.Text.Json.Serialization.ReferenceHandler.IgnoreCycles
            };

            // Serializa o objeto em JSON formatado (indentado), ignorando valores nulos
            string formattedJson = System.Text.Json.JsonSerializer.Serialize(msg, options);

            // Registra o JSON formatado no log
            Log.Information(
                    @"
                {@desc}
                {@FormattedJson}
                ",
                desc, formattedJson);
        }
        catch (Exception ex)
        {
            // Caso ocorra algum erro na serialização, registra a exceção
            Log.Error(ex, "Erro ao formatar JSON para o log.");
        }
    }

    public static void Hex(byte[] data)
    {
        Log.Debug($"{BitConverter.ToString(data).Replace("-", " ")}");
    }

    private static string GetColorCode(ConsoleColor color) => color switch
    {
        ConsoleColor.Black => Black,
        ConsoleColor.DarkBlue => Blue,
        ConsoleColor.DarkGreen => Green,
        ConsoleColor.DarkCyan => Cyan,
        ConsoleColor.DarkRed => Red,
        ConsoleColor.DarkMagenta => Magenta,
        ConsoleColor.DarkYellow => Yellow,
        ConsoleColor.Gray => White,
        ConsoleColor.DarkGray => BrightBlack,
        ConsoleColor.Blue => BrightBlue,
        ConsoleColor.Green => BrightGreen,
        ConsoleColor.Cyan => BrightCyan,
        ConsoleColor.Red => BrightRed,
        ConsoleColor.Magenta => BrightMagenta,
        ConsoleColor.Yellow => BrightYellow,
        ConsoleColor.White => BrightWhite,
        _ => White
    };

    /// <summary>
    /// Salva log em arquivo .txt (usado em watch mode)
    /// </summary>
    private static void SaveLogToFile(string message, DateTime timestamp)
    {
        try
        {
            if (!Directory.Exists(LogDirectory))
                Directory.CreateDirectory(LogDirectory);

            var fileName = $"error_{timestamp:yyyyMMdd}.txt";
            var filePath = Path.Combine(LogDirectory, fileName);

            var separator = new string('=', 80);
            var logEntry = $"\n{separator}\n[{timestamp:yyyy-MM-dd HH:mm:ss.fff}]\n{message}\n";
            File.AppendAllText(filePath, logEntry);
        }
        catch (Exception ex)
        {
            Console.WriteLine($"[Logger] Falha ao salvar log em arquivo: {ex.Message}");
        }
    }

    /// <summary>
    /// Salva log em arquivo .txt de forma assíncrona (usado em watch mode)
    /// </summary>
    private static async Task SaveLogToFileAsync(string message, DateTime timestamp)
    {
        try
        {
            if (!Directory.Exists(LogDirectory))
                Directory.CreateDirectory(LogDirectory);

            var fileName = $"error_{timestamp:yyyyMMdd}.txt";
            var filePath = Path.Combine(LogDirectory, fileName);

            var separator = new string('=', 80);
            var logEntry = $"\n{separator}\n[{timestamp:yyyy-MM-dd HH:mm:ss.fff}]\n{message}\n";
            await File.AppendAllTextAsync(filePath, logEntry);
        }
        catch (Exception ex)
        {
            Console.WriteLine($"[Logger] Falha ao salvar log em arquivo: {ex.Message}");
        }
    }
}
