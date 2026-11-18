// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 24

// <lambda_invoker_cdecl> @ 14ed33980

bool __cdecl
`UE::Online::FAuthCommon::GetAllLocalOnlineUsers'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TSharedRef<UE::Online::FAccountInfo,1> *param_1)

{
  ELoginStatus EVar1;
  
  EVar1 = param_1->Object->LoginStatus;
  if ((EVar1 != LoggedIn) && (EVar1 != LoggedInReducedFunctionality)) {
    return false;
  }
  return true;
}

// FAuthCommon @ 14ee0c460

FAuthCommon * __thiscall
UE::Online::FAuthCommon::FAuthCommon(FAuthCommon *this,FOnlineServicesCommon *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAuthCommon *pFVar7;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Auth");
  this->_padding_ = (longlong)param_1;
  this->_padding_ =
       (longlong)&TOnlineComponent<UE::Online::IAuth>::_vftable__for__UE__Online__IAuth__;
  this->_padding_ =
       (longlong)&TOnlineComponent<UE::Online::IAuth>::_vftable__for__UE__Online__IOnlineComponent__
  ;
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
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IAuth__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnAuthLoginStatusChangedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnAuthLoginStatusChangedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFAuthLoginStatusChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnAuthLoginStatusChangedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar6 + 1);
    (this->OnAuthLoginStatusChangedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         pTVar6;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar6 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FAuthCommon *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnAuthPendingAuthExpirationEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnAuthPendingAuthExpirationEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFAuthPendingAuthExpiration_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnAuthPendingAuthExpirationEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar6 + 1);
    (this->OnAuthPendingAuthExpirationEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         pTVar6;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar6 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FAuthCommon *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnAuthAccountAttributesChangedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnAuthAccountAttributesChangedEvent).DelegateRef.SharedReferenceCount.ReferenceController
         = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFAuthAccountAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnAuthAccountAttributesChangedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar6 + 1);
    (this->OnAuthAccountAttributesChangedEvent).DelegateRef.SharedReferenceCount.ReferenceController
         = pTVar6;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar6 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FAuthCommon *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  return this;
}

// BeginVerifiedAuthSession @ 14ee5b800

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthBeginVerifiedAuthSession> * __thiscall
UE::Online::FAuthCommon::BeginVerifiedAuthSession
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthBeginVerifiedAuthSession> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthBeginVerifiedAuthSession>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthBeginVerifiedAuthSession>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"BeginVerifiedAuthSession");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthBeginVerifiedAuthSession>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthBeginVerifiedAuthSession>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0
     ) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::CreateSharedState
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

// CancelVerifiedAuthTicket @ 14ee6aba0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthCancelVerifiedAuthTicket> * __thiscall
UE::Online::FAuthCommon::CancelVerifiedAuthTicket
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthCancelVerifiedAuthTicket> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"CancelVerifiedAuthTicket");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthCancelVerifiedAuthTicket>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthCancelVerifiedAuthTicket>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0
     ) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::CreateSharedState
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

// CreateAccount @ 14ee851e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthCreateAccount> * __thiscall
UE::Online::FAuthCommon::CreateAccount
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthCreateAccount> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthCreateAccount>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthCreateAccount>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"CreateAccount");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthCreateAccount>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthCreateAccount>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthCreateAccount> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::CreateSharedState
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

// EndVerifiedAuthSession @ 14eebd500

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthEndVerifiedAuthSession> * __thiscall
UE::Online::FAuthCommon::EndVerifiedAuthSession
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthEndVerifiedAuthSession> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthEndVerifiedAuthSession>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthEndVerifiedAuthSession>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"EndVerifiedAuthSession");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthEndVerifiedAuthSession>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthEndVerifiedAuthSession>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthEndVerifiedAuthSession> *)0x0)
  {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::CreateSharedState
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

// GetAllLocalOnlineUsers @ 14eed6b40

TOnlineResult<UE::Online::FAuthGetAllLocalOnlineUsers> * __thiscall
UE::Online::FAuthCommon::GetAllLocalOnlineUsers
          (FAuthCommon *this,
          TOnlineResult<UE::Online::FAuthGetAllLocalOnlineUsers> *__return_storage_ptr__,
          Params *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  uint uVar3;
  <lambda_2> local_res8;
  TArray<TSharedRef<UE::Online::FAccountInfo,1>,TSizedDefaultAllocator<32>_> local_88;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  code *local_38 [3];
  undefined8 local_20;
  
  lVar1 = (**(code **)(this->_padding_ + 0xb0))();
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBV__TSharedRef_UFAccountInfo_Online_UE___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `UE::Online::FAuthCommon::GetAllLocalOnlineUsers'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(TSharedRef<UE::Online::FAccountInfo,1>_const_&),bool,TSharedRef<UE::Online::FAccountInfo,1>_const_&>
             ::Call;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 8));
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  uVar3 = *(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x44);
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,&local_88.AllocatorInstance,0,&local_88.ArrayMax);
    }
    local_48[0] = local_78;
    local_20 = 0;
    if (local_78 != (code *)0x0) {
      pppuVar2 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar2 = local_50;
      }
      (*(code *)**pppuVar2)(pppuVar2,local_48 + 2);
    }
    Algo::
    TransformIf<TMap<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,0>_>,TArray<TSharedRef<UE::Online::FAccountInfo,1>,TSizedDefaultAllocator<32>_>_&,_UE::Online::FAccountInfoRegistry::GetAllAccountInfo_::__l2::<lambda_1>,_UE::Online::FAccountInfoRegistry::GetAllAccountInfo_::__l2::<lambda_2>_>
              ((TMap<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
                *)(lVar1 + 0x10),&local_88,(<lambda_1> *)local_48,local_res8);
    ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 8));
    if (local_78 != (code *)0x0) {
      pppuVar2 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar2 = local_50;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 =
         local_88.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->field_0x10 = local_88.ArrayNum;
    *(int *)&__return_storage_ptr__->field_0x14 = local_88.ArrayMax;
    __return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFAuthGetAllLocalOnlineUsers_Online_UE___Online_UE__6B_;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    DestructItems<TSharedRef<UE::Online::FAccountInfo,1>,int>
              ((TSharedRef<UE::Online::FAccountInfo,1> *)0x0,0);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// GetLinkAccountContinuationId @ 14eee0330

TOnlineResult<UE::Online::FAuthGetLinkAccountContinuationId> * __thiscall
UE::Online::FAuthCommon::GetLinkAccountContinuationId
          (FAuthCommon *this,
          TOnlineResult<UE::Online::FAuthGetLinkAccountContinuationId> *__return_storage_ptr__,
          Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TResult_UResult_FAuthGetLinkAccountContinuationId_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
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
       &___7__TOnlineResult_UFAuthGetLinkAccountContinuationId_Online_UE___Online_UE__6B_;
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

// GetLocalOnlineUserByOnlineAccountId @ 14eee04b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId> * __thiscall
UE::Online::FAuthCommon::GetLocalOnlineUserByOnlineAccountId
          (FAuthCommon *this,
          TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId>
          *__return_storage_ptr__,Params *param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  TSharedRef<UE::Online::FAccountInfo,1> *pTVar11;
  FOnlineError *pFVar12;
  TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId> *pTVar13;
  FAccountInfo *pFVar14;
  ulonglong uVar15;
  FAccountInfo *pFVar16;
  FAccountInfo **ppFVar17;
  undefined1 auStack_158 [32];
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_138 [2];
  FAccountInfo *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  TOptional<UE::Online::FOnlineError> local_108;
  FOnlineError local_d8;
  undefined **local_b0;
  FAccountInfo *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FOnlineError *local_98;
  TReferenceControllerBase<1> *local_90;
  ulong64 local_88;
  byte local_80 [8];
  undefined **local_78;
  FAccountInfo *local_70;
  FAccountInfo *local_68;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar14 = (FAccountInfo *)0x0;
  local_138[0].Value = 0;
  lVar10 = (**(code **)(this->_padding_ + 0xb0))();
  uVar2 = (param_1->LocalAccountId).Value;
  AcquireSRWLockShared((PSRWLOCK)(lVar10 + 8));
  local_138[0].Value = uVar2;
  pTVar11 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
            ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
                    *)(lVar10 + 0x60),local_138);
  if (pTVar11 == (TSharedRef<UE::Online::FAccountInfo,1> *)0x0) {
    local_110 = 0;
    local_118 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar16 = pFVar14;
  }
  else {
    pFVar16 = (FAccountInfo *)(pTVar11->SharedReferenceCount).ReferenceController;
    pFVar14 = pTVar11->Object;
    if (pFVar16 != (FAccountInfo *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar16->LoginStatus =
           (atomic<int>)((int)*(atomic<int> *)&pFVar16->LoginStatus + 1);
      UNLOCK();
    }
    local_120 = 0;
    local_128 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 8));
  if ((pFVar14 == (FAccountInfo *)0x0) ||
     ((pFVar14->LoginStatus != LoggedIn && (pFVar14->LoginStatus != LoggedInReducedFunctionality))))
  {
    local_108.bIsSet = false;
    pFVar12 = Errors::InvalidUser(&local_d8,&local_108);
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
    bVar9 = true;
    local_a8 = (FAccountInfo *)(pFVar12->Details).Object;
    local_a0 = (pFVar12->Details).SharedReferenceCount.ReferenceController;
    local_98 = (pFVar12->Inner).Object;
    (pFVar12->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (pFVar12->Details).Object = (IOnlineErrorDetails *)0x0;
    local_90 = (pFVar12->Inner).SharedReferenceCount.ReferenceController;
    (pFVar12->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar12->Inner).Object = (FOnlineError *)0x0;
    ppFVar17 = &local_a8;
    local_88 = pFVar12->ErrorCode;
    local_80[0] = 1;
    local_b0 = &
               ___7__TOnlineResult_UFAuthGetLocalOnlineUserByOnlineAccountId_Online_UE___Online_UE__6B_
    ;
  }
  else {
    if (pFVar16 == (FAccountInfo *)0x0) {
      local_70 = pFVar14;
      local_68 = pFVar16;
    }
    else {
      LOCK();
      *(int *)&pFVar16->LoginStatus = *(int *)&pFVar16->LoginStatus + 1;
      UNLOCK();
      local_70 = pFVar14;
      local_68 = pFVar16;
      LOCK();
      *(int *)&pFVar16->LoginStatus = *(int *)&pFVar16->LoginStatus + 1;
      UNLOCK();
    }
    local_48 = 0;
    local_78 = &
               ___7__TOnlineResult_UFAuthGetLocalOnlineUserByOnlineAccountId_Online_UE___Online_UE__6B_
    ;
    ppFVar17 = &local_70;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar9 = false;
    local_130 = pFVar16;
    local_70 = pFVar14;
    local_68 = pFVar16;
  }
  bVar1 = *(byte *)(ppFVar17 + 5);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TResult_UResult_FAuthGetLocalOnlineUserByOnlineAccountId_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  __return_storage_ptr__->field_0x30 = bVar1;
  if (1 < bVar1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId> *)(*pcVar3)();
      return pTVar13;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(&__return_storage_ptr__->field_0x8,ppFVar17);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFAuthGetLocalOnlineUserByOnlineAccountId_Online_UE___Online_UE__6B_;
  if (bVar9) {
    uVar15 = (ulonglong)local_80[0];
    if (1 < local_80[0]) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId> *)(*pcVar3)()
        ;
        return pTVar13;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        Core::Private::TDestructorCaller<UE::Online::FOnlineError>::Destruct) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(&local_a8);
    }
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Details.SharedReferenceCount.ReferenceController);
  }
  if ((bVar5) && (local_108.bIsSet != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    uVar15 = (ulonglong)local_48;
    if (1 < local_48) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId> *)(*pcVar3)()
        ;
        return pTVar13;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar15])(&local_70);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_130);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar16);
  return __return_storage_ptr__;
}

