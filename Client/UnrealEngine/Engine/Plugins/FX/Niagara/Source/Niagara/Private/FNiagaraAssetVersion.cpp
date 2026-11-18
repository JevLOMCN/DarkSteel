// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14940cad0

UScriptStruct * __cdecl FNiagaraAssetVersion::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraAssetVersion.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraAssetVersion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetVersion,(UObject *)pUVar1,
                         L"NiagaraAssetVersion");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraAssetVersion.OuterSingleton;
}

// CreateStableVersionGuid @ 14943f9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __cdecl
FNiagaraAssetVersion::CreateStableVersionGuid(FGuid *__return_storage_ptr__,UObject *param_1)

{
  undefined1 auStack_2c8 [32];
  FMD5 local_2a8;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  uint local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if (param_1 == (UObject *)0x0) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
  }
  else {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_248.Base = local_228;
    local_248.bIsDynamic = false;
    local_248.bIsExternal = false;
    local_248.CurPos = local_228;
    local_248.End = (wchar_t *)local_28;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,(UObject *)0x0,&local_248);
    FMD5::FMD5(&local_2a8);
    FMD5::Update(&local_2a8,(uchar *)local_248.Base,
                 (longlong)(int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1) * 2);
    FMD5::Final(&local_2a8,(uchar *)local_28);
    FMD5::~FMD5(&local_2a8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
    __return_storage_ptr__->A = local_28[0];
    __return_storage_ptr__->B = local_28[1];
    __return_storage_ptr__->C = local_28[2];
    __return_storage_ptr__->D = local_28[3];
  }
  return __return_storage_ptr__;
}

