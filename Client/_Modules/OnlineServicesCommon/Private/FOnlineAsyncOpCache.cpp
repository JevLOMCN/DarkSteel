// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 86

// GetOp<UE::Online::FAddSessionMember> @ 14edc19c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAddSessionMember>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAddSessionMember> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_138 [32];
  TWrappedOperation<UE::Online::FAddSessionMember> **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TWrappedOperation<UE::Online::FAddSessionMember> *local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  <lambda_1> local_c8;
  FDelegateHandle local_c0;
  FString local_b8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_a8;
  FDestructionSentinel local_98;
  TSharedRef<UE::Online::IOnlineServices,1> local_80;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAddSessionMember> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAddSessionMember> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAddSessionMember>::
              TWrappedOperation<UE::Online::FAddSessionMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FAddSessionMember::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAddSessionMember> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_b8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_b8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_c8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_80);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = this;
  local_a8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAddSessionMember>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
              *)local_e0,&local_a8,&local_c8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_98);
  if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&)>
            ((FOnlineEventDelegateHandle *)local_68,local_c0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_e8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_e8 < pFVar7 + lVar19 * 8)) {
    local_100 = (longlong)(this->IndependentOperations).ArrayNum;
    local_f8 = 8;
    local_118 = &local_e8;
    local_110 = pFVar7;
    local_108 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAddSessionMember> **)(pFVar7 + (longlong)iVar14 * 8) = local_e8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthBeginVerifiedAuthSession> @ 14edc1cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthBeginVerifiedAuthSession>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession>::
              TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthBeginVerifiedAuthSession::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>
                 *)(*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthBeginVerifiedAuthSession>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthBeginVerifiedAuthSession>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>
                 *)(*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> **)(pFVar6 + (longlong)iVar13 * 8)
       = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthCancelVerifiedAuthTicket> @ 14edc1f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthCancelVerifiedAuthTicket>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket>::
              TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthCancelVerifiedAuthTicket::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthCancelVerifiedAuthTicket>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> **)(pFVar7 + (longlong)iVar14 * 8)
       = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthCreateAccount> @ 14edc2160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthCreateAccount>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FAuthCreateAccount> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FAuthCreateAccount> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FAuthCreateAccount> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FAuthCreateAccount> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FAuthCreateAccount> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FAuthCreateAccount>::
              TWrappedOperation<UE::Online::FAuthCreateAccount><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthCreateAccount::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthCreateAccount> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCreateAccount>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthCreateAccount>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FAuthCreateAccount> **)(pFVar6 + (longlong)iVar13 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthEndVerifiedAuthSession> @ 14edc2390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthEndVerifiedAuthSession>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession>::
              TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthEndVerifiedAuthSession::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> *
                )(*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthEndVerifiedAuthSession>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthEndVerifiedAuthSession>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> *
                )(*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> **)(pFVar6 + (longlong)iVar13 * 8) =
       local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthLinkAccount> @ 14edc25c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLinkAccount>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FAuthLinkAccount> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FAuthLinkAccount> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FAuthLinkAccount> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FAuthLinkAccount> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FAuthLinkAccount> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FAuthLinkAccount>::
              TWrappedOperation<UE::Online::FAuthLinkAccount><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLinkAccount::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthLinkAccount> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLinkAccount>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLinkAccount>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FAuthLinkAccount> **)(pFVar6 + (longlong)iVar13 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthLogin> @ 14edc27f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLogin>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *__return_storage_ptr__,
          Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthLogin> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FAuthLogin> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FAuthLogin> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FAuthLogin> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FAuthLogin> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FAuthLogin> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FAuthLogin>::
              TWrappedOperation<UE::Online::FAuthLogin><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLogin::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FAuthLogin> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *)(*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLogin>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *)(*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FAuthLogin> **)(pFVar6 + (longlong)iVar13 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthLogout> @ 14edc2a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLogout>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *__return_storage_ptr__,
          Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthLogout> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAuthLogout> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FAuthLogout> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FAuthLogout> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAuthLogout> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAuthLogout> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAuthLogout>::
              TWrappedOperation<UE::Online::FAuthLogout><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLogout::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FAuthLogout> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogout>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLogout>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAuthLogout> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthModifyAccountAttributes> @ 14edc2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthModifyAccountAttributes>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAuthModifyAccountAttributes>::
              TWrappedOperation<UE::Online::FAuthModifyAccountAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthModifyAccountAttributes::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthModifyAccountAttributes>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthModifyAccountAttributes>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthQueryExternalAuthToken> @ 14edc2ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryExternalAuthToken>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken>::
              TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryExternalAuthToken::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> *
                )(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalAuthToken>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryExternalAuthToken>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> *
                )(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthQueryExternalServerAuthTicket> @ 14edc3140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1> *
__thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryExternalServerAuthTicket>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket>::
              TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryExternalServerAuthTicket::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryExternalServerAuthTicket>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> **)
   (pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FAuthQueryVerifiedAuthTicket> @ 14edc33a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryVerifiedAuthTicket>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket>::
              TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryVerifiedAuthTicket::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryVerifiedAuthTicket>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FBatchQueryPresence> @ 14edc3600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FBatchQueryPresence>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FBatchQueryPresence> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_148 [32];
  TWrappedOperation<UE::Online::FBatchQueryPresence> **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  TWrappedOperation<UE::Online::FBatchQueryPresence> *local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  int local_e0;
  <lambda_1> local_d8;
  FDelegateHandle local_d0;
  FString local_c8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_b8;
  FDestructionSentinel local_a8;
  TSharedRef<UE::Online::IOnlineServices,1> local_90;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FBatchQueryPresence> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FBatchQueryPresence> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FBatchQueryPresence>::
              TWrappedOperation<UE::Online::FBatchQueryPresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FBatchQueryPresence::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_c8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_c8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_d8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_90);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = this;
  local_b8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FBatchQueryPresence>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
              *)local_f0,&local_b8,&local_d8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_a8);
  if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&)>
            ((FOnlineEventDelegateHandle *)local_78,local_d0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_78._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_78._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_78._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_78._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_78._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_78._40_8_;
  local_78._0_8_ = lVar19;
  local_78._8_8_ = uVar9;
  local_78._16_8_ = uVar10;
  local_78._24_8_ = uVar11;
  local_78._32_8_ = uVar12;
  local_78._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_78);
  if (local_78._0_8_ != 0) {
    plVar18 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_f8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_f8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_f8 < pFVar7 + lVar19 * 8)) {
    local_110 = (longlong)(this->IndependentOperations).ArrayNum;
    local_108 = 8;
    local_128 = &local_f8;
    local_120 = pFVar7;
    local_118 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FBatchQueryPresence> **)(pFVar7 + (longlong)iVar14 * 8) = local_f8
  ;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceCheckout> @ 14edc3900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceCheckout>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceCheckout> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceCheckout> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceCheckout> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceCheckout> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceCheckout> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceCheckout> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceCheckout>::
              TWrappedOperation<UE::Online::FCommerceCheckout><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceCheckout::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceCheckout> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceCheckout>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceCheckout>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceCheckout> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceQueryEntitlements> @ 14edc3b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryEntitlements>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceQueryEntitlements> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceQueryEntitlements>::
              TWrappedOperation<UE::Online::FCommerceQueryEntitlements><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryEntitlements::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryEntitlements>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryEntitlements>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceQueryEntitlements> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceQueryOffers> @ 14edc3dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryOffers>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceQueryOffers> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceQueryOffers> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceQueryOffers> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceQueryOffers> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceQueryOffers> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceQueryOffers>::
              TWrappedOperation<UE::Online::FCommerceQueryOffers><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryOffers::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffers>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryOffers>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceQueryOffers> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceQueryOffersById> @ 14edc4020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryOffersById>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceQueryOffersById> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceQueryOffersById> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceQueryOffersById> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceQueryOffersById> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceQueryOffersById> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceQueryOffersById>::
              TWrappedOperation<UE::Online::FCommerceQueryOffersById><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryOffersById::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffersById>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryOffersById>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceQueryOffersById> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceQueryTransactionEntitlements> @ 14edc4280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1> *
__thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryTransactionEntitlements>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
  *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements>::
              TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryTransactionEntitlements::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryTransactionEntitlements>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryTransactionEntitlements>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> **)
   (pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceRedeemEntitlement> @ 14edc44e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceRedeemEntitlement>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceRedeemEntitlement>::
              TWrappedOperation<UE::Online::FCommerceRedeemEntitlement><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceRedeemEntitlement::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRedeemEntitlement>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceRedeemEntitlement>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceRetrieveS2SToken> @ 14edc4740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceRetrieveS2SToken>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken>::
              TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceRetrieveS2SToken::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRetrieveS2SToken>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceRetrieveS2SToken>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCommerceShowStoreUI> @ 14edc49a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceShowStoreUI>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCommerceShowStoreUI> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCommerceShowStoreUI> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCommerceShowStoreUI> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCommerceShowStoreUI> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCommerceShowStoreUI> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCommerceShowStoreUI>::
              TWrappedOperation<UE::Online::FCommerceShowStoreUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceShowStoreUI::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceShowStoreUI>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceShowStoreUI>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCommerceShowStoreUI> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCreateLobby> @ 14edc4c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCreateLobby>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *__return_storage_ptr__
          ,Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCreateLobby> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCreateLobby> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FCreateLobby> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FCreateLobby> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCreateLobby> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCreateLobby> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCreateLobby>::
              TWrappedOperation<UE::Online::FCreateLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FCreateLobby::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FCreateLobby> **)&pTVar15->field_0x8
  ;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCreateLobby>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCreateLobby> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FCreateSession> @ 14edc4e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCreateSession>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FCreateSession> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_148 [32];
  TWrappedOperation<UE::Online::FCreateSession> **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  TWrappedOperation<UE::Online::FCreateSession> *local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  int local_e0;
  <lambda_1> local_d8;
  FDelegateHandle local_d0;
  FString local_c8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_b8;
  FDestructionSentinel local_a8;
  TSharedRef<UE::Online::IOnlineServices,1> local_90;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FCreateSession> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FCreateSession> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FCreateSession>::
              TWrappedOperation<UE::Online::FCreateSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FCreateSession::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FCreateSession> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_c8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_c8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_d8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_90);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = this;
  local_b8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FCreateSession>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
              *)local_f0,&local_b8,&local_d8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_a8);
  if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&)>
            ((FOnlineEventDelegateHandle *)local_78,local_d0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_78._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_78._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_78._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_78._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_78._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_78._40_8_;
  local_78._0_8_ = lVar19;
  local_78._8_8_ = uVar9;
  local_78._16_8_ = uVar10;
  local_78._24_8_ = uVar11;
  local_78._32_8_ = uVar12;
  local_78._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_78);
  if (local_78._0_8_ != 0) {
    plVar18 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_f8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_f8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_f8 < pFVar7 + lVar19 * 8)) {
    local_110 = (longlong)(this->IndependentOperations).ArrayNum;
    local_108 = 8;
    local_128 = &local_f8;
    local_120 = pFVar7;
    local_118 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FCreateSession> **)(pFVar7 + (longlong)iVar14 * 8) = local_f8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FDeclineLobbyInvitation> @ 14edc5160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FDeclineLobbyInvitation>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FDeclineLobbyInvitation> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FDeclineLobbyInvitation>::
              TWrappedOperation<UE::Online::FDeclineLobbyInvitation><UE::Online::FOnlineServicesCommon_&,UE::Online::FDeclineLobbyInvitation::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>_const_&,UE::Online::TOnlineResult<UE::Online::FDeclineLobbyInvitation>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FDeclineLobbyInvitation>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FDeclineLobbyInvitation> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FExternalUIShowFriendsUI> @ 14edc53c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FExternalUIShowFriendsUI>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FExternalUIShowFriendsUI>::
              TWrappedOperation<UE::Online::FExternalUIShowFriendsUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FExternalUIShowFriendsUI::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowFriendsUI>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FExternalUIShowFriendsUI>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FExternalUIShowLoginUI> @ 14edc5620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FExternalUIShowLoginUI>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FExternalUIShowLoginUI> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FExternalUIShowLoginUI>::
              TWrappedOperation<UE::Online::FExternalUIShowLoginUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FExternalUIShowLoginUI::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowLoginUI>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FExternalUIShowLoginUI>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FExternalUIShowLoginUI> **)(pFVar6 + (longlong)iVar13 * 8) =
       local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FFindLobbies> @ 14edc5850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FFindLobbies>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *__return_storage_ptr__
          ,Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FFindLobbies> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FFindLobbies> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FFindLobbies> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FFindLobbies> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FFindLobbies> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FFindLobbies> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FFindLobbies>::
              TWrappedOperation<UE::Online::FFindLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FFindLobbies::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FFindLobbies> **)&pTVar15->field_0x8
  ;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FFindLobbies>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FFindLobbies> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FFindSessions> @ 14edc5ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FFindSessions>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FFindSessions> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_148 [32];
  TWrappedOperation<UE::Online::FFindSessions> **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  TWrappedOperation<UE::Online::FFindSessions> *local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  int local_e0;
  <lambda_1> local_d8;
  FDelegateHandle local_d0;
  FString local_c8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_b8;
  FDestructionSentinel local_a8;
  TSharedRef<UE::Online::IOnlineServices,1> local_90;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FFindSessions> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FFindSessions> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FFindSessions>::
              TWrappedOperation<UE::Online::FFindSessions><UE::Online::FOnlineServicesCommon_&,UE::Online::FFindSessions::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FFindSessions> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_c8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_c8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_d8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_90);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = this;
  local_b8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FFindSessions>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
              *)local_f0,&local_b8,&local_d8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_a8);
  if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&)>
            ((FOnlineEventDelegateHandle *)local_78,local_d0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_78._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_78._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_78._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_78._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_78._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_78._40_8_;
  local_78._0_8_ = lVar19;
  local_78._8_8_ = uVar9;
  local_78._16_8_ = uVar10;
  local_78._24_8_ = uVar11;
  local_78._32_8_ = uVar12;
  local_78._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_78);
  if (local_78._0_8_ != 0) {
    plVar18 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_f8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_f8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_f8 < pFVar7 + lVar19 * 8)) {
    local_110 = (longlong)(this->IndependentOperations).ArrayNum;
    local_108 = 8;
    local_128 = &local_f8;
    local_120 = pFVar7;
    local_118 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FFindSessions> **)(pFVar7 + (longlong)iVar14 * 8) = local_f8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FFunctionalTestLobbies> @ 14edc5db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FFunctionalTestLobbies>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FFunctionalTestLobbies> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FFunctionalTestLobbies> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FFunctionalTestLobbies> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FFunctionalTestLobbies> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FFunctionalTestLobbies> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FFunctionalTestLobbies>::
              TWrappedOperation<UE::Online::FFunctionalTestLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FFunctionalTestLobbies::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FFunctionalTestLobbies>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FFunctionalTestLobbies> **)(pFVar6 + (longlong)iVar13 * 8) =
       local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FInviteLobbyMember> @ 14edc5fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FInviteLobbyMember>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FInviteLobbyMember> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FInviteLobbyMember> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FInviteLobbyMember> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FInviteLobbyMember> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FInviteLobbyMember> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FInviteLobbyMember>::
              TWrappedOperation<UE::Online::FInviteLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FInviteLobbyMember::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FInviteLobbyMember> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FInviteLobbyMember>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FInviteLobbyMember> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FJoinLobby> @ 14edc6240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FJoinLobby>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *__return_storage_ptr__,
          Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FJoinLobby> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FJoinLobby> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FJoinLobby> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FJoinLobby> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FJoinLobby> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FJoinLobby> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FJoinLobby>::
              TWrappedOperation<UE::Online::FJoinLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FJoinLobby::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FJoinLobby> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FJoinLobby>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FJoinLobby> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FJoinSession> @ 14edc64a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FJoinSession>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *__return_storage_ptr__
          ,Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FJoinSession> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_138 [32];
  TWrappedOperation<UE::Online::FJoinSession> **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TWrappedOperation<UE::Online::FJoinSession> *local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  <lambda_1> local_c8;
  FDelegateHandle local_c0;
  FString local_b8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_a8;
  FDestructionSentinel local_98;
  TSharedRef<UE::Online::IOnlineServices,1> local_80;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FJoinSession> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FJoinSession> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FJoinSession>::
              TWrappedOperation<UE::Online::FJoinSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FJoinSession::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FJoinSession> **)&pTVar15->field_0x8
  ;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_b8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_b8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_c8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_80);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = this;
  local_a8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FJoinSession>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
              *)local_e0,&local_a8,&local_c8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_98);
  if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&)>
            ((FOnlineEventDelegateHandle *)local_68,local_c0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_e8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_e8 < pFVar7 + lVar19 * 8)) {
    local_100 = (longlong)(this->IndependentOperations).ArrayNum;
    local_f8 = 8;
    local_118 = &local_e8;
    local_110 = pFVar7;
    local_108 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FJoinSession> **)(pFVar7 + (longlong)iVar14 * 8) = local_e8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FKickLobbyMember> @ 14edc67b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FKickLobbyMember>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FKickLobbyMember> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FKickLobbyMember> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FKickLobbyMember> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FKickLobbyMember> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FKickLobbyMember> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FKickLobbyMember> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FKickLobbyMember>::
              TWrappedOperation<UE::Online::FKickLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FKickLobbyMember::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FKickLobbyMember> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FKickLobbyMember>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FKickLobbyMember>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FKickLobbyMember> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FLeaveLobby> @ 14edc6a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FLeaveLobby>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *__return_storage_ptr__,
          Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FLeaveLobby> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FLeaveLobby> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FLeaveLobby> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FLeaveLobby> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FLeaveLobby> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FLeaveLobby> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FLeaveLobby>::
              TWrappedOperation<UE::Online::FLeaveLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FLeaveLobby::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FLeaveLobby> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FLeaveLobby>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FLeaveLobby> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FLeaveSession> @ 14edc6c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FLeaveSession>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FLeaveSession> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_138 [32];
  TWrappedOperation<UE::Online::FLeaveSession> **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TWrappedOperation<UE::Online::FLeaveSession> *local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  <lambda_1> local_c8;
  FDelegateHandle local_c0;
  FString local_b8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_a8;
  FDestructionSentinel local_98;
  TSharedRef<UE::Online::IOnlineServices,1> local_80;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FLeaveSession> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FLeaveSession> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FLeaveSession>::
              TWrappedOperation<UE::Online::FLeaveSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FLeaveSession::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FLeaveSession> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_b8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_b8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_c8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_80);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = this;
  local_a8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FLeaveSession>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
              *)local_e0,&local_a8,&local_c8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_98);
  if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&)>
            ((FOnlineEventDelegateHandle *)local_68,local_c0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_e8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_e8 < pFVar7 + lVar19 * 8)) {
    local_100 = (longlong)(this->IndependentOperations).ArrayNum;
    local_f8 = 8;
    local_118 = &local_e8;
    local_110 = pFVar7;
    local_108 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FLeaveSession> **)(pFVar7 + (longlong)iVar14 * 8) = local_e8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FModifyLobbyAttributes> @ 14edc6f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyAttributes>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FModifyLobbyAttributes> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FModifyLobbyAttributes> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FModifyLobbyAttributes> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FModifyLobbyAttributes> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FModifyLobbyAttributes> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FModifyLobbyAttributes>::
              TWrappedOperation<UE::Online::FModifyLobbyAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyAttributes::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyAttributes>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FModifyLobbyAttributes> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FModifyLobbyJoinPolicy> @ 14edc71e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyJoinPolicy>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy>::
              TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyJoinPolicy::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyJoinPolicy>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyJoinPolicy>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FModifyLobbyMemberAttributes> @ 14edc7440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyMemberAttributes>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes>::
              TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyMemberAttributes::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyMemberAttributes>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FModifyLobbySchema> @ 14edc76a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbySchema>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FModifyLobbySchema> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FModifyLobbySchema> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FModifyLobbySchema> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FModifyLobbySchema> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FModifyLobbySchema> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FModifyLobbySchema>::
              TWrappedOperation<UE::Online::FModifyLobbySchema><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbySchema::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FModifyLobbySchema> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbySchema>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbySchema>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FModifyLobbySchema> **)(pFVar6 + (longlong)iVar13 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FPartialUpdatePresence> @ 14edc79f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FPartialUpdatePresence>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FPartialUpdatePresence> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FPartialUpdatePresence> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FPartialUpdatePresence> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FPartialUpdatePresence> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FPartialUpdatePresence> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FPartialUpdatePresence>::
              TWrappedOperation<UE::Online::FPartialUpdatePresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FPartialUpdatePresence::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FPartialUpdatePresence>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FPartialUpdatePresence>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FPartialUpdatePresence> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FPromoteLobbyMember> @ 14edc7c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FPromoteLobbyMember>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FPromoteLobbyMember> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FPromoteLobbyMember> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FPromoteLobbyMember> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FPromoteLobbyMember> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FPromoteLobbyMember> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FPromoteLobbyMember>::
              TWrappedOperation<UE::Online::FPromoteLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FPromoteLobbyMember::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FPromoteLobbyMember>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FPromoteLobbyMember>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FPromoteLobbyMember> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8
  ;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryAchievementDefinitions> @ 14edc7eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryAchievementDefinitions>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FQueryAchievementDefinitions> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryAchievementDefinitions>::
              TWrappedOperation<UE::Online::FQueryAchievementDefinitions><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryAchievementDefinitions::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementDefinitions>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryAchievementDefinitions>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>
                 *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryAchievementDefinitions> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryAchievementStates> @ 14edc8110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryAchievementStates>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryAchievementStates> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FQueryAchievementStates> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FQueryAchievementStates> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryAchievementStates> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryAchievementStates> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryAchievementStates>::
              TWrappedOperation<UE::Online::FQueryAchievementStates><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryAchievementStates::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryAchievementStates> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementStates>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryAchievementStates>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryAchievementStates> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryPresence> @ 14edc8370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryPresence>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryPresence> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryPresence> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FQueryPresence> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FQueryPresence> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryPresence> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryPresence> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryPresence>::
              TWrappedOperation<UE::Online::FQueryPresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryPresence::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryPresence> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryPresence>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryPresence>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryPresence> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryUserPrivilege> @ 14edc85d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryUserPrivilege>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryUserPrivilege> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FQueryUserPrivilege> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FQueryUserPrivilege> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryUserPrivilege> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryUserPrivilege> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryUserPrivilege>::
              TWrappedOperation<UE::Online::FQueryUserPrivilege><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserPrivilege::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserPrivilege>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryUserPrivilege>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryUserPrivilege> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8
  ;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FReadEntriesAroundRank> @ 14edc8830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesAroundRank>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FReadEntriesAroundRank> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FReadEntriesAroundRank> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FReadEntriesAroundRank> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FReadEntriesAroundRank> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FReadEntriesAroundRank> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FReadEntriesAroundRank>::
              TWrappedOperation<UE::Online::FReadEntriesAroundRank><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesAroundRank::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundRank>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesAroundRank>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FReadEntriesAroundRank> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FReadEntriesAroundUser> @ 14edc8a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesAroundUser>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FReadEntriesAroundUser> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FReadEntriesAroundUser> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FReadEntriesAroundUser> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FReadEntriesAroundUser> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FReadEntriesAroundUser> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FReadEntriesAroundUser>::
              TWrappedOperation<UE::Online::FReadEntriesAroundUser><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesAroundUser::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundUser>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesAroundUser>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FReadEntriesAroundUser> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FReadEntriesForUsers> @ 14edc8cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesForUsers>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FReadEntriesForUsers> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FReadEntriesForUsers> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FReadEntriesForUsers> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FReadEntriesForUsers> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FReadEntriesForUsers> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FReadEntriesForUsers>::
              TWrappedOperation<UE::Online::FReadEntriesForUsers><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesForUsers::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesForUsers>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesForUsers>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FReadEntriesForUsers> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FRejectSessionInvite> @ 14edc8f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRejectSessionInvite>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FRejectSessionInvite> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_138 [32];
  TWrappedOperation<UE::Online::FRejectSessionInvite> **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TWrappedOperation<UE::Online::FRejectSessionInvite> *local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  <lambda_1> local_c8;
  FDelegateHandle local_c0;
  FString local_b8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_a8;
  FDestructionSentinel local_98;
  TSharedRef<UE::Online::IOnlineServices,1> local_80;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FRejectSessionInvite> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FRejectSessionInvite> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FRejectSessionInvite>::
              TWrappedOperation<UE::Online::FRejectSessionInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FRejectSessionInvite::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FRejectSessionInvite> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_b8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_b8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_c8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_80);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = this;
  local_a8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRejectSessionInvite>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
              *)local_e0,&local_a8,&local_c8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_98);
  if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&)>
            ((FOnlineEventDelegateHandle *)local_68,local_c0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_e8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_e8 < pFVar7 + lVar19 * 8)) {
    local_100 = (longlong)(this->IndependentOperations).ArrayNum;
    local_f8 = 8;
    local_118 = &local_e8;
    local_110 = pFVar7;
    local_108 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FRejectSessionInvite> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_e8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FRemoveSessionMember> @ 14edc9260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRemoveSessionMember>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FRemoveSessionMember> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_138 [32];
  TWrappedOperation<UE::Online::FRemoveSessionMember> **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TWrappedOperation<UE::Online::FRemoveSessionMember> *local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  <lambda_1> local_c8;
  FDelegateHandle local_c0;
  FString local_b8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_a8;
  FDestructionSentinel local_98;
  TSharedRef<UE::Online::IOnlineServices,1> local_80;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FRemoveSessionMember> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FRemoveSessionMember> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FRemoveSessionMember>::
              TWrappedOperation<UE::Online::FRemoveSessionMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FRemoveSessionMember::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FRemoveSessionMember> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_b8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_b8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_c8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_80);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = this;
  local_a8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRemoveSessionMember>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
              *)local_e0,&local_a8,&local_c8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_98);
  if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&)>
            ((FOnlineEventDelegateHandle *)local_68,local_c0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_e8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_e8 < pFVar7 + lVar19 * 8)) {
    local_100 = (longlong)(this->IndependentOperations).ArrayNum;
    local_f8 = 8;
    local_118 = &local_e8;
    local_110 = pFVar7;
    local_108 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FRemoveSessionMember> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_e8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FRestoreLobbies> @ 14edc9570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRestoreLobbies>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FRestoreLobbies> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FRestoreLobbies> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FRestoreLobbies> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FRestoreLobbies> *local_98;
  <lambda_1> local_90;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FRestoreLobbies> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FRestoreLobbies> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FRestoreLobbies>::
              TWrappedOperation<UE::Online::FRestoreLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FRestoreLobbies::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FRestoreLobbies> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = this;
  local_88.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *)(*pcVar7)()
      ;
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FRestoreLobbies>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRestoreLobbies>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_88,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar18 = *(longlong *)&this_00->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar18;
  local_68._8_8_ = uVar8;
  local_68._16_8_ = uVar9;
  local_68._24_8_ = uVar10;
  local_68._32_8_ = uVar11;
  local_68._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar17 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar6 + lVar18 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar6;
    local_b8 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *)(*pcVar7)()
      ;
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FRestoreLobbies> **)(pFVar6 + (longlong)iVar13 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FSendSessionInvite> @ 14edc97a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FSendSessionInvite>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FSendSessionInvite> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_148 [32];
  TWrappedOperation<UE::Online::FSendSessionInvite> **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  TWrappedOperation<UE::Online::FSendSessionInvite> *local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  int local_e0;
  <lambda_1> local_d8;
  FDelegateHandle local_d0;
  FString local_c8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_b8;
  FDestructionSentinel local_a8;
  TSharedRef<UE::Online::IOnlineServices,1> local_90;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FSendSessionInvite> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FSendSessionInvite> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FSendSessionInvite>::
              TWrappedOperation<UE::Online::FSendSessionInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FSendSessionInvite::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FSendSessionInvite> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_c8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_c8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_d8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_90);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = this;
  local_b8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FSendSessionInvite>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
              *)local_f0,&local_b8,&local_d8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_a8);
  if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&)>
            ((FOnlineEventDelegateHandle *)local_78,local_d0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_78._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_78._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_78._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_78._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_78._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_78._40_8_;
  local_78._0_8_ = lVar19;
  local_78._8_8_ = uVar9;
  local_78._16_8_ = uVar10;
  local_78._24_8_ = uVar11;
  local_78._32_8_ = uVar12;
  local_78._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_78);
  if (local_78._0_8_ != 0) {
    plVar18 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_f8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_f8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_f8 < pFVar7 + lVar19 * 8)) {
    local_110 = (longlong)(this->IndependentOperations).ArrayNum;
    local_108 = 8;
    local_128 = &local_f8;
    local_120 = pFVar7;
    local_118 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FSendSessionInvite> **)(pFVar7 + (longlong)iVar14 * 8) = local_f8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FStartMatchmaking> @ 14edc9aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FStartMatchmaking>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar5;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TWrappedOperation<UE::Online::FStartMatchmaking> *pTVar14;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar15;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_138 [32];
  TWrappedOperation<UE::Online::FStartMatchmaking> **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TWrappedOperation<UE::Online::FStartMatchmaking> *local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  <lambda_1> local_c8;
  FDelegateHandle local_c0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_b8;
  FDestructionSentinel local_a8;
  TSharedRef<UE::Online::IOnlineServices,1> local_90;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar3 = this->Services;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TWrappedOperation<UE::Online::FStartMatchmaking> *)0x0) {
    pTVar14 = (TWrappedOperation<UE::Online::FStartMatchmaking> *)0x0;
  }
  else {
    pTVar14 = TWrappedOperation<UE::Online::FStartMatchmaking>::
              TWrappedOperation<UE::Online::FStartMatchmaking><UE::Online::FOnlineServicesCommon_&,UE::Online::FStartMatchmaking::Params>
                        (pTVar14,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FStartMatchmaking> **)&pTVar14->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_c8.__this = this;
  pTVar15 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_90);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = this;
  local_b8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FStartMatchmaking>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
              *)local_e0,&local_b8,&local_c8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_a8);
  if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&)>
            ((FOnlineEventDelegateHandle *)local_78,local_c0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar18 = *(longlong *)&this_01->DelegateUnbinder;
  uVar8 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar17 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_78._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_78._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_78._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_78._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_78._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_78._40_8_;
  local_78._0_8_ = lVar18;
  local_78._8_8_ = uVar8;
  local_78._16_8_ = uVar9;
  local_78._24_8_ = uVar10;
  local_78._32_8_ = uVar11;
  local_78._40_8_ = plVar17;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_78);
  if (local_78._0_8_ != 0) {
    plVar17 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_e8 = pTVar14;
  if ((pFVar6 <= (FScriptContainerElement *)&local_e8) &&
     (lVar18 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_e8 < pFVar6 + lVar18 * 8)) {
    local_100 = (longlong)(this->IndependentOperations).ArrayNum;
    local_f8 = 8;
    local_118 = &local_e8;
    local_110 = pFVar6;
    local_108 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *)
                (*pcVar7)();
      return pTVar16;
    }
  }
  iVar13 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar13 + 1;
  *(TWrappedOperation<UE::Online::FStartMatchmaking> **)(pFVar6 + (longlong)iVar13 * 8) = local_e8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUnlockAchievements> @ 14edc9d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUnlockAchievements>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUnlockAchievements> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUnlockAchievements> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FUnlockAchievements> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FUnlockAchievements> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUnlockAchievements> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUnlockAchievements> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUnlockAchievements>::
              TWrappedOperation<UE::Online::FUnlockAchievements><UE::Online::FOnlineServicesCommon_&,UE::Online::FUnlockAchievements::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUnlockAchievements> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>_const_&,UE::Online::TOnlineResult<UE::Online::FUnlockAchievements>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUnlockAchievements>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUnlockAchievements> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8
  ;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUpdatePresence> @ 14edc9fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUpdatePresence>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUpdatePresence> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUpdatePresence> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FUpdatePresence> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FUpdatePresence> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUpdatePresence> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUpdatePresence> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUpdatePresence>::
              TWrappedOperation<UE::Online::FUpdatePresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdatePresence::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUpdatePresence> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *)(*pcVar8)()
      ;
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdatePresence>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUpdatePresence>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *)(*pcVar8)()
      ;
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUpdatePresence> **)(pFVar7 + (longlong)iVar14 * 8) = local_a8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUpdateSessionSettings> @ 14edca220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUpdateSessionSettings>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUpdateSessionSettings> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_01;
  undefined1 auStack_148 [32];
  TWrappedOperation<UE::Online::FUpdateSessionSettings> **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  TWrappedOperation<UE::Online::FUpdateSessionSettings> *local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  int local_e0;
  <lambda_1> local_d8;
  FDelegateHandle local_d0;
  FString local_c8;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_b8;
  FDestructionSentinel local_a8;
  TSharedRef<UE::Online::IOnlineServices,1> local_90;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUpdateSessionSettings> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUpdateSessionSettings> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUpdateSessionSettings>::
              TWrappedOperation<UE::Online::FUpdateSessionSettings><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdateSessionSettings::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_c8,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_c8,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_d8.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_90);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
             *)(pTVar5->OnCompleteEvent).DelegateRef.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = this;
  local_b8.SharedReferenceCount.ReferenceController = pTVar4;
  Online::Private::
  ConstructObjectDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUpdateSessionSettings>_::__l2::<lambda_1>_>
            ((TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
              *)local_f0,&local_b8,&local_d8);
  TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
  ::Add(this_00,(TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
                 *)&local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_a8);
  if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&)>
            ((FOnlineEventDelegateHandle *)local_78,local_d0,&(pTVar5->OnCompleteEvent).DelegateRef)
  ;
  pTVar5 = __return_storage_ptr__->Object;
  this_01 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_01);
  lVar19 = *(longlong *)&this_01->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_01->DelegateUnbinder = local_78._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_78._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_78._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_78._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_78._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_78._40_8_;
  local_78._0_8_ = lVar19;
  local_78._8_8_ = uVar9;
  local_78._16_8_ = uVar10;
  local_78._24_8_ = uVar11;
  local_78._32_8_ = uVar12;
  local_78._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_78);
  if (local_78._0_8_ != 0) {
    plVar18 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_f8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_f8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_f8 < pFVar7 + lVar19 * 8)) {
    local_110 = (longlong)(this->IndependentOperations).ArrayNum;
    local_108 = 8;
    local_128 = &local_f8;
    local_120 = pFVar7;
    local_118 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUpdateSessionSettings> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_f8;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FWriteLeaderboardScores> @ 14edca520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FWriteLeaderboardScores>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FWriteLeaderboardScores> *pTVar15;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_f8 [32];
  TWrappedOperation<UE::Online::FWriteLeaderboardScores> **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  TWrappedOperation<UE::Online::FWriteLeaderboardScores> *local_a8;
  <lambda_1> local_a0;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_98;
  FString local_88;
  TSharedRef<UE::Online::IOnlineServices,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FWriteLeaderboardScores> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FWriteLeaderboardScores> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FWriteLeaderboardScores>::
              TWrappedOperation<UE::Online::FWriteLeaderboardScores><UE::Online::FOnlineServicesCommon_&,UE::Online::FWriteLeaderboardScores::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_a0.__this = this;
  pTVar16 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                      ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                       &local_78);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = this;
  local_98.SharedReferenceCount.ReferenceController = pTVar4;
  if (this == (FOnlineAsyncOpCache *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x158,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>_const_&,UE::Online::TOnlineResult<UE::Online::FWriteLeaderboardScores>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FWriteLeaderboardScores>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,&local_98,&local_a0);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_a8 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar7 + lVar19 * 8)) {
    local_c0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar7;
    local_c8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FWriteLeaderboardScores> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_a8;
  return __return_storage_ptr__;
}

