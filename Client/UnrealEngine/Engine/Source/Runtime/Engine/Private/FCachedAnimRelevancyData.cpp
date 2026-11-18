// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 14750e930

UScriptStruct * __cdecl FCachedAnimRelevancyData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimRelevancyData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCachedAnimRelevancyData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimRelevancyData,(UObject *)pUVar1,
                         L"CachedAnimRelevancyData");
  }
  return Z_Registration_Info_UScriptStruct_FCachedAnimRelevancyData.OuterSingleton;
}

// CacheIndices @ 14754b3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCachedAnimRelevancyData::CacheIndices(FCachedAnimRelevancyData *this,UAnimInstance *param_1)

{
  int iVar1;
  FBakedAnimationStateMachine *this_00;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (((this->bInitialized == false) &&
      (this->bInitialized = true, this->StateMachineName != (FName)0x0)) &&
     (this->StateName != (FName)0x0)) {
    if (this->MachineIndex == -1) {
      iVar1 = UAnimInstance::GetStateMachineIndex(param_1,this->StateMachineName);
      this->MachineIndex = iVar1;
      if ((iVar1 == -1) && (2 < (byte)LogAnimation._0_1_)) {
        if (param_1 == (UAnimInstance *)0x0) {
          ::FString::FString(&local_48,L"None");
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_res8.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_res8,&local_48);
        }
        ::FName::ToString(&this->StateMachineName,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((this->StateIndex == -1) &&
       (this_00 = UAnimInstance::GetStateMachineInstanceDesc(param_1,this->StateMachineName),
       this_00 != (FBakedAnimationStateMachine *)0x0)) {
      iVar1 = FBakedAnimationStateMachine::FindStateIndex(this_00,&this->StateName);
      this->StateIndex = iVar1;
      if ((iVar1 == -1) && (2 < (byte)LogAnimation._0_1_)) {
        if (param_1 == (UAnimInstance *)0x0) {
          ::FString::FString(&local_48,L"None");
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_res8.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_res8,&local_48);
        }
        ::FName::ToString(&this->StateMachineName,&local_28);
        ::FName::ToString(&this->StateName,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// GetRelevantAnimTime @ 14755ff60

float __thiscall
FCachedAnimRelevancyData::GetRelevantAnimTime(FCachedAnimRelevancyData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if ((this->MachineIndex != -1) && (this->StateIndex != -1)) {
    fVar1 = UAnimInstance::GetRelevantAnimTime(param_1,this->MachineIndex,this->StateIndex);
    return fVar1;
  }
  return 0.0;
}

// GetRelevantAnimTimeRemaining @ 14755ffb0

float __thiscall
FCachedAnimRelevancyData::GetRelevantAnimTimeRemaining
          (FCachedAnimRelevancyData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if ((this->MachineIndex != -1) && (this->StateIndex != -1)) {
    fVar1 = UAnimInstance::GetRelevantAnimTimeRemaining(param_1,this->MachineIndex,this->StateIndex)
    ;
    return fVar1;
  }
  return 0.0;
}

// GetRelevantAnimTimeRemainingFraction @ 147560000

float __thiscall
FCachedAnimRelevancyData::GetRelevantAnimTimeRemainingFraction
          (FCachedAnimRelevancyData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if ((this->MachineIndex != -1) && (this->StateIndex != -1)) {
    fVar1 = UAnimInstance::GetRelevantAnimTimeRemainingFraction
                      (param_1,this->MachineIndex,this->StateIndex);
    return fVar1;
  }
  return 0.0;
}

