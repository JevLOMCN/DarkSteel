// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 148fe4f70

UScriptStruct * __cdecl FNiagaraScriptResolvedDataInterfaceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptResolvedDataInterfaceInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScriptResolvedDataInterfaceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptResolvedDataInterfaceInfo,
                         (UObject *)pUVar1,L"NiagaraScriptResolvedDataInterfaceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScriptResolvedDataInterfaceInfo.OuterSingleton;
}

// FNiagaraScriptResolvedDataInterfaceInfo @ 149022c60

FNiagaraScriptResolvedDataInterfaceInfo * __thiscall
FNiagaraScriptResolvedDataInterfaceInfo::FNiagaraScriptResolvedDataInterfaceInfo
          (FNiagaraScriptResolvedDataInterfaceInfo *this)

{
  int iVar1;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->CompileName).ComparisonIndex = 0;
  (this->CompileName).Number = 0;
  (this->ResolvedSourceEmitterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedSourceEmitterName).Data.ArrayNum = 0;
  (this->ResolvedSourceEmitterName).Data.ArrayMax = 0;
  (this->ResolvedVariable).Name.ComparisonIndex = 0;
  (this->ResolvedVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ResolvedVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->ResolvedVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->ParameterStoreVariable).Name.ComparisonIndex = 0;
  (this->ParameterStoreVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ParameterStoreVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def)
  ;
  (this->ParameterStoreVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  this->bIsInternal = false;
  (this->ResolvedDataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  this->UserPtrIdx = -1;
  return this;
}

// NeedsPerInstanceBinding @ 14905bc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraScriptResolvedDataInterfaceInfo::NeedsPerInstanceBinding
          (FNiagaraScriptResolvedDataInterfaceInfo *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
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
  ::FName::ToString(&(this->ResolvedVariable).Name,&local_858);
  iVar1 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  if ((iVar3 == 5) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(L"User.",local_858.Base,5), iVar1 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar2;
}

