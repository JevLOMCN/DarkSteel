// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// AddDelegate<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_const_&> @ 148767e00

void __thiscall
FStreamableDelegateDelayHelper::
AddDelegate<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_const_&>
          (FStreamableDelegateDelayHelper *this,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_1,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                   *param_2,TSharedPtr<FStreamableHandle,1> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FStreamableHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPendingDelegate *pFVar5;
  FPendingDelegateList *pFVar6;
  uint uVar7;
  
  pFVar5 = ::operator_new(0x68);
  if (pFVar5 == (FPendingDelegate *)0x0) {
    pFVar5 = (FPendingDelegate *)0x0;
  }
  else {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar2 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)&pFVar5->Delegate = 0;
    *(undefined8 *)&(pFVar5->Delegate).field_0x8 = 0;
    *(undefined4 *)&(pFVar5->Delegate).field_0x10 = 0;
    TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&pFVar5->Delegate,param_1);
    *(undefined8 *)&pFVar5->CancelDelegate = 0;
    *(undefined8 *)&(pFVar5->CancelDelegate).field_0x8 = 0;
    *(undefined4 *)&(pFVar5->CancelDelegate).field_0x10 = 0;
    TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&pFVar5->CancelDelegate,param_2);
    (pFVar5->RelatedHandle).Object = pFVar2;
    (pFVar5->RelatedHandle).SharedReferenceCount.ReferenceController = pTVar1;
    pFVar5->DelayFrames = GStreamableDelegateDelayFrames;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar2 = param_3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar7 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar6 = TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
           ::FindOrAddImpl<TSharedPtr<FStreamableHandle,1>_const_&>
                     ((TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
                       *)&this->PendingDelegatesByHandle,uVar7 >> 0x10 ^ uVar7,param_3);
  FPendingDelegateList::AddTail(pFVar5,&this->PendingDelegates,pFVar6);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// FStreamableDelegateDelayHelper @ 14877cd60

FStreamableDelegateDelayHelper * __thiscall
FStreamableDelegateDelayHelper::FStreamableDelegateDelayHelper(FStreamableDelegateDelayHelper *this)

{
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
  this->_padding_ = (longlong)&___7FStreamableDelegateDelayHelper__6B_;
  (this->PendingDelegates).Head = (FPendingDelegate *)0x0;
  (this->PendingDelegates).Tail = (FPendingDelegate *)0x0;
  *(undefined8 *)&this->PendingDelegatesByHandle = 0;
  *(undefined8 *)&(this->PendingDelegatesByHandle).field_0x8 = 0;
  *(undefined8 *)&(this->PendingDelegatesByHandle).field_0x20 = 0;
  *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x28 = 0;
  *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x34 = 0;
  *(undefined8 *)&(this->PendingDelegatesByHandle).field_0x40 = 0;
  *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DataLock,4000);
  return this;
}

// CancelDelegatesForHandle @ 14878b350

