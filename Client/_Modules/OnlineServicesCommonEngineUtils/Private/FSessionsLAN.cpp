// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 15

// FSessionsLAN @ 14f004ae0

FSessionsLAN * __thiscall
UE::Online::FSessionsLAN::FSessionsLAN(FSessionsLAN *this,FOnlineServicesCommon *param_1)

{
  FSessionsCommon::FSessionsCommon((FSessionsCommon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UE__Online__ISessions__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  (this->HostedLANSession).Object = (FSessionLAN *)0x0;
  (this->HostedLANSession).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  MakeShared<FLANSession,1>(&this->LANSessionManager);
  return this;
}

// ~FSessionsLAN @ 14f004f40

void __thiscall UE::Online::FSessionsLAN::~FSessionsLAN(FSessionsLAN *this)

{
  TSharedPtr<UE::Online::FSessionLAN,1> *pTVar1;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__UE__Online__ISessions__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  pTVar1 = &this->HostedLANSession;
  if (pTVar1->Object != (FSessionLAN *)0x0) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<UE::Online::FSessionLAN,1> *)&local_18) {
      pTVar1->Object = (FSessionLAN *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->HostedLANSession).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    FLANSession::StopLANSession((this->LANSessionManager).Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LANSessionManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostedLANSession).SharedReferenceCount.ReferenceController);
  FSessionsCommon::~FSessionsCommon((FSessionsCommon *)this);
  return;
}

// AddLANSession @ 14f005540

