// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 12

// FPresenceCommon @ 14ee0e2f0

FPresenceCommon * __thiscall
UE::Online::FPresenceCommon::FPresenceCommon(FPresenceCommon *this,FOnlineServicesCommon *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FPresenceCommon *pFVar6;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Presence");
  *(FOnlineServicesCommon **)&this->field_0x10 = param_1;
  *(undefined ***)this =
       &TOnlineComponent<UE::Online::IPresence>::_vftable__for__UE__Online__IPresence__;
  *(undefined ***)&this->field_0x8 =
       &TOnlineComponent<UE::Online::IPresence>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    *(FPresenceCommon **)&this->field_0x18 = this;
    *(undefined8 *)&this->field_0x20 = 0;
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    *(FPresenceCommon **)&this->field_0x18 = this;
    *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar5;
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  puVar1 = &this->field_0x28;
  *(undefined8 *)puVar1 = 0;
  *(int *)&this->field_0x30 = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_38.Data.ArrayNum,
               (int *)&this->field_0x34);
    memcpy(*(void **)puVar1,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x64 = 0x80;
  *(undefined4 *)&this->field_0x68 = 0xffffffff;
  *(undefined4 *)&this->field_0x6c = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->field_0x90,&param_1->ParallelQueue);
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined4 *)&this->field_0x138 = 0;
  *(undefined4 *)&this->field_0x13c = 0x80;
  *(undefined4 *)&this->field_0x140 = 0xffffffff;
  *(undefined4 *)&this->field_0x144 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined4 *)&this->field_0x158 = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->Services = param_1;
  *(undefined ***)this = &_vftable__for__UE__Online__IPresence__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__UE__Online__IOnlineComponent__;
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnPresenceUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FPresenceUpdated_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnPresenceUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFPresenceUpdated_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnPresenceUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FPresenceUpdated_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar5 + 1);
    (this->OnPresenceUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController = pTVar5;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FPresenceUpdated_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar5 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FPresenceUpdated_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPresenceCommon *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  return this;
}

// operator() @ 14ee2b250

