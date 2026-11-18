// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool> @ 142f1ddb0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,float param_1,
          TWeakPtr<SWidget,1> *param_2,bool param_3,bool param_4)

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
  SWidget *local_68;
  TReferenceControllerBase<1> *local_60;
  FDestructionSentinel local_58 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)local_58);
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
LAB_142f1dec2:
        bVar7 = true;
      }
      else {
        pcVar6 = *(code **)(*plVar4 + 0x68);
        local_68 = param_2->Object;
        local_60 = (param_2->WeakReferenceCount).ReferenceController;
        if (local_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_60->WeakReferenceCount = (atomic<int>)((int)local_60->WeakReferenceCount + 1);
          UNLOCK();
        }
        cVar9 = (*pcVar6)(plVar4,param_1,&local_68,param_3,param_4);
        if (cVar9 == '\0') goto LAB_142f1dec2;
      }
      lVar11 = lVar11 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar7) {
      CompactInvocationList(this,false);
    }
  }
  if (local_58[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58[0].Accessor,local_58);
  }
  pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
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

