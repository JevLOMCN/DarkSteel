// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>,TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_> @ 14370b140

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>,TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar7 = false;
  uVar12 = (this->InvocationList).ArrayNum - 1;
  if ((int)uVar12 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar11 = (longlong)(int)uVar12 << 4;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->InvocationList).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar3 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar3 + lVar11 + 8) == 0) ||
         (plVar4 = *(longlong **)(pFVar3 + lVar11), plVar4 == (longlong *)0x0)) {
LAB_14370b219:
        bVar7 = true;
      }
      else {
        pcVar6 = *(code **)(*plVar4 + 0x68);
        pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
        }
        cVar9 = (*pcVar6)();
        if (cVar9 == '\0') goto LAB_14370b219;
      }
      lVar11 = lVar11 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar7) {
      CompactInvocationList(this,false);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

