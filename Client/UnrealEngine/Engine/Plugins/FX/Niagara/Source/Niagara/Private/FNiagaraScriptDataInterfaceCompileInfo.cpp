// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 148fe4fb0

UScriptStruct * __cdecl FNiagaraScriptDataInterfaceCompileInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo,
                         (UObject *)pUVar1,L"NiagaraScriptDataInterfaceCompileInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo.OuterSingleton;
}

// CanExecuteOnTarget @ 149031b10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraScriptDataInterfaceCompileInfo::CanExecuteOnTarget
          (FNiagaraScriptDataInterfaceCompileInfo *this,ENiagaraSimTarget param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  UNiagaraDataInterface *pUVar2;
  FString local_18;
  
  pUVar2 = GetDefaultDataInterface(this);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x340);
                    /* WARNING: Could not recover jumptable at 0x000149031b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(pUVar2,param_1,UNRECOVERED_JUMPTABLE);
    return (bool)uVar1;
  }
  if (1 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&this->Name,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetDefaultDataInterface @ 149045ac0

/* WARNING: Enum "Type": Some values do not have unique names */

UNiagaraDataInterface * __thiscall
FNiagaraScriptDataInterfaceCompileInfo::GetDefaultDataInterface
          (FNiagaraScriptDataInterfaceCompileInfo *this)

{
  int iVar1;
  UNiagaraDataInterface *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  FName local_res8;
  FString local_18;
  
  bVar3 = FNiagaraTypeDefinition::IsDataInterface(&this->Type);
  if ((bVar3) && (pUVar4 = FNiagaraTypeDefinition::GetClass(&this->Type), pUVar4 != (UClass *)0x0))
  {
    pUVar2 = (UNiagaraDataInterface *)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar2 != (UNiagaraDataInterface *)0x0) {
      pUVar5 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar2;
      }
    }
    if ((byte)LogNiagara._0_1_ < 2) {
      return (UNiagaraDataInterface *)0x0;
    }
    local_res8 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    pFVar6 = &::LOG_Static;
  }
  else {
    if ((byte)LogNiagara._0_1_ < 2) {
      return (UNiagaraDataInterface *)0x0;
    }
    ::FName::ToString(&this->Name,&local_18);
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogNiagara);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (UNiagaraDataInterface *)0x0;
}

// MatchesClass @ 14905bb10

bool __thiscall
FNiagaraScriptDataInterfaceCompileInfo::MatchesClass
          (FNiagaraScriptDataInterfaceCompileInfo *this,UClass *param_1)

{
  UNiagaraDataInterface *pUVar1;
  
  pUVar1 = GetDefaultDataInterface(this);
  if (pUVar1 != (UNiagaraDataInterface *)0x0) {
    return (UClass *)pUVar1->_padding_ == param_1;
  }
  return false;
}

// NeedsPerInstanceBinding @ 14905bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraScriptDataInterfaceCompileInfo::NeedsPerInstanceBinding
          (FNiagaraScriptDataInterfaceCompileInfo *this)

{
  int iVar1;
  UNiagaraDataInterface *pUVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_888 [48];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  ::FName::ToString(&this->Name,&local_858);
  iVar1 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  if (((iVar4 == 5) &&
      (iVar1 = FGenericPlatformStricmp::Strnicmp(L"User.",local_858.Base,5), iVar1 == 0)) ||
     ((pUVar2 = GetDefaultDataInterface(this), pUVar2 != (UNiagaraDataInterface *)0x0 &&
      (iVar1 = (**(code **)(pUVar2->_padding_ + 0x328))(pUVar2), 0 < iVar1)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar3;
}

