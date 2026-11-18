// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 2

// Broadcast<IBaseDelegateInstance<void___cdecl(TSharedPtr<IMessageBus,1>,TSharedPtr<FMessageEndpoint,1>),FDefaultDelegateUserPolicy>,TSharedPtr<IMessageBus,1>,TSharedPtr<FMessageEndpoint,1>_> @ 146304260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TSharedPtr<IMessageBus,1>,TSharedPtr<FMessageEndpoint,1>),FDefaultDelegateUserPolicy>,TSharedPtr<IMessageBus,1>,TSharedPtr<FMessageEndpoint,1>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TSharedPtr<IMessageBus,1> *param_1,TSharedPtr<FMessageEndpoint,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FMessageEndpoint *local_58;
  TReferenceControllerBase<1> *local_50;
  IMessageBus *local_48;
  TReferenceControllerBase<1> *local_40;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar9 = (this->InvocationList).ArrayNum - 1;
  if ((int)uVar9 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar8 = (longlong)(int)uVar9 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar8 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar8), plVar2 == (longlong *)0x0)) {
LAB_146304366:
        bVar4 = true;
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x68);
        local_58 = param_2->Object;
        local_50 = (param_2->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48 = param_1->Object;
        local_40 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar6 = (*pcVar3)(plVar2,&local_48,&local_58);
        if (cVar6 == '\0') goto LAB_146304366;
      }
      lVar8 = lVar8 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar4) {
      CompactInvocationList(this,false);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<FChaosVDSessionInfo,1>),FDefaultDelegateUserPolicy>,TWeakPtr<FChaosVDSessionInfo,1>_> @ 1463043f0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<FChaosVDSessionInfo,1>),FDefaultDelegateUserPolicy>,TWeakPtr<FChaosVDSessionInfo,1>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TWeakPtr<FChaosVDSessionInfo,1> *param_1)

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
LAB_1463044c9:
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
        if (cVar9 == '\0') goto LAB_1463044c9;
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

