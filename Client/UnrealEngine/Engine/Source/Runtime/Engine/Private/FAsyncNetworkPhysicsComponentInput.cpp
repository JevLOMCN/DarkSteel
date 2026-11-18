// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Reset @ 14831deb0

void __thiscall FAsyncNetworkPhysicsComponentInput::Reset(FAsyncNetworkPhysicsComponentInput *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FNetworkPhysicsDataHelper *pFVar4;
  longlong *plVar5;
  FBaseRewindHistory *pFVar6;
  
  if ((this->bIsLocallyControlled).bIsSet != false) {
    (this->bIsLocallyControlled).bIsSet = false;
  }
  if ((this->NetMode).bIsSet != false) {
    (this->NetMode).bIsSet = false;
  }
  if ((this->NetRole).bIsSet != false) {
    (this->NetRole).bIsSet = false;
  }
  if ((this->NetworkPhysicsTickOffset).bIsSet != false) {
    (this->NetworkPhysicsTickOffset).bIsSet = false;
  }
  if ((this->InputsToNetwork_Owner).bIsSet != false) {
    (this->InputsToNetwork_Owner).bIsSet = false;
  }
  if ((this->PhysicsReplicationMode).bIsSet != false) {
    (this->PhysicsReplicationMode).bIsSet = false;
  }
  if ((this->ActorComponent).bIsSet != false) {
    (this->ActorComponent).bIsSet = false;
  }
  if ((this->ImplementationInterface_Internal).bIsSet != false) {
    (this->ImplementationInterface_Internal).bIsSet = false;
  }
  if ((this->PhysicsObject).bIsSet != false) {
    (this->PhysicsObject).bIsSet = false;
  }
  if (*(int *)((longlong)&(this->ActorName).field0_0x0 + 0xc) != -1) {
    pFVar3 = (this->ActorName).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->ActorName).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->ActorName).field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(this->ActorName).field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((this->InputHelper).bIsSet != false) {
    pFVar4 = (this->InputHelper).TypedValue.Ptr;
    if (pFVar4 != (FNetworkPhysicsDataHelper *)0x0) {
      (**(code **)*pFVar4)(pFVar4,1);
    }
    (this->InputHelper).bIsSet = false;
  }
  if ((this->StateHelper).bIsSet != false) {
    pFVar4 = (this->StateHelper).TypedValue.Ptr;
    if (pFVar4 != (FNetworkPhysicsDataHelper *)0x0) {
      (**(code **)*pFVar4)(pFVar4,1);
    }
    (this->StateHelper).bIsSet = false;
  }
  if ((this->bRegisterDataHistoryInRewindData).bIsSet != false) {
    (this->bRegisterDataHistoryInRewindData).bIsSet = false;
  }
  if ((this->bUnregisterDataHistoryFromRewindData).bIsSet != false) {
    (this->bUnregisterDataHistoryFromRewindData).bIsSet = false;
  }
  if ((this->bCompareStateToTriggerRewind).bIsSet != false) {
    (this->bCompareStateToTriggerRewind).bIsSet = false;
  }
  if ((this->bCompareStateToTriggerRewindIncludeSimProxies).bIsSet != false) {
    (this->bCompareStateToTriggerRewindIncludeSimProxies).bIsSet = false;
  }
  if ((this->bCompareInputToTriggerRewind).bIsSet != false) {
    (this->bCompareInputToTriggerRewind).bIsSet = false;
  }
  if ((this->SettingsComponent).field0_0x0.TypedValue.Object !=
      (FNetworkPhysicsSettingsData *)0xffffffffffffffff) {
    plVar5 = *(longlong **)((longlong)&(this->SettingsComponent).field0_0x0 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    (this->SettingsComponent).field0_0x0.TypedValue.Object =
         (FNetworkPhysicsSettingsData *)0xffffffffffffffff;
    (this->SettingsComponent).field0_0x0.TypedValue.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  pFVar6 = (this->InputData).Ptr;
  if (pFVar6 != (FBaseRewindHistory *)0x0) {
    (**(code **)((longlong)*pFVar6 + 0x108))(pFVar6,0);
    (**(code **)((longlong)*(this->InputData).Ptr + 0x110))();
  }
  pFVar6 = (this->StateData).Ptr;
  if (pFVar6 != (FBaseRewindHistory *)0x0) {
    (**(code **)((longlong)*pFVar6 + 0x108))(pFVar6,0);
    (**(code **)((longlong)*(this->StateData).Ptr + 0x110))();
  }
  piVar1 = &(this->InputDataImportant).ArrayMax;
  pFVar3 = (this->InputDataImportant).AllocatorInstance.Data;
  iVar2 = (this->InputDataImportant).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               pFVar3,iVar2);
    (this->InputDataImportant).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->InputDataImportant).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               pFVar3,iVar2);
    (this->InputDataImportant).ArrayNum = 0;
  }
  piVar1 = &(this->StateDataImportant).ArrayMax;
  pFVar3 = (this->StateDataImportant).AllocatorInstance.Data;
  iVar2 = (this->StateDataImportant).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               pFVar3,iVar2);
    (this->StateDataImportant).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->StateDataImportant).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               pFVar3,iVar2);
    (this->StateDataImportant).ArrayNum = 0;
  }
  return;
}