TFuture<UE::Online::FBatchQueryPresenceHelperResult> * __thiscall
`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_1>::operator()
          (void *this,TFuture<UE::Online::FBatchQueryPresenceHelperResult> *__return_storage_ptr__,
          TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *param_1)

{
  UE::Online::FBatchQueryPresenceHelper::GetPromise
            (*(FBatchQueryPresenceHelper **)((longlong)this + 8),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 14ee2d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::FPresenceCommon::PartialUpdatePresence'::__l5::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FUpdatePresence> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FOnlineError *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  IOnlineErrorDetails *local_88;
  TReferenceControllerBase<1> *local_80;
  FOnlineError *local_78;
  TReferenceControllerBase<1> *local_70;
  ulong64 local_68;
  undefined **local_60;
  undefined1 local_58 [40];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = param_1->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FUpdatePresence::Result,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    pFVar4 = UE::Online::TResult<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::
             GetErrorValue((TResult<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError> *)
                           param_1);
    local_88 = (pFVar4->Details).Object;
    local_80 = (pFVar4->Details).SharedReferenceCount.ReferenceController;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (pFVar4->Inner).Object;
    local_70 = (pFVar4->Inner).SharedReferenceCount.ReferenceController;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = pFVar4->ErrorCode;
    (**(code **)(**(longlong **)((longlong)this + 8) + 8))
              (*(longlong **)((longlong)this + 8),&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  else if ((((*(TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> **)((longlong)this + 8))->
            SharedState).Object)->State < Complete) {
    local_30 = 0;
    local_60 = &___7__TOnlineResult_UFPartialUpdatePresence_Online_UE___Online_UE__6B_;
    UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::SetResultAndState
              (*(TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> **)((longlong)this + 8),
               (TOnlineResult<UE::Online::FPartialUpdatePresence> *)&local_60,Complete);
    uVar5 = (ulonglong)local_30;
    if (1 < local_30) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] !=
        UE::Core::Private::TDestructorCaller<UE::Online::FPartialUpdatePresence::Result>::Destruct)
    {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  bVar1 = param_1->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&param_1->field_0x8);
  return;
}

// operator() @ 14ee2fbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_2>::operator()
          (void *this,TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *param_1,
          FBatchQueryPresenceHelperResult *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FOnlineError *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  TOptional<UE::Online::FOnlineError> local_b8;
  FOnlineError local_88;
  undefined **local_60;
  TSharedRef<UE::Online::FUserPresence_const_,1> *local_58;
  int local_50;
  int local_4c;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.bIsSet = false;
  pFVar4 = UE::Online::Errors::Success(&local_88,&local_b8);
  bVar3 = UE::Online::operator==(&param_2->ErrorState,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.Details.SharedReferenceCount.ReferenceController);
  if (local_b8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    if (((param_1->SharedState).Object)->State < Complete) {
      local_58 = (TSharedRef<UE::Online::FUserPresence_const_,1> *)
                 (param_2->Result).Presences.AllocatorInstance.Data;
      (param_2->Result).Presences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50 = (param_2->Result).Presences.ArrayNum;
      local_4c = (param_2->Result).Presences.ArrayMax;
      (param_2->Result).Presences.ArrayNum = 0;
      (param_2->Result).Presences.ArrayMax = 0;
      local_30 = 0;
      local_60 = &___7__TOnlineResult_UFBatchQueryPresence_Online_UE___Online_UE__6B_;
      UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState
                (param_1,(TOnlineResult<UE::Online::FBatchQueryPresence> *)&local_60,Complete);
      uVar5 = (ulonglong)local_30;
      if (1 < local_30) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::TDestructorCaller<UE::Online::FBatchQueryPresence::Result>::Destruct) {
        DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>(local_58,local_50);
        if (local_58 != (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0) {
          FMemory::Free(local_58);
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(&local_58);
      }
    }
  }
  else {
    (**(code **)(param_1->_padding_ + 8))(param_1,&param_2->ErrorState);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ErrorState).Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ErrorState).Details.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
            ((TSharedRef<UE::Online::FUserPresence_const_,1> *)
             (param_2->Result).Presences.AllocatorInstance.Data,(param_2->Result).Presences.ArrayNum
            );
  pFVar1 = (param_2->Result).Presences.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// BatchQueryPresence @ 14ee5b430

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> * __thiscall
UE::Online::FPresenceCommon::BatchQueryPresence
          (FPresenceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  FPresenceCommon *pFVar2;
  FOnlineServicesCommon *pFVar3;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  int iVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TOnlineChainableAsyncOp<UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult>
  *this_00;
  TOnlineChainableAsyncOp<UE::Online::FBatchQueryPresence,void> TVar12;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FBatchQueryPresence>,1>
  *pTVar13;
  FPresenceCommon *pFVar14;
  FSharedReferencer<1> FVar15;
  int iVar16;
  FBatchQueryPresenceHelper *pFVar17;
  FPresenceCommon *pFVar18;
  bool bVar19;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FPresenceCommon *local_a8;
  FBatchQueryPresenceHelper *local_a0;
  TReferenceControllerBase<1> *local_98;
  <lambda_1> local_90;
  FString local_78;
  TSharedPtr<UE::Online::IPresence,1> local_68;
  TSharedPtr<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> local_58;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FBatchQueryPresence>,1>
  local_48;
  TOnlineChainableAsyncOp<UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult>
  local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString(&local_78,L"BatchQueryPresence");
  pTVar9 = TOnlineComponent<UE::Online::IPresence>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IPresence> *)this,&local_b8,&local_78);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FBatchQueryPresence>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FBatchQueryPresence>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_c8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar16 = *(int *)&this->field_0x30 + -1;
  if (*(int *)&this->field_0x30 == 0) {
    iVar16 = 0;
  }
  ::FString::AssignRange(&(local_c8.Object)->InterfaceName,*(wchar_t **)&this->field_0x28,iVar16);
  pFVar2 = *(FPresenceCommon **)&this->field_0x20;
  pFVar14 = pFVar2;
  pFVar18 = (FPresenceCommon *)0x0;
  if (pFVar2 != (FPresenceCommon *)0x0) {
    iVar16 = *(int *)&pFVar2->field_0x8;
    do {
      pFVar14 = (FPresenceCommon *)0x0;
      pFVar18 = (FPresenceCommon *)0x0;
      if (iVar16 == 0) goto LAB_14ee5b557;
      LOCK();
      iVar8 = *(int *)&pFVar2->field_0x8;
      bVar19 = iVar16 == iVar8;
      if (bVar19) {
        *(int *)&pFVar2->field_0x8 = iVar16 + 1;
        iVar8 = iVar16;
      }
      UNLOCK();
      iVar16 = iVar8;
    } while (!bVar19);
    pFVar14 = pFVar2;
    pFVar18 = *(FPresenceCommon **)&this->field_0x18;
  }
LAB_14ee5b557:
  if ((pFVar18 != this) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineComponent.h"
                          ,0xbd,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> *)(*pcVar6)();
    return pTVar10;
  }
  if (pFVar18 == (FPresenceCommon *)0x0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar19) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> *)(*pcVar6)();
      return pTVar10;
    }
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar19) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVar15.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = ::operator_new(0x88);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pFVar17 = (FBatchQueryPresenceHelper *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBatchQueryPresenceHelper_Online_UE___00_SharedPointerInternals__6B_
    ;
    if (pFVar14 != (FPresenceCommon *)0x0) {
      LOCK();
      *(int *)&pFVar14->field_0x8 = *(int *)&pFVar14->field_0x8 + 1;
      UNLOCK();
    }
    local_58.Object = local_c8.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_c8.SharedReferenceCount.ReferenceController;
    local_68.Object = (IPresence *)pFVar18;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
    FBatchQueryPresenceHelper::FBatchQueryPresenceHelper
              ((FBatchQueryPresenceHelper *)(pTVar11 + 1),&local_58,&local_68);
    pFVar17 = (FBatchQueryPresenceHelper *)(pTVar11 + 1);
    FVar15.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((pFVar17 == (FBatchQueryPresenceHelper *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar19)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90.__this = this;
  local_90.Helper.Object = pFVar17;
  local_90.Helper.SharedReferenceCount.ReferenceController = pTVar11;
  this_00 = Online::Private::
            TOnlineAsyncOpBase<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,UE::Online::FBatchQueryPresence,void>
            ::Then<_UE::Online::FPresenceCommon::BatchQueryPresence_::__l2::<lambda_1>_>
                      ((TOnlineAsyncOpBase<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,UE::Online::FBatchQueryPresence,void>
                        *)&(local_c8.Object)->_padding_,&local_38,&local_90,
                       (FOnlineAsyncExecutionPolicy)0x0);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = this;
  local_a0 = pFVar17;
  local_98 = pTVar11;
  TVar12 = Online::Private::
           TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult>,UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult>
           ::Then<_UE::Online::FPresenceCommon::BatchQueryPresence_::__l2::<lambda_2>_>
                     ((TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult>,UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult>
                       *)this_00,(<lambda_2> *)&stack0x00000008,
                      (FOnlineAsyncExecutionPolicy)(EOnlineAsyncExecutionPolicy)&local_a8);
  pFVar3 = this->Services;
  pTVar4 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)(TVar12.OwningOperation)->_padding_;
  if ((((pTVar4->SharedState).Object)->State != Invalid) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedState->State < EAsyncOpState::Queued",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                          ,0x5bb,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence> *)(*pcVar6)();
    return pTVar10;
  }
  ((pTVar4->SharedState).Object)->State = Queued;
  if (5 < (byte)LogOnlineServices._0_1_) {
    Online::LexToString(((pTVar4->SharedState).Object)->State);
    Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::Enqueue<UE::Online::FOnlineAsyncOpQueueParallel>(UE::Online::FOnlineAsyncOpQueueParallel&___ptr64,double)___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpQueue::Enqueue<UE::Online::FBatchQueryPresence>
            ((FOnlineAsyncOpQueue *)&pFVar3->ParallelQueue,pTVar4,0.0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.Helper.SharedReferenceCount.ReferenceController);
  pTVar13 = TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::CreateSharedState
                      (local_c8.Object,&local_48);
  (__return_storage_ptr__->State).Object = pTVar13->Object;
  pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCachedPresence @ 14eed8ee0

TOnlineResult<UE::Online::FGetCachedPresence> * __thiscall
UE::Online::FPresenceCommon::GetCachedPresence
          (FPresenceCommon *this,
          TOnlineResult<UE::Online::FGetCachedPresence> *__return_storage_ptr__,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetCachedPresence_Online_UE__VFOnlineError_34__Online_UE__6B_;
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
       &___7__TOnlineResult_UFGetCachedPresence_Online_UE___Online_UE__6B_;
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

// OnPresenceUpdated @ 14eef2ea0

TOnlineEvent<void___cdecl(UE::Online::FPresenceUpdated_const_&)> __thiscall
UE::Online::FPresenceCommon::OnPresenceUpdated(FPresenceCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FPresenceUpdated_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FPresenceUpdated_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnPresenceUpdatedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FPresenceUpdated_const_&)>)in_RDX;
}

// PartialUpdatePresence @ 14eef3860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> * __thiscall
UE::Online::FPresenceCommon::PartialUpdatePresence
          (FPresenceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *__return_storage_ptr__,
          Params *param_1)

{
  TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar1;
  TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *pTVar2;
  FPresenceCommon *pFVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar5;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar6;
  bool bVar7;
  uint uVar8;
  TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FPartialUpdatePresence>,1>
  *pTVar12;
  FOnlineError *pFVar13;
  longlong lVar14;
  int iVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  int iVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 *puVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  TReferenceControllerBase<1> *pTVar28;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined1 local_267 [7];
  TReferenceControllerBase<1> *local_260;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_258;
  FDelegateAllocation local_250;
  TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *local_240;
  uint local_238;
  uint local_234;
  TReferenceControllerBase<1> *local_230;
  FPresenceCommon *local_228;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> local_220;
  longlong *local_210;
  TReferenceControllerBase<1> *local_208;
  int local_200;
  int local_1fc;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  TNestedVariantMap<FString,bool,__int64,double,FString> *local_1f0;
  TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  TNestedVariantMap<FString,bool,__int64,double,FString> *local_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  undefined1 *local_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TNestedVariantMap<FString,bool,__int64,double,FString> *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  uint local_178;
  TReferenceControllerBase<1> *local_170;
  TReferenceControllerBase<1> *local_168;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> local_160;
  FDestructionSentinel local_150;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FPartialUpdatePresence>,1>
  local_118;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FPartialUpdatePresence>,1>
  local_108;
  TOptional<UE::Online::FOnlineError> local_f8;
  FOnlineError local_c8;
  undefined4 local_84;
  undefined1 local_80 [8];
  undefined4 *local_78;
  TReferenceControllerBase<1> *local_70;
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  local_238 = (param_1->LocalAccountId).Value;
  local_240 = (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)param_1;
  local_234 = local_238;
  local_228 = this;
  local_1e8 = __return_storage_ptr__;
  (**(code **)(*(longlong *)this + 0x10))(this,local_80,&local_238);
  uVar19 = (ulonglong)local_50;
  if ((1 < uVar19) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
    return pTVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FQueryPresence::Result,UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar19 + 4) == '\0') {
    TOnlineComponent<UE::Online::IPresence>::GetOp<UE::Online::FPartialUpdatePresence>
              ((TOnlineComponent<UE::Online::IPresence> *)this,&local_160,param_1);
    local_f8.bIsSet = false;
    pcVar1 = *(code **)((local_160.Object)->_padding_ + 8);
    pFVar13 = Errors::NotImplemented(&local_c8,&local_f8);
    (*pcVar1)(local_160.Object,pFVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.Details.SharedReferenceCount.ReferenceController);
    if (local_f8.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    pTVar12 = TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::CreateSharedState
                        (local_160.Object,&local_108);
    (__return_storage_ptr__->State).Object = pTVar12->Object;
    pTVar28 = (pTVar12->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
    if ((1 < local_50) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
      return pTVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetCachedPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50])(&local_78);
  }
  else {
    local_260 = ::operator_new(0xa0);
    uVar8 = 1;
    if (local_260 == (TReferenceControllerBase<1> *)0x0) {
      pTVar28 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_260 = (TReferenceControllerBase<1> *)0x0;
      local_230 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      local_260->SharedReferenceCount = (atomic<int>)0x1;
      pTVar28 = local_260 + 1;
      local_260->WeakReferenceCount = (atomic<int>)0x1;
      local_260->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFUserPresence_Online_UE___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&local_260[1]._padding_ + 4) = 0x20405;
      *(undefined4 *)&local_260[3].SharedReferenceCount.field_0x1 = 0;
      *(undefined2 *)&local_260[3].WeakReferenceCount.field_0x1 = 0;
      local_260[3].WeakReferenceCount.field_0x3 = 0;
      local_260[5]._padding_ = 0;
      local_260[5].SharedReferenceCount = (atomic<int>)0x0;
      local_260[5].WeakReferenceCount = (atomic<int>)0x0;
      local_260[7].SharedReferenceCount = (atomic<int>)0x0;
      local_260[7].WeakReferenceCount = (atomic<int>)0x0;
      local_260[8].SharedReferenceCount = (atomic<int>)0x0;
      local_260[8].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&local_260[1]._padding_ = 0;
      local_260[1].SharedReferenceCount = (atomic<int>)0x0;
      local_260[1].WeakReferenceCount = (atomic<int>)0x0;
      local_260[2]._padding_ = 0;
      local_260[2].SharedReferenceCount = (atomic<int>)0x0;
      local_260[2].WeakReferenceCount = (atomic<int>)0x0;
      local_260[3]._padding_ = 0;
      *(undefined1 *)&local_260[3].SharedReferenceCount = 5;
      local_260[4]._padding_ = 0;
      local_260[4].SharedReferenceCount = (atomic<int>)0x0;
      local_260[4].WeakReferenceCount = (atomic<int>)0x0;
      local_260[6]._padding_ = 0;
      local_260[6].SharedReferenceCount = (atomic<int>)0x0;
      local_260[6].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&local_260[7]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&local_260[7]._padding_ + 4) = 0;
      local_260[8]._padding_ = 0;
      local_260[9]._padding_ = 0;
      local_260[9].SharedReferenceCount = (atomic<int>)0x0;
      local_260[9].WeakReferenceCount = (atomic<int>)0x0;
      local_230 = pTVar28;
      if ((pTVar28 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
        return pTVar9;
      }
    }
    uVar19 = (ulonglong)local_50;
    if ((1 < uVar19) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
      return pTVar9;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FQueryPresence::Result,UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar19 + 4) == '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
      return pTVar9;
    }
    if ((local_50 != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
      return pTVar9;
    }
    local_1e0 = local_70;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)&pTVar28->_padding_ = *local_78;
    *(undefined1 *)((longlong)&pTVar28->_padding_ + 4) = *(undefined1 *)(local_78 + 1);
    *(undefined1 *)((longlong)&pTVar28->_padding_ + 5) = *(undefined1 *)((longlong)local_78 + 5);
    *(undefined1 *)((longlong)&pTVar28->_padding_ + 6) = *(undefined1 *)((longlong)local_78 + 6);
    ::FString::operator=((FString *)&pTVar28->SharedReferenceCount,(FString *)(local_78 + 2));
    ::FString::operator=((FString *)&pTVar28[1].SharedReferenceCount,(FString *)(local_78 + 6));
    this_00 = (TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
               *)(pTVar28 + 3);
    *(undefined1 *)&pTVar28[2].SharedReferenceCount = *(undefined1 *)(local_78 + 10);
    TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
    ::operator=(this_00,(TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
                         *)(local_78 + 0xc));
    if ((param_1->Mutations).Status.bIsSet != false) {
      *(EUserPresenceStatus *)((longlong)&pTVar28->_padding_ + 4) =
           (param_1->Mutations).Status.TypedValue;
    }
    if ((param_1->Mutations).GameStatus.bIsSet != false) {
      *(EUserPresenceGameStatus *)((longlong)&pTVar28->_padding_ + 6) =
           (param_1->Mutations).GameStatus.TypedValue;
    }
    if ((param_1->Mutations).Joinability.bIsSet != false) {
      *(EUserPresenceJoinability *)((longlong)&pTVar28->_padding_ + 5) =
           (param_1->Mutations).Joinability.TypedValue;
    }
    iVar18 = *(int *)&(param_1->Mutations).UpdatedProperties.field_0x28;
    local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(param_1->Mutations).UpdatedProperties.field_0x10;
    local_1f0 = &(param_1->Mutations).UpdatedProperties;
    iVar26 = 0;
    iVar15 = 0;
    iStack_1bc = iVar26;
    iStack_1d0 = iVar26;
    local_1b8 = iVar26;
    if (iVar18 != 0) {
      puVar25 = *(uint **)&(param_1->Mutations).UpdatedProperties.field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)local_1f8;
      }
      uVar22 = *puVar25;
      local_1b8 = 0;
      iStack_1d0 = 0;
      while (uVar22 == 0) {
        lVar14 = (longlong)iStack_1d0;
        local_1b8 = local_1b8 + 0x20;
        iStack_1d0 = iStack_1d0 + 1;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d0) {
          iVar15 = *(int *)&(param_1->Mutations).UpdatedProperties.field_0x28;
          iStack_1bc = iVar18;
          goto LAB_14eef3bc4;
        }
        uVar22 = puVar25[lVar14 + 1];
      }
      iVar15 = *(int *)&(param_1->Mutations).UpdatedProperties.field_0x28;
      uVar8 = -uVar22 & uVar22;
      uVar19 = (ulonglong)uVar8 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_200 = (int)lVar14;
      iStack_1bc = local_1b8 + -1 + local_200;
      if (iVar15 < iStack_1bc) {
        iStack_1bc = iVar18;
      }
    }
LAB_14eef3bc4:
    uVar22 = *(uint *)&(param_1->Mutations).UpdatedProperties.field_0x28;
    uStack_1b4 = local_84;
    iStack_1b0 = *(int *)&(param_1->Mutations).UpdatedProperties.field_0x8 -
                 *(int *)&(param_1->Mutations).UpdatedProperties.field_0x34;
    uVar27 = uVar22 & 0xffffffe0;
    uStack_1c0 = 0xffffffff;
    TStack_1a0._padding_ = CONCAT44(uVar8,iStack_1d0);
    TStack_1a0.CurrentBitIndex = iStack_1bc;
    TStack_1a0.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar22 >> 5;
    TStack_1a0._28_4_ = local_84;
    TStack_1a0.BaseBitIndex = local_1b8;
    uStack_180 = CONCAT44(uStack_1ac,iStack_1b0);
    local_1d8 = local_1f0;
    uStack_1cc = uVar8;
    local_1c8 = (undefined1 *)local_1f8;
    local_1a8 = local_1f0;
    TStack_1a0.Array = local_1f8;
    if ((((int)uVar22 < 0) || (iVar15 < (int)uVar22)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
      return pTVar9;
    }
    pTVar5 = local_1f0;
    pTVar4 = local_1f8;
    uVar8 = *(uint *)&(param_1->Mutations).UpdatedProperties.field_0x28;
    if (uVar22 != uVar8) {
      puVar24 = *(undefined1 **)&(param_1->Mutations).UpdatedProperties.field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = &(param_1->Mutations).UpdatedProperties.field_0x10;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar18 * 4);
      while (uVar22 == 0) {
        lVar14 = (longlong)iVar18;
        uVar27 = uVar27 + 0x20;
        iVar18 = iVar18 + 1;
        uVar22 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14eef3ce0;
        uVar22 = *(uint *)(puVar24 + lVar14 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1fc = (int)lVar14;
      uVar22 = (uVar27 - 1) + local_1fc;
      if ((int)uVar8 < (int)uVar22) {
        uVar22 = uVar8;
      }
    }
LAB_14eef3ce0:
    while( true ) {
      pTVar6 = local_1a8;
      if (*(int *)&local_1a8->field_0x8 - *(int *)&local_1a8->field_0x34 != (int)uStack_180) {
        local_268 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
      }
      pTVar2 = local_240;
      if (((TStack_1a0.CurrentBitIndex == uVar22) && (TStack_1a0.Array == pTVar4)) &&
         (pTVar6 == pTVar5)) break;
      pFVar16 = (FString *)((longlong)TStack_1a0.CurrentBitIndex * 0x30 + *(longlong *)pTVar6);
      TMapBase<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
      ::
      Emplace<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>
                ((TMapBase<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
                  *)this_00,pFVar16,
                 (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                  *)(pFVar16 + 1));
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
    }
    iVar18 = (((FMutations *)&local_240->_padding_)->RemovedProperties).ArrayNum;
    pFVar20 = (((FMutations *)&local_240->_padding_)->RemovedProperties).AllocatorInstance.Data;
    pFVar23 = pFVar20 + (longlong)iVar18 * 0x10;
    while( true ) {
      if ((((FMutations *)&pTVar2->_padding_)->RemovedProperties).ArrayNum != iVar18) {
        local_267[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_267);
      }
      pFVar3 = local_228;
      if (pFVar20 == pFVar23) break;
      if (pTVar28[3].SharedReferenceCount != *(atomic<int> *)((longlong)&pTVar28[6]._padding_ + 4))
      {
        if (*(int *)&pFVar20[8].field_0x0 == 0) {
          pwVar17 = L"";
          iVar15 = iVar26;
        }
        else {
          pwVar17 = (wchar_t *)
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->
                    AllocatorInstance).Data;
          iVar15 = *(int *)&pFVar20[8].field_0x0 + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
        TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>(this_00,uVar8,(FString *)pFVar20);
      }
      pFVar20 = pFVar20 + 0x10;
    }
    TOnlineComponent<UE::Online::IPresence>::GetOp<UE::Online::FPartialUpdatePresence>
              ((TOnlineComponent<UE::Online::IPresence> *)local_228,&local_220,(Params *)pTVar2);
    pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x18);
    local_178 = ((((local_220.Object)->SharedState).Object)->Params).LocalAccountId.Value;
    local_170 = local_230;
    local_168 = local_260;
    if (local_260 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_260->SharedReferenceCount = (atomic<int>)((int)local_260->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar1)(pFVar3,&local_210);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168);
    local_240 = local_220.Object;
    if (local_220.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar21 = local_210;
    if ((local_210 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), plVar21 = local_210, bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
      return pTVar9;
    }
    local_258.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_250.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_250.DelegateSize = 0;
    pcVar1 = *(code **)(*plVar21 + 0x28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_258,(FWriteAccessScope *)&local_138);
    local_120 = &local_250;
    puVar10 = Core::Private::DelegateAllocate(0x30,&local_250);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFUpdatePresence_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FUpdatePresence>_const_&),FDefaultDelegateUserPolicy,`UE::Online::FPresenceCommon::PartialUpdatePresence'::`5'::<lambda_1>_>
                  ::_vftable_;
      puVar10[3] = local_228;
      puVar10[4] = local_240;
      puVar10[5] = local_220.SharedReferenceCount.ReferenceController;
      if (local_220.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    (*pcVar1)(plVar21,&local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_258,(FWriteAccessScope *)&local_150);
    if ((local_250.DelegateSize != 0) &&
       (local_250.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_250.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_250,0,0,0x10);
      local_250.DelegateSize = 0;
    }
    if (local_150.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
    }
    if (local_250.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_250.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_258.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.SharedReferenceCount.ReferenceController);
    pTVar12 = TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::CreateSharedState
                        (local_220.Object,&local_118);
    __return_storage_ptr__ = local_1e8;
    (local_1e8->State).Object = pTVar12->Object;
    pTVar28 = (pTVar12->SharedReferenceCount).ReferenceController;
    (local_1e8->State).SharedReferenceCount.ReferenceController = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_260);
    if ((1 < local_50) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence> *)(*pcVar1)();
      return pTVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetCachedPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50])(&local_78);
  }
  return __return_storage_ptr__;
}