// GetLocalOnlineUserByPlatformUserId @ 14eee07c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId> * __thiscall
UE::Online::FAuthCommon::GetLocalOnlineUserByPlatformUserId
          (FAuthCommon *this,
          TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId> *__return_storage_ptr__
          ,Params *param_1)

{
  byte bVar1;
  code *pcVar2;
  IOnlineErrorDetails *pIVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FAccountInfoRegistry *this_00;
  TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId> *pTVar10;
  FOnlineError *pFVar11;
  ulonglong uVar12;
  FSharedReferencer<1> FVar13;
  IOnlineErrorDetails **ppIVar14;
  undefined1 auStack_138 [32];
  TSharedPtr<UE::Online::FAccountInfo,1> local_118;
  TOptional<UE::Online::FOnlineError> local_108;
  FOnlineError local_d8;
  undefined **local_b0;
  IOnlineErrorDetails *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FOnlineError *local_98;
  TReferenceControllerBase<1> *local_90;
  ulong64 local_88;
  byte local_80 [8];
  undefined **local_78;
  IOnlineErrorDetails *local_70;
  TReferenceControllerBase<1> *local_68;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.Object._0_4_ = 0;
  this_00 = (FAccountInfoRegistry *)(**(code **)(this->_padding_ + 0xb0))();
  FAccountInfoRegistry::Find
            (this_00,&local_118,(FPlatformUserId)(param_1->PlatformUserId).InternalId);
  pIVar3 = (IOnlineErrorDetails *)CONCAT44(local_118.Object._4_4_,local_118.Object._0_4_);
  if (pIVar3 != (IOnlineErrorDetails *)0x0) {
    if (pIVar3 == (IOnlineErrorDetails *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId> *)(*pcVar2)();
        return pTVar10;
      }
    }
    if ((*(char *)(pIVar3 + 1) == '\x03') || (*(char *)(pIVar3 + 1) == '\x02')) {
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = local_118.SharedReferenceCount.ReferenceController;
      local_70 = pIVar3;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = 0;
      local_78 = &
                 ___7__TOnlineResult_UFAuthGetLocalOnlineUserByPlatformUserId_Online_UE___Online_UE__6B_
      ;
      ppIVar14 = &local_70;
      bVar7 = true;
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar8 = false;
      FVar13.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
      goto LAB_14eee0901;
    }
  }
  local_108.bIsSet = false;
  pFVar11 = Errors::InvalidUser(&local_d8,&local_108);
  bVar7 = false;
  bVar6 = false;
  bVar5 = true;
  bVar4 = true;
  bVar8 = true;
  ppIVar14 = &local_a8;
  local_a8 = (pFVar11->Details).Object;
  local_a0 = (pFVar11->Details).SharedReferenceCount.ReferenceController;
  local_98 = (pFVar11->Inner).Object;
  (pFVar11->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar11->Details).Object = (IOnlineErrorDetails *)0x0;
  local_90 = (pFVar11->Inner).SharedReferenceCount.ReferenceController;
  (pFVar11->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar11->Inner).Object = (FOnlineError *)0x0;
  local_88 = pFVar11->ErrorCode;
  FVar13.ReferenceController =
       (TReferenceControllerBase<1> *)CONCAT44(local_118.Object._4_4_,local_118.Object._0_4_);
  local_80[0] = 1;
  local_b0 = &
             ___7__TOnlineResult_UFAuthGetLocalOnlineUserByPlatformUserId_Online_UE___Online_UE__6B_
  ;
