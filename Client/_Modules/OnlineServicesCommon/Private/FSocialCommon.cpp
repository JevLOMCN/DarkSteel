// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 12

// FSocialCommon @ 14ef6fe50

FSocialCommon * __thiscall
UE::Online::FSocialCommon::FSocialCommon(FSocialCommon *this,FOnlineServicesCommon *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar5;
  FOnlineAsyncOpQueueParallel *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSocialCommon *pFVar8;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Social");
  this->_padding_ = (longlong)param_1;
  this->_padding_ =
       (longlong)&TOnlineComponent<UE::Online::ISocial>::_vftable__for__UE__Online__ISocial__;
  this->_padding_ =
       (longlong)
       &TOnlineComponent<UE::Online::ISocial>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar5 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar7 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)this;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)this;
    this->_padding_ = (longlong)pTVar7;
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  plVar1 = &this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *plVar1 = 0;
  *(int *)&this->_padding_ = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)plVar1,local_38.Data.ArrayNum,
               piVar2);
    memcpy((void *)*plVar1,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  pFVar6 = FOnlineServicesCommon::GetParallelQueue(param_1);
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->_padding_,pFVar6);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&_vftable__for__UE__Online__ISocial__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  pTVar7 = ::operator_new(0x30);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnRelationshipUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FRelationshipUpdated_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnRelationshipUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFRelationshipUpdated_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnRelationshipUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FRelationshipUpdated_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar7 + 1);
    (this->OnRelationshipUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController = pTVar7
    ;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FRelationshipUpdated_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar7 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FRelationshipUpdated_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FSocialCommon *)(*pcVar3)();
        return pFVar8;
      }
    }
  }
  return this;
}

// AcceptFriendInvite @ 14ef84f00

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAcceptFriendInvite> * __thiscall
UE::Online::FSocialCommon::AcceptFriendInvite
          (FSocialCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAcceptFriendInvite> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAcceptFriendInvite>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAcceptFriendInvite>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"AcceptFriendInvite");
  pTVar6 = TOnlineComponent<UE::Online::ISocial>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISocial> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAcceptFriendInvite>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAcceptFriendInvite>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAcceptFriendInvite> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// BlockUser @ 14ef868d0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FBlockUser> * __thiscall
UE::Online::FSocialCommon::BlockUser
          (FSocialCommon *this,TOnlineAsyncOpHandle<UE::Online::FBlockUser> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FBlockUser>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FBlockUser>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"BlockUser");
  pTVar6 = TOnlineComponent<UE::Online::ISocial>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISocial> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FBlockUser>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FBlockUser>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FBlockUser> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FBlockUser>::CreateSharedState(local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// BroadcastRelationshipUpdated @ 14ef86a90

void __thiscall
UE::Online::FSocialCommon::BroadcastRelationshipUpdated
          (FSocialCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> param_1,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> param_2,ERelationship param_3,
          ERelationship param_4)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_28;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (this->OnRelationshipUpdatedEvent).DelegateRef.Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_28);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
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
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// GetBlockedUsers @ 14efaa430

TOnlineResult<UE::Online::FGetBlockedUsers> * __thiscall
UE::Online::FSocialCommon::GetBlockedUsers
          (FSocialCommon *this,TOnlineResult<UE::Online::FGetBlockedUsers> *__return_storage_ptr__,
          Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetBlockedUsers_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetBlockedUsers_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
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
  return __return_storage_ptr__;
}

// GetFriends @ 14efad650

TOnlineResult<UE::Online::FGetFriends> * __thiscall
UE::Online::FSocialCommon::GetFriends
          (FSocialCommon *this,TOnlineResult<UE::Online::FGetFriends> *__return_storage_ptr__,
          Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetFriends_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetFriends_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
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
  return __return_storage_ptr__;
}

// OnRelationshipUpdated @ 14efb1600

TOnlineEvent<void___cdecl(UE::Online::FRelationshipUpdated_const_&)> __thiscall
UE::Online::FSocialCommon::OnRelationshipUpdated(FSocialCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FRelationshipUpdated_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FRelationshipUpdated_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnRelationshipUpdatedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FRelationshipUpdated_const_&)>)in_RDX;
}

