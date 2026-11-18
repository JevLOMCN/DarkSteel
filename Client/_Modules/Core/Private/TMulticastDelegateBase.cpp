// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// CompactInvocationList @ 14148c9e0

void __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  if ((this->InvocationListLockCount < 1) &&
     ((piVar1 = &this->CompactionThreshold, !param_1 ||
      (*piVar1 = *piVar1 + -1, *piVar1 <= (this->InvocationList).ArrayNum)))) {
    uVar10 = 0;
    iVar2 = (this->InvocationList).ArrayNum;
    iVar12 = iVar2;
    if (0 < iVar2) {
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (this->InvocationList).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar3 + lVar11 + 8) == 0) ||
            (plVar4 = *(longlong **)(pFVar3 + lVar11), plVar4 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar4 + 0x30))(), cVar7 != '\0')) {
          uVar8 = 0;
          if ((int)uVar10 < (this->InvocationList).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
          ::RemoveAtSwapImpl(&this->InvocationList,uVar10);
        }
        else {
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x10;
        }
        iVar12 = (this->InvocationList).ArrayNum;
      } while ((int)uVar10 < iVar12);
    }
    iVar9 = iVar12 * 2;
    if (iVar9 < 2) {
      iVar9 = 2;
    }
    this->CompactionThreshold = iVar9;
    if (iVar9 < iVar2) {
      if ((this->InvocationList).ArrayMax != iVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,&(this->InvocationList).AllocatorInstance,iVar12,
                   &(this->InvocationList).ArrayMax);
      }
    }
  }
  return;
}

// RemoveAll @ 1414ad860

int __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,void *param_1)

{
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *this_00;
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  void *local_res10;
  
  local_res10 = param_1;
  if ((this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar6 = 0;
  if (this->InvocationListLockCount < 1) {
    iVar12 = (this->InvocationList).ArrayNum;
    this_00 = &this->InvocationList;
    uVar9 = 0;
    if (0 < iVar12) {
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->InvocationList).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        pFVar10 = (this_00->AllocatorInstance).Data;
        if ((((*(int *)(pFVar10 + lVar13 + 8) == 0) ||
             (plVar2 = *(longlong **)(pFVar10 + lVar13), plVar2 == (longlong *)0x0)) ||
            (cVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,local_res10), cVar5 != '\0')) ||
           (cVar5 = (**(code **)(*plVar2 + 0x30))(plVar2), cVar5 != '\0')) {
          uVar7 = 0;
          if ((int)uVar9 < (this->InvocationList).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
          ::RemoveAtSwapImpl(this_00,uVar9);
          iVar6 = iVar6 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
          lVar13 = lVar13 + 0x10;
        }
        iVar12 = (this->InvocationList).ArrayNum;
      } while ((int)uVar9 < iVar12);
    }
    iVar8 = iVar12 * 2;
    if (iVar8 < 2) {
      iVar8 = 2;
    }
    this->CompactionThreshold = iVar8;
    piVar1 = &(this->InvocationList).ArrayMax;
    if (*piVar1 != iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,&this_00->AllocatorInstance,iVar12,piVar1);
    }
  }
  else {
    iVar12 = (this->InvocationList).ArrayNum;
    pFVar10 = (this->InvocationList).AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)iVar12 * 0x10;
    while( true ) {
      if ((this->InvocationList).ArrayNum != iVar12) {
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar11) break;
      if (((*(int *)&pFVar10[8].field_0x0 != 0) &&
          (*(longlong **)&pFVar10->field_0x0 != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)&pFVar10->field_0x0 + 0x28))(), cVar5 != '\0')) {
        if ((*(int *)&pFVar10[8].field_0x0 != 0) &&
           (*(undefined8 **)&pFVar10->field_0x0 != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)&pFVar10->field_0x0)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)pFVar10,0,0,0x10);
          *(undefined4 *)&pFVar10[8].field_0x0 = 0;
        }
        iVar6 = iVar6 + 1;
      }
      pFVar10 = pFVar10 + 0x10;
    }
    if (0 < iVar6) {
      this->CompactionThreshold = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return iVar6;
}

