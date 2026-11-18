// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 14750e970

UScriptStruct * __cdecl FCachedAnimTransitionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimTransitionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCachedAnimTransitionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimTransitionData,(UObject *)pUVar1,
                         L"CachedAnimTransitionData");
  }
  return Z_Registration_Info_UScriptStruct_FCachedAnimTransitionData.OuterSingleton;
}

// CacheIndices @ 14754b600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCachedAnimTransitionData::CacheIndices(FCachedAnimTransitionData *this,UAnimInstance *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FBakedAnimationStateMachine *this_00;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  FName local_res20;
  FName local_a8;
  FName *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((((this->bInitialized == false) &&
       (this->bInitialized = true, this->StateMachineName != (FName)0x0)) &&
      (local_a0 = &this->FromStateName, this->FromStateName != (FName)0x0)) &&
     (this->ToStateName != (FName)0x0)) {
    if (this->MachineIndex == -1) {
      iVar5 = UAnimInstance::GetStateMachineIndex(param_1,this->StateMachineName);
      this->MachineIndex = iVar5;
      if ((iVar5 == -1) && (2 < (byte)LogAnimation._0_1_)) {
        if (param_1 == (UAnimInstance *)0x0) {
          ::FString::FString(&local_98,L"None");
        }
        else {
          local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_res20.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_res20,&local_98);
        }
        ::FName::ToString(&this->StateMachineName,&local_78);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((this->TransitionIndex == -1) &&
       (this_00 = UAnimInstance::GetStateMachineInstanceDesc(param_1,this->StateMachineName),
       this_00 != (FBakedAnimationStateMachine *)0x0)) {
      iVar5 = FBakedAnimationStateMachine::FindStateIndex(this_00,&this->ToStateName);
      iVar6 = FBakedAnimationStateMachine::FindStateIndex(this_00,&this->FromStateName);
      if ((iVar6 != -1) && (iVar5 != -1)) {
        iVar1 = (this_00->Transitions).ArrayNum;
        uVar10 = 0;
        if (0 < iVar1) {
          lVar9 = 0;
          lVar8 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar10 < (this_00->Transitions).ArrayNum) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this_00->Transitions).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar8 + 0x18) == iVar6) &&
               (*(int *)(pFVar2 + lVar8 + 0x1c) == iVar5)) {
              this->TransitionIndex = uVar10;
              if (uVar10 != 0xffffffff) {
                return;
              }
              goto LAB_14754b82e;
            }
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 1;
            lVar8 = lVar8 + 0x38;
          } while (lVar9 < iVar1);
        }
      }
      this->TransitionIndex = -1;
LAB_14754b82e:
      if (2 < (byte)LogAnimation._0_1_) {
        if (param_1 == (UAnimInstance *)0x0) {
          ::FString::FString(&local_88,L"None");
        }
        else {
          local_a8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_a8.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_a8,&local_88);
        }
        ::FName::ToString(&this->StateMachineName,&local_48);
        ::FName::ToString(&this->ToStateName,&local_58);
        ::FName::ToString(local_a0,&local_68);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// GetCrossfadeDuration @ 14755b4e0

float __thiscall
FCachedAnimTransitionData::GetCrossfadeDuration
          (FCachedAnimTransitionData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if ((this->MachineIndex != -1) && (this->TransitionIndex != -1)) {
    fVar1 = UAnimInstance::GetInstanceTransitionCrossfadeDuration
                      (param_1,this->MachineIndex,this->TransitionIndex);
    return fVar1;
  }
  return 0.0;
}

// GetTimeElapsed @ 147563200

float __thiscall
FCachedAnimTransitionData::GetTimeElapsed(FCachedAnimTransitionData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if ((this->MachineIndex != -1) && (this->TransitionIndex != -1)) {
    fVar1 = UAnimInstance::GetInstanceTransitionTimeElapsed
                      (param_1,this->MachineIndex,this->TransitionIndex);
    return fVar1;
  }
  return 0.0;
}

// GetTimeElapsedFraction @ 147563250

float __thiscall
FCachedAnimTransitionData::GetTimeElapsedFraction
          (FCachedAnimTransitionData *this,UAnimInstance *param_1)

{
  float fVar1;
  
  CacheIndices(this,param_1);
  if ((this->MachineIndex != -1) && (this->TransitionIndex != -1)) {
    fVar1 = UAnimInstance::GetInstanceTransitionTimeElapsedFraction
                      (param_1,this->MachineIndex,this->TransitionIndex);
    return fVar1;
  }
  return 0.0;
}

