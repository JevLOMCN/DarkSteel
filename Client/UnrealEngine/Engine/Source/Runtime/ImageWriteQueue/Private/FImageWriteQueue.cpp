// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 11

// FImageWriteQueue @ 1446e9290

FImageWriteQueue * __thiscall FImageWriteQueue::FImageWriteQueue(FImageWriteQueue *this)

{
  FName FVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FModuleManager *this_00;
  FEvent *pFVar8;
  FImageWriteQueue *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  ulong64 *puVar12;
  TAtomic<int> TVar13;
  longlong lVar14;
  FName local_res8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this->_padding_ = (longlong)&___7FImageWriteQueue__6B_;
  lVar14 = 0;
  this->NumPendingTasks = (TAtomic<int>)0x0;
  this->MaxQueueSize = (TAtomic<int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadPoolMutex,4000);
  this->bOwnedThreadPool = false;
  this->ThreadPool = (FQueuedThreadPool *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FenceMutex,4000);
  (this->PendingFences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingFences).ArrayNum = 0;
  (this->PendingFences).ArrayMax = 0;
  this->CurrentFenceID = 0;
  this->CurrentFenceCount = 0;
  (this->CVarSinkHandle).Handle.ID = 0;
  this->bPendingShutdown = (FThreadSafeBool)0x0;
  FModuleManager::Get();
  pFVar7 = ::FName::FName(&local_res8,"ImageWrapper");
  FVar1 = *pFVar7;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar1);
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->OnTaskCompletedEvent = pFVar8;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FImageWriteQueue *)(*pcVar2)();
    return pFVar9;
  }
  pIVar3 = IConsoleManager::Singleton;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFImageWriteQueue____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[4] = OnCVarsChanged;
    puVar10[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  puVar12 = (ulong64 *)(*pcVar2)(pIVar3,local_res10);
  (this->CVarSinkHandle).Handle.ID = *puVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  RecreateThreadPool(this);
  pTVar4 = CVarImageWriteQueueMaxQueueSize.Ref;
  bVar5 = IsInParallelGameThread();
  if ((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) {
    lVar14 = 4;
  }
  TVar13 = *(TAtomic<int> *)((longlong)pTVar4->ShadowedValue + lVar14);
  if ((TVar13 == (TAtomic<int>)0xffffffff) &&
     (TVar13 = (TAtomic<int>)0x10, this->ThreadPool != (FQueuedThreadPool *)0x0)) {
    iVar6 = (**(code **)((longlong)*this->ThreadPool + 0x28))();
    TVar13 = (TAtomic<int>)(iVar6 << 2);
  }
  LOCK();
  this->MaxQueueSize = TVar13;
  UNLOCK();
  return this;
}

// ~FImageWriteQueue @ 1446e9820

void __thiscall FImageWriteQueue::~FImageWriteQueue(FImageWriteQueue *this)

{
  FQueuedThreadPool *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FImageWriteQueue__6B_;
  if ((this->bPendingShutdown == (FThreadSafeBool)0x0) ||
     (this->NumPendingTasks != (TAtomic<int>)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPendingShutdown && NumPendingTasks == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteQueue.cpp"
                       ,0xe2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->OnTaskCompletedEvent);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x68))
            (IConsoleManager::Singleton,(this->CVarSinkHandle).Handle.ID);
  if (this->bOwnedThreadPool != false) {
    (**(code **)((longlong)*this->ThreadPool + 0x10))();
    pFVar1 = this->ThreadPool;
    if (pFVar1 != (FQueuedThreadPool *)0x0) {
      (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,1);
    }
  }
  DestructItems<FImageWriteFence,int>
            ((FImageWriteFence *)(this->PendingFences).AllocatorInstance.Data,
             (this->PendingFences).ArrayNum);
  pFVar2 = (this->PendingFences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FenceMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadPoolMutex);
  this->_padding_ = (longlong)&___7IImageWriteQueue__6B_;
  return;
}