// CompactInvocationList @ 1415b0e60

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  if ((this->InvocationListLockCount < 1) &&
     ((piVar1 = &this->CompactionThreshold, !param_1 ||
      (*piVar1 = *piVar1 + -1, *piVar1 <= (this->InvocationList).ArrayNum)))) {
    uVar10 = 0;
    iVar2 = (this->InvocationList).ArrayNum;
    iVar12 = iVar2;
    if (0 < iVar2) {
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (this->InvocationList).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar3 + lVar11 + 8) == 0) ||
            (plVar4 = *(longlong **)(pFVar3 + lVar11), plVar4 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar4 + 0x30))(), cVar7 != '\0')) {
          uVar8 = 0;
          if ((int)uVar10 < (this->InvocationList).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
          ::RemoveAtSwapImpl(&this->InvocationList,uVar10);
        }
        else {
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x10;
        }
        iVar12 = (this->InvocationList).ArrayNum;
      } while ((int)uVar10 < iVar12);
    }
    iVar9 = iVar12 * 2;
    if (iVar9 < 2) {
      iVar9 = 2;
    }
    this->CompactionThreshold = iVar9;
    if (iVar9 < iVar2) {
      if ((this->InvocationList).ArrayMax != iVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,&(this->InvocationList).AllocatorInstance,iVar12,
                   &(this->InvocationList).ArrayMax);
      }
    }
  }
  return;
}

// RemoveDelegateInstance @ 141657910

bool __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,FDelegateHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong64 *puVar5;
  FScriptContainerElement *this_00;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar6 = 0;
  if (0 < (this->InvocationList).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->InvocationList).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      this_00 = (this->InvocationList).AllocatorInstance.Data + lVar7;
      if ((*(int *)&this_00[8].field_0x0 != 0) &&
         (*(longlong **)&this_00->field_0x0 != (longlong *)0x0)) {
        puVar5 = (ulong64 *)(**(code **)(**(longlong **)&this_00->field_0x0 + 0x40))();
        if (*puVar5 == param_1.ID) {
          if ((*(int *)&this_00[8].field_0x0 != 0) &&
             (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&this_00->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)this_00,0,0,0x10);
            *(undefined4 *)&this_00[8].field_0x0 = 0;
          }
          CompactInvocationList(this,false);
          bVar2 = true;
          goto LAB_1416579bc;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->InvocationList).ArrayNum);
  }
  bVar2 = false;
LAB_1416579bc:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return bVar2;
}

// RemoveAll @ 14170baa0

int __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,void *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_res18 [16];
  FDestructionSentinel local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  iVar7 = 0;
  if (this->InvocationListLockCount < 1) {
    iVar12 = (this->InvocationList).ArrayNum;
    uVar9 = 0;
    if (0 < iVar12) {
      lVar13 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->InvocationList).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        pFVar10 = (this->InvocationList).AllocatorInstance.Data;
        if ((((*(int *)(pFVar10 + lVar13 + 8) == 0) ||
             (plVar2 = *(longlong **)(pFVar10 + lVar13), plVar2 == (longlong *)0x0)) ||
            (cVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1), cVar5 != '\0')) ||
           (cVar5 = (**(code **)(*plVar2 + 0x30))(plVar2), cVar5 != '\0')) {
          uVar6 = 0;
          if ((int)uVar9 < (this->InvocationList).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
          TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
          ::RemoveAtSwapImpl(&this->InvocationList,uVar9);
          iVar7 = iVar7 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
          lVar13 = lVar13 + 0x10;
        }
        iVar12 = (this->InvocationList).ArrayNum;
      } while ((int)uVar9 < iVar12);
    }
    iVar8 = iVar12 * 2;
    if (iVar8 < 2) {
      iVar8 = 2;
    }
    this->CompactionThreshold = iVar8;
    piVar1 = &(this->InvocationList).ArrayMax;
    if (*piVar1 != iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,&(this->InvocationList).AllocatorInstance,iVar12,piVar1);
    }
  }
  else {
    iVar12 = (this->InvocationList).ArrayNum;
    pFVar10 = (this->InvocationList).AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)iVar12 * 0x10;
    while( true ) {
      if ((this->InvocationList).ArrayNum != iVar12) {
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar11) break;
      if (((*(int *)&pFVar10[8].field_0x0 != 0) &&
          (*(longlong **)&pFVar10->field_0x0 != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)&pFVar10->field_0x0 + 0x28))(), cVar5 != '\0')) {
        if ((*(int *)&pFVar10[8].field_0x0 != 0) &&
           (*(undefined8 **)&pFVar10->field_0x0 != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)&pFVar10->field_0x0)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)pFVar10,0,0,0x10);
          *(undefined4 *)&pFVar10[8].field_0x0 = 0;
        }
        iVar7 = iVar7 + 1;
      }
      pFVar10 = pFVar10 + 0x10;
    }
    if (0 < iVar7) {
      this->CompactionThreshold = 0;
    }
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return iVar7;
}

