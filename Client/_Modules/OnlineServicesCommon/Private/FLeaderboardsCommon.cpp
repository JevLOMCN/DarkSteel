// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 9

// FLeaderboardsCommon @ 14ee0d050

FLeaderboardsCommon * __thiscall
UE::Online::FLeaderboardsCommon::FLeaderboardsCommon
          (FLeaderboardsCommon *this,FOnlineServicesCommon *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  ForAnyElementType _Src;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Leaderboards");
  *(FOnlineServicesCommon **)&this->field_0x10 = param_1;
  *(undefined ***)this =
       &TOnlineComponent<UE::Online::ILeaderboards>::_vftable__for__UE__Online__ILeaderboards__;
  *(undefined ***)&this->field_0x8 =
       &TOnlineComponent<UE::Online::ILeaderboards>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar3 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    *(FLeaderboardsCommon **)&this->field_0x18 = this;
    *(undefined8 *)&this->field_0x20 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    *(FLeaderboardsCommon **)&this->field_0x18 = this;
    *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar2;
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  *(undefined ***)this = &_vftable__for__UE__Online__ILeaderboards__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__UE__Online__IOnlineComponent__;
  *(undefined8 *)&this->LeaderboardDefinitions = 0;
  *(undefined8 *)&(this->LeaderboardDefinitions).field_0x8 = 0;
  *(undefined8 *)&(this->LeaderboardDefinitions).field_0x20 = 0;
  *(undefined4 *)&(this->LeaderboardDefinitions).field_0x28 = 0;
  *(undefined4 *)&(this->LeaderboardDefinitions).field_0x2c = 0x80;
  *(undefined4 *)&(this->LeaderboardDefinitions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LeaderboardDefinitions).field_0x34 = 0;
  *(undefined8 *)&(this->LeaderboardDefinitions).field_0x40 = 0;
  *(undefined4 *)&(this->LeaderboardDefinitions).field_0x48 = 0;
  *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder = 0;
  *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x28 = 0;
  this->bIsTitleManaged = false;
  return this;
}

