// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FEscalationManager @ 148017da0

void __thiscall UE::Net::FEscalationManager::~FEscalationManager(FEscalationManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->CountersPerSecHistoryAlloc).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CountersPerSecHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->State);
  if (*(longlong *)&this->NotifySeverityUpdate != 0) {
    plVar2 = *(longlong **)&(this->NotifySeverityUpdate).field_0x28;
    plVar3 = (longlong *)&(this->NotifySeverityUpdate).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->ManagerContext).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetFrameCounter @ 148035790

FEscalationCounter * __thiscall
UE::Net::FEscalationManager::GetFrameCounter(FEscalationManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEscalationCounter *pFVar4;
  
  if (this->NumCounters <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CounterIndex < NumCounters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Connection\\EscalationStates.h"
                       ,499,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEscalationCounter *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->FrameCounters).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEscalationCounter *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (this->FrameCounters).DataPtr + param_1;
}

