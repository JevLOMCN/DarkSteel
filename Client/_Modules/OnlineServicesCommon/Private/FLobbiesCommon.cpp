// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 32

// FLobbiesCommon @ 14ee0d260

FLobbiesCommon * __thiscall
UE::Online::FLobbiesCommon::FLobbiesCommon(FLobbiesCommon *this,FOnlineServicesCommon *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLobbiesCommon *pFVar7;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Lobbies");
  this->_padding_ = (longlong)param_1;
  this->_padding_ =
       (longlong)&TOnlineComponent<UE::Online::ILobbies>::_vftable__for__UE__Online__ILobbies__;
  this->_padding_ =
       (longlong)
       &TOnlineComponent<UE::Online::ILobbies>::_vftable__for__UE__Online__IOnlineComponent__;
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
  this->_padding_ = (longlong)&_vftable__for__UE__Online__ILobbies__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  *(undefined8 *)&this->PresenceLobbiesUserMap = 0;
  *(undefined8 *)&(this->PresenceLobbiesUserMap).field_0x8 = 0;
  *(undefined8 *)&(this->PresenceLobbiesUserMap).field_0x20 = 0;
  *(undefined4 *)&(this->PresenceLobbiesUserMap).field_0x28 = 0;
  *(undefined4 *)&(this->PresenceLobbiesUserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PresenceLobbiesUserMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PresenceLobbiesUserMap).field_0x34 = 0;
  *(undefined8 *)&(this->PresenceLobbiesUserMap).field_0x40 = 0;
  *(undefined4 *)&(this->PresenceLobbiesUserMap).field_0x48 = 0;
  pTVar6 = ::operator_new(0xb0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->SchemaRegistry).Object = (FSchemaRegistry *)0x10;
    (this->SchemaRegistry).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSchemaRegistry_Online_UE___00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0;
    pTVar6[5]._padding_ = 0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[8]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[9]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[9]._padding_ + 4) = 0;
    pTVar6[10]._padding_ = 0;
    (this->SchemaRegistry).Object = (FSchemaRegistry *)(pTVar6 + 1);
    (this->SchemaRegistry).SharedReferenceCount.ReferenceController = pTVar6;
    if ((FSchemaRegistry *)(pTVar6 + 1) == (FSchemaRegistry *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FLobbiesCommon *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  FLobbyEvents::FLobbyEvents(&this->LobbyEvents);
  return this;
}

// CreateLobby @ 14ee9e7c0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCreateLobby> * __thiscall
UE::Online::FLobbiesCommon::CreateLobby
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCreateLobby> *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCreateLobby>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCreateLobby>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"CreateLobby");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCreateLobby>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCreateLobby>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FCreateLobby> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FCreateLobby>::CreateSharedState(local_78.Object,&local_98);
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

// DeclineLobbyInvitation @ 14eea80e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FDeclineLobbyInvitation> * __thiscall
UE::Online::FLobbiesCommon::DeclineLobbyInvitation
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FDeclineLobbyInvitation> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FDeclineLobbyInvitation>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FDeclineLobbyInvitation>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"DeclineLobbyInvitation");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FDeclineLobbyInvitation>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FDeclineLobbyInvitation>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FDeclineLobbyInvitation> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::CreateSharedState
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

// FindLobbies @ 14eed4bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FFindLobbies> * __thiscall
UE::Online::FLobbiesCommon::FindLobbies
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FFindLobbies> *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FFindLobbies>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FFindLobbies>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"FindLobbies");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FFindLobbies>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FFindLobbies>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FFindLobbies> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FFindLobbies>::CreateSharedState(local_78.Object,&local_98);
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

// FunctionalTest @ 14eed5290

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FFunctionalTestLobbies> * __thiscall
UE::Online::FLobbiesCommon::FunctionalTest
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FFunctionalTestLobbies> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  IAuth *pIVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FOnlineError *pFVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FFunctionalTestLobbies>,1>
  *pTVar9;
  int iVar10;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FFunctionalTestLobbies>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  pIVar6 = FOnlineServicesCommon::Get<UE::Online::IAuth>((FOnlineServicesCommon *)this->_padding_);
  if (pIVar6 == (IAuth *)0x0) {
    plVar2 = (longlong *)this->_padding_;
    ::FString::FString((FString *)&local_98,L"FunctionalTest");
    pTVar7 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                       ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,
                        (FString *)&local_98);
    if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
      EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
      Online::LexToString(EVar5);
      Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FFunctionalTestLobbies>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpCache::GetOp<UE::Online::FFunctionalTestLobbies>
              ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar7);
    DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FFunctionalTestLobbies> *)0x0) {
      FMemory::Free(local_98.Object);
    }
    iVar1 = (int)this->_padding_;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar10);
    local_68.bIsSet = false;
    pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
    pFVar8 = Errors::MissingInterface(&local_38,&local_68);
    (*pcVar3)(local_78.Object,pFVar8);
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
    pTVar9 = TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::CreateSharedState
                       (local_78.Object,&local_98);
    (__return_storage_ptr__->State).Object = pTVar9->Object;
    pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
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
  }
  else {
    RunLobbyFunctionalTest(__return_storage_ptr__,pIVar6,this,&this->LobbyEvents);
  }
  return __return_storage_ptr__;
}