LAB_14eee0901:
  bVar1 = *(byte *)(ppIVar14 + 5);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TResult_UResult_FAuthGetLocalOnlineUserByPlatformUserId_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  __return_storage_ptr__->field_0x30 = bVar1;
  if (1 < bVar1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId> *)(*pcVar2)();
      return pTVar10;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(&__return_storage_ptr__->field_0x8,ppIVar14);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFAuthGetLocalOnlineUserByPlatformUserId_Online_UE___Online_UE__6B_;
  if (bVar8) {
    uVar12 = (ulonglong)local_80[0];
    if (1 < local_80[0]) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId> *)(*pcVar2)();
        return pTVar10;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        Core::Private::TDestructorCaller<UE::Online::FOnlineError>::Destruct) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(&local_a8);
    }
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Details.SharedReferenceCount.ReferenceController);
  }
  if ((bVar5) && (local_108.bIsSet != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    uVar12 = (ulonglong)local_48;
    if (1 < local_48) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId> *)(*pcVar2)();
        return pTVar10;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12])(&local_70);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetRelyingParty @ 14eee4270

TOnlineResult<UE::Online::FAuthGetRelyingParty> * __thiscall
UE::Online::FAuthCommon::GetRelyingParty
          (FAuthCommon *this,TOnlineResult<UE::Online::FAuthGetRelyingParty> *__return_storage_ptr__
          ,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FAuthGetRelyingParty_Online_UE__VFOnlineError_34__Online_UE__6B_;
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
       &___7__TOnlineResult_UFAuthGetRelyingParty_Online_UE___Online_UE__6B_;
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

// IsLoggedIn @ 14eeeeca0

bool __thiscall UE::Online::FAuthCommon::IsLoggedIn(FAuthCommon *this,FPlatformUserId *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FAccountInfoRegistry *this_00;
  TSharedPtr<UE::Online::FAccountInfo,1> local_18;
  
  this_00 = (FAccountInfoRegistry *)(**(code **)(this->_padding_ + 0xb0))();
  FAccountInfoRegistry::Find(this_00,&local_18,(FPlatformUserId)param_1->InternalId);
  if (local_18.Object != (FAccountInfo *)0x0) {
    if (local_18.Object == (FAccountInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((local_18.Object)->LoginStatus == LoggedIn) ||
       ((local_18.Object)->LoginStatus == LoggedInReducedFunctionality)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// IsLoggedIn @ 14eeeed40

bool __thiscall
UE::Online::FAuthCommon::IsLoggedIn
          (FAuthCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  PSRWLOCK SRWLock;
  ELoginStatus EVar1;
  uint uVar2;
  FAccountInfo *pFVar3;
  longlong lVar4;
  TSharedRef<UE::Online::FAccountInfo,1> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res8 [2];
  
  lVar4 = (**(code **)(this->_padding_ + 0xb0))();
  uVar2 = param_1->Value;
  SRWLock = (PSRWLOCK)(lVar4 + 8);
  AcquireSRWLockShared(SRWLock);
  local_res8[0].Value = uVar2;
  pTVar5 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
           ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
                   *)(lVar4 + 0x60),local_res8);
  if (pTVar5 == (TSharedRef<UE::Online::FAccountInfo,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    pTVar7 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar5->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    ReleaseSRWLockShared(SRWLock);
    if ((pFVar3 != (FAccountInfo *)0x0) &&
       ((EVar1 = pFVar3->LoginStatus, EVar1 == LoggedIn || (EVar1 == LoggedInReducedFunctionality)))
       ) {
      bVar6 = true;
      goto LAB_14eeeedcd;
    }
  }
  bVar6 = false;
LAB_14eeeedcd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return bVar6;
}

// LinkAccount @ 14eef1450

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthLinkAccount> * __thiscall
UE::Online::FAuthCommon::LinkAccount
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthLinkAccount> *__return_storage_ptr__,Params *param_1
          )

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthLinkAccount>,1> *pTVar8
  ;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthLinkAccount>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"LinkAccount");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthLinkAccount>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLinkAccount>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthLinkAccount> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::CreateSharedState
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

// Login @ 14eef16a0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthLogin> * __thiscall
UE::Online::FAuthCommon::Login
          (FAuthCommon *this,TOnlineAsyncOpHandle<UE::Online::FAuthLogin> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthLogin>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthLogin>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"Login");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthLogin>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLogin>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthLogin> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthLogin>::CreateSharedState(local_78.Object,&local_98);
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

// Logout @ 14eef1860

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthLogout> * __thiscall
UE::Online::FAuthCommon::Logout
          (FAuthCommon *this,TOnlineAsyncOpHandle<UE::Online::FAuthLogout> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthLogout>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthLogout>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"Logout");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthLogout>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthLogout>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthLogout> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthLogout>::CreateSharedState(local_78.Object,&local_98);
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

// ModifyAccountAttributes @ 14eef1e40

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthModifyAccountAttributes> * __thiscall
UE::Online::FAuthCommon::ModifyAccountAttributes
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthModifyAccountAttributes> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthModifyAccountAttributes>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthModifyAccountAttributes>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"ModifyAccountAttributes");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthModifyAccountAttributes>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthModifyAccountAttributes>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthModifyAccountAttributes> *)0x0)
  {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::CreateSharedState
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

// OnAccountAttributesChanged @ 14eef2870

TOnlineEvent<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&)> __thiscall
UE::Online::FAuthCommon::OnAccountAttributesChanged(FAuthCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnAuthAccountAttributesChangedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&)>)in_RDX;
}

