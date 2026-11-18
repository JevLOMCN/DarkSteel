// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17ad0

wchar_t * __cdecl EOnlineComparisonOp::ToString(Type param_1)

{
  switch(param_1) {
  case Equals:
    return L"Equals";
  case NotEquals:
    return L"NotEquals";
  case GreaterThan:
    return L"GreaterThan";
  case GreaterThanEquals:
    return L"GreaterThanEquals";
  case LessThan:
    return L"LessThan";
  case LessThanEquals:
    return L"LessThanEquals";
  case Near:
    return L"Near";
  case In:
    return L"In";
  case NotIn:
    return L"NotIn";
  default:
    return L"";
  }
}

