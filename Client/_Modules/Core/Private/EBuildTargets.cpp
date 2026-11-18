// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FromString @ 14163d170

EBuildTargetType __cdecl EBuildTargets::FromString(FString *param_1)

{
  int iVar1;
  wchar_t *_Str1;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str1 = L"";
  }
  else {
    _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(_Str1,L"Editor");
  if (iVar1 == 0) {
    return Editor;
  }
  iVar1 = wcscmp(_Str1,L"Game");
  if (iVar1 == 0) {
    return Game;
  }
  iVar1 = wcscmp(_Str1,L"Server");
  if (iVar1 == 0) {
    return Server;
  }
  iVar1 = wcscmp(_Str1,L"Client");
  if (iVar1 == 0) {
    return Client;
  }
  iVar1 = wcscmp(_Str1,L"Program");
  if (iVar1 == 0) {
    return Program;
  }
  wcscmp(_Str1,L"Unknown");
  return Unknown;
}

// ToString @ 1416642d0

wchar_t * __cdecl EBuildTargets::ToString(EBuildTargetType param_1)

{
  if (param_1 == Game) {
    return L"Game";
  }
  if (param_1 == Server) {
    return L"Server";
  }
  if (param_1 == Client) {
    return L"Client";
  }
  if (param_1 != Editor) {
    if (param_1 != Program) {
      return L"Unknown";
    }
    return L"Program";
  }
  return L"Editor";
}

