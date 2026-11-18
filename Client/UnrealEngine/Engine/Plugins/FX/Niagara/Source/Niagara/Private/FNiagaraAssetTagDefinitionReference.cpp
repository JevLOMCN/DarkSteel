// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 148fe4780

UScriptStruct * __cdecl FNiagaraAssetTagDefinitionReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraAssetTagDefinitionReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraAssetTagDefinitionReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference,
                         (UObject *)pUVar1,L"NiagaraAssetTagDefinitionReference");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraAssetTagDefinitionReference.OuterSingleton;
}

// FNiagaraAssetTagDefinitionReference @ 149021ac0

FNiagaraAssetTagDefinitionReference * __thiscall
FNiagaraAssetTagDefinitionReference::FNiagaraAssetTagDefinitionReference
          (FNiagaraAssetTagDefinitionReference *this,FNiagaraAssetTagDefinition *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (this->AssetTagDefinitionGuid).A = 0;
  (this->AssetTagDefinitionGuid).B = 0;
  (this->AssetTagDefinitionGuid).C = 0;
  (this->AssetTagDefinitionGuid).D = 0;
  uVar1 = (param_1->TagGuid).B;
  uVar2 = (param_1->TagGuid).C;
  uVar3 = (param_1->TagGuid).D;
  (this->AssetTagDefinitionGuid).A = (param_1->TagGuid).A;
  (this->AssetTagDefinitionGuid).B = uVar1;
  (this->AssetTagDefinitionGuid).C = uVar2;
  (this->AssetTagDefinitionGuid).D = uVar3;
  return this;
}

// AddTagToAssetRegistryTags @ 14902bc60

void __thiscall
FNiagaraAssetTagDefinitionReference::AddTagToAssetRegistryTags
          (FNiagaraAssetTagDefinitionReference *this,FAssetRegistryTagsContext *param_1)

{
  FName *pFVar1;
  FAssetRegistryTag *pFVar2;
  int iVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FAssetRegistryTag local_38;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FGuid::AppendString(&this->AssetTagDefinitionGuid,&local_58,DigitsWithHyphens);
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar1 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                          FNAME_Add);
  pFVar2 = FAssetRegistryTagsContext::FindTag(param_1,*pFVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (pFVar2 == (FAssetRegistryTag *)0x0) {
    ::FString::FString(&local_58,"  ");
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FGuid::AppendString(&this->AssetTagDefinitionGuid,&local_48,DigitsWithHyphens);
    iVar3 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar1 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                            FNAME_Add);
    local_38.Name = *pFVar1;
    local_38.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_38.Value.Data.ArrayNum = local_58.Data.ArrayNum;
    local_38.Value.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Type = TT_Alphabetical;
    local_38.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag(param_1,&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetGuidAsString @ 149046d50

FString * __thiscall
FNiagaraAssetTagDefinitionReference::GetGuidAsString
          (FNiagaraAssetTagDefinitionReference *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&this->AssetTagDefinitionGuid,__return_storage_ptr__,DigitsWithHyphens);
  return __return_storage_ptr__;
}