// operator= @ 141816de0

TMulticastDelegateBase<FDefaultDelegateUserPolicy> * __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TMulticastDelegateBase<FDefaultDelegateUserPolicy> *param_1)

{
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar5;
  FScriptContainerElement *pFVar6;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  int local_res18;
  longlong local_78 [2];
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  
  if (param_1 == this) {
    return this;
  }
  pTVar7 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  iVar10 = 0;
  iVar8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_68);
  pTVar1 = &param_1->InvocationList;
  if ((TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
       *)local_78 != pTVar1) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
    pTVar7 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)(pTVar1->AllocatorInstance).Data
    ;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar10 = (param_1->InvocationList).ArrayNum;
    iVar8 = (param_1->InvocationList).ArrayMax;
    (param_1->InvocationList).ArrayNum = 0;
    (param_1->InvocationList).ArrayMax = 0;
  }
  local_res18 = param_1->CompactionThreshold;
  param_1->CompactionThreshold = 2;
  if (param_1->InvocationListLockCount != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.InvocationListLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                       ,0x3f,L"Moving from a multicast delegate while it is mid broadcast");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_50);
  iVar2 = (this->InvocationList).ArrayNum;
  pTVar1 = &this->InvocationList;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  pFVar9 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar9) break;
    local_res10 = 0;
    if ((*(int *)&pFVar6[8].field_0x0 != 0) &&
       (*(undefined8 **)&pFVar6->field_0x0 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)&pFVar6->field_0x0)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)pFVar6,0,0,0x10);
      *(undefined4 *)&pFVar6[8].field_0x0 = 0;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  CompactInvocationList(this,false);
  if (pTVar1 != (TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                 *)local_78) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               (pTVar1->AllocatorInstance).Data,(this->InvocationList).ArrayNum);
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)pTVar7;
    pTVar7 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
    (this->InvocationList).ArrayNum = iVar10;
    iVar10 = 0;
    (this->InvocationList).ArrayMax = iVar8;
  }
  this->CompactionThreshold = local_res18;
  if (this->InvocationListLockCount != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InvocationListLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                       ,0x48,L"Moving to a multicast delegate while it is mid broadcast");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTVar7,iVar10);
  if (pTVar7 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(pTVar7);
  }
  return this;
}

// TMulticastDelegateBase<FDefaultDelegateUserPolicy> @ 1418ba1e0

TMulticastDelegateBase<FDefaultDelegateUserPolicy> * __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
TMulticastDelegateBase<FDefaultDelegateUserPolicy>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TMulticastDelegateBase<FDefaultDelegateUserPolicy> *param_1)

{
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *pTVar1;
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar7;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTVar8;
  int iVar9;
  int iVar10;
  undefined8 local_68 [2];
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  
  iVar10 = 0;
  pTVar1 = &this->InvocationList;
  this->_padding_ = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InvocationList).ArrayNum = 0;
  (this->InvocationList).ArrayMax = 0;
  this->CompactionThreshold = 2;
  this->InvocationListLockCount = 0;
  if (param_1 == this) {
    return this;
  }
  iVar9 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_58);
  pTVar2 = &param_1->InvocationList;
  pTVar8 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  if ((TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
       *)local_68 != pTVar2) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
    pTVar8 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)(pTVar2->AllocatorInstance).Data
    ;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar10 = (param_1->InvocationList).ArrayNum;
    iVar9 = (param_1->InvocationList).ArrayMax;
    (param_1->InvocationList).ArrayNum = 0;
    (param_1->InvocationList).ArrayMax = 0;
  }
  iVar3 = param_1->CompactionThreshold;
  param_1->CompactionThreshold = 2;
  if (param_1->InvocationListLockCount != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.InvocationListLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                       ,0x3f,L"Moving from a multicast delegate while it is mid broadcast");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_40);
  ClearUnchecked(this);
  if (pTVar1 != (TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                 *)local_68) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               (pTVar1->AllocatorInstance).Data,(this->InvocationList).ArrayNum);
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)pTVar8;
    (this->InvocationList).ArrayNum = iVar10;
    (this->InvocationList).ArrayMax = iVar9;
    pTVar8 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
    iVar10 = 0;
  }
  this->CompactionThreshold = iVar3;
  if (this->InvocationListLockCount != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InvocationListLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                       ,0x48,L"Moving to a multicast delegate while it is mid broadcast");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTVar8,iVar10);
  if (pTVar8 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(pTVar8);
  }
  return this;
}