// ~FOnlineAsyncOpCache @ 14ee24be0

void __thiscall UE::Online::FOnlineAsyncOpCache::~FOnlineAsyncOpCache(FOnlineAsyncOpCache *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  DestructItems<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,int>
            ((TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>
              *)(this->IndependentOperations).AllocatorInstance.Data,
             (this->IndependentOperations).ArrayNum);
  pFVar1 = (this->IndependentOperations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->UserOperations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UserOperations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserOperations);
  *(undefined4 *)&(this->Operations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Operations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Operations);
  if (*(longlong *)&this->LoadConfigFn != 0) {
    plVar3 = *(longlong **)&(this->LoadConfigFn).field_0x28;
    plVar4 = (longlong *)&(this->LoadConfigFn).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// CancelAll @ 14ee6a6d0

void __thiscall UE::Online::FOnlineAsyncOpCache::CancelAll(FOnlineAsyncOpCache *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar4 = (this->IndependentOperations).AllocatorInstance.Data;
  iVar11 = 0;
  (this->IndependentOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10 = (this->IndependentOperations).ArrayNum;
  lVar9 = (longlong)local_res10;
  (this->IndependentOperations).ArrayNum = 0;
  (this->IndependentOperations).ArrayMax = 0;
  for (pFVar10 = pFVar4; pFVar10 != pFVar4 + lVar9 * 8; pFVar10 = pFVar10 + 8) {
    (**(code **)((longlong)**(IWrappedOperation **)&pFVar10->field_0x0 + 0x20))();
  }
  puVar1 = &(this->UserOperations).field_0x10;
  uVar7 = 1;
  iVar3 = *(int *)&(this->UserOperations).field_0x28;
  iVar13 = 0;
  iVar8 = iVar11;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->UserOperations).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ee6a7ac;
      uVar12 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar13 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14ee6a7ac:
  uVar12 = *(uint *)&(this->UserOperations).field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->UserOperations).field_0x8 -
                       *(int *)&(this->UserOperations).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->UserOperations).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->UserOperations).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ee6a8c0;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14ee6a8c0:
  while( true ) {
    if (*(int *)&(this->UserOperations).field_0x8 - *(int *)&(this->UserOperations).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    CancelOperations(this,(TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>
                           *)(*(longlong *)&this->UserOperations + 8 +
                             (longlong)TStack_60.CurrentBitIndex * 0x60));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  CancelOperations(this,&this->Operations);
  DestructItems<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,int>
            ((TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>
              *)pFVar4,local_res10);
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CancelOperations @ 14ee6a960

void __thiscall
UE::Online::FOnlineAsyncOpCache::CancelOperations
          (FOnlineAsyncOpCache *this,
          TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  puVar1 = &param_1->field_0x10;
  do {
    iVar3 = *(int *)&param_1->field_0x28;
    iVar10 = 0;
    iVar14 = 0;
    uVar8 = 1;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar16 = (uint *)puVar1;
      if (*(uint **)&param_1->field_0x20 != (uint *)0x0) {
        puVar16 = *(uint **)&param_1->field_0x20;
      }
      uVar13 = *puVar16;
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar10;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar10 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ee6aa0b;
        uVar13 = puVar16[lVar11 + 1];
      }
      uVar8 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar9 = local_res20 + -1 + iVar14;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_14ee6aa0b:
    uVar13 = *(uint *)&param_1->field_0x28;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uVar8,iVar10);
    TStack_78.CurrentBitIndex = iVar9;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar13 >> 5;
    TStack_78._28_4_ = local_34;
    TStack_78.BaseBitIndex = iVar14;
    uStack_58 = CONCAT44(uStack_84,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *(uint *)&param_1->field_0x28;
    if (uVar13 != uVar8) {
      puVar15 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)&param_1->field_0x20;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar10;
        uVar12 = uVar12 + 0x20;
        iVar10 = iVar10 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14ee6ab10;
        uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar12;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_14ee6ab10:
    while( true ) {
      if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_58) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      lVar11 = (longlong)TStack_78.CurrentBitIndex;
      if ((TStack_78.CurrentBitIndex == uVar13) &&
         (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
        return;
      }
      lVar4 = *(longlong *)param_1;
      bVar7 = (**(code **)(**(longlong **)(lVar4 + 8 + lVar11 * 0x18) + 0x30))();
      if (bVar7 < 4) break;
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    (**(code **)(**(longlong **)(lVar4 + lVar11 * 0x18 + 8) + 0x20))();
  } while( true );
}

// ClearAllCallbacks @ 14ee711f0

void __thiscall UE::Online::FOnlineAsyncOpCache::ClearAllCallbacks(FOnlineAsyncOpCache *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar10 = (this->IndependentOperations).AllocatorInstance.Data;
  iVar4 = (this->IndependentOperations).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->IndependentOperations).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar10 + 0x28))();
    pFVar10 = pFVar10 + 8;
  }
  iVar12 = 0;
  puVar1 = &(this->UserOperations).field_0x10;
  iVar4 = *(int *)&(this->UserOperations).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->UserOperations).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ee712cd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res18;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ee712cd:
  uVar11 = *(uint *)&(this->UserOperations).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->UserOperations).field_0x8 -
                       *(int *)&(this->UserOperations).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->UserOperations).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->UserOperations).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ee713d0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14ee713d0:
  while( true ) {
    if (*(int *)&(this->UserOperations).field_0x8 - *(int *)&(this->UserOperations).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    ClearCallbacks(this,(TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>
                         *)(*(longlong *)&this->UserOperations + 8 +
                           (longlong)TStack_60.CurrentBitIndex * 0x60));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  ClearCallbacks(this,&this->Operations);
  return;
}

// ClearCallbacks @ 14ee7bbd0

void __thiscall
UE::Online::FOnlineAsyncOpCache::ClearCallbacks
          (FOnlineAsyncOpCache *this,
          TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ee7bc6d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ee7bc6d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ee7bd70;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14ee7bd70:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   (*(longlong *)param_1 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18) + 0x28))
              ();
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// GetSharedThis @ 14eee53c0

