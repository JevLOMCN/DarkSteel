// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 1

// ToString @ 146cc91b0

wchar_t * __cdecl EQueuedHttpRequestType::ToString(Type param_1)

{
  switch(param_1) {
  case StartUploading:
    return L"StartUploading";
  case UploadingHeader:
    return L"UploadingHeader";
  case UploadingStream:
    return L"UploadingStream";
  case StopUploading:
    return L"StopUploading";
  case StartDownloading:
    return L"StartDownloading";
  case DownloadingHeader:
    return L"DownloadingHeader";
  case DownloadingStream:
    return L"DownloadingStream";
  case RefreshingViewer:
    return L"RefreshingViewer";
  case EnumeratingSessions:
    return L"EnumeratingSessions";
  case EnumeratingCheckpoints:
    return L"EnumeratingCheckpoints";
  case UploadingCheckpoint:
    return L"UploadingCheckpoint";
  case DownloadingCheckpoint:
    return L"DownloadingCheckpoint";
  case AddingUser:
    return L"AddingUser";
  case UploadingCustomEvent:
    return L"UploadingCustomEvent";
  case EnumeratingCustomEvent:
    return L"EnumeratingCustomEvent";
  case RequestEventData:
    return L"RequestEventData";
  case UploadHeader:
    return L"UploadHeader";
  case StopStreaming:
    return L"StopStreaming";
  case KeepReplay:
    return L"KeepReplay";
  default:
    return L"Unknown EQueuedHttpRequestType type.";
  }
}