void __thiscall
FStreamableDelegateDelayHelper::CancelDelegatesForHandle
          (FStreamableDelegateDelayHelper *this,TSharedPtr<FStreamableHandle,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPendingDelegate *pFVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  code *pcVar5;
  FPendingDelegate *pFVar6;
  FPendingDelegate *pFVar7;
  FPendingDelegate *pFVar8;
  bool bVar9;
  char cVar10;
  FPendingDelegateList *pFVar11;
  FPendingDelegate *pFVar12;
  TSharedPtr<FStreamableHandle_const_,1> local_88;
  TSharedPtr<FStreamableHandle,1> local_78;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  lpCriticalSection = &this->DataLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar11 = TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
            ::Find((TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
                    *)&this->PendingDelegatesByHandle,&local_88);
  if (pFVar11 == (FPendingDelegateList *)0x0) {
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    pFVar1 = pFVar11->Head;
    pFVar7 = (FPendingDelegate *)0x0;
    pFVar8 = (FPendingDelegate *)0x0;
    while (pFVar6 = pFVar1, pFVar6 != (FPendingDelegate *)0x0) {
      pFVar1 = pFVar6->NextByHandle;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->CancelDelegate,
                 &local_50);
      if (((*(int *)&(pFVar6->CancelDelegate).field_0x10 == 0) ||
          (plVar2 = *(longlong **)&(pFVar6->CancelDelegate).field_0x8, plVar2 == (longlong *)0x0))
         || (cVar10 = (**(code **)(*plVar2 + 0x38))(), cVar10 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        if (pFVar6->Prev == (FPendingDelegate *)0x0) {
          if ((pFVar6 != (this->PendingDelegates).Head) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegates.Head",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x12d,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (this->PendingDelegates).Head = pFVar6->Next;
        }
        else {
          pFVar6->Prev->Next = pFVar6->Next;
        }
        if (pFVar6->Next == (FPendingDelegate *)0x0) {
          if ((pFVar6 != (this->PendingDelegates).Tail) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegates.Tail",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x136,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (this->PendingDelegates).Tail = pFVar6->Prev;
        }
        else {
          pFVar6->Next->Prev = pFVar6->Prev;
        }
        pFVar6->Prev = (FPendingDelegate *)0x0;
        pFVar6->Next = (FPendingDelegate *)0x0;
        if (pFVar6->PrevByHandle == (FPendingDelegate *)0x0) {
          if ((pFVar6 != pFVar11->Head) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegatesByHandle.Head",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x141,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar11->Head = pFVar6->NextByHandle;
        }
        else {
          pFVar6->PrevByHandle->NextByHandle = pFVar6->NextByHandle;
        }
        if (pFVar6->NextByHandle == (FPendingDelegate *)0x0) {
          if ((pFVar6 != pFVar11->Tail) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegatesByHandle.Tail",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x14a,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar11->Tail = pFVar6->PrevByHandle;
        }
        else {
          pFVar6->NextByHandle->PrevByHandle = pFVar6->PrevByHandle;
        }
        pFVar6->PrevByHandle = (FPendingDelegate *)0x0;
        pFVar6->NextByHandle = (FPendingDelegate *)0x0;
        pFVar12 = pFVar6;
        if (pFVar8 != (FPendingDelegate *)0x0) {
          pFVar8->Next = pFVar6;
          pFVar12 = pFVar7;
        }
        pFVar6->Next = (FPendingDelegate *)0x0;
        pFVar7 = pFVar12;
        pFVar8 = pFVar6;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(&pFVar6->Delegate,&pFVar6->CancelDelegate);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->CancelDelegate
                   ,(FWriteAccessScope *)&local_68);
        if ((*(int *)&(pFVar6->CancelDelegate).field_0x10 != 0) &&
           (puVar3 = *(undefined8 **)&(pFVar6->CancelDelegate).field_0x8,
           puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(pFVar6->CancelDelegate).field_0x8,0,0,0x10);
          *(undefined4 *)&(pFVar6->CancelDelegate).field_0x10 = 0;
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
      }
    }
    if (pFVar11->Head == (FPendingDelegate *)0x0) {
      local_78.Object = param_1->Object;
      local_78.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      RemovePendingDelegateInternal(this,&local_78);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    while (pFVar7 != (FPendingDelegate *)0x0) {
      pFVar1 = pFVar7->Next;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->RelatedHandle).SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar7->CancelDelegate);
      pvVar4 = *(void **)&(pFVar7->CancelDelegate).field_0x8;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&pFVar7->CancelDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar7->Delegate);
      pvVar4 = *(void **)&(pFVar7->Delegate).field_0x8;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&pFVar7->Delegate);
      ::operator_delete(pFVar7,0x68);
      pFVar7 = pFVar1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetStatId @ 1487a45f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FStreamableDelegateDelayHelper::GetStatId(FStreamableDelegateDelayHelper *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FStreamableDelegateDelayHelper::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FStreamableDelegateDelayHelper::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FStreamableDelegateDelayHelper::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FStreamableDelegateDelayHelper = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FStreamableDelegateDelayHelper");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FStreamableDelegateDelayHelper::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FStreamableDelegateDelayHelper,*pFVar1,
               L"FStreamableDelegateDelayHelper","STATGROUP_Tickables","STATCAT_Advanced",
               L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FStreamableDelegateDelayHelper::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FStreamableDelegateDelayHelper;
  if (_StatPtr_FStreamableDelegateDelayHelper == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FStreamableDelegateDelayHelper");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FStreamableDelegateDelayHelper::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FStreamableDelegateDelayHelper,*pFVar1,
                       L"FStreamableDelegateDelayHelper","STATGROUP_Tickables","STATCAT_Advanced",
                       L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 1487a64e0

ETickableTickType __thiscall
FStreamableDelegateDelayHelper::GetTickableTickType(FStreamableDelegateDelayHelper *this)

{
  return Always;
}

// IsTickableInEditor @ 1487af630

bool __thiscall
FStreamableDelegateDelayHelper::IsTickableInEditor(FStreamableDelegateDelayHelper *this)

{
  return true;
}

// IsTickableWhenPaused @ 1487af640

bool __thiscall
FStreamableDelegateDelayHelper::IsTickableWhenPaused(FStreamableDelegateDelayHelper *this)

{
  return true;
}

// RemovePendingDelegateInternal @ 1487b9580

void __thiscall
FStreamableDelegateDelayHelper::RemovePendingDelegateInternal
          (FStreamableDelegateDelayHelper *this,TSharedPtr<FStreamableHandle,1> *param_1)

{
  TMap<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> *paVar7;
  int iVar8;
  TSharedPtr<FStreamableHandle_const_,1> local_18;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = &this->PendingDelegatesByHandle;
  local_18.Object = param_1->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar3;
  if (*(int *)&(this->PendingDelegatesByHandle).field_0x8 !=
      *(int *)&(this->PendingDelegatesByHandle).field_0x34) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    uVar6 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
    ::RemoveImpl<TSharedPtr<FStreamableHandle_const_,1>_>
              ((TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                *)this_00,uVar6 >> 0x10 ^ uVar6,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (*(int *)&(this->PendingDelegatesByHandle).field_0x8 ==
      *(int *)&(this->PendingDelegatesByHandle).field_0x34) {
    for (lVar4 = 0x3f; 0x8fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    iVar8 = 1 << ((byte)lVar4 & 0x1f);
    iVar2 = *(int *)&(this->PendingDelegatesByHandle).field_0x48;
    if ((iVar2 < iVar8) || (iVar8 < iVar2)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
      TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PendingDelegatesByHandle).field_0x8);
    puVar1 = &(this->PendingDelegatesByHandle).field_0xc;
    *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x8 = 0;
    if (*(int *)puVar1 != 0x80) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0x80,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x34 = 0;
    iVar2 = *(int *)&(this->PendingDelegatesByHandle).field_0x2c;
    *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x28 = 0;
    if ((iVar2 < 0x80) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PendingDelegatesByHandle).field_0x10,0);
    }
    if (bVar5) {
      *(int *)&(this->PendingDelegatesByHandle).field_0x48 = iVar8;
      TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Tick @ 1487c85e0

void __thiscall
FStreamableDelegateDelayHelper::Tick(FStreamableDelegateDelayHelper *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  longlong lVar2;
  FPendingDelegate *pFVar3;
  FStreamableHandle *pFVar4;
  void *pvVar5;
  code *pcVar6;
  FPendingDelegate *pFVar7;
  FPendingDelegate *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  atomic<int> *paVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  longlong *plVar15;
  FPendingDelegate *pFVar16;
  FPendingDelegate *local_res18;
  TSharedPtr<FStreamableHandle_const_,1> local_80;
  TSharedPtr<FStreamableHandle_const_,1> local_70;
  FStreamableHandle *local_60;
  TReferenceControllerBase<1> *local_58;
  FReadAccessScope local_50;
  
  if ((this->PendingDelegates).Head != (FPendingDelegate *)0x0) {
    local_res18 = (FPendingDelegate *)0x0;
    lpCriticalSection = &this->DataLock;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->PendingDelegates).Head;
    pFVar8 = (FPendingDelegate *)0x0;
    while (pFVar7 = pFVar3, pFVar7 != (FPendingDelegate *)0x0) {
      pFVar7->DelayFrames = pFVar7->DelayFrames + -1;
      pFVar3 = pFVar7->Next;
      if (pFVar7->DelayFrames < 1) {
        pTVar13 = (pFVar7->RelatedHandle).SharedReferenceCount.ReferenceController;
        local_80.Object = (pFVar7->RelatedHandle).Object;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar11 = ((uint)((ulonglong)local_80.Object >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_80.Object >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        local_80.SharedReferenceCount.ReferenceController = pTVar13;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        iVar10 = TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TSharedPtr<FStreamableHandle_const_,1>_>
                           ((TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                             *)&this->PendingDelegatesByHandle,uVar11 >> 0x10 ^ uVar11,&local_80);
        if (iVar10 == -1) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          plVar15 = (longlong *)0x0;
LAB_1487c8746:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegatesForHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                             ,0xcf,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          lVar2 = *(longlong *)&this->PendingDelegatesByHandle + (longlong)iVar10 * 0x28;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          plVar15 = (longlong *)(lVar2 + 0x10);
          if (lVar2 == 0) {
            plVar15 = (longlong *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          if (plVar15 == (longlong *)0x0) goto LAB_1487c8746;
        }
        if (pFVar7->Prev == (FPendingDelegate *)0x0) {
          if ((pFVar7 != (this->PendingDelegates).Head) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegates.Head",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x12d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this->PendingDelegates).Head = pFVar7->Next;
        }
        else {
          pFVar7->Prev->Next = pFVar7->Next;
        }
        if (pFVar7->Next == (FPendingDelegate *)0x0) {
          if ((pFVar7 != (this->PendingDelegates).Tail) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegates.Tail",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x136,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this->PendingDelegates).Tail = pFVar7->Prev;
        }
        else {
          pFVar7->Next->Prev = pFVar7->Prev;
        }
        pFVar7->Prev = (FPendingDelegate *)0x0;
        pFVar7->Next = (FPendingDelegate *)0x0;
        if (pFVar7->PrevByHandle == (FPendingDelegate *)0x0) {
          if ((pFVar7 != (FPendingDelegate *)*plVar15) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegatesByHandle.Head",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x141,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *plVar15 = (longlong)pFVar7->NextByHandle;
        }
        else {
          pFVar7->PrevByHandle->NextByHandle = pFVar7->NextByHandle;
        }
        if (pFVar7->NextByHandle == (FPendingDelegate *)0x0) {
          if ((pFVar7 != (FPendingDelegate *)plVar15[1]) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingDelegate == PendingDelegatesByHandle.Tail",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x14a,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar15[1] = (longlong)pFVar7->PrevByHandle;
        }
        else {
          pFVar7->NextByHandle->PrevByHandle = pFVar7->PrevByHandle;
        }
        pFVar7->PrevByHandle = (FPendingDelegate *)0x0;
        pFVar7->NextByHandle = (FPendingDelegate *)0x0;
        pFVar16 = pFVar7;
        if (local_res18 != (FPendingDelegate *)0x0) {
          local_res18->Next = pFVar7;
          pFVar16 = pFVar8;
        }
        pFVar8 = pFVar16;
        local_res18 = pFVar7;
        if (*plVar15 == 0) {
          pTVar13 = (pFVar7->RelatedHandle).SharedReferenceCount.ReferenceController;
          local_70.Object = (pFVar7->RelatedHandle).Object;
          if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
            paVar12 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar12 = &pTVar13->SharedReferenceCount;
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
          }
          local_70.SharedReferenceCount.ReferenceController = pTVar13;
          if (*(int *)&(this->PendingDelegatesByHandle).field_0x8 !=
              *(int *)&(this->PendingDelegatesByHandle).field_0x34) {
            if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar12 = (atomic<int>)((int)*paVar12 + 1);
              UNLOCK();
            }
            uVar11 = ((uint)((ulonglong)local_70.Object >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_70.Object >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar13);
            TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
            ::RemoveImpl<TSharedPtr<FStreamableHandle_const_,1>_>
                      ((TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                        *)&this->PendingDelegatesByHandle,uVar11 >> 0x10 ^ uVar11,&local_70);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          if (*(int *)&(this->PendingDelegatesByHandle).field_0x8 ==
              *(int *)&(this->PendingDelegatesByHandle).field_0x34) {
            for (lVar2 = 0x3f; 0x8fUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
            iVar14 = 1 << ((byte)lVar2 & 0x1f);
            iVar10 = *(int *)&(this->PendingDelegatesByHandle).field_0x48;
            if ((iVar10 < iVar14) || (iVar14 < iVar10)) {
              bVar9 = true;
            }
            else {
              bVar9 = false;
              TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
              ::UnhashElements((TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                                *)&this->PendingDelegatesByHandle);
            }
            TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)&this->PendingDelegatesByHandle,0,
                              *(int *)&(this->PendingDelegatesByHandle).field_0x8);
            puVar1 = &(this->PendingDelegatesByHandle).field_0xc;
            *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x8 = 0;
            if (*(int *)puVar1 != 0x80) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0x80,(ForAnyElementType *)&this->PendingDelegatesByHandle,0,
                         (int *)puVar1);
            }
            *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x30 = 0xffffffff;
            *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x34 = 0;
            iVar10 = *(int *)&(this->PendingDelegatesByHandle).field_0x2c;
            *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x28 = 0;
            if ((iVar10 < 0x80) || (0x80 < iVar10)) {
              *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x2c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)
                         &(this->PendingDelegatesByHandle).field_0x10,0);
            }
            if (bVar9) {
              *(int *)&(this->PendingDelegatesByHandle).field_0x48 = iVar14;
              TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
              ::Rehash((TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
                        *)&this->PendingDelegatesByHandle);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
        }
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    while (pFVar8 != (FPendingDelegate *)0x0) {
      pTVar13 = (pFVar8->RelatedHandle).SharedReferenceCount.ReferenceController;
      pFVar3 = pFVar8->Next;
      pFVar4 = (pFVar8->RelatedHandle).Object;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar8->Delegate,
                 &local_50);
      if ((*(int *)&(pFVar8->Delegate).field_0x10 == 0) ||
         (plVar15 = *(longlong **)&(pFVar8->Delegate).field_0x8, plVar15 == (longlong *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
      }
      else {
        local_60 = pFVar4;
        local_58 = pTVar13;
        (**(code **)(*plVar15 + 0x68))(plVar15,&local_60);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->RelatedHandle).SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->CancelDelegate);
      pvVar5 = *(void **)&(pFVar8->CancelDelegate).field_0x8;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&pFVar8->CancelDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->Delegate);
      pvVar5 = *(void **)&(pFVar8->Delegate).field_0x8;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&pFVar8->Delegate);
      ::operator_delete(pFVar8,0x68);
      pFVar8 = pFVar3;
    }
  }
  return;
}

