// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Matches @ 141fd7f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreRedirects::Private::FPrefixMatcher::Matches
          (FName param_1,FNameUtf8String *param_2,bool param_3)

{
  uchar *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_478 [32];
  FName local_458 [2];
  TStringBuilderBase<char8_t> local_448;
  uchar local_428 [1035];
  uchar local_1d [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_478;
  iVar2 = (int)(param_2->UTF8)._padding_;
  iVar4 = (int)(param_2->UTF8)._padding_;
  if ((param_1 != (FName)0x0) && (iVar4 != iVar2)) {
    local_448.Base = local_428;
    local_448.CurPos = local_428;
    local_448.End = local_1d;
    local_448.bIsDynamic = false;
    local_448.bIsExternal = false;
    local_458[0] = param_1;
    ::FName::AppendString(local_458,&local_448);
    puVar1 = (uchar *)(param_2->UTF8)._padding_;
    iVar2 = (int)(param_2->UTF8)._padding_ - (int)puVar1;
    iVar4 = (int)local_448.CurPos - (int)local_448.Base;
    if (iVar4 < iVar2) {
      iVar2 = iVar4;
    }
    iVar5 = 0;
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    if (((iVar4 == iVar5) &&
        (((iVar4 == 0 || (iVar5 == 0)) ||
         (iVar2 = FGenericPlatformStricmp::Strnicmp(local_448.Base,puVar1,(longlong)iVar5),
         iVar2 == 0)))) && (iVar4 == iVar5)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_448);
    return bVar3;
  }
  if (((param_1 == (FName)0x0) != (iVar4 == iVar2)) && ((iVar4 == iVar2 && (!param_3)))) {
    return false;
  }
  return true;
}