// GetJoinedLobbies @ 14eee01b0

TOnlineResult<UE::Online::FGetJoinedLobbies> * __thiscall
UE::Online::FLobbiesCommon::GetJoinedLobbies
          (FLobbiesCommon *this,TOnlineResult<UE::Online::FGetJoinedLobbies> *__return_storage_ptr__
          ,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetJoinedLobbies_Online_UE__VFOnlineError_34__Online_UE__6B_;
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
       &___7__TOnlineResult_UFGetJoinedLobbies_Online_UE___Online_UE__6B_;
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

// GetPresenceLobby @ 14eee30b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FGetPresenceLobby> * __thiscall
UE::Online::FLobbiesCommon::GetPresenceLobby
          (FLobbiesCommon *this,TOnlineResult<UE::Online::FGetPresenceLobby> *__return_storage_ptr__
          ,Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  uint *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  ulong64 uVar5;
  code *pcVar6;
  bool bVar7;
  FOnlineError *pFVar8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *pTVar9;
  TOnlineResult<UE::Online::FGetPresenceLobby> *pTVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined1 auStack_648 [32];
  undefined1 local_628 [4];
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_624;
  FString local_620;
  TOptional<UE::Online::FOnlineError> local_610;
  TOptional<UE::Online::FOnlineError> local_5e0;
  TOptional<UE::Online::FOnlineError> local_5b0;
  FOnlineError local_580;
  FOnlineError local_558;
  FOnlineError local_530;
  undefined1 local_508 [8];
  undefined8 *local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  byte local_4d8;
  FScriptContainerElement local_4c8 [256];
  ForAnyElementType local_3c8;
  FScriptContainerElement *local_3c0;
  int local_3b8;
  FScriptContainerElement local_3a8 [256];
  ForAnyElementType local_2a8;
  FScriptContainerElement *local_2a0;
  int local_298;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_648;
  uVar1 = (param_1->LocalAccountId).Value;
  if ((uVar1 & 0xffffff) != 0) {
    pTVar9 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,0>_>
             ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,0>_>
                     *)&this->PresenceLobbiesUserMap,&param_1->LocalAccountId);
    if (pTVar9 != (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)0x0) {
      local_624.Value = uVar1;
      (**(code **)(this->_padding_ + 0x78))(this,local_508,&local_624);
      uVar13 = (ulonglong)local_4d8;
      if ((1 < uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
        return pTVar10;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FBatchQueryStats::Result,UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar13 + 4) != '\0') {
        uVar13 = (ulonglong)local_4d8;
        if ((1 < uVar13) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
          return pTVar10;
        }
        if ((*(char *)((longlong)
                       &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FBatchQueryStats::Result,UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                        ::__l2::bIsSameType + uVar13 + 4) == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsOk()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                               ,0x7e,
                               L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
          return pTVar10;
        }
        if ((local_4d8 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
          return pTVar10;
        }
        iVar11 = (int)local_4f8;
        lVar12 = local_4f8;
        puVar14 = local_500;
        while( true ) {
          if ((int)lVar12 != iVar11) {
            local_628[0] = 0;
            `TCheckedPointerIterator<TSharedRef<UE::Online::FLobby_const_,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_628);
            lVar12 = local_4f8;
          }
          if (puVar14 == local_500 + (longlong)iVar11 * 2) break;
          puVar3 = (uint *)*puVar14;
          if (*puVar3 == pTVar9->Value) {
            pTVar4 = (TReferenceControllerBase<1> *)puVar14[1];
            if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
              *(uint **)&__return_storage_ptr__->field_0x8 = puVar3;
              *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
            }
            else {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
              *(undefined ***)__return_storage_ptr__ =
                   &
                   ___7__TResult_UResult_FGetPresenceLobby_Online_UE__VFOnlineError_34__Online_UE__6B_
              ;
              *(uint **)&__return_storage_ptr__->field_0x8 = puVar3;
              *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar4;
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            __return_storage_ptr__->field_0x30 = 0;
            *(undefined ***)__return_storage_ptr__ =
                 &___7__TOnlineResult_UFGetPresenceLobby_Online_UE___Online_UE__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if ((1 < local_4d8) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
              return pTVar10;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetJoinedLobbies::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_4d8])(&local_500);
            return __return_storage_ptr__;
          }
          puVar14 = puVar14 + 2;
        }
        if ((byte)LogTemp._0_1_ < 6) goto LAB_14eee350f;
        local_2a8.Data = (FScriptContainerElement *)0x0;
        local_298 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,
                               (uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",0x2c);
        uVar1 = local_298 + 1;
        uVar15 = uVar1;
        if (uVar1 < 0x81) {
          if (local_2a8.Data != (FScriptContainerElement *)0x0) {
            uVar15 = 0;
            goto LAB_14eee34a0;
          }
        }
        else {
LAB_14eee34a0:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_2a8,0,uVar15,2);
        }
        local_2a0 = local_3a8;
        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
          local_2a0 = local_2a8.Data;
        }
        Core::Private::Convert
                  ((wchar_t *)local_2a0,uVar1,
                   (uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",0x2d);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data);
        }
LAB_14eee350f:
        local_5e0.bIsSet = false;
        pFVar8 = Errors::NotFound(&local_558,&local_5e0);
        *(undefined ***)__return_storage_ptr__ =
             &___7__TResult_UResult_FGetPresenceLobby_Online_UE__VFOnlineError_34__Online_UE__6B_;
        *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar8->Details).Object;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
             (pFVar8->Details).SharedReferenceCount.ReferenceController;
        pFVar2 = (pFVar8->Inner).Object;
        (pFVar8->Details).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
        *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
             (pFVar8->Inner).SharedReferenceCount.ReferenceController;
        (pFVar8->Inner).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar8->Inner).Object = (FOnlineError *)0x0;
        *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar8->ErrorCode;
        __return_storage_ptr__->field_0x30 = 1;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFGetPresenceLobby_Online_UE___Online_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_558.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_558.Details.SharedReferenceCount.ReferenceController);
        if (local_5e0.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5e0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5e0.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
        if ((1 < local_4d8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
          return pTVar10;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetJoinedLobbies::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_4d8])(&local_500);
        return __return_storage_ptr__;
      }
      if ((byte)LogTemp._0_1_ < 6) goto LAB_14eee369a;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_178 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",
                             0x2c);
      uVar1 = local_178 + 1;
      uVar15 = uVar1;
      if (uVar1 < 0x81) {
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          uVar15 = 0;
          goto LAB_14eee362b;
        }
      }
      else {
LAB_14eee362b:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar15,2);
      }
      local_180 = local_288;
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        local_180 = local_188.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_180,uVar1,(uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",
                 0x2d);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
LAB_14eee369a:
      uVar13 = (ulonglong)local_4d8;
      if ((1 < uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
        return pTVar10;
      }
      if ((*(char *)((longlong)
                     &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetJoinedLobbies::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType + uVar13) == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                             ,0x8c,
                             L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
        return pTVar10;
      }
      if ((local_4d8 != 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
        return pTVar10;
      }
      *(undefined ***)__return_storage_ptr__ =
           &___7__TResult_UResult_FGetPresenceLobby_Online_UE__VFOnlineError_34__Online_UE__6B_;
      *(undefined8 **)&__return_storage_ptr__->field_0x8 = local_500;
      *(longlong *)&__return_storage_ptr__->field_0x10 = local_4f8;
      if (local_4f8 != 0) {
        LOCK();
        *(int *)(local_4f8 + 8) = *(int *)(local_4f8 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_4f0;
      *(longlong *)&__return_storage_ptr__->field_0x20 = local_4e8;
      if (local_4e8 != 0) {
        LOCK();
        *(int *)(local_4e8 + 8) = *(int *)(local_4e8 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_4e0;
      __return_storage_ptr__->field_0x30 = 1;
      *(undefined ***)__return_storage_ptr__ =
           &___7__TOnlineResult_UFGetPresenceLobby_Online_UE___Online_UE__6B_;
      if ((1 < local_4d8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FGetPresenceLobby> *)(*pcVar6)();
        return pTVar10;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetJoinedLobbies::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_4d8])(&local_500);
      return __return_storage_ptr__;
    }
    if ((byte)LogTemp._0_1_ < 6) goto LAB_14eee389e;
    Online::ToLogString(&local_620,&param_1->LocalAccountId);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_58 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",
                          0x2c);
    uVar1 = local_58 + 1;
    uVar15 = uVar1;
    if (uVar1 < 0x81) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar15 = 0;
        goto LAB_14eee381d;
      }
    }
    else {
LAB_14eee381d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar15,2);
    }
    local_60 = local_168;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      local_60 = local_68.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_60,uVar1,(uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",
               0x2d);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.Data.AllocatorInstance.Data);
    }
LAB_14eee389e:
    local_5b0.bIsSet = false;
    pFVar8 = Errors::InvalidState(&local_530,&local_5b0);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetPresenceLobby_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar8->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar8->Details).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar8->Inner).Object;
    (pFVar8->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar8->Inner).SharedReferenceCount.ReferenceController;
    (pFVar8->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar8->Inner).Object = (FOnlineError *)0x0;
    uVar5 = pFVar8->ErrorCode;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetPresenceLobby_Online_UE___Online_UE__6B_;
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = uVar5;
    __return_storage_ptr__->field_0x30 = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_530.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_530.Details.SharedReferenceCount.ReferenceController);
    if (local_5b0.bIsSet == false) {
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b0.TypedValue.Details.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  if ((byte)LogTemp._0_1_ < 6) goto LAB_14eee31b0;
  local_3c8.Data = (FScriptContainerElement *)0x0;
  local_3b8 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",0x2c
                        );
  uVar1 = local_3b8 + 1;
  uVar15 = uVar1;
  if (uVar1 < 0x81) {
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      uVar15 = 0;
      goto LAB_14eee3141;
    }
  }
  else {
LAB_14eee3141:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3c8,0,uVar15,2);
  }
  local_3c0 = local_4c8;
  if (local_3c8.Data != (FScriptContainerElement *)0x0) {
    local_3c0 = local_3c8.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_3c0,uVar1,(uchar *)"UE::Online::FLobbiesCommon::GetPresenceLobby",0x2d
            );
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  if (local_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data);
  }
LAB_14eee31b0:
  local_610.bIsSet = false;
  pFVar8 = Errors::InvalidParams(&local_580,&local_610);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetPresenceLobby_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar8->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar8->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar8->Inner).Object;
  (pFVar8->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar8->Inner).SharedReferenceCount.ReferenceController;
  (pFVar8->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar8->ErrorCode;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetPresenceLobby_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580.Details.SharedReferenceCount.ReferenceController);
  if (local_610.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_610.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_610.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetReceivedInvitations @ 14eee41a0

TOnlineResult<UE::Online::FGetReceivedInvitations> * __thiscall
UE::Online::FLobbiesCommon::GetReceivedInvitations
          (FLobbiesCommon *this,
          TOnlineResult<UE::Online::FGetReceivedInvitations> *__return_storage_ptr__,Params *param_1
          )

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetReceivedInvitations_Online_UE__VFOnlineError_34__Online_UE__6B_;
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
       &___7__TOnlineResult_UFGetReceivedInvitations_Online_UE___Online_UE__6B_;
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

// Initialize @ 14eeedc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FLobbiesCommon::Initialize(FLobbiesCommon *this)

{
  FSharedReferencer<1> *pFVar1;
  longlong lVar2;
  bool bVar3;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *pTVar4
  ;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  undefined1 local_98 [8];
  undefined8 local_90;
  FSchemaRegistryDescriptorConfig local_88;
  
  lVar2 = this->_padding_;
  pFVar1 = &this[-1].LobbyEvents.OnUILobbyJoinRequested.DelegateRef.SharedReferenceCount;
  pTVar4 = ::operator_new(0x10);
  local_res8.Value =
       (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *
       )0x0;
  if (pTVar4 != (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
                 *)0x0) {
    pTVar4[1].Ptr = (IOnlineExecHandler *)pFVar1;
    pTVar4->Ptr = (IOnlineExecHandler *)
                  &
                  ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VILobbies_Online_UE___Online_UE___Online_UE__6B_
    ;
    local_res8.Value = pTVar4;
  }
  local_90 = &local_res8.Value;
  local_98 = (undefined1  [8])&this->_padding_;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)local_98);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (*(code *)pFVar1->ReferenceController[0xe]._padding_)(pFVar1);
  (**(code **)(this->_padding_ + 0x18))(this);
  local_88.SchemaDescriptors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SchemaDescriptors.ArrayNum = 0;
  local_88.SchemaDescriptors.ArrayMax = 0;
  local_88.SchemaCategoryDescriptors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SchemaCategoryDescriptors.ArrayNum = 0;
  local_88.SchemaCategoryDescriptors.ArrayMax = 0;
  local_88.SchemaAttributeDescriptors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SchemaAttributeDescriptors.ArrayNum = 0;
  local_88.SchemaAttributeDescriptors.ArrayMax = 0;
  local_88.SchemaCategoryAttributeDescriptors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_88.SchemaCategoryAttributeDescriptors.ArrayNum = 0;
  local_88.SchemaCategoryAttributeDescriptors.ArrayMax = 0;
  local_88.ServiceDescriptors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ServiceDescriptors.ArrayNum = 0;
  local_88.ServiceDescriptors.ArrayMax = 0;
  local_88.ServiceAttributeDescriptors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ServiceAttributeDescriptors.ArrayNum = 0;
  local_88.ServiceAttributeDescriptors.ArrayMax = 0;
  local_98 = (undefined1  [8])0x0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>
            ((FOnlineServicesCommon *)this->_padding_,&local_88,(FString *)&this->_padding_,
             (FString *)local_98);
  bVar3 = FSchemaRegistry::ParseConfig
                    (*(FSchemaRegistry **)&(this->PresenceLobbiesUserMap).field_0x48,&local_88);
  if ((!bVar3) && (1 < (byte)LogOnlineServices._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  DestructItems<UE::Online::FSchemaServiceAttributeDescriptor,int>
            ((FSchemaServiceAttributeDescriptor *)
             local_88.ServiceAttributeDescriptors.AllocatorInstance.Data,
             local_88.ServiceAttributeDescriptors.ArrayNum);
  if ((FSchemaServiceAttributeDescriptor *)
      local_88.ServiceAttributeDescriptors.AllocatorInstance.Data !=
      (FSchemaServiceAttributeDescriptor *)0x0) {
    FMemory::Free(local_88.ServiceAttributeDescriptors.AllocatorInstance.Data);
  }
  DestructItems<UE::Online::FSchemaServiceDescriptor,int>
            ((FSchemaServiceDescriptor *)local_88.ServiceDescriptors.AllocatorInstance.Data,
             local_88.ServiceDescriptors.ArrayNum);
  if ((FSchemaServiceDescriptor *)local_88.ServiceDescriptors.AllocatorInstance.Data !=
      (FSchemaServiceDescriptor *)0x0) {
    FMemory::Free(local_88.ServiceDescriptors.AllocatorInstance.Data);
  }
  DestructItems<UE::Online::FSchemaCategoryAttributesDescriptor,int>
            ((FSchemaCategoryAttributesDescriptor *)
             local_88.SchemaCategoryAttributeDescriptors.AllocatorInstance.Data,
             local_88.SchemaCategoryAttributeDescriptors.ArrayNum);
  if ((FSchemaCategoryAttributesDescriptor *)
      local_88.SchemaCategoryAttributeDescriptors.AllocatorInstance.Data !=
      (FSchemaCategoryAttributesDescriptor *)0x0) {
    FMemory::Free(local_88.SchemaCategoryAttributeDescriptors.AllocatorInstance.Data);
  }
  DestructItems<UE::Online::FSchemaAttributeDescriptor,int>
            ((FSchemaAttributeDescriptor *)
             local_88.SchemaAttributeDescriptors.AllocatorInstance.Data,
             local_88.SchemaAttributeDescriptors.ArrayNum);
  if ((FSchemaAttributeDescriptor *)local_88.SchemaAttributeDescriptors.AllocatorInstance.Data !=
      (FSchemaAttributeDescriptor *)0x0) {
    FMemory::Free(local_88.SchemaAttributeDescriptors.AllocatorInstance.Data);
  }
  if (local_88.SchemaCategoryDescriptors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SchemaCategoryDescriptors.AllocatorInstance.Data);
  }
  DestructItems<UE::Online::FSchemaDescriptor,int>
            ((FSchemaDescriptor *)local_88.SchemaDescriptors.AllocatorInstance.Data,
             local_88.SchemaDescriptors.ArrayNum);
  if ((FSchemaDescriptor *)local_88.SchemaDescriptors.AllocatorInstance.Data !=
      (FSchemaDescriptor *)0x0) {
    FMemory::Free(local_88.SchemaDescriptors.AllocatorInstance.Data);
  }
  return;
}

// InviteLobbyMember @ 14eeee1b0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember> * __thiscall
UE::Online::FLobbiesCommon::InviteLobbyMember
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FInviteLobbyMember>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FInviteLobbyMember>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"InviteLobbyMember");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FInviteLobbyMember>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FInviteLobbyMember>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FInviteLobbyMember> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::CreateSharedState
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

// IsPresenceLobby @ 14eeeedf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FIsPresenceLobby> * __thiscall
UE::Online::FLobbiesCommon::IsPresenceLobby
          (FLobbiesCommon *this,TOnlineResult<UE::Online::FIsPresenceLobby> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *pTVar3;
  FOnlineError *pFVar4;
  ulong64 uVar5;
  FStaticBasicLogRecord *pFVar6;
  uint uVar7;
  undefined1 auStack_1e8 [32];
  TOptional<UE::Online::FOnlineError> local_1c8;
  FOnlineError local_198;
  FString local_170;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if (5 < (byte)LogTemp._0_1_) {
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"UE::Online::FLobbiesCommon::IsPresenceLobby",
                            0x2b);
      uVar1 = local_48 + 1;
      uVar7 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar7 = 0;
          goto LAB_14eeeee77;
        }
      }
      else {
LAB_14eeeee77:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FLobbiesCommon::IsPresenceLobby",
                 0x2c);
      pFVar6 = &::LOG_Static;
      goto LAB_14eeeeebf;
    }
  }
  else {
    uVar1 = (param_1->LobbyId).Value;
    if ((uVar1 & 0xffffff) != 0) {
      pTVar3 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,0>_>
               ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,0>_>
                       *)&this->PresenceLobbiesUserMap,&param_1->LocalAccountId);
      if (pTVar3 != (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)0x0) {
        __return_storage_ptr__->field_0x8 = uVar1 == pTVar3->Value;
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFIsPresenceLobby_Online_UE___Online_UE__6B_;
        return __return_storage_ptr__;
      }
      if (5 < (byte)LogTemp._0_1_) {
        Online::ToLogString(&local_170,&param_1->LocalAccountId);
        local_58.Data = (FScriptContainerElement *)0x0;
        local_48 = Core::Private::GetConvertedLength
                             ((wchar_t *)0x0,(uchar *)"UE::Online::FLobbiesCommon::IsPresenceLobby",
                              0x2b);
        uVar1 = local_48 + 1;
        uVar7 = uVar1;
        if (uVar1 < 0x81) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar7 = 0;
            goto LAB_14eeef089;
          }
        }
        else {
LAB_14eeef089:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
        }
        local_50 = local_158;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          local_50 = local_58.Data;
        }
        Core::Private::Convert
                  ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FLobbiesCommon::IsPresenceLobby",
                   0x2c);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      local_1c8.bIsSet = false;
      pFVar4 = Errors::InvalidState(&local_198,&local_1c8);
      *(undefined ***)__return_storage_ptr__ =
           &___7__TResult_UResult_FIsPresenceLobby_Online_UE__VFOnlineError_34__Online_UE__6B_;
      *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar4->Details).Object;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
           (pFVar4->Details).SharedReferenceCount.ReferenceController;
      pFVar2 = (pFVar4->Inner).Object;
      (pFVar4->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
      *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
           (pFVar4->Inner).SharedReferenceCount.ReferenceController;
      (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar4->Inner).Object = (FOnlineError *)0x0;
      uVar5 = pFVar4->ErrorCode;
      goto LAB_14eeef163;
    }
    if ((byte)LogTemp._0_1_ < 6) goto LAB_14eeeeee3;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FLobbiesCommon::IsPresenceLobby",0x2b
                         );
    uVar1 = local_48 + 1;
    uVar7 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_14eeeef96;
      }
    }
    else {
LAB_14eeeef96:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FLobbiesCommon::IsPresenceLobby",0x2c
              );
    pFVar6 = &::LOG_Static;
LAB_14eeeeebf:
    Logging::Private::BasicLog<6>(pFVar6,(FLogCategoryBase *)&LogTemp);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
LAB_14eeeeee3:
  local_1c8.bIsSet = false;
  pFVar2 = Errors::InvalidParams(&local_198,&local_1c8);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FIsPresenceLobby_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar2->Inner).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  uVar5 = pFVar2->ErrorCode;
LAB_14eeef163:
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = uVar5;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFIsPresenceLobby_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.Details.SharedReferenceCount.ReferenceController);
  if (local_1c8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// JoinLobby @ 14eef0940

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FJoinLobby> * __thiscall
UE::Online::FLobbiesCommon::JoinLobby
          (FLobbiesCommon *this,TOnlineAsyncOpHandle<UE::Online::FJoinLobby> *__return_storage_ptr__
          ,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FJoinLobby>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FJoinLobby>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"JoinLobby");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FJoinLobby>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FJoinLobby>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FJoinLobby> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FJoinLobby>::CreateSharedState(local_78.Object,&local_98);
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

// KickLobbyMember @ 14eef0c90

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FKickLobbyMember> * __thiscall
UE::Online::FLobbiesCommon::KickLobbyMember
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FKickLobbyMember> *__return_storage_ptr__,Params *param_1
          )

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FKickLobbyMember>,1> *pTVar8
  ;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FKickLobbyMember>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"KickLobbyMember");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FKickLobbyMember>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FKickLobbyMember>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FKickLobbyMember> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FKickLobbyMember>::CreateSharedState
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

// LeaveLobby @ 14eef0e50

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FLeaveLobby> * __thiscall
UE::Online::FLobbiesCommon::LeaveLobby
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FLeaveLobby> *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FLeaveLobby>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FLeaveLobby>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"LeaveLobby");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FLeaveLobby>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FLeaveLobby>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FLeaveLobby> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FLeaveLobby>::CreateSharedState(local_78.Object,&local_98);
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

// ModifyLobbyAttributes @ 14eef2000

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes> * __thiscall
UE::Online::FLobbiesCommon::ModifyLobbyAttributes
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyAttributes>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyAttributes>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"ModifyLobbyAttributes");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FModifyLobbyAttributes>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyAttributes>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyAttributes> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::CreateSharedState
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

// ModifyLobbyJoinPolicy @ 14eef21c0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FModifyLobbyJoinPolicy> * __thiscall
UE::Online::FLobbiesCommon::ModifyLobbyJoinPolicy
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FModifyLobbyJoinPolicy> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyJoinPolicy>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyJoinPolicy>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"ModifyLobbyJoinPolicy");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FModifyLobbyJoinPolicy>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyJoinPolicy>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyJoinPolicy> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::CreateSharedState
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

// ModifyLobbyMemberAttributes @ 14eef2380

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes> * __thiscall
UE::Online::FLobbiesCommon::ModifyLobbyMemberAttributes
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyMemberAttributes>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyMemberAttributes>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"ModifyLobbyMemberAttributes");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FModifyLobbyMemberAttributes>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbyMemberAttributes>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FModifyLobbyMemberAttributes> *)0x0)
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::CreateSharedState
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

// ModifyLobbySchema @ 14eef2540

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FModifyLobbySchema> * __thiscall
UE::Online::FLobbiesCommon::ModifyLobbySchema
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FModifyLobbySchema> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbySchema>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FModifyLobbySchema>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"ModifyLobbySchema");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FModifyLobbySchema>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FModifyLobbySchema>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FModifyLobbySchema> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::CreateSharedState
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

// OnLobbyAttributesChanged @ 14eef2d20

TOnlineEvent<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyAttributesChanged(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyAttributesChanged;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>)in_RDX;
}

// OnLobbyInvitationAdded @ 14eef2d40

TOnlineEvent<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyInvitationAdded(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyInvitationAdded;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>)in_RDX;
}

// OnLobbyInvitationRemoved @ 14eef2d60

TOnlineEvent<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyInvitationRemoved(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyInvitationRemoved;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>)in_RDX;
}

// OnLobbyJoined @ 14eef2d80

TOnlineEvent<void___cdecl(UE::Online::FLobbyJoined_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyJoined(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyJoined_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
        *)&this->LobbyEvents;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyJoined_const_&)>)in_RDX;
}

// OnLobbyLeaderChanged @ 14eef2da0

TOnlineEvent<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyLeaderChanged(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyLeaderChanged;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>)in_RDX;
}

// OnLobbyLeft @ 14eef2dc0

TOnlineEvent<void___cdecl(UE::Online::FLobbyLeft_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyLeft(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyLeft;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyLeft_const_&)>)in_RDX;
}

// OnLobbyMemberAttributesChanged @ 14eef2de0

TOnlineEvent<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyMemberAttributesChanged(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyMemberAttributesChanged;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>)in_RDX;
}

// OnLobbyMemberJoined @ 14eef2e00

TOnlineEvent<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyMemberJoined(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyMemberJoined;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>)in_RDX;
}

// OnLobbyMemberLeft @ 14eef2e20

TOnlineEvent<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbyMemberLeft(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbyMemberLeft;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>)in_RDX;
}

// OnLobbySchemaChanged @ 14eef2e40

TOnlineEvent<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnLobbySchemaChanged(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnLobbySchemaChanged;
  return (TOnlineEvent<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>)in_RDX;
}

// OnUILobbyJoinRequested @ 14eef2f80

TOnlineEvent<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&)> __thiscall
UE::Online::FLobbiesCommon::OnUILobbyJoinRequested(FLobbiesCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&),FDefaultDelegateUserPolicy>
        *)&(this->LobbyEvents).OnUILobbyJoinRequested;
  return (TOnlineEvent<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&)>)in_RDX;
}

// PromoteLobbyMember @ 14eef78d0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FPromoteLobbyMember> * __thiscall
UE::Online::FLobbiesCommon::PromoteLobbyMember
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FPromoteLobbyMember> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FPromoteLobbyMember>,1>
  *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FPromoteLobbyMember>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"PromoteLobbyMember");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FPromoteLobbyMember>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FPromoteLobbyMember>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FPromoteLobbyMember> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::CreateSharedState
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

// RegisterCommands @ 14eefa7c0

void __thiscall UE::Online::FLobbiesCommon::RegisterCommands(FLobbiesCommon *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18;
  TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
  ***local_28;
  undefined8 **ppuStack_20;
  
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__0__flat______;
  puVar2 = (undefined8 *)0x0;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCreateLobby_Online_UE___23___QEAUParams_FCreateLobby_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309df48;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__8__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFFindLobbies_Online_UE___23___QEAUParams_FFindLobbies_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309df60;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__16__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFRestoreLobbies_Online_UE___23___QEAUParams_FRestoreLobbies_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309df78;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRestoreLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FRestoreLobbies::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRestoreLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FRestoreLobbies::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__24__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFJoinLobby_Online_UE___23___QEAUParams_FJoinLobby_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309df98;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__32__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFLeaveLobby_Online_UE___23___QEAUParams_FLeaveLobby_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309dfb0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__40__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFInviteLobbyMember_Online_UE___23___QEAUParams_FInviteLobbyMember_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309dfc8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__48__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFDeclineLobbyInvitation_Online_UE___23___QEAUParams_FDeclineLobbyInvitation_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309dff0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FDeclineLobbyInvitation>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FDeclineLobbyInvitation::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FDeclineLobbyInvitation>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FDeclineLobbyInvitation::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__56__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFKickLobbyMember_Online_UE___23___QEAUParams_FKickLobbyMember_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e020;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FKickLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FKickLobbyMember::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FKickLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FKickLobbyMember::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__64__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFPromoteLobbyMember_Online_UE___23___QEAUParams_FPromoteLobbyMember_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e040;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FPromoteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FPromoteLobbyMember::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FPromoteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FPromoteLobbyMember::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__72__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFModifyLobbySchema_Online_UE___23___QEAUParams_FModifyLobbySchema_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e068;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbySchema>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbySchema::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbySchema>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbySchema::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__80__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFModifyLobbyJoinPolicy_Online_UE___23___QEAUParams_FModifyLobbyJoinPolicy_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e090;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyJoinPolicy>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyJoinPolicy::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyJoinPolicy>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyJoinPolicy::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__88__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFModifyLobbyAttributes_Online_UE___23___QEAUParams_FModifyLobbyAttributes_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e0c0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__96__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFModifyLobbyMemberAttributes_Online_UE___23___QEAUParams_FModifyLobbyMemberAttributes_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e0f0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__104__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetPresenceLobby_Online_UE___23___QEAUParams_FGetPresenceLobby_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e128;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FGetPresenceLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FGetPresenceLobby::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FGetPresenceLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FGetPresenceLobby::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__112__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFIsPresenceLobby_Online_UE___23___QEAUParams_FIsPresenceLobby_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e150;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FIsPresenceLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FIsPresenceLobby::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FIsPresenceLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FIsPresenceLobby::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__120__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetJoinedLobbies_Online_UE___23___QEAUParams_FGetJoinedLobbies_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e170;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FGetJoinedLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FGetJoinedLobbies::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FGetJoinedLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FGetJoinedLobbies::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)_vcall__128__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetReceivedInvitations_Online_UE___23___QEAUParams_FGetReceivedInvitations_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e198;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FGetReceivedInvitations>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FGetReceivedInvitations::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineResult<UE::Online::FGetReceivedInvitations>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FGetReceivedInvitations::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
              ***)FunctionalTest;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFFunctionalTestLobbies_Online_UE___23___QEAUParams_FFunctionalTestLobbies_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    puVar2 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
        **)0x15309e438;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  local_res18 = puVar2;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFunctionalTestLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFunctionalTestLobbies::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFunctionalTestLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFunctionalTestLobbies::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  return;
}

// RestoreLobbies @ 14eefeb20

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FRestoreLobbies> * __thiscall
UE::Online::FLobbiesCommon::RestoreLobbies
          (FLobbiesCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FRestoreLobbies> *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRestoreLobbies>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRestoreLobbies>,1> local_98
  ;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"RestoreLobbies");
  pTVar6 = TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ILobbies> *)this,&local_88,(FString *)&local_98)
  ;
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FRestoreLobbies>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FRestoreLobbies>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FRestoreLobbies> *)0x0) {
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
  pTVar8 = TOnlineAsyncOp<UE::Online::FRestoreLobbies>::CreateSharedState(local_78.Object,&local_98)
  ;
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

