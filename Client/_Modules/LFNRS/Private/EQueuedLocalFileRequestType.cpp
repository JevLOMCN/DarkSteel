// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 1

// ToString @ 146cb3440

wchar_t * __cdecl EQueuedLocalFileRequestType::ToString(Type param_1)

{
  switch(param_1) {
  case StartRecording:
    return L"StartRecording";
  case WriteHeader:
    return L"WriteHeader";
  case WritingHeader:
    return L"WritingHeader";
  case WritingStream:
    return L"WritingStream";
  case StopRecording:
    return L"StopRecording";
  case StartPlayback:
    return L"StartPlayback";
  case ReadingHeader:
    return L"ReadingHeader";
  case ReadingStream:
    return L"ReadingStream";
  case EnumeratingStreams:
    return L"EnumeratingStreams";
  case WritingCheckpoint:
    return L"WritingCheckpoint";
  case ReadingCheckpoint:
    return L"ReadingCheckpoint";
  case UpdatingEvent:
    return L"UpdatingEvent";
  case EnumeratingEvents:
    return L"EnumeratingEvents";
  case RequestingEvent:
    return L"RequestingEvent";
  case StopStreaming:
    return L"StopStreaming";
  case DeletingFinishedStream:
    return L"DeletingFinishedStream";
  case RefreshingLiveStream:
    return L"RefreshingLiveStream";
  case KeepReplay:
    return L"KeepReplay";
  case RenameReplay:
    return L"RenameReplay";
  case RenameReplayFriendlyName:
    return L"RenameReplayFriendlyName";
  default:
    return L"Unknown EQueuedLocalFileRequestType type.";
  }
}

