// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1472863e0

UScriptStruct * __cdecl FWorldPartitionResolveData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionResolveData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionResolveData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionResolveData,(UObject *)pUVar1,
                         L"WorldPartitionResolveData");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionResolveData.OuterSingleton;
}

// ResolveObject @ 148ada720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FWorldPartitionResolveData::ResolveObject
          (FWorldPartitionResolveData *this,UWorld *param_1,FSoftObjectPath *param_2,
          UObject **param_3)

{
  int iVar1;
  FString *pFVar2;
  FName FVar3;
  int iVar4;
  FString local_38;
  undefined1 local_28 [16];
  FString local_18;
  
  *param_3 = (UObject *)0x0;
  if ((param_1 != (UWorld *)0x0) &&
     ((((this->ContainerID).Guid.D != 0 || (this->ContainerID).Guid.C != 0) ||
      (this->ContainerID).Guid.B != 0) || (this->ContainerID).Guid.A != 0)) {
    local_28._0_8_ = (param_2->AssetPath).PackageName;
    local_28._8_8_ = (param_2->AssetPath).AssetName;
    if (((this->SourceWorldAssetPath).PackageName == (FName)local_28._0_8_) &&
       ((this->SourceWorldAssetPath).AssetName == (FName)local_28._8_8_)) {
      iVar1 = (param_2->SubPathString).Data.ArrayNum;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      pFVar2 = ::FString::ConstructFromPtrSize
                         (&local_18,(uchar *)(param_2->SubPathString).Data.AllocatorInstance.Data,
                          iVar4);
      if (&local_38 != pFVar2) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
        (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (pFVar2->Data).ArrayNum;
        local_38.Data.ArrayMax = (pFVar2->Data).ArrayMax;
        (pFVar2->Data).ArrayNum = 0;
        (pFVar2->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FWorldPartitionLevelHelper::AddActorContainerIDToSubPathString
                ((FString *)local_28,&this->ContainerID,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FVar3 = (FName)L"";
      if (local_28._8_4_ != 0) {
        FVar3 = (FName)local_28._0_8_;
      }
      UWorld::ResolveSubobject(param_1,(wchar_t *)FVar3,param_3,false);
      if ((FName)local_28._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_28._0_8_);
      }
      return true;
    }
  }
  return false;
}

