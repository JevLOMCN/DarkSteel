// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 368

// `dynamic_initializer_for_'FClientLobbyDataTestAutomationTestInstance'' @ 14144f8c0

void __cdecl
UE::Online::`anonymous_namespace'::
_dynamic_initializer_for__FClientLobbyDataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FClientLobbyDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FClientLobbyDataTestAutomationTestInstance,&local_18,false);
  FClientLobbyDataTestAutomationTestInstance._0_8_ = &___7FClientLobbyDataTest_Online_UE__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FClientLobbyDataTestAutomationTestInstance__);
  return;
}

// `scalar_deleting_destructor' @ 14efd2c30

void * __thiscall
UE::Online::FClientLobbyDataTest::_scalar_deleting_destructor_
          (FClientLobbyDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Add<`UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>_> @ 14efd5130

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>::
Add<_UE::Online::Private::AwaitInvitation_::__l2::<lambda_1>_>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,<lambda_1> *param_1)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ulong64 *puVar7;
  FDelegateHandle FVar8;
  undefined1 local_res8 [8];
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  FVar8.ID = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar5 = Core::Private::DelegateAllocate(0x30,&local_70);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy,`UE::Online::Private::AwaitInvitation'::`2'::<lambda_1>_>
               ::_vftable_;
    *(uint *)(puVar5 + 3) = (param_1->TargetAccountId).Value;
    *(uint *)((longlong)puVar5 + 0x1c) = (param_1->LobbyId).Value;
    puVar5[4] = (param_1->AwaitState).Object;
    pTVar2 = (param_1->AwaitState).SharedReferenceCount.ReferenceController;
    puVar5[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FReadAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar3 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar7 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        FVar8.ID = *puVar7;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar4 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      (this_00->InvocationList).ArrayNum = iVar4 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((this_00->InvocationList).AllocatorInstance.Data + (longlong)iVar4 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
      goto LAB_14efd52a2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_14efd52a2:
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>
            (__return_storage_ptr__,FVar8,&this->DelegateRef);
  return __return_storage_ptr__;
}

// Add<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l2::<lambda_1>_> @ 14efd5350

FOnlineEventDelegateHandle * __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>
::
Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start_::__l2::<lambda_1>_>
          (TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>
           *this,FOnlineEventDelegateHandle *__return_storage_ptr__,<lambda_1> *param_1)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  FDelegateHandle FVar7;
  undefined1 local_res8 [8];
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  FVar7.ID = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = Core::Private::DelegateAllocate(0x30,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__AEBV__TOnlineResult_UFFunctionalTestLobbies_Online_UE___23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__AEBV__TOnlineResult_UFFunctionalTestLobbies_Online_UE___23__ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Start___TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_23_UEAAXXZ___V__6B_
    ;
    puVar4[3] = param_1->__this;
    puVar4[4] = (param_1->WeakThis).Object;
    puVar4[5] = (param_1->WeakThis).WeakReferenceCount.ReferenceController;
    (param_1->WeakThis).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_1->WeakThis).Object = (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FReadAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        FVar7.ID = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      (this_00->InvocationList).ArrayNum = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((this_00->InvocationList).AllocatorInstance.Data + (longlong)iVar3 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
      goto LAB_14efd54bd;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_14efd54bd:
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>
            (__return_storage_ptr__,FVar7,&this->DelegateRef);
  return __return_storage_ptr__;
}

// Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_> @ 14efd5db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  bool bVar8;
  int iVar9;
  TFuture<void> *pTVar10;
  FTSTicker *this;
  TFutureState<void> *pTVar11;
  FRunnableThread *pFVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code **ppcVar15;
  bool *pbVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  TFutureState<void> *pTVar19;
  TFutureState<void> *pTVar20;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  TPromise<void> local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  bool *local_e0;
  TFutureState<void> *local_d8;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  bool *local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar19 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_108.State.Object = (TFutureState<void> *)0x0;
  local_e0 = FMemory::Malloc(0x28,8);
  *(undefined ***)local_e0 =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ__00_00_Function_Private_Core_UE__6B_
  ;
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)(local_e0 + 8) = param_2->__this;
  *(int *)(local_e0 + 0x10) = param_2->StepToExecute;
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)(local_e0 + 0x18) =
       (param_2->WeakThis).Object;
  *(TReferenceControllerBase<1> **)(local_e0 + 0x20) =
       (param_2->WeakThis).WeakReferenceCount.ReferenceController;
  if ((code *)(local_e0 + 8) != (code *)0x0) {
    local_108.State.Object =
         (TFutureState<void> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>,void>
         ::Call;
  }
  (param_2->WeakThis).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->WeakThis).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,&local_108,
               (Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar9 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (code *)CONCAT44(local_108._20_4_,local_108._16_4_);
    pcStack_c0 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_d8 = local_108.State.Object;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_98 = local_1a8.bFutureRetrieved;
    local_e0 = (bool *)0x0;
    local_b8 = local_e8;
    local_108.State.Object = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar15 = local_60 + 2;
    *ppcVar15 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (bool *)0x0;
    local_60[4] = local_c8;
    local_60[5] = pcStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar15 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar15 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar15 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar15 = local_60;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar8 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      ppcVar15 = &local_c8;
      if ((code **)local_b0 != (code **)0x0) {
        ppcVar15 = (code **)local_b0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    break;
  case Thread:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar18.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar12 = FRunnableThread::Create
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadIfForkSafe:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar8) || (bVar8 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar8)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar18.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar12 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadPool:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar13 = operator_new(0x60);
      if (puVar13 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar13[1] = 0;
        *puVar13 = &___7__TAsyncQueuedWork_X__6B_;
        puVar13[2] = local_108.State.Object;
        puVar13[7] = local_e0;
        local_e0 = (bool *)0x0;
        *(undefined4 *)(puVar13 + 4) = local_108._16_4_;
        *(undefined4 *)((longlong)puVar13 + 0x24) = local_108._20_4_;
        *(undefined4 *)(puVar13 + 5) = uStack_f0;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_ec;
        puVar13[6] = local_e8;
        if (puVar13[2] != 0) {
          local_108.State.Object = pTVar19;
        }
        puVar13[8] = local_1a8.State.Object;
        puVar13[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar13 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar13,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  default:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if (local_108.State.Object != (TFutureState<void> *)0x0) {
    pbVar16 = &local_108.bFutureRetrieved;
    if (local_e0 != (bool *)0x0) {
      pbVar16 = local_e0;
    }
    (**(code **)(*(longlong *)pbVar16 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar17 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l2::<lambda_1>_> @ 14efd6ce0

TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__AEBV__TOnlineResult_UFFunctionalTestLobbies_Online_UE___23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__AEBV__TOnlineResult_UFFunctionalTestLobbies_Online_UE___23__ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Start___TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_23_UEAAXXZ___V__6B_
    ;
    puVar2[3] = param_1->__this;
    puVar2[4] = (param_1->WeakThis).Object;
    puVar2[5] = (param_1->WeakThis).WeakReferenceCount.ReferenceController;
    (param_1->WeakThis).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_1->WeakThis).Object = (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),``UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efd6da0

TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),__UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFCreateLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFCreateLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____CaptureOperationStepResult_UFCreateLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFCreateLobby_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_AEBVFString__V__FBindOperation_UFCreateLobby_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FCreateLobby_23__Z___V__6B_
    ;
    puVar3[3] = (param_1->Promise).Object;
    pTVar2 = (param_1->Promise).SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3[5] = (param_1->Op).Object;
    pTVar2 = (param_1->Op).SharedReferenceCount.ReferenceController;
    puVar3[6] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    ::FString::FString((FString *)(puVar3 + 7),&param_1->ResultKey);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),``UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efd6e80

TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),__UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFFindLobbies_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFFindLobbies_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____CaptureOperationStepResult_UFFindLobbies_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFFindLobbies_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_AEBVFString__V__FBindOperation_UFFindLobbies_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FFindLobbies_23__Z___V__6B_
    ;
    puVar3[3] = (param_1->Promise).Object;
    pTVar2 = (param_1->Promise).SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3[5] = (param_1->Op).Object;
    pTVar2 = (param_1->Op).SharedReferenceCount.ReferenceController;
    puVar3[6] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    ::FString::FString((FString *)(puVar3 + 7),&param_1->ResultKey);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&),``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efd6f60

TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&),__UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFInviteLobbyMember_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFInviteLobbyMember_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____ConsumeOperationStepResult_UFInviteLobbyMember_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFInviteLobbyMember_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_V__FBindOperation_UFInviteLobbyMember_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FInviteLobbyMember_23__Z___V__6B_
    ;
    puVar3[3] = (param_1->Promise).Object;
    pTVar2 = (param_1->Promise).SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3[5] = (param_1->Op).Object;
    pTVar2 = (param_1->Op).SharedReferenceCount.ReferenceController;
    puVar3[6] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&),``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efd7030

TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&),__UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFJoinLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFJoinLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____ConsumeOperationStepResult_UFJoinLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFJoinLobby_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_V__FBindOperation_UFJoinLobby_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FJoinLobby_23__Z___V__6B_
    ;
    puVar3[3] = (param_1->Promise).Object;
    pTVar2 = (param_1->Promise).SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3[5] = (param_1->Op).Object;
    pTVar2 = (param_1->Op).SharedReferenceCount.ReferenceController;
    puVar3[6] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&),``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efd7100

TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&),__UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFLeaveLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFLeaveLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____ConsumeOperationStepResult_UFLeaveLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFLeaveLobby_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_V__FBindOperation_UFLeaveLobby_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FLeaveLobby_23__Z___V__6B_
    ;
    puVar3[3] = (param_1->Promise).Object;
    pTVar2 = (param_1->Promise).SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3[5] = (param_1->Op).Object;
    pTVar2 = (param_1->Op).SharedReferenceCount.ReferenceController;
    puVar3[6] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&),``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efd71d0

TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&),__UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFModifyLobbyAttributes_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFModifyLobbyAttributes_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____ConsumeOperationStepResult_UFModifyLobbyAttributes_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFModifyLobbyAttributes_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_V__FBindOperation_UFModifyLobbyAttributes_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FModifyLobbyAttributes_23__Z___V__6B_
    ;
    puVar3[3] = (param_1->Promise).Object;
    pTVar2 = (param_1->Promise).SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3[5] = (param_1->Op).Object;
    pTVar2 = (param_1->Op).SharedReferenceCount.ReferenceController;
    puVar3[6] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&),``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efd72a0

TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::Online::Private::
          ConstructFunctionDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&),__UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFModifyLobbyMemberAttributes_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFModifyLobbyMemberAttributes_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____ConsumeOperationStepResult_UFModifyLobbyMemberAttributes_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFModifyLobbyMemberAttributes_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_V__FBindOperation_UFModifyLobbyMemberAttributes_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FModifyLobbyMemberAttributes_23__Z___V__6B_
    ;
    puVar3[3] = (param_1->Promise).Object;
    pTVar2 = (param_1->Promise).SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3[5] = (param_1->Op).Object;
    pTVar2 = (param_1->Op).SharedReferenceCount.ReferenceController;
    puVar3[6] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// ConstructItems<UE::Online::FFindLobbySearchFilter,UE::Online::FFindLobbySearchFilter,int> @ 14efd7370

void __cdecl
ConstructItems<UE::Online::FFindLobbySearchFilter,UE::Online::FFindLobbySearchFilter,int>
          (void *param_1,FFindLobbySearchFilter *param_2,int param_3)