// Initialize @ 14eeedad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Online::FLeaderboardsCommon::Initialize(FLeaderboardsCommon *this)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  IStats *pIVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [32];
  <lambda_1> local_68;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_60;
  <lambda_1> *local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)&this->field_0x8;
  puVar9 = &this[-1].field_0x1e8;
  local_68.__this = ::operator_new(0x10);
  if (local_68.__this != (FLeaderboardsCommon *)0x0) {
    *(undefined1 **)&(local_68.__this)->field_0x8 = puVar9;
    *(undefined ***)local_68.__this =
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VILeaderboards_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_60.Value =
       (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *
       )&this->field_0x20;
  local_50 = &local_68;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x130),&local_60,(bool *)&local_60.Value);
  if (local_68.__this != (FLeaderboardsCommon *)0x0) {
    (*(code *)**(undefined8 **)local_68.__this)(local_68.__this,1);
  }
  (**(code **)(*(longlong *)puVar9 + 0x20))(puVar9);
  (**(code **)(*(longlong *)this + 0x18))(this);
  pIVar6 = FOnlineServicesCommon::Get<UE::Online::IStats>
                     (*(FOnlineServicesCommon **)&this->field_0x8);
  if (pIVar6 != (IStats *)0x0) {
    local_68.__this = (FLeaderboardsCommon *)puVar9;
    puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,&local_60);
    TOnlineEventCallable<void___cdecl(UE::Online::FUpdateStats::Params_const_&)>::
    Add<_UE::Online::FLeaderboardsCommon::Initialize_::__l5::<lambda_1>_>
              ((TOnlineEventCallable<void___cdecl(UE::Online::FUpdateStats::Params_const_&)> *)
               *puVar7,(FOnlineEventDelegateHandle *)local_48,&local_68);
    puVar9 = &(this->LeaderboardDefinitions).field_0x48;
    FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)puVar9);
    lVar1 = *(longlong *)puVar9;
    uVar2 = *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder;
    uVar3 = *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x8;
    uVar4 = *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x10;
    uVar5 = *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x18;
    plVar8 = *(longlong **)&(this->StatEventHandle).DelegateUnbinder.field_0x20;
    *(undefined8 *)puVar9 = local_48._0_8_;
    *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder = local_48._8_8_;
    *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x8 = local_48._16_8_;
    *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x10 = local_48._24_8_;
    *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x18 = local_48._32_8_;
    *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x20 = local_48._40_8_;
    local_48._0_8_ = lVar1;
    local_48._8_8_ = uVar2;
    local_48._16_8_ = uVar3;
    local_48._24_8_ = uVar4;
    local_48._32_8_ = uVar5;
    local_48._40_8_ = plVar8;
    FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_48);
    if (local_48._0_8_ != 0) {
      plVar8 = (longlong *)(local_48 + 0x10);
      if ((longlong *)local_48._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_48._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// ReadEntriesAroundRank @ 14eef8dd0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundRank> * __thiscall
UE::Online::FLeaderboardsCommon::ReadEntriesAroundRank
          (FLeaderboardsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundRank> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FReadEntriesAroundRank>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FReadEntriesAroundRank>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"ReadEntriesAroundRank");
  pTVar5 = TOnlineComponent<UE::Online::ILeaderboards>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILeaderboards> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FReadEntriesAroundRank>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesAroundRank>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FReadEntriesAroundRank> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::CreateSharedState
                     (local_78.Object,&local_98);
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

// ReadEntriesAroundUser @ 14eef8f90

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundUser> * __thiscall
UE::Online::FLeaderboardsCommon::ReadEntriesAroundUser
          (FLeaderboardsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundUser> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FReadEntriesAroundUser>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FReadEntriesAroundUser>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"ReadEntriesAroundUser");
  pTVar5 = TOnlineComponent<UE::Online::ILeaderboards>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILeaderboards> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FReadEntriesAroundUser>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesAroundUser>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FReadEntriesAroundUser> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::CreateSharedState
                     (local_78.Object,&local_98);
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

// ReadEntriesForUsers @ 14eef9150

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers> * __thiscall
UE::Online::FLeaderboardsCommon::ReadEntriesForUsers
          (FLeaderboardsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FReadEntriesForUsers>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FReadEntriesForUsers>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"ReadEntriesForUsers");
  pTVar5 = TOnlineComponent<UE::Online::ILeaderboards>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILeaderboards> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FReadEntriesForUsers>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FReadEntriesForUsers>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FReadEntriesForUsers> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::CreateSharedState
                     (local_78.Object,&local_98);
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

// RegisterCommands @ 14eefa650

void __thiscall UE::Online::FLeaderboardsCommon::RegisterCommands(FLeaderboardsCommon *this)

{
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18 [2];
  TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>
  ***local_28;
  undefined8 **ppuStack_20;
  
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>
              ***)_vcall__8__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  local_res18[0] = ::operator_new(0x20);
  if (local_res18[0] != (undefined8 *)0x0) {
    *local_res18[0] =
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFLeaderboardsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFReadEntriesForUsers_Online_UE___23___QEAUParams_FReadEntriesForUsers_23__Z_Online_UE__6B_
    ;
    local_res18[0][2] = local_28;
    local_res18[0][3] = ppuStack_20;
    local_res18[0][1] = this;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>
        **)0x15309dac0;
  local_28 = &local_res8.Value;
  ppuStack_20 = local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>
              ***)_vcall__16__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  local_res18[0] = ::operator_new(0x20);
  if (local_res18[0] != (undefined8 *)0x0) {
    *local_res18[0] =
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFLeaderboardsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFReadEntriesAroundRank_Online_UE___23___QEAUParams_FReadEntriesAroundRank_23__Z_Online_UE__6B_
    ;
    local_res18[0][2] = local_28;
    local_res18[0][3] = ppuStack_20;
    local_res18[0][1] = this;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>
        **)0x15309dae8;
  local_28 = &local_res8.Value;
  ppuStack_20 = local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundRank>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesAroundRank::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundRank>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesAroundRank::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>
              ***)_vcall__24__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  local_res18[0] = ::operator_new(0x20);
  if (local_res18[0] != (undefined8 *)0x0) {
    *local_res18[0] =
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFLeaderboardsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFReadEntriesAroundUser_Online_UE___23___QEAUParams_FReadEntriesAroundUser_23__Z_Online_UE__6B_
    ;
    local_res18[0][2] = local_28;
    local_res18[0][3] = ppuStack_20;
    local_res18[0][1] = this;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesForUsers>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesForUsers::Params_&&)>
        **)0x15309db18;
  local_28 = &local_res8.Value;
  ppuStack_20 = local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundUser>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesAroundUser::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLeaderboardsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FReadEntriesAroundUser>_(__cdecl_UE::Online::FLeaderboardsCommon::*)(UE::Online::FReadEntriesAroundUser::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  return;
}

// UpdateConfig @ 14ef32130