// BeginShutdown @ 1446eb480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FImageWriteQueue::BeginShutdown(FImageWriteQueue *this)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  longlong local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  LOCK();
  this->bPendingShutdown = (FThreadSafeBool)0x1;
  UNLOCK();
  local_48[0] = 0;
  local_20 = (longlong *)0x0;
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x10))(this,local_58,local_48);
  if (*plVar3 != 0) {
    do {
      do {
      } while (*plVar3 == 0);
      plVar1 = *(longlong **)(*plVar3 + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_48[0] != 0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// CreateFence @ 1446ebe40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __thiscall
FImageWriteQueue::CreateFence
          (FImageWriteQueue *this,TFuture<void> *__return_storage_ptr__,
          TFunction<void___cdecl(void)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TFuture<void> *pTVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  TFutureState<void> *this_00;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_148 [32];
  TPromise<void> local_128;
  TFuture<void> *local_110;
  longlong local_108;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  code *local_d8 [5];
  undefined8 *local_b0;
  longlong local_a8;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint *local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_110 = __return_storage_ptr__;
  TPromise<void>::TPromise<void>(&local_128);
  if ((local_128.bFutureRetrieved != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TFuture<void> *)(*pcVar3)();
    return pTVar6;
  }
  this_00 = local_128.State.Object;
  local_128.bFutureRetrieved = true;
  if ((local_128.State.Object == (TFutureState<void> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TFuture<void> *)(*pcVar3)();
    return pTVar6;
  }
  *(TFutureState<void> **)__return_storage_ptr__ = this_00;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_128.State.SharedReferenceCount.ReferenceController;
  if (local_128.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_128.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  lpCriticalSection = &this->FenceMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->PendingFences).ArrayNum == 0) && (this->CurrentFenceCount == 0)) {
    if (this_00 == (TFutureState<void> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TFuture<void> *)(*pcVar3)();
        return pTVar6;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TFuture<void> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if ((*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TFuture<void> *)(*pcVar3)();
      return pTVar6;
    }
    FFutureState::MarkComplete((FFutureState *)this_00);
    if (*(longlong *)param_1 != 0) {
      local_50 = (longlong *)0x0;
      puVar8 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)&param_1->field_0x28;
      }
      local_78 = *(longlong *)param_1;
      (**(code **)*puVar8)(puVar8,local_68);
      local_d8[0] = (code *)0x0;
      local_b0 = FMemory::Malloc(0x40,0x10);
      plVar10 = local_b0 + 2;
      *local_b0 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::`8'::<lambda_1>,1,1>::
                   _vftable_;
      local_b0[7] = 0;
      *plVar10 = local_78;
      if (local_78 != 0) {
        plVar9 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar9 = local_50;
        }
        (**(code **)*plVar9)();
      }
      if (plVar10 != (longlong *)0x0) {
        local_d8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,void>::
                      Call;
      }
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_d8);
      __return_storage_ptr__ = local_110;
      if (local_78 != 0) {
        plVar10 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar10 = local_50;
        }
        (**(code **)(*plVar10 + 0x10))();
        __return_storage_ptr__ = local_110;
      }
    }
  }
  else {
    local_a8 = *(longlong *)param_1;
    local_80 = (uint *)0x0;
    if (local_a8 != 0) {
      puVar8 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar8)(puVar8,&local_98);
    }
    iVar5 = (this->PendingFences).ArrayNum;
    piVar1 = &(this->PendingFences).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,&(this->PendingFences).AllocatorInstance,piVar1);
    }
    puVar11 = local_80;
    (this->PendingFences).ArrayNum = iVar5 + 1;
    uVar2 = this->CurrentFenceCount;
    local_80 = (uint *)0x0;
    local_f8 = local_98;
    uStack_f4 = uStack_94;
    uStack_f0 = uStack_90;
    uStack_ec = uStack_8c;
    local_e8 = local_88;
    local_e0 = 0;
    pFVar12 = (this->PendingFences).AllocatorInstance.Data + (longlong)iVar5 * 0x50;
    lVar7 = 0;
    *(uint *)pFVar12 = this->CurrentFenceID;
    *(TFutureState<void> **)(pFVar12 + 8) = this_00;
    this_00 = (TFutureState<void> *)0x0;
    *(TReferenceControllerBase<1> **)(pFVar12 + 0x10) =
         local_128.State.SharedReferenceCount.ReferenceController;
    *(uint *)(pFVar12 + 4) = uVar2;
    pFVar12[0x18] = (FScriptContainerElement)0x1;
    *(longlong *)(pFVar12 + 0x20) = local_a8;
    *(uint **)(pFVar12 + 0x48) = puVar11;
    *(uint *)(pFVar12 + 0x30) = local_98;
    *(undefined4 *)(pFVar12 + 0x34) = uStack_94;
    *(undefined4 *)(pFVar12 + 0x38) = uStack_90;
    *(undefined4 *)(pFVar12 + 0x3c) = uStack_8c;
    local_128.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)(pFVar12 + 0x40) = local_88;
    local_128.State.Object = (TFutureState<void> *)0x0;
    if (*(longlong *)(pFVar12 + 0x20) == 0) {
      local_108 = local_a8;
      if (local_a8 != 0) {
        local_a8 = lVar7;
        (**(code **)(CONCAT44(uStack_94,local_98) + 0x10))(&local_f8);
        lVar7 = local_a8;
      }
    }
    else {
      local_108 = 0;
    }
    local_a8 = lVar7;
    if (local_a8 != 0) {
      puVar11 = &local_98;
      if (local_80 != (uint *)0x0) {
        puVar11 = local_80;
      }
      (**(code **)(*(longlong *)puVar11 + 0x10))();
    }
    this->CurrentFenceID = this->CurrentFenceID + 1;
    this->CurrentFenceCount = 0;
    __return_storage_ptr__ = local_110;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this_00 != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&this_00->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TFuture<void> *)(*pcVar3)();
    return pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.State.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// DecrementFence @ 1446ec250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImageWriteQueue::DecrementFence(FImageWriteQueue *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FFutureState *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (&this->FenceMutex == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->FenceMutex);
  if (param_1 == this->CurrentFenceID) {
    this->CurrentFenceCount = this->CurrentFenceCount - 1;
  }
  else {
    uVar9 = 0;
    iVar10 = -1;
    if (0 < (this->PendingFences).ArrayNum) {
      uVar8 = 0;
      lVar11 = 0;
      do {
        iVar1 = (this->PendingFences).ArrayNum;
        uVar6 = 0;
        if ((int)uVar9 < iVar1) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_c8 = (longlong)(int)uVar9;
          local_c0 = (longlong)iVar1;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar2 = (this->PendingFences).AllocatorInstance.Data;
        if (param_1 < *(uint *)(pFVar2 + lVar11)) {
          if (*(int *)(pFVar2 + lVar11 + 4) != 0) break;
        }
        else if (*(uint *)(pFVar2 + lVar11) == param_1) {
          *(int *)(pFVar2 + lVar11 + 4) = *(int *)(pFVar2 + lVar11 + 4) + -1;
        }
        if ((uVar9 == uVar8) && (*(int *)(pFVar2 + lVar11 + 4) == 0)) {
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 + 1;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x50;
      } while ((int)uVar9 < (this->PendingFences).ArrayNum);
      local_a8 = iVar10;
      if (-1 < iVar10) {
        uVar9 = 0;
        if (-1 < iVar10) {
          lVar11 = (longlong)iVar10 + 1;
          lVar12 = 0;
          do {
            iVar10 = (this->PendingFences).ArrayNum;
            uVar8 = 0;
            if ((int)uVar9 < iVar10) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if (uVar8 == 0) {
              local_c8 = (longlong)(int)uVar9;
              local_c0 = (longlong)iVar10;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar2 = (this->PendingFences).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar12 + 4) != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Fence.Count == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteQueue.cpp"
                                   ,0x15d,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(longlong *)(pFVar2 + lVar12 + 8) == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("State.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                 ,0x283,L"");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((*(longlong *)(pFVar2 + lVar12 + 8) == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            this_00 = *(FFutureState **)(pFVar2 + lVar12 + 8);
            if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!IsComplete()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                   ,0xcd,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FFutureState::MarkComplete(this_00);
            lVar3 = *(longlong *)(pFVar2 + lVar12 + 0x20);
            if (lVar3 != 0) {
              local_40 = *(longlong **)(pFVar2 + lVar12 + 0x48);
              *(undefined8 *)(pFVar2 + lVar12 + 0x48) = 0;
              local_58 = *(longlong *)(pFVar2 + lVar12 + 0x30);
              uStack_50 = *(undefined8 *)(pFVar2 + lVar12 + 0x38);
              local_48 = *(undefined8 *)(pFVar2 + lVar12 + 0x40);
              *(undefined8 *)(pFVar2 + lVar12 + 0x20) = 0;
              local_98[0] = (code *)0x0;
              local_70 = (undefined8 *)0x0;
              local_68 = lVar3;
              local_70 = FMemory::Malloc(0x40,0x10);
              *local_70 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::`31'::<lambda_1>,1,1>
                           ::_vftable_;
              plVar7 = local_70 + 2;
              *plVar7 = local_68;
              local_70[7] = local_40;
              local_40 = (longlong *)0x0;
              local_70[4] = local_58;
              local_70[5] = uStack_50;
              local_70[6] = local_48;
              if (*plVar7 != 0) {
                local_68 = 0;
              }
              if (plVar7 != (longlong *)0x0) {
                local_98[0] = UE::Core::Private::Function::
                              TFunctionRefCaller<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,void>
                              ::Call;
              }
              AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_98);
              if (local_68 != 0) {
                plVar7 = &local_58;
                if (local_40 != (longlong *)0x0) {
                  plVar7 = local_40;
                }
                (**(code **)(*plVar7 + 0x10))();
              }
            }
            uVar9 = uVar9 + 1;
            lVar12 = lVar12 + 0x50;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        iVar10 = (this->PendingFences).ArrayNum;
        uVar9 = local_a8 + 1;
        uVar8 = 0;
        if ((int)uVar9 <= iVar10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_c0 = (longlong)(int)uVar9;
          local_c8 = 0;
          local_b8 = (longlong)iVar10;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar9 != 0) {
          TArray<FImageWriteFence,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->PendingFences,0,uVar9);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->FenceMutex);
  return;
}

