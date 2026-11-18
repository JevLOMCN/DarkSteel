// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FNetConnectionFaultRecoveryBase @ 147fa8fa0

void __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::~FNetConnectionFaultRecoveryBase
          (FNetConnectionFaultRecoveryBase *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UE::Net::FNetResultHandler_*> FVar3;
  ForElementType<unsigned_int> FVar4;
  TPimplPtr<UE::Net::FNetResult,1> TVar5;
  longlong *plVar6;
  
  if (*(longlong *)&(this->FaultManager).UnhandledResultCallback != 0) {
    plVar1 = *(longlong **)&(this->FaultManager).UnhandledResultCallback.field_0x28;
    plVar6 = (longlong *)&(this->FaultManager).UnhandledResultCallback.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  DestructItems<TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_>,int>
            ((TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_> *)
             (this->FaultManager).OwnedResultHandlers.AllocatorInstance.Data,
             (this->FaultManager).OwnedResultHandlers.ArrayNum);
  pFVar2 = (this->FaultManager).OwnedResultHandlers.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->FaultManager).ResultHandlers.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->TrackedFaultEnumHashes).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TVar5 = this->TrackedFaults;
  if (TVar5 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)TVar5 + -0x10))((longlong)TVar5 + -0x10);
  }
  pFVar2 = (this->PendingCategories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDefaultDelete<UE::Net::TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>_>
  ::operator()(&this->NetFaultEscalationManager,(this->NetFaultEscalationManager).Ptr);
  return;
}

// InitEscalationManager @ 147fdf490

void __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::InitEscalationManager
          (FNetConnectionFaultRecoveryBase *this)

{
  return;
}