// QueryPresence @ 14eef86d0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FQueryPresence> * __thiscall
UE::Online::FPresenceCommon::QueryPresence
          (FPresenceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FQueryPresence> *__return_storage_ptr__,Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryPresence>,1> *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryPresence>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"QueryPresence");
  pTVar5 = TOnlineComponent<UE::Online::IPresence>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IPresence> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FQueryPresence>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FQueryPresence>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FQueryPresence> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar8 = *(int *)&this->field_0x30 + -1;
  if (*(int *)&this->field_0x30 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,*(wchar_t **)&this->field_0x28,iVar8);
  local_68.bIsSet = false;
  pcVar2 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar6 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar2)(local_78.Object,pFVar6);
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FQueryPresence>::CreateSharedState(local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RegisterCommands @ 14eefafe0

void __thiscall UE::Online::FPresenceCommon::RegisterCommands(FPresenceCommon *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18;
  TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
  ***local_28;
  undefined8 **ppuStack_20;
  
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
              ***)_vcall__0__flat______;
  puVar2 = (undefined8 *)0x0;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFPresenceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFQueryPresence_Online_UE___23___QEAUParams_FQueryPresence_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
        **)0x1530a11d8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
              ***)_vcall__8__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFPresenceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFBatchQueryPresence_Online_UE___23___QEAUParams_FBatchQueryPresence_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
        **)0x1530a11f8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FBatchQueryPresence::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FBatchQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FBatchQueryPresence::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
              ***)_vcall__16__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFPresenceCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetCachedPresence_Online_UE___23___QEAUParams_FGetCachedPresence_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
        **)0x1530a1220;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineResult<UE::Online::FGetCachedPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FGetCachedPresence::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineResult<UE::Online::FGetCachedPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FGetCachedPresence::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
              ***)_vcall__24__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFPresenceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUpdatePresence_Online_UE___23___QEAUParams_FUpdatePresence_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
        **)0x1530a1248;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdatePresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FUpdatePresence::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdatePresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FUpdatePresence::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
              ***)_vcall__32__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFPresenceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFPartialUpdatePresence_Online_UE___23___QEAUParams_FPartialUpdatePresence_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    puVar2 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryPresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FQueryPresence::Params_&&)>
        **)0x1530a1268;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  local_res18 = puVar2;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FPartialUpdatePresence::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FPresenceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FPartialUpdatePresence>_(__cdecl_UE::Online::FPresenceCommon::*)(UE::Online::FPartialUpdatePresence::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  return;
}

// UpdateConfig @ 14ef32350

void __thiscall UE::Online::FPresenceCommon::UpdateConfig(FPresenceCommon *this)

{
  return;
}

// UpdatePresence @ 14ef32360

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUpdatePresence> * __thiscall
UE::Online::FPresenceCommon::UpdatePresence
          (FPresenceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUpdatePresence> *__return_storage_ptr__,Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUpdatePresence>,1> *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUpdatePresence>,1> local_98
  ;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"UpdatePresence");
  pTVar5 = TOnlineComponent<UE::Online::IPresence>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IPresence> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUpdatePresence>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUpdatePresence>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUpdatePresence> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar8 = *(int *)&this->field_0x30 + -1;
  if (*(int *)&this->field_0x30 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,*(wchar_t **)&this->field_0x28,iVar8);
  local_68.bIsSet = false;
  pcVar2 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar6 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar2)(local_78.Object,pFVar6);
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FUpdatePresence>::CreateSharedState(local_78.Object,&local_98)
  ;
  (__return_storage_ptr__->State).Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

