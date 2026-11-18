// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14750e8f0

UScriptStruct * __cdecl FCachedAnimAssetPlayerData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimAssetPlayerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCachedAnimAssetPlayerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData,(UObject *)pUVar1,
                         L"CachedAnimAssetPlayerData");
  }
  return Z_Registration_Info_UScriptStruct_FCachedAnimAssetPlayerData.OuterSingleton;
}

// CacheIndices @ 14754b270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCachedAnimAssetPlayerData::CacheIndices(FCachedAnimAssetPlayerData *this,UAnimInstance *param_1)

{
  int iVar1;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->bInitialized == false) {
    this->bInitialized = true;
    if (this->StateMachineName != (FName)0x0) {
      if (this->StateName != (FName)0x0) {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        iVar1 = UAnimInstance::GetInstanceAssetPlayerIndex
                          (param_1,this->StateMachineName,this->StateName,(FName)0x0);
        this->Index = iVar1;
        if ((iVar1 == -1) && (2 < (byte)LogAnimation._0_1_)) {
          if (param_1 == (UAnimInstance *)0x0) {
            ::FString::FString(&local_38,L"None");
          }
          else {
            local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
            local_res8.Number = *(uint *)&param_1->field_0x1c;
            ::FName::ToString(&local_res8,&local_38);
          }
          ::FName::ToString(&this->StateMachineName,&local_18);
          ::FName::ToString(&this->StateName,&local_28);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// GetAssetPlayerTime @ 14755a500

float __thiscall
FCachedAnimAssetPlayerData::GetAssetPlayerTime
          (FCachedAnimAssetPlayerData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if (this->Index != -1) {
    fVar1 = UAnimInstance::GetInstanceAssetPlayerTime(param_1,this->Index);
    return fVar1;
  }
  return 0.0;
}

// GetAssetPlayerTimeRatio @ 14755a550

float __thiscall
FCachedAnimAssetPlayerData::GetAssetPlayerTimeRatio
          (FCachedAnimAssetPlayerData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if (this->Index != -1) {
    fVar1 = UAnimInstance::GetInstanceAssetPlayerTimeFraction(param_1,this->Index);
    return fVar1;
  }
  return 0.0;
}

