// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 15

// FCommerceCommon @ 14ee0c990

FCommerceCommon * __thiscall
UE::Online::FCommerceCommon::FCommerceCommon(FCommerceCommon *this,FOnlineServicesCommon *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCommerceCommon *pFVar7;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Commerce");
  this->_padding_ = (longlong)param_1;
  this->_padding_ =
       (longlong)&TOnlineComponent<UE::Online::ICommerce>::_vftable__for__UE__Online__ICommerce__;
  this->_padding_ =
       (longlong)
       &TOnlineComponent<UE::Online::ICommerce>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar5 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)this;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)this;
    this->_padding_ = (longlong)pTVar6;
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
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
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->_padding_,&param_1->ParallelQueue);
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
  this->_padding_ = (longlong)&_vftable__for__UE__Online__ICommerce__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnPurchaseCompletedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnPurchaseCompletedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFCommerceOnPurchaseComplete_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnPurchaseCompletedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar6 + 1);
    (this->OnPurchaseCompletedEvent).DelegateRef.SharedReferenceCount.ReferenceController = pTVar6;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar6 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FCommerceCommon *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  return this;
}

// Checkout @ 14ee71030

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceCheckout> * __thiscall
UE::Online::FCommerceCommon::Checkout
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceCheckout> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceCheckout>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceCheckout>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"Checkout");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceCheckout>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceCheckout>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCommerceCheckout> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceCheckout>::CreateSharedState
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

// GetEntitlements @ 14eedc5b0