TSharedRef<UE::Online::FOnlineAsyncOpCache,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetSharedThis
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar2;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pTVar2 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->Services->field_0x8,
                      &local_18);
  __return_storage_ptr__->Object = this;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HasAnyRunningOperation @ 14eee7f70

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UE::Online::FOnlineAsyncOpCache::HasAnyRunningOperation(FOnlineAsyncOpCache *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar12 = (this->IndependentOperations).AllocatorInstance.Data;
  iVar4 = (this->IndependentOperations).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->IndependentOperations).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar2) break;
    bVar6 = (**(code **)(**(longlong **)pFVar12 + 0x30))();
    if (bVar6 < 4) {
      return true;
    }
    pFVar12 = pFVar12 + 8;
  }
  iVar14 = 0;
  puVar1 = &(this->UserOperations).field_0x10;
  iVar4 = *(int *)&(this->UserOperations).field_0x28;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->UserOperations).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14eee805d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar10 = iVar16 + -1 + local_res18;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14eee805d:
  uVar13 = *(uint *)&(this->UserOperations).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar14);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->UserOperations).field_0x8 -
                       *(int *)&(this->UserOperations).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&(this->UserOperations).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->UserOperations).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14eee8160;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14eee8160:
  while( true ) {
    if (*(int *)&(this->UserOperations).field_0x8 - *(int *)&(this->UserOperations).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    bVar7 = HasAnyRunningOperationIn
                      (this,(TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>
                             *)(*(longlong *)&this->UserOperations + 8 +
                               (longlong)TStack_60.CurrentBitIndex * 0x60));
    if (bVar7) {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar7 = HasAnyRunningOperationIn(this,&this->Operations);
  return bVar7;
}

// HasAnyRunningOperationIn @ 14eee8200

bool __thiscall
UE::Online::FOnlineAsyncOpCache::HasAnyRunningOperationIn
          (FOnlineAsyncOpCache *this,
          TMap<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14eee829d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = local_res18 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14eee829d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar8,iVar13);
  TStack_50.CurrentBitIndex = iVar9;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iVar9;
  TStack_50.BaseBitIndex = iVar15;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14eee83a0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14eee83a0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::FOnlineAsyncOpCache::FWrappedOperationKey,TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar12) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    bVar7 = (**(code **)(**(longlong **)
                           (*(longlong *)param_1 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18) +
                        0x30))();
    if (bVar7 < 4) {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// GetOp<UE::Online::FAcceptFriendInvite> @ 14ef5b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAcceptFriendInvite>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FAcceptFriendInvite> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FAcceptFriendInvite> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FAcceptFriendInvite> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FAcceptFriendInvite> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FAcceptFriendInvite> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FAcceptFriendInvite>::
              TWrappedOperation<UE::Online::FAcceptFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FAcceptFriendInvite::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FAcceptFriendInvite>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FAcceptFriendInvite>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FAcceptFriendInvite> **)(pFVar7 + (longlong)iVar14 * 8) = local_88
  ;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FBatchQueryStats> @ 14ef5b560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FBatchQueryStats>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FBatchQueryStats> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FBatchQueryStats> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FBatchQueryStats> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FBatchQueryStats> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FBatchQueryStats> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FBatchQueryStats> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FBatchQueryStats>::
              TWrappedOperation<UE::Online::FBatchQueryStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FBatchQueryStats::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FBatchQueryStats> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryStats>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FBatchQueryStats>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FBatchQueryStats> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FBlockUser> @ 14ef5b7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FBlockUser>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *__return_storage_ptr__,
          Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FBlockUser> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FBlockUser> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FBlockUser> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FBlockUser> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FBlockUser> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FBlockUser> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FBlockUser>::
              TWrappedOperation<UE::Online::FBlockUser><UE::Online::FOnlineServicesCommon_&,UE::Online::FBlockUser::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FBlockUser> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>_const_&,UE::Online::TOnlineResult<UE::Online::FBlockUser>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FBlockUser>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FBlockUser> **)(pFVar7 + (longlong)iVar14 * 8) = local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryBlockedUsers> @ 14ef5b9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryBlockedUsers>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryBlockedUsers> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FQueryBlockedUsers> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FQueryBlockedUsers> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryBlockedUsers> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryBlockedUsers> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryBlockedUsers>::
              TWrappedOperation<UE::Online::FQueryBlockedUsers><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryBlockedUsers::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryBlockedUsers>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryBlockedUsers>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryBlockedUsers> **)(pFVar7 + (longlong)iVar14 * 8) = local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryFriends> @ 14ef5bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryFriends>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryFriends> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryFriends> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FQueryFriends> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FQueryFriends> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryFriends> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryFriends> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryFriends>::
              TWrappedOperation<UE::Online::FQueryFriends><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryFriends::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryFriends> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryFriends>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryFriends>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryFriends> **)(pFVar7 + (longlong)iVar14 * 8) = local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryStats> @ 14ef5be90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryStats>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *__return_storage_ptr__,
          Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryStats> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryStats> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FQueryStats> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FQueryStats> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryStats> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryStats> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryStats>::
              TWrappedOperation<UE::Online::FQueryStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryStats::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FQueryStats> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryStats>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryStats>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryStats> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryUserAvatar> @ 14ef5c0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryUserAvatar>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryUserAvatar> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FQueryUserAvatar> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FQueryUserAvatar> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryUserAvatar> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryUserAvatar> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryUserAvatar>::
              TWrappedOperation<UE::Online::FQueryUserAvatar><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserAvatar::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryUserAvatar> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserAvatar>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryUserAvatar>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryUserAvatar> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FQueryUserInfo> @ 14ef5c310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryUserInfo>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FQueryUserInfo> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FQueryUserInfo> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FQueryUserInfo> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FQueryUserInfo> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FQueryUserInfo> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FQueryUserInfo> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FQueryUserInfo>::
              TWrappedOperation<UE::Online::FQueryUserInfo><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserInfo::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FQueryUserInfo> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserInfo>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FQueryUserInfo>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FQueryUserInfo> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FRejectFriendInvite> @ 14ef5c550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRejectFriendInvite>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FRejectFriendInvite> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FRejectFriendInvite> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FRejectFriendInvite> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FRejectFriendInvite> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FRejectFriendInvite> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FRejectFriendInvite>::
              TWrappedOperation<UE::Online::FRejectFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FRejectFriendInvite::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FRejectFriendInvite> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectFriendInvite>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FRejectFriendInvite>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FRejectFriendInvite> **)(pFVar7 + (longlong)iVar14 * 8) = local_88
  ;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FResetStats> @ 14ef5c7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FResetStats>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *__return_storage_ptr__,
          Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FResetStats> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FResetStats> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FResetStats> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FResetStats> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FResetStats> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FResetStats> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FResetStats>::
              TWrappedOperation<UE::Online::FResetStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FResetStats::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FResetStats> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>_const_&,UE::Online::TOnlineResult<UE::Online::FResetStats>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FResetStats>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FResetStats> **)(pFVar7 + (longlong)iVar14 * 8) = local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FSendFriendInvite> @ 14ef5c9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FSendFriendInvite>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FSendFriendInvite> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FSendFriendInvite> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FSendFriendInvite> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FSendFriendInvite> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FSendFriendInvite> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FSendFriendInvite> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FSendFriendInvite>::
              TWrappedOperation<UE::Online::FSendFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FSendFriendInvite::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FSendFriendInvite> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendFriendInvite>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FSendFriendInvite>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FSendFriendInvite> **)(pFVar7 + (longlong)iVar14 * 8) = local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FShowUserProfile> @ 14ef5cc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FShowUserProfile>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FShowUserProfile> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FShowUserProfile> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FShowUserProfile> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FShowUserProfile> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FShowUserProfile> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FShowUserProfile> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FShowUserProfile>::
              TWrappedOperation<UE::Online::FShowUserProfile><UE::Online::FOnlineServicesCommon_&,UE::Online::FShowUserProfile::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FShowUserProfile> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>_const_&,UE::Online::TOnlineResult<UE::Online::FShowUserProfile>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FShowUserProfile>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FShowUserProfile> **)(pFVar7 + (longlong)iVar14 * 8) = local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FTitleFileEnumerateFiles> @ 14ef5ce90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FTitleFileEnumerateFiles>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FTitleFileEnumerateFiles>::
              TWrappedOperation<UE::Online::FTitleFileEnumerateFiles><UE::Online::FOnlineServicesCommon_&,UE::Online::FTitleFileEnumerateFiles::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileEnumerateFiles>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FTitleFileEnumerateFiles>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FTitleFileReadFile> @ 14ef5d0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FTitleFileReadFile>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FTitleFileReadFile> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FTitleFileReadFile> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FTitleFileReadFile> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FTitleFileReadFile> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FTitleFileReadFile> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FTitleFileReadFile>::
              TWrappedOperation<UE::Online::FTitleFileReadFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FTitleFileReadFile::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FTitleFileReadFile> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileReadFile>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FTitleFileReadFile>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FTitleFileReadFile> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FTriggerEvent> @ 14ef5d320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FTriggerEvent>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FTriggerEvent> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FTriggerEvent> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FTriggerEvent> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FTriggerEvent> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FTriggerEvent> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FTriggerEvent> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FTriggerEvent>::
              TWrappedOperation<UE::Online::FTriggerEvent><UE::Online::FOnlineServicesCommon_&,UE::Online::FTriggerEvent::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FTriggerEvent> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>_const_&,UE::Online::TOnlineResult<UE::Online::FTriggerEvent>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FTriggerEvent>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FTriggerEvent> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUpdateStats> @ 14ef5d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUpdateStats>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *__return_storage_ptr__
          ,Params *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUpdateStats> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUpdateStats> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FUpdateStats> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FUpdateStats> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUpdateStats> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUpdateStats> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUpdateStats>::
              TWrappedOperation<UE::Online::FUpdateStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdateStats::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object = *(TOnlineAsyncOp<UE::Online::FUpdateStats> **)&pTVar15->field_0x8
  ;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateStats>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUpdateStats>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *)(*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUpdateStats> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUserFileCopyFile> @ 14ef5d7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileCopyFile>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUserFileCopyFile> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FUserFileCopyFile> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FUserFileCopyFile> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUserFileCopyFile> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUserFileCopyFile> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUserFileCopyFile>::
              TWrappedOperation<UE::Online::FUserFileCopyFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileCopyFile::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUserFileCopyFile> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileCopyFile>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileCopyFile>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUserFileCopyFile> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUserFileDeleteFile> @ 14ef5d9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileDeleteFile>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUserFileDeleteFile> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FUserFileDeleteFile> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FUserFileDeleteFile> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUserFileDeleteFile> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUserFileDeleteFile> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUserFileDeleteFile>::
              TWrappedOperation<UE::Online::FUserFileDeleteFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileDeleteFile::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileDeleteFile>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileDeleteFile>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUserFileDeleteFile> **)(pFVar7 + (longlong)iVar14 * 8) = local_98
  ;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUserFileEnumerateFiles> @ 14ef5dc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileEnumerateFiles>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_d8 [32];
  TWrappedOperation<UE::Online::FUserFileEnumerateFiles> **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *local_88;
  <lambda_1> local_80;
  FString local_78;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUserFileEnumerateFiles>::
              TWrappedOperation<UE::Online::FUserFileEnumerateFiles><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileEnumerateFiles::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_78,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_78,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_80.__this = this;
  pTVar16 = GetSharedThis(this,&local_68);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileEnumerateFiles>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileEnumerateFiles>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_58,pTVar16,&local_80);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_58._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_58._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_58._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_58._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_58._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_58._40_8_;
  local_58._0_8_ = lVar19;
  local_58._8_8_ = uVar9;
  local_58._16_8_ = uVar10;
  local_58._24_8_ = uVar11;
  local_58._32_8_ = uVar12;
  local_58._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_58);
  if (local_58._0_8_ != 0) {
    plVar18 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_88 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar19 * 8)) {
    local_a0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_98 = 8;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUserFileEnumerateFiles> **)(pFVar7 + (longlong)iVar14 * 8) =
       local_88;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUserFileReadFile> @ 14ef5de70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileReadFile>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUserFileReadFile> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUserFileReadFile> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FUserFileReadFile> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FUserFileReadFile> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUserFileReadFile> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUserFileReadFile> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUserFileReadFile>::
              TWrappedOperation<UE::Online::FUserFileReadFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileReadFile::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUserFileReadFile> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileReadFile>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileReadFile>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUserFileReadFile> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