{
  FFindLobbySearchFilter *pFVar1;
  undefined8 *puVar2;
  FSchemaVariant *pFVar3;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    pFVar1 = param_2;
    do {
      pFVar3 = &pFVar1->ComparisonValue;
      *puVar2 = *(undefined8 *)
                 ((longlong)param_2 + (longlong)(puVar2 + 2) + (-0x10 - (longlong)param_1));
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((longlong)(pFVar3 + -1) + 0x18);
      UE::Online::FSchemaVariant::FSchemaVariant((FSchemaVariant *)(puVar2 + 2),pFVar3);
      pFVar1 = (FFindLobbySearchFilter *)(pFVar3 + 1);
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,int> @ 14efd80b0

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,int>
          (TNotificationInfo<UE::Online::FLobbyAttributesChanged> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Online::FLobbyAttributesChanged::~FLobbyAttributesChanged(&param_1->Notification);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationAdded>,int> @ 14efd80f0

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationAdded>,int>
          (TNotificationInfo<UE::Online::FLobbyInvitationAdded> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationRemoved>,int> @ 14efd8130

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationRemoved>,int>
          (TNotificationInfo<UE::Online::FLobbyInvitationRemoved> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyJoined>,int> @ 14efd8170

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyJoined>,int>
          (TNotificationInfo<UE::Online::FLobbyJoined> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeaderChanged>,int> @ 14efd81b0

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeaderChanged>,int>
          (TNotificationInfo<UE::Online::FLobbyLeaderChanged> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeft>,int> @ 14efd81f0

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeft>,int>
          (TNotificationInfo<UE::Online::FLobbyLeft> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,int> @ 14efd8230

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,int>
          (TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Online::FLobbyMemberAttributesChanged::~FLobbyMemberAttributesChanged
              (&param_1->Notification);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberJoined>,int> @ 14efd8270

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberJoined>,int>
          (TNotificationInfo<UE::Online::FLobbyMemberJoined> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,int> @ 14efd82b0

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,int>
          (TNotificationInfo<UE::Online::FLobbyMemberLeft> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbySchemaChanged>,int> @ 14efd82f0

void __cdecl
DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbySchemaChanged>,int>
          (TNotificationInfo<UE::Online::FLobbySchemaChanged> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Notification).Lobby.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,int> @ 14efd8330

void __cdecl
DestructItems<TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,int>
          (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,int> @ 14efd8370

void __cdecl
DestructItems<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,int>
          (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = &param_1->field_0x8;
    do {
      bVar1 = puVar4[0x28];
      if ((1 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLogoutUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(puVar4);
      puVar4 = puVar4 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Do<`UE::Online::Meta::VisitFields<UE::Online::FFunctionalTestConfig_&,`UE::Online::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,TTuple<UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>_>_const_&> @ 14efd8400

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::Online::Meta::VisitFields<UE::Online::FFunctionalTestConfig_&,_UE::Online::LoadConfig<UE::Online::FFunctionalTestConfig>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,TTuple<UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>_>_const_&>
          (<lambda_1> *param_1,
          TTuple<UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>,UE::Online::Meta::Private::TField<UE::Online::FFunctionalTestConfig,FString>_>
          *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  byte bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  pwVar5 = L"";
  bVar1 = *(byte *)puVar2[2];
  if (*(int *)((undefined8 *)puVar2[1] + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)puVar2[1];
  }
  bVar3 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                    ((longlong *)*puVar2,pwVar4,*(undefined8 *)&param_2->field_0x8,
                     (longlong)*(int *)param_2 + *(longlong *)param_1);
  *(byte *)puVar2[2] = bVar3 | bVar1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  bVar1 = *(byte *)puVar2[2];
  if (*(int *)((undefined8 *)puVar2[1] + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)puVar2[1];
  }
  bVar3 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                    ((longlong *)*puVar2,pwVar4,*(undefined8 *)&param_2->field_0x18,
                     (longlong)*(int *)&param_2->field_0x10 + *(longlong *)param_1);
  *(byte *)puVar2[2] = bVar3 | bVar1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  bVar1 = *(byte *)puVar2[2];
  if (*(int *)((undefined8 *)puVar2[1] + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)puVar2[1];
  }
  bVar3 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                    ((longlong *)*puVar2,pwVar4,*(undefined8 *)&param_2->field_0x28,
                     (longlong)*(int *)&param_2->field_0x20 + *(longlong *)param_1);
  *(byte *)puVar2[2] = bVar3 | bVar1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  bVar1 = *(byte *)puVar2[2];
  if (*(int *)((undefined8 *)puVar2[1] + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)puVar2[1];
  }
  bVar3 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                    ((longlong *)*puVar2,pwVar4,*(undefined8 *)&param_2->field_0x38,
                     (longlong)*(int *)&param_2->field_0x30 + *(longlong *)param_1);
  *(byte *)puVar2[2] = bVar3 | bVar1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  bVar1 = *(byte *)puVar2[2];
  if (*(int *)((undefined8 *)puVar2[1] + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)puVar2[1];
  }
  bVar3 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                    ((longlong *)*puVar2,pwVar4,*(undefined8 *)&param_2->field_0x48,
                     (longlong)*(int *)&param_2->field_0x40 + *(longlong *)param_1);
  *(byte *)puVar2[2] = bVar3 | bVar1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  bVar1 = *(byte *)puVar2[2];
  if (*(int *)((undefined8 *)puVar2[1] + 1) != 0) {
    pwVar5 = *(wchar_t **)puVar2[1];
  }
  bVar3 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                    ((longlong *)*puVar2,pwVar5,*(undefined8 *)&param_2->field_0x58,
                     (longlong)*(int *)&param_2->field_0x50 + *(longlong *)param_1);
  *(byte *)puVar2[2] = bVar3 | bVar1;
  return;
}

// Execute<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_> @ 14efd93f0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::
Execute<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>_>
          (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this,
          FOnlineAsyncExecutionPolicy param_1,<lambda_1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar4;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar5;
  bool bVar6;
  FTSTicker *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  EAsyncExecution EVar9;
  TReferenceControllerBase<1> *pTVar10;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  undefined1 local_58 [16];
  bool local_48;
  FDelegateAllocation *local_40;
  undefined8 local_30;
  
  if (param_1.ExecutionPolicy == RunOnGameThread) {
    bVar6 = IsInGameThread();
    if (bVar6) {
      `UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::
      <lambda_1>::operator()(param_2);
      return;
    }
    ExecuteOnGameThread<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>_>
              (L"FunctionalTest",param_2);
    return;
  }
  if (param_1.ExecutionPolicy != RunOnNextTick) {
    if (param_1.ExecutionPolicy == RunOnThreadPool) {
      EVar9 = ThreadPool;
    }
    else {
      if (param_1.ExecutionPolicy != RunOnTaskGraph) {
        if (param_1.ExecutionPolicy != RunImmediately) {
          return;
        }
        `UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::
        <lambda_1>::operator()(param_2);
        return;
      }
      EVar9 = TaskGraph;
    }
    local_30 = 0;
    local_58._0_8_ = 0;
    Async<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>_>
              ((TFuture<void> *)&local_88,EVar9,param_2,
               (TUniqueFunction<void___cdecl(void)> *)local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.WeakReferenceCount.ReferenceController);
    return;
  }
  this_00 = FTSTicker::GetCoreTicker();
  pTVar4 = param_2->__this;
  iVar3 = param_2->StepToExecute;
  pTVar5 = (param_2->WeakThis).Object;
  pTVar10 = (param_2->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)local_58);
  local_40 = &local_70;
  puVar7 = Core::Private::DelegateAllocate(0x38,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy__V<lambda_1>__3____Execute_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ____TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXVFOnlineAsyncExecutionPolicy_45___QEAV2_7__ExecuteNextStep_345_QEAAXXZ__Z___V__6B_
    ;
    puVar7[6] = pTVar10;
    puVar7[3] = pTVar4;
    *(int *)(puVar7 + 4) = iVar3;
    puVar7[5] = pTVar5;
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._8_8_,(FDestructionSentinel *)local_58);
  }
  FTSTicker::AddTicker
            (this_00,&local_88,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_78
             ,0.0);
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_88.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)local_58);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._8_8_,(FDestructionSentinel *)local_58);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  return;
}

// ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_> @ 14efd9670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ExecuteOnGameThread<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar4;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FTSTicker *this;
  code **ppcVar7;
  undefined1 auStackY_a8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  this = FTSTicker::GetCoreTicker();
  pTVar4 = param_2->__this;
  iVar3 = param_2->StepToExecute;
  pTVar5 = (param_2->WeakThis).Object;
  pTVar6 = (param_2->WeakThis).WeakReferenceCount.ReferenceController;
  (param_2->WeakThis).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->WeakThis).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x28,8);
  local_40[1] = (code *)pTVar4;
  *(int *)(local_40 + 2) = iVar3;
  *local_40 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____ExecuteOnGameThread_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ___YAXPEB_W__QEAV1_7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ__Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_40[3] = (code *)pTVar5;
  local_40[4] = (code *)pTVar6;
  if (local_40 != (code **)&DAT_fffffffffffffff8) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker(this,&local_78,param_1,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_68[0] != (code *)0x0) {
    ppcVar7 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar7 = local_40;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  return;
}

// MakeFulfilledPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_> @ 14efdaaa0

TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
* __cdecl MakeFulfilledPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                    (TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__)

{
  TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  *this;
  code *pcVar1;
  bool bVar2;
  TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  ::
  TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__);
  if ((__return_storage_ptr__->State).Object ==
      (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
    if ((__return_storage_ptr__->State).Object ==
        (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  this = (__return_storage_ptr__->State).Object;
  if (*(TAtomic<bool> *)&this->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  (this->Result).Pad[0] = '\0';
  (this->Result).Pad[1] = '\0';
  (this->Result).Pad[2] = '\0';
  (this->Result).Pad[3] = '\0';
  (this->Result).Pad[4] = '\0';
  (this->Result).Pad[5] = '\0';
  (this->Result).Pad[6] = '\0';
  (this->Result).Pad[7] = '\0';
  (this->Result).Pad[8] = '\0';
  (this->Result).Pad[9] = '\0';
  (this->Result).Pad[10] = '\0';
  (this->Result).Pad[0xb] = '\0';
  (this->Result).Pad[0xc] = '\0';
  (this->Result).Pad[0xd] = '\0';
  (this->Result).Pad[0xe] = '\0';
  (this->Result).Pad[0xf] = '\0';
  FFutureState::MarkComplete((FFutureState *)this);
  return __return_storage_ptr__;
}

// MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>,UE::Online::FOnlineError> @ 14efdab70

TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> * __cdecl
MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>,UE::Online::FOnlineError>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
           *__return_storage_ptr__,FOnlineError *param_1)

{
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
            (__return_storage_ptr__);
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
  EmplaceValue<UE::Online::FOnlineError>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,UE::Online::Private::FFunctionalTestLogoutUser::Result> @ 14efdabb0

TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> * __cdecl
MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,UE::Online::Private::FFunctionalTestLogoutUser::Result>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *__return_storage_ptr__,Result *param_1)

{
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
            (__return_storage_ptr__);
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
  EmplaceValue<UE::Online::Private::FFunctionalTestLogoutUser::Result>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,UE::Online::FOnlineError> @ 14efdabf0

TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> * __cdecl
MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,UE::Online::FOnlineError>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *__return_storage_ptr__,FOnlineError *param_1)

{
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
            (__return_storage_ptr__);
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
  EmplaceValue<UE::Online::FOnlineError>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// MakeShared<TPromise<void>,1> @ 14efdac30

TSharedRef<TPromise<void>,1> * __cdecl
MakeShared<TPromise<void>,1>(TSharedRef<TPromise<void>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TPromise<void>,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TPromise<void> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TPromise_X___00_SharedPointerInternals__6B_;
    TPromise<void>::TPromise<void>((TPromise<void> *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (TPromise<void> *)(pTVar3 + 1);
    if ((TPromise<void> *)(pTVar3 + 1) == (TPromise<void> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TPromise<void>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdace0

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdad60

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdade0

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdae60

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdaee0

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdaf60

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdafe0

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14efdb060

TFuture<void> * __thiscall
TFutureBase<void>::
Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  <lambda_1> local_28;
  
  local_28.Continuation.__this = param_1->__this;
  local_28.Continuation.WeakOperation.Object = (param_1->WeakOperation).Object;
  local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
       (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  (param_1->WeakOperation).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WeakOperation).Object = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,&local_28);
  pTVar3 = (param_1->WeakOperation).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// NoneOf<TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_>,``UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efdb0e0

bool __cdecl
Algo::
NoneOf<TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_>,__UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 8) == 0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return true;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_22>_> @ 14efdb150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_22>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          int *param_2,<lambda_22> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_88 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_68;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_68);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x30,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_22>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  puVar12[4] = param_2;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_22>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar12,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar8;
  local_58 = (code *)lVar9;
  uStack_50 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_48;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_13>_> @ 14efdbf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_13>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>
          *param_2,<lambda_13> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_88 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_68;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_68);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x30,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_13>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  puVar12[4] = param_2;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_13>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar12,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar8;
  local_58 = (code *)lVar9;
  uStack_50 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_48;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_10>_> @ 14efdc0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_10>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          <lambda_10> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_10>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_10>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_11>_> @ 14efdc1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_11>_>
          (TStep<UE::Online::FInviteLobbyMember::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_11> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_11>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_11>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_14>_> @ 14efdc2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_14>_>
          (TStep<UE::Online::FJoinLobby::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_14> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_14>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_14>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_15>_> @ 14efdc410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_15>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          <lambda_15> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_15>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_15>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_16>_> @ 14efdc530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_16>_>
          (TStep<UE::Online::FLeaveLobby::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_16> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_16>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_16>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_17>_> @ 14efdc650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_17>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          <lambda_17> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_17>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_17>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_18>_> @ 14efdc770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_18>_>
          (TStep<UE::Online::FLeaveLobby::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_18> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_18>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_18>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_19>_> @ 14efdc890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_19>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          <lambda_19> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_19>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_19>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>_> @ 14efdc9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_20>_>
          (TStep<UE::Online::FCreateLobby::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_20> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_20>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>_> @ 14efdcad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_23>_>
          (TStep<UE::Online::FFindLobbies::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_23> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_23>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>_> @ 14efdcbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_4>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          <lambda_4> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_4>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_5>_> @ 14efdcd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_5>_>
          (TStep<UE::Online::FModifyLobbyMemberAttributes::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_5> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_5>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_5>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>_> @ 14efdce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_6>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          <lambda_6> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_6>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_7>_> @ 14efdcf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_7>_>
          (TStep<UE::Online::FLeaveLobby::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_7> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_7>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_7>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_8>_> @ 14efdd070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_8>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          <lambda_8> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_8>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_8>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_9>_> @ 14efdd190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_9>_>
          (TStep<UE::Online::FCreateLobby::Params> *this,
          TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,<lambda_9> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_58);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = this;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_9>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  lVar9 = *(longlong *)&this->ExecFunction;
  uVar10 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar8 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_9>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_48;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar12,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = (code *)lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar13 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar13 = plVar8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetPromiseValue<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_> @ 14efdd480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FutureDetail::
SetPromiseValue<__UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
          (TPromise<void> *param_1,<lambda_1> *param_2,
          TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
          *param_3)

{
  byte bVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers> *pTVar5;
  TResult<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>
  *pTVar6;
  FOnlineError *pFVar7;
  FString local_78;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar5 = TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
           ::Get((TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
                  *)param_3);
  bVar1 = pTVar5->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_`public:___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)>___cdecl_UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params&&___ptr64)>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params&&___ptr64),UE::Online::Private::FFunctionalTestLogoutAllUsers::Params&&___ptr64)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(TFuture<class_UE::Online::TOnlineResult<struct_UE::Online::Private::FFunctionalTestLogoutAllUsers>_>&&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pTVar6 = (TResult<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>
                *)TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
                  ::Get((TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
                         *)param_3);
      pFVar7 = UE::Online::
               TResult<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>
               ::GetErrorValue(pTVar6);
      UE::Online::FOnlineError::GetLogString(pFVar7,&local_78,true);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_`public:___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)>___cdecl_UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params&&___ptr64)>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params&&___ptr64),UE::Online::Private::FFunctionalTestLogoutAllUsers::Params&&___ptr64)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(TFuture<class_UE::Online::TOnlineResult<struct_UE::Online::Private::FFunctionalTestLogoutAllUsers>_>&&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    pTVar2 = (param_2->Op).Object;
    pcVar3 = *(code **)(pTVar2->_padding_ + 8);
    pTVar6 = (TResult<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>
              *)TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
                ::Get((TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
                       *)param_3);
    pFVar7 = UE::Online::
             TResult<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>
             ::GetErrorValue(pTVar6);
    local_40.TypedValue.Details.Object = (pFVar7->Details).Object;
    local_40.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar7->Details).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.Inner.Object = (pFVar7->Inner).Object;
    local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar7->Inner).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.ErrorCode = pFVar7->ErrorCode;
    local_40.bIsSet = true;
    pFVar7 = UE::Online::Errors::RequestFailure(&local_68,&local_40);
    (*pcVar3)(pTVar2,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(&param_2->Promise);
  TPromise<void>::EmplaceValue<>(param_1);
  return;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_> @ 14efddaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
* __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_12>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
                 *__return_storage_ptr__,<lambda_12> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLobbyEvents *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  IStep IVar8;
  IStep IVar9;
  IStep IVar10;
  IStep *pIVar11;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar12;
  undefined8 *puVar13;
  IStep IVar14;
  atomic<int> *paVar15;
  undefined1 auStack_c8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  FFunctionalTestConfig *local_98;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_90;
  IStep local_78;
  IStep IStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  IStep local_58;
  IStep IStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar11 = ::operator_new(0x80);
  if (pIVar11 == (IStep *)0x0) {
    pIVar11 = (IStep *)0x0;
  }
  else {
    *(EOnlineAsyncExecutionPolicy *)(pIVar11 + 1) = param_2.ExecutionPolicy;
    *pIVar11 = (IStep)&
                      ___7__TStep_V__TDefaultErrorResultInternal_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE___Online_UE___Private_Online_UE__6B_
    ;
    pIVar11[2] = (IStep)0x0;
    pIVar11[7] = (IStep)0x0;
    *(undefined1 *)(pIVar11 + 0xf) = 0;
  }
  local_a8.Ptr = pIVar11;
  pTVar12 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_90);
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar12->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (param_1->TestConfig).SharedReferenceCount.ReferenceController;
  local_98 = (param_1->TestConfig).Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar15 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar15 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  pFVar3 = param_1->LobbyEventsPtr;
  local_78 = (IStep)0x0;
  puVar13 = FMemory::Malloc(0x38,8);
  puVar13[3] = pTVar1;
  *puVar13 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_12>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar13[2] = local_a0;
  puVar13[4] = local_98;
  puVar13[1] = pIVar11;
  puVar13[5] = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  puVar13[6] = pFVar3;
  IVar9 = pIVar11[2];
  IVar10 = pIVar11[3];
  uVar4 = *(undefined4 *)(pIVar11 + 4);
  uVar5 = *(undefined4 *)&pIVar11[4].field_0x4;
  uVar6 = *(undefined4 *)(pIVar11 + 5);
  uVar7 = *(undefined4 *)&pIVar11[5].field_0x4;
  IVar14 = pIVar11[6];
  IVar8 = pIVar11[7];
  if (puVar13 + 1 != (undefined8 *)0x0) {
    local_78 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar11[2] = local_78;
  pIVar11[3] = IStack_70;
  IStack_50._0_4_ = SUB84(puVar13,0);
  IStack_50._4_4_ = SUB84((ulonglong)puVar13 >> 0x20,0);
  *(undefined4 *)(pIVar11 + 4) = local_68;
  *(undefined4 *)&pIVar11[4].field_0x4 = uStack_64;
  *(undefined4 *)(pIVar11 + 5) = uStack_60;
  *(undefined4 *)&pIVar11[5].field_0x4 = uStack_5c;
  *(undefined4 *)(pIVar11 + 6) = local_58._0_4_;
  *(undefined4 *)&pIVar11[6].field_0x4 = local_58._4_4_;
  *(undefined4 *)(pIVar11 + 7) = IStack_50._0_4_;
  *(undefined4 *)&pIVar11[7].field_0x4 = IStack_50._4_4_;
  local_68 = uVar4;
  uStack_64 = uVar5;
  uStack_60 = uVar6;
  uStack_5c = uVar7;
  local_58 = IVar14;
  IStack_50 = IVar8;
  local_78 = IVar9;
  IStack_70 = IVar10;
  if (IVar9 != (IStep)0x0) {
    IVar14 = (IStep)&local_68;
    if (IVar8 != (IStep)0x0) {
      IVar14 = IVar8;
    }
    (**(code **)(*(longlong *)IVar14 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_a8);
  __return_storage_ptr__->_padding_ = (longlong)(pIVar11 + 8);
  __return_storage_ptr__->OwningOperation = this_00;
  if (local_a8.Ptr != (IStep *)0x0) {
    (**(code **)*local_a8.Ptr)(local_a8.Ptr,1);
  }
  return __return_storage_ptr__;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efddcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efddf78) */
/* WARNING: Removing unreachable block (ram,0x00014efddf81) */
/* WARNING: Removing unreachable block (ram,0x00014efddfa6) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efddf4f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efddf4f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efde010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efde2b8) */
/* WARNING: Removing unreachable block (ram,0x00014efde2c1) */
/* WARNING: Removing unreachable block (ram,0x00014efde2e6) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efde28f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efde28f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efde350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efde5f8) */
/* WARNING: Removing unreachable block (ram,0x00014efde601) */
/* WARNING: Removing unreachable block (ram,0x00014efde626) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efde5cf;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efde5cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efde690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efde938) */
/* WARNING: Removing unreachable block (ram,0x00014efde941) */
/* WARNING: Removing unreachable block (ram,0x00014efde966) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efde90f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efde90f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efde9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efdec78) */
/* WARNING: Removing unreachable block (ram,0x00014efdec81) */
/* WARNING: Removing unreachable block (ram,0x00014efdeca6) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efdec4f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efdec4f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efded10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efdefb8) */
/* WARNING: Removing unreachable block (ram,0x00014efdefc1) */
/* WARNING: Removing unreachable block (ram,0x00014efdefe6) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efdef8f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efdef8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efdf050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efdf2f8) */
/* WARNING: Removing unreachable block (ram,0x00014efdf301) */
/* WARNING: Removing unreachable block (ram,0x00014efdf326) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efdf2cf;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efdf2cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efdf390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efdf675) */
/* WARNING: Removing unreachable block (ram,0x00014efdf67e) */
/* WARNING: Removing unreachable block (ram,0x00014efdf6a3) */

TFuture<void> * __thiscall
TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::
Then<_TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<__UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_12>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
           *this,TFuture<void> *__return_storage_ptr__,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  *lpCriticalSection;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  TFutureState<void> *pTVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  TPromise<void> *this_00;
  longlong *plVar16;
  undefined1 auStack_e8 [32];
  TPromise<void> local_c8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  *local_98;
  TFuture<void> *local_90;
  TFutureState<void> *local_88;
  TReferenceControllerBase<1> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_90 = __return_storage_ptr__;
  if (((this->State).Object ==
       (TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
        *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_c8);
  if ((local_c8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  pTVar12 = local_c8.State.Object;
  local_c8.bFutureRetrieved = true;
  if ((local_c8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_c8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_c8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_c8.State.SharedReferenceCount.ReferenceController;
  if (local_c8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = *param_3;
  local_a8 = param_3[1];
  local_a0 = param_3[2];
  param_3[2] = 0;
  param_3[1] = 0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_98 = (this->State).Object;
  local_c8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[1] = (longlong)pTVar12;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_12>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = local_b0;
  uStack_50[5] = local_a8;
  uStack_50[6] = local_a0;
  uStack_50[7] = (longlong)local_98;
  *(undefined1 *)(uStack_50 + 3) = 1;
  uStack_50[8] = (longlong)pTVar3;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lpCriticalSection = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object =
       (TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
        *)0x0;
  if ((lpCriticalSection ==
       (TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
        *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    if (lpCriticalSection ==
        (TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
         *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
      pcVar4 = *(code **)(&lpCriticalSection->field_0x28 + 8);
      uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
      uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
      uVar7 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
      uVar8 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
      uVar9 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
      uVar10 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
      uVar11 = *(undefined8 *)&lpCriticalSection->field_0x50;
      plVar16 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
      *(code **)(&lpCriticalSection->field_0x28 + 8) = local_78;
      *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar4;
      uStack_70 = uVar5;
      uStack_6c = uVar6;
      local_68 = uVar7;
      uStack_64 = uVar8;
      uStack_60 = uVar9;
      uStack_5c = uVar10;
      local_58 = uVar11;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14efdf64d;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar4 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (TPromise<void> *)(**(code **)(*plVar16 + 8))();
    if (pcVar4 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      local_88 = this_00[2].State.Object;
      local_80 = this_00[2].State.SharedReferenceCount.ReferenceController;
      this_00[2].State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      this_00[2].State.Object = (TFutureState<void> *)0x0;
      `TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
      ::
      Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()
                (this_00 + 1,
                 (TFuture<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
                  *)&local_88);
      TPromise<void>::EmplaceValue<>(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      (*pcVar4)(this_00);
    }
  }
LAB_14efdf64d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.State.SharedReferenceCount.ReferenceController);
  plVar16 = (longlong *)param_3[2];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar16 + 8))(plVar16,1);
    }
  }
  return local_90;
}

// Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efdf710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efdf9b8) */
/* WARNING: Removing unreachable block (ram,0x00014efdf9c1) */
/* WARNING: Removing unreachable block (ram,0x00014efdf9e6) */

TFuture<void> * __thiscall
TFutureBase<int>::
Then<_TFutureBase<int>::Next<__UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_21>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<int> *this,TFuture<void> *__return_storage_ptr__,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<int> *lpCriticalSection;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  TFutureState<void> *pTVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  TFutureState<int> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<int> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  pTVar12 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = *param_3;
  local_98 = param_3[1];
  local_90 = param_3[2];
  param_3[2] = 0;
  param_3[1] = 0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar12;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_21>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[4] = local_a0;
  uStack_50[5] = local_98;
  uStack_50[6] = local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lpCriticalSection = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<int> *)0x0;
  if ((lpCriticalSection == (TFutureState<int> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar4)();
    return pTVar15;
  }
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    if (lpCriticalSection == (TFutureState<int> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
      pcVar4 = *(code **)(&lpCriticalSection->field_0x28 + 8);
      uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
      uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
      uVar7 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
      uVar8 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
      uVar9 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
      uVar10 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
      uVar11 = *(undefined8 *)&lpCriticalSection->field_0x50;
      plVar16 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
      *(code **)(&lpCriticalSection->field_0x28 + 8) = local_78;
      *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar4;
      uStack_70 = uVar5;
      uStack_6c = uVar6;
      local_68 = uVar7;
      uStack_64 = uVar8;
      uStack_60 = uVar9;
      uStack_5c = uVar10;
      local_58 = uVar11;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14efdf98f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar4 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar4 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<int>::
      Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar4)();
    }
  }
LAB_14efdf98f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  plVar16 = (longlong *)param_3[2];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar16 + 8))(plVar16,1);
    }
  }
  return local_80;
}

// Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_> @ 14efdfa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efdfcf8) */
/* WARNING: Removing unreachable block (ram,0x00014efdfd01) */
/* WARNING: Removing unreachable block (ram,0x00014efdfd26) */

TFuture<void> * __thiscall
TFutureBase<void>::
Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFutureState<void> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TFuture<void> *pTVar15;
  void *this_00;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  TPromise<void> local_b8;
  TStep<void> *local_a0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_98;
  TReferenceControllerBase<1> *local_90;
  TFutureState<void> *local_88;
  TFuture<void> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  TPromise<void>::TPromise<void>(&local_b8);
  if ((local_b8.bFutureRetrieved != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar4 = local_b8.State.Object;
  local_b8.bFutureRetrieved = true;
  if ((local_b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  FVar13.ReferenceController = local_b8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_b8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_b8.State.SharedReferenceCount.ReferenceController;
  if (local_b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (param_1->Continuation).__this;
  local_98 = (param_1->Continuation).WeakOperation.Object;
  local_90 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Continuation).WeakOperation.Object =
       (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  local_88 = (this->State).Object;
  local_b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.State.Object = (TFutureState<void> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  uStack_50[8] = (longlong)pTVar3;
  uStack_50[1] = (longlong)pTVar4;
  *uStack_50 = (longlong)
               &
               ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1____Next_V<lambda_1>__5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ____TFutureBase_X__IEAA_A_PV1_5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___56___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__Z____TFutureBase_X__IEAA_A_PV1_1____Next_V<lambda_1>__5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__2_IEAA_A_PV1_5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___56___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  uStack_50[4] = (longlong)local_a0;
  uStack_50[5] = (longlong)local_98;
  uStack_50[6] = (longlong)local_90;
  uStack_50[7] = (longlong)local_88;
  uStack_50[2] = (longlong)FVar13.ReferenceController;
  *(undefined1 *)(uStack_50 + 3) = 1;
  if (uStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar4 = (this->State).Object;
  pTVar3 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((pTVar4 == (TFutureState<void> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TFuture<void> *)(*pcVar5)();
    return pTVar15;
  }
  if ((&pTVar4->field_0x50)[0x18] == '\0') {
    if (pTVar4 == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pTVar4);
    if ((&pTVar4->field_0x50)[0x18] == '\0') {
      pcVar5 = *(code **)(&pTVar4->field_0x28 + 8);
      uVar6 = *(undefined4 *)(&pTVar4->field_0x28 + 0x10);
      uVar7 = *(undefined4 *)(&pTVar4->field_0x28 + 0x14);
      uVar8 = *(undefined4 *)(&pTVar4->field_0x28 + 0x18);
      uVar9 = *(undefined4 *)(&pTVar4->field_0x28 + 0x1c);
      uVar10 = *(undefined4 *)(&pTVar4->field_0x28 + 0x20);
      uVar11 = *(undefined4 *)(&pTVar4->field_0x28 + 0x24);
      uVar12 = *(undefined8 *)&pTVar4->field_0x50;
      plVar16 = *(longlong **)(&pTVar4->field_0x50 + 8);
      *(code **)(&pTVar4->field_0x28 + 8) = local_78;
      *(ulonglong *)(&pTVar4->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&pTVar4->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&pTVar4->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&pTVar4->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&pTVar4->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&pTVar4->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&pTVar4->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar5;
      uStack_70 = uVar6;
      uStack_6c = uVar7;
      local_68 = uVar8;
      uStack_64 = uVar9;
      uStack_60 = uVar10;
      uStack_5c = uVar11;
      local_58 = uVar12;
      uStack_50 = plVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
      goto LAB_14efdfccf;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar4);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::
      Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
  }
LAB_14efdfccf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != (code *)0x0) {
    plVar16 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar16 = uStack_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.State.SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Continuation).WeakOperation.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return local_80;
}

// Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efdfd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<void> * __thiscall
TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
Then<__UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
           *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
  *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  TFutureState<void> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  bool bVar12;
  TFuture<void> *pTVar13;
  longlong *plVar14;
  TPromise<void> *this_00;
  undefined1 auStack_128 [32];
  TPromise<void> local_108;
  TFutureState<void> *local_f0;
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0;
  TFutureState<void> *local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_c0;
  TReferenceControllerBase<1> *local_b8;
  FString local_b0;
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *local_a0;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_90;
  TReferenceControllerBase<1> *local_88;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->State).Object ==
      (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)0x0
     ) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x2aa,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  TPromise<void>::TPromise<void>(&local_108);
  if (local_108.bFutureRetrieved != false) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bFutureRetrieved",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x24d,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  local_108.bFutureRetrieved = true;
  if (local_108.State.Object == (TFutureState<void> *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("State.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x283,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = local_108.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_108.State.SharedReferenceCount.ReferenceController;
  if (local_108.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_108.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  local_e8 = local_108.State.SharedReferenceCount.ReferenceController;
  local_d8 = (param_1->Promise).State.Object;
  local_d0 = (param_1->Promise).State.SharedReferenceCount.ReferenceController;
  (param_1->Promise).State.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Promise).State.Object = (TFutureState<void> *)0x0;
  local_c8 = (param_1->Promise).bFutureRetrieved;
  local_c0 = (param_1->Op).Object;
  local_b8 = (param_1->Op).SharedReferenceCount.ReferenceController;
  local_f0 = local_108.State.Object;
  local_108.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_108.State.Object = (TFutureState<void> *)0x0;
  local_e0 = 1;
  if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b8->SharedReferenceCount = (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_b0,&param_1->ResultKey);
  local_a0 = (this->State).Object;
  local_98 = (this->State).SharedReferenceCount.ReferenceController;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  plVar14 = FMemory::Malloc(0x68,8);
  *plVar14 = (longlong)
             &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1___R1_1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_234__Z2_Z_QEAA_0_Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE____IEAA_A_PV1_1___R1_1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_345__Z2_Z_QEAA_0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar14[1] = (longlong)local_f0;
  plVar14[2] = (longlong)local_e8;
  local_e8 = (TReferenceControllerBase<1> *)0x0;
  local_f0 = (TFutureState<void> *)0x0;
  *(undefined1 *)(plVar14 + 3) = local_e0;
  plVar14[4] = (longlong)local_d8;
  plVar14[5] = (longlong)local_d0;
  local_d0 = (TReferenceControllerBase<1> *)0x0;
  local_d8 = (TFutureState<void> *)0x0;
  *(undefined1 *)(plVar14 + 6) = local_c8;
  plVar14[7] = (longlong)local_c0;
  plVar14[8] = (longlong)local_b8;
  if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b8->SharedReferenceCount = (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_50 = plVar14;
  ::FString::FString((FString *)(plVar14 + 9),&local_b0);
  plVar14[0xb] = (longlong)local_a0;
  plVar14[0xc] = (longlong)local_98;
  if (plVar14 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
              *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  if ((local_d8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_d8 + 0x68) == '\0')) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
  if ((local_f0 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_f0 + 0x68) == '\0')) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  lpCriticalSection = (this->State).Object;
  pTVar1 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object =
       (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
       0x0;
  if (lpCriticalSection ==
      (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)0x0
     ) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    if (lpCriticalSection ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
        0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
      pcVar4 = *(code **)(&lpCriticalSection->field_0x28 + 8);
      uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
      uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
      uVar7 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
      uVar8 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
      uVar9 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
      uVar10 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
      uVar11 = *(undefined8 *)&lpCriticalSection->field_0x50;
      plVar14 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
      *(code **)(&lpCriticalSection->field_0x28 + 8) = local_78;
      *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar4;
      uStack_70 = uVar5;
      uStack_6c = uVar6;
      local_68 = uVar7;
      uStack_64 = uVar8;
      uStack_60 = uVar9;
      uStack_5c = uVar10;
      local_58 = uVar11;
      uStack_50 = plVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14efe0163;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar4 = local_78;
    plVar14 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar14 = uStack_50;
    }
    this_00 = (TPromise<void> *)(**(code **)(*plVar14 + 8))();
    if (pcVar4 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      local_90 = this_00[3].State.SharedReferenceCount.ReferenceController;
      local_88 = *(TReferenceControllerBase<1> **)&this_00[3].bFutureRetrieved;
      *(undefined8 *)&this_00[3].bFutureRetrieved = 0;
      this_00[3].State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      ``UE::Online::Private::
      CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'
      ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
                (this_00 + 1,
                 (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
                  *)&local_90);
      TPromise<void>::EmplaceValue<>(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
    }
    else {
      (*pcVar4)(this_00);
    }
  }
LAB_14efe0163:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_78 != (code *)0x0) {
    plVar14 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar14 = uStack_50;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((local_108.State.Object != (TFutureState<void> *)0x0) &&
     ((local_108.State.Object)->field_0x68 == '\0')) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.State.SharedReferenceCount.ReferenceController);
  pFVar2 = (param_1->ResultKey).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Op).SharedReferenceCount.ReferenceController);
  pTVar3 = (param_1->Promise).State.Object;
  if ((pTVar3 != (TFutureState<void> *)0x0) && (pTVar3->field_0x68 == '\0')) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TFuture<void> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Promise).State.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efe0260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efe058a) */
/* WARNING: Removing unreachable block (ram,0x00014efe0594) */
/* WARNING: Removing unreachable block (ram,0x00014efe05b9) */

TFuture<void> * __thiscall
TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::
Then<__UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
           *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
  *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  TFutureState<void> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  TFuture<void> *pTVar13;
  TPromise<void> *pTVar14;
  longlong *plVar15;
  atomic<int> *paVar16;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  TPromise<void> local_e0;
  TFutureState<void> *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_b8;
  TReferenceControllerBase<1> *local_b0;
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
  *local_a8;
  TReferenceControllerBase<1> *local_a0;
  TFuture<void> *local_98;
  undefined1 local_90 [24];
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_98 = __return_storage_ptr__;
  if (((this->State).Object ==
       (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
        *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TFuture<void> *)(*pcVar3)();
    return pTVar13;
  }
  TPromise<void>::TPromise<void>(&local_e0);
  if ((local_e0.bFutureRetrieved != false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TFuture<void> *)(*pcVar3)();
    return pTVar13;
  }
  pTVar2 = local_e0.State.Object;
  local_e0.bFutureRetrieved = true;
  if ((local_e0.State.Object == (TFutureState<void> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TFuture<void> *)(*pcVar3)();
    return pTVar13;
  }
  FVar11.ReferenceController = local_e0.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_e0.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_e0.State.SharedReferenceCount.ReferenceController;
  if (local_e0.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_e0.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e0.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = (param_1->Promise).State.Object;
  local_c0 = (param_1->Promise).State.SharedReferenceCount.ReferenceController;
  (param_1->Promise).State.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Promise).State.Object = (TFutureState<void> *)0x0;
  local_e8 = (param_1->Promise).bFutureRetrieved;
  local_b8 = (param_1->Op).Object;
  local_b0 = (param_1->Op).SharedReferenceCount.ReferenceController;
  local_e0.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e0.State.Object = (TFutureState<void> *)0x0;
  if (local_b0 == (TReferenceControllerBase<1> *)0x0) {
    paVar16 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar16 = &local_b0->SharedReferenceCount;
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  local_a8 = (this->State).Object;
  local_a0 = (this->State).SharedReferenceCount.ReferenceController;
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x58,8);
  pTVar1 = local_b0;
  uStack_50[2] = (longlong)FVar11.ReferenceController;
  *uStack_50 = (longlong)
               &
               ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1___R1_1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_234__Z1_Z_QEAA_0_Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE____IEAA_A_PV1_1___R1_1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_345__Z1_Z_QEAA_0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  uStack_50[4] = (longlong)local_c8;
  uStack_50[5] = (longlong)local_c0;
  *(undefined1 *)(uStack_50 + 6) = local_e8;
  uStack_50[7] = (longlong)local_b8;
  uStack_50[1] = (longlong)pTVar2;
  *(undefined1 *)(uStack_50 + 3) = 1;
  uStack_50[8] = (longlong)local_b0;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  uStack_50[9] = (longlong)local_a8;
  uStack_50[10] = (longlong)local_a0;
  if (uStack_50 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lpCriticalSection = (this->State).Object;
  pTVar1 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object =
       (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
        *)0x0;
  if ((lpCriticalSection ==
       (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
        *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TFuture<void> *)(*pcVar3)();
    return pTVar13;
  }
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    if (lpCriticalSection ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
         *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
      pcVar3 = *(code **)(&lpCriticalSection->field_0x28 + 8);
      uVar4 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
      uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
      uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
      uVar7 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
      uVar8 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
      uVar9 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
      uVar10 = *(undefined8 *)&lpCriticalSection->field_0x50;
      plVar15 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
      *(code **)(&lpCriticalSection->field_0x28 + 8) = local_78;
      *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar3;
      uStack_70 = uVar4;
      uStack_6c = uVar5;
      local_68 = uVar6;
      uStack_64 = uVar7;
      uStack_60 = uVar8;
      uStack_5c = uVar9;
      local_58 = uVar10;
      uStack_50 = plVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14efe0562;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar3 = local_78;
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    pTVar14 = (TPromise<void> *)(**(code **)(*plVar15 + 8))();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      local_90[0] = pTVar14[2].bFutureRetrieved;
      local_90._1_7_ = *(undefined7 *)&pTVar14[2].field_0x11;
      local_90._8_8_ = pTVar14[3].State.Object;
      pTVar14[3].State.Object = (TFutureState<void> *)0x0;
      *(undefined8 *)&pTVar14[2].bFutureRetrieved = 0;
      FutureDetail::
      SetPromiseValue<__UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
                (pTVar14,(<lambda_1> *)(pTVar14 + 1),
                 (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
                  *)local_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_90._8_8_);
    }
    else {
      (*pcVar3)(pTVar14);
    }
  }
LAB_14efe0562:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_78 != (code *)0x0) {
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Op).SharedReferenceCount.ReferenceController);
  pTVar2 = (param_1->Promise).State.Object;
  if (((pTVar2 != (TFutureState<void> *)0x0) && (pTVar2->field_0x68 == '\0')) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("State->IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x242,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TFuture<void> *)(*pcVar3)();
    return pTVar13;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Promise).State.SharedReferenceCount.ReferenceController);
  return local_98;
}

// Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_> @ 14efe0650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efe093d) */
/* WARNING: Removing unreachable block (ram,0x00014efe0947) */
/* WARNING: Removing unreachable block (ram,0x00014efe096c) */

TFuture<void> * __thiscall
TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
::Then<_UE::Online::Private::FunctionalTestLogoutAllUsers_::__l2::<lambda_1>_>
          (TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
           *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  *lpCriticalSection;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  TFutureState<void> *pTVar10;
  FSharedReferencer<1> FVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  TFuture<void> *pTVar14;
  TPromise<void> *this_00;
  longlong *plVar15;
  atomic<int> *paVar16;
  undefined1 auStack_e8 [32];
  TPromise<void> local_c8;
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_> *local_b0
  ;
  TReferenceControllerBase<1> *local_a8;
  TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  *local_a0;
  <lambda_1> *local_98;
  TFuture<void> *local_90;
  undefined1 local_88 [16];
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_98 = param_1;
  local_90 = __return_storage_ptr__;
  if (((this->State).Object ==
       (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
        *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  TPromise<void>::TPromise<void>(&local_c8);
  if ((local_c8.bFutureRetrieved != false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  pTVar10 = local_c8.State.Object;
  local_c8.bFutureRetrieved = true;
  if ((local_c8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  FVar11.ReferenceController = local_c8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_c8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_c8.State.SharedReferenceCount.ReferenceController;
  if (local_c8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = (param_1->Promise).Object;
  local_a8 = (param_1->Promise).SharedReferenceCount.ReferenceController;
  local_c8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.State.Object = (TFutureState<void> *)0x0;
  if (local_a8 == (TReferenceControllerBase<1> *)0x0) {
    paVar16 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar16 = &local_a8->SharedReferenceCount;
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  pTVar1 = (this->State).SharedReferenceCount.ReferenceController;
  local_a0 = (this->State).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x40,8);
  pTVar12 = local_a8;
  uStack_50[2] = (longlong)FVar11.ReferenceController;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[1] = (longlong)pTVar10;
  *(undefined1 *)(uStack_50 + 3) = 1;
  uStack_50[4] = (longlong)local_b0;
  uStack_50[5] = (longlong)local_a8;
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  uStack_50[6] = (longlong)local_a0;
  uStack_50[7] = (longlong)pTVar1;
  if (uStack_50 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lpCriticalSection = (this->State).Object;
  pTVar1 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object =
       (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  if ((lpCriticalSection ==
       (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
        *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  if ((char)lpCriticalSection->_padding_ == '\0') {
    if (lpCriticalSection ==
        (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((char)lpCriticalSection->_padding_ == '\0') {
      pcVar2 = (code *)lpCriticalSection->_padding_;
      lVar7 = lpCriticalSection->_padding_;
      uVar3 = *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4);
      lVar8 = lpCriticalSection->_padding_;
      uVar4 = *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4);
      lVar9 = lpCriticalSection->_padding_;
      uVar5 = *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4);
      lVar6 = lpCriticalSection->_padding_;
      plVar15 = (longlong *)lpCriticalSection->_padding_;
      lpCriticalSection->_padding_ = (longlong)local_78;
      lpCriticalSection->_padding_ = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)&lpCriticalSection->_padding_ = local_68;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = uStack_64;
      *(undefined4 *)&lpCriticalSection->_padding_ = uStack_60;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->_padding_ = (undefined4)local_58;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = local_58._4_4_;
      *(undefined4 *)&lpCriticalSection->_padding_ = (undefined4)uStack_50;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = uStack_50._4_4_;
      local_78 = pcVar2;
      uStack_70 = (int)lVar7;
      uStack_6c = uVar3;
      local_68 = (int)lVar8;
      uStack_64 = uVar4;
      uStack_60 = (int)lVar9;
      uStack_5c = uVar5;
      local_58 = lVar6;
      uStack_50 = plVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14efe0915;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar2 = local_78;
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    this_00 = (TPromise<void> *)(**(code **)(*plVar15 + 8))();
    if (pcVar2 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      local_88[0] = this_00[1].bFutureRetrieved;
      local_88._1_7_ = *(undefined7 *)&this_00[1].field_0x11;
      local_88._8_8_ = this_00[2].State.Object;
      this_00[2].State.Object = (TFutureState<void> *)0x0;
      *(undefined8 *)&this_00[1].bFutureRetrieved = 0;
      `UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>::operator()
                (this_00 + 1,
                 (TFuture<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                  *)local_88);
      TPromise<void>::EmplaceValue<>(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_88._8_8_);
    }
    else {
      (*pcVar2)(this_00);
    }
  }
LAB_14efe0915:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_78 != (code *)0x0) {
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_98->Promise).SharedReferenceCount.ReferenceController);
  return local_90;
}

// Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_> @ 14efe09c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efe0c86) */
/* WARNING: Removing unreachable block (ram,0x00014efe0c8f) */
/* WARNING: Removing unreachable block (ram,0x00014efe0cb4) */

TFuture<void> * __thiscall
TFutureBase<int>::
Then<__UE::Online::Private::AwaitInvitation_::__l2::<lambda_1>::operator()_::__l8::<lambda_1>_>
          (TFutureBase<int> *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  uint uVar1;
  TFutureState<int> *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  TFutureState<void> *pTVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  TFuture<void> *pTVar14;
  void *this_00;
  longlong *plVar15;
  atomic<int> *paVar16;
  undefined1 auStack_e8 [32];
  TPromise<void> local_c8;
  AwaitInvitationState *local_b0;
  TReferenceControllerBase<1> *local_a8;
  TFutureState<int> *local_a0;
  TReferenceControllerBase<1> *local_98;
  <lambda_1> *local_90;
  TFuture<void> *local_88;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_90 = param_1;
  local_88 = __return_storage_ptr__;
  if (((this->State).Object == (TFutureState<int> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar3)();
    return pTVar14;
  }
  TPromise<void>::TPromise<void>(&local_c8);
  if ((local_c8.bFutureRetrieved != false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar3)();
    return pTVar14;
  }
  pTVar11 = local_c8.State.Object;
  local_c8.bFutureRetrieved = true;
  if ((local_c8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar3)();
    return pTVar14;
  }
  FVar12.ReferenceController = local_c8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_c8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_c8.State.SharedReferenceCount.ReferenceController;
  if (local_c8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = (param_1->AwaitState).Object;
  local_a8 = (param_1->AwaitState).SharedReferenceCount.ReferenceController;
  local_c8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.State.Object = (TFutureState<void> *)0x0;
  if (local_a8 == (TReferenceControllerBase<1> *)0x0) {
    paVar16 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar16 = &local_a8->SharedReferenceCount;
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  local_a0 = (this->State).Object;
  uVar1 = (param_1->LobbyId).Value;
  local_98 = (this->State).SharedReferenceCount.ReferenceController;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x48,8);
  pTVar2 = local_a8;
  uStack_50[2] = (longlong)FVar12.ReferenceController;
  *uStack_50 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  uStack_50[1] = (longlong)pTVar11;
  *(undefined1 *)(uStack_50 + 3) = 1;
  uStack_50[4] = (longlong)local_b0;
  uStack_50[5] = (longlong)local_a8;
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  *(uint *)(uStack_50 + 6) = uVar1;
  uStack_50[7] = (longlong)local_a0;
  uStack_50[8] = (longlong)local_98;
  if (uStack_50 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lpCriticalSection = (this->State).Object;
  pTVar2 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<int> *)0x0;
  if ((lpCriticalSection == (TFutureState<int> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar3)();
    return pTVar14;
  }
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    if (lpCriticalSection == (TFutureState<int> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
      pcVar3 = *(code **)(&lpCriticalSection->field_0x28 + 8);
      uVar4 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
      uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
      uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
      uVar7 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
      uVar8 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
      uVar9 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
      uVar10 = *(undefined8 *)&lpCriticalSection->field_0x50;
      plVar15 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
      *(code **)(&lpCriticalSection->field_0x28 + 8) = local_78;
      *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar3;
      uStack_70 = uVar4;
      uStack_6c = uVar5;
      local_68 = uVar6;
      uStack_64 = uVar7;
      uStack_60 = uVar8;
      uStack_5c = uVar9;
      local_58 = uVar10;
      uStack_50 = plVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14efe0c5d;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar3 = local_78;
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar15 + 8))();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<int>::
      Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar3)();
    }
  }
LAB_14efe0c5d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_78 != (code *)0x0) {
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_90->AwaitState).SharedReferenceCount.ReferenceController);
  return local_88;
}

// Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_> @ 14efe0d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014efe0ffd) */
/* WARNING: Removing unreachable block (ram,0x00014efe1007) */
/* WARNING: Removing unreachable block (ram,0x00014efe102c) */

TFuture<void> * __thiscall
TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
Then<_UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>_::__l11::<lambda_1>_>
          (TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *this,TFuture<void> *__return_storage_ptr__,<lambda_1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
  *lpCriticalSection;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  TFutureState<void> *pTVar10;
  FSharedReferencer<1> FVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  TFuture<void> *pTVar14;
  TPromise<void> *this_00;
  longlong *plVar15;
  atomic<int> *paVar16;
  undefined1 auStack_e8 [32];
  TPromise<void> local_c8;
  FWhenAllState *local_b0;
  TReferenceControllerBase<1> *local_a8;
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *local_a0
  ;
  <lambda_1> *local_98;
  TFuture<void> *local_90;
  undefined1 local_88 [16];
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_98 = param_1;
  local_90 = __return_storage_ptr__;
  if (((this->State).Object ==
       (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
       0x0) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                    ,0x2aa,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  TPromise<void>::TPromise<void>(&local_c8);
  if ((local_c8.bFutureRetrieved != false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  pTVar10 = local_c8.State.Object;
  local_c8.bFutureRetrieved = true;
  if ((local_c8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  FVar11.ReferenceController = local_c8.State.SharedReferenceCount.ReferenceController;
  *(TFutureState<void> **)__return_storage_ptr__ = local_c8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_c8.State.SharedReferenceCount.ReferenceController;
  if (local_c8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = (param_1->WhenAllState).Object;
  local_a8 = (param_1->WhenAllState).SharedReferenceCount.ReferenceController;
  local_c8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.State.Object = (TFutureState<void> *)0x0;
  if (local_a8 == (TReferenceControllerBase<1> *)0x0) {
    paVar16 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar16 = &local_a8->SharedReferenceCount;
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  pTVar1 = (this->State).SharedReferenceCount.ReferenceController;
  local_a0 = (this->State).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  uStack_50 = FMemory::Malloc(0x40,8);
  pTVar12 = local_a8;
  uStack_50[2] = (longlong)FVar11.ReferenceController;
  *uStack_50 = (longlong)
               &
               ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__L_____WhenAll_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE___Online_UE__YA_AV__TFuture_V__TArray_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__V__TSizedDefaultAllocator__0CA_________QEAV__TArray_V__TFuture_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____V__TSizedDefaultAllocator__0CA______Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____IEAA_A_PV1_L_____WhenAll_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE___Online_UE__YA_AV__TFuture_V__TArray_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__V__TSizedDefaultAllocator__0CA_________QEAV__TArray_V__TFuture_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____V__TSizedDefaultAllocator__0CA______Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  uStack_50[1] = (longlong)pTVar10;
  *(undefined1 *)(uStack_50 + 3) = 1;
  uStack_50[4] = (longlong)local_b0;
  uStack_50[5] = (longlong)local_a8;
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  uStack_50[6] = (longlong)local_a0;
  uStack_50[7] = (longlong)pTVar1;
  if (uStack_50 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lpCriticalSection = (this->State).Object;
  pTVar1 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object =
       (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
       0x0;
  if ((lpCriticalSection ==
       (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
       0x0) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TFuture<void> *)(*pcVar2)();
    return pTVar14;
  }
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    if (lpCriticalSection ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
        0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
      pcVar2 = *(code **)(&lpCriticalSection->field_0x28 + 8);
      uVar3 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
      uVar4 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
      uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
      uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
      uVar7 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
      uVar8 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
      uVar9 = *(undefined8 *)&lpCriticalSection->field_0x50;
      plVar15 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
      *(code **)(&lpCriticalSection->field_0x28 + 8) = local_78;
      *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar2;
      uStack_70 = uVar3;
      uStack_6c = uVar4;
      local_68 = uVar5;
      uStack_64 = uVar6;
      uStack_60 = uVar7;
      uStack_5c = uVar8;
      local_58 = uVar9;
      uStack_50 = plVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14efe0fd5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar2 = local_78;
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    this_00 = (TPromise<void> *)(**(code **)(*plVar15 + 8))();
    if (pcVar2 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      local_88[0] = this_00[1].bFutureRetrieved;
      local_88._1_7_ = *(undefined7 *)&this_00[1].field_0x11;
      local_88._8_8_ = this_00[2].State.Object;
      this_00[2].State.Object = (TFutureState<void> *)0x0;
      *(undefined8 *)&this_00[1].bFutureRetrieved = 0;
      `UE::Online::
      WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::
      <lambda_1>::operator()
                (this_00 + 1,
                 (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
                  *)local_88);
      TPromise<void>::EmplaceValue<>(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_88._8_8_);
    }
    else {
      (*pcVar2)(this_00);
    }
  }
LAB_14efe0fd5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_78 != (code *)0x0) {
    plVar15 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar15 = uStack_50;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_98->WhenAllState).SharedReferenceCount.ReferenceController);
  return local_90;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_> @ 14efe1080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,int> * __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_21>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,int>
                 *__return_storage_ptr__,<lambda_21> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FFunctionalTestConfig *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  IStep IVar8;
  IStep IVar9;
  IStep IVar10;
  IStep *pIVar11;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar12;
  undefined8 *puVar13;
  IStep IVar14;
  atomic<int> *paVar15;
  undefined1 auStack_b8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_98;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_90;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_88;
  IStep local_78;
  IStep IStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  IStep local_58;
  IStep IStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar11 = ::operator_new(0x50);
  if (pIVar11 == (IStep *)0x0) {
    pIVar11 = (IStep *)0x0;
  }
  else {
    *(EOnlineAsyncExecutionPolicy *)(pIVar11 + 1) = param_2.ExecutionPolicy;
    *pIVar11 = (IStep)&___7__TStep_H_Private_Online_UE__6B_;
    pIVar11[2] = (IStep)0x0;
    pIVar11[7] = (IStep)0x0;
    pIVar11[8].field_0x4 = 0;
  }
  local_98.Ptr = pIVar11;
  pTVar12 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_88);
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_90 = pTVar12->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (param_1->TestConfig).Object;
  pTVar3 = (param_1->TestConfig).SharedReferenceCount.ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar15 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar15 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  local_78 = (IStep)0x0;
  puVar13 = FMemory::Malloc(0x30,8);
  puVar13[3] = pTVar1;
  *puVar13 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_21>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar13[4] = pFVar2;
  puVar13[2] = local_90;
  puVar13[1] = pIVar11;
  puVar13[5] = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  IVar9 = pIVar11[2];
  IVar10 = pIVar11[3];
  uVar4 = *(undefined4 *)(pIVar11 + 4);
  uVar5 = *(undefined4 *)&pIVar11[4].field_0x4;
  uVar6 = *(undefined4 *)(pIVar11 + 5);
  uVar7 = *(undefined4 *)&pIVar11[5].field_0x4;
  IVar14 = pIVar11[6];
  IVar8 = pIVar11[7];
  if (puVar13 + 1 != (undefined8 *)0x0) {
    local_78 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar11[2] = local_78;
  pIVar11[3] = IStack_70;
  IStack_50._0_4_ = SUB84(puVar13,0);
  IStack_50._4_4_ = SUB84((ulonglong)puVar13 >> 0x20,0);
  *(undefined4 *)(pIVar11 + 4) = local_68;
  *(undefined4 *)&pIVar11[4].field_0x4 = uStack_64;
  *(undefined4 *)(pIVar11 + 5) = uStack_60;
  *(undefined4 *)&pIVar11[5].field_0x4 = uStack_5c;
  *(undefined4 *)(pIVar11 + 6) = local_58._0_4_;
  *(undefined4 *)&pIVar11[6].field_0x4 = local_58._4_4_;
  *(undefined4 *)(pIVar11 + 7) = IStack_50._0_4_;
  *(undefined4 *)&pIVar11[7].field_0x4 = IStack_50._4_4_;
  local_68 = uVar4;
  uStack_64 = uVar5;
  uStack_60 = uVar6;
  uStack_5c = uVar7;
  local_58 = IVar14;
  IStack_50 = IVar8;
  local_78 = IVar9;
  IStack_70 = IVar10;
  if (IVar9 != (IStep)0x0) {
    IVar14 = (IStep)&local_68;
    if (IVar8 != (IStep)0x0) {
      IVar14 = IVar8;
    }
    (**(code **)(*(longlong *)IVar14 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_98);
  __return_storage_ptr__->_padding_ = (longlong)(pIVar11 + 8);
  __return_storage_ptr__->OwningOperation = this_00;
  if (local_98.Ptr != (IStep *)0x0) {
    (**(code **)*local_98.Ptr)(local_98.Ptr,1);
  }
  return __return_storage_ptr__;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>_> @ 14efe12a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params> *
__thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_24>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params>
                 *__return_storage_ptr__,<lambda_24> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  IStep IVar7;
  IStep IVar8;
  IStep IVar9;
  IStep *pIVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  IStep IVar13;
  undefined1 auStack_a8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_80;
  IStep local_68;
  IStep IStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  IStep local_48;
  IStep IStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar10 = ::operator_new(0xb0);
  if (pIVar10 == (IStep *)0x0) {
    pIVar10 = (IStep *)0x0;
  }
  else {
    *(EOnlineAsyncExecutionPolicy *)(pIVar10 + 1) = param_2.ExecutionPolicy;
    *pIVar10 = (IStep)&___7__TStep_UParams_FJoinLobby_Online_UE___Private_Online_UE__6B_;
    pIVar10[2] = (IStep)0x0;
    pIVar10[7] = (IStep)0x0;
    *(undefined1 *)(pIVar10 + 0x15) = 0;
  }
  local_88.Ptr = pIVar10;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_80);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (IStep)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = pIVar10;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_24>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  IVar8 = pIVar10[2];
  IVar9 = pIVar10[3];
  uVar3 = *(undefined4 *)(pIVar10 + 4);
  uVar4 = *(undefined4 *)&pIVar10[4].field_0x4;
  uVar5 = *(undefined4 *)(pIVar10 + 5);
  uVar6 = *(undefined4 *)&pIVar10[5].field_0x4;
  IVar13 = pIVar10[6];
  IVar7 = pIVar10[7];
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar10[2] = local_68;
  pIVar10[3] = IStack_60;
  IStack_40._0_4_ = SUB84(puVar12,0);
  IStack_40._4_4_ = SUB84((ulonglong)puVar12 >> 0x20,0);
  *(undefined4 *)(pIVar10 + 4) = local_58;
  *(undefined4 *)&pIVar10[4].field_0x4 = uStack_54;
  *(undefined4 *)(pIVar10 + 5) = uStack_50;
  *(undefined4 *)&pIVar10[5].field_0x4 = uStack_4c;
  *(undefined4 *)(pIVar10 + 6) = local_48._0_4_;
  *(undefined4 *)&pIVar10[6].field_0x4 = local_48._4_4_;
  *(undefined4 *)(pIVar10 + 7) = IStack_40._0_4_;
  *(undefined4 *)&pIVar10[7].field_0x4 = IStack_40._4_4_;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  local_48 = IVar13;
  IStack_40 = IVar7;
  local_68 = IVar8;
  IStack_60 = IVar9;
  if (IVar8 != (IStep)0x0) {
    IVar13 = (IStep)&local_58;
    if (IVar7 != (IStep)0x0) {
      IVar13 = IVar7;
    }
    (**(code **)(*(longlong *)IVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_88);
  __return_storage_ptr__->OwningOperation = this_00;
  __return_storage_ptr__->_padding_ = (longlong)(pIVar10 + 8);
  if (local_88.Ptr != (IStep *)0x0) {
    (**(code **)*local_88.Ptr)(local_88.Ptr,1);
  }
  return __return_storage_ptr__;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_25>_> @ 14efe1440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_25>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,<lambda_25> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  IStep IVar7;
  IStep IVar8;
  IStep IVar9;
  IStep *pIVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  IStep IVar13;
  undefined1 in_R9B;
  undefined1 auStack_a8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_80;
  IStep local_68;
  IStep IStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  IStep local_48;
  IStep IStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar10 = ::operator_new(0x40);
  if (pIVar10 == (IStep *)0x0) {
    pIVar10 = (IStep *)0x0;
  }
  else {
    *(undefined1 *)(pIVar10 + 1) = in_R9B;
    *pIVar10 = (IStep)0x15309c430;
    pIVar10[2] = (IStep)0x0;
    pIVar10[7] = (IStep)0x0;
  }
  local_88.Ptr = pIVar10;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_80);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (IStep)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = pIVar10;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_25>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  IVar8 = pIVar10[2];
  IVar9 = pIVar10[3];
  uVar3 = *(undefined4 *)(pIVar10 + 4);
  uVar4 = *(undefined4 *)&pIVar10[4].field_0x4;
  uVar5 = *(undefined4 *)(pIVar10 + 5);
  uVar6 = *(undefined4 *)&pIVar10[5].field_0x4;
  IVar13 = pIVar10[6];
  IVar7 = pIVar10[7];
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_25>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar10[2] = local_68;
  pIVar10[3] = IStack_60;
  IStack_40._0_4_ = SUB84(puVar12,0);
  IStack_40._4_4_ = SUB84((ulonglong)puVar12 >> 0x20,0);
  *(undefined4 *)(pIVar10 + 4) = local_58;
  *(undefined4 *)&pIVar10[4].field_0x4 = uStack_54;
  *(undefined4 *)(pIVar10 + 5) = uStack_50;
  *(undefined4 *)&pIVar10[5].field_0x4 = uStack_4c;
  *(undefined4 *)(pIVar10 + 6) = local_48._0_4_;
  *(undefined4 *)&pIVar10[6].field_0x4 = local_48._4_4_;
  *(undefined4 *)(pIVar10 + 7) = IStack_40._0_4_;
  *(undefined4 *)&pIVar10[7].field_0x4 = IStack_40._4_4_;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  local_48 = IVar13;
  IStack_40 = IVar7;
  local_68 = IVar8;
  IStack_60 = IVar9;
  if (IVar8 != (IStep)0x0) {
    IVar13 = (IStep)&local_58;
    if (IVar7 != (IStep)0x0) {
      IVar13 = IVar7;
    }
    (**(code **)(*(longlong *)IVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_88);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if (local_88.Ptr != (IStep *)0x0) {
    (**(code **)*local_88.Ptr)(local_88.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_26>_> @ 14efe15d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params> *
__thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_26>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params>
                 *__return_storage_ptr__,<lambda_26> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  IStep IVar7;
  IStep IVar8;
  IStep IVar9;
  IStep *pIVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  IStep IVar13;
  undefined1 auStack_a8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_80;
  IStep local_68;
  IStep IStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  IStep local_48;
  IStep IStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar10 = ::operator_new(0x50);
  if (pIVar10 == (IStep *)0x0) {
    pIVar10 = (IStep *)0x0;
  }
  else {
    *(EOnlineAsyncExecutionPolicy *)(pIVar10 + 1) = param_2.ExecutionPolicy;
    *pIVar10 = (IStep)&___7__TStep_UParams_FLeaveLobby_Online_UE___Private_Online_UE__6B_;
    pIVar10[2] = (IStep)0x0;
    pIVar10[7] = (IStep)0x0;
    *(undefined1 *)(pIVar10 + 9) = 0;
  }
  local_88.Ptr = pIVar10;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_80);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (IStep)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = pIVar10;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_26>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  IVar8 = pIVar10[2];
  IVar9 = pIVar10[3];
  uVar3 = *(undefined4 *)(pIVar10 + 4);
  uVar4 = *(undefined4 *)&pIVar10[4].field_0x4;
  uVar5 = *(undefined4 *)(pIVar10 + 5);
  uVar6 = *(undefined4 *)&pIVar10[5].field_0x4;
  IVar13 = pIVar10[6];
  IVar7 = pIVar10[7];
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_26>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar10[2] = local_68;
  pIVar10[3] = IStack_60;
  IStack_40._0_4_ = SUB84(puVar12,0);
  IStack_40._4_4_ = SUB84((ulonglong)puVar12 >> 0x20,0);
  *(undefined4 *)(pIVar10 + 4) = local_58;
  *(undefined4 *)&pIVar10[4].field_0x4 = uStack_54;
  *(undefined4 *)(pIVar10 + 5) = uStack_50;
  *(undefined4 *)&pIVar10[5].field_0x4 = uStack_4c;
  *(undefined4 *)(pIVar10 + 6) = local_48._0_4_;
  *(undefined4 *)&pIVar10[6].field_0x4 = local_48._4_4_;
  *(undefined4 *)(pIVar10 + 7) = IStack_40._0_4_;
  *(undefined4 *)&pIVar10[7].field_0x4 = IStack_40._4_4_;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  local_48 = IVar13;
  IStack_40 = IVar7;
  local_68 = IVar8;
  IStack_60 = IVar9;
  if (IVar8 != (IStep)0x0) {
    IVar13 = (IStep)&local_58;
    if (IVar7 != (IStep)0x0) {
      IVar13 = IVar7;
    }
    (**(code **)(*(longlong *)IVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_88);
  __return_storage_ptr__->OwningOperation = this_00;
  __return_storage_ptr__->_padding_ = (longlong)(pIVar10 + 8);
  if (local_88.Ptr != (IStep *)0x0) {
    (**(code **)*local_88.Ptr)(local_88.Ptr,1);
  }
  return __return_storage_ptr__;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_27>_> @ 14efe1760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_27>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,<lambda_27> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  IStep IVar7;
  IStep IVar8;
  IStep IVar9;
  IStep *pIVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  IStep IVar13;
  undefined1 in_R9B;
  undefined1 auStack_a8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_80;
  IStep local_68;
  IStep IStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  IStep local_48;
  IStep IStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar10 = ::operator_new(0x40);
  if (pIVar10 == (IStep *)0x0) {
    pIVar10 = (IStep *)0x0;
  }
  else {
    *(undefined1 *)(pIVar10 + 1) = in_R9B;
    *pIVar10 = (IStep)0x15309c430;
    pIVar10[2] = (IStep)0x0;
    pIVar10[7] = (IStep)0x0;
  }
  local_88.Ptr = pIVar10;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_80);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (IStep)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = pIVar10;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_27>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  IVar8 = pIVar10[2];
  IVar9 = pIVar10[3];
  uVar3 = *(undefined4 *)(pIVar10 + 4);
  uVar4 = *(undefined4 *)&pIVar10[4].field_0x4;
  uVar5 = *(undefined4 *)(pIVar10 + 5);
  uVar6 = *(undefined4 *)&pIVar10[5].field_0x4;
  IVar13 = pIVar10[6];
  IVar7 = pIVar10[7];
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_27>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar10[2] = local_68;
  pIVar10[3] = IStack_60;
  IStack_40._0_4_ = SUB84(puVar12,0);
  IStack_40._4_4_ = SUB84((ulonglong)puVar12 >> 0x20,0);
  *(undefined4 *)(pIVar10 + 4) = local_58;
  *(undefined4 *)&pIVar10[4].field_0x4 = uStack_54;
  *(undefined4 *)(pIVar10 + 5) = uStack_50;
  *(undefined4 *)&pIVar10[5].field_0x4 = uStack_4c;
  *(undefined4 *)(pIVar10 + 6) = local_48._0_4_;
  *(undefined4 *)&pIVar10[6].field_0x4 = local_48._4_4_;
  *(undefined4 *)(pIVar10 + 7) = IStack_40._0_4_;
  *(undefined4 *)&pIVar10[7].field_0x4 = IStack_40._4_4_;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  local_48 = IVar13;
  IStack_40 = IVar7;
  local_68 = IVar8;
  IStack_60 = IVar9;
  if (IVar8 != (IStep)0x0) {
    IVar13 = (IStep)&local_58;
    if (IVar7 != (IStep)0x0) {
      IVar13 = IVar7;
    }
    (**(code **)(*(longlong *)IVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_88);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if (local_88.Ptr != (IStep *)0x0) {
    (**(code **)*local_88.Ptr)(local_88.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_28>_> @ 14efe18f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params> *
__thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_28>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params>
                 *__return_storage_ptr__,<lambda_28> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  IStep IVar7;
  IStep IVar8;
  IStep IVar9;
  IStep *pIVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  IStep IVar13;
  undefined1 auStack_a8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_80;
  IStep local_68;
  IStep IStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  IStep local_48;
  IStep IStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar10 = ::operator_new(0x50);
  if (pIVar10 == (IStep *)0x0) {
    pIVar10 = (IStep *)0x0;
  }
  else {
    *(EOnlineAsyncExecutionPolicy *)(pIVar10 + 1) = param_2.ExecutionPolicy;
    *pIVar10 = (IStep)&___7__TStep_UParams_FLeaveLobby_Online_UE___Private_Online_UE__6B_;
    pIVar10[2] = (IStep)0x0;
    pIVar10[7] = (IStep)0x0;
    *(undefined1 *)(pIVar10 + 9) = 0;
  }
  local_88.Ptr = pIVar10;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_80);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (IStep)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = pIVar10;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_28>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  IVar8 = pIVar10[2];
  IVar9 = pIVar10[3];
  uVar3 = *(undefined4 *)(pIVar10 + 4);
  uVar4 = *(undefined4 *)&pIVar10[4].field_0x4;
  uVar5 = *(undefined4 *)(pIVar10 + 5);
  uVar6 = *(undefined4 *)&pIVar10[5].field_0x4;
  IVar13 = pIVar10[6];
  IVar7 = pIVar10[7];
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_28>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar10[2] = local_68;
  pIVar10[3] = IStack_60;
  IStack_40._0_4_ = SUB84(puVar12,0);
  IStack_40._4_4_ = SUB84((ulonglong)puVar12 >> 0x20,0);
  *(undefined4 *)(pIVar10 + 4) = local_58;
  *(undefined4 *)&pIVar10[4].field_0x4 = uStack_54;
  *(undefined4 *)(pIVar10 + 5) = uStack_50;
  *(undefined4 *)&pIVar10[5].field_0x4 = uStack_4c;
  *(undefined4 *)(pIVar10 + 6) = local_48._0_4_;
  *(undefined4 *)&pIVar10[6].field_0x4 = local_48._4_4_;
  *(undefined4 *)(pIVar10 + 7) = IStack_40._0_4_;
  *(undefined4 *)&pIVar10[7].field_0x4 = IStack_40._4_4_;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  local_48 = IVar13;
  IStack_40 = IVar7;
  local_68 = IVar8;
  IStack_60 = IVar9;
  if (IVar8 != (IStep)0x0) {
    IVar13 = (IStep)&local_58;
    if (IVar7 != (IStep)0x0) {
      IVar13 = IVar7;
    }
    (**(code **)(*(longlong *)IVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_88);
  __return_storage_ptr__->OwningOperation = this_00;
  __return_storage_ptr__->_padding_ = (longlong)(pIVar10 + 8);
  if (local_88.Ptr != (IStep *)0x0) {
    (**(code **)*local_88.Ptr)(local_88.Ptr,1);
  }
  return __return_storage_ptr__;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_29>_> @ 14efe1a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_29>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,<lambda_29> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  IStep IVar7;
  IStep IVar8;
  IStep IVar9;
  IStep *pIVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  IStep IVar13;
  undefined1 in_R9B;
  undefined1 auStack_a8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_80;
  IStep local_68;
  IStep IStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  IStep local_48;
  IStep IStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar10 = ::operator_new(0x40);
  if (pIVar10 == (IStep *)0x0) {
    pIVar10 = (IStep *)0x0;
  }
  else {
    *(undefined1 *)(pIVar10 + 1) = in_R9B;
    *pIVar10 = (IStep)0x15309c430;
    pIVar10[2] = (IStep)0x0;
    pIVar10[7] = (IStep)0x0;
  }
  local_88.Ptr = pIVar10;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_80);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (IStep)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = pIVar10;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_29>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  IVar8 = pIVar10[2];
  IVar9 = pIVar10[3];
  uVar3 = *(undefined4 *)(pIVar10 + 4);
  uVar4 = *(undefined4 *)&pIVar10[4].field_0x4;
  uVar5 = *(undefined4 *)(pIVar10 + 5);
  uVar6 = *(undefined4 *)&pIVar10[5].field_0x4;
  IVar13 = pIVar10[6];
  IVar7 = pIVar10[7];
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_29>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar10[2] = local_68;
  pIVar10[3] = IStack_60;
  IStack_40._0_4_ = SUB84(puVar12,0);
  IStack_40._4_4_ = SUB84((ulonglong)puVar12 >> 0x20,0);
  *(undefined4 *)(pIVar10 + 4) = local_58;
  *(undefined4 *)&pIVar10[4].field_0x4 = uStack_54;
  *(undefined4 *)(pIVar10 + 5) = uStack_50;
  *(undefined4 *)&pIVar10[5].field_0x4 = uStack_4c;
  *(undefined4 *)(pIVar10 + 6) = local_48._0_4_;
  *(undefined4 *)&pIVar10[6].field_0x4 = local_48._4_4_;
  *(undefined4 *)(pIVar10 + 7) = IStack_40._0_4_;
  *(undefined4 *)&pIVar10[7].field_0x4 = IStack_40._4_4_;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  local_48 = IVar13;
  IStack_40 = IVar7;
  local_68 = IVar8;
  IStack_60 = IVar9;
  if (IVar8 != (IStep)0x0) {
    IVar13 = (IStep)&local_58;
    if (IVar7 != (IStep)0x0) {
      IVar13 = IVar7;
    }
    (**(code **)(*(longlong *)IVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_88);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if (local_88.Ptr != (IStep *)0x0) {
    (**(code **)*local_88.Ptr)(local_88.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_30>_> @ 14efe1c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::Then<_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_30>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,<lambda_30> *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  IStep IVar7;
  IStep IVar8;
  IStep IVar9;
  IStep *pIVar10;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar11;
  undefined8 *puVar12;
  IStep IVar13;
  undefined1 in_R9B;
  undefined1 auStack_a8 [32];
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_80;
  IStep local_68;
  IStep IStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  IStep local_48;
  IStep IStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  pIVar10 = ::operator_new(0x40);
  if (pIVar10 == (IStep *)0x0) {
    pIVar10 = (IStep *)0x0;
  }
  else {
    *(undefined1 *)(pIVar10 + 1) = in_R9B;
    *pIVar10 = (IStep)0x15309c430;
    pIVar10[2] = (IStep)0x0;
    pIVar10[7] = (IStep)0x0;
  }
  local_88.Ptr = pIVar10;
  pTVar11 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&this_00->_padding_,&local_80);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (IStep)0x0;
  puVar12 = FMemory::Malloc(0x28,8);
  puVar12[1] = pIVar10;
  puVar12[2] = pTVar2;
  *puVar12 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_30>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar12[3] = pTVar1;
  IVar8 = pIVar10[2];
  IVar9 = pIVar10[3];
  uVar3 = *(undefined4 *)(pIVar10 + 4);
  uVar4 = *(undefined4 *)&pIVar10[4].field_0x4;
  uVar5 = *(undefined4 *)(pIVar10 + 5);
  uVar6 = *(undefined4 *)&pIVar10[5].field_0x4;
  IVar13 = pIVar10[6];
  IVar7 = pIVar10[7];
  if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (IStep)Core::Private::Function::
                      TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_30>_>'::__l2::<lambda_1>,void>
                      ::Call;
  }
  pIVar10[2] = local_68;
  pIVar10[3] = IStack_60;
  IStack_40._0_4_ = SUB84(puVar12,0);
  IStack_40._4_4_ = SUB84((ulonglong)puVar12 >> 0x20,0);
  *(undefined4 *)(pIVar10 + 4) = local_58;
  *(undefined4 *)&pIVar10[4].field_0x4 = uStack_54;
  *(undefined4 *)(pIVar10 + 5) = uStack_50;
  *(undefined4 *)&pIVar10[5].field_0x4 = uStack_4c;
  *(undefined4 *)(pIVar10 + 6) = local_48._0_4_;
  *(undefined4 *)&pIVar10[6].field_0x4 = local_48._4_4_;
  *(undefined4 *)(pIVar10 + 7) = IStack_40._0_4_;
  *(undefined4 *)&pIVar10[7].field_0x4 = IStack_40._4_4_;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  local_48 = IVar13;
  IStack_40 = IVar7;
  local_68 = IVar8;
  IStack_60 = IVar9;
  if (IVar8 != (IStep)0x0) {
    IVar13 = (IStep)&local_58;
    if (IVar7 != (IStep)0x0) {
      IVar13 = IVar7;
    }
    (**(code **)(*(longlong *)IVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_88);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if (local_88.Ptr != (IStep *)0x0) {
    (**(code **)*local_88.Ptr)(local_88.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efe2710

TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy,_public:_class_TFuture<void>___cdecl_,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,FString_const_&,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>)_::_2_::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy,__UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy,_public:_class_TFuture<void>___cdecl_,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,FString_const_&,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>)_::_2_::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)_::_2_::<lambda_1>_>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFCreateLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &
       ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFCreateLobby_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____CaptureOperationStepResult_UFCreateLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFCreateLobby_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_AEBVFString__V__FBindOperation_UFCreateLobby_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FCreateLobby_23__Z___V__6B_
  ;
  *(TPromise<void> **)((longlong)this + 0x18) = (param_1->Functor).Promise.Object;
  pTVar1 = (param_1->Functor).Promise.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x28) =
       (param_1->Functor).Op.Object;
  pTVar1 = (param_1->Functor).Op.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x30) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)((longlong)this + 0x38),&(param_1->Functor).ResultKey);
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14efe2790

TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy,_public:_class_TFuture<void>___cdecl_,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,FString_const_&,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>)_::_2_::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy,__UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy,_public:_class_TFuture<void>___cdecl_,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,FString_const_&,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>)_::_2_::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)_::_2_::<lambda_1>_>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFFindLobbies_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &
       ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFFindLobbies_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___R5_1____CaptureOperationStepResult_UFFindLobbies_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFFindLobbies_Online_UE___Private_23__Private_23_YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___23_AEBVFString__V__FBindOperation_UFFindLobbies_Online_UE___623__Z_QEAA_AV__TFuture_X__1__QEAUParams_FFindLobbies_23__Z___V__6B_
  ;
  *(TPromise<void> **)((longlong)this + 0x18) = (param_1->Functor).Promise.Object;
  pTVar1 = (param_1->Functor).Promise.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x28) =
       (param_1->Functor).Op.Object;
  pTVar1 = (param_1->Functor).Op.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x30) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)((longlong)this + 0x38),&(param_1->Functor).ResultKey);
  return this;
}

// ~<lambda_1> @ 14efe4320

void __thiscall
``UE::Online::Private::
CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe4390

void __thiscall
`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00014efe43f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyAttributesChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe462a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyInvitationAdded_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe466a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyInvitationRemoved_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe46aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyJoined_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe46c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyJoined_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyJoined_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyJoined_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe46ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyLeaderChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe472a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeft_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeft_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeft_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyLeft_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe476a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe47aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe47c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberJoined_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe47ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberLeft_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe482a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>'::__l2::<lambda_1>,1,1> @ 14efe4840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbySchemaChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe486a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>,0,1> @ 14efe4880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CaptureOperationStepResult_UFCreateLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFCreateLobby_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__V__FBindOperation_UFCreateLobby_Online_UE___234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>,0,1> @ 14efe48c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CaptureOperationStepResult_UFFindLobbies_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFFindLobbies_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__V__FBindOperation_UFFindLobbies_Online_UE___234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>,0,1> @ 14efe4900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_234__Z2_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'::__l2::<lambda_1>,0,0> @ 14efe4950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFInviteLobbyMember_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFInviteLobbyMember_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFInviteLobbyMember_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'::__l2::<lambda_1>,0,0> @ 14efe4970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFJoinLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFJoinLobby_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFJoinLobby_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'::__l2::<lambda_1>,0,0> @ 14efe4990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFLeaveLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFLeaveLobby_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFLeaveLobby_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'::__l2::<lambda_1>,0,0> @ 14efe49b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFModifyLobbyAttributes_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFModifyLobbyAttributes_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFModifyLobbyAttributes_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'::__l2::<lambda_1>,0,0> @ 14efe49d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFModifyLobbyMemberAttributes_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFModifyLobbyMemberAttributes_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFModifyLobbyMemberAttributes_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>,0,0> @ 14efe49f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_234__Z1_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe4a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ExecuteOnGameThread_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ___YAXPEB_W__QEAV1_7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ__Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_22>_>'::__l2::<lambda_1>,1,1> @ 14efe4a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_22>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_22>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_22>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1> @ 14efe4a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FCreateLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FCreateLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>,1,1> @ 14efe4b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FFindLobbies_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FFindLobbies_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>,1,1> @ 14efe4b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FInviteLobbyMember_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FInviteLobbyMember_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1> @ 14efe4be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FJoinLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FJoinLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1> @ 14efe4c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FLeaveLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FLeaveLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>,1,1> @ 14efe4cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FModifyLobbyAttributes_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FModifyLobbyAttributes_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>,1,1> @ 14efe4d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FModifyLobbyMemberAttributes_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FModifyLobbyMemberAttributes_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_13>_>'::__l2::<lambda_1>,1,1> @ 14efe4da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_13>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_13>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_13>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_10>_>'::__l2::<lambda_1>,1,1> @ 14efe4de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_10>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_10>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_10>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_11>_>'::__l2::<lambda_1>,1,1> @ 14efe4e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_11>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_11>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_11>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>,1,1> @ 14efe4e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_12>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_12>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_14>_>'::__l2::<lambda_1>,1,1> @ 14efe4ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_14>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_14>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_14>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_15>_>'::__l2::<lambda_1>,1,1> @ 14efe4f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_15>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_15>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_15>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_16>_>'::__l2::<lambda_1>,1,1> @ 14efe4f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_16>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_16>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_16>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_17>_>'::__l2::<lambda_1>,1,1> @ 14efe4f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_17>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_17>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_17>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_18>_>'::__l2::<lambda_1>,1,1> @ 14efe4fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_18>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_18>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_18>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe4fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_19>_>'::__l2::<lambda_1>,1,1> @ 14efe5000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_19>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_19>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_19>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe502a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe506a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>_>'::__l2::<lambda_1>,1,1> @ 14efe5080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_20>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_20>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe50aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>,1,1> @ 14efe50c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_21>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_21>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe5101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>_>'::__l2::<lambda_1>,1,1> @ 14efe5120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_23>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_23>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe514a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>_>'::__l2::<lambda_1>,1,1> @ 14efe5160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_24>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_24>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe518a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_25>_>'::__l2::<lambda_1>,1,1> @ 14efe51a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_25>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_25>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_25>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe51ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_26>_>'::__l2::<lambda_1>,1,1> @ 14efe51e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_26>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_26>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_26>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe520a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_27>_>'::__l2::<lambda_1>,1,1> @ 14efe5220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_27>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_27>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_27>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe524a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_28>_>'::__l2::<lambda_1>,1,1> @ 14efe5260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_28>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_28>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_28>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe528a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_29>_>'::__l2::<lambda_1>,1,1> @ 14efe52a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_29>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_29>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_29>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe52ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_2>_>'::__l2::<lambda_1>,1,1> @ 14efe52e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_2>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe530a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_30>_>'::__l2::<lambda_1>,1,1> @ 14efe5320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_30>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_30>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_30>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe534a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_3>_>'::__l2::<lambda_1>,1,1> @ 14efe5360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_3>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_3>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_3>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe538a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>_>'::__l2::<lambda_1>,1,1> @ 14efe53a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_4>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_4>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe53ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_5>_>'::__l2::<lambda_1>,1,1> @ 14efe53e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_5>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_5>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_5>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe540a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>_>'::__l2::<lambda_1>,1,1> @ 14efe5420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_6>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_6>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe544a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_7>_>'::__l2::<lambda_1>,1,1> @ 14efe5460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_7>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_7>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_7>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe548a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_8>_>'::__l2::<lambda_1>,1,1> @ 14efe54a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_8>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_8>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_8>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe54ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_9>_>'::__l2::<lambda_1>,1,1> @ 14efe54e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_9>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_9>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_9>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe550a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>,1,1> @ 14efe5520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe5574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe55b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe55d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe55f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<_TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<__UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_12>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_12>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  ::
  Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<int>::Then<_TFutureBase<int>::Next<__UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_21>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_21>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<int>::
  Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe56b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1____Next_V<lambda_1>__5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ____TFutureBase_X__IEAA_A_PV1_5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___56___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__Z____TFutureBase_X__IEAA_A_PV1_1____Next_V<lambda_1>__5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__2_IEAA_A_PV1_5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___56___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe56d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::Then<__UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1___R1_1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_234__Z2_Z_QEAA_0_Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE____IEAA_A_PV1_1___R1_1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_345__Z2_Z_QEAA_0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
  Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe56f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Then<__UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1___R1_1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_234__Z1_Z_QEAA_0_Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE____IEAA_A_PV1_1___R1_1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_345__Z1_Z_QEAA_0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::
  Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<_UE::Online::Private::FunctionalTestLogoutAllUsers_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  ::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<int>::Then<__UE::Online::Private::AwaitInvitation_::__l2::<lambda_1>::operator()_::__l8::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<int>::
  Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::
  __l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14efe5750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::Then<_UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>_::__l11::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__L_____WhenAll_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE___Online_UE__YA_AV__TFuture_V__TArray_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__V__TSizedDefaultAllocator__0CA_________QEAV__TArray_V__TFuture_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____V__TSizedDefaultAllocator__0CA______Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____IEAA_A_PV1_L_____WhenAll_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE___Online_UE__YA_AV__TFuture_V__TArray_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__V__TSizedDefaultAllocator__0CA_________QEAV__TArray_V__TFuture_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____V__TSizedDefaultAllocator__0CA______Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
  Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::AwaitSleepFor'::__l2::<lambda_1>,1,0> @ 14efe5770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::AwaitSleepFor'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::Online::Private::AwaitSleepFor_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::AwaitSleepFor'::`2'::<lambda_1>,1,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 14efe5790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>,1,1> @ 14efe57b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep_::__l8::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe57da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Online::Private::AwaitInvitation'::__l2::<lambda_2>,1,0> @ 14efe57f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::AwaitInvitation'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UE::Online::Private::AwaitInvitation_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::AwaitInvitation'::`2'::<lambda_2>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l8::<lambda_2>,1,0> @ 14efe5810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l8::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start_::__l8::<lambda_2>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014efe583a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14efed680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FCreateLobby> *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  IData *pIVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  FOnlineError *pFVar7;
  TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
  *pTVar8;
  longlong lVar9;
  TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>
  local_res8;
  wchar_t *local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  TOptional<UE::Online::FOnlineError> local_a0;
  wchar_t **local_70;
  TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
  **local_68;
  FString local_60;
  FOnlineError local_50;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FCreateLobby::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FCreateLobby::Params&&___ptr64)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,FString_const&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FCreateLobby::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    bVar1 = param_1->field_0x30;
    lVar3 = *(longlong *)((longlong)this + 0x10);
    if ((1 < (ulonglong)bVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FFindLobbies::Result,UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x77,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_1->field_0x30 != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar8 = ::operator_new(0x18);
    local_res8.Value =
         (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
          *)0x0;
    if (pTVar8 != (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
                   *)0x0) {
      pTVar8->Ptr = (IData *)&
                             ___7__TData_UResult_FCreateLobby_Online_UE___FOnlineOperationData_Private_Online_UE__6B_
      ;
      pTVar8[1].Ptr = *(IData **)&param_1->field_0x8;
      pIVar4 = *(IData **)&param_1->field_0x10;
      pTVar8[2].Ptr = pIVar4;
      local_res8.Value = pTVar8;
      if (pIVar4 != (IData *)0x0) {
        LOCK();
        *(int *)(pIVar4 + 1) = *(int *)(pIVar4 + 1) + 1;
        UNLOCK();
      }
    }
    local_a8 = *(int *)((longlong)this + 0x28);
    lVar9 = (longlong)local_a8;
    _Src = *(void **)((longlong)this + 0x20);
    local_b8 = L"struct UE::Online::FCreateLobby::Result";
    local_b0.Data = (FScriptContainerElement *)0x0;
    if (local_a8 == 0) {
      local_a4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8,0,&local_b0,local_a8,&local_a4);
      memcpy(local_b0.Data,_Src,lVar9 * 2);
    }
    local_70 = &local_b8;
    local_68 = &local_res8.Value;
    TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>_>
              ((TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
                *)(lVar3 + 8),&local_res8,(bool *)&local_70);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if (local_res8.Value !=
        (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
         *)0x0) {
      (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar7 = UE::Online::TResult<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError>::
               GetErrorValue((TResult<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> *)
                             param_1);
      UE::Online::FOnlineError::GetLogString(pFVar7,&local_60,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FCreateLobby::Params&&___ptr64)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,FString_const&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FCreateLobby::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    pcVar5 = *(code **)(*plVar2 + 8);
    pFVar7 = UE::Online::TResult<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> *)
                           param_1);
    local_a0.TypedValue.Details.Object = (pFVar7->Details).Object;
    local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar7->Details).SharedReferenceCount.ReferenceController;
    if (local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar7->Inner).SharedReferenceCount.ReferenceController;
    local_a0.TypedValue.Inner.Object = (pFVar7->Inner).Object;
    if (local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0.TypedValue.ErrorCode = pFVar7->ErrorCode;
    local_a0.bIsSet = true;
    pFVar7 = UE::Online::Errors::RequestFailure(&local_50,&local_a0);
    (*pcVar5)(plVar2,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Details.SharedReferenceCount.ReferenceController);
    if (local_a0.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(*(TPromise<void> **)this);
  return;
}

// operator() @ 14efed9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FFindLobbies> *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  FOnlineError *pFVar6;
  TData<UE::Online::FFindLobbies::Result> *this_00;
  longlong lVar7;
  TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>
  local_res8;
  wchar_t *local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  TOptional<UE::Online::FOnlineError> local_a0;
  wchar_t **local_70;
  TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
  **local_68;
  FString local_60;
  FOnlineError local_50;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FFindLobbies::Params&&___ptr64)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,FString_const&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FFindLobbies::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    bVar1 = param_1->field_0x30;
    lVar3 = *(longlong *)((longlong)this + 0x10);
    if ((1 < (ulonglong)bVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FFindLobbies::Result,UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x77,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->field_0x30 != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = ::operator_new(0x18);
    local_res8.Value =
         (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
          *)0x0;
    if (this_00 != (TData<UE::Online::FFindLobbies::Result> *)0x0) {
      local_res8.Value =
           (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
            *)UE::Online::Private::FOnlineOperationData::TData<UE::Online::FFindLobbies::Result>::
              TData<UE::Online::FFindLobbies::Result>(this_00,(Result *)&param_1->field_0x8);
    }
    local_a8 = *(int *)((longlong)this + 0x28);
    lVar7 = (longlong)local_a8;
    _Src = *(void **)((longlong)this + 0x20);
    local_b8 = L"struct UE::Online::FFindLobbies::Result";
    local_b0.Data = (FScriptContainerElement *)0x0;
    if (local_a8 == 0) {
      local_a4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8,0,&local_b0,local_a8,&local_a4);
      memcpy(local_b0.Data,_Src,lVar7 * 2);
    }
    local_70 = &local_b8;
    local_68 = &local_res8.Value;
    TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>_>
              ((TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
                *)(lVar3 + 8),&local_res8,(bool *)&local_70);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if ((TData<UE::Online::FFindLobbies::Result> *)local_res8.Value !=
        (TData<UE::Online::FFindLobbies::Result> *)0x0) {
      (**(code **)(local_res8.Value)->Ptr)(local_res8.Value,1);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar6 = UE::Online::TResult<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>::
               GetErrorValue((TResult<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> *)
                             param_1);
      UE::Online::FOnlineError::GetLogString(pFVar6,&local_60,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FFindLobbies::Params&&___ptr64)>___cdecl_UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,FString_const&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FFindLobbies::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    pcVar4 = *(code **)(*plVar2 + 8);
    pFVar6 = UE::Online::TResult<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> *)
                           param_1);
    local_a0.TypedValue.Details.Object = (pFVar6->Details).Object;
    local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar6->Details).SharedReferenceCount.ReferenceController;
    if (local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar6->Inner).SharedReferenceCount.ReferenceController;
    local_a0.TypedValue.Inner.Object = (pFVar6->Inner).Object;
    if (local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0.TypedValue.ErrorCode = pFVar6->ErrorCode;
    local_a0.bIsSet = true;
    pFVar6 = UE::Online::Errors::RequestFailure(&local_50,&local_a0);
    (*pcVar4)(plVar2,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Details.SharedReferenceCount.ReferenceController);
    if (local_a0.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(*(TPromise<void> **)this);
  return;
}

// operator() @ 14efedcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
          *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  FOnlineError *pFVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStackY_148 [32];
  undefined8 *local_108;
  wchar_t *local_100;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [16];
  TReferenceControllerBase<1> *local_d8;
  FOnlineError *local_d0;
  TReferenceControllerBase<1> *local_c8;
  ulong64 local_c0;
  char local_b8;
  wchar_t **local_b0;
  undefined8 **local_a8;
  FString local_a0;
  FOnlineError local_90;
  TResult<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar1 = *(longlong *)param_1;
  puVar8 = (undefined8 *)0x0;
  pTVar2 = *(TReferenceControllerBase<1> **)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)param_1 = 0;
  if (lVar1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_68._padding_ =
       (longlong)
       &
       ___7__TResult_UResult_FFunctionalTestLoginUser_Private_Online_UE__VFOnlineError_45__Online_UE__6B_
  ;
  local_68.Storage.TypeIndex = *(byte *)(lVar1 + 0xa0);
  uVar9 = (ulonglong)local_68.Storage.TypeIndex;
  if ((1 < local_68.Storage.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar9])(&local_68.Storage,lVar1 + 0x78);
  local_68._padding_ =
       (longlong)&___7__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar9 = (ulonglong)local_68.Storage.TypeIndex;
  if ((1 < uVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_`public:___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)>___cdecl_UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params&&___ptr64)>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,FString_const&___ptr64,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params&&___ptr64),UE::Online::Private::FFunctionalTestLoginUser::Params&&___ptr64)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(TFuture<class_UE::Online::TOnlineResult<struct_UE::Online::Private::FFunctionalTestLoginUser>_>&&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    uVar9 = (ulonglong)local_68.Storage.TypeIndex;
    lVar1 = *(longlong *)((longlong)this + 0x18);
    if ((1 < uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar9) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_68.Storage.TypeIndex != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar7 = ::operator_new(0x18);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TData_UResult_FFunctionalTestLoginUser_Private_Online_UE___FOnlineOperationData_Private_Online_UE__6B_
      ;
      puVar7[1] = local_68.Storage._padding_;
      puVar7[2] = local_68.Storage._padding_;
      local_68.Storage._padding_ = 0;
      local_68.Storage._padding_ = 0;
      puVar8 = puVar7;
    }
    local_f0 = *(int *)((longlong)this + 0x30);
    lVar10 = (longlong)local_f0;
    _Src = *(void **)((longlong)this + 0x28);
    local_100 = L"struct UE::Online::Private::FFunctionalTestLoginUser::Result";
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_108 = puVar8;
    if (local_f0 == 0) {
      local_ec = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f0,0,&local_f8,local_f0,&local_ec);
      memcpy(local_f8.Data,_Src,lVar10 * 2);
    }
    local_b0 = &local_100;
    local_a8 = &local_108;
    TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>_>
              ((TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
                *)(lVar1 + 8),
               (TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>
                *)local_e8,(bool *)&local_b0);
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    if (local_108 != (undefined8 *)0x0) {
      (**(code **)*local_108)(local_108,1);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar6 = UE::Online::
               TResult<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>
               ::GetErrorValue(&local_68);
      UE::Online::FOnlineError::GetLogString(pFVar6,&local_a0,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_`public:___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)>___cdecl_UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params&&___ptr64)>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,FString_const&___ptr64,class_TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params&&___ptr64),UE::Online::Private::FFunctionalTestLoginUser::Params&&___ptr64)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(TFuture<class_UE::Online::TOnlineResult<struct_UE::Online::Private::FFunctionalTestLoginUser>_>&&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    plVar3 = *(longlong **)((longlong)this + 0x18);
    pcVar4 = *(code **)(*plVar3 + 8);
    pFVar6 = UE::Online::
             TResult<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>
             ::GetErrorValue(&local_68);
    local_b8 = '\x01';
    local_e8._8_8_ = (pFVar6->Details).Object;
    local_d8 = (pFVar6->Details).SharedReferenceCount.ReferenceController;
    local_d0 = (pFVar6->Inner).Object;
    local_c8 = (pFVar6->Inner).SharedReferenceCount.ReferenceController;
    (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
    (pFVar6->Inner).Object = (FOnlineError *)0x0;
    local_c0 = pFVar6->ErrorCode;
    pFVar6 = UE::Online::Errors::RequestFailure
                       (&local_90,(TOptional<UE::Online::FOnlineError> *)(local_e8 + 8));
    (*pcVar4)(plVar3,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.Details.SharedReferenceCount.ReferenceController);
    if (local_b8 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    }
  }
  TPromise<void>::EmplaceValue<>(this);
  uVar9 = (ulonglong)local_68.Storage.TypeIndex;
  if ((1 < local_68.Storage.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar9])(&local_68.Storage);
  return;
}

// operator() @ 14efee150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FInviteLobbyMember> *param_1)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  FString local_78;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FInviteLobbyMember::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FInviteLobbyMember::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar5 = UE::Online::TResult<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError>
               ::GetErrorValue((TResult<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError>
                                *)param_1);
      UE::Online::FOnlineError::GetLogString(pFVar5,&local_78,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FInviteLobbyMember::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FInviteLobbyMember::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    pcVar3 = *(code **)(*plVar2 + 8);
    pFVar5 = UE::Online::TResult<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError>
                            *)param_1);
    local_40.TypedValue.Details.Object = (pFVar5->Details).Object;
    local_40.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar5->Details).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.Inner.Object = (pFVar5->Inner).Object;
    local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar5->Inner).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.ErrorCode = pFVar5->ErrorCode;
    local_40.bIsSet = true;
    pFVar5 = UE::Online::Errors::RequestFailure(&local_68,&local_40);
    (*pcVar3)(plVar2,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(*(TPromise<void> **)this);
  return;
}

// operator() @ 14efee300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FJoinLobby> *param_1)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  FString local_78;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FJoinLobby::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FJoinLobby::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar5 = UE::Online::TResult<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError>::
               GetErrorValue((TResult<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> *)
                             param_1);
      UE::Online::FOnlineError::GetLogString(pFVar5,&local_78,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FJoinLobby::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FJoinLobby::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    pcVar3 = *(code **)(*plVar2 + 8);
    pFVar5 = UE::Online::TResult<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> *)
                           param_1);
    local_40.TypedValue.Details.Object = (pFVar5->Details).Object;
    local_40.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar5->Details).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.Inner.Object = (pFVar5->Inner).Object;
    local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar5->Inner).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.ErrorCode = pFVar5->ErrorCode;
    local_40.bIsSet = true;
    pFVar5 = UE::Online::Errors::RequestFailure(&local_68,&local_40);
    (*pcVar3)(plVar2,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(*(TPromise<void> **)this);
  return;
}

// operator() @ 14efee4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FLeaveLobby> *param_1)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  FString local_78;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FLeaveLobby::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FLeaveLobby::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar5 = UE::Online::TResult<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError>::
               GetErrorValue((TResult<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> *)
                             param_1);
      UE::Online::FOnlineError::GetLogString(pFVar5,&local_78,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FLeaveLobby::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FLeaveLobby::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    pcVar3 = *(code **)(*plVar2 + 8);
    pFVar5 = UE::Online::TResult<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> *)
                           param_1);
    local_40.TypedValue.Details.Object = (pFVar5->Details).Object;
    local_40.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar5->Details).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.Inner.Object = (pFVar5->Inner).Object;
    local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar5->Inner).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.ErrorCode = pFVar5->ErrorCode;
    local_40.bIsSet = true;
    pFVar5 = UE::Online::Errors::RequestFailure(&local_68,&local_40);
    (*pcVar3)(plVar2,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(*(TPromise<void> **)this);
  return;
}

// operator() @ 14efee660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FModifyLobbyAttributes> *param_1)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  FString local_78;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyAttributes::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyAttributes::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar5 = UE::Online::
               TResult<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>::
               GetErrorValue((TResult<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>
                              *)param_1);
      UE::Online::FOnlineError::GetLogString(pFVar5,&local_78,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyAttributes::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyAttributes::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    pcVar3 = *(code **)(*plVar2 + 8);
    pFVar5 = UE::Online::
             TResult<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>
                            *)param_1);
    local_40.TypedValue.Details.Object = (pFVar5->Details).Object;
    local_40.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar5->Details).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.Inner.Object = (pFVar5->Inner).Object;
    local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar5->Inner).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.ErrorCode = pFVar5->ErrorCode;
    local_40.bIsSet = true;
    pFVar5 = UE::Online::Errors::RequestFailure(&local_68,&local_40);
    (*pcVar3)(plVar2,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(*(TPromise<void> **)this);
  return;
}

// operator() @ 14efee810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Online::Private::
ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FModifyLobbyMemberAttributes> *param_1)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  FString local_78;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    if (4 < (byte)LogOnlineServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyMemberAttributes::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyMemberAttributes::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  else {
    if (4 < (byte)LogOnlineServices._0_1_) {
      pFVar5 = UE::Online::
               TResult<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>::
               GetErrorValue((TResult<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>
                              *)param_1);
      UE::Online::FOnlineError::GetLogString(pFVar5,&local_78,true);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_`public:_class_TFuture<void>___cdecl_`class_TFunction<class_TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyMemberAttributes::Params&&___ptr64)>___cdecl_UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>)'::`2'::<lambda_1>::operator()(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>&___ptr64,UE::Online::FModifyLobbyMemberAttributes::Params&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    pcVar3 = *(code **)(*plVar2 + 8);
    pFVar5 = UE::Online::
             TResult<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>
                            *)param_1);
    local_40.TypedValue.Details.Object = (pFVar5->Details).Object;
    local_40.TypedValue.Details.SharedReferenceCount.ReferenceController =
         (pFVar5->Details).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.Inner.Object = (pFVar5->Inner).Object;
    local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (pFVar5->Inner).SharedReferenceCount.ReferenceController;
    if (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.TypedValue.ErrorCode = pFVar5->ErrorCode;
    local_40.bIsSet = true;
    pFVar5 = UE::Online::Errors::RequestFailure(&local_68,&local_40);
    (*pcVar3)(plVar2,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  TPromise<void>::EmplaceValue<>(*(TPromise<void> **)this);
  return;
}

// `scalar_deleting_destructor' @ 14eff1ff0

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>::
FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
::_scalar_deleting_destructor_
          (FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2020

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>::
FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>
::_scalar_deleting_destructor_
          (FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2050

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>::
FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>
::_scalar_deleting_destructor_
          (FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2080

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>::
FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>
::_scalar_deleting_destructor_
          (FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff20b0

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>::
FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>
::_scalar_deleting_destructor_
          (FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff20e0

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>::
FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>
::_scalar_deleting_destructor_
          (FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2110

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>::
FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>
::_scalar_deleting_destructor_
          (FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2140

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2170

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff21a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff21d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2200

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2230

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2260

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2290

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff22c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff22f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy,`UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2360

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy,`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff23c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UE::Online::Private::FunctionalTestLoginUser'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2400

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogout>_const_&),FDefaultDelegateUserPolicy,`UE::Online::Private::FunctionalTestLogoutUser'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff24a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2500

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2550

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff25a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff25f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2640

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&),FDefaultDelegateUserPolicy,``UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2690

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::Execute<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff26f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2720

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2750

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2780

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff27b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff27e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2810

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2840

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2870

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff28a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff28d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2900

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2930

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2960

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2990

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff29c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff29f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2a20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2a50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2a80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2ab0

void * __thiscall
UE::Online::Private::FOnlineOperationData::TData<UE::Online::FCreateLobby::Result>::
_scalar_deleting_destructor_(TData<UE::Online::FCreateLobby::Result> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).Lobby.SharedReferenceCount.ReferenceController);
  this->_padding_ = 0x15309c400;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2b00

void * __thiscall
UE::Online::Private::FOnlineOperationData::TData<UE::Online::FFindLobbies::Result>::
_scalar_deleting_destructor_(TData<UE::Online::FFindLobbies::Result> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
            ((TSharedRef<UE::Online::FLobby_const_,1> *)(this->Data).Lobbies.AllocatorInstance.Data,
             (this->Data).Lobbies.ArrayNum);
  pFVar1 = (this->Data).Lobbies.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = 0x15309c400;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2b60

void * __thiscall
UE::Online::Private::FOnlineOperationData::
TData<UE::Online::Private::FFunctionalTestLoginUser::Result>::_scalar_deleting_destructor_
          (TData<UE::Online::Private::FFunctionalTestLoginUser::Result> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).AccountInfo.SharedReferenceCount.ReferenceController);
  this->_padding_ = 0x15309c400;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2bb0

void * __thiscall
UE::Online::Private::FOnlineOperationData::
TData<TSharedRef<`UE::Online::RunLobbyFunctionalTest'::__l2::FSearchParams,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  *(undefined8 *)this = 0x15309c400;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2c00

void * __thiscall
UE::Online::Private::FOnlineOperationData::TData<TSharedRef<UE::Online::FLobbyEventCapture,1>_>::
_scalar_deleting_destructor_
          (TData<TSharedRef<UE::Online::FLobbyEventCapture,1>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  this->_padding_ = 0x15309c400;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2c50

void * __thiscall
UE::Online::
TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>::
_scalar_deleting_destructor_
          (TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>
           *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyAttributesChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyInvitationAdded_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyInvitationRemoved_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyJoined_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyJoined_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyLeaderChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeft_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyLeft_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff2ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberJoined_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberLeft_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff30d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbySchemaChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CaptureOperationStepResult_UFCreateLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFCreateLobby_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__V__FBindOperation_UFCreateLobby_Online_UE___234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff31a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CaptureOperationStepResult_UFFindLobbies_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFFindLobbies_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__V__FBindOperation_UFFindLobbies_Online_UE___234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_234__Z2_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFInviteLobbyMember_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFInviteLobbyMember_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFInviteLobbyMember_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff32c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFJoinLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFJoinLobby_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFJoinLobby_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFLeaveLobby_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFLeaveLobby_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFLeaveLobby_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFModifyLobbyAttributes_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFModifyLobbyAttributes_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFModifyLobbyAttributes_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff33b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeOperationStepResult_UFModifyLobbyMemberAttributes_Online_UE__UFFunctionalTestLobbies_23_V__FBindOperation_UFModifyLobbyMemberAttributes_Online_UE___Private_23__Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_V__FBindOperation_UFModifyLobbyMemberAttributes_Online_UE___234__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_234__Z1_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ExecuteOnGameThread_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ___YAXPEB_W__QEAV1_7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ__Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff34b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_22>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_22>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FCreateLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FCreateLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff35a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FFindLobbies_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FFindLobbies_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FInviteLobbyMember_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FInviteLobbyMember_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff36a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FJoinLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FJoinLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FLeaveLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FLeaveLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff37a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FModifyLobbyAttributes_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FModifyLobbyAttributes_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FModifyLobbyMemberAttributes_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FModifyLobbyMemberAttributes_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff38a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_13>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_13>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_10>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_10>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_11>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_11>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff39f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_12>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_14>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_14>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_15>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_15>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_16>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_16>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_17>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_17>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_18>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_18>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_19>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_19>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_20>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_21>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_23>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_24>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_25>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_25>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff3fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_26>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_26>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_27>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_27>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_28>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_28>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff40f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_29>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_29>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff41d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_30>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_30>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_3>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_3>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff42b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_4>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_5>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_5>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_6>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_7>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_7>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_8>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_8>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff44e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_9>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_9>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff45d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff46c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff47b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_12>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  ::
  Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::`2'::<lambda_21>_>'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<int>::
  Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff48a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1____Next_V<lambda_1>__5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ____TFutureBase_X__IEAA_A_PV1_5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___56___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__Z____TFutureBase_X__IEAA_A_PV1_1____Next_V<lambda_1>__5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__2_IEAA_A_PV1_5___R1_1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___56___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z_QEAA_XZ__Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<void>::
  Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff48f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1___R1_1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_234__Z2_Z_QEAA_0_Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE____IEAA_A_PV1_1___R1_1____CaptureStepResult_UFFunctionalTestLoginUser_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEBVFString__P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLoginUser_345__Z2_Z_QEAA_0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
  Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__1___R1_1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_234__Z1_Z_QEAA_0_Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE____IEAA_A_PV1_1___R1_1____ConsumeStepResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE__UFFunctionalTestLobbies_34_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_1234__Z_Private_Online_UE__YA_AV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_P6A_AV__TFuture_V__TOnlineResult_UFFunctionalTestLogoutAllUsers_Private_Online_UE___Online_UE______QEAUParams_FFunctionalTestLogoutAllUsers_345__Z1_Z_QEAA_0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::
  Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  ::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff49e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<int>::
  Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::
  __l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__L_____WhenAll_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE___Online_UE__YA_AV__TFuture_V__TArray_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__V__TSizedDefaultAllocator__0CA_________QEAV__TArray_V__TFuture_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____V__TSizedDefaultAllocator__0CA______Z____TFutureBase_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____IEAA_A_PV1_L_____WhenAll_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE___Online_UE__YA_AV__TFuture_V__TArray_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__V__TSizedDefaultAllocator__0CA_________QEAV__TArray_V__TFuture_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE____V__TSizedDefaultAllocator__0CA______Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
  Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::AwaitSleepFor'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::AwaitSleepFor'::`2'::<lambda_1>,1,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__ExecuteNextStep___TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__QEAAXXZ__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::Private::AwaitInvitation'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Online::Private::AwaitInvitation'::`2'::<lambda_2>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l8::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4c50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Online::Private::AwaitInvitation'::__l2::AwaitInvitationState,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4c90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FFunctionalTestConfig,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::FFunctionalTestConfig,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4cd0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Online::RunLobbyFunctionalTest'::__l2::FSearchParams,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4d10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l2::FWhenAllState,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4d50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4d90

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4dd0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4e10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4e50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4e90

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4ed0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4f10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4f50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4f90

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff4fd0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5010

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5050

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TPromise<int>,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TPromise<int>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5090

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff50d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5110

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5150

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5190

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FLobbyEventCapture,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::FLobbyEventCapture,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff51d0

void * __thiscall
UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>::
_scalar_deleting_destructor_
          (TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser> *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5260

void * __thiscall
UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>::
_scalar_deleting_destructor_
          (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers> *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff52f0

void * __thiscall
UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>::
_scalar_deleting_destructor_
          (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLogoutUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5380

void * __thiscall
UE::Online::TResult<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>
::_scalar_deleting_destructor_
          (TResult<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>
           *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Storage);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5410

void * __thiscall
UE::Online::
TResult<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>::
_scalar_deleting_destructor_
          (TResult<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>
           *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Storage);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff54a0

void * __thiscall
UE::Online::TResult<UE::Online::Private::FFunctionalTestLogoutUser::Result,UE::Online::FOnlineError>
::_scalar_deleting_destructor_
          (TResult<UE::Online::Private::FFunctionalTestLogoutUser::Result,UE::Online::FOnlineError>
           *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLogoutUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Storage);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5530

void * __thiscall
UE::Online::
TResult<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::
_scalar_deleting_destructor_
          (TResult<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>
           *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Storage);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff55c0

void * __thiscall
UE::Online::Private::TStep<int>::_scalar_deleting_destructor_(TStep<int> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined ***)this = &___7__TStep_H_Private_Online_UE__6B_;
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar2 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *(undefined8 *)this = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5630

void * __thiscall
UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::_scalar_deleting_destructor_
          (TStep<UE::Online::FCreateLobby::Params> *this,uint param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7__TStep_UParams_FCreateLobby_Online_UE___Private_Online_UE__6B_;
  if (this->bResultSet != false) {
    (this->Result).Pad[0xb8] = '\0';
    (this->Result).Pad[0xb9] = '\0';
    (this->Result).Pad[0xba] = '\0';
    (this->Result).Pad[0xbb] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0xb0);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x70));
    (this->Result).Pad[0x68] = '\0';
    (this->Result).Pad[0x69] = '\0';
    (this->Result).Pad[0x6a] = '\0';
    (this->Result).Pad[0x6b] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x60);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x20));
  }
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar2 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar3 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined8 *)this = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5700

void * __thiscall
UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::_scalar_deleting_destructor_
          (TStep<UE::Online::FFindLobbies::Params> *this,uint param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7__TStep_UParams_FFindLobbies_Online_UE___Private_Online_UE__6B_;
  if (this->bResultSet != false) {
    DestructItems<UE::Online::FFindLobbySearchFilter,int>
              (*(FFindLobbySearchFilter **)((this->Result).Pad + 8),
               *(int *)((this->Result).Pad + 0x10));
    pvVar1 = *(void **)((this->Result).Pad + 8);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar2 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar3 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->_padding_ = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5790

void * __thiscall
UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::_scalar_deleting_destructor_
          (TStep<UE::Online::FInviteLobbyMember::Params> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ =
       (longlong)&___7__TStep_UParams_FInviteLobbyMember_Online_UE___Private_Online_UE__6B_;
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar2 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5800

void * __thiscall
UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::_scalar_deleting_destructor_
          (TStep<UE::Online::FJoinLobby::Params> *this,uint param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7__TStep_UParams_FJoinLobby_Online_UE___Private_Online_UE__6B_;
  if (this->bResultSet != false) {
    (this->Result).Pad[0x60] = '\0';
    (this->Result).Pad[0x61] = '\0';
    (this->Result).Pad[0x62] = '\0';
    (this->Result).Pad[99] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x58);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x18));
  }
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar2 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar3 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->_padding_ = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff58a0

void * __thiscall
UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::_scalar_deleting_destructor_
          (TStep<UE::Online::FLeaveLobby::Params> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__TStep_UParams_FLeaveLobby_Online_UE___Private_Online_UE__6B_;
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar2 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5910

void * __thiscall
UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::_scalar_deleting_destructor_
          (TStep<UE::Online::FModifyLobbyAttributes::Params> *this,uint param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ =
       (longlong)&___7__TStep_UParams_FModifyLobbyAttributes_Online_UE___Private_Online_UE__6B_;
  if (this->bResultSet != false) {
    (this->Result).Pad[0xa0] = '\0';
    (this->Result).Pad[0xa1] = '\0';
    (this->Result).Pad[0xa2] = '\0';
    (this->Result).Pad[0xa3] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x98);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x58));
    (this->Result).Pad[0x50] = '\0';
    (this->Result).Pad[0x51] = '\0';
    (this->Result).Pad[0x52] = '\0';
    (this->Result).Pad[0x53] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x48);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 8));
  }
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar2 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar3 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->_padding_ = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff59e0

void * __thiscall
UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::
_scalar_deleting_destructor_
          (TStep<UE::Online::FModifyLobbyMemberAttributes::Params> *this,uint param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ =
       (longlong)
       &___7__TStep_UParams_FModifyLobbyMemberAttributes_Online_UE___Private_Online_UE__6B_;
  if (this->bResultSet != false) {
    (this->Result).Pad[0xa0] = '\0';
    (this->Result).Pad[0xa1] = '\0';
    (this->Result).Pad[0xa2] = '\0';
    (this->Result).Pad[0xa3] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x98);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x58));
    (this->Result).Pad[0x50] = '\0';
    (this->Result).Pad[0x51] = '\0';
    (this->Result).Pad[0x52] = '\0';
    (this->Result).Pad[0x53] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x48);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 8));
  }
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar2 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar3 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->_padding_ = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5ab0

void * __thiscall
UE::Online::Private::
TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::_scalar_deleting_destructor_
          (TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
           *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TStep_V__TDefaultErrorResultInternal_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE___Online_UE___Private_Online_UE__6B_
  ;
  if (this->bResultSet != false) {
    uVar6 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])((this->Result).Pad + 8);
  }
  if (*(longlong *)&this->ExecFunction != 0) {
    plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
    plVar5 = (longlong *)&(this->ExecFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  this->_padding_ = 0x15309c418;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5b80

void * __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::
_scalar_deleting_destructor_(TWrappedOp<UE::Online::FFunctionalTestLobbies> *this,uint param_1)

{
  ~TWrappedOp<UE::Online::FFunctionalTestLobbies>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5bc0

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>::FBindImplBase::
_scalar_deleting_destructor_(FBindImplBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5bf0

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>::FBindImplBase::
_scalar_deleting_destructor_(FBindImplBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5c20

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>::FBindImplBase::
_scalar_deleting_destructor_(FBindImplBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5c50

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>::FBindImplBase::
_scalar_deleting_destructor_(FBindImplBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5c80

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>::FBindImplBase::
_scalar_deleting_destructor_(FBindImplBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5cb0

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>::FBindImplBase::
_scalar_deleting_destructor_(FBindImplBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eff5ce0

void * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>::FBindImplBase::
_scalar_deleting_destructor_(FBindImplBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `dynamic_atexit_destructor_for_'ConfigName'' @ 150470fa0

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__ConfigName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ConfigName.Data.AllocatorInstance.Data;
  if (ConfigName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ConfigName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConfigNameKeyName'' @ 150470fc0

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__ConfigNameKeyName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ConfigNameKeyName.Data.AllocatorInstance.Data;
  if (ConfigNameKeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ConfigNameKeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CreateLobbyKeyName'' @ 150470fe0

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__CreateLobbyKeyName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CreateLobbyKeyName.Data.AllocatorInstance.Data;
  if (CreateLobbyKeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CreateLobbyKeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FClientLobbyDataTestAutomationTestInstance'' @ 150471000

void __cdecl
UE::Online::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FClientLobbyDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FClientLobbyDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FindLobbyKeyName'' @ 150471020

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__FindLobbyKeyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FindLobbyKeyName.Data.AllocatorInstance.Data;
  if (FindLobbyKeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FindLobbyKeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LobbyAttribute1Value1'' @ 150471040

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__LobbyAttribute1Value1__
          (void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char *pcVar4;
  longlong lVar5;
  code *pcVar6;
  void *pvVar7;
  uchar uVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  FLowLevelMemTracker *this;
  byte *in_RAX;
  undefined7 extraout_var;
  undefined2 uVar13;
  char *unaff_RBX;
  ulonglong uVar15;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar16;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar14;
  
  uVar8 = LobbyAttribute1Value1.VariantData.TypeIndex;
  uVar15 = (ulonglong)LobbyAttribute1Value1.VariantData.TypeIndex;
  if (3 < LobbyAttribute1Value1.VariantData.TypeIndex) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    in_RAX = (byte *)CONCAT71(extraout_var,bVar9);
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcVar4 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
             ::__l2::Destructors)[uVar15];
  cVar14 = (char)((ulonglong)pcVar4 >> 8);
  uVar13 = SUB82(pcVar4,0);
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)in_RAX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  case '\0':
    pvVar7 = (void *)CONCAT71(LobbyAttribute1Value1.VariantData._padding_._1_7_,
                              (char)LobbyAttribute1Value1.VariantData._padding_);
    if (pvVar7 == (void *)0x0) {
      return;
    }
    if (pvVar7 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar7,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar7);
    }
    return;
  case '\x01':
    return;
  case '\x02':
    return;
  case '\x03':
    return;
  case '\x04':
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar13);
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar14;
    LobbyAttribute1Value1.VariantData._padding_._0_1_ =
         (char)LobbyAttribute1Value1.VariantData._padding_ + '\x14';
    out(unaff_RSI[1],uVar13);
    *unaff_RBP = *unaff_RBP + cVar11;
    *in_RAX = *in_RAX & bVar10;
    *in_RAX = *in_RAX + cVar11;
    *unaff_RBX = *unaff_RBX + cVar11;
    *unaff_RDI = *unaff_RDI + cVar11;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)in_RAX * 2);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar11;
    *pcVar4 = *pcVar4 + cVar14;
    uVar12 = *(int *)in_RAX * 0x67006e;
    *(byte *)(ulonglong)uVar12 = *(byte *)(ulonglong)uVar12 & (byte)uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar13);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar13);
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    *in_RAX = *in_RAX + bVar10;
    *in_RAX = *in_RAX + bVar10;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar3) {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    out(*unaff_RSI,uVar13);
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar16 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar13);
  lVar5 = (longlong)*(int *)(longlong)((int)puVar16 + 0x65) * 0x756f535c;
  if ((int)lVar5 != lVar5) {
    *pcVar4 = *pcVar4 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(*unaff_retaddr + -8) = pcVar4;
  if ((byte)unaff_RBX == bVar3) {
    in_RAX = (byte *)0x0;
  }
  else {
    *in_RAX = *in_RAX + bVar10;
  }
  cVar11 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar11;
  *in_RAX = *in_RAX + cVar11;
  pcVar4 = unaff_RBX + 0x6f;
  *pcVar4 = *pcVar4 + cVar11;
  if (*pcVar4 == '\0') {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
    cVar11 = in(uVar13);
    unaff_RDI[1] = cVar11;
    cVar11 = in(uVar13);
    unaff_RDI[2] = cVar11;
    out(*puVar16,uVar13);
    puVar16 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar13);
  }
  out(*(undefined1 *)puVar16,uVar13);
  *(char *)((longlong)puVar16 + 1) = *(char *)((longlong)puVar16 + 1) + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// `dynamic_atexit_destructor_for_'LobbyAttribute1Value2'' @ 1504710a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__LobbyAttribute1Value2__
          (void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char *pcVar4;
  longlong lVar5;
  code *pcVar6;
  void *pvVar7;
  uchar uVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  FLowLevelMemTracker *this;
  byte *in_RAX;
  undefined7 extraout_var;
  undefined2 uVar13;
  char *unaff_RBX;
  ulonglong uVar15;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar16;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar14;
  
  uVar8 = LobbyAttribute1Value2.VariantData.TypeIndex;
  uVar15 = (ulonglong)LobbyAttribute1Value2.VariantData.TypeIndex;
  if (3 < LobbyAttribute1Value2.VariantData.TypeIndex) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    in_RAX = (byte *)CONCAT71(extraout_var,bVar9);
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcVar4 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
             ::__l2::Destructors)[uVar15];
  cVar14 = (char)((ulonglong)pcVar4 >> 8);
  uVar13 = SUB82(pcVar4,0);
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)in_RAX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  case '\0':
    pvVar7 = (void *)CONCAT71(LobbyAttribute1Value2.VariantData._padding_._1_7_,
                              (char)LobbyAttribute1Value2.VariantData._padding_);
    if (pvVar7 == (void *)0x0) {
      return;
    }
    if (pvVar7 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar7,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar7);
    }
    return;
  case '\x01':
    return;
  case '\x02':
    return;
  case '\x03':
    return;
  case '\x04':
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar13);
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar14;
    LobbyAttribute1Value2.VariantData._padding_._0_1_ =
         (char)LobbyAttribute1Value2.VariantData._padding_ + '\x14';
    out(unaff_RSI[1],uVar13);
    *unaff_RBP = *unaff_RBP + cVar11;
    *in_RAX = *in_RAX & bVar10;
    *in_RAX = *in_RAX + cVar11;
    *unaff_RBX = *unaff_RBX + cVar11;
    *unaff_RDI = *unaff_RDI + cVar11;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)in_RAX * 2);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar11;
    *pcVar4 = *pcVar4 + cVar14;
    uVar12 = *(int *)in_RAX * 0x67006e;
    *(byte *)(ulonglong)uVar12 = *(byte *)(ulonglong)uVar12 & (byte)uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar13);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar13);
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    *in_RAX = *in_RAX + bVar10;
    *in_RAX = *in_RAX + bVar10;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar3) {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    out(*unaff_RSI,uVar13);
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar16 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar13);
  lVar5 = (longlong)*(int *)(longlong)((int)puVar16 + 0x65) * 0x756f535c;
  if ((int)lVar5 != lVar5) {
    *pcVar4 = *pcVar4 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(*unaff_retaddr + -8) = pcVar4;
  if ((byte)unaff_RBX == bVar3) {
    in_RAX = (byte *)0x0;
  }
  else {
    *in_RAX = *in_RAX + bVar10;
  }
  cVar11 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar11;
  *in_RAX = *in_RAX + cVar11;
  pcVar4 = unaff_RBX + 0x6f;
  *pcVar4 = *pcVar4 + cVar11;
  if (*pcVar4 == '\0') {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
    cVar11 = in(uVar13);
    unaff_RDI[1] = cVar11;
    cVar11 = in(uVar13);
    unaff_RDI[2] = cVar11;
    out(*puVar16,uVar13);
    puVar16 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar13);
  }
  out(*(undefined1 *)puVar16,uVar13);
  *(char *)((longlong)puVar16 + 1) = *(char *)((longlong)puVar16 + 1) + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// `dynamic_atexit_destructor_for_'LobbyEventCaptureKeyName'' @ 150471100

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::
_dynamic_atexit_destructor_for__LobbyEventCaptureKeyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LobbyEventCaptureKeyName.Data.AllocatorInstance.Data;
  if (LobbyEventCaptureKeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LobbyEventCaptureKeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LobbyMemberAttribute1Value1'' @ 150471120

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::
_dynamic_atexit_destructor_for__LobbyMemberAttribute1Value1__(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char *pcVar4;
  longlong lVar5;
  code *pcVar6;
  void *pvVar7;
  uchar uVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  FLowLevelMemTracker *this;
  byte *in_RAX;
  undefined7 extraout_var;
  undefined2 uVar13;
  char *unaff_RBX;
  ulonglong uVar15;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar16;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar14;
  
  uVar8 = LobbyMemberAttribute1Value1.VariantData.TypeIndex;
  uVar15 = (ulonglong)LobbyMemberAttribute1Value1.VariantData.TypeIndex;
  if (3 < LobbyMemberAttribute1Value1.VariantData.TypeIndex) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    in_RAX = (byte *)CONCAT71(extraout_var,bVar9);
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcVar4 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
             ::__l2::Destructors)[uVar15];
  cVar14 = (char)((ulonglong)pcVar4 >> 8);
  uVar13 = SUB82(pcVar4,0);
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)in_RAX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  case '\0':
    pvVar7 = (void *)CONCAT71(LobbyMemberAttribute1Value1.VariantData._padding_._1_7_,
                              (char)LobbyMemberAttribute1Value1.VariantData._padding_);
    if (pvVar7 == (void *)0x0) {
      return;
    }
    if (pvVar7 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar7,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar7);
    }
    return;
  case '\x01':
    return;
  case '\x02':
    return;
  case '\x03':
    return;
  case '\x04':
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar13);
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar14;
    LobbyMemberAttribute1Value1.VariantData._padding_._0_1_ =
         (char)LobbyMemberAttribute1Value1.VariantData._padding_ + '\x14';
    out(unaff_RSI[1],uVar13);
    *unaff_RBP = *unaff_RBP + cVar11;
    *in_RAX = *in_RAX & bVar10;
    *in_RAX = *in_RAX + cVar11;
    *unaff_RBX = *unaff_RBX + cVar11;
    *unaff_RDI = *unaff_RDI + cVar11;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)in_RAX * 2);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar11;
    *pcVar4 = *pcVar4 + cVar14;
    uVar12 = *(int *)in_RAX * 0x67006e;
    *(byte *)(ulonglong)uVar12 = *(byte *)(ulonglong)uVar12 & (byte)uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar13);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar13);
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    *in_RAX = *in_RAX + bVar10;
    *in_RAX = *in_RAX + bVar10;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar3) {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    out(*unaff_RSI,uVar13);
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar16 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar13);
  lVar5 = (longlong)*(int *)(longlong)((int)puVar16 + 0x65) * 0x756f535c;
  if ((int)lVar5 != lVar5) {
    *pcVar4 = *pcVar4 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(*unaff_retaddr + -8) = pcVar4;
  if ((byte)unaff_RBX == bVar3) {
    in_RAX = (byte *)0x0;
  }
  else {
    *in_RAX = *in_RAX + bVar10;
  }
  cVar11 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar11;
  *in_RAX = *in_RAX + cVar11;
  pcVar4 = unaff_RBX + 0x6f;
  *pcVar4 = *pcVar4 + cVar11;
  if (*pcVar4 == '\0') {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
    cVar11 = in(uVar13);
    unaff_RDI[1] = cVar11;
    cVar11 = in(uVar13);
    unaff_RDI[2] = cVar11;
    out(*puVar16,uVar13);
    puVar16 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar13);
  }
  out(*(undefined1 *)puVar16,uVar13);
  *(char *)((longlong)puVar16 + 1) = *(char *)((longlong)puVar16 + 1) + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// `dynamic_atexit_destructor_for_'LobbyMemberAttribute1Value2'' @ 150471180

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::
_dynamic_atexit_destructor_for__LobbyMemberAttribute1Value2__(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char *pcVar4;
  longlong lVar5;
  code *pcVar6;
  void *pvVar7;
  uchar uVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  FLowLevelMemTracker *this;
  byte *in_RAX;
  undefined7 extraout_var;
  undefined2 uVar13;
  char *unaff_RBX;
  ulonglong uVar15;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar16;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar14;
  
  uVar8 = LobbyMemberAttribute1Value2.VariantData.TypeIndex;
  uVar15 = (ulonglong)LobbyMemberAttribute1Value2.VariantData.TypeIndex;
  if (3 < LobbyMemberAttribute1Value2.VariantData.TypeIndex) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    in_RAX = (byte *)CONCAT71(extraout_var,bVar9);
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcVar4 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
             ::__l2::Destructors)[uVar15];
  cVar14 = (char)((ulonglong)pcVar4 >> 8);
  uVar13 = SUB82(pcVar4,0);
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)in_RAX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  case '\0':
    pvVar7 = (void *)CONCAT71(LobbyMemberAttribute1Value2.VariantData._padding_._1_7_,
                              (char)LobbyMemberAttribute1Value2.VariantData._padding_);
    if (pvVar7 == (void *)0x0) {
      return;
    }
    if (pvVar7 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar7,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar7);
    }
    return;
  case '\x01':
    return;
  case '\x02':
    return;
  case '\x03':
    return;
  case '\x04':
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar13);
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar14;
    LobbyMemberAttribute1Value2.VariantData._padding_._0_1_ =
         (char)LobbyMemberAttribute1Value2.VariantData._padding_ + '\x14';
    out(unaff_RSI[1],uVar13);
    *unaff_RBP = *unaff_RBP + cVar11;
    *in_RAX = *in_RAX & bVar10;
    *in_RAX = *in_RAX + cVar11;
    *unaff_RBX = *unaff_RBX + cVar11;
    *unaff_RDI = *unaff_RDI + cVar11;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)in_RAX * 2);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((longlong)in_RAX * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar11;
    *pcVar4 = *pcVar4 + cVar14;
    uVar12 = *(int *)in_RAX * 0x67006e;
    *(byte *)(ulonglong)uVar12 = *(byte *)(ulonglong)uVar12 & (byte)uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar13);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar13);
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    *in_RAX = *in_RAX + bVar10;
    *in_RAX = *in_RAX + bVar10;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar3) {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    out(*unaff_RSI,uVar13);
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar16 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar13);
  lVar5 = (longlong)*(int *)(longlong)((int)puVar16 + 0x65) * 0x756f535c;
  if ((int)lVar5 != lVar5) {
    *pcVar4 = *pcVar4 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(*unaff_retaddr + -8) = pcVar4;
  if ((byte)unaff_RBX == bVar3) {
    in_RAX = (byte *)0x0;
  }
  else {
    *in_RAX = *in_RAX + bVar10;
  }
  cVar11 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar11;
  *in_RAX = *in_RAX + cVar11;
  pcVar4 = unaff_RBX + 0x6f;
  *pcVar4 = *pcVar4 + cVar11;
  if (*pcVar4 == '\0') {
    cVar11 = in(uVar13);
    *unaff_RDI = cVar11;
    unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
    cVar11 = in(uVar13);
    unaff_RDI[1] = cVar11;
    cVar11 = in(uVar13);
    unaff_RDI[2] = cVar11;
    out(*puVar16,uVar13);
    puVar16 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar13);
  }
  out(*(undefined1 *)puVar16,uVar13);
  *(char *)((longlong)puVar16 + 1) = *(char *)((longlong)puVar16 + 1) + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// `dynamic_atexit_destructor_for_'SearchKeyName'' @ 1504711e0

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__SearchKeyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SearchKeyName.Data.AllocatorInstance.Data;
  if (SearchKeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SearchKeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'User1KeyName'' @ 150471200

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__User1KeyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = User1KeyName.Data.AllocatorInstance.Data;
  if (User1KeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (User1KeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'User2KeyName'' @ 150471220

void __cdecl
`UE::Online::RunLobbyFunctionalTest'::__l2::_dynamic_atexit_destructor_for__User2KeyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = User2KeyName.Data.AllocatorInstance.Data;
  if (User2KeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (User2KeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