void __thiscall UE::Online::FLeaderboardsCommon::UpdateConfig(FLeaderboardsCommon *this)

{
  FLeaderboardDefinition *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [16];
  FString local_78;
  FString *local_68;
  FLeaderboardDefinition *local_60;
  FLeaderboardsCommonConfig local_58;
  
  local_58.bIsTitleManaged = false;
  local_58.LeaderboardDefinitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.LeaderboardDefinitions.ArrayNum = 0;
  local_58.LeaderboardDefinitions.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>
            (*(FOnlineServicesCommon **)&this->field_0x8,&local_58,(FString *)&this->field_0x20,
             &local_78);
  iVar3 = local_58.LeaderboardDefinitions.ArrayNum;
  (this->StatEventHandle).DelegateUnbinder.field_0x28 = local_58.bIsTitleManaged;
  pFVar1 = (FLeaderboardDefinition *)
           (local_58.LeaderboardDefinitions.AllocatorInstance.Data +
           (longlong)local_58.LeaderboardDefinitions.ArrayNum * 0x18);
  FVar4.Data = local_58.LeaderboardDefinitions.AllocatorInstance.Data;
  while( true ) {
    if (local_58.LeaderboardDefinitions.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Online::FLeaderboardDefinition,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((FLeaderboardDefinition *)FVar4.Data == pFVar1) break;
    iVar2 = (((FLeaderboardDefinition *)FVar4.Data)->Name).Data.ArrayNum;
    _Src = (((FLeaderboardDefinition *)FVar4.Data)->Name).Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,(ForAnyElementType *)&local_78,iVar2,&local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
    }
    local_68 = &local_78;
    local_60 = (FLeaderboardDefinition *)FVar4.Data;
    TSet<TTuple<FString,UE::Online::FLeaderboardDefinition>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FLeaderboardDefinition,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,UE::Online::FLeaderboardDefinition_&&>_>
              ((TSet<TTuple<FString,UE::Online::FLeaderboardDefinition>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FLeaderboardDefinition,0>,FDefaultSetAllocator>
                *)&this->field_0x158,
               (TPairInitializer<FString_&&,UE::Online::FLeaderboardDefinition_&&> *)
               (local_res8 + 8),(bool *)&local_68);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar4.Data = FVar4.Data + 0x18;
  }
  DestructItems<UE::Online::FLeaderboardDefinition,int>
            ((FLeaderboardDefinition *)local_58.LeaderboardDefinitions.AllocatorInstance.Data,
             local_58.LeaderboardDefinitions.ArrayNum);
  if ((FLeaderboardDefinition *)local_58.LeaderboardDefinitions.AllocatorInstance.Data !=
      (FLeaderboardDefinition *)0x0) {
    FMemory::Free(local_58.LeaderboardDefinitions.AllocatorInstance.Data);
  }
  return;
}