// GetOp<UE::Online::FUserFileWriteFile> @ 14ef5e0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> * __thiscall
UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileWriteFile>
          (FOnlineAsyncOpCache *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1>
          *__return_storage_ptr__,Params *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<UE::Online::FOnlineAsyncOpCache::IWrappedOperation,TDefaultDelete<UE::Online::FOnlineAsyncOpCache::IWrappedOperation>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOnlineServicesCommon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *pTVar5;
  FAsyncOpSharedState *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TWrappedOperation<UE::Online::FUserFileWriteFile> *pTVar15;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> *pTVar16;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  FOnlineEventDelegateHandle *this_00;
  undefined1 auStack_e8 [32];
  TWrappedOperation<UE::Online::FUserFileWriteFile> **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TWrappedOperation<UE::Online::FUserFileWriteFile> *local_98;
  <lambda_1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FOnlineAsyncOpCache,1> local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar3 = this->Services;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 == (TWrappedOperation<UE::Online::FUserFileWriteFile> *)0x0) {
    pTVar15 = (TWrappedOperation<UE::Online::FUserFileWriteFile> *)0x0;
  }
  else {
    pTVar15 = TWrappedOperation<UE::Online::FUserFileWriteFile>::
              TWrappedOperation<UE::Online::FUserFileWriteFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileWriteFile::Params>
                        (pTVar15,pFVar3,param_1);
  }
  __return_storage_ptr__->Object =
       *(TOnlineAsyncOp<UE::Online::FUserFileWriteFile> **)&pTVar15->field_0x8;
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = __return_storage_ptr__->Object;
  pFVar6 = (pTVar5->SharedState).Object;
  ::FString::FString(&local_88,L"LocalAccountId");
  Online::Private::FOnlineOperationData::
  Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((FOnlineOperationData *)&pTVar5->_padding_,&local_88,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar5 = __return_storage_ptr__->Object;
  local_90.__this = this;
  pTVar16 = GetSharedThis(this,&local_78);
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileWriteFile>_const_&)>
  ::
  Add<TSharedRef<UE::Online::FOnlineAsyncOpCache,1>,_UE::Online::FOnlineAsyncOpCache::GetOp<UE::Online::FUserFileWriteFile>_::__l2::<lambda_1>_>
            (&pTVar5->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_68,pTVar16,&local_90);
  pTVar5 = __return_storage_ptr__->Object;
  this_00 = &pTVar5->OpCacheHandle;
  FOnlineEventDelegateHandle::Unbind(this_00);
  lVar19 = *(longlong *)&this_00->DelegateUnbinder;
  uVar9 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8;
  uVar10 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10;
  uVar11 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18;
  uVar12 = *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20;
  plVar18 = *(longlong **)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&this_00->DelegateUnbinder = local_68._0_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x8 = local_68._8_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x10 = local_68._16_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x18 = local_68._24_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x20 = local_68._32_8_;
  *(undefined8 *)&(pTVar5->OpCacheHandle).DelegateUnbinder.field_0x28 = local_68._40_8_;
  local_68._0_8_ = lVar19;
  local_68._8_8_ = uVar9;
  local_68._16_8_ = uVar10;
  local_68._24_8_ = uVar11;
  local_68._32_8_ = uVar12;
  local_68._40_8_ = plVar18;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
  if (local_68._0_8_ != 0) {
    plVar18 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->IndependentOperations;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_98 = pTVar15;
  if ((pFVar7 <= (FScriptContainerElement *)&local_98) &&
     (lVar19 = (longlong)(this->IndependentOperations).ArrayMax,
     (FScriptContainerElement *)&local_98 < pFVar7 + lVar19 * 8)) {
    local_b0 = (longlong)(this->IndependentOperations).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_98;
    local_c0 = pFVar7;
    local_b8 = lVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> *)
                (*pcVar8)();
      return pTVar17;
    }
  }
  iVar14 = (this->IndependentOperations).ArrayNum;
  piVar1 = &(this->IndependentOperations).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  (this->IndependentOperations).ArrayNum = iVar14 + 1;
  *(TWrappedOperation<UE::Online::FUserFileWriteFile> **)(pFVar7 + (longlong)iVar14 * 8) = local_98;
  return __return_storage_ptr__;
}