TSharedRef<UE::Online::FSessionLAN,1> * __thiscall
UE::Online::FSessionsLAN::AddLANSession
          (FSessionsLAN *this,TSharedRef<UE::Online::FSessionLAN,1> *__return_storage_ptr__,
          Params *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FSessionLAN *pFVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  EOnlineServices EVar6;
  bool bVar7;
  FOnlineIdRegistryRegistry *this_00;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar8;
  TSharedRef<UE::Online::FSessionLAN,1> *pTVar9;
  FGuid *this_01;
  longlong *plVar10;
  undefined4 local_res8;
  FString local_58;
  TSharedRef<UE::Online::FSessionCommon,1> local_48;
  FGuid local_38;
  
  MakeShared<UE::Online::FSessionLAN,1>(__return_storage_ptr__);
  *(uint *)&__return_storage_ptr__->Object->_padding_ = (param_1->LocalAccountId).Value;
  *(bool *)((longlong)&__return_storage_ptr__->Object->_padding_ + 2) =
       param_1->bAllowSanctionedPlayers;
  *(bool *)((longlong)&__return_storage_ptr__->Object->_padding_ + 3) = param_1->bAntiCheatProtected
  ;
  *(undefined1 *)((longlong)&__return_storage_ptr__->Object->_padding_ + 1) = 0;
  *(undefined1 *)&__return_storage_ptr__->Object->_padding_ = 1;
  EVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x98))();
  this_00 = FOnlineIdRegistryRegistry::Get();
  pIVar8 = FOnlineIdRegistryRegistry::GetSessionIdRegistry(this_00,EVar6);
  if ((pIVar8 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionIdRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommonEngineUtils\\Private\\Online\\SessionsLAN.cpp"
                         ,0x18,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<UE::Online::FSessionLAN,1> *)(*pcVar5)();
    return pTVar9;
  }
  this_01 = FGuid::NewGuid(&local_38);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FGuid::AppendString(this_01,&local_58,Digits);
  TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::FindOrAddHandle
            ((TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *)
             (pIVar8 + 1),(FString *)&local_res8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = local_res8;
  pFVar4 = __return_storage_ptr__->Object;
  plVar10 = &pFVar4->_padding_;
  if ((FString *)plVar10 != &param_1->SessionIdOverride) {
    iVar2 = (param_1->SessionIdOverride).Data.ArrayNum;
    piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
    iVar3 = *piVar1;
    _Src = (param_1->SessionIdOverride).Data.AllocatorInstance.Data;
    *(int *)&pFVar4->_padding_ = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,iVar3,(ForAnyElementType *)plVar10,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((void *)*plVar10,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar4->_padding_ = (longlong)(param_1->SessionSettings).SchemaName;
  *(uint *)&pFVar4->_padding_ = (param_1->SessionSettings).NumMaxConnections;
  *(ESessionJoinPolicy *)((longlong)&pFVar4->_padding_ + 4) = (param_1->SessionSettings).JoinPolicy;
  *(bool *)((longlong)&pFVar4->_padding_ + 5) = (param_1->SessionSettings).bAllowNewMembers;
  TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              (TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
               *)&(param_1->SessionSettings).CustomSettings);
  local_48.Object = (FSessionCommon *)__return_storage_ptr__->Object;
  bVar7 = param_1->bPresenceEnabled;
  local_48.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSessionsCommon::AddSessionWithReferences
            ((FSessionsCommon *)this,&local_48,&param_1->SessionName,&param_1->LocalAccountId,bVar7)
  ;
  return __return_storage_ptr__;
}

// CreateSessionImpl @ 14f005dd0

/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> * __thiscall
UE::Online::FSessionsLAN::CreateSessionImpl
          (FSessionsLAN *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *__return_storage_ptr__,
          Params *param_1)

{
  code *pcVar1;
  IOnlineErrorDetails *pIVar2;
  FSharedReferencer<1> FVar3;
  FOnlineError *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FEvent *pFVar8;
  TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *pTVar9;
  TSharedRef<UE::Online::FSessionLAN,1> *pTVar10;
  FFutureState *this_00;
  TReferenceControllerBase<1> *pTVar11;
  FSessionLAN *local_98;
  FSharedReferencer<1> local_90;
  FString local_88;
  TSharedRef<UE::Online::FSessionLAN,1> local_78;
  TSharedRef<UE::Online::FSessionLAN,1> local_68;
  TValueOrError<void,UE::Online::FOnlineError> local_58;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = ::operator_new(0xc0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    this_00 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined8 *)__return_storage_ptr__ = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFCreateSession_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5]._padding_ = 0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6]._padding_ = 0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7]._padding_ = 0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar7 + 1),4000);
    pTVar7[4]._padding_ = 0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00 = (FFutureState *)(pTVar7 + 1);
    pTVar7[7]._padding_ = (longlong)pFVar8;
    *(undefined1 *)&pTVar7[7].SharedReferenceCount = 0;
    if ((this_00 == (FFutureState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
      return pTVar9;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if ((this_00 == (FFutureState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
      return pTVar9;
    }
    *(FFutureState **)__return_storage_ptr__ = this_00;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar11 = pTVar7;
  }
  if ((param_1->SessionSettings).JoinPolicy == Public) {
    TryHostLANSession(this,&local_58);
    FVar5.ReferenceController =
         local_58.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController;
    pFVar4 = local_58.Error.TypedValue.Inner.Object;
    FVar3.ReferenceController =
         local_58.Error.TypedValue.Details.SharedReferenceCount.ReferenceController;
    pIVar2 = local_58.Error.TypedValue.Details.Object;
    if (local_58.Error.bIsSet != false) {
      local_58.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_58.Error.TypedValue.Details.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_58.Error.TypedValue.Details.Object = (IOnlineErrorDetails *)0x0;
      local_58.Error.TypedValue.Inner.Object = (FOnlineError *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_58.Error.bIsSet = false;
      if (this_00 == (FFutureState *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
          return pTVar9;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
          return pTVar9;
        }
      }
      if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
        return pTVar9;
      }
      this_00[1]._padding_ = local_58.Error.TypedValue.ErrorCode;
      this_00[1].Mutex.CriticalSection.Opaque1[0] =
           &___7__TOnlineResult_UFCreateSession_Online_UE___Online_UE__6B_;
      *(IOnlineErrorDetails **)this_00[1].Mutex.CriticalSection.Opaque2 = pIVar2;
      this_00[1].Mutex.CriticalSection.Opaque3[0] = FVar3.ReferenceController;
      this_00[1].Mutex.CriticalSection.Opaque3[1] = pFVar4;
      this_00[1].Mutex.CriticalSection.Opaque3[2] = FVar5.ReferenceController;
      *(undefined1 *)&this_00[1].CompletionCallback = 1;
      FFutureState::MarkComplete(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (local_58.Error.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.Error.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      goto LAB_14f00619b;
    }
    if (5 < (byte)LogOnlineServices._0_1_) {
      ::FName::ToString(&param_1->SessionName,&local_88);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pTVar10 = AddLANSession(this,&local_78,param_1);
    local_90.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_98 = pTVar10->Object;
    if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->HostedLANSession != (TSharedPtr<UE::Online::FSessionLAN,1> *)&local_98) {
      (this->HostedLANSession).Object = local_98;
      local_98 = (FSessionLAN *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->HostedLANSession).SharedReferenceCount,&local_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.ReferenceController);
  }
  else {
    AddLANSession(this,&local_68,param_1);
    local_78.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (this_00 == (FFutureState *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
      return pTVar9;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
      return pTVar9;
    }
  }
  if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0xcd,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
    return pTVar9;
  }
  *(undefined1 *)&this_00[1].CompletionCallback = 0;
  this_00[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TOnlineResult_UFCreateSession_Online_UE___Online_UE__6B_;
  FFutureState::MarkComplete(this_00);
LAB_14f00619b:
  if (((this_00 != (FFutureState *)0x0) && (this_00->bComplete == (TAtomic<bool>)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar1)();
    return pTVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// FindLANSessions @ 14f006c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::FSessionsLAN::FindLANSessions
          (FSessionsLAN *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  FLANSession *pFVar1;
  ISessions *pIVar2;
  TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *this_00;
  FOnlineError *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  TSharedRef<UE::Online::ISessions,1> *pTVar10;
  ulong64 uVar11;
  TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *pTVar12;
  FOnlineError *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uStackX_c;
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  undefined1 local_190 [8];
  FDelegateAllocation local_188;
  FNboSerializeToBuffer local_178;
  code *local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  bool local_150;
  TSharedRef<UE::Online::ISessions,1> local_148;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  FDelegateAllocation *local_108;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  TSharedRef<UE::Online::ISessions,1> local_e0;
  TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> local_d0;
  TOptional<UE::Online::FOnlineError> local_b8;
  TValueOrError<void,UE::Online::FOnlineError> local_88;
  FOnlineError local_58;
  
  pFVar1 = (this->LANSessionManager).Object;
  bVar6 = false;
  bVar5 = false;
  bVar7 = false;
  iVar8 = rand();
  *(char *)&pFVar1->LanNonce = (char)iVar8;
  iVar8 = rand();
  *(char *)((longlong)&pFVar1->LanNonce + 1) = (char)iVar8;
  iVar8 = rand();
  *(char *)((longlong)&pFVar1->LanNonce + 2) = (char)iVar8;
  iVar8 = rand();
  *(char *)((longlong)&pFVar1->LanNonce + 3) = (char)iVar8;
  iVar8 = rand();
  *(char *)((longlong)&pFVar1->LanNonce + 4) = (char)iVar8;
  iVar8 = rand();
  *(char *)((longlong)&pFVar1->LanNonce + 5) = (char)iVar8;
  iVar8 = rand();
  *(char *)((longlong)&pFVar1->LanNonce + 6) = (char)iVar8;
  iVar8 = rand();
  *(char *)((longlong)&pFVar1->LanNonce + 7) = (char)iVar8;
  local_190 = (undefined1  [8])0x0;
  local_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_188.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
             (FWriteAccessScope *)&local_120);
  local_108 = &local_188;
  puVar9 = Core::Private::DelegateAllocate(0x38,&local_188);
  if (puVar9 == (undefined8 *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uStack_154 = local_148.SharedReferenceCount.ReferenceController._4_4_;
    local_160 = OnValidResponsePacketReceived;
    uStack_158 = 0;
    pTVar10 = TOnlineComponent<UE::Online::ISessions>::AsShared
                        ((TOnlineComponent<UE::Online::ISessions> *)this,&local_e0);
    pTVar14 = (pTVar10->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar10->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(uint *)(puVar9 + 1) = param_1->Value;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar11;
    *puVar9 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
    ;
    puVar9[3] = pIVar2;
    puVar9[4] = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar7 = true;
    puVar9[5] = local_160;
    puVar9[6] = CONCAT44(uStack_154,uStack_158);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
  bVar5 = false;
  bVar7 = false;
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  local_1a8 = (undefined1  [8])0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_100);
  local_e8 = &local_1a0;
  puVar9 = Core::Private::DelegateAllocate(0x38,&local_1a0);
  if (puVar9 == (undefined8 *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uStack_154 = local_148.SharedReferenceCount.ReferenceController._4_4_;
    local_160 = OnLANSearchTimeout;
    uStack_158 = 0;
    pTVar10 = TOnlineComponent<UE::Online::ISessions>::AsShared
                        ((TOnlineComponent<UE::Online::ISessions> *)this,&local_148);
    pTVar14 = (pTVar10->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar10->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar7 = true;
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(uint *)(puVar9 + 1) = param_1->Value;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar11;
    *puVar9 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
    ;
    puVar9[3] = pIVar2;
    puVar9[4] = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar9[5] = local_160;
    puVar9[6] = CONCAT44(uStack_154,uStack_158);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_148.SharedReferenceCount.ReferenceController._4_4_,
                        local_148.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayMax = 0;
  local_178.NumBytes = 0;
  local_178.bHasOverflowed = false;
  local_178.Data.ArrayNum = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x400,(ForAnyElementType *)&local_178,0,&local_178.Data.ArrayMax);
  iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x400,(ForAnyElementType *)&local_178,&local_178.Data.ArrayNum,
                     &local_178.Data.ArrayMax);
  memset(local_178.Data.AllocatorInstance.Data + iVar8,0,0x400);
  pFVar1 = (this->LANSessionManager).Object;
  FLANSession::CreateClientQueryPacket(pFVar1,&local_178,pFVar1->LanNonce);
  bVar7 = FLANSession::Search((this->LANSessionManager).Object,&local_178,
                              (TDelegate<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>
                               *)local_190,
                              (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a8)
  ;
  if (bVar7) {
    if (5 < (byte)LogOnlineServices._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  else {
    if (2 < (byte)LogOnlineServices._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    pFVar1 = (this->LANSessionManager).Object;
    if (pFVar1->LanBeaconState == Searching) {
      FLANSession::StopLANSession(pFVar1);
    }
    pTVar12 = TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>_>
              ::FindAndRemoveChecked
                        ((TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>_>
                          *)&this->_padding_,&local_d0,param_1);
    local_b8.bIsSet = false;
    pFVar13 = Errors::RequestFailure(&local_58,&local_b8);
    if ((pTVar12->State).Object ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pTVar12->State).Object ==
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    this_00 = (pTVar12->State).Object;
    if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0xcd,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined ***)(this_00->Result).Pad =
         &___7__TResult_UResult_FFindSessions_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)((this_00->Result).Pad + 8) = (pFVar13->Details).Object;
    *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 0x10) =
         (pFVar13->Details).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar13->Inner).Object;
    (pFVar13->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (pFVar13->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)((this_00->Result).Pad + 0x18) = pFVar3;
    *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 0x20) =
         (pFVar13->Inner).SharedReferenceCount.ReferenceController;
    (pFVar13->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar13->Inner).Object = (FOnlineError *)0x0;
    *(ulong64 *)((this_00->Result).Pad + 0x28) = pFVar13->ErrorCode;
    *(undefined ***)(this_00->Result).Pad =
         &___7__TOnlineResult_UFFindSessions_Online_UE___Online_UE__6B_;
    (this_00->Result).Pad[0x30] = '\x01';
    FFutureState::MarkComplete((FFutureState *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Details.SharedReferenceCount.ReferenceController);
    if (local_b8.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    if ((local_d0.State.Object !=
         (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) &&
       ((local_d0.State.Object)->field_0x68 == '\0')) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.State.SharedReferenceCount.ReferenceController);
    if ((this->HostedLANSession).Object != (FSessionLAN *)0x0) {
      TryHostLANSession(this,&local_88);
      if (local_88.Error.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Error.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
    }
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_160);
  if ((local_1a0.DelegateSize != 0) &&
     (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1a0,0,0,0x10);
    local_1a0.DelegateSize = 0;
  }
  if (local_150 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_154,uStack_158),
               (FDestructionSentinel *)&local_160);
  }
  if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
             (FWriteAccessScope *)&local_138);
  if ((local_188.DelegateSize != 0) &&
     (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_188.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_188,0,0,0x10);
    local_188.DelegateSize = 0;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_188.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_190);
  return;
}

// FindSessionsImpl @ 14f007470

/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> * __thiscall
UE::Online::FSessionsLAN::FindSessionsImpl
          (FSessionsLAN *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *__return_storage_ptr__,
          Params *param_1)

{
  FSessionLAN *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FEvent *pFVar7;
  TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *pTVar8;
  TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_&&>
  local_res8;
  undefined1 local_res18 [16];
  Params *local_78;
  TReferenceControllerBase<1> **local_70;
  FString local_68;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48;
  
  pTVar6 = ::operator_new(0xc0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = (TReferenceControllerBase<1> *)&DAT_00000010;
    local_50 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFFindSessions_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 1),4000);
    pTVar6[4]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar7 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    local_58 = pTVar6 + 1;
    pTVar6[7]._padding_ = (longlong)pFVar7;
    *(undefined1 *)&pTVar6[7].SharedReferenceCount = 0;
    if ((local_58 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
      return pTVar8;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_50 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  local_48 = 1;
  if ((local_58 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
    return pTVar8;
  }
  *(TReferenceControllerBase<1> **)__return_storage_ptr__ = local_58;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = local_50;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar12 = (param_1->LocalAccountId).Value;
  uVar13 = uVar12 & 0xffffff;
  uVar14 = (uVar12 >> 0x18) - uVar13 ^ uVar13 >> 0xd;
  uVar12 = (-0x61c88647 - uVar14) - uVar13 ^ uVar14 << 8;
  uVar13 = (uVar13 - uVar12) - uVar14 ^ uVar12 >> 0xd;
  uVar14 = (uVar14 - uVar13) - uVar12 ^ uVar13 >> 0xc;
  uVar12 = (uVar12 - uVar14) - uVar13 ^ uVar14 << 0x10;
  uVar13 = (uVar13 - uVar12) - uVar14 ^ uVar12 >> 5;
  uVar14 = (uVar14 - uVar13) - uVar12 ^ uVar13 >> 3;
  uVar12 = (uVar12 - uVar14) - uVar13 ^ uVar14 << 10;
  pTVar9 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                     ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->_padding_,(uVar13 - uVar12) - uVar14 ^ uVar12 >> 0xf,
                      &param_1->LocalAccountId);
  pTVar9->ArrayNum = 0;
  if (pTVar9->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
  }
  local_70 = &local_58;
  local_78 = param_1;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_&&>_>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_78);
  pFVar1 = (this->HostedLANSession).Object;
  if (pFVar1 != (FSessionLAN *)0x0) {
    if (5 < (byte)LogOnlineServices._0_1_) {
      pTVar10 = (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)
                (**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_res8.Value);
      Online::ToString(&local_68,pTVar10);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = (param_1->LocalAccountId).Value;
    uVar13 = uVar12 & 0xffffff;
    uVar15 = (uVar12 >> 0x18) - uVar13 ^ uVar13 >> 0xd;
    uVar14 = (-0x61c88647 - uVar15) - uVar13 ^ uVar15 << 8;
    uVar12 = (uVar13 - uVar14) - uVar15 ^ uVar14 >> 0xd;
    uVar15 = (uVar15 - uVar12) - uVar14 ^ uVar12 >> 0xc;
    uVar13 = (uVar14 - uVar15) - uVar12 ^ uVar15 << 0x10;
    uVar12 = (uVar12 - uVar13) - uVar15 ^ uVar13 >> 5;
    uVar14 = (uVar15 - uVar12) - uVar13 ^ uVar12 >> 3;
    uVar13 = (uVar13 - uVar14) - uVar12 ^ uVar14 << 10;
    pTVar9 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
             ::
             FindOrAddImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                       ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->_padding_,(uVar12 - uVar13) - uVar14 ^ uVar13 >> 0xf,
                        &param_1->LocalAccountId);
    if (((this->HostedLANSession).Object == (FSessionLAN *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
      return pTVar8;
    }
    pFVar1 = (this->HostedLANSession).Object;
    pFVar11 = (FScriptContainerElement *)(**(code **)(pFVar1->_padding_ + 8))(pFVar1,local_res18);
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    if (((pFVar2 <= pFVar11) && (pFVar11 < pFVar2 + (longlong)pTVar9->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = pTVar9->ArrayNum;
    if (iVar5 == pTVar9->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
    }
    pTVar9->ArrayNum = iVar5 + 1;
    *(undefined4 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 4) = *(undefined4 *)pFVar11
    ;
  }
  FindLANSessions(this,&param_1->LocalAccountId);
  if (((local_58 != (TReferenceControllerBase<1> *)0x0) &&
      (*(char *)&local_58[6].SharedReferenceCount == '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
    return pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  return __return_storage_ptr__;
}

// JoinSessionImpl @ 14f008670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> * __thiscall
UE::Online::FSessionsLAN::JoinSessionImpl
          (FSessionsLAN *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  EOnlineServices EVar6;
  bool bVar7;
  char cVar8;
  TReferenceControllerBase<1> *pTVar9;
  FEvent *pFVar10;
  TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *pTVar11;
  FOnlineIdRegistryRegistry *this_01;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar12;
  FString *pFVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  FFutureState *this_02;
  uint uVar19;
  undefined1 auStack_228 [32];
  uint local_1f8 [2];
  uint local_1f0;
  undefined1 local_1ec [4];
  undefined1 local_1e8 [8];
  TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *local_1e0;
  FDestructionSentinel local_1d8;
  FString local_1c0;
  FString local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  void *local_190;
  void *local_188;
  void *local_180;
  longlong local_178;
  byte local_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  local_1e0 = __return_storage_ptr__;
  pTVar9 = ::operator_new(0xc0);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    this_02 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined8 *)__return_storage_ptr__ = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFJoinSession_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[4]._padding_ = 0;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[7]._padding_ = 0;
    pTVar9[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar9 + 1),4000);
    pTVar9[4]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar10 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar9[7]._padding_ = (longlong)pFVar10;
    *(undefined1 *)&pTVar9[7].SharedReferenceCount = 0;
    this_02 = (FFutureState *)(pTVar9 + 1);
    if ((this_02 == (FFutureState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if ((this_02 == (FFutureState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    *(FFutureState **)__return_storage_ptr__ = this_02;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar9;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pTVar18 = pTVar9;
  }
  local_1f8[0] = (param_1->SessionId).Value;
  (**(code **)(this->_padding_ + 0x18))(this,local_1a0,local_1f8);
  uVar16 = (ulonglong)local_170;
  if ((1 < uVar16) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar16 + 4) == '\0') {
    uVar16 = (ulonglong)local_170;
    if ((1 < uVar16) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar16 + 4) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    if ((local_170 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    bVar5 = param_1->bPresenceEnabled;
    puVar14 = (uint *)(**(code **)(*local_198 + 8))(local_198,local_1e8);
    FSessionsCommon::AddSessionReferences
              ((FSessionsCommon *)this,(TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)*puVar14
               ,&param_1->SessionName,&param_1->LocalAccountId,bVar5);
    if (this_02 == (FFutureState *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
        return pTVar11;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
        return pTVar11;
      }
    }
    if ((this_02->bComplete != (TAtomic<bool>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    *(undefined1 *)&this_02[1].CompletionCallback = 0;
    this_02[1].Mutex.CriticalSection.Opaque1[0] =
         &___7__TOnlineResult_UFJoinSession_Online_UE___Online_UE__6B_;
    FFutureState::MarkComplete(this_02);
    local_1f0 = (param_1->LocalAccountId).Value;
    (**(code **)(*local_198 + 8))(local_198,local_1ec);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this->_padding_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_1d8);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar5 = false;
    uVar15 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar15) {
      lVar17 = (longlong)(int)uVar15 << 4;
      bVar5 = false;
      do {
        uVar19 = 0;
        if ((int)uVar15 < (this_00->InvocationList).ArrayNum) {
          uVar19 = ~uVar15 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
          return pTVar11;
        }
        pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar2 + lVar17 + 8) == 0) ||
            (plVar3 = *(longlong **)(pFVar2 + lVar17), plVar3 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
          bVar5 = true;
        }
        lVar17 = lVar17 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    if (local_1d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
    }
    if ((1 < local_170) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_170])(&local_198);
    if (((this_02 != (FFutureState *)0x0) && (this_02->bComplete == (TAtomic<bool>)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    return local_1e0;
  }
  EVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x98))();
  this_01 = FOnlineIdRegistryRegistry::Get();
  pIVar12 = FOnlineIdRegistryRegistry::GetSessionIdRegistry(this_01,EVar6);
  if ((pIVar12 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionIdRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommonEngineUtils\\Private\\Online\\SessionsLAN.cpp"
                         ,0x18,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  pFVar13 = TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::FindIdValue
                      ((TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *)
                       (pIVar12 + 1),&local_1c0,&param_1->SessionId);
  iVar1 = (pFVar13->Data).ArrayNum;
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if ((1 < iVar1) || ((byte)LogOnlineServices._0_1_ < 3)) goto LAB_14f008986;
  Online::ToLogString(&local_1b0,&param_1->SessionId);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_58 = Core::Private::GetConvertedLength
                       ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsLAN::JoinSessionImpl",0x29);
  uVar15 = local_58 + 1;
  uVar19 = uVar15;
  if (uVar15 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar19 = 0;
      goto LAB_14f008901;
    }
  }
  else {
LAB_14f008901:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar19,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_60,uVar15,(uchar *)"UE::Online::FSessionsLAN::JoinSessionImpl",0x2a);
  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
LAB_14f008986:
  uVar16 = (ulonglong)local_170;
  if ((1 < uVar16) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar16 + 4) == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                         ,0x8c,
                         L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  if ((local_170 != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  if (this_02 == (FFutureState *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
      return pTVar11;
    }
  }
  if ((this_02->bComplete != (TAtomic<bool>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0xcd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  this_02[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TResult_UResult_FJoinSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(longlong **)this_02[1].Mutex.CriticalSection.Opaque2 = local_198;
  this_02[1].Mutex.CriticalSection.Opaque3[0] = local_190;
  if (local_190 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)local_190 + 8) = *(int *)((longlong)local_190 + 8) + 1;
    UNLOCK();
  }
  this_02[1].Mutex.CriticalSection.Opaque3[1] = local_188;
  this_02[1].Mutex.CriticalSection.Opaque3[2] = local_180;
  if (local_180 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)local_180 + 8) = *(int *)((longlong)local_180 + 8) + 1;
    UNLOCK();
  }
  this_02[1]._padding_ = local_178;
  *(undefined1 *)&this_02[1].CompletionCallback = 1;
  this_02[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TOnlineResult_UFJoinSession_Online_UE___Online_UE__6B_;
  FFutureState::MarkComplete(this_02);
  if ((1 < local_170) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_170])(&local_198);
  if (((this_02 != (FFutureState *)0x0) && (this_02->bComplete == (TAtomic<bool>)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return __return_storage_ptr__;
}

// LeaveSessionImpl @ 14f008e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> * __thiscall
UE::Online::FSessionsLAN::LeaveSessionImpl
          (FSessionsLAN *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  FEvent *pFVar10;
  TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *pTVar11;
  uint *puVar12;
  longlong lVar13;
  FFutureState *this_01;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  uint local_b8;
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  FName local_ac;
  TReferenceControllerBase<1> *local_a0;
  TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *local_98;
  FDestructionSentinel local_90;
  undefined1 local_78 [8];
  longlong *local_70;
  TReferenceControllerBase<1> *local_68;
  void *local_60;
  void *local_58;
  longlong local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_98 = __return_storage_ptr__;
  pTVar9 = ::operator_new(0xc0);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    this_01 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined8 *)__return_storage_ptr__ = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFLeaveSession_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[4]._padding_ = 0;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[7]._padding_ = 0;
    pTVar9[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar9 + 1),4000);
    pTVar9[4]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar10 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_01 = (FFutureState *)(pTVar9 + 1);
    pTVar9[7]._padding_ = (longlong)pFVar10;
    *(undefined1 *)&pTVar9[7].SharedReferenceCount = 0;
    if ((this_01 == (FFutureState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if ((this_01 == (FFutureState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    *(FFutureState **)__return_storage_ptr__ = this_01;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar9;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ac = param_1->SessionName;
  (**(code **)(this->_padding_ + 8))(this,local_78,&local_ac);
  uVar15 = (ulonglong)local_48;
  if ((1 < uVar15) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  uVar16 = (ulonglong)local_48;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FUpdatePresence::Result,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar15 + 4) == '\0') {
    if ((1 < uVar16) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar16) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x8c,
                           L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    if ((local_48 != 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    if (this_01 == (FFutureState *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
        return pTVar11;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
        return pTVar11;
      }
    }
    if ((this_01->bComplete != (TAtomic<bool>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    this_01[1].Mutex.CriticalSection.Opaque1[0] =
         &___7__TResult_UResult_FLeaveSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(longlong **)this_01[1].Mutex.CriticalSection.Opaque2 = local_70;
    this_01[1].Mutex.CriticalSection.Opaque3[0] = local_68;
    if (local_68 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01[1].Mutex.CriticalSection.Opaque3[1] = local_60;
    this_01[1].Mutex.CriticalSection.Opaque3[2] = local_58;
    if (local_58 != (void *)0x0) {
      LOCK();
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
      UNLOCK();
    }
    this_01[1]._padding_ = local_50;
    *(undefined1 *)&this_01[1].CompletionCallback = 1;
    this_01[1].Mutex.CriticalSection.Opaque1[0] =
         &___7__TOnlineResult_UFLeaveSession_Online_UE___Online_UE__6B_;
    FFutureState::MarkComplete(this_01);
  }
  else {
    if ((1 < uVar16) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FUpdatePresence::Result,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar16 + 4) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    if ((local_48 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    local_a0 = local_68;
    if (local_68 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar12 = (uint *)(**(code **)*local_70)(local_70,local_b4);
    if ((*puVar12 == (param_1->LocalAccountId).Value) &&
       (lVar13 = (**(code **)(*local_70 + 0x20))(local_70), *(char *)(lVar13 + 0xc) == '\0')) {
      StopLANSession(this);
    }
    puVar12 = (uint *)(**(code **)(*local_70 + 8))(local_70,local_b0);
    FSessionsCommon::ClearSessionReferences
              ((FSessionsCommon *)this,(TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)*puVar12
               ,&param_1->SessionName,&param_1->LocalAccountId);
    if (this_01 == (FFutureState *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
        return pTVar11;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
        return pTVar11;
      }
    }
    if ((this_01->bComplete != (TAtomic<bool>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
      return pTVar11;
    }
    *(undefined1 *)&this_01[1].CompletionCallback = 0;
    this_01[1].Mutex.CriticalSection.Opaque1[0] =
         &___7__TOnlineResult_UFLeaveSession_Online_UE___Online_UE__6B_;
    FFutureState::MarkComplete(this_01);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this->_padding_;
    local_b8 = (param_1->LocalAccountId).Value;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_90);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar5 = false;
    uVar14 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar14) {
      lVar17 = (longlong)(int)uVar14;
      lVar13 = lVar17 << 4;
      bVar5 = false;
      do {
        iVar1 = (this_00->InvocationList).ArrayNum;
        uVar8 = 0;
        if ((int)uVar14 < iVar1) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_c8 = lVar17, local_c0 = (longlong)iVar1,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
          return pTVar11;
        }
        pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar2 + lVar13 + 8) == 0) ||
            (plVar3 = *(longlong **)(pFVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar17 = lVar17 + -1;
        lVar13 = lVar13 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    __return_storage_ptr__ = local_98;
  }
  if ((1 < local_48) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_48])(&local_70);
  if (((this_01 != (FFutureState *)0x0) && (this_01->bComplete == (TAtomic<bool>)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// OnLANSearchTimeout @ 14f0094d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::FSessionsLAN::OnLANSearchTimeout
          (FSessionsLAN *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> param_1)

{
  FLANSession *this_00;
  void *_Src;
  TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *this_01;
  code *pcVar1;
  bool bVar2;
  TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *pTVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res10 [2];
  ForAnyElementType local_78;
  undefined8 local_70;
  TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> local_68;
  TValueOrError<void,UE::Online::FOnlineError> local_50;
  
  this_00 = (this->LANSessionManager).Object;
  local_res10[0].Value = param_1.Value;
  if (this_00->LanBeaconState == Searching) {
    FLANSession::StopLANSession(this_00);
  }
  uVar9 = param_1.Value & 0xffffff;
  uVar5 = (param_1.Value >> 0x18) - uVar9 ^ uVar9 >> 0xd;
  puVar7 = (uint *)0x0;
  uVar4 = (-0x61c88647 - uVar5) - uVar9 ^ uVar5 << 8;
  uVar9 = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 0xc;
  uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 << 0x10;
  uVar9 = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 5;
  uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 3;
  uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 << 10;
  puVar8 = puVar7;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar6 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar6 = &this->_padding_;
    }
    uVar4 = *(uint *)((longlong)plVar6 +
                     (ulonglong)
                     ((int)this->_padding_ - 1U & ((uVar9 - uVar4) - uVar5 ^ uVar4 >> 0xf)) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar4 * 0x20 + this->_padding_);
        if (*puVar8 == param_1.Value) {
          if (puVar8 != (uint *)0x0) goto LAB_14f009613;
          break;
        }
        uVar4 = puVar8[6];
        puVar8 = puVar7;
      } while (uVar4 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14f009613:
  if (5 < (byte)LogOnlineServices._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  pTVar3 = TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>_>
           ::FindAndRemoveChecked
                     ((TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>_>
                       *)&this->_padding_,&local_68,local_res10);
  uVar4 = puVar8[4];
  _Src = *(void **)(puVar8 + 2);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = CONCAT44(local_70._4_4_,uVar4);
  if (uVar4 == 0) {
    local_70 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,0,&local_78,uVar4,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)(int)uVar4 << 2);
  }
  if ((pTVar3->State).Object ==
      (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((pTVar3->State).Object ==
         (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = (pTVar3->State).Object;
  if ((*(TAtomic<bool> *)&this_01->field_0x68 != (TAtomic<bool>)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0xcd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined ***)(this_01->Result).Pad =
       &___7__TResult_UResult_FFindSessions_Online_UE__VFOnlineError_34__Online_UE__6B_;
  (this_01->Result).Pad[8] = '\0';
  (this_01->Result).Pad[9] = '\0';
  (this_01->Result).Pad[10] = '\0';
  (this_01->Result).Pad[0xb] = '\0';
  (this_01->Result).Pad[0xc] = '\0';
  (this_01->Result).Pad[0xd] = '\0';
  (this_01->Result).Pad[0xe] = '\0';
  (this_01->Result).Pad[0xf] = '\0';
  *(FScriptContainerElement **)((this_01->Result).Pad + 8) = local_78.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((this_01->Result).Pad + 0x10) = (undefined4)local_70;
  *(undefined4 *)((this_01->Result).Pad + 0x14) = local_70._4_4_;
  local_70 = 0;
  (this_01->Result).Pad[0x30] = '\0';
  *(undefined ***)(this_01->Result).Pad =
       &___7__TOnlineResult_UFFindSessions_Online_UE___Online_UE__6B_;
  FFutureState::MarkComplete((FFutureState *)this_01);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (((local_68.State.Object !=
        (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) &&
      ((local_68.State.Object)->field_0x68 == '\0')) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.State.SharedReferenceCount.ReferenceController);
  if (((this->HostedLANSession).Object != (FSessionLAN *)0x0) &&
     (TryHostLANSession(this,&local_50), local_50.Error.bIsSet != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Error.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnValidQueryPacketReceived @ 14f009840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::FSessionsLAN::OnValidQueryPacketReceived
          (FSessionsLAN *this,uchar *param_1,int param_2,ulong64 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  FNboSerializeToBuffer local_b8;
  longlong *local_a0;
  int iStack_98;
  uint uStack_94;
  longlong *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  plVar1 = &this->_padding_;
  iStack_98 = 0;
  iVar7 = (int)this->_padding_;
  plVar2 = &this->_padding_;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar7 != 0) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = plVar1;
    }
    uVar11 = (uint)*plVar12;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14f0098ed;
      uVar11 = *(uint *)((longlong)plVar12 + lVar8 * 4 + 4);
    }
    uStack_94 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_70 = (int)lVar8;
    iStack_84 = local_80 + -1 + local_70;
    if (iVar7 < iStack_84) {
      iStack_84 = iVar7;
    }
  }
LAB_14f0098ed:
  uVar11 = (uint)this->_padding_;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_78 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uStack_88 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = plVar2;
  local_90 = plVar1;
  iStack_7c = iStack_84;
  local_68 = plVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar11 < 0) || (iVar7 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = (uint)this->_padding_;
  if (uVar11 != uVar4) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = plVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14f0099f0;
      uVar11 = *(uint *)((longlong)plVar12 + lVar8 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14f0099f0:
  while( true ) {
    plVar12 = local_68;
    if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) && (plVar12 == plVar2))
    break;
    lVar8 = *plVar12 + (longlong)TStack_60.CurrentBitIndex * 0x20;
    if (*(char *)(*(longlong *)(lVar8 + 8) + 0x3c) == '\0') {
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayMax = 0;
      local_b8.NumBytes = 0;
      local_b8.bHasOverflowed = false;
      local_b8.Data.ArrayNum = 0;
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x400,(ForAnyElementType *)&local_b8,0,&local_b8.Data.ArrayMax);
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x400,(ForAnyElementType *)&local_b8,&local_b8.Data.ArrayNum,
                         &local_b8.Data.ArrayMax);
      memset(local_b8.Data.AllocatorInstance.Data + iVar7,0,0x400);
      FLANSession::CreateHostResponsePacket((this->LANSessionManager).Object,&local_b8,param_3);
      (**(code **)(this->_padding_ + 0x1d8))(this,&local_b8,*(undefined8 *)(lVar8 + 8));
      if (local_b8.bHasOverflowed == false) {
        FLANSession::BroadcastPacket
                  ((this->LANSessionManager).Object,(uchar *)local_b8.Data.AllocatorInstance.Data,
                   local_b8.NumBytes);
      }
      else if (2 < (byte)LogOnlineServices._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnValidResponsePacketReceived @ 14f009b60

void __thiscall
UE::Online::FSessionsLAN::OnValidResponsePacketReceived
          (FSessionsLAN *this,uchar *param_1,int param_2,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> param_3)

{
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res20 [2];
  TSharedRef<UE::Online::FSessionLAN,1> local_38;
  uchar *local_28;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  local_res20[0].Value = param_3.Value;
  MakeShared<UE::Online::FSessionLAN,1>(&local_38);
  local_1c = 0;
  local_18 = 0;
  local_28 = param_1;
  local_20 = param_2;
  (**(code **)(this->_padding_ + 0x1e0))(this,&local_28,local_38.Object);
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSessionsCommon::AddSearchResult
            ((FSessionsCommon *)this,(TSharedRef<UE::Online::FSessionCommon,1> *)&local_38,
             local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// StopLANSession @ 14f00a0c0

void __thiscall UE::Online::FSessionsLAN::StopLANSession(FSessionsLAN *this)

{
  TSharedPtr<UE::Online::FSessionLAN,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->HostedLANSession;
  if (pTVar1->Object == (FSessionLAN *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HostedLANSession",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommonEngineUtils\\Private\\Online\\SessionsLAN.cpp"
                       ,0x184,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Online::FSessionLAN,1> *)&local_18) {
    pTVar1->Object = (FSessionLAN *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->HostedLANSession).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FLANSession::StopLANSession((this->LANSessionManager).Object);
  return;
}

// Tick @ 14f00a150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FSessionsLAN::Tick(FSessionsLAN *this,float param_1)

{
  longlong *plVar1;
  FLanBeacon *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  FName *pFVar10;
  ISocketSubsystem *this_01;
  atomic<int> aVar11;
  atomic<int> aVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_528 [32];
  longlong lStack_508;
  ulonglong uStack_500;
  char cStack_4f8;
  uint uStack_4f4;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  ulonglong uStack_4d8;
  ulonglong uStack_4d0;
  undefined1 auStack_4c8 [16];
  FMRSWRecursiveAccessDetector *pFStack_4b8;
  char cStack_4b0;
  FDestructionSentinel FStack_4a8;
  FDestructionSentinel FStack_490;
  FName FStack_478;
  void *apvStack_470 [3];
  char acStack_458 [32];
  undefined1 auStack_438 [992];
  ulonglong uStack_58;
  
  pTVar2 = (this->HostedLANSession).SharedReferenceCount.ReferenceController;
  if ((int)pTVar2[2].SharedReferenceCount < 1) {
    return;
  }
  uStack_58 = __security_cookie.value ^ (ulonglong)auStack_528;
  if (pTVar2[2].SharedReferenceCount == (atomic<int>)0x0) {
    return;
  }
LAB_14eb22812:
  do {
LAB_14eb22820:
    lVar15 = pTVar2[2]._padding_;
    uStack_4f4 = 0;
    plVar1 = *(longlong **)(lVar15 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      uStack_500 = uStack_500 & 0xffffffff00000000;
      lStack_508 = *(longlong *)(lVar15 + 0x28);
      (**(code **)(*plVar1 + 0x68))(plVar1,acStack_458,0x400);
      if ((0 < (int)uStack_4f4) && (5 < (byte)LogTemp._0_1_)) {
        (**(code **)(**(longlong **)(lVar15 + 0x28) + 0x80))
                  (*(longlong **)(lVar15 + 0x28),apvStack_470,1);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (apvStack_470[0] != (void *)0x0) {
          FMemory::Free(apvStack_470[0]);
        }
      }
    }
    uVar14 = uStack_4f4;
    aVar12 = pTVar2[2].SharedReferenceCount;
    if ((int)uStack_4f4 < 1) {
      if (aVar12 != (atomic<int>)0x2) {
        return;
      }
      this_00 = (FLanBeacon *)pTVar2[2]._padding_;
      aVar12 = (atomic<int>)((float)pTVar2[3].WeakReferenceCount - param_1);
      pTVar2[3].WeakReferenceCount = aVar12;
      if (((this_00 != (FLanBeacon *)0x0) && ((float)aVar12 <= 0.0)) &&
         ((float)pTVar2[1].SharedReferenceCount < (float)pTVar2[3].SharedReferenceCount)) {
        bVar9 = FLanBeacon::BroadcastPacket
                          (this_00,(uchar *)pTVar2[4]._padding_,(int)pTVar2[4].SharedReferenceCount)
        ;
        if (bVar9) {
          if (5 < (byte)LogTemp._0_1_) {
            Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
        }
        else if (2 < (byte)LogTemp._0_1_) {
          pFVar10 = ::FName::FName(&FStack_478,L"WINDOWS");
          this_01 = ISocketSubsystem::Get(pFVar10);
          ISocketSubsystem::GetSocketError(this_01,SE_GET_LAST_ERROR_CODE);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        pTVar2[3].WeakReferenceCount = pTVar2[1].SharedReferenceCount;
      }
      aVar12 = (atomic<int>)((float)pTVar2[3].SharedReferenceCount - param_1);
      pTVar2[3].SharedReferenceCount = aVar12;
      if (0.0 < (float)aVar12) {
        return;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pTVar2 + 0xf),
                 (FWriteAccessScope *)&FStack_490);
      pTVar2[0x10].WeakReferenceCount = (atomic<int>)((int)pTVar2[0x10].WeakReferenceCount + 1);
      bVar9 = false;
      uVar14 = (int)pTVar2[0x10]._padding_ - 1;
      if (-1 < (int)uVar14) {
        lVar20 = (longlong)(int)uVar14;
        lVar15 = lVar20 << 4;
        bVar9 = false;
        do {
          iVar4 = (int)pTVar2[0x10]._padding_;
          uVar18 = 0;
          if ((int)uVar14 < iVar4) {
            uVar18 = ~uVar14 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (lStack_508 = lVar20, uStack_500 = (longlong)iVar4,
             bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar15 + 8 + *(longlong *)&pTVar2[0xf].SharedReferenceCount) == 0) ||
              (plVar1 = *(longlong **)(lVar15 + *(longlong *)&pTVar2[0xf].SharedReferenceCount),
              plVar1 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar1 + 0x68))(), cVar6 == '\0')) {
            bVar9 = true;
          }
          lVar20 = lVar20 + -1;
          lVar15 = lVar15 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      pTVar2[0x10].WeakReferenceCount = (atomic<int>)((int)pTVar2[0x10].WeakReferenceCount + -1);
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pTVar2 + 0xf),false);
      }
      if (FStack_490.bDestroyed != false) {
        return;
      }
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_490.Accessor,&FStack_490);
      return;
    }
    if (aVar12 != (atomic<int>)0x1) {
      if (aVar12 != (atomic<int>)0x2) goto LAB_14eb22820;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      if ((uStack_4f4 < 0x21) || (uVar17 = 1, acStack_458[0] != '\f')) goto LAB_14eb22820;
      bVar7 = 0xff;
      if ((int)uStack_4f4 >= 2) {
        uVar17 = 2;
        bVar7 = acStack_458[1];
      }
      if (((byte)pTVar2[1]._padding_ & bVar7) == 0) goto LAB_14eb22820;
      aVar12 = (atomic<int>)0xffffffff;
      if (((int)uStack_4f4 < 2) || (uVar18 = (int)uVar17 + 4, (int)uStack_4f4 < (int)uVar18)) {
        bVar9 = true;
      }
      else {
        aVar12._3_1_ = acStack_458[uVar17];
        aVar12._2_1_ = acStack_458[uVar17 + 1];
        aVar12._1_1_ = acStack_458[uVar17 + 2];
        aVar12._0_1_ = acStack_458[uVar17 + 3];
        bVar9 = false;
        uVar17 = (ulonglong)uVar18;
      }
      if (aVar12 != pTVar2->WeakReferenceCount) goto LAB_14eb22820;
      cVar6 = '\0';
      if (bVar9) {
LAB_14eb22b42:
        cVar8 = '\0';
        bVar9 = true;
      }
      else {
        uVar18 = (int)uVar17 + 1;
        if ((int)uStack_4f4 < (int)uVar18) goto LAB_14eb22b42;
        uVar13 = (int)uVar17 + 2;
        cVar6 = acStack_458[uVar17];
        uVar17 = (ulonglong)uVar18;
        if ((int)uStack_4f4 < (int)uVar13) goto LAB_14eb22b42;
        cVar8 = acStack_458[uVar18];
        uVar17 = (ulonglong)uVar13;
        bVar9 = false;
      }
      if ((cVar6 != 'S') || (cVar8 != 'R')) goto LAB_14eb22820;
      if ((bVar9) || (uVar18 = (int)uVar17 + 8, (int)uStack_4f4 < (int)uVar18)) {
        bVar9 = true;
        lVar15 = 0;
      }
      else {
        bVar9 = false;
        lVar15 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(acStack_458[uVar17],
                                                                                acStack_458
                                                                                [uVar17 + 1]),
                                                                       acStack_458[uVar17 + 2]),
                                                              acStack_458[uVar17 + 3]),
                                                     acStack_458[uVar17 + 4]),
                                            acStack_458[uVar17 + 5]),acStack_458[uVar17 + 6]),
                          acStack_458[uVar17 + 7]);
        uVar17 = (ulonglong)uVar18;
      }
      if (lVar15 != pTVar2[3]._padding_) goto LAB_14eb22820;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      if (bVar9) goto LAB_14eb22820;
      iVar4 = (int)uVar17;
      iVar19 = iVar4 + 4;
      if ((int)uStack_4f4 < iVar19) goto LAB_14eb22820;
      uVar18 = CONCAT31(CONCAT21(CONCAT11(acStack_458[uVar17],acStack_458[uVar17 + 1]),
                                 acStack_458[uVar17 + 2]),acStack_458[uVar17 + 3]);
      uStack_4e8 = (ulonglong)uVar18;
      if ((int)uStack_4f4 < iVar4 + 8) goto LAB_14eb22820;
      iVar16 = iVar4 + 0xc;
      uStack_4e8 = CONCAT44(CONCAT31(CONCAT21(CONCAT11(acStack_458[uVar17 + 4],
                                                       acStack_458[uVar17 + 5]),
                                              acStack_458[uVar17 + 6]),acStack_458[uVar17 + 7]),
                            uVar18);
      if ((int)uStack_4f4 < iVar16) goto LAB_14eb22820;
      uVar18 = CONCAT31(CONCAT21(CONCAT11(acStack_458[(longlong)iVar19 + 4],
                                          acStack_458[(longlong)iVar19 + 5]),
                                 acStack_458[(longlong)iVar19 + 6]),
                        acStack_458[(longlong)iVar19 + 7]);
      uStack_4e0 = (ulonglong)uVar18;
      if ((int)uStack_4f4 < iVar4 + 0x10) goto LAB_14eb22820;
      cStack_4f8 = '\0';
      uStack_4e0 = CONCAT44(CONCAT31(CONCAT21(CONCAT11(acStack_458[iVar16],
                                                       acStack_458[(longlong)iVar16 + 1]),
                                              acStack_458[(longlong)iVar16 + 2]),
                                     acStack_458[(longlong)iVar16 + 3]),uVar18);
      uStack_4d8 = uStack_4e8;
      uStack_4d0 = uStack_4e0;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(pTVar2 + 6),
                 (FGuid *)auStack_4c8,(bool *)&uStack_4d8);
      if (cStack_4f8 != '\0') goto LAB_14eb22820;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pTVar2 + 0xd),
                 (FWriteAccessScope *)&FStack_4a8);
      pTVar2[0xe].WeakReferenceCount = (atomic<int>)((int)pTVar2[0xe].WeakReferenceCount + 1);
      bVar9 = false;
      uVar18 = (int)pTVar2[0xe]._padding_ - 1;
      if (-1 < (int)uVar18) {
        lVar20 = (longlong)(int)uVar18;
        lVar15 = lVar20 << 4;
        do {
          iVar4 = (int)pTVar2[0xe]._padding_;
          uVar13 = 0;
          if ((int)uVar18 < iVar4) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (lStack_508 = lVar20, uStack_500 = (longlong)iVar4,
             bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar15 + 8 + *(longlong *)&pTVar2[0xd].SharedReferenceCount) == 0) ||
              (plVar1 = *(longlong **)(lVar15 + *(longlong *)&pTVar2[0xd].SharedReferenceCount),
              plVar1 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,auStack_438,uVar14 - 0x20), cVar6 == '\0'
             )) {
            bVar9 = true;
          }
          lVar20 = lVar20 + -1;
          lVar15 = lVar15 + -0x10;
          uVar18 = uVar18 - 1;
        } while (-1 < (int)uVar18);
      }
      pTVar2[0xe].WeakReferenceCount = (atomic<int>)((int)pTVar2[0xe].WeakReferenceCount + -1);
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pTVar2 + 0xd),false);
      }
      if (FStack_4a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_4a8.Accessor,&FStack_4a8);
      }
      goto LAB_14eb22812;
    }
    if (((uStack_4f4 != 0x20) || (acStack_458[0] != '\f')) ||
       (((byte)((byte)pTVar2[1]._padding_ & acStack_458[1]) == 0 ||
        (aVar11._3_1_ = acStack_458[2], aVar11._2_1_ = acStack_458[3], aVar11._1_1_ = acStack_458[4]
        , aVar11._0_1_ = acStack_458[5], aVar11 != pTVar2->WeakReferenceCount))))
    goto LAB_14eb22820;
    if ((acStack_458[6] == 'S') && (acStack_458[7] == 'Q')) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (!bVar9) goto LAB_14eb22820;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pTVar2 + 0xb),
               (FWriteAccessScope *)(auStack_4c8 + 8));
    pTVar2[0xc].WeakReferenceCount = (atomic<int>)((int)pTVar2[0xc].WeakReferenceCount + 1);
    bVar9 = false;
    uVar14 = (int)pTVar2[0xc]._padding_ - 1;
    if (-1 < (int)uVar14) {
      lVar20 = (longlong)(int)uVar14;
      lVar15 = lVar20 << 4;
      do {
        iVar4 = (int)pTVar2[0xc]._padding_;
        uVar18 = 0;
        if ((int)uVar14 < iVar4) {
          uVar18 = ~uVar14 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (lStack_508 = lVar20, uStack_500 = (longlong)iVar4,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)(lVar15 + 8 + *(longlong *)&pTVar2[0xb].SharedReferenceCount) == 0) ||
            (plVar1 = *(longlong **)(lVar15 + *(longlong *)&pTVar2[0xb].SharedReferenceCount),
            plVar1 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,auStack_438,0), cVar6 == '\0')) {
          bVar9 = true;
        }
        lVar20 = lVar20 + -1;
        lVar15 = lVar15 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    pTVar2[0xc].WeakReferenceCount = (atomic<int>)((int)pTVar2[0xc].WeakReferenceCount + -1);
    if (bVar9) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pTVar2 + 0xb),false);
    }
    if (cStack_4b0 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_4b8,(FDestructionSentinel *)(auStack_4c8 + 8));
    }
  } while( true );
}

// TryHostLANSession @ 14f00a3f0

/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<void,UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsLAN::TryHostLANSession
          (FSessionsLAN *this,TValueOrError<void,UE::Online::FOnlineError> *__return_storage_ptr__)

{
  ISessions *pIVar1;
  FOnlineError *pFVar2;
  FOnlineErrorDetails *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<UE::Online::ISessions,1> *pTVar8;
  ulong64 uVar9;
  FOnlineError *pFVar10;
  FText *pFVar11;
  FString *pFVar12;
  TSharedRef<UE::Online::FOnlineErrorDetails,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uStackX_c;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> local_a0;
  FString local_90;
  undefined1 local_80 [24];
  FSharedReferencer<1> local_68;
  bool local_58;
  undefined1 local_50 [24];
  FSharedReferencer<1> local_38;
  
  bVar5 = false;
  bVar4 = false;
  bVar6 = false;
  if (((this->LANSessionManager).Object)->LanBeaconState == NotUsingLanBeacon) {
    local_a8 = (undefined1  [8])0x0;
    local_a0._padding_ = 0;
    local_a0.SharedReferenceCount = (atomic<int>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)local_50);
    local_38.ReferenceController = &local_a0;
    puVar7 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&local_a0);
    if (puVar7 == (undefined8 *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      local_90.Data.ArrayMax = local_a0._padding_._4_4_;
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnValidQueryPacketReceived;
      local_90.Data.ArrayNum = 0;
      pTVar8 = TOnlineComponent<UE::Online::ISessions>::AsShared
                         ((TOnlineComponent<UE::Online::ISessions> *)this,
                          (TSharedRef<UE::Online::ISessions,1> *)local_80);
      pTVar14 = (pTVar8->SharedReferenceCount).ReferenceController;
      pIVar1 = pTVar8->Object;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar9;
      *puVar7 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = pIVar1;
      puVar7[4] = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = true;
      bVar4 = true;
      bVar6 = true;
      puVar7[5] = local_90.Data.AllocatorInstance.Data;
      puVar7[6] = CONCAT44(local_90.Data.ArrayMax,local_90.Data.ArrayNum);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_80._8_8_);
    }
    if (local_50[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
    }
    bVar6 = FLANSession::Host((this->LANSessionManager).Object,
                              (TDelegate<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
                               *)local_a8);
    if (bVar6) {
      if (6 < (byte)LogOnlineServices._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
      (__return_storage_ptr__->Error).bIsSet = false;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                 (FWriteAccessScope *)local_80);
      if ((local_a0.SharedReferenceCount != (atomic<int>)0x0) &&
         ((undefined8 *)local_a0._padding_ != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)local_a0._padding_)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a0,0,0,0x10);
        local_a0.SharedReferenceCount = (atomic<int>)0x0;
      }
      if (local_80[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
      }
      if ((undefined8 *)local_a0._padding_ != (undefined8 *)0x0) {
        FMemory::Free((void *)local_a0._padding_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a8);
    }
    else {
      if (6 < (byte)LogOnlineServices._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
      FLANSession::StopLANSession((this->LANSessionManager).Object);
      local_58 = false;
      pFVar10 = Errors::RequestFailure
                          ((FOnlineError *)local_50,(TOptional<UE::Online::FOnlineError> *)local_80)
      ;
      (__return_storage_ptr__->Error).TypedValue.Details.Object = (pFVar10->Details).Object;
      (__return_storage_ptr__->Error).TypedValue.Details.SharedReferenceCount.ReferenceController =
           (pFVar10->Details).SharedReferenceCount.ReferenceController;
      pFVar2 = (pFVar10->Inner).Object;
      (pFVar10->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar10->Details).Object = (IOnlineErrorDetails *)0x0;
      (__return_storage_ptr__->Error).TypedValue.Inner.Object = pFVar2;
      (__return_storage_ptr__->Error).TypedValue.Inner.SharedReferenceCount.ReferenceController =
           (pFVar10->Inner).SharedReferenceCount.ReferenceController;
      (pFVar10->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar10->Inner).Object = (FOnlineError *)0x0;
      (__return_storage_ptr__->Error).TypedValue.ErrorCode = pFVar10->ErrorCode;
      (__return_storage_ptr__->Error).bIsSet = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_50._8_8_);
      if (local_58 != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_80._8_8_);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                 (FWriteAccessScope *)local_80);
      if ((local_a0.SharedReferenceCount != (atomic<int>)0x0) &&
         ((undefined8 *)local_a0._padding_ != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)local_a0._padding_)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a0,0,0,0x10);
        local_a0.SharedReferenceCount = (atomic<int>)0x0;
      }
      if (local_80[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
      }
      if ((undefined8 *)local_a0._padding_ != (undefined8 *)0x0) {
        FMemory::Free((void *)local_a0._padding_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a8);
    }
  }
  else {
    if (2 < (byte)LogOnlineServices._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_a8,L"OnlineErrors",L"AlreadyPending",
                         L"Request already pending");
    pFVar12 = ::FString::FString(&local_90,"Common.AlreadyPending");
    pTVar13 = MakeShared<UE::Online::FOnlineErrorDetails,1,FString,wchar_t_const_(&)[16],FText>
                        ((TSharedRef<UE::Online::FOnlineErrorDetails,1> *)local_80,pFVar12,
                         (wchar_t (*) [16])L"already_pending",pFVar11);
    pTVar14 = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar13->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_80._8_8_);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if ((atomic<unsigned___int64>)local_a8 != (atomic<unsigned___int64>)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (__return_storage_ptr__->Error).TypedValue.Details.Object = (IOnlineErrorDetails *)pFVar3;
    (__return_storage_ptr__->Error).TypedValue.ErrorCode = 0x1000000100000008;
    (__return_storage_ptr__->Error).TypedValue.Details.SharedReferenceCount.ReferenceController =
         pTVar14;
    (__return_storage_ptr__->Error).TypedValue.Inner.Object = (FOnlineError *)0x0;
    (__return_storage_ptr__->Error).TypedValue.Inner.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->Error).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

// UpdateSessionSettingsImpl @ 14f00a7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> * __thiscall
UE::Online::FSessionsLAN::UpdateSessionSettingsImpl
          (FSessionsLAN *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>
          *__return_storage_ptr__,Params *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  IOnlineErrorDetails *pIVar5;
  FOnlineError *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  FEvent *pFVar13;
  TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *pTVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  FFutureState *this_01;
  undefined1 auStackY_458 [32];
  TSharedRef<UE::Online::FSessionCommon,1> local_428;
  FName local_418;
  TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *local_410;
  TSharedPtr<UE::Online::FSessionLAN,1> local_408;
  TValueOrError<void,UE::Online::FOnlineError> local_3f8;
  undefined8 local_3c8;
  FSharedReferencer<1> FStack_3c0;
  FDestructionSentinel local_3b8;
  FString local_3a0;
  FString local_390;
  undefined1 local_380 [8];
  FSessionLAN *local_378;
  TReferenceControllerBase<1> *local_370;
  byte local_350;
  FName local_348;
  uint local_340;
  char local_33c;
  FSessionSettingsChanges local_338;
  char local_270;
  undefined1 local_268 [32];
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  ForElementType<FSetElementId> local_228;
  int local_220;
  undefined1 local_218 [32];
  void *local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  ForElementType<FSetElementId> local_1d8;
  int local_1d0;
  FSessionUpdate local_1c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_410 = __return_storage_ptr__;
  pTVar12 = ::operator_new(0xc0);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    this_01 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined8 *)__return_storage_ptr__ = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFUpdateSessionSettings_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar12[1]._padding_ = 0;
    pTVar12[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[2]._padding_ = 0;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    pTVar12[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[4]._padding_ = 0;
    pTVar12[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[5]._padding_ = 0;
    pTVar12[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[6]._padding_ = 0;
    pTVar12[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[7]._padding_ = 0;
    pTVar12[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar12 + 1),4000);
    pTVar12[4]._padding_ = 0;
    pTVar12[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar13 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar12[7]._padding_ = (longlong)pFVar13;
    *(undefined1 *)&pTVar12[7].SharedReferenceCount = 0;
    this_01 = (FFutureState *)(pTVar12 + 1);
    if ((this_01 == (FFutureState *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                (*pcVar3)();
      return pTVar14;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if ((this_01 == (FFutureState *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                (*pcVar3)();
      return pTVar14;
    }
    *(FFutureState **)__return_storage_ptr__ = this_01;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar12;
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_418 = param_1->SessionName;
  FSessionsCommon::GetMutableSessionByName
            ((FSessionsCommon *)this,
             (TOnlineResult<UE::Online::FGetMutableSessionByName> *)local_380,(Params *)&local_418);
  uVar16 = (ulonglong)local_350;
  if ((1 < uVar16) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar16 + 4) == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetMutableSessionByNameResult.IsOk()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommonEngineUtils\\Private\\Online\\SessionsLAN.cpp"
                         ,0xaa,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  uVar16 = (ulonglong)local_350;
  if ((1 < uVar16) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar16 + 4) == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOk()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                         ,0x7e,
                         L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  if ((local_350 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  local_428.Object = (FSessionCommon *)local_378;
  local_428.SharedReferenceCount.ReferenceController = local_370;
  if (local_370 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_370->SharedReferenceCount = (atomic<int>)((int)local_370->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->Mutations).JoinPolicy.bIsSet != false) {
    if (*(ESessionJoinPolicy *)((longlong)&local_378->_padding_ + 4) == Public) {
      if (((param_1->Mutations).JoinPolicy.bIsSet == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                  (*pcVar3)();
        return pTVar14;
      }
      if ((param_1->Mutations).JoinPolicy.TypedValue != Public) {
        FLANSession::StopLANSession((this->LANSessionManager).Object);
        local_3c8 = 0;
        FStack_3c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->HostedLANSession != (TSharedPtr<UE::Online::FSessionLAN,1> *)&local_3c8) {
          (this->HostedLANSession).Object = (FSessionLAN *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->HostedLANSession).SharedReferenceCount,&FStack_3c0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_3c0.ReferenceController);
        if (5 < (byte)LogOnlineServices._0_1_) {
          ::FName::ToString(&param_1->SessionName,&local_390);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    else if ((param_1->Mutations).JoinPolicy.TypedValue == Public) {
      TryHostLANSession(this,&local_3f8);
      FVar7.ReferenceController =
           local_3f8.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController;
      pFVar6 = local_3f8.Error.TypedValue.Inner.Object;
      FVar4.ReferenceController =
           local_3f8.Error.TypedValue.Details.SharedReferenceCount.ReferenceController;
      pIVar5 = local_3f8.Error.TypedValue.Details.Object;
      if (local_3f8.Error.bIsSet != false) {
        local_3f8.Error.TypedValue.Details.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_3f8.Error.TypedValue.Details.Object = (IOnlineErrorDetails *)0x0;
        local_3f8.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_3f8.Error.TypedValue.Inner.Object = (FOnlineError *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_3f8.Error.bIsSet = false;
        if (this_01 == (FFutureState *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                      (*pcVar3)();
            return pTVar14;
          }
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                      (*pcVar3)();
            return pTVar14;
          }
        }
        if ((this_01->bComplete != (TAtomic<bool>)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsComplete()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0xcd,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                    (*pcVar3)();
          return pTVar14;
        }
        *(IOnlineErrorDetails **)this_01[1].Mutex.CriticalSection.Opaque2 = pIVar5;
        this_01[1].Mutex.CriticalSection.Opaque1[0] =
             &___7__TOnlineResult_UFUpdateSessionSettings_Online_UE___Online_UE__6B_;
        this_01[1].Mutex.CriticalSection.Opaque3[0] = FVar4.ReferenceController;
        this_01[1].Mutex.CriticalSection.Opaque3[1] = pFVar6;
        this_01[1].Mutex.CriticalSection.Opaque3[2] = FVar7.ReferenceController;
        this_01[1]._padding_ = local_3f8.Error.TypedValue.ErrorCode;
        *(undefined1 *)&this_01[1].CompletionCallback = 1;
        FFutureState::MarkComplete(this_01);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (local_3f8.Error.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3f8.Error.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3f8.Error.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
        goto LAB_14f00b162;
      }
      if (5 < (byte)LogOnlineServices._0_1_) {
        ::FName::ToString(&param_1->SessionName,&local_3a0);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
        }
      }
      FVar4.ReferenceController = local_428.SharedReferenceCount.ReferenceController;
      local_408.Object = (FSessionLAN *)local_428.Object;
      local_408.SharedReferenceCount.ReferenceController =
           local_428.SharedReferenceCount.ReferenceController;
      if (local_428.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSharedPtr<UE::Online::FSessionLAN,1>::operator=(&this->HostedLANSession,&local_408);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_408.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
    }
  }
  FSessionsCommon::BuildSessionUpdate
            ((FSessionsCommon *)this,&local_1c8,&local_428,&param_1->Mutations);
  FSessionCommon::operator+=(local_428.Object,&local_1c8);
  if (this_01 == (FFutureState *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                (*pcVar3)();
      return pTVar14;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                (*pcVar3)();
      return pTVar14;
    }
  }
  if ((this_01->bComplete != (TAtomic<bool>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0xcd,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  *(undefined1 *)&this_01[1].CompletionCallback = 0;
  this_01[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TOnlineResult_UFUpdateSessionSettings_Online_UE___Online_UE__6B_;
  FFutureState::MarkComplete(this_01);
  local_348 = param_1->SessionName;
  local_33c = local_1c8.OwnerAccountId.bIsSet;
  if (local_1c8.OwnerAccountId.bIsSet != false) {
    local_340 = local_1c8.OwnerAccountId.TypedValue.Value;
  }
  local_270 = local_1c8.SessionSettingsChanges.bIsSet;
  if (local_1c8.SessionSettingsChanges.bIsSet != false) {
    FSessionSettingsChanges::FSessionSettingsChanges
              (&local_338,&local_1c8.SessionSettingsChanges.TypedValue);
  }
  local_268._0_8_ = (FScriptContainerElement *)0x0;
  local_268._8_8_ = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  local_23c = 0x80;
  local_238 = 0xffffffff;
  local_234 = 0;
  local_228 = (ForElementType<FSetElementId>)0x0;
  local_220 = 0;
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  ::operator=((TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
               *)local_268,&local_1c8.AddedSessionMembers);
  local_218._0_8_ = (FScriptContainerElement *)0x0;
  local_218._8_8_ = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1ec = 0x80;
  local_1e8 = 0xffffffff;
  local_1e4 = 0;
  local_1d8 = (ForElementType<FSetElementId>)0x0;
  local_1d0 = 0;
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  ::operator=((TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
               *)local_218,&local_1c8.RemovedSessionMembers);
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_3b8);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar8 = false;
  uVar15 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar17 = (longlong)(int)uVar15 << 4;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (this_00->InvocationList).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                  (*pcVar3)();
        return pTVar14;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar17 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar17), plVar2 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar2 + 0x68))(), cVar10 == '\0')) {
        bVar8 = true;
      }
      lVar17 = lVar17 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  local_1d0 = 0;
  if (local_1d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8);
  }
  bVar8 = local_218._12_4_ != 0;
  local_218._8_8_ = (ulonglong)(uint)local_218._12_4_ << 0x20;
  if (bVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_218,0,(int *)(local_218 + 0xc));
  }
  local_1e8 = 0xffffffff;
  local_1e4 = 0;
  local_1f0 = 0;
  if (0x80 < local_1ec) {
    local_1ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10),0);
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  if ((FScriptContainerElement *)local_218._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_218._0_8_);
  }
  local_220 = 0;
  if (local_228 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_228);
  }
  bVar8 = local_268._12_4_ != 0;
  local_268._8_8_ = (ulonglong)(uint)local_268._12_4_ << 0x20;
  if (bVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
  }
  local_238 = 0xffffffff;
  local_234 = 0;
  local_240 = 0;
  if (0x80 < local_23c) {
    local_23c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
  }
  if (local_248 != (void *)0x0) {
    FMemory::Free(local_248);
  }
  if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_268._0_8_);
  }
  if (local_270 != '\0') {
    FSessionSettingsChanges::~FSessionSettingsChanges(&local_338);
  }
  local_1c8.RemovedSessionMembers.HashSize = 0;
  if (local_1c8.RemovedSessionMembers.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.RemovedSessionMembers.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.RemovedSessionMembers.Elements);
  local_1c8.AddedSessionMembers.HashSize = 0;
  if (local_1c8.AddedSessionMembers.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.AddedSessionMembers.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.AddedSessionMembers.Elements);
  if (local_1c8.SessionSettingsChanges.bIsSet != false) {
    FSessionSettingsChanges::~FSessionSettingsChanges(&local_1c8.SessionSettingsChanges.TypedValue);
  }
LAB_14f00b162:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428.SharedReferenceCount.ReferenceController);
  if ((1 < local_350) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_350])(&local_378);
  if (((this_01 != (FFutureState *)0x0) && (this_01->bComplete == (TAtomic<bool>)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)(*pcVar3)()
    ;
    return pTVar14;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return local_410;
}