// Enqueue @ 1446eca00

/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<bool> * __thiscall
FImageWriteQueue::Enqueue
          (FImageWriteQueue *this,TFuture<bool> *__return_storage_ptr__,
          TUniquePtr<IImageWriteTaskBase,TDefaultDelete<IImageWriteTaskBase>_> *param_1,bool param_2
          )

{
  FWindowsRecursiveMutex *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TFutureState<bool> *pTVar5;
  FEvent *pFVar6;
  TFuture<bool> *pTVar7;
  FQueuedImageWrite *pFVar8;
  TFutureState<bool> *pTVar9;
  TFutureState<bool> *this_00;
  TFutureState<bool> *pTVar10;
  TFutureState<bool> *pTVar11;
  undefined1 local_res8 [8];
  
  if (this->bPendingShutdown != (FThreadSafeBool)0x0) {
    local_res8[0] = 0;
    bVar4 = `FImageWriteQueue::Enqueue'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar4) goto LAB_1446ecad7;
  }
  if (param_2) {
    while ((int)this->MaxQueueSize <= (int)this->NumPendingTasks) {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId422,"FImageWriteQueue::EnqueueWait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteQueue.cpp"
                   ,0x1a6);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId422);
      }
      (**(code **)(this->OnTaskCompletedEvent->_padding_ + 0x20))
                (this->OnTaskCompletedEvent,0xffffffff,0);
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  else if ((int)this->MaxQueueSize <= (int)this->NumPendingTasks) {
    if (2 < (byte)LogImageWriteQueue._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWriteQueue);
    }
LAB_1446ecad7:
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  pTVar5 = ::operator_new(0x90);
  if (pTVar5 == (TFutureState<bool> *)0x0) {
    pTVar5 = (TFutureState<bool> *)0x0;
    pTVar9 = (TFutureState<bool> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    *(atomic<int> *)&pTVar5->field_0x8 = (atomic<int>)0x1;
    ((atomic<int> *)&pTVar5->field_0x8)[1] = (atomic<int>)0x1;
    *(undefined ***)&pTVar5->field_0x0 =
         &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar5->field_0x10 = 0;
    *(undefined8 *)(&pTVar5->field_0x10 + 8) = 0;
    *(undefined8 *)&pTVar5->field_0x20 = 0;
    *(undefined8 *)(&pTVar5->field_0x20 + 8) = 0;
    *(undefined8 *)(&pTVar5->field_0x28 + 8) = 0;
    *(undefined8 *)(&pTVar5->field_0x28 + 0x10) = 0;
    *(undefined8 *)&pTVar5->field_0x40 = 0;
    *(undefined8 *)(&pTVar5->field_0x40 + 8) = 0;
    *(undefined8 *)&pTVar5->field_0x50 = 0;
    *(undefined8 *)&pTVar5->field_0x58 = 0;
    *(undefined8 *)&pTVar5->field_0x60 = 0;
    *(undefined8 *)&pTVar5->field_0x68 = 0;
    *(undefined8 *)&pTVar5->Result = 0;
    *(undefined8 *)&pTVar5->field_0x78 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar5->field_0x10,4000);
    *(undefined8 *)&pTVar5->field_0x40 = 0;
    *(undefined8 *)&pTVar5->field_0x68 = 0;
    pFVar6 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar9 = (TFutureState<bool> *)&pTVar5->field_0x10;
    *(FEvent **)&pTVar5->Result = pFVar6;
    pTVar5->field_0x78 = 0;
    if ((pTVar9 == (TFutureState<bool> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<bool> *)(*pcVar3)();
      return pTVar7;
    }
    LOCK();
    *(atomic<int> *)&pTVar5->field_0x8 = (atomic<int>)((int)*(atomic<int> *)&pTVar5->field_0x8 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar5);
    if ((pTVar9 == (TFutureState<bool> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<bool> *)(*pcVar3)();
      return pTVar7;
    }
    LOCK();
    *(atomic<int> *)&pTVar5->field_0x8 = (atomic<int>)((int)*(atomic<int> *)&pTVar5->field_0x8 + 1);
    UNLOCK();
  }
  this_00 = (TFutureState<bool> *)0x0;
  pFVar1 = &this->FenceMutex;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_1446ecd2c:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  uVar2 = this->CurrentFenceID;
  this->CurrentFenceCount = this->CurrentFenceCount + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pFVar8 = ::operator_new(0x40);
  pTVar10 = pTVar9;
  pTVar11 = pTVar5;
  if (pFVar8 != (FQueuedImageWrite *)0x0) {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FQueuedImageWrite__6B_;
    pFVar8->FenceID = uVar2;
    pFVar8->Owner = this;
    (pFVar8->Task).Ptr = param_1->Ptr;
    param_1->Ptr = (IImageWriteTaskBase *)0x0;
    (pFVar8->Promise).State.Object = pTVar9;
    (pFVar8->Promise).State.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pTVar5;
    (pFVar8->Promise).bFutureRetrieved = true;
    pTVar10 = this_00;
    pTVar11 = this_00;
    this_00 = (TFutureState<bool> *)pFVar8;
  }
  if (this->ThreadPool == (FQueuedThreadPool *)0x0) {
    FQueuedImageWrite::RunTaskOnCurrentThread((FQueuedImageWrite *)this_00);
  }
  else {
    pFVar1 = &this->ThreadPoolMutex;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1446ecd2c;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    (**(code **)((longlong)*this->ThreadPool + 0x18))(this->ThreadPool,this_00,3);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  LOCK();
  this->NumPendingTasks = (TAtomic<int>)((int)this->NumPendingTasks + 1);
  UNLOCK();
  *(TFutureState<bool> **)__return_storage_ptr__ = pTVar9;
  *(TFutureState<bool> **)&__return_storage_ptr__->field_0x8 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pTVar10 != (TFutureState<bool> *)0x0) && (pTVar10->field_0x68 == '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TFuture<bool> *)(*pcVar3)();
    return pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar11);
  return __return_storage_ptr__;
}

// GetNumPendingTasks @ 1446ee390

int __thiscall FImageWriteQueue::GetNumPendingTasks(FImageWriteQueue *this)

{
  return (int)this->NumPendingTasks;
}

// OnCVarsChanged @ 1446ee7c0

void __thiscall FImageWriteQueue::OnCVarsChanged(FImageWriteQueue *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  int iVar3;
  TAtomic<int> TVar4;
  longlong lVar5;
  
  RecreateThreadPool(this);
  pTVar1 = CVarImageWriteQueueMaxQueueSize.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar5 = 4;
      goto LAB_1446ee7f4;
    }
  }
  lVar5 = 0;
LAB_1446ee7f4:
  TVar4 = *(TAtomic<int> *)((longlong)pTVar1->ShadowedValue + lVar5);
  if (TVar4 == (TAtomic<int>)0xffffffff) {
    if (this->ThreadPool != (FQueuedThreadPool *)0x0) {
      iVar3 = (**(code **)((longlong)*this->ThreadPool + 0x28))();
      LOCK();
      this->MaxQueueSize = (TAtomic<int>)(iVar3 << 2);
      UNLOCK();
      return;
    }
    TVar4 = (TAtomic<int>)0x10;
  }
  LOCK();
  this->MaxQueueSize = TVar4;
  UNLOCK();
  return;
}

// OnTaskCompleted @ 1446ee8b0

void __thiscall FImageWriteQueue::OnTaskCompleted(FImageWriteQueue *this,uint param_1)

{
  DecrementFence(this,param_1);
  LOCK();
  this->NumPendingTasks = (TAtomic<int>)((int)this->NumPendingTasks + -1);
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001446ee8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->OnTaskCompletedEvent->_padding_ + 0x10))();
  return;
}

// RecreateThreadPool @ 1446ef2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FImageWriteQueue::RecreateThreadPool(FImageWriteQueue *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  FQueuedThreadPoolWrapper *pFVar9;
  FQueuedThreadPoolWrapper *pFVar10;
  FQueuedThreadPool *pFVar11;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar4) {
    return;
  }
  lpCriticalSection = &this->ThreadPoolMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = CVarImageWriteQueueMaxConcurrency.Ref;
  bVar4 = IsInParallelGameThread();
  pFVar10 = (FQueuedThreadPoolWrapper *)0x0;
  if (!bVar4) {
    bVar4 = IsInGameThread();
    pFVar9 = (FQueuedThreadPoolWrapper *)&DAT_00000004;
    if (!bVar4) goto LAB_1446ef324;
  }
  pFVar9 = pFVar10;
LAB_1446ef324:
  iVar6 = *(int *)((longlong)(pFVar9->Lock).CriticalSection.Opaque1 +
                  (longlong)(pTVar3->ShadowedValue + -2));
  if (iVar6 == -1) {
    iVar6 = FWindowsPlatformMisc::NumberOfCores();
  }
  if ((this->ThreadPool != (FQueuedThreadPool *)0x0) &&
     (iVar7 = (**(code **)((longlong)*this->ThreadPool + 0x28))(), iVar6 != iVar7)) {
    local_58[0] = 0;
    local_30 = (longlong *)0x0;
    plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x10))(this,local_98,local_58);
    if (*plVar8 != 0) {
      do {
        do {
        } while (*plVar8 == 0);
        plVar1 = *(longlong **)(*plVar8 + 0x60);
        cVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      } while (cVar5 == '\0');
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if (local_58[0] != 0) {
      plVar8 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar8 = local_30;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (this->bOwnedThreadPool == false) {
      if ((this->ThreadPool != GIOThreadPool) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadPool == GIOThreadPool",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteQueue.cpp"
                             ,0x113,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (**(code **)((longlong)*this->ThreadPool + 0x10))();
      pFVar11 = this->ThreadPool;
      if (pFVar11 != (FQueuedThreadPool *)0x0) {
        (**(code **)((longlong)*pFVar11 + 0x30))(pFVar11,1);
      }
    }
    this->ThreadPool = (FQueuedThreadPool *)0x0;
  }
  if (this->ThreadPool == (FQueuedThreadPool *)0x0) {
    iVar7 = (**(code **)((longlong)*GIOThreadPool + 0x28))();
    if (iVar6 == iVar7) {
      this->bOwnedThreadPool = false;
      this->ThreadPool = GIOThreadPool;
    }
    else if ((GThreadPool == (FQueuedThreadPool *)0x0) ||
            (iVar7 = (**(code **)((longlong)*GThreadPool + 0x28))(), iVar7 < iVar6)) {
      this->bOwnedThreadPool = true;
      pFVar11 = FQueuedThreadPool::Allocate();
      this->ThreadPool = pFVar11;
      local_a8 = L"UnknownThreadPool";
      cVar5 = (**(code **)*pFVar11)(pFVar11,iVar6,0x1400,0);
      if ((cVar5 == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadPool->Create(MaxConcurrency, 5 * 1024)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteQueue.cpp"
                             ,299,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this->bOwnedThreadPool = true;
      pFVar9 = ::operator_new(0x160);
      if (pFVar9 != (FQueuedThreadPoolWrapper *)0x0) {
        local_78 = &
                   ___7__TFunction_OwnedObject_P6A_AW4EQueuedWorkPriority__W41__Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_60 = 0;
        local_70 = DefaultQueuedWorkPriorityWrapper::<lambda>::<lambda_invoker_cdecl>;
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),enum_EQueuedWorkPriority,enum_EQueuedWorkPriority>
                      ::Call;
        pFVar10 = FQueuedThreadPoolWrapper::FQueuedThreadPoolWrapper
                            (pFVar9,GThreadPool,iVar6,
                             (TFunction<EQueuedWorkPriority___cdecl(EQueuedWorkPriority)> *)local_88
                            );
      }
      this->ThreadPool = (FQueuedThreadPool *)pFVar10;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// operator() @ 1504c27d0

bool __thiscall `FImageWriteQueue::Enqueue'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8573850845714579868>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8573850845714579868>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