// WriteLeaderboardScores @ 14ef326b0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FWriteLeaderboardScores> * __thiscall
UE::Online::FLeaderboardsCommon::WriteLeaderboardScores
          (FLeaderboardsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FWriteLeaderboardScores> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FWriteLeaderboardScores>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FWriteLeaderboardScores>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"WriteLeaderboardScores");
  pTVar5 = TOnlineComponent<UE::Online::ILeaderboards>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILeaderboards> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FWriteLeaderboardScores>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FWriteLeaderboardScores>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FWriteLeaderboardScores> *)0x0) {
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
  pTVar7 = TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::CreateSharedState
                     (local_78.Object,&local_98);
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

// WriteLeaderboardsByStats @ 14ef32870

void __thiscall
UE::Online::FLeaderboardsCommon::WriteLeaderboardsByStats(FLeaderboardsCommon *this,Params *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  FString *pFVar10;
  uint uVar11;
  uint uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  Params *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_108;
  long64 local_f8;
  int local_f0;
  int local_ec;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  int iStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  FScriptContainerElement *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined4 local_54;
  
  if (this->bIsTitleManaged != false) {
    local_res20 = (param_1->UpdateUsersStats).ArrayNum;
    uVar6 = (ulonglong)(int)local_res20;
    pFVar16 = (param_1->UpdateUsersStats).AllocatorInstance.Data;
    pFVar14 = pFVar16 + 0x28;
    local_e8 = pFVar16 + uVar6 * 0x58;
    local_res10 = param_1;
    while( true ) {
      pFVar15 = local_e8;
      if ((local_res10->UpdateUsersStats).ArrayNum != (int)uVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Online::FUserStats_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar16 == pFVar15) break;
      uVar12 = *(uint *)(pFVar14 + 8);
      iStack_d8 = 0;
      local_c0 = 0;
      uStack_d4 = 1;
      uStack_c4 = 0;
      if (uVar12 != 0) {
        pFVar15 = *(FScriptContainerElement **)pFVar14;
        if (*(FScriptContainerElement **)pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar15 = pFVar14 + -0x10;
        }
        uVar11 = *(uint *)pFVar15;
        while (uVar11 == 0) {
          lVar7 = (longlong)iStack_d8;
          local_c0 = local_c0 + 0x20;
          iStack_d8 = iStack_d8 + 1;
          uStack_c4 = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_d8)
          goto LAB_14ef32975;
          uVar11 = *(uint *)(pFVar15 + (lVar7 + 1) * 4);
        }
        uStack_d4 = -uVar11 & uVar11;
        uVar6 = (ulonglong)uStack_d4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_f0 = (int)lVar7;
        uStack_c4 = local_c0 + -1 + local_f0;
        if ((int)uVar12 < (int)uStack_c4) {
          uStack_c4 = uVar12;
        }
      }
LAB_14ef32975:
      local_e0 = pFVar14 + -0x20;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar14 + -0x10);
      uStack_bc = local_54;
      iStack_b8 = *(int *)(pFVar14 + -0x18) - *(int *)(pFVar14 + 0x14);
      uVar11 = uVar12 & 0xffffffe0;
      TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
      uStack_c8 = 0xffffffff;
      TStack_a8.CurrentBitIndex = uStack_c4;
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar12 >> 5;
      TStack_a8._28_4_ = local_54;
      TStack_a8.BaseBitIndex = local_c0;
      uStack_88 = CONCAT44(uStack_b4,iStack_b8);
      local_d0 = pTVar1;
      local_b0 = local_e0;
      TStack_a8.Array = pTVar1;
      if (((int)uVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(uint *)(pFVar14 + 8);
      if (uVar12 != uVar2) {
        pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar14;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar14 ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar13 = pTVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                 *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar12 == 0) {
          lVar7 = (longlong)iVar9;
          uVar11 = uVar11 + 0x20;
          iVar9 = iVar9 + 1;
          uVar12 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_14ef32a80;
          uVar12 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar7 * 4 + 4);
        }
        uVar6 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_ec = (int)lVar7;
        uVar12 = local_ec + -1 + uVar11;
        if ((int)uVar2 < (int)uVar12) {
          uVar12 = uVar2;
        }
      }
LAB_14ef32a80:
      while( true ) {
        pFVar15 = local_b0;
        if (*(int *)(local_b0 + 8) - *(int *)(local_b0 + 0x34) != (int)uStack_88) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_a8.CurrentBitIndex == uVar12) && (TStack_a8.Array == pTVar1)) &&
           (pFVar15 == pFVar14 + -0x20)) break;
        pFVar10 = (FString *)(*(longlong *)pFVar15 + (longlong)TStack_a8.CurrentBitIndex * 0x38);
        iVar3 = (pFVar10->Data).ArrayNum;
        iVar9 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar8 = L"";
          iVar9 = 0;
        }
        else {
          pwVar8 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar8);
        iVar9 = TSet<TTuple<FString,UE::Online::FLeaderboardDefinition>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FLeaderboardDefinition,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,UE::Online::FLeaderboardDefinition>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FLeaderboardDefinition,0>,FDefaultSetAllocator>
                            *)&this->LeaderboardDefinitions,uVar11,pFVar10);
        if (iVar9 != -1) {
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          if (&local_108 != pFVar10) {
            uVar11 = (pFVar10->Data).ArrayNum;
            pFVar15 = (pFVar10->Data).AllocatorInstance.Data;
            local_108.Data.ArrayMax = 0;
            local_108.Data.ArrayNum = uVar11;
            if (uVar11 != 0) {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar11,0,(ForAnyElementType *)&local_108,uVar11,
                         &local_108.Data.ArrayMax);
              memcpy(local_108.Data.AllocatorInstance.Data,pFVar15,(longlong)(int)uVar11 * 2);
            }
          }
          local_f8 = FSchemaVariant::GetInt64((FSchemaVariant *)(pFVar10 + 1));
          (**(code **)(*(longlong *)this + 0x28))(this,local_80);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
      }
      pFVar16 = pFVar16 + 0x58;
      pFVar14 = pFVar14 + 0x58;
      uVar6 = (ulonglong)local_res20;
    }
  }
  return;
}

