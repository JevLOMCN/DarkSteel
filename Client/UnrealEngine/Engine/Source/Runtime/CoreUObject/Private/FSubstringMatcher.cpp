// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Matches @ 141fd8080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreRedirects::Private::FSubstringMatcher::Matches
          (FName param_1,FNameUtf8String *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_488 [32];
  TStringView<char8_t> local_468;
  TStringView<char8_t> local_458;
  TStringBuilderBase<char8_t> local_448;
  uchar local_428 [1035];
  uchar local_1d [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_488;
  iVar2 = (int)(param_2->UTF8)._padding_;
  iVar1 = (int)(param_2->UTF8)._padding_;
  if ((param_1 == (FName)0x0) || (iVar1 == iVar2)) {
    if (((param_1 == (FName)0x0) == (iVar1 == iVar2)) || ((iVar1 != iVar2 || (param_3)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    local_448.Base = local_428;
    local_448.CurPos = local_428;
    local_448.bIsDynamic = false;
    local_448.bIsExternal = false;
    local_448.End = local_1d;
    local_468.DataPtr = (uchar *)param_1;
    ::FName::AppendString((FName *)&local_468,&local_448);
    local_458.DataPtr = (uchar *)(param_2->UTF8)._padding_;
    local_468.Size = (int)local_448.CurPos - (int)local_448.Base;
    local_458.Size = (int)(param_2->UTF8)._padding_ - (int)local_458.DataPtr;
    local_468.DataPtr = local_448.Base;
    iVar2 = String::FindFirst(&local_458,&local_468,IgnoreCase);
    bVar3 = iVar2 != -1;
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_448);
  }
  return bVar3;
}

