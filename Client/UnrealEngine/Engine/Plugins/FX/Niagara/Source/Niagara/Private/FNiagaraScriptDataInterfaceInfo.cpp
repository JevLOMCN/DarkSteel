// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 148fe4740

UScriptStruct * __cdecl FNiagaraScriptDataInterfaceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptDataInterfaceInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScriptDataInterfaceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo,(UObject *)pUVar1
                         ,L"NiagaraScriptDataInterfaceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScriptDataInterfaceInfo.OuterSingleton;
}

// IsUserDataInterface @ 14905ae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraScriptDataInterfaceInfo::IsUserDataInterface(FNiagaraScriptDataInterfaceInfo *this)

{
  int iVar1;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  ::FName::ToString(&this->Name,&local_138);
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  iVar1 = FGenericPlatformStricmp::Strnicmp(local_138.Base,L"User.",5);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return iVar1 == 0;
}