// ClearUnchecked @ 1418ca390

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InvocationList).ArrayNum;
  this_00 = (this->InvocationList).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    if ((*(int *)&this_00[8].field_0x0 != 0) &&
       (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)&this_00->field_0x0)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this_00,0,0,0x10);
      *(undefined4 *)&this_00[8].field_0x0 = 0;
    }
    this_00 = this_00 + 0x10;
  }
  CompactInvocationList(this,false);
  return;
}

// IsBound @ 1418e2a50

bool __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FDestructionSentinel local_28;
  
  local_28.AccessType = Reader;
  local_28.bDestroyed = false;
  local_28.Accessor = (FMRSWRecursiveAccessDetector *)this;
  FMRSWRecursiveAccessDetector::AcquireReadAccess((FMRSWRecursiveAccessDetector *)this,&local_28);
  iVar1 = (this->InvocationList).ArrayNum;
  pFVar3 = (this->InvocationList).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((*(int *)(pFVar3 + 8) != 0) && (*(longlong *)pFVar3 != 0)) {
      bVar2 = true;
LAB_1418e2abd:
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_28.Accessor,&local_28);
      }
      return bVar2;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  bVar2 = false;
  goto LAB_1418e2abd;
}

// RemoveDelegateInstance @ 141a19e10

bool __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,FDelegateHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong64 *puVar5;
  longlong lVar6;
  uint uVar7;
  FScriptContainerElement *this_00;
  
  if (this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar7 = 0;
  if (0 < (this->InvocationList).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->InvocationList).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      this_00 = (this->InvocationList).AllocatorInstance.Data + lVar6;
      if ((*(int *)&this_00[8].field_0x0 != 0) &&
         (*(longlong **)&this_00->field_0x0 != (longlong *)0x0)) {
        puVar5 = (ulong64 *)(**(code **)(**(longlong **)&this_00->field_0x0 + 0x40))();
        if (*puVar5 == param_1.ID) {
          if ((*(int *)&this_00[8].field_0x0 != 0) &&
             (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&this_00->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)this_00,0,0,0x10);
            *(undefined4 *)&this_00[8].field_0x0 = 0;
          }
          CompactInvocationList(this,false);
          bVar2 = true;
          goto LAB_141a19eec;
        }
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar7 < (this->InvocationList).ArrayNum);
  }
  bVar2 = false;
LAB_141a19eec:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return bVar2;
}

// CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_> @ 141bd2850

/* WARNING: Removing unreachable block (ram,0x000141bd29aa) */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TMulticastDelegateBase<FDefaultDelegateUserPolicy> *param_1)

{
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *pTVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res18;
  ForAnyElementType local_88;
  undefined8 local_80;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> local_78;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_50);
  iVar2 = (param_1->InvocationList).ArrayNum;
  pFVar8 = (param_1->InvocationList).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->InvocationList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if ((*(int *)(pFVar8 + 8) != 0) && (plVar3 = *(longlong **)pFVar8, plVar3 != (longlong *)0x0)) {
      local_78._0_8_ = 0;
      local_78._8_4_ = 0;
      (**(code **)(*plVar3 + 0x48))(plVar3,&local_78);
      if ((local_88.Data <= &local_78) &&
         ((&local_78 <
           (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
           (local_88.Data + (longlong)local_80._4_4_ * 0x10) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar7 = local_88.Data + (longlong)iVar6 * 0x10;
      local_res10 = 0;
      *(undefined8 *)pFVar7 = 0;
      *(undefined4 *)(pFVar7 + 8) = 0;
      *(undefined8 *)pFVar7 = local_78._0_8_;
      local_78._0_8_ = 0;
      *(undefined4 *)(pFVar7 + 8) = local_78._8_4_;
      local_78._8_4_ = 0;
      local_res18 = 0;
    }
    pFVar8 = pFVar8 + 0x10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_68);
  ClearUnchecked(this);
  pTVar1 = &this->InvocationList;
  if (pTVar1 != (TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                 *)&local_88) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               (pTVar1->AllocatorInstance).Data,(this->InvocationList).ArrayNum);
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Data;
    (this->InvocationList).ArrayNum = (int)local_80;
    (this->InvocationList).ArrayMax = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_88.Data,(int)local_80);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_88.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

