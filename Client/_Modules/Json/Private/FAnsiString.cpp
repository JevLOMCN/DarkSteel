// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// Equals @ 141dd40a0

bool __thiscall FAnsiString::Equals(FAnsiString *this,FAnsiString *param_1,Type param_2)

{
  int iVar1;
  FScriptContainerElement *_Str2;
  FScriptContainerElement *_Str1;
  int iVar2;
  
  iVar2 = (this->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    _Str2 = (param_1->Data).AllocatorInstance.Data;
    _Str1 = (this->Data).AllocatorInstance.Data;
    if (param_2 == CaseSensitive) {
      iVar2 = strcmp((char *)_Str1,(char *)_Str2);
      return iVar2 == 0;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((char *)_Str1,(char *)_Str2);
    return iVar2 == 0;
  }
  return true;
}

