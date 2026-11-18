// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// CopyFrom<IBaseDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>_> @ 14b5e8d20

/* WARNING: Removing unreachable block (ram,0x00014b5e8e7a) */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
CopyFrom<IBaseDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>_>
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

// operator= @ 14b79bab0

TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> * __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *param_1)

{
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar5;
  FScriptContainerElement *pFVar6;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  int local_res18;
  longlong local_48 [2];
  
  if (param_1 == this) {
    return this;
  }
  pTVar7 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  iVar8 = 0;
  iVar9 = 0;
  if (param_1 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(*pcVar3)();
      return pTVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  pTVar1 = &param_1->InvocationList;
  if ((TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
       *)local_48 != pTVar1) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
    pTVar7 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)(pTVar1->AllocatorInstance).Data
    ;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar8 = (param_1->InvocationList).ArrayNum;
    iVar9 = (param_1->InvocationList).ArrayMax;
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
      pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(*pcVar3)();
      return pTVar5;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  if (this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(*pcVar3)();
      return pTVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar2 = (this->InvocationList).ArrayNum;
  pTVar1 = &this->InvocationList;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  pFVar10 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar10) break;
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
                 *)local_48) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               (pTVar1->AllocatorInstance).Data,(this->InvocationList).ArrayNum);
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)pTVar7;
    pTVar7 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
    (this->InvocationList).ArrayNum = iVar8;
    iVar8 = 0;
    (this->InvocationList).ArrayMax = iVar9;
  }
  this->CompactionThreshold = local_res18;
  if (this->InvocationListLockCount != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InvocationListLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                       ,0x48,L"Moving to a multicast delegate while it is mid broadcast");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(*pcVar3)();
      return pTVar5;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTVar7,iVar8);
  if (pTVar7 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(pTVar7);
  }
  return this;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>,UDS_GameOptionData_*,int,int,FString> @ 14ba85b60

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>,UDS_GameOptionData_*,int,int,FString>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,UDS_GameOptionData *param_1,
          int param_2,int param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FDestructionSentinel local_68;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_68);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) {
LAB_14ba85cd9:
        bVar4 = true;
      }
      else {
        local_78.Data = (FScriptContainerElement *)0x0;
        pcVar3 = *(code **)(*plVar2 + 0x68);
        local_70 = (param_4->Data).ArrayNum;
        lVar9 = (longlong)local_70;
        pFVar1 = (param_4->Data).AllocatorInstance.Data;
        if (local_70 == 0) {
          local_6c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_70,0,&local_78,local_70,&local_6c);
          memcpy(local_78.Data,pFVar1,lVar9 * 2);
        }
        cVar6 = (*pcVar3)(plVar2,param_1,param_2,param_3,&local_78);
        if (cVar6 == '\0') goto LAB_14ba85cd9;
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar4) {
    CompactInvocationList(this,false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(TArray<__int64,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14bae10d0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TArray<__int64,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FDestructionSentinel local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) {
LAB_14bae120e:
        bVar4 = true;
      }
      else {
        local_60 = param_1->ArrayNum;
        lVar9 = (longlong)local_60;
        pFVar1 = (param_1->AllocatorInstance).Data;
        local_68.Data = (FScriptContainerElement *)0x0;
        pcVar3 = *(code **)(*plVar2 + 0x68);
        if (local_60 == 0) {
          local_5c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_60,0,&local_68,local_60,&local_5c);
          memcpy(local_68.Data,pFVar1,lVar9 << 3);
        }
        cVar6 = (*pcVar3)(plVar2);
        if (cVar6 == '\0') goto LAB_14bae120e;
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar4) {
    CompactInvocationList(this,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FString> @ 14bff63f0

void __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FString>
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  if ((this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) {
LAB_14bff654f:
        bVar4 = true;
      }
      else {
        local_40 = (param_1->Data).ArrayNum;
        lVar9 = (longlong)local_40;
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        local_48.Data = (FScriptContainerElement *)0x0;
        pcVar3 = *(code **)(*plVar2 + 0x68);
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_40,0,&local_48,local_40,&local_3c);
          memcpy(local_48.Data,pFVar1,lVar9 * 2);
        }
        cVar6 = (*pcVar3)(plVar2);
        if (cVar6 == '\0') goto LAB_14bff654f;
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar4) {
    CompactInvocationList(this,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