TOnlineResult<UE::Online::FCommerceGetEntitlements> * __thiscall
UE::Online::FCommerceCommon::GetEntitlements
          (FCommerceCommon *this,
          TOnlineResult<UE::Online::FCommerceGetEntitlements> *__return_storage_ptr__,
          Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FCommerceGetEntitlements_Online_UE__VFOnlineError_34__Online_UE__6B_;
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
       &___7__TOnlineResult_UFCommerceGetEntitlements_Online_UE___Online_UE__6B_;
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

// GetFormattedPrice @ 14eedf2d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
UE::Online::FCommerceCommon::GetFormattedPrice
          (FCommerceCommon *this,FText *__return_storage_ptr__,ulong64 param_1,int param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsCurrencyBase(__return_storage_ptr__,param_1,param_3,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetOffers @ 14eee24a0

TOnlineResult<UE::Online::FCommerceGetOffers> * __thiscall
UE::Online::FCommerceCommon::GetOffers
          (FCommerceCommon *this,
          TOnlineResult<UE::Online::FCommerceGetOffers> *__return_storage_ptr__,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FCommerceGetOffers_Online_UE__VFOnlineError_34__Online_UE__6B_;
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
       &___7__TOnlineResult_UFCommerceGetOffers_Online_UE___Online_UE__6B_;
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

// GetOffersById @ 14eee2560

TOnlineResult<UE::Online::FCommerceGetOffersById> * __thiscall
UE::Online::FCommerceCommon::GetOffersById
          (FCommerceCommon *this,
          TOnlineResult<UE::Online::FCommerceGetOffersById> *__return_storage_ptr__,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FCommerceGetOffersById_Online_UE__VFOnlineError_34__Online_UE__6B_;
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
       &___7__TOnlineResult_UFCommerceGetOffersById_Online_UE___Online_UE__6B_;
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

// OnPurchaseCompleted @ 14eef2ec0

TOnlineEvent<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&)> __thiscall
UE::Online::FCommerceCommon::OnPurchaseCompleted(FCommerceCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnPurchaseCompletedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&)>)in_RDX;
}

// QueryEntitlements @ 14eef7e10

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceQueryEntitlements> * __thiscall
UE::Online::FCommerceCommon::QueryEntitlements
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceQueryEntitlements> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryEntitlements>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryEntitlements>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryEntitlements");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceQueryEntitlements>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryEntitlements>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryEntitlements> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::CreateSharedState
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

// QueryOffers @ 14eef8350

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers> * __thiscall
UE::Online::FCommerceCommon::QueryOffers
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryOffers>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryOffers>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryOffers");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceQueryOffers>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryOffers>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryOffers> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::CreateSharedState
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

// QueryOffersById @ 14eef8510

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffersById> * __thiscall
UE::Online::FCommerceCommon::QueryOffersById
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffersById> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryOffersById>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryOffersById>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryOffersById");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceQueryOffersById>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryOffersById>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryOffersById> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::CreateSharedState
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

// QueryTransactionEntitlements @ 14eef8890

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceQueryTransactionEntitlements> * __thiscall
UE::Online::FCommerceCommon::QueryTransactionEntitlements
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceQueryTransactionEntitlements>
          *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryTransactionEntitlements>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryTransactionEntitlements>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
  local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryTransactionEntitlements");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceQueryTransactionEntitlements>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceQueryTransactionEntitlements>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object !=
      (IOnlineAsyncOpSharedState<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::CreateSharedState
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

// RedeemEntitlement @ 14eef9310

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceRedeemEntitlement> * __thiscall
UE::Online::FCommerceCommon::RedeemEntitlement
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceRedeemEntitlement> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceRedeemEntitlement>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceRedeemEntitlement>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"RedeemEntitlement");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceRedeemEntitlement>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceRedeemEntitlement>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCommerceRedeemEntitlement> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::CreateSharedState
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

// RegisterCommands @ 14eefa000

void __thiscall UE::Online::FCommerceCommon::RegisterCommands(FCommerceCommon *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18;
  TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
  ***local_28;
  undefined8 **ppuStack_20;
  
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__0__flat______;
  puVar2 = (undefined8 *)0x0;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceQueryOffers_Online_UE___23___QEAUParams_FCommerceQueryOffers_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d168;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__8__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceQueryOffersById_Online_UE___23___QEAUParams_FCommerceQueryOffersById_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d180;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffersById>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffersById::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffersById>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffersById::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__16__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFCommerceGetOffers_Online_UE___23___QEAUParams_FCommerceGetOffers_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d1a0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineResult<UE::Online::FCommerceGetOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceGetOffers::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineResult<UE::Online::FCommerceGetOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceGetOffers::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__24__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFCommerceGetOffersById_Online_UE___23___QEAUParams_FCommerceGetOffersById_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d1b8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineResult<UE::Online::FCommerceGetOffersById>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceGetOffersById::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineResult<UE::Online::FCommerceGetOffersById>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceGetOffersById::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__32__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceShowStoreUI_Online_UE___23___QEAUParams_FCommerceShowStoreUI_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d1d8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceShowStoreUI>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceShowStoreUI::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceShowStoreUI>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceShowStoreUI::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__40__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceCheckout_Online_UE___23___QEAUParams_FCommerceCheckout_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d1f0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceCheckout>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceCheckout::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceCheckout>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceCheckout::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__48__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceQueryTransactionEntitlements_Online_UE___23___QEAUParams_FCommerceQueryTransactionEntitlements_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d208;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryTransactionEntitlements>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryTransactionEntitlements::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryTransactionEntitlements>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryTransactionEntitlements::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__56__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceQueryEntitlements_Online_UE___23___QEAUParams_FCommerceQueryEntitlements_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d248;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryEntitlements>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryEntitlements::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryEntitlements>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryEntitlements::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__64__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFCommerceGetEntitlements_Online_UE___23___QEAUParams_FCommerceGetEntitlements_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d270;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineResult<UE::Online::FCommerceGetEntitlements>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceGetEntitlements::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineResult<UE::Online::FCommerceGetEntitlements>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceGetEntitlements::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__72__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceRedeemEntitlement_Online_UE___23___QEAUParams_FCommerceRedeemEntitlement_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d290;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceRedeemEntitlement>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceRedeemEntitlement::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceRedeemEntitlement>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceRedeemEntitlement::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
              ***)_vcall__80__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFCommerceCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCommerceRetrieveS2SToken_Online_UE___23___QEAUParams_FCommerceRetrieveS2SToken_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    puVar2 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceQueryOffers>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceQueryOffers::Params_&&)>
        **)0x15309d2b8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  local_res18 = puVar2;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceRetrieveS2SToken>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceRetrieveS2SToken::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FCommerceCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCommerceRetrieveS2SToken>_(__cdecl_UE::Online::FCommerceCommon::*)(UE::Online::FCommerceRetrieveS2SToken::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  return;
}

// RetrieveS2SToken @ 14eefece0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceRetrieveS2SToken> * __thiscall
UE::Online::FCommerceCommon::RetrieveS2SToken
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceRetrieveS2SToken> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceRetrieveS2SToken>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceRetrieveS2SToken>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"RetrieveS2SToken");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceRetrieveS2SToken>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceRetrieveS2SToken>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCommerceRetrieveS2SToken> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::CreateSharedState
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

// ShowStoreUI @ 14ef121a0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCommerceShowStoreUI> * __thiscall
UE::Online::FCommerceCommon::ShowStoreUI
          (FCommerceCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCommerceShowStoreUI> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceShowStoreUI>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCommerceShowStoreUI>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"ShowStoreUI");
  pTVar6 = TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ICommerce> *)this,&local_88,(FString *)&local_98
                     );
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCommerceShowStoreUI>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCommerceShowStoreUI>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCommerceShowStoreUI> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::CreateSharedState
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