// OnLoginStatusChanged @ 14eef2e60

TOnlineEvent<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&)> __thiscall
UE::Online::FAuthCommon::OnLoginStatusChanged(FAuthCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnAuthLoginStatusChangedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&)>)in_RDX;
}

// OnPendingAuthExpiration @ 14eef2e80

TOnlineEvent<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&)> __thiscall
UE::Online::FAuthCommon::OnPendingAuthExpiration(FAuthCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnAuthPendingAuthExpirationEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&)>)in_RDX;
}

// QueryExternalAuthToken @ 14eef7fd0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalAuthToken> * __thiscall
UE::Online::FAuthCommon::QueryExternalAuthToken
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalAuthToken> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthQueryExternalAuthToken>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthQueryExternalAuthToken>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryExternalAuthToken");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthQueryExternalAuthToken>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryExternalAuthToken>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthQueryExternalAuthToken> *)0x0)
  {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::CreateSharedState
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

// QueryExternalServerAuthTicket @ 14eef8190

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalServerAuthTicket> * __thiscall
UE::Online::FAuthCommon::QueryExternalServerAuthTicket
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalServerAuthTicket>
          *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryExternalServerAuthTicket");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthQueryExternalServerAuthTicket>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryExternalServerAuthTicket>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object !=
      (IOnlineAsyncOpSharedState<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::CreateSharedState
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

// QueryVerifiedAuthTicket @ 14eef8c10

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAuthQueryVerifiedAuthTicket> * __thiscall
UE::Online::FAuthCommon::QueryVerifiedAuthTicket
          (FAuthCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAuthQueryVerifiedAuthTicket> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryVerifiedAuthTicket");
  pTVar6 = TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAuth> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAuthQueryVerifiedAuthTicket>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAuthQueryVerifiedAuthTicket>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0)
  {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::CreateSharedState
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

// RegisterCommands @ 14eef98c0

void __thiscall UE::Online::FAuthCommon::RegisterCommands(FAuthCommon *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18;
  TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
  ***local_28;
  undefined8 **ppuStack_20;
  
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__0__flat______;
  puVar2 = (undefined8 *)0x0;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthLogin_Online_UE___23___QEAUParams_FAuthLogin_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bbb0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__8__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthLogout_Online_UE___23___QEAUParams_FAuthLogout_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bbc0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogout>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogout::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogout>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogout::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__16__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthCreateAccount_Online_UE___23___QEAUParams_FAuthCreateAccount_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bbd0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthCreateAccount>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthCreateAccount::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthCreateAccount>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthCreateAccount::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__24__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthLinkAccount_Online_UE___23___QEAUParams_FAuthLinkAccount_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bbf0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLinkAccount>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLinkAccount::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLinkAccount>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLinkAccount::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__32__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthModifyAccountAttributes_Online_UE___23___QEAUParams_FAuthModifyAccountAttributes_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bc08;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthModifyAccountAttributes>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthModifyAccountAttributes::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthModifyAccountAttributes>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthModifyAccountAttributes::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__40__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthQueryExternalServerAuthTicket_Online_UE___23___QEAUParams_FAuthQueryExternalServerAuthTicket_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bc38;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalServerAuthTicket>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthQueryExternalServerAuthTicket::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalServerAuthTicket>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthQueryExternalServerAuthTicket::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__48__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthQueryExternalAuthToken_Online_UE___23___QEAUParams_FAuthQueryExternalAuthToken_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bc78;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalAuthToken>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthQueryExternalAuthToken::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthQueryExternalAuthToken>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthQueryExternalAuthToken::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__56__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthQueryVerifiedAuthTicket_Online_UE___23___QEAUParams_FAuthQueryVerifiedAuthTicket_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bca8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthQueryVerifiedAuthTicket>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthQueryVerifiedAuthTicket::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthQueryVerifiedAuthTicket>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthQueryVerifiedAuthTicket::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__64__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthCancelVerifiedAuthTicket_Online_UE___23___QEAUParams_FAuthCancelVerifiedAuthTicket_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bcd8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthCancelVerifiedAuthTicket>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthCancelVerifiedAuthTicket::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthCancelVerifiedAuthTicket>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthCancelVerifiedAuthTicket::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__72__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthBeginVerifiedAuthSession_Online_UE___23___QEAUParams_FAuthBeginVerifiedAuthSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bd10;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthBeginVerifiedAuthSession>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthBeginVerifiedAuthSession::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthBeginVerifiedAuthSession>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthBeginVerifiedAuthSession::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__80__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAuthEndVerifiedAuthSession_Online_UE___23___QEAUParams_FAuthEndVerifiedAuthSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bd48;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthEndVerifiedAuthSession>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthEndVerifiedAuthSession::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthEndVerifiedAuthSession>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthEndVerifiedAuthSession::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__88__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFAuthGetLocalOnlineUserByOnlineAccountId_Online_UE___23___QEAUParams_FAuthGetLocalOnlineUserByOnlineAccountId_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bd80;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__96__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFAuthGetLocalOnlineUserByPlatformUserId_Online_UE___23___QEAUParams_FAuthGetLocalOnlineUserByPlatformUserId_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309bdd0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__104__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFAuthGetAllLocalOnlineUsers_Online_UE___23___QEAUParams_FAuthGetAllLocalOnlineUsers_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309be18;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetAllLocalOnlineUsers>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetAllLocalOnlineUsers::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetAllLocalOnlineUsers>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetAllLocalOnlineUsers::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__112__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFAuthGetLinkAccountContinuationId_Online_UE___23___QEAUParams_FAuthGetLinkAccountContinuationId_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309be48;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetLinkAccountContinuationId>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetLinkAccountContinuationId::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetLinkAccountContinuationId>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetLinkAccountContinuationId::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
              ***)_vcall__120__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAuthCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFAuthGetRelyingParty_Online_UE___23___QEAUParams_FAuthGetRelyingParty_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    puVar2 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAuthLogin>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthLogin::Params_&&)>
        **)0x15309be88;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  local_res18 = puVar2;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetRelyingParty>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetRelyingParty::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAuthCommon,UE::Online::TOnlineResult<UE::Online::FAuthGetRelyingParty>_(__cdecl_UE::Online::FAuthCommon::*)(UE::Online::FAuthGetRelyingParty::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  return;
}

