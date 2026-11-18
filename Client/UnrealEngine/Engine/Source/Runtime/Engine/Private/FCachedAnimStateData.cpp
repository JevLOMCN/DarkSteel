// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 14750dce0

UScriptStruct * __cdecl FCachedAnimStateData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimStateData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCachedAnimStateData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateData,(UObject *)pUVar1,
                         L"CachedAnimStateData");
  }
  return Z_Registration_Info_UScriptStruct_FCachedAnimStateData.OuterSingleton;
}

// GetGlobalWeight @ 14755bf60

float __thiscall
FCachedAnimStateData::GetGlobalWeight(FCachedAnimStateData *this,UAnimInstance *param_1)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  bVar2 = IsValid(this,param_1);
  if (bVar2) {
    iVar1 = this->MachineIndex;
    fVar3 = UAnimInstance::GetInstanceStateWeight(param_1,iVar1,this->StateIndex);
    fVar4 = UAnimInstance::GetInstanceMachineWeight(param_1,iVar1);
    return fVar3 * fVar4;
  }
  return 0.0;
}

// GetWeight @ 1475637f0

float __thiscall FCachedAnimStateData::GetWeight(FCachedAnimStateData *this,UAnimInstance *param_1)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = IsValid(this,param_1);
  if (bVar1) {
    fVar2 = UAnimInstance::GetInstanceStateWeight(param_1,this->MachineIndex,this->StateIndex);
    return fVar2;
  }
  return 0.0;
}

// IsActiveState @ 14756a3e0

bool __thiscall
FCachedAnimStateData::IsActiveState(FCachedAnimStateData *this,UAnimInstance *param_1)

{
  bool bVar1;
  FName FVar2;
  undefined1 local_res18 [16];
  
  bVar1 = IsValid(this,param_1);
  if (bVar1) {
    FVar2 = UAnimInstance::GetCurrentStateName(param_1,(int)local_res18);
    return *(FName *)FVar2 == this->StateName;
  }
  return false;
}

// IsFullWeight @ 14756a940

bool __thiscall
FCachedAnimStateData::IsFullWeight(FCachedAnimStateData *this,UAnimInstance *param_1)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = IsValid(this,param_1);
  if (bVar1) {
    fVar2 = UAnimInstance::GetInstanceStateWeight(param_1,this->MachineIndex,this->StateIndex);
  }
  else {
    fVar2 = 0.0;
  }
  return __real_3f7fff58 <= fVar2;
}

// IsMachineRelevant @ 14756a9b0

float __thiscall
FCachedAnimStateData::IsMachineRelevant(FCachedAnimStateData *this,UAnimInstance *param_1)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = IsValid(this,param_1);
  if (bVar1) {
    fVar2 = UAnimInstance::GetInstanceMachineWeight(param_1,this->MachineIndex);
    bVar1 = __real_3727c5ac < fVar2;
  }
  else {
    bVar1 = false;
  }
  return (float)bVar1;
}

// IsRelevant @ 14756ad30

bool __thiscall FCachedAnimStateData::IsRelevant(FCachedAnimStateData *this,UAnimInstance *param_1)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = IsValid(this,param_1);
  if (bVar1) {
    fVar2 = UAnimInstance::GetInstanceStateWeight(param_1,this->MachineIndex,this->StateIndex);
  }
  else {
    fVar2 = 0.0;
  }
  return __real_3727c5ac < fVar2;
}

// IsValid @ 14756b250

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCachedAnimStateData::IsValid(FCachedAnimStateData *this,UAnimInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FBakedAnimationStateMachine *local_res8;
  FName local_res18;
  FName local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((this->bInitialized == false) &&
      (this->bInitialized = true, this->StateMachineName != (FName)0x0)) &&
     (this->StateName != (FName)0x0)) {
    local_res8 = (FBakedAnimationStateMachine *)0x0;
    UAnimInstance::GetStateMachineIndexAndDescription
              (param_1,this->StateMachineName,&this->MachineIndex,&local_res8);
    if (local_res8 == (FBakedAnimationStateMachine *)0x0) {
      if ((byte)LogAnimation._0_1_ < 3) goto LAB_14756b498;
      if (param_1 == (UAnimInstance *)0x0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res20.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res20,&local_78);
      }
      ::FName::ToString(&this->StateName,&local_38);
      ::FName::ToString(&this->StateMachineName,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      if ((this->MachineIndex == -1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("MachineIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\CachedAnimData.cpp"
                             ,0x16,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = FBakedAnimationStateMachine::FindStateIndex(local_res8,&this->StateName);
      this->StateIndex = iVar4;
      if ((iVar4 != -1) || ((byte)LogAnimation._0_1_ < 3)) goto LAB_14756b498;
      if (param_1 == (UAnimInstance *)0x0) {
        ::FString::FString(&local_88,L"None");
      }
      else {
        local_res18.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res18.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res18,&local_88);
      }
      ::FName::ToString(&this->StateMachineName,&local_58);
      ::FName::ToString(&this->StateName,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_78.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
LAB_14756b498:
  return this->StateIndex != -1;
}

// WasAnimNotifyStateActive @ 147582d10

bool __thiscall
FCachedAnimStateData::WasAnimNotifyStateActive
          (FCachedAnimStateData *this,UAnimInstance *param_1,TSubclassOf<UAnimNotifyState> param_2)

{
  bool bVar1;
  UObject *local_res20;
  
  bVar1 = IsValid(this,param_1);
  if (bVar1) {
    local_res20 = *(UObject **)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    bVar1 = UAnimInstance::WasAnimNotifyStateActiveInSourceState
                      (param_1,this->MachineIndex,this->StateIndex,
                       (TSubclassOf<UAnimNotifyState>)&local_res20);
    return bVar1;
  }
  return false;
}

