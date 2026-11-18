// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// InjectInputs_External @ 148205280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAsyncPhysicsInputRewindCallback::InjectInputs_External
          (FAsyncPhysicsInputRewindCallback *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ENetMode EVar8;
  uint uVar9;
  APlayerController *pAVar10;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  FDestructionSentinel local_48;
  
  EVar8 = UWorld::InternalGetNetMode(this->World);
  iVar14 = param_1;
  if ((EVar8 == NM_Client) &&
     (pAVar10 = UWorld::GetFirstPlayerController(this->World), pAVar10 != (APlayerController *)0x0))
  {
    this_00 = FChaosSolversModule::GetModule();
    pIVar11 = FChaosSolversModule::GetSettingsProvider(this_00);
    cVar5 = (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11);
    if ((cVar5 == '\0') &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1886031104448659416>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\AsyncPhysicsInputComponent.cpp"
                           ,0x28,"Chaos::FPhysicsSolverBase::IsNetworkPhysicsPredictionEnabled()"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pAVar10->bNetworkPhysicsTickOffsetAssigned != false) {
      iVar14 = pAVar10->NetworkPhysicsTickOffset + param_1;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->DispatchPhysicsTick,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->DispatchPhysicsTick).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar12 = *(int *)&(this->DispatchPhysicsTick).field_0x10 - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar12 < *(int *)&(this->DispatchPhysicsTick).field_0x10) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->DispatchPhysicsTick).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar13) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,iVar14), cVar5 == '\0')) {
        bVar6 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  puVar1 = &(this->DispatchPhysicsTick).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->DispatchPhysicsTick,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// ProcessInputs_External @ 14820be60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAsyncPhysicsInputRewindCallback::ProcessInputs_External
          (FAsyncPhysicsInputRewindCallback *this,int param_1,
          TArray<Chaos::FSimCallbackInputAndObject,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  ENetMode EVar4;
  APlayerController *pAVar5;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar6;
  
  this->CachedServerFrame = param_1;
  EVar4 = UWorld::InternalGetNetMode(this->World);
  if ((EVar4 == NM_Client) &&
     (pAVar5 = UWorld::GetFirstPlayerController(this->World), pAVar5 != (APlayerController *)0x0)) {
    this_00 = FChaosSolversModule::GetModule();
    pIVar6 = FChaosSolversModule::GetSettingsProvider(this_00);
    cVar2 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    if ((cVar2 == '\0') &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1886031104448659381>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\AsyncPhysicsInputComponent.cpp"
                           ,0x4b,"Chaos::FPhysicsSolverBase::IsNetworkPhysicsPredictionEnabled()"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pAVar5->bNetworkPhysicsTickOffsetAssigned != false) {
      this->CachedServerFrame = pAVar5->NetworkPhysicsTickOffset + param_1;
    }
  }
  return;
}

// TriggerRewindIfNeeded_Internal @ 1482224c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FAsyncPhysicsInputRewindCallback::TriggerRewindIfNeeded_Internal
          (FAsyncPhysicsInputRewindCallback *this,int param_1)

{
  ENetMode EVar1;
  
  EVar1 = UWorld::InternalGetNetMode(this->World);
  if ((EVar1 == NM_Client) && (this->_padding_ != 0)) {
    return *(int *)(this->_padding_ + 0x4f4);
  }
  return -1;
}

