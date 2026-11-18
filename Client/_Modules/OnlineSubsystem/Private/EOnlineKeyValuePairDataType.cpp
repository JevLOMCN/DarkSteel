// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17c50

wchar_t * __cdecl EOnlineKeyValuePairDataType::ToString(Type param_1)

{
  switch(param_1) {
  case Empty:
    return L"Empty";
  case Int32:
    return L"Int32";
  case UInt32:
    return L"UInt32";
  case Int64:
    return L"Int64";
  case UInt64:
    return L"UInt64";
  case Double:
    return L"Double";
  case String:
    return L"String";
  case Float:
    return L"Float";
  case Blob:
    return L"Blob";
  case Bool:
    return L"Bool";
  case Json:
    return L"Json";
  default:
    return L"";
  }
}