// QueryBlockedUsers @ 14efb16e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FQueryBlockedUsers> * __thiscall
UE::Online::FSocialCommon::QueryBlockedUsers
          (FSocialCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FQueryBlockedUsers> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryBlockedUsers>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryBlockedUsers>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryBlockedUsers");
  pTVar6 = TOnlineComponent<UE::Online::ISocial>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISocial> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FQueryBlockedUsers>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FQueryBlockedUsers>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FQueryBlockedUsers> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// QueryFriends @ 14efb18a0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FQueryFriends> * __thiscall
UE::Online::FSocialCommon::QueryFriends
          (FSocialCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FQueryFriends> *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryFriends>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryFriends>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryFriends");
  pTVar6 = TOnlineComponent<UE::Online::ISocial>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISocial> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FQueryFriends>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FQueryFriends>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FQueryFriends> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FQueryFriends>::CreateSharedState(local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RegisterCommands @ 14efb2370

void __thiscall UE::Online::FSocialCommon::RegisterCommands(FSocialCommon *this)

{
  TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
  *pTVar1;
  TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
  *pTVar2;
  TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
  *local_res8;
  wchar_t *local_res10;
  uint uStack_1c;
  
  pTVar2 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
            *)0x0;
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFQueryFriends_Online_UE___23___QEAUParams_FQueryFriends_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__0__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"QueryFriends";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetFriends_Online_UE___23___QEAUParams_FGetFriends_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__8__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"GetFriends";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineResult<UE::Online::FGetFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FGetFriends::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineResult<UE::Online::FGetFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FGetFriends::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFSendFriendInvite_Online_UE___23___QEAUParams_FSendFriendInvite_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__16__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"SendFriendInvite";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FSendFriendInvite>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FSendFriendInvite::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FSendFriendInvite>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FSendFriendInvite::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAcceptFriendInvite_Online_UE___23___QEAUParams_FAcceptFriendInvite_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__24__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"AcceptFriendInvite";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAcceptFriendInvite>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FAcceptFriendInvite::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAcceptFriendInvite>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FAcceptFriendInvite::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFRejectFriendInvite_Online_UE___23___QEAUParams_FRejectFriendInvite_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__32__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"RejectFriendInvite";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRejectFriendInvite>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FRejectFriendInvite::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRejectFriendInvite>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FRejectFriendInvite::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFQueryBlockedUsers_Online_UE___23___QEAUParams_FQueryBlockedUsers_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__48__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"QueryBlockedUsers";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryBlockedUsers>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryBlockedUsers::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryBlockedUsers>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryBlockedUsers::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetBlockedUsers_Online_UE___23___QEAUParams_FGetBlockedUsers_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__56__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"GetBlockedUsers";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineResult<UE::Online::FGetBlockedUsers>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FGetBlockedUsers::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineResult<UE::Online::FGetBlockedUsers>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FGetBlockedUsers::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryFriends>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FQueryFriends::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFSocialCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFBlockUser_Online_UE___23___QEAUParams_FBlockUser_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__64__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    pTVar2 = pTVar1;
  }
  local_res10 = L"BlockUser";
  local_res8 = pTVar2;
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FBlockUser>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FBlockUser::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FSocialCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FBlockUser>_(__cdecl_UE::Online::FSocialCommon::*)(UE::Online::FBlockUser::Params_&&)>
              **)&local_res8);
  return;
}

// RejectFriendInvite @ 14efb3230

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FRejectFriendInvite> * __thiscall
UE::Online::FSocialCommon::RejectFriendInvite
          (FSocialCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FRejectFriendInvite> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRejectFriendInvite>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRejectFriendInvite>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"RejectFriendInvite");
  pTVar6 = TOnlineComponent<UE::Online::ISocial>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISocial> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FRejectFriendInvite>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FRejectFriendInvite>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FRejectFriendInvite> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SendFriendInvite @ 14efb3630

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FSendFriendInvite> * __thiscall
UE::Online::FSocialCommon::SendFriendInvite
          (FSocialCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FSendFriendInvite> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FSendFriendInvite>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FSendFriendInvite>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"SendFriendInvite");
  pTVar6 = TOnlineComponent<UE::Online::ISocial>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISocial> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FSendFriendInvite>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FSendFriendInvite>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FSendFriendInvite> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FSendFriendInvite>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

