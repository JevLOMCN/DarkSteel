// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 469

// TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState,1><UE::Online::FUpdateSessionSettings::Params> @ 14ed396a0

TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState,1>
* __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState,1>
::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState,1><UE::Online::FUpdateSessionSettings::Params>
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState,1>
           *this,Params *param_1)

{
  bool bVar1;
  FOnlineError *pFVar2;
  FOnlineError *pFVar3;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VFAsyncOpSharedState___TOnlineAsyncOp_UFUpdateSessionSettings_Online_UE___Online_UE___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(uint *)(this->ObjectStorage).Pad = (param_1->LocalAccountId).Value;
  *(FName *)((this->ObjectStorage).Pad + 4) = param_1->SessionName;
  (this->ObjectStorage).Pad[0x10] = 0xff;
  (this->ObjectStorage).Pad[0x11] = 0xff;
  (this->ObjectStorage).Pad[0x12] = 0xff;
  (this->ObjectStorage).Pad[0x13] = 0xff;
  (this->ObjectStorage).Pad[0x14] = '\0';
  (this->ObjectStorage).Pad[0x15] = '\0';
  (this->ObjectStorage).Pad[0x16] = '\0';
  (this->ObjectStorage).Pad[0x17] = '\0';
  if ((param_1->Mutations).SchemaName.field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)((this->ObjectStorage).Pad + 0x10) =
         (param_1->Mutations).SchemaName.field0_0x0;
  }
  (this->ObjectStorage).Pad[0x1c] = '\0';
  bVar1 = (param_1->Mutations).NumMaxConnections.bIsSet;
  (this->ObjectStorage).Pad[0x1c] = bVar1;
  if (bVar1 != false) {
    *(uint *)((this->ObjectStorage).Pad + 0x18) = (param_1->Mutations).NumMaxConnections.TypedValue;
  }
  (this->ObjectStorage).Pad[0x21] = '\0';
  bVar1 = (param_1->Mutations).JoinPolicy.bIsSet;
  (this->ObjectStorage).Pad[0x21] = bVar1;
  if (bVar1 != false) {
    (this->ObjectStorage).Pad[0x20] = (param_1->Mutations).JoinPolicy.TypedValue;
  }
  (this->ObjectStorage).Pad[0x23] = '\0';
  bVar1 = (param_1->Mutations).bAllowNewMembers.bIsSet;
  (this->ObjectStorage).Pad[0x23] = bVar1;
  if (bVar1 != false) {
    (this->ObjectStorage).Pad[0x22] = (param_1->Mutations).bAllowNewMembers.TypedValue;
  }
  TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
              *)((this->ObjectStorage).Pad + 0x28),
             (TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
              *)&(param_1->Mutations).UpdatedCustomSettings);
  (this->ObjectStorage).Pad[0x78] = '\0';
  (this->ObjectStorage).Pad[0x79] = '\0';
  (this->ObjectStorage).Pad[0x7a] = '\0';
  (this->ObjectStorage).Pad[0x7b] = '\0';
  (this->ObjectStorage).Pad[0x7c] = '\0';
  (this->ObjectStorage).Pad[0x7d] = '\0';
  (this->ObjectStorage).Pad[0x7e] = '\0';
  (this->ObjectStorage).Pad[0x7f] = '\0';
  *(FScriptContainerElement **)((this->ObjectStorage).Pad + 0x78) =
       (param_1->Mutations).RemovedCustomSettings.AllocatorInstance.Data;
  (param_1->Mutations).RemovedCustomSettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  *(int *)((this->ObjectStorage).Pad + 0x80) = (param_1->Mutations).RemovedCustomSettings.ArrayNum;
  *(int *)((this->ObjectStorage).Pad + 0x84) = (param_1->Mutations).RemovedCustomSettings.ArrayMax;
  (param_1->Mutations).RemovedCustomSettings.ArrayNum = 0;
  (param_1->Mutations).RemovedCustomSettings.ArrayMax = 0;
  local_40.bIsSet = false;
  pFVar3 = UE::Online::Errors::Unknown(&local_68,&local_40);
  *(undefined ***)((this->ObjectStorage).Pad + 0x88) =
       &___7__TResult_UResult_FUpdateSessionSettings_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)((this->ObjectStorage).Pad + 0x90) = (pFVar3->Details).Object;
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x98) =
       (pFVar3->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar3->Inner).Object;
  (pFVar3->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)((this->ObjectStorage).Pad + 0xa0) = pFVar2;
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xa8) =
       (pFVar3->Inner).SharedReferenceCount.ReferenceController;
  (pFVar3->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)((this->ObjectStorage).Pad + 0xb0) = pFVar3->ErrorCode;
  *(undefined ***)((this->ObjectStorage).Pad + 0x88) =
       &___7__TOnlineResult_UFUpdateSessionSettings_Online_UE___Online_UE__6B_;
  (this->ObjectStorage).Pad[0xb8] = '\x01';
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  (this->ObjectStorage).Pad[0xc0] = '\0';
  return this;
}

// DestroyObject @ 14eeacf50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FLobbyInternal,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::FLobbyInternal,1> *this)

{
  UE::Online::FLobbyInternal::~FLobbyInternal((FLobbyInternal *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeacf60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FLobbyMemberInternal,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::FLobbyMemberInternal,1> *this)

{
  void *pvVar1;
  
  UE::Online::Private::FSchemaCategoryInstanceBase::~FSchemaCategoryInstanceBase
            ((FSchemaCategoryInstanceBase *)((this->ObjectStorage).Pad + 0x60));
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14eeacfa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FUserPresence,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::FUserPresence,1> *this)

{
  UE::Online::FUserPresence::~FUserPresence((FUserPresence *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeacfb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::FBatchQueryPresenceHelperResult>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::FBatchQueryPresenceHelperResult>,1>
              *this)

{
  TFutureState<UE::Online::FBatchQueryPresenceHelperResult>::
  ~TFutureState<UE::Online::FBatchQueryPresenceHelperResult>
            ((TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeacfc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeacfd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeacfe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeacff0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead000

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead010

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead020

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead030

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead040

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead050

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAchievementStateUpdated_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAchievementStateUpdated_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead0a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAuthAccountAttributesChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead0e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAuthLoginStatusChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead120

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FAuthPendingAuthExpiration_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead160

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FCommerceOnPurchaseComplete_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead1a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FConnectionStatusChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FConnectionStatusChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead1e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead220

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead2a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead2e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead360

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead3a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead3e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead420

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead460

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead4a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FPresenceUpdated_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FPresenceUpdated_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead4e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionCreated_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionCreated_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionInviteReceived_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionInviteReceived_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead560

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionJoined_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionJoined_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead5a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionLeft_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionLeft_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead5e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionUpdated_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FSessionUpdated_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead620

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead660

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FUISessionJoinRequested_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FUISessionJoinRequested_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead6e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead720

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthBeginVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthBeginVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead7a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead7e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead820

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead860

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCreateAccount>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCreateAccount>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead8a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead8e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthEndVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthEndVerifiedAuthSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead920

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead960

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLinkAccount>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLinkAccount>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead9a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eead9e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeada20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeada60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogout>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogout>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadaa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadae0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthModifyAccountAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthModifyAccountAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadb20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadb60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalAuthToken>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalAuthToken>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadba0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadbe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadc20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadc60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadca0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadce0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadd20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadd60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceCheckout>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceCheckout>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadda0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadde0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeade20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeade60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffers>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffers>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadee0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffersById>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffersById>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadf20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadf60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryTransactionEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryTransactionEntitlements>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadfa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeadfe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRedeemEntitlement>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRedeemEntitlement>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae020

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRetrieveS2SToken>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRetrieveS2SToken>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae0a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae0e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceShowStoreUI>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceShowStoreUI>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae120

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae160

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae1a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae1e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae220

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>_const_&,UE::Online::TOnlineResult<UE::Online::FDeclineLobbyInvitation>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>_const_&,UE::Online::TOnlineResult<UE::Online::FDeclineLobbyInvitation>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae2a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae2e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowFriendsUI>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowFriendsUI>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae360

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowLoginUI>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowLoginUI>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae3a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae3e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae420

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae460

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae4a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae4e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae560

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae5a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae5e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae620

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae660

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae6e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FKickLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FKickLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae720

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae7a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae7e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae820

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae860

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae8a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae8e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyJoinPolicy>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyJoinPolicy>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae920

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae960

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae9a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeae9e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbySchema>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbySchema>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaea20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaea60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FPartialUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FPartialUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeaa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeae0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FPromoteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FPromoteLobbyMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeb20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeb60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementDefinitions>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementDefinitions>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeba0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaebe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementStates>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementStates>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaec20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaec60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeca0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaece0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserPrivilege>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserPrivilege>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaed20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaed60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundRank>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundRank>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeda0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaede0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundUser>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundUser>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaee20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaee60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesForUsers>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesForUsers>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaeee0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaef20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaef60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaefa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaefe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FRestoreLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FRestoreLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf020

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf0a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf0e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf120

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf160

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>_const_&,UE::Online::TOnlineResult<UE::Online::FUnlockAchievements>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>_const_&,UE::Online::TOnlineResult<UE::Online::FUnlockAchievements>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf1a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf1e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdatePresence>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf220

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf2a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf2e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>_const_&,UE::Online::TOnlineResult<UE::Online::FWriteLeaderboardScores>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>_const_&,UE::Online::TOnlineResult<UE::Online::FWriteLeaderboardScores>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>::
DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf360

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::
  ~TOnlineAsyncOp<UE::Online::FAddSessionMember>
            ((TOnlineAsyncOp<UE::Online::FAddSessionMember> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf370

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::
  ~TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>
            ((TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf380

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::
  ~TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>
            ((TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf390

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::
  ~TOnlineAsyncOp<UE::Online::FAuthCreateAccount>
            ((TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf3a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::
  ~TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>
            ((TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf3b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::
  ~TOnlineAsyncOp<UE::Online::FAuthLinkAccount>
            ((TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf3c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *this
          )

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::~TOnlineAsyncOp<UE::Online::FAuthLogin>
            ((TOnlineAsyncOp<UE::Online::FAuthLogin> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf3d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::~TOnlineAsyncOp<UE::Online::FAuthLogout>
            ((TOnlineAsyncOp<UE::Online::FAuthLogout> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf3e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::
  ~TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>
            ((TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf3f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::
  ~TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>
            ((TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf400

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::
  ~TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>
            ((TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14eeaf410

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::
  ~TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>
            ((TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf420

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::
  ~TOnlineAsyncOp<UE::Online::FBatchQueryPresence>
            ((TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf430

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::
  ~TOnlineAsyncOp<UE::Online::FCommerceCheckout>
            ((TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf440

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::
  ~TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>
            ((TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf450

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::
  ~TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>
            ((TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf460

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::
  ~TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>
            ((TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf470

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::
  ~TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>
            ((TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf480

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::
  ~TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>
            ((TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf490

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::
  ~TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>
            ((TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf4a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::
  ~TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>
            ((TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf4b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::~TOnlineAsyncOp<UE::Online::FCreateLobby>
            ((TOnlineAsyncOp<UE::Online::FCreateLobby> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf4c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::
  ~TOnlineAsyncOp<UE::Online::FCreateSession>
            ((TOnlineAsyncOp<UE::Online::FCreateSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf4d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::
  ~TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>
            ((TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf4e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::
  ~TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>
            ((TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf4f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::
  ~TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>
            ((TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf500

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::~TOnlineAsyncOp<UE::Online::FFindLobbies>
            ((TOnlineAsyncOp<UE::Online::FFindLobbies> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf510

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::~TOnlineAsyncOp<UE::Online::FFindSessions>
            ((TOnlineAsyncOp<UE::Online::FFindSessions> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::
  ~TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>
            ((TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf530

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::
  ~TOnlineAsyncOp<UE::Online::FInviteLobbyMember>
            ((TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf540

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *this
          )

{
  UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::~TOnlineAsyncOp<UE::Online::FJoinLobby>
            ((TOnlineAsyncOp<UE::Online::FJoinLobby> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf550

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::~TOnlineAsyncOp<UE::Online::FJoinSession>
            ((TOnlineAsyncOp<UE::Online::FJoinSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf560

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::
  ~TOnlineAsyncOp<UE::Online::FKickLobbyMember>
            ((TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf570

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::~TOnlineAsyncOp<UE::Online::FLeaveLobby>
            ((TOnlineAsyncOp<UE::Online::FLeaveLobby> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf580

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::~TOnlineAsyncOp<UE::Online::FLeaveSession>
            ((TOnlineAsyncOp<UE::Online::FLeaveSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf590

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::
  ~TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>
            ((TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf5a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::
  ~TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>
            ((TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf5b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::
  ~TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>
            ((TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf5c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::
  ~TOnlineAsyncOp<UE::Online::FModifyLobbySchema>
            ((TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf5d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::
  ~TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>
            ((TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf5e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::
  ~TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>
            ((TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf5f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::
  ~TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>
            ((TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf600

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::
  ~TOnlineAsyncOp<UE::Online::FQueryAchievementStates>
            ((TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf610

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::
  ~TOnlineAsyncOp<UE::Online::FQueryPresence>
            ((TOnlineAsyncOp<UE::Online::FQueryPresence> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf620

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::
  ~TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>
            ((TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf630

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::
  ~TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>
            ((TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf640

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::
  ~TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>
            ((TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf650

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::
  ~TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>
            ((TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf660

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::
  ~TOnlineAsyncOp<UE::Online::FRejectSessionInvite>
            ((TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf670

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::
  ~TOnlineAsyncOp<UE::Online::FRemoveSessionMember>
            ((TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf680

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::
  ~TOnlineAsyncOp<UE::Online::FRestoreLobbies>
            ((TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf690

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::
  ~TOnlineAsyncOp<UE::Online::FSendSessionInvite>
            ((TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::
  ~TOnlineAsyncOp<UE::Online::FStartMatchmaking>
            ((TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf6b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::
  ~TOnlineAsyncOp<UE::Online::FUnlockAchievements>
            ((TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf6c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::
  ~TOnlineAsyncOp<UE::Online::FUpdatePresence>
            ((TOnlineAsyncOp<UE::Online::FUpdatePresence> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf6d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::
  ~TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>
            ((TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf6e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::
  ~TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>
            ((TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf6f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::
  ~TWrappedOp<UE::Online::FAddSessionMember>
            ((TWrappedOp<UE::Online::FAddSessionMember> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf700

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::
  ~TWrappedOp<UE::Online::FBatchQueryPresence>
            ((TWrappedOp<UE::Online::FBatchQueryPresence> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf710

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::
  ~TWrappedOp<UE::Online::FCreateSession>
            ((TWrappedOp<UE::Online::FCreateSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf720

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::
  ~TWrappedOp<UE::Online::FFindSessions>
            ((TWrappedOp<UE::Online::FFindSessions> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf730

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::
  ~TWrappedOp<UE::Online::FJoinSession>
            ((TWrappedOp<UE::Online::FJoinSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf740

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::
  ~TWrappedOp<UE::Online::FLeaveSession>
            ((TWrappedOp<UE::Online::FLeaveSession> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf750

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::
  ~TWrappedOp<UE::Online::FRejectSessionInvite>
            ((TWrappedOp<UE::Online::FRejectSessionInvite> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::
  ~TWrappedOp<UE::Online::FRemoveSessionMember>
            ((TWrappedOp<UE::Online::FRemoveSessionMember> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf770

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::
  ~TWrappedOp<UE::Online::FSendSessionInvite>
            ((TWrappedOp<UE::Online::FSendSessionInvite> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf780

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::
  ~TWrappedOp<UE::Online::FStartMatchmaking>
            ((TWrappedOp<UE::Online::FStartMatchmaking> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf790

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::
  ~TWrappedOp<UE::Online::FUpdateSessionSettings>
            ((TWrappedOp<UE::Online::FUpdateSessionSettings> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf7a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf7b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf7c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf7d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf7e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf7f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf800

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf810

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf820

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf830

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf840

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::
  FAsyncOpSharedHandleState::~FAsyncOpSharedHandleState
            ((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf850

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf860

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf870

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf880

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf890

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf8a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf8b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::
  FAsyncOpSharedHandleState::~FAsyncOpSharedHandleState
            ((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf8c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf8d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf8e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf8f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf900

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf910

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf920

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf930

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf940

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf950

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf960

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf970

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf980

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf990

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf9a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf9b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf9c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf9d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf9e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaf9f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafa90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafaa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafab0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafac0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafad0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafae0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafaf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafb00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafb10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafb20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafb30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte bVar18;
  char *pcVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  uchar *puVar19;
  char cVar20;
  undefined2 uVar21;
  char cVar22;
  char *in_RDX;
  byte bVar23;
  char *unaff_RBX;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar28;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar29;
  byte bVar3;
  longlong *plVar17;
  
  bVar9 = (this->ObjectStorage).Pad[0x40];
  puVar19 = (this->ObjectStorage).Pad + 0x18;
  if (1 < (ulonglong)bVar9) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar13 = (uint *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar9];
  uVar21 = SUB82(in_RDX,0);
  bVar18 = (byte)((ulonglong)puVar13 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar9) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    return;
  case 4:
    bVar18 = bVar18 & 0x70;
    DAT_1730aa81b = DAT_1730aa81b + bVar18;
    *unaff_RBX = *unaff_RBX + bVar18;
    uVar4 = in(uVar21);
    *unaff_RDI = uVar4;
    *unaff_RBP = *unaff_RBP + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    break;
  }
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= (byte)unaff_RBX) {
LAB_15309c4c6_3:
    cVar8 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar8;
    pcVar12 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar21);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar19 + (longlong)unaff_RBP * 2 + 0x6f),uVar21);
    cVar8 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar12 = *pcVar12 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar21);
  uVar10 = *(uint *)(unaff_RDI + 0x70);
  puVar19 = (uchar *)(ulonglong)uVar10;
  bVar9 = (byte)puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  uVar6 = *puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  if (-1 < (char)(byte)*puVar13) {
    puVar13 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  cVar20 = (char)in_RDX;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1((byte)uVar6,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  puVar1 = puVar19 + -6;
  bVar23 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  puVar1 = puVar19 + -6;
  bVar23 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  *in_RDX = *in_RDX + bVar18;
  *(char *)in_R9 = (char)*in_R9 + -8;
  uVar6 = *puVar13;
  puVar13 = (uint *)(ulonglong)uVar6;
  cVar22 = (char)((ulonglong)in_RDX >> 8);
  *in_RDX = *in_RDX + cVar22;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar21);
  *in_RDX = *in_RDX + cVar22;
  *(char *)puVar13 = (char)*puVar13 + (char)uVar6;
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  piVar16 = (int *)(ulonglong)*puVar13;
  bVar23 = (byte)((ulonglong)unaff_RBX >> 8);
  *(byte *)piVar16 = (char)*piVar16 + bVar23;
  iVar11 = *piVar16;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar11 * 0x790072) >> 8);
  uVar6 = *(uint *)(ulonglong)(uint)(iVar11 * 0x790072);
  puVar13 = (uint *)(ulonglong)uVar6;
  pcVar12 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar21);
  *pcVar12 = *pcVar12 + (char)(uVar10 >> 8);
  unaff_RBX[in_FS_OFFSET] = unaff_RBX[in_FS_OFFSET] + cVar22;
  cVar8 = (char)uVar6;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)in_R9 = (char)*in_R9 + -0x20;
  piVar16 = (int *)(ulonglong)*puVar13;
  *(byte *)piVar16 = (char)*piVar16 + bVar23;
  uVar10 = *(int *)(ulonglong)(uint)(*piVar16 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
  uVar10 = in(0x4e);
  pbVar15 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
  bVar9 = *pbVar15;
  bVar18 = (byte)uVar10;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[0x49] = pbVar15[0x49] + (char)(uVar10 >> 8);
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  cVar8 = (char)(uVar10 >> 8);
  pbVar14[0x14ee549] = pbVar14[0x14ee549] + cVar8;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x14ef312] = pbVar14[0x14ef312] + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar15 = (byte *)(unaff_RBX + 0x3a);
  bVar7 = CARRY1(*pbVar15,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar24 = &DAT_450064f8;
  puVar26 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar12,uVar21);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar28 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar26,uVar21);
    puVar19 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar24 = &DAT_450064f0;
    puVar25 = &DAT_450064f0;
    puVar26 = puVar28;
    _DAT_450064f0 = puVar19;
    if (*pbVar15 != 0) {
      bVar7 = CARRY1(*pbVar14,bVar18);
      *pbVar14 = *pbVar14 + bVar18;
      goto LAB_15309c6e0;
    }
  }
  puVar25 = puVar24;
  puVar28 = puVar26;
  if (*pbVar15 == 0) {
    *(undefined8 *)(puVar24 + -8) = 0x49000000;
    out(*puVar26,uVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar14[1] = (pbVar14[1] - cVar20) - bVar7;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x4f] = pbVar14[0x4f] + cVar8;
  uVar10 = in(0x4e);
  pbVar15 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
  bVar9 = *pbVar15;
  bVar18 = (byte)uVar10;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  *pbVar15 = *pbVar15 + (char)(uVar10 >> 8);
  pbVar15 = (byte *)in(0x4e);
  *(int *)pbVar15 = *(int *)pbVar15 + (int)pbVar15;
  bVar9 = *pbVar15;
  bVar18 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar19 = puVar19 + -6;
  bVar9 = *puVar19;
  *puVar19 = *puVar19 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  *pbVar15 = *pbVar15 + cVar20;
  do {
    piVar16 = (int *)in(0x4e);
    *piVar16 = *piVar16 + (int)piVar16;
    bVar29 = SCARRY1((char)*piVar16,(char)piVar16);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar7 = (char)*piVar16 < '\0';
    pbVar15 = (byte *)CONCAT71((int7)((ulonglong)piVar16 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar29 == bVar7);
  *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
  cVar8 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar8;
  *pbVar15 = *pbVar15 + cVar8;
  pbVar15[0x14eee7e] = pbVar15[0x14eee7e] + cVar22;
  *pbVar15 = *pbVar15 + cVar8;
  pbVar15 = (byte *)in(0x4e);
  puVar26 = puVar25;
  do {
    iVar11 = (int)pbVar15;
    *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
    bVar9 = *pbVar15;
    bVar18 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar18;
    if (SCARRY1(bVar9,bVar18)) {
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      unaff_RBX[-0x12] = unaff_RBX[-0x12] + cVar20;
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      puVar28[(ulonglong)(uint)((int)unaff_RBP + (int)puVar28) * 8 + 0x4e] =
           puVar28[(ulonglong)(uint)((int)unaff_RBP + (int)puVar28) * 8 + 0x4e] + (byte)unaff_RBX;
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      *pbVar15 = *pbVar15 + bVar18;
      *(byte **)(puVar26 + -8) = pbVar15;
LAB_15309c7fc:
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      *pbVar15 = *pbVar15 + bVar18;
      pbVar15[0x5c] = pbVar15[0x5c] + cVar22;
      out(uVar21,bVar18);
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar21,bVar18);
    puVar27 = puVar26;
    do {
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      bVar2 = *pbVar15;
      bVar29 = SCARRY1(*pbVar15,bVar18);
      *pbVar15 = *pbVar15 + bVar18;
      bVar9 = *pbVar15;
      bVar3 = *pbVar15;
      puVar25 = puVar27 + -8;
      puVar26 = puVar27 + -8;
      *(byte **)(puVar27 + -8) = pbVar15;
      if ((char)bVar9 < '\0') {
        *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
        bVar9 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar18;
        if (!SCARRY1(bVar9,bVar18)) {
          out(uVar21,bVar18);
          *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
          bVar9 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar18;
          if (SCARRY1(bVar9,bVar18)) {
            *pbVar15 = *pbVar15 + bVar18;
            pbVar15[2] = pbVar15[2] + cVar22;
            out(uVar21,bVar18);
            *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
            *pbVar15 = *pbVar15 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar10 = in(0x4e);
          pbVar15 = (byte *)(ulonglong)uVar10;
          *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
          bVar9 = *pbVar15;
          bVar18 = (byte)uVar10;
          *pbVar15 = *pbVar15 + bVar18;
          bVar9 = bVar18 << 1 | CARRY1(bVar9,bVar18);
          plVar17 = (longlong *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9);
          out(uVar21,bVar9);
          *plVar17 = *plVar17 + in_R8;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
          in_RDX[0x14eea] = in_RDX[0x14eea] ^ bVar23;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar27 = puVar27 + -8;
    } while (CARRY1(bVar2,bVar18) || bVar3 == 0);
    bVar7 = false;
    if (bVar3 == 0 || bVar29) goto code_r0x00015309c749;
    *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
    *pbVar15 = *pbVar15 + bVar18;
    pbVar14 = (byte *)(in_RDX + -0x1b);
    *pbVar14 = *pbVar14 >> 6 | *pbVar14 << 2;
  } while( true );
}

// DestroyObject @ 14eeafb90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafba0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 4:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 6:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    return;
  case 10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0xc:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0xe:
    return;
  case 0x10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// DestroyObject @ 14eeafc00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  }
}

// DestroyObject @ 14eeafc60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 0xc:
    return;
  case 0xe:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x12:
    return;
  case 0x14:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// DestroyObject @ 14eeafcc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafcd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafce0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  }
}

// DestroyObject @ 14eeafd40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafd50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafd60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    break;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 6:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 8:
    return;
  case 10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (pvVar2 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar2,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  }
  return;
}

// DestroyObject @ 14eeafdc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 4:
    pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 6:
    return;
  case 8:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0xc:
    return;
  case 0xe:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// DestroyObject @ 14eeafe20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafe30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafe40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 4:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 6:
    return;
  case 8:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x14:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x16:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x18:
    return;
  case 0x1a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x1c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x1e:
    return;
  case 0x20:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x22:
    return;
  case 0x24:
    return;
  case 0x26:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeafea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafeb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafec0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::FAsyncOpSharedState
  ::~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafed0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafee0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeafef0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    pvVar5 = *(void **)puVar1;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0xe:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x10:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x12:
    return;
  case 0x14:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x16:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x18:
    return;
  case 0x1a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x1c:
    return;
  case 0x1e:
    return;
  case 0x20:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeaff50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaff60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeaff70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 8:
    return;
  case 10:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0xe:
    return;
  case 0x10:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x12:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x14:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x16:
    return;
  case 0x18:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x1a:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1c:
    return;
  case 0x1e:
    return;
  case 0x20:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x22:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x24:
    return;
  case 0x26:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x28:
    return;
  case 0x2a:
    return;
  case 0x2c:
    return;
  case 0x2e:
    return;
  case 0x30:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x32:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x34:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x36:
    return;
  case 0x38:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x3a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x3c:
    return;
  case 0x3e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x40:
    return;
  case 0x42:
    return;
  case 0x44:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeaffd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 6:
    return;
  case 8:
    return;
  case 10:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0xe:
    return;
  case 0x10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1c:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1e:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x20:
    return;
  case 0x22:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x24:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x26:
    return;
  case 0x28:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x2a:
    return;
  case 0x2c:
    return;
  case 0x2e:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0030

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0040

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0050

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x16:
    return;
  case 0x18:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x1a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x1c:
    return;
  case 0x1e:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x20:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x22:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x24:
    return;
  case 0x26:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x28:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2a:
    return;
  case 0x2c:
    return;
  case 0x2e:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x30:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x32:
    return;
  case 0x34:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x36:
    return;
  case 0x38:
    return;
  case 0x3a:
    return;
  case 0x3c:
    return;
  case 0x3e:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x40:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x42:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x44:
    return;
  case 0x46:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x48:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x4a:
    return;
  case 0x4c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x4e:
    return;
  case 0x50:
    return;
  case 0x52:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb00c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x40];
  puVar1 = (this->ObjectStorage).Pad + 0x18;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    return;
  case 4:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 6:
    return;
  case 8:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0xc:
    return;
  case 0xe:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x10:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x12:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x14:
    return;
  case 0x16:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x18:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1a:
    return;
  case 0x1c:
    return;
  case 0x1e:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x20:
    if ((*(int *)((this->ObjectStorage).Pad + 0x24) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x22:
    return;
  case 0x24:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x26:
    return;
  case 0x28:
    return;
  case 0x2a:
    return;
  case 0x2c:
    return;
  case 0x2e:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x28);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x30:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x32:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x34:
    return;
  case 0x36:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x38:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x3a:
    return;
  case 0x3c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x3e:
    return;
  case 0x40:
    return;
  case 0x42:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0120

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0130

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x48];
  puVar1 = (this->ObjectStorage).Pad + 0x20;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x38));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
              (*(TSharedRef<UE::Online::FUserPresence_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x28));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    return;
  case 0x1c:
    return;
  case 0x1e:
    return;
  case 0x20:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    return;
  case 0x22:
    return;
  case 0x24:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x28));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x26:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    return;
  case 0x28:
    return;
  case 0x2a:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2c:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2e:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x30:
    return;
  case 0x32:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    return;
  case 0x34:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x36:
    return;
  case 0x38:
    return;
  case 0x3a:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x28));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x3c:
    if ((*(int *)((this->ObjectStorage).Pad + 0x2c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x3e:
    return;
  case 0x40:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x28));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x42:
    return;
  case 0x44:
    return;
  case 0x46:
    return;
  case 0x48:
    return;
  case 0x4a:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x30);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x4c:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x28);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x4e:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x28);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x50:
    return;
  case 0x52:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    return;
  case 0x54:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    return;
  case 0x56:
    return;
  case 0x58:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    return;
  case 0x5a:
    return;
  case 0x5c:
    return;
  case 0x5e:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0190

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x40];
  puVar1 = (this->ObjectStorage).Pad + 0x18;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 10:
    return;
  case 0xc:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xe:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x10:
    return;
  case 0x12:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x14:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x16:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x18:
    return;
  case 0x1a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x1c:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1e:
    return;
  case 0x20:
    return;
  case 0x22:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x24:
    if ((*(int *)((this->ObjectStorage).Pad + 0x24) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x26:
    return;
  case 0x28:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x2a:
    return;
  case 0x2c:
    return;
  case 0x2e:
    return;
  case 0x30:
    return;
  case 0x32:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x28);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x34:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x36:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x38:
    return;
  case 0x3a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x3c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x3e:
    return;
  case 0x40:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x42:
    return;
  case 0x44:
    return;
  case 0x46:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb01f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 4:
    return;
  case 6:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 8:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 10:
    return;
  case 0xc:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0xe:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x10:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x12:
    return;
  case 0x14:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x16:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x18:
    return;
  case 0x1a:
    return;
  case 0x1c:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x1e:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x20:
    return;
  case 0x22:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x24:
    return;
  case 0x26:
    return;
  case 0x28:
    return;
  case 0x2a:
    return;
  case 0x2c:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2e:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x30:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x32:
    return;
  case 0x34:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x36:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x38:
    return;
  case 0x3a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x3c:
    return;
  case 0x3e:
    return;
  case 0x40:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0250

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x40];
  puVar1 = (this->ObjectStorage).Pad + 0x18;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
              (*(TSharedRef<UE::Online::FUserPresence_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    return;
  case 0x1c:
    return;
  case 0x1e:
    return;
  case 0x20:
    return;
  case 0x22:
    return;
  case 0x24:
    return;
  case 0x26:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x28:
    return;
  case 0x2a:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x2c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x2e:
    return;
  case 0x30:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x32:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x34:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x36:
    return;
  case 0x38:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x3a:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x3c:
    return;
  case 0x3e:
    return;
  case 0x40:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x42:
    if ((*(int *)((this->ObjectStorage).Pad + 0x24) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x44:
    return;
  case 0x46:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x48:
    return;
  case 0x4a:
    return;
  case 0x4c:
    return;
  case 0x4e:
    return;
  case 0x50:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x28);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x52:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x54:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x56:
    return;
  case 0x58:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x5a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x5c:
    return;
  case 0x5e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x60:
    return;
  case 0x62:
    return;
  case 100:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb02b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb02c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x40];
  puVar1 = (this->ObjectStorage).Pad + 0x18;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x10:
    return;
  case 0x12:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x14:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x16:
    return;
  case 0x18:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1a:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1c:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1e:
    return;
  case 0x20:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x22:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x24:
    return;
  case 0x26:
    return;
  case 0x28:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x2a:
    if ((*(int *)((this->ObjectStorage).Pad + 0x24) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x2c:
    return;
  case 0x2e:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x30:
    return;
  case 0x32:
    return;
  case 0x34:
    return;
  case 0x36:
    return;
  case 0x38:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x28);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x3a:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x3c:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x3e:
    return;
  case 0x40:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x42:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x44:
    return;
  case 0x46:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x48:
    return;
  case 0x4a:
    return;
  case 0x4c:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0330

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0xe:
    return;
  case 0x10:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x12:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x14:
    return;
  case 0x16:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x18:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1a:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1c:
    return;
  case 0x1e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x20:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x22:
    return;
  case 0x24:
    return;
  case 0x26:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x28:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x2a:
    return;
  case 0x2c:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x2e:
    return;
  case 0x30:
    return;
  case 0x32:
    return;
  case 0x34:
    return;
  case 0x36:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x38:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x3a:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x3c:
    return;
  case 0x3e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x40:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x42:
    return;
  case 0x44:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x46:
    return;
  case 0x48:
    return;
  case 0x4a:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0390

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb03a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x40];
  puVar1 = (this->ObjectStorage).Pad + 0x18;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0xc:
    return;
  case 0xe:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x12:
    return;
  case 0x14:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x16:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x18:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x1a:
    return;
  case 0x1c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x1e:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x20:
    return;
  case 0x22:
    return;
  case 0x24:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x26:
    if ((*(int *)((this->ObjectStorage).Pad + 0x24) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x28:
    return;
  case 0x2a:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x2c:
    return;
  case 0x2e:
    return;
  case 0x30:
    return;
  case 0x32:
    return;
  case 0x34:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x28);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x36:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x38:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x3a:
    return;
  case 0x3c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x3e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x40:
    return;
  case 0x42:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x44:
    return;
  case 0x46:
    return;
  case 0x48:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0400

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  }
}

// DestroyObject @ 14eeb0460

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = (this->ObjectStorage).Pad[0x38];
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  }
}

// DestroyObject @ 14eeb04c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte bVar18;
  char *pcVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  uchar *puVar19;
  char cVar20;
  undefined2 uVar21;
  char cVar22;
  char *in_RDX;
  byte bVar23;
  char *unaff_RBX;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar28;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar29;
  byte bVar3;
  longlong *plVar17;
  
  bVar9 = (this->ObjectStorage).Pad[0x40];
  puVar19 = (this->ObjectStorage).Pad + 0x18;
  if (1 < (ulonglong)bVar9) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar13 = (uint *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar9];
  uVar21 = SUB82(in_RDX,0);
  bVar18 = (byte)((ulonglong)puVar13 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar9) {
  case 0:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 4:
    return;
  case 6:
    DestructItems<TSharedRef<UE::Online::ISession_const_,1>,int>
              (*(TSharedRef<UE::Online::ISession_const_,1> **)puVar19,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar19 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar19);
    return;
  case 8:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0xc:
    return;
  case 0xe:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x12:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 0x1c:
    DestructItems<TSharedRef<UE::Online::ISessionInvite_const_,1>,int>
              (*(TSharedRef<UE::Online::ISessionInvite_const_,1> **)puVar19,
               *(int *)((this->ObjectStorage).Pad + 0x20));
    if (*(void **)puVar19 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar19);
    return;
  case 0x1e:
    return;
  case 0x20:
    return;
  case 0x22:
    bVar18 = bVar18 & 0x70;
    DAT_1730aa81b = DAT_1730aa81b + bVar18;
    *unaff_RBX = *unaff_RBX + bVar18;
    uVar4 = in(uVar21);
    *unaff_RDI = uVar4;
    *unaff_RBP = *unaff_RBP + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
    break;
  }
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= (byte)unaff_RBX) {
LAB_15309c4c6_3:
    cVar8 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar8;
    pcVar12 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar21);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar19 + (longlong)unaff_RBP * 2 + 0x6f),uVar21);
    cVar8 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar12 = *pcVar12 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar21);
  uVar10 = *(uint *)(unaff_RDI + 0x70);
  puVar19 = (uchar *)(ulonglong)uVar10;
  bVar9 = (byte)puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  uVar6 = *puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  if (-1 < (char)(byte)*puVar13) {
    puVar13 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  cVar20 = (char)in_RDX;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1((byte)uVar6,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  puVar1 = puVar19 + -6;
  bVar23 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  puVar1 = puVar19 + -6;
  bVar23 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  *in_RDX = *in_RDX + bVar18;
  *(char *)in_R9 = (char)*in_R9 + -8;
  uVar6 = *puVar13;
  puVar13 = (uint *)(ulonglong)uVar6;
  cVar22 = (char)((ulonglong)in_RDX >> 8);
  *in_RDX = *in_RDX + cVar22;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar21);
  *in_RDX = *in_RDX + cVar22;
  *(char *)puVar13 = (char)*puVar13 + (char)uVar6;
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  piVar16 = (int *)(ulonglong)*puVar13;
  bVar23 = (byte)((ulonglong)unaff_RBX >> 8);
  *(byte *)piVar16 = (char)*piVar16 + bVar23;
  iVar11 = *piVar16;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar11 * 0x790072) >> 8);
  uVar6 = *(uint *)(ulonglong)(uint)(iVar11 * 0x790072);
  puVar13 = (uint *)(ulonglong)uVar6;
  pcVar12 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar21);
  *pcVar12 = *pcVar12 + (char)(uVar10 >> 8);
  unaff_RBX[in_FS_OFFSET] = unaff_RBX[in_FS_OFFSET] + cVar22;
  cVar8 = (char)uVar6;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)in_R9 = (char)*in_R9 + -0x20;
  piVar16 = (int *)(ulonglong)*puVar13;
  *(byte *)piVar16 = (char)*piVar16 + bVar23;
  uVar10 = *(int *)(ulonglong)(uint)(*piVar16 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
  uVar10 = in(0x4e);
  pbVar15 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
  bVar9 = *pbVar15;
  bVar18 = (byte)uVar10;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[0x49] = pbVar15[0x49] + (char)(uVar10 >> 8);
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  cVar8 = (char)(uVar10 >> 8);
  pbVar14[0x14ee549] = pbVar14[0x14ee549] + cVar8;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x14ef312] = pbVar14[0x14ef312] + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar15 = (byte *)(unaff_RBX + 0x3a);
  bVar7 = CARRY1(*pbVar15,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar24 = &DAT_450064f8;
  puVar26 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar12,uVar21);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar28 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar26,uVar21);
    puVar19 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar24 = &DAT_450064f0;
    puVar25 = &DAT_450064f0;
    puVar26 = puVar28;
    _DAT_450064f0 = puVar19;
    if (*pbVar15 != 0) {
      bVar7 = CARRY1(*pbVar14,bVar18);
      *pbVar14 = *pbVar14 + bVar18;
      goto LAB_15309c6e0;
    }
  }
  puVar25 = puVar24;
  puVar28 = puVar26;
  if (*pbVar15 == 0) {
    *(undefined8 *)(puVar24 + -8) = 0x49000000;
    out(*puVar26,uVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar14[1] = (pbVar14[1] - cVar20) - bVar7;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x4f] = pbVar14[0x4f] + cVar8;
  uVar10 = in(0x4e);
  pbVar15 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
  bVar9 = *pbVar15;
  bVar18 = (byte)uVar10;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  *pbVar15 = *pbVar15 + (char)(uVar10 >> 8);
  pbVar15 = (byte *)in(0x4e);
  *(int *)pbVar15 = *(int *)pbVar15 + (int)pbVar15;
  bVar9 = *pbVar15;
  bVar18 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar19 = puVar19 + -6;
  bVar9 = *puVar19;
  *puVar19 = *puVar19 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  *pbVar15 = *pbVar15 + cVar20;
  do {
    piVar16 = (int *)in(0x4e);
    *piVar16 = *piVar16 + (int)piVar16;
    bVar29 = SCARRY1((char)*piVar16,(char)piVar16);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar7 = (char)*piVar16 < '\0';
    pbVar15 = (byte *)CONCAT71((int7)((ulonglong)piVar16 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar29 == bVar7);
  *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
  cVar8 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar8;
  *pbVar15 = *pbVar15 + cVar8;
  pbVar15[0x14eee7e] = pbVar15[0x14eee7e] + cVar22;
  *pbVar15 = *pbVar15 + cVar8;
  pbVar15 = (byte *)in(0x4e);
  puVar26 = puVar25;
  do {
    iVar11 = (int)pbVar15;
    *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
    bVar9 = *pbVar15;
    bVar18 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar18;
    if (SCARRY1(bVar9,bVar18)) {
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      unaff_RBX[-0x12] = unaff_RBX[-0x12] + cVar20;
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      puVar28[(ulonglong)(uint)((int)unaff_RBP + (int)puVar28) * 8 + 0x4e] =
           puVar28[(ulonglong)(uint)((int)unaff_RBP + (int)puVar28) * 8 + 0x4e] + (byte)unaff_RBX;
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      *pbVar15 = *pbVar15 + bVar18;
      *(byte **)(puVar26 + -8) = pbVar15;
LAB_15309c7fc:
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      *pbVar15 = *pbVar15 + bVar18;
      pbVar15[0x5c] = pbVar15[0x5c] + cVar22;
      out(uVar21,bVar18);
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar21,bVar18);
    puVar27 = puVar26;
    do {
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      bVar2 = *pbVar15;
      bVar29 = SCARRY1(*pbVar15,bVar18);
      *pbVar15 = *pbVar15 + bVar18;
      bVar9 = *pbVar15;
      bVar3 = *pbVar15;
      puVar25 = puVar27 + -8;
      puVar26 = puVar27 + -8;
      *(byte **)(puVar27 + -8) = pbVar15;
      if ((char)bVar9 < '\0') {
        *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
        bVar9 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar18;
        if (!SCARRY1(bVar9,bVar18)) {
          out(uVar21,bVar18);
          *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
          bVar9 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar18;
          if (SCARRY1(bVar9,bVar18)) {
            *pbVar15 = *pbVar15 + bVar18;
            pbVar15[2] = pbVar15[2] + cVar22;
            out(uVar21,bVar18);
            *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
            *pbVar15 = *pbVar15 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar10 = in(0x4e);
          pbVar15 = (byte *)(ulonglong)uVar10;
          *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
          bVar9 = *pbVar15;
          bVar18 = (byte)uVar10;
          *pbVar15 = *pbVar15 + bVar18;
          bVar9 = bVar18 << 1 | CARRY1(bVar9,bVar18);
          plVar17 = (longlong *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9);
          out(uVar21,bVar9);
          *plVar17 = *plVar17 + in_R8;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
          in_RDX[0x14eea] = in_RDX[0x14eea] ^ bVar23;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar27 = puVar27 + -8;
    } while (CARRY1(bVar2,bVar18) || bVar3 == 0);
    bVar7 = false;
    if (bVar3 == 0 || bVar29) goto code_r0x00015309c749;
    *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
    *pbVar15 = *pbVar15 + bVar18;
    pbVar14 = (byte *)(in_RDX + -0x1b);
    *pbVar14 = *pbVar14 >> 6 | *pbVar14 << 2;
  } while( true );
}

// DestroyObject @ 14eeb0520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
              (*(TSharedRef<UE::Online::FUserPresence_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x1c:
    return;
  case 0x1e:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x20:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x22:
    return;
  case 0x24:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x26:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x28:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2a:
    return;
  case 0x2c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x2e:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x30:
    return;
  case 0x32:
    return;
  case 0x34:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x36:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x38:
    return;
  case 0x3a:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x3c:
    return;
  case 0x3e:
    return;
  case 0x40:
    return;
  case 0x42:
    return;
  case 0x44:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x46:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x48:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x4a:
    return;
  case 0x4c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x4e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x50:
    return;
  case 0x52:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x54:
    return;
  case 0x56:
    return;
  case 0x58:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0580

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0590

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb05a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb05b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
              (*(TSharedRef<UE::Online::FUserPresence_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    return;
  case 0x1c:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x1e:
    return;
  case 0x20:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x22:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x24:
    return;
  case 0x26:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x28:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2a:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2c:
    return;
  case 0x2e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x30:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x32:
    return;
  case 0x34:
    return;
  case 0x36:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x38:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x3a:
    return;
  case 0x3c:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x3e:
    return;
  case 0x40:
    return;
  case 0x42:
    return;
  case 0x44:
    return;
  case 0x46:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x48:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x4a:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x4c:
    return;
  case 0x4e:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x50:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x52:
    return;
  case 0x54:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x56:
    return;
  case 0x58:
    return;
  case 0x5a:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb0610

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte bVar18;
  char *pcVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  uchar *puVar19;
  char cVar20;
  undefined2 uVar21;
  char cVar22;
  char *in_RDX;
  byte bVar23;
  char *unaff_RBX;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar28;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar29;
  byte bVar3;
  longlong *plVar17;
  
  bVar9 = (this->ObjectStorage).Pad[0x40];
  puVar19 = (this->ObjectStorage).Pad + 0x18;
  if (1 < (ulonglong)bVar9) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar13 = (uint *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar9];
  uVar21 = SUB82(in_RDX,0);
  bVar18 = (byte)((ulonglong)puVar13 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar9) {
  case 0:
    return;
  case 1:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
    return;
  case 2:
    bVar18 = bVar18 & 0x70;
    DAT_1730aa81b = DAT_1730aa81b + bVar18;
    *unaff_RBX = *unaff_RBX + bVar18;
    uVar4 = in(uVar21);
    *unaff_RDI = uVar4;
    *unaff_RBP = *unaff_RBP + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= (byte)unaff_RBX) {
LAB_15309c4c6_3:
    cVar8 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar8;
    pcVar12 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar21);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar19 + (longlong)unaff_RBP * 2 + 0x6f),uVar21);
    cVar8 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar12 = *pcVar12 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar21);
  uVar10 = *(uint *)(unaff_RDI + 0x70);
  puVar19 = (uchar *)(ulonglong)uVar10;
  bVar9 = (byte)puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  uVar6 = *puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  if (-1 < (char)(byte)*puVar13) {
    puVar13 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  cVar20 = (char)in_RDX;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1((byte)uVar6,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  puVar1 = puVar19 + -6;
  bVar23 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  puVar1 = puVar19 + -6;
  bVar23 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  *in_RDX = *in_RDX + bVar18;
  *(char *)in_R9 = (char)*in_R9 + -8;
  uVar6 = *puVar13;
  puVar13 = (uint *)(ulonglong)uVar6;
  cVar22 = (char)((ulonglong)in_RDX >> 8);
  *in_RDX = *in_RDX + cVar22;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar21);
  *in_RDX = *in_RDX + cVar22;
  *(char *)puVar13 = (char)*puVar13 + (char)uVar6;
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  piVar16 = (int *)(ulonglong)*puVar13;
  bVar23 = (byte)((ulonglong)unaff_RBX >> 8);
  *(byte *)piVar16 = (char)*piVar16 + bVar23;
  iVar11 = *piVar16;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar11 * 0x790072) >> 8);
  uVar6 = *(uint *)(ulonglong)(uint)(iVar11 * 0x790072);
  puVar13 = (uint *)(ulonglong)uVar6;
  pcVar12 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar21);
  *pcVar12 = *pcVar12 + (char)(uVar10 >> 8);
  unaff_RBX[in_FS_OFFSET] = unaff_RBX[in_FS_OFFSET] + cVar22;
  cVar8 = (char)uVar6;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)in_R9 = (char)*in_R9 + -0x20;
  piVar16 = (int *)(ulonglong)*puVar13;
  *(byte *)piVar16 = (char)*piVar16 + bVar23;
  uVar10 = *(int *)(ulonglong)(uint)(*piVar16 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
  uVar10 = in(0x4e);
  pbVar15 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
  bVar9 = *pbVar15;
  bVar18 = (byte)uVar10;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[0x49] = pbVar15[0x49] + (char)(uVar10 >> 8);
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  cVar8 = (char)(uVar10 >> 8);
  pbVar14[0x14ee549] = pbVar14[0x14ee549] + cVar8;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x14ef312] = pbVar14[0x14ef312] + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar15 = (byte *)(unaff_RBX + 0x3a);
  bVar7 = CARRY1(*pbVar15,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar24 = &DAT_450064f8;
  puVar26 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar12,uVar21);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar28 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar26,uVar21);
    puVar19 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar24 = &DAT_450064f0;
    puVar25 = &DAT_450064f0;
    puVar26 = puVar28;
    _DAT_450064f0 = puVar19;
    if (*pbVar15 != 0) {
      bVar7 = CARRY1(*pbVar14,bVar18);
      *pbVar14 = *pbVar14 + bVar18;
      goto LAB_15309c6e0;
    }
  }
  puVar25 = puVar24;
  puVar28 = puVar26;
  if (*pbVar15 == 0) {
    *(undefined8 *)(puVar24 + -8) = 0x49000000;
    out(*puVar26,uVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar14[1] = (pbVar14[1] - cVar20) - bVar7;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x4f] = pbVar14[0x4f] + cVar8;
  uVar10 = in(0x4e);
  pbVar15 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
  bVar9 = *pbVar15;
  bVar18 = (byte)uVar10;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  *pbVar15 = *pbVar15 + (char)(uVar10 >> 8);
  pbVar15 = (byte *)in(0x4e);
  *(int *)pbVar15 = *(int *)pbVar15 + (int)pbVar15;
  bVar9 = *pbVar15;
  bVar18 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar1 = puVar19 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  puVar19 = puVar19 + -6;
  bVar9 = *puVar19;
  *puVar19 = *puVar19 + bVar18;
  pbVar15[1] = (pbVar15[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar15 = *pbVar15 + bVar18;
  *pbVar15 = *pbVar15 + cVar20;
  do {
    piVar16 = (int *)in(0x4e);
    *piVar16 = *piVar16 + (int)piVar16;
    bVar29 = SCARRY1((char)*piVar16,(char)piVar16);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar7 = (char)*piVar16 < '\0';
    pbVar15 = (byte *)CONCAT71((int7)((ulonglong)piVar16 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar29 == bVar7);
  *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
  cVar8 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar8;
  *pbVar15 = *pbVar15 + cVar8;
  pbVar15[0x14eee7e] = pbVar15[0x14eee7e] + cVar22;
  *pbVar15 = *pbVar15 + cVar8;
  pbVar15 = (byte *)in(0x4e);
  puVar26 = puVar25;
  do {
    iVar11 = (int)pbVar15;
    *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
    bVar9 = *pbVar15;
    bVar18 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar18;
    if (SCARRY1(bVar9,bVar18)) {
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      unaff_RBX[-0x12] = unaff_RBX[-0x12] + cVar20;
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      puVar28[(ulonglong)(uint)((int)unaff_RBP + (int)puVar28) * 8 + 0x4e] =
           puVar28[(ulonglong)(uint)((int)unaff_RBP + (int)puVar28) * 8 + 0x4e] + (byte)unaff_RBX;
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      *pbVar15 = *pbVar15 + bVar18;
      *(byte **)(puVar26 + -8) = pbVar15;
LAB_15309c7fc:
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      *pbVar15 = *pbVar15 + bVar18;
      pbVar15[0x5c] = pbVar15[0x5c] + cVar22;
      out(uVar21,bVar18);
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar21,bVar18);
    puVar27 = puVar26;
    do {
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
      *pbVar15 = *pbVar15 + bVar18;
      *(int *)pbVar15 = *(int *)pbVar15 + iVar11;
      bVar2 = *pbVar15;
      bVar29 = SCARRY1(*pbVar15,bVar18);
      *pbVar15 = *pbVar15 + bVar18;
      bVar9 = *pbVar15;
      bVar3 = *pbVar15;
      puVar25 = puVar27 + -8;
      puVar26 = puVar27 + -8;
      *(byte **)(puVar27 + -8) = pbVar15;
      if ((char)bVar9 < '\0') {
        *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
        bVar9 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar18;
        if (!SCARRY1(bVar9,bVar18)) {
          out(uVar21,bVar18);
          *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
          bVar9 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar18;
          if (SCARRY1(bVar9,bVar18)) {
            *pbVar15 = *pbVar15 + bVar18;
            pbVar15[2] = pbVar15[2] + cVar22;
            out(uVar21,bVar18);
            *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
            *pbVar15 = *pbVar15 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar10 = in(0x4e);
          pbVar15 = (byte *)(ulonglong)uVar10;
          *(uint *)pbVar15 = *(int *)pbVar15 + uVar10;
          bVar9 = *pbVar15;
          bVar18 = (byte)uVar10;
          *pbVar15 = *pbVar15 + bVar18;
          bVar9 = bVar18 << 1 | CARRY1(bVar9,bVar18);
          plVar17 = (longlong *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9);
          out(uVar21,bVar9);
          *plVar17 = *plVar17 + in_R8;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
          in_RDX[0x14eea] = in_RDX[0x14eea] ^ bVar23;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar27 = puVar27 + -8;
    } while (CARRY1(bVar2,bVar18) || bVar3 == 0);
    bVar7 = false;
    if (bVar3 == 0 || bVar29) goto code_r0x00015309c749;
    *(longlong *)pbVar15 = *(longlong *)pbVar15 + in_R8;
    *pbVar15 = *pbVar15 + bVar18;
    pbVar14 = (byte *)(in_RDX + -0x1b);
    *pbVar14 = *pbVar14 >> 6 | *pbVar14 << 2;
  } while( true );
}

// DestroyObject @ 14eeb0670

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x38];
  puVar1 = (this->ObjectStorage).Pad + 0x10;
  if (1 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
              (*(TSharedRef<UE::Online::FLobby_const_,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 4:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 6:
    return;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0xc:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0xe:
    return;
  case 0x10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x12:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    DestructItems<UE::Online::FEntitlement,int>
              (*(FEntitlement **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x1a:
    if ((*(int *)((this->ObjectStorage).Pad + 0x1c) == -1) ||
       (pvVar5 = *(void **)puVar1, pvVar5 == (void *)0x0)) {
      return;
    }
    break;
  case 0x1c:
    return;
  case 0x1e:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0x20:
    return;
  case 0x22:
    return;
  case 0x24:
    return;
  case 0x26:
    return;
  case 0x28:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x20);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2a:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2c:
    pvVar5 = *(void **)((this->ObjectStorage).Pad + 0x18);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 0x2e:
    return;
  case 0x30:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x32:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x34:
    return;
  case 0x36:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x38:
    return;
  case 0x3a:
    return;
  case 0x3c:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14eeb06d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb06e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb06f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0700

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0710

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0720

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0730

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FBatchQueryPresenceHelper,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::FBatchQueryPresenceHelper,1> *this)

{
  UE::Online::FBatchQueryPresenceHelper::~FBatchQueryPresenceHelper
            ((FBatchQueryPresenceHelper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eeb0740

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FOnlineConfigStructGConfig,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineConfigStructGConfig,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14eeb0780

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FSchemaRegistry,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::FSchemaRegistry,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x98] = '\0';
  (this->ObjectStorage).Pad[0x99] = '\0';
  (this->ObjectStorage).Pad[0x9a] = '\0';
  (this->ObjectStorage).Pad[0x9b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x90);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x50));
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d560

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FRelationshipUpdated_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FRelationshipUpdated_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d5a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d5e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d620

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FAcceptFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FAcceptFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d660

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d6e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d720

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>_const_&,UE::Online::TOnlineResult<UE::Online::FBlockUser>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>_const_&,UE::Online::TOnlineResult<UE::Online::FBlockUser>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d7a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryBlockedUsers>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryBlockedUsers>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d7e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d820

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryFriends>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryFriends>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d860

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d8a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d8e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d920

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserAvatar>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserAvatar>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d960

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d9a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserInfo>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserInfo>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9d9e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9da20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9da60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9daa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>_const_&,UE::Online::TOnlineResult<UE::Online::FResetStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>_const_&,UE::Online::TOnlineResult<UE::Online::FResetStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dae0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9db20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendFriendInvite>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9db60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dba0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>_const_&,UE::Online::TOnlineResult<UE::Online::FShowUserProfile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>_const_&,UE::Online::TOnlineResult<UE::Online::FShowUserProfile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dbe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dc20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dc60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dca0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dce0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dd20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>_const_&,UE::Online::TOnlineResult<UE::Online::FTriggerEvent>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>_const_&,UE::Online::TOnlineResult<UE::Online::FTriggerEvent>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dd60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dda0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateStats>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateStats>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dde0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9de20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileCopyFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileCopyFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9de60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileDeleteFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileDeleteFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dee0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9df20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileEnumerateFiles>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9df60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dfa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileReadFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9dfe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e020

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileWriteFile>_const_&),FDefaultDelegateUserPolicy>,1>
::DestroyObject(TIntrusiveReferenceController<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileWriteFile>_const_&),FDefaultDelegateUserPolicy>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::
  ~TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>
            ((TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e070

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::
  ~TOnlineAsyncOp<UE::Online::FBatchQueryStats>
            ((TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e080

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *this
          )

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::~TOnlineAsyncOp<UE::Online::FBlockUser>
            ((TOnlineAsyncOp<UE::Online::FBlockUser> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e090

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::
  ~TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>
            ((TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e0a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::~TOnlineAsyncOp<UE::Online::FQueryFriends>
            ((TOnlineAsyncOp<UE::Online::FQueryFriends> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e0b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::~TOnlineAsyncOp<UE::Online::FQueryStats>
            ((TOnlineAsyncOp<UE::Online::FQueryStats> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e0c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::
  ~TOnlineAsyncOp<UE::Online::FQueryUserAvatar>
            ((TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e0d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::
  ~TOnlineAsyncOp<UE::Online::FQueryUserInfo>
            ((TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e0e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::
  ~TOnlineAsyncOp<UE::Online::FRejectFriendInvite>
            ((TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e0f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::~TOnlineAsyncOp<UE::Online::FResetStats>
            ((TOnlineAsyncOp<UE::Online::FResetStats> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e100

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::
  ~TOnlineAsyncOp<UE::Online::FSendFriendInvite>
            ((TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e110

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::
  ~TOnlineAsyncOp<UE::Online::FShowUserProfile>
            ((TOnlineAsyncOp<UE::Online::FShowUserProfile> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e120

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::
  ~TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>
            ((TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e130

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::
  ~TOnlineAsyncOp<UE::Online::FTitleFileReadFile>
            ((TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e140

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::~TOnlineAsyncOp<UE::Online::FTriggerEvent>
            ((TOnlineAsyncOp<UE::Online::FTriggerEvent> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e150

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1>
           *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::~TOnlineAsyncOp<UE::Online::FUpdateStats>
            ((TOnlineAsyncOp<UE::Online::FUpdateStats> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e160

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::
  ~TOnlineAsyncOp<UE::Online::FUserFileCopyFile>
            ((TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e170

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::
  ~TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>
            ((TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e180

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::
  ~TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>
            ((TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e190

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::
  ~TOnlineAsyncOp<UE::Online::FUserFileReadFile>
            ((TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e1a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1>
              *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::
  ~TOnlineAsyncOp<UE::Online::FUserFileWriteFile>
            ((TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e1b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e1c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e1d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e1e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e1f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e200

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e210

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e220

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e230

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e240

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e250

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e270

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e280

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e290

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e2a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e2b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e2c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e2d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e2e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e2f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::FAsyncOpSharedHandleState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::FAsyncOpSharedHandleState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::FAsyncOpSharedHandleState::
  ~FAsyncOpSharedHandleState((FAsyncOpSharedHandleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e300

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  char *pcVar22;
  uchar *puVar23;
  char cVar24;
  undefined2 uVar25;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar26;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar32;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar33;
  byte bVar3;
  uint *puVar16;
  longlong *plVar21;
  byte bVar27;
  
  bVar13 = (this->ObjectStorage).Pad[0x38];
  puVar23 = (this->ObjectStorage).Pad + 0x10;
  if (1 < (ulonglong)bVar13) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar19 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar13];
  cVar10 = (char)((ulonglong)in_RDX >> 8);
  uVar25 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    uVar14 = (uint)pbVar19 & 0x20007300;
    pcVar22 = (char *)(ulonglong)uVar14;
    *in_RDX = *in_RDX + cVar10;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar10;
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    pcVar17 = (char *)((longlong)pcVar22 * 2 + 0x3a);
    *pcVar17 = *pcVar17 + cVar10;
    cVar10 = (char)(uVar14 >> 8);
    *pcVar22 = *pcVar22 + cVar10;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar10;
    *pcVar22 = *pcVar22;
    *pcVar22 = *pcVar22;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    break;
  }
  bVar13 = (byte)unaff_RBX;
  if (bVar13 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    puVar23 = (uchar *)(ulonglong)*(uint *)(pbVar19 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar25);
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)puVar23;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar27;
  cVar24 = (char)in_RDX;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x50] = pbVar19[0x50] + cVar10;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x22] = pbVar19[0x22] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  piVar20 = (int *)(ulonglong)uVar14;
  *piVar20 = *piVar20 + uVar14;
  *(char *)piVar20 = (char)*piVar20 + (char)uVar14;
  cVar24 = cVar24 + cVar10;
  pcVar17 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar24);
  uVar25 = SUB82(pcVar17,0);
  uVar14 = in(uVar25);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  bVar27 = (char)((ulonglong)unaff_RBX >> 8) + bVar27 + CARRY1(bVar9,bVar27);
  lVar26 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar27,bVar13));
  bVar9 = in(uVar25);
  puVar16 = (uint *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar9);
  *(longlong *)puVar16 = *(longlong *)puVar16 + in_R8;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar13) {
LAB_15309c4c6_3:
    cVar10 = (char)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar10;
    pcVar17 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar25);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar23 + (longlong)unaff_RBP * 2 + 0x6f),uVar25);
    cVar10 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar17 = *pcVar17 + cVar10;
    *pcVar17 = *pcVar17 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar25);
  uVar5 = *(uint *)(unaff_RDI + 0x70);
  puVar23 = (uchar *)(ulonglong)uVar5;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  uVar7 = *puVar16;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (-1 < (char)(byte)*puVar16) {
    puVar16 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1((byte)uVar7,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *pcVar17 = *pcVar17 + (char)(uVar14 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar14 = *puVar16;
  puVar16 = (uint *)(ulonglong)uVar14;
  *pcVar17 = *pcVar17 + cVar10;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar25);
  *pcVar17 = *pcVar17 + cVar10;
  *(char *)puVar16 = (char)*puVar16 + (char)uVar14;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  iVar15 = *piVar20;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar15 * 0x790072) >> 8);
  uVar14 = *(uint *)(ulonglong)(uint)(iVar15 * 0x790072);
  puVar16 = (uint *)(ulonglong)uVar14;
  pcVar22 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar25);
  *pcVar22 = *pcVar22 + (char)(uVar5 >> 8);
  *(char *)(in_FS_OFFSET + lVar26) = *(char *)(in_FS_OFFSET + lVar26) + cVar10;
  cVar11 = (char)uVar14;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  uVar14 = *(int *)(ulonglong)(uint)(*piVar20 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + (char)uVar14;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[0x49] = pbVar19[0x49] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar14;
  bVar9 = *pbVar18;
  bVar12 = (byte)uVar14;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[1] = (pbVar18[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar18 = *pbVar18 + bVar12;
  cVar11 = (char)(uVar14 >> 8);
  pbVar18[0x14ee549] = pbVar18[0x14ee549] + cVar11;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x14ef312] = pbVar18[0x14ef312] + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar19 = (byte *)(lVar26 + 0x3a);
  bVar8 = CARRY1(*pbVar19,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar28 = &DAT_450064f8;
  puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar22,uVar25);
  _DAT_450064f8 = unaff_RDI;
  if (bVar8) {
    puVar32 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar30,uVar25);
    puVar23 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar28 = &DAT_450064f0;
    puVar29 = &DAT_450064f0;
    puVar30 = puVar32;
    _DAT_450064f0 = puVar23;
    if (*pbVar19 != 0) {
      bVar8 = CARRY1(*pbVar18,bVar12);
      *pbVar18 = *pbVar18 + bVar12;
      goto LAB_15309c6e0;
    }
  }
  puVar29 = puVar28;
  puVar32 = puVar30;
  if (*pbVar19 == 0) {
    *(undefined8 *)(puVar28 + -8) = 0x49000000;
    out(*puVar30,uVar25);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar18[1] = (pbVar18[1] - cVar24) - bVar8;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x4f] = pbVar18[0x4f] + cVar11;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + (char)(uVar14 >> 8);
  pbVar19 = (byte *)in(0x4e);
  *(int *)pbVar19 = *(int *)pbVar19 + (int)pbVar19;
  bVar9 = *pbVar19;
  bVar12 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar23 = puVar23 + -6;
  bVar9 = *puVar23;
  *puVar23 = *puVar23 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + cVar24;
  do {
    piVar20 = (int *)in(0x4e);
    *piVar20 = *piVar20 + (int)piVar20;
    bVar33 = SCARRY1((char)*piVar20,(char)piVar20);
    *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
    bVar8 = (char)*piVar20 < '\0';
    pbVar19 = (byte *)CONCAT71((int7)((ulonglong)piVar20 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar33 == bVar8);
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  cVar11 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cVar11;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19[0x14eee7e] = pbVar19[0x14eee7e] + cVar10;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19 = (byte *)in(0x4e);
  puVar30 = puVar29;
  do {
    iVar15 = (int)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
    bVar9 = *pbVar19;
    bVar12 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar12;
    if (SCARRY1(bVar9,bVar12)) {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(char *)(lVar26 + -0x12) = *(char *)(lVar26 + -0x12) + cVar24;
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] =
           puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] + bVar13;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      *(byte **)(puVar30 + -8) = pbVar19;
LAB_15309c7fc:
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      pbVar19[0x5c] = pbVar19[0x5c] + cVar10;
      out(uVar25,bVar12);
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar25,bVar12);
    puVar31 = puVar30;
    do {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      bVar9 = *pbVar19;
      bVar33 = SCARRY1(*pbVar19,bVar12);
      *pbVar19 = *pbVar19 + bVar12;
      bVar2 = *pbVar19;
      bVar3 = *pbVar19;
      puVar29 = puVar31 + -8;
      puVar30 = puVar31 + -8;
      *(byte **)(puVar31 + -8) = pbVar19;
      if ((char)bVar2 < '\0') {
        *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
        bVar13 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        if (!SCARRY1(bVar13,bVar12)) {
          out(uVar25,bVar12);
          *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
          bVar13 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar12;
          if (SCARRY1(bVar13,bVar12)) {
            *pbVar19 = *pbVar19 + bVar12;
            pbVar19[2] = pbVar19[2] + cVar10;
            out(uVar25,bVar12);
            *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
            *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar14 = in(0x4e);
          pbVar19 = (byte *)(ulonglong)uVar14;
          *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
          bVar13 = *pbVar19;
          bVar9 = (byte)uVar14;
          *pbVar19 = *pbVar19 + bVar9;
          bVar13 = bVar9 << 1 | CARRY1(bVar13,bVar9);
          plVar21 = (longlong *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar13);
          out(uVar25,bVar13);
          *plVar21 = *plVar21 + in_R8;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
          pcVar17[0x14eea] = pcVar17[0x14eea] ^ bVar27;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar31 = puVar31 + -8;
    } while (CARRY1(bVar9,bVar12) || bVar3 == 0);
    bVar8 = false;
    if (bVar3 == 0 || bVar33) goto code_r0x00015309c749;
    *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
    *pbVar19 = *pbVar19 + bVar12;
    pbVar18 = (byte *)(pcVar17 + -0x1b);
    *pbVar18 = *pbVar18 >> 6 | *pbVar18 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e360

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e370

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  char *pcVar22;
  uchar *puVar23;
  char cVar24;
  undefined2 uVar25;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar26;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar32;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar33;
  byte bVar3;
  uint *puVar16;
  longlong *plVar21;
  byte bVar27;
  
  bVar13 = (this->ObjectStorage).Pad[0x38];
  puVar23 = (this->ObjectStorage).Pad + 0x10;
  if (1 < (ulonglong)bVar13) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar19 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBlockUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar13];
  cVar10 = (char)((ulonglong)in_RDX >> 8);
  uVar25 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    uVar14 = (uint)pbVar19 & 0x20007300;
    pcVar22 = (char *)(ulonglong)uVar14;
    *in_RDX = *in_RDX + cVar10;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar10;
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    pcVar17 = (char *)((longlong)pcVar22 * 2 + 0x3a);
    *pcVar17 = *pcVar17 + cVar10;
    cVar10 = (char)(uVar14 >> 8);
    *pcVar22 = *pcVar22 + cVar10;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar10;
    *pcVar22 = *pcVar22;
    *pcVar22 = *pcVar22;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
    break;
  }
  bVar13 = (byte)unaff_RBX;
  if (bVar13 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    puVar23 = (uchar *)(ulonglong)*(uint *)(pbVar19 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar25);
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)puVar23;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar27;
  cVar24 = (char)in_RDX;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x50] = pbVar19[0x50] + cVar10;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x22] = pbVar19[0x22] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  piVar20 = (int *)(ulonglong)uVar14;
  *piVar20 = *piVar20 + uVar14;
  *(char *)piVar20 = (char)*piVar20 + (char)uVar14;
  cVar24 = cVar24 + cVar10;
  pcVar17 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar24);
  uVar25 = SUB82(pcVar17,0);
  uVar14 = in(uVar25);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  bVar27 = (char)((ulonglong)unaff_RBX >> 8) + bVar27 + CARRY1(bVar9,bVar27);
  lVar26 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar27,bVar13));
  bVar9 = in(uVar25);
  puVar16 = (uint *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar9);
  *(longlong *)puVar16 = *(longlong *)puVar16 + in_R8;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar13) {
LAB_15309c4c6_3:
    cVar10 = (char)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar10;
    pcVar17 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar25);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar23 + (longlong)unaff_RBP * 2 + 0x6f),uVar25);
    cVar10 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar17 = *pcVar17 + cVar10;
    *pcVar17 = *pcVar17 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar25);
  uVar5 = *(uint *)(unaff_RDI + 0x70);
  puVar23 = (uchar *)(ulonglong)uVar5;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  uVar7 = *puVar16;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (-1 < (char)(byte)*puVar16) {
    puVar16 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1((byte)uVar7,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *pcVar17 = *pcVar17 + (char)(uVar14 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar14 = *puVar16;
  puVar16 = (uint *)(ulonglong)uVar14;
  *pcVar17 = *pcVar17 + cVar10;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar25);
  *pcVar17 = *pcVar17 + cVar10;
  *(char *)puVar16 = (char)*puVar16 + (char)uVar14;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  iVar15 = *piVar20;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar15 * 0x790072) >> 8);
  uVar14 = *(uint *)(ulonglong)(uint)(iVar15 * 0x790072);
  puVar16 = (uint *)(ulonglong)uVar14;
  pcVar22 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar25);
  *pcVar22 = *pcVar22 + (char)(uVar5 >> 8);
  *(char *)(in_FS_OFFSET + lVar26) = *(char *)(in_FS_OFFSET + lVar26) + cVar10;
  cVar11 = (char)uVar14;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  uVar14 = *(int *)(ulonglong)(uint)(*piVar20 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + (char)uVar14;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[0x49] = pbVar19[0x49] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar14;
  bVar9 = *pbVar18;
  bVar12 = (byte)uVar14;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[1] = (pbVar18[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar18 = *pbVar18 + bVar12;
  cVar11 = (char)(uVar14 >> 8);
  pbVar18[0x14ee549] = pbVar18[0x14ee549] + cVar11;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x14ef312] = pbVar18[0x14ef312] + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar19 = (byte *)(lVar26 + 0x3a);
  bVar8 = CARRY1(*pbVar19,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar28 = &DAT_450064f8;
  puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar22,uVar25);
  _DAT_450064f8 = unaff_RDI;
  if (bVar8) {
    puVar32 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar30,uVar25);
    puVar23 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar28 = &DAT_450064f0;
    puVar29 = &DAT_450064f0;
    puVar30 = puVar32;
    _DAT_450064f0 = puVar23;
    if (*pbVar19 != 0) {
      bVar8 = CARRY1(*pbVar18,bVar12);
      *pbVar18 = *pbVar18 + bVar12;
      goto LAB_15309c6e0;
    }
  }
  puVar29 = puVar28;
  puVar32 = puVar30;
  if (*pbVar19 == 0) {
    *(undefined8 *)(puVar28 + -8) = 0x49000000;
    out(*puVar30,uVar25);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar18[1] = (pbVar18[1] - cVar24) - bVar8;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x4f] = pbVar18[0x4f] + cVar11;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + (char)(uVar14 >> 8);
  pbVar19 = (byte *)in(0x4e);
  *(int *)pbVar19 = *(int *)pbVar19 + (int)pbVar19;
  bVar9 = *pbVar19;
  bVar12 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar23 = puVar23 + -6;
  bVar9 = *puVar23;
  *puVar23 = *puVar23 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + cVar24;
  do {
    piVar20 = (int *)in(0x4e);
    *piVar20 = *piVar20 + (int)piVar20;
    bVar33 = SCARRY1((char)*piVar20,(char)piVar20);
    *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
    bVar8 = (char)*piVar20 < '\0';
    pbVar19 = (byte *)CONCAT71((int7)((ulonglong)piVar20 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar33 == bVar8);
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  cVar11 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cVar11;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19[0x14eee7e] = pbVar19[0x14eee7e] + cVar10;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19 = (byte *)in(0x4e);
  puVar30 = puVar29;
  do {
    iVar15 = (int)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
    bVar9 = *pbVar19;
    bVar12 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar12;
    if (SCARRY1(bVar9,bVar12)) {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(char *)(lVar26 + -0x12) = *(char *)(lVar26 + -0x12) + cVar24;
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] =
           puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] + bVar13;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      *(byte **)(puVar30 + -8) = pbVar19;
LAB_15309c7fc:
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      pbVar19[0x5c] = pbVar19[0x5c] + cVar10;
      out(uVar25,bVar12);
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar25,bVar12);
    puVar31 = puVar30;
    do {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      bVar9 = *pbVar19;
      bVar33 = SCARRY1(*pbVar19,bVar12);
      *pbVar19 = *pbVar19 + bVar12;
      bVar2 = *pbVar19;
      bVar3 = *pbVar19;
      puVar29 = puVar31 + -8;
      puVar30 = puVar31 + -8;
      *(byte **)(puVar31 + -8) = pbVar19;
      if ((char)bVar2 < '\0') {
        *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
        bVar13 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        if (!SCARRY1(bVar13,bVar12)) {
          out(uVar25,bVar12);
          *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
          bVar13 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar12;
          if (SCARRY1(bVar13,bVar12)) {
            *pbVar19 = *pbVar19 + bVar12;
            pbVar19[2] = pbVar19[2] + cVar10;
            out(uVar25,bVar12);
            *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
            *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar14 = in(0x4e);
          pbVar19 = (byte *)(ulonglong)uVar14;
          *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
          bVar13 = *pbVar19;
          bVar9 = (byte)uVar14;
          *pbVar19 = *pbVar19 + bVar9;
          bVar13 = bVar9 << 1 | CARRY1(bVar13,bVar9);
          plVar21 = (longlong *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar13);
          out(uVar25,bVar13);
          *plVar21 = *plVar21 + in_R8;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
          pcVar17[0x14eea] = pcVar17[0x14eea] ^ bVar27;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar31 = puVar31 + -8;
    } while (CARRY1(bVar9,bVar12) || bVar3 == 0);
    bVar8 = false;
    if (bVar3 == 0 || bVar33) goto code_r0x00015309c749;
    *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
    *pbVar19 = *pbVar19 + bVar12;
    pbVar18 = (byte *)(pcVar17 + -0x1b);
    *pbVar18 = *pbVar18 >> 6 | *pbVar18 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e3d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  char *pcVar22;
  uchar *puVar23;
  char cVar24;
  undefined2 uVar25;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar26;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar32;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar33;
  byte bVar3;
  uint *puVar16;
  longlong *plVar21;
  byte bVar27;
  
  bVar13 = (this->ObjectStorage).Pad[0x38];
  puVar23 = (this->ObjectStorage).Pad + 0x10;
  if (1 < (ulonglong)bVar13) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar19 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar13];
  cVar10 = (char)((ulonglong)in_RDX >> 8);
  uVar25 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    uVar14 = (uint)pbVar19 & 0x20007300;
    pcVar22 = (char *)(ulonglong)uVar14;
    *in_RDX = *in_RDX + cVar10;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar10;
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    pcVar17 = (char *)((longlong)pcVar22 * 2 + 0x3a);
    *pcVar17 = *pcVar17 + cVar10;
    cVar10 = (char)(uVar14 >> 8);
    *pcVar22 = *pcVar22 + cVar10;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar10;
    *pcVar22 = *pcVar22;
    *pcVar22 = *pcVar22;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    break;
  }
  bVar13 = (byte)unaff_RBX;
  if (bVar13 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    puVar23 = (uchar *)(ulonglong)*(uint *)(pbVar19 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar25);
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)puVar23;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar27;
  cVar24 = (char)in_RDX;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x50] = pbVar19[0x50] + cVar10;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x22] = pbVar19[0x22] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  piVar20 = (int *)(ulonglong)uVar14;
  *piVar20 = *piVar20 + uVar14;
  *(char *)piVar20 = (char)*piVar20 + (char)uVar14;
  cVar24 = cVar24 + cVar10;
  pcVar17 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar24);
  uVar25 = SUB82(pcVar17,0);
  uVar14 = in(uVar25);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  bVar27 = (char)((ulonglong)unaff_RBX >> 8) + bVar27 + CARRY1(bVar9,bVar27);
  lVar26 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar27,bVar13));
  bVar9 = in(uVar25);
  puVar16 = (uint *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar9);
  *(longlong *)puVar16 = *(longlong *)puVar16 + in_R8;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar13) {
LAB_15309c4c6_3:
    cVar10 = (char)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar10;
    pcVar17 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar25);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar23 + (longlong)unaff_RBP * 2 + 0x6f),uVar25);
    cVar10 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar17 = *pcVar17 + cVar10;
    *pcVar17 = *pcVar17 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar25);
  uVar5 = *(uint *)(unaff_RDI + 0x70);
  puVar23 = (uchar *)(ulonglong)uVar5;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  uVar7 = *puVar16;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (-1 < (char)(byte)*puVar16) {
    puVar16 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1((byte)uVar7,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *pcVar17 = *pcVar17 + (char)(uVar14 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar14 = *puVar16;
  puVar16 = (uint *)(ulonglong)uVar14;
  *pcVar17 = *pcVar17 + cVar10;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar25);
  *pcVar17 = *pcVar17 + cVar10;
  *(char *)puVar16 = (char)*puVar16 + (char)uVar14;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  iVar15 = *piVar20;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar15 * 0x790072) >> 8);
  uVar14 = *(uint *)(ulonglong)(uint)(iVar15 * 0x790072);
  puVar16 = (uint *)(ulonglong)uVar14;
  pcVar22 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar25);
  *pcVar22 = *pcVar22 + (char)(uVar5 >> 8);
  *(char *)(in_FS_OFFSET + lVar26) = *(char *)(in_FS_OFFSET + lVar26) + cVar10;
  cVar11 = (char)uVar14;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  uVar14 = *(int *)(ulonglong)(uint)(*piVar20 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + (char)uVar14;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[0x49] = pbVar19[0x49] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar14;
  bVar9 = *pbVar18;
  bVar12 = (byte)uVar14;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[1] = (pbVar18[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar18 = *pbVar18 + bVar12;
  cVar11 = (char)(uVar14 >> 8);
  pbVar18[0x14ee549] = pbVar18[0x14ee549] + cVar11;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x14ef312] = pbVar18[0x14ef312] + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar19 = (byte *)(lVar26 + 0x3a);
  bVar8 = CARRY1(*pbVar19,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar28 = &DAT_450064f8;
  puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar22,uVar25);
  _DAT_450064f8 = unaff_RDI;
  if (bVar8) {
    puVar32 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar30,uVar25);
    puVar23 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar28 = &DAT_450064f0;
    puVar29 = &DAT_450064f0;
    puVar30 = puVar32;
    _DAT_450064f0 = puVar23;
    if (*pbVar19 != 0) {
      bVar8 = CARRY1(*pbVar18,bVar12);
      *pbVar18 = *pbVar18 + bVar12;
      goto LAB_15309c6e0;
    }
  }
  puVar29 = puVar28;
  puVar32 = puVar30;
  if (*pbVar19 == 0) {
    *(undefined8 *)(puVar28 + -8) = 0x49000000;
    out(*puVar30,uVar25);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar18[1] = (pbVar18[1] - cVar24) - bVar8;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x4f] = pbVar18[0x4f] + cVar11;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + (char)(uVar14 >> 8);
  pbVar19 = (byte *)in(0x4e);
  *(int *)pbVar19 = *(int *)pbVar19 + (int)pbVar19;
  bVar9 = *pbVar19;
  bVar12 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar23 = puVar23 + -6;
  bVar9 = *puVar23;
  *puVar23 = *puVar23 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + cVar24;
  do {
    piVar20 = (int *)in(0x4e);
    *piVar20 = *piVar20 + (int)piVar20;
    bVar33 = SCARRY1((char)*piVar20,(char)piVar20);
    *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
    bVar8 = (char)*piVar20 < '\0';
    pbVar19 = (byte *)CONCAT71((int7)((ulonglong)piVar20 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar33 == bVar8);
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  cVar11 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cVar11;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19[0x14eee7e] = pbVar19[0x14eee7e] + cVar10;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19 = (byte *)in(0x4e);
  puVar30 = puVar29;
  do {
    iVar15 = (int)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
    bVar9 = *pbVar19;
    bVar12 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar12;
    if (SCARRY1(bVar9,bVar12)) {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(char *)(lVar26 + -0x12) = *(char *)(lVar26 + -0x12) + cVar24;
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] =
           puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] + bVar13;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      *(byte **)(puVar30 + -8) = pbVar19;
LAB_15309c7fc:
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      pbVar19[0x5c] = pbVar19[0x5c] + cVar10;
      out(uVar25,bVar12);
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar25,bVar12);
    puVar31 = puVar30;
    do {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      bVar9 = *pbVar19;
      bVar33 = SCARRY1(*pbVar19,bVar12);
      *pbVar19 = *pbVar19 + bVar12;
      bVar2 = *pbVar19;
      bVar3 = *pbVar19;
      puVar29 = puVar31 + -8;
      puVar30 = puVar31 + -8;
      *(byte **)(puVar31 + -8) = pbVar19;
      if ((char)bVar2 < '\0') {
        *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
        bVar13 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        if (!SCARRY1(bVar13,bVar12)) {
          out(uVar25,bVar12);
          *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
          bVar13 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar12;
          if (SCARRY1(bVar13,bVar12)) {
            *pbVar19 = *pbVar19 + bVar12;
            pbVar19[2] = pbVar19[2] + cVar10;
            out(uVar25,bVar12);
            *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
            *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar14 = in(0x4e);
          pbVar19 = (byte *)(ulonglong)uVar14;
          *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
          bVar13 = *pbVar19;
          bVar9 = (byte)uVar14;
          *pbVar19 = *pbVar19 + bVar9;
          bVar13 = bVar9 << 1 | CARRY1(bVar13,bVar9);
          plVar21 = (longlong *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar13);
          out(uVar25,bVar13);
          *plVar21 = *plVar21 + in_R8;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
          pcVar17[0x14eea] = pcVar17[0x14eea] ^ bVar27;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar31 = puVar31 + -8;
    } while (CARRY1(bVar9,bVar12) || bVar3 == 0);
    bVar8 = false;
    if (bVar3 == 0 || bVar33) goto code_r0x00015309c749;
    *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
    *pbVar19 = *pbVar19 + bVar12;
    pbVar18 = (byte *)(pcVar17 + -0x1b);
    *pbVar18 = *pbVar18 >> 6 | *pbVar18 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e430

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  char *pcVar22;
  uchar *puVar23;
  char cVar24;
  undefined2 uVar25;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar26;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar32;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar33;
  byte bVar3;
  uint *puVar16;
  longlong *plVar21;
  byte bVar27;
  
  bVar13 = (this->ObjectStorage).Pad[0x38];
  puVar23 = (this->ObjectStorage).Pad + 0x10;
  if (1 < (ulonglong)bVar13) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar19 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar13];
  cVar10 = (char)((ulonglong)in_RDX >> 8);
  uVar25 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    return;
  case 1:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    uVar14 = (uint)pbVar19 & 0x20007300;
    pcVar22 = (char *)(ulonglong)uVar14;
    *in_RDX = *in_RDX + cVar10;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar10;
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    pcVar17 = (char *)((longlong)pcVar22 * 2 + 0x3a);
    *pcVar17 = *pcVar17 + cVar10;
    cVar10 = (char)(uVar14 >> 8);
    *pcVar22 = *pcVar22 + cVar10;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar10;
    *pcVar22 = *pcVar22;
    *pcVar22 = *pcVar22;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar13 = (byte)unaff_RBX;
  if (bVar13 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    puVar23 = (uchar *)(ulonglong)*(uint *)(pbVar19 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar25);
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)puVar23;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar27;
  cVar24 = (char)in_RDX;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x50] = pbVar19[0x50] + cVar10;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x22] = pbVar19[0x22] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  piVar20 = (int *)(ulonglong)uVar14;
  *piVar20 = *piVar20 + uVar14;
  *(char *)piVar20 = (char)*piVar20 + (char)uVar14;
  cVar24 = cVar24 + cVar10;
  pcVar17 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar24);
  uVar25 = SUB82(pcVar17,0);
  uVar14 = in(uVar25);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  bVar27 = (char)((ulonglong)unaff_RBX >> 8) + bVar27 + CARRY1(bVar9,bVar27);
  lVar26 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar27,bVar13));
  bVar9 = in(uVar25);
  puVar16 = (uint *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar9);
  *(longlong *)puVar16 = *(longlong *)puVar16 + in_R8;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar13) {
LAB_15309c4c6_3:
    cVar10 = (char)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar10;
    pcVar17 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar25);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar23 + (longlong)unaff_RBP * 2 + 0x6f),uVar25);
    cVar10 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar17 = *pcVar17 + cVar10;
    *pcVar17 = *pcVar17 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar25);
  uVar5 = *(uint *)(unaff_RDI + 0x70);
  puVar23 = (uchar *)(ulonglong)uVar5;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  uVar7 = *puVar16;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (-1 < (char)(byte)*puVar16) {
    puVar16 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1((byte)uVar7,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *pcVar17 = *pcVar17 + (char)(uVar14 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar14 = *puVar16;
  puVar16 = (uint *)(ulonglong)uVar14;
  *pcVar17 = *pcVar17 + cVar10;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar25);
  *pcVar17 = *pcVar17 + cVar10;
  *(char *)puVar16 = (char)*puVar16 + (char)uVar14;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  iVar15 = *piVar20;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar15 * 0x790072) >> 8);
  uVar14 = *(uint *)(ulonglong)(uint)(iVar15 * 0x790072);
  puVar16 = (uint *)(ulonglong)uVar14;
  pcVar22 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar25);
  *pcVar22 = *pcVar22 + (char)(uVar5 >> 8);
  *(char *)(in_FS_OFFSET + lVar26) = *(char *)(in_FS_OFFSET + lVar26) + cVar10;
  cVar11 = (char)uVar14;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  uVar14 = *(int *)(ulonglong)(uint)(*piVar20 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + (char)uVar14;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[0x49] = pbVar19[0x49] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar14;
  bVar9 = *pbVar18;
  bVar12 = (byte)uVar14;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[1] = (pbVar18[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar18 = *pbVar18 + bVar12;
  cVar11 = (char)(uVar14 >> 8);
  pbVar18[0x14ee549] = pbVar18[0x14ee549] + cVar11;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x14ef312] = pbVar18[0x14ef312] + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar19 = (byte *)(lVar26 + 0x3a);
  bVar8 = CARRY1(*pbVar19,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar28 = &DAT_450064f8;
  puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar22,uVar25);
  _DAT_450064f8 = unaff_RDI;
  if (bVar8) {
    puVar32 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar30,uVar25);
    puVar23 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar28 = &DAT_450064f0;
    puVar29 = &DAT_450064f0;
    puVar30 = puVar32;
    _DAT_450064f0 = puVar23;
    if (*pbVar19 != 0) {
      bVar8 = CARRY1(*pbVar18,bVar12);
      *pbVar18 = *pbVar18 + bVar12;
      goto LAB_15309c6e0;
    }
  }
  puVar29 = puVar28;
  puVar32 = puVar30;
  if (*pbVar19 == 0) {
    *(undefined8 *)(puVar28 + -8) = 0x49000000;
    out(*puVar30,uVar25);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar18[1] = (pbVar18[1] - cVar24) - bVar8;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x4f] = pbVar18[0x4f] + cVar11;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + (char)(uVar14 >> 8);
  pbVar19 = (byte *)in(0x4e);
  *(int *)pbVar19 = *(int *)pbVar19 + (int)pbVar19;
  bVar9 = *pbVar19;
  bVar12 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar23 = puVar23 + -6;
  bVar9 = *puVar23;
  *puVar23 = *puVar23 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + cVar24;
  do {
    piVar20 = (int *)in(0x4e);
    *piVar20 = *piVar20 + (int)piVar20;
    bVar33 = SCARRY1((char)*piVar20,(char)piVar20);
    *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
    bVar8 = (char)*piVar20 < '\0';
    pbVar19 = (byte *)CONCAT71((int7)((ulonglong)piVar20 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar33 == bVar8);
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  cVar11 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cVar11;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19[0x14eee7e] = pbVar19[0x14eee7e] + cVar10;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19 = (byte *)in(0x4e);
  puVar30 = puVar29;
  do {
    iVar15 = (int)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
    bVar9 = *pbVar19;
    bVar12 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar12;
    if (SCARRY1(bVar9,bVar12)) {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(char *)(lVar26 + -0x12) = *(char *)(lVar26 + -0x12) + cVar24;
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] =
           puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] + bVar13;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      *(byte **)(puVar30 + -8) = pbVar19;
LAB_15309c7fc:
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      pbVar19[0x5c] = pbVar19[0x5c] + cVar10;
      out(uVar25,bVar12);
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar25,bVar12);
    puVar31 = puVar30;
    do {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      bVar9 = *pbVar19;
      bVar33 = SCARRY1(*pbVar19,bVar12);
      *pbVar19 = *pbVar19 + bVar12;
      bVar2 = *pbVar19;
      bVar3 = *pbVar19;
      puVar29 = puVar31 + -8;
      puVar30 = puVar31 + -8;
      *(byte **)(puVar31 + -8) = pbVar19;
      if ((char)bVar2 < '\0') {
        *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
        bVar13 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        if (!SCARRY1(bVar13,bVar12)) {
          out(uVar25,bVar12);
          *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
          bVar13 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar12;
          if (SCARRY1(bVar13,bVar12)) {
            *pbVar19 = *pbVar19 + bVar12;
            pbVar19[2] = pbVar19[2] + cVar10;
            out(uVar25,bVar12);
            *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
            *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar14 = in(0x4e);
          pbVar19 = (byte *)(ulonglong)uVar14;
          *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
          bVar13 = *pbVar19;
          bVar9 = (byte)uVar14;
          *pbVar19 = *pbVar19 + bVar9;
          bVar13 = bVar9 << 1 | CARRY1(bVar13,bVar9);
          plVar21 = (longlong *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar13);
          out(uVar25,bVar13);
          *plVar21 = *plVar21 + in_R8;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
          pcVar17[0x14eea] = pcVar17[0x14eea] ^ bVar27;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar31 = puVar31 + -8;
    } while (CARRY1(bVar9,bVar12) || bVar3 == 0);
    bVar8 = false;
    if (bVar3 == 0 || bVar33) goto code_r0x00015309c749;
    *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
    *pbVar19 = *pbVar19 + bVar12;
    pbVar18 = (byte *)(pcVar17 + -0x1b);
    *pbVar18 = *pbVar18 >> 6 | *pbVar18 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e490

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e4a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e4b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e4c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  char *pcVar22;
  uchar *puVar23;
  char cVar24;
  undefined2 uVar25;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar26;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar32;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar33;
  byte bVar3;
  uint *puVar16;
  longlong *plVar21;
  byte bVar27;
  
  bVar13 = (this->ObjectStorage).Pad[0x38];
  puVar23 = (this->ObjectStorage).Pad + 0x10;
  if (1 < (ulonglong)bVar13) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar19 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar13];
  cVar10 = (char)((ulonglong)in_RDX >> 8);
  uVar25 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    uVar14 = (uint)pbVar19 & 0x20007300;
    pcVar22 = (char *)(ulonglong)uVar14;
    *in_RDX = *in_RDX + cVar10;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar10;
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    pcVar17 = (char *)((longlong)pcVar22 * 2 + 0x3a);
    *pcVar17 = *pcVar17 + cVar10;
    cVar10 = (char)(uVar14 >> 8);
    *pcVar22 = *pcVar22 + cVar10;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar10;
    *pcVar22 = *pcVar22;
    *pcVar22 = *pcVar22;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    break;
  }
  bVar13 = (byte)unaff_RBX;
  if (bVar13 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    puVar23 = (uchar *)(ulonglong)*(uint *)(pbVar19 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar25);
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)puVar23;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar27;
  cVar24 = (char)in_RDX;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x50] = pbVar19[0x50] + cVar10;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x22] = pbVar19[0x22] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  piVar20 = (int *)(ulonglong)uVar14;
  *piVar20 = *piVar20 + uVar14;
  *(char *)piVar20 = (char)*piVar20 + (char)uVar14;
  cVar24 = cVar24 + cVar10;
  pcVar17 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar24);
  uVar25 = SUB82(pcVar17,0);
  uVar14 = in(uVar25);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  bVar27 = (char)((ulonglong)unaff_RBX >> 8) + bVar27 + CARRY1(bVar9,bVar27);
  lVar26 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar27,bVar13));
  bVar9 = in(uVar25);
  puVar16 = (uint *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar9);
  *(longlong *)puVar16 = *(longlong *)puVar16 + in_R8;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar13) {
LAB_15309c4c6_3:
    cVar10 = (char)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar10;
    pcVar17 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar25);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar23 + (longlong)unaff_RBP * 2 + 0x6f),uVar25);
    cVar10 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar17 = *pcVar17 + cVar10;
    *pcVar17 = *pcVar17 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar25);
  uVar5 = *(uint *)(unaff_RDI + 0x70);
  puVar23 = (uchar *)(ulonglong)uVar5;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  uVar7 = *puVar16;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (-1 < (char)(byte)*puVar16) {
    puVar16 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1((byte)uVar7,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *pcVar17 = *pcVar17 + (char)(uVar14 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar14 = *puVar16;
  puVar16 = (uint *)(ulonglong)uVar14;
  *pcVar17 = *pcVar17 + cVar10;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar25);
  *pcVar17 = *pcVar17 + cVar10;
  *(char *)puVar16 = (char)*puVar16 + (char)uVar14;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  iVar15 = *piVar20;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar15 * 0x790072) >> 8);
  uVar14 = *(uint *)(ulonglong)(uint)(iVar15 * 0x790072);
  puVar16 = (uint *)(ulonglong)uVar14;
  pcVar22 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar25);
  *pcVar22 = *pcVar22 + (char)(uVar5 >> 8);
  *(char *)(in_FS_OFFSET + lVar26) = *(char *)(in_FS_OFFSET + lVar26) + cVar10;
  cVar11 = (char)uVar14;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  uVar14 = *(int *)(ulonglong)(uint)(*piVar20 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + (char)uVar14;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[0x49] = pbVar19[0x49] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar14;
  bVar9 = *pbVar18;
  bVar12 = (byte)uVar14;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[1] = (pbVar18[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar18 = *pbVar18 + bVar12;
  cVar11 = (char)(uVar14 >> 8);
  pbVar18[0x14ee549] = pbVar18[0x14ee549] + cVar11;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x14ef312] = pbVar18[0x14ef312] + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar19 = (byte *)(lVar26 + 0x3a);
  bVar8 = CARRY1(*pbVar19,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar28 = &DAT_450064f8;
  puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar22,uVar25);
  _DAT_450064f8 = unaff_RDI;
  if (bVar8) {
    puVar32 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar30,uVar25);
    puVar23 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar28 = &DAT_450064f0;
    puVar29 = &DAT_450064f0;
    puVar30 = puVar32;
    _DAT_450064f0 = puVar23;
    if (*pbVar19 != 0) {
      bVar8 = CARRY1(*pbVar18,bVar12);
      *pbVar18 = *pbVar18 + bVar12;
      goto LAB_15309c6e0;
    }
  }
  puVar29 = puVar28;
  puVar32 = puVar30;
  if (*pbVar19 == 0) {
    *(undefined8 *)(puVar28 + -8) = 0x49000000;
    out(*puVar30,uVar25);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar18[1] = (pbVar18[1] - cVar24) - bVar8;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x4f] = pbVar18[0x4f] + cVar11;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + (char)(uVar14 >> 8);
  pbVar19 = (byte *)in(0x4e);
  *(int *)pbVar19 = *(int *)pbVar19 + (int)pbVar19;
  bVar9 = *pbVar19;
  bVar12 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar23 = puVar23 + -6;
  bVar9 = *puVar23;
  *puVar23 = *puVar23 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + cVar24;
  do {
    piVar20 = (int *)in(0x4e);
    *piVar20 = *piVar20 + (int)piVar20;
    bVar33 = SCARRY1((char)*piVar20,(char)piVar20);
    *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
    bVar8 = (char)*piVar20 < '\0';
    pbVar19 = (byte *)CONCAT71((int7)((ulonglong)piVar20 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar33 == bVar8);
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  cVar11 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cVar11;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19[0x14eee7e] = pbVar19[0x14eee7e] + cVar10;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19 = (byte *)in(0x4e);
  puVar30 = puVar29;
  do {
    iVar15 = (int)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
    bVar9 = *pbVar19;
    bVar12 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar12;
    if (SCARRY1(bVar9,bVar12)) {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(char *)(lVar26 + -0x12) = *(char *)(lVar26 + -0x12) + cVar24;
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] =
           puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] + bVar13;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      *(byte **)(puVar30 + -8) = pbVar19;
LAB_15309c7fc:
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      pbVar19[0x5c] = pbVar19[0x5c] + cVar10;
      out(uVar25,bVar12);
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar25,bVar12);
    puVar31 = puVar30;
    do {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      bVar9 = *pbVar19;
      bVar33 = SCARRY1(*pbVar19,bVar12);
      *pbVar19 = *pbVar19 + bVar12;
      bVar2 = *pbVar19;
      bVar3 = *pbVar19;
      puVar29 = puVar31 + -8;
      puVar30 = puVar31 + -8;
      *(byte **)(puVar31 + -8) = pbVar19;
      if ((char)bVar2 < '\0') {
        *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
        bVar13 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        if (!SCARRY1(bVar13,bVar12)) {
          out(uVar25,bVar12);
          *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
          bVar13 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar12;
          if (SCARRY1(bVar13,bVar12)) {
            *pbVar19 = *pbVar19 + bVar12;
            pbVar19[2] = pbVar19[2] + cVar10;
            out(uVar25,bVar12);
            *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
            *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar14 = in(0x4e);
          pbVar19 = (byte *)(ulonglong)uVar14;
          *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
          bVar13 = *pbVar19;
          bVar9 = (byte)uVar14;
          *pbVar19 = *pbVar19 + bVar9;
          bVar13 = bVar9 << 1 | CARRY1(bVar13,bVar9);
          plVar21 = (longlong *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar13);
          out(uVar25,bVar13);
          *plVar21 = *plVar21 + in_R8;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
          pcVar17[0x14eea] = pcVar17[0x14eea] ^ bVar27;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar31 = puVar31 + -8;
    } while (CARRY1(bVar9,bVar12) || bVar3 == 0);
    bVar8 = false;
    if (bVar3 == 0 || bVar33) goto code_r0x00015309c749;
    *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
    *pbVar19 = *pbVar19 + bVar12;
    pbVar18 = (byte *)(pcVar17 + -0x1b);
    *pbVar18 = *pbVar18 >> 6 | *pbVar18 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e520

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  char *pcVar21;
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  char cVar22;
  undefined2 uVar23;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar24;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar30;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar31;
  byte bVar2;
  uint *puVar15;
  longlong *plVar20;
  byte bVar25;
  
  bVar12 = (this->ObjectStorage).Pad[0x38];
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)((this->ObjectStorage).Pad + 0x10);
  if (1 < (ulonglong)bVar12) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar18 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FResetStats::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar12];
  cVar9 = (char)((ulonglong)in_RDX >> 8);
  uVar23 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar12) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    DestructItems<UE::Online::FUserStats,int>
              (*(FUserStats **)this_00,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)this_00 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)this_00);
    return;
  case 4:
    return;
  case 6:
    this[1].ObjectStorage.Pad[0] = '\0';
    this[1].ObjectStorage.Pad[1] = '\0';
    this[1].ObjectStorage.Pad[2] = '\0';
    this[1].ObjectStorage.Pad[3] = '\0';
    if ((void *)this[1]._padding_ != (void *)0x0) {
      FMemory::Free((void *)this[1]._padding_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    uVar13 = (uint)pbVar18 & 0x20007300;
    pcVar21 = (char *)(ulonglong)uVar13;
    *in_RDX = *in_RDX + cVar9;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar9;
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    pcVar16 = (char *)((longlong)pcVar21 * 2 + 0x3a);
    *pcVar16 = *pcVar16 + cVar9;
    cVar9 = (char)(uVar13 >> 8);
    *pcVar21 = *pcVar21 + cVar9;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar9;
    *pcVar21 = *pcVar21;
    *pcVar21 = *pcVar21;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    break;
  }
  bVar12 = (byte)unaff_RBX;
  if (bVar12 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(pbVar18 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar23);
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)this_00;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar25;
  cVar22 = (char)in_RDX;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x50] = pbVar18[0x50] + cVar9;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x22] = pbVar18[0x22] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  piVar19 = (int *)(ulonglong)uVar13;
  *piVar19 = *piVar19 + uVar13;
  *(char *)piVar19 = (char)*piVar19 + (char)uVar13;
  cVar22 = cVar22 + cVar9;
  pcVar16 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar22);
  uVar23 = SUB82(pcVar16,0);
  uVar13 = in(uVar23);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  bVar25 = (char)((ulonglong)unaff_RBX >> 8) + bVar25 + CARRY1(bVar8,bVar25);
  lVar24 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar25,bVar12));
  bVar8 = in(uVar23);
  puVar15 = (uint *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar8);
  *(longlong *)puVar15 = *(longlong *)puVar15 + in_R8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar12) {
LAB_15309c4c6_3:
    cVar9 = (char)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar9;
    pcVar16 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar23);
    out(*(undefined1 *)(ulonglong)*(uint *)(&this_00[1].field_0x37 + (longlong)unaff_RBP * 2),uVar23
       );
    cVar9 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar16 = *pcVar16 + cVar9;
    *pcVar16 = *pcVar16 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar23);
  uVar4 = *(uint *)(unaff_RDI + 0x70);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(ulonglong)uVar4;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  uVar6 = *puVar15;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (-1 < (char)(byte)*puVar15) {
    puVar15 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1((byte)uVar6,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *pcVar16 = *pcVar16 + (char)(uVar13 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar13 = *puVar15;
  puVar15 = (uint *)(ulonglong)uVar13;
  *pcVar16 = *pcVar16 + cVar9;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar23);
  *pcVar16 = *pcVar16 + cVar9;
  *(char *)puVar15 = (char)*puVar15 + (char)uVar13;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  iVar14 = *piVar19;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar14 * 0x790072) >> 8);
  uVar13 = *(uint *)(ulonglong)(uint)(iVar14 * 0x790072);
  puVar15 = (uint *)(ulonglong)uVar13;
  pcVar21 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar23);
  *pcVar21 = *pcVar21 + (char)(uVar4 >> 8);
  *(char *)(in_FS_OFFSET + lVar24) = *(char *)(in_FS_OFFSET + lVar24) + cVar9;
  cVar10 = (char)uVar13;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  uVar13 = *(int *)(ulonglong)(uint)(*piVar19 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar13 = *(char *)(ulonglong)uVar13 + (char)uVar13;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[0x49] = pbVar18[0x49] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  pbVar17 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar17 = *(int *)pbVar17 + uVar13;
  bVar8 = *pbVar17;
  bVar11 = (byte)uVar13;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[1] = (pbVar17[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar17 = *pbVar17 + bVar11;
  cVar10 = (char)(uVar13 >> 8);
  pbVar17[0x14ee549] = pbVar17[0x14ee549] + cVar10;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x14ef312] = pbVar17[0x14ef312] + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar18 = (byte *)(lVar24 + 0x3a);
  bVar7 = CARRY1(*pbVar18,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar26 = &DAT_450064f8;
  puVar28 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar21,uVar23);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar28,uVar23);
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar26 = &DAT_450064f0;
    puVar27 = &DAT_450064f0;
    puVar28 = puVar30;
    _DAT_450064f0 = this_00;
    if (*pbVar18 != 0) {
      bVar7 = CARRY1(*pbVar17,bVar11);
      *pbVar17 = *pbVar17 + bVar11;
      goto LAB_15309c6e0;
    }
  }
  puVar27 = puVar26;
  puVar30 = puVar28;
  if (*pbVar18 == 0) {
    *(undefined8 *)(puVar26 + -8) = 0x49000000;
    out(*puVar28,uVar23);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar17[1] = (pbVar17[1] - cVar22) - bVar7;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x4f] = pbVar17[0x4f] + cVar10;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + (char)(uVar13 >> 8);
  pbVar18 = (byte *)in(0x4e);
  *(int *)pbVar18 = *(int *)pbVar18 + (int)pbVar18;
  bVar8 = *pbVar18;
  bVar11 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + cVar22;
  do {
    piVar19 = (int *)in(0x4e);
    *piVar19 = *piVar19 + (int)piVar19;
    bVar31 = SCARRY1((char)*piVar19,(char)piVar19);
    *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
    bVar7 = (char)*piVar19 < '\0';
    pbVar18 = (byte *)CONCAT71((int7)((ulonglong)piVar19 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar31 == bVar7);
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  cVar10 = (char)pbVar18;
  *pbVar18 = *pbVar18 + cVar10;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18[0x14eee7e] = pbVar18[0x14eee7e] + cVar9;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18 = (byte *)in(0x4e);
  puVar28 = puVar27;
  do {
    iVar14 = (int)pbVar18;
    *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
    bVar8 = *pbVar18;
    bVar11 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar11;
    if (SCARRY1(bVar8,bVar11)) {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(char *)(lVar24 + -0x12) = *(char *)(lVar24 + -0x12) + cVar22;
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] =
           puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] + bVar12;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      *(byte **)(puVar28 + -8) = pbVar18;
LAB_15309c7fc:
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      pbVar18[0x5c] = pbVar18[0x5c] + cVar9;
      out(uVar23,bVar11);
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar23,bVar11);
    puVar29 = puVar28;
    do {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      bVar8 = *pbVar18;
      bVar31 = SCARRY1(*pbVar18,bVar11);
      *pbVar18 = *pbVar18 + bVar11;
      bVar1 = *pbVar18;
      bVar2 = *pbVar18;
      puVar27 = puVar29 + -8;
      puVar28 = puVar29 + -8;
      *(byte **)(puVar29 + -8) = pbVar18;
      if ((char)bVar1 < '\0') {
        *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
        bVar12 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar11;
        if (!SCARRY1(bVar12,bVar11)) {
          out(uVar23,bVar11);
          *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
          bVar12 = *pbVar18;
          *pbVar18 = *pbVar18 + bVar11;
          if (SCARRY1(bVar12,bVar11)) {
            *pbVar18 = *pbVar18 + bVar11;
            pbVar18[2] = pbVar18[2] + cVar9;
            out(uVar23,bVar11);
            *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
            *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar13 = in(0x4e);
          pbVar18 = (byte *)(ulonglong)uVar13;
          *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
          bVar12 = *pbVar18;
          bVar8 = (byte)uVar13;
          *pbVar18 = *pbVar18 + bVar8;
          bVar12 = bVar8 << 1 | CARRY1(bVar12,bVar8);
          plVar20 = (longlong *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar12);
          out(uVar23,bVar12);
          *plVar20 = *plVar20 + in_R8;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
          pcVar16[0x14eea] = pcVar16[0x14eea] ^ bVar25;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar29 = puVar29 + -8;
    } while (CARRY1(bVar8,bVar11) || bVar2 == 0);
    bVar7 = false;
    if (bVar2 == 0 || bVar31) goto code_r0x00015309c749;
    *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
    *pbVar18 = *pbVar18 + bVar11;
    pbVar17 = (byte *)(pcVar16 + -0x1b);
    *pbVar17 = *pbVar17 >> 6 | *pbVar17 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e580

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::FAsyncOpSharedState,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  char *pcVar22;
  uchar *puVar23;
  char cVar24;
  undefined2 uVar25;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar26;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar32;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar33;
  byte bVar3;
  uint *puVar16;
  longlong *plVar21;
  byte bVar27;
  
  bVar13 = (this->ObjectStorage).Pad[0x38];
  puVar23 = (this->ObjectStorage).Pad + 0x10;
  if (1 < (ulonglong)bVar13) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar19 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar13];
  cVar10 = (char)((ulonglong)in_RDX >> 8);
  uVar25 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    uVar14 = (uint)pbVar19 & 0x20007300;
    pcVar22 = (char *)(ulonglong)uVar14;
    *in_RDX = *in_RDX + cVar10;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar10;
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    pcVar17 = (char *)((longlong)pcVar22 * 2 + 0x3a);
    *pcVar17 = *pcVar17 + cVar10;
    cVar10 = (char)(uVar14 >> 8);
    *pcVar22 = *pcVar22 + cVar10;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar10;
    *pcVar22 = *pcVar22;
    *pcVar22 = *pcVar22;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    break;
  }
  bVar13 = (byte)unaff_RBX;
  if (bVar13 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    puVar23 = (uchar *)(ulonglong)*(uint *)(pbVar19 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar25);
    uVar4 = in(uVar25);
    *unaff_RDI = uVar4;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)puVar23;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar27;
  cVar24 = (char)in_RDX;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x50] = pbVar19[0x50] + cVar10;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar27;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar27);
  *pbVar19 = *pbVar19 + bVar27;
  pbVar19[0x22] = pbVar19[0x22] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  piVar20 = (int *)(ulonglong)uVar14;
  *piVar20 = *piVar20 + uVar14;
  *(char *)piVar20 = (char)*piVar20 + (char)uVar14;
  cVar24 = cVar24 + cVar10;
  pcVar17 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar24);
  uVar25 = SUB82(pcVar17,0);
  uVar14 = in(uVar25);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  bVar9 = *pbVar19;
  bVar27 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar27;
  bVar27 = (char)((ulonglong)unaff_RBX >> 8) + bVar27 + CARRY1(bVar9,bVar27);
  lVar26 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar27,bVar13));
  bVar9 = in(uVar25);
  puVar16 = (uint *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar9);
  *(longlong *)puVar16 = *(longlong *)puVar16 + in_R8;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar13) {
LAB_15309c4c6_3:
    cVar10 = (char)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    *(byte *)puVar16 = (byte)*puVar16 + cVar10;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar10;
    pcVar17 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar25);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar23 + (longlong)unaff_RBP * 2 + 0x6f),uVar25);
    cVar10 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar17 = *pcVar17 + cVar10;
    *pcVar17 = *pcVar17 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar25);
  uVar5 = *(uint *)(unaff_RDI + 0x70);
  puVar23 = (uchar *)(ulonglong)uVar5;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  uVar7 = *puVar16;
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  if (-1 < (char)(byte)*puVar16) {
    puVar16 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1((byte)uVar7,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  puVar1 = puVar23 + -6;
  bVar12 = *puVar1;
  *puVar1 = *puVar1 + bVar9;
  *(byte *)((longlong)puVar16 + 1) =
       (*(byte *)((longlong)puVar16 + 1) - cVar24) - CARRY1(bVar12,bVar9);
  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
  *pcVar17 = *pcVar17 + (char)(uVar14 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar14 = *puVar16;
  puVar16 = (uint *)(ulonglong)uVar14;
  *pcVar17 = *pcVar17 + cVar10;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar25);
  *pcVar17 = *pcVar17 + cVar10;
  *(char *)puVar16 = (char)*puVar16 + (char)uVar14;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  iVar15 = *piVar20;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar15 * 0x790072) >> 8);
  uVar14 = *(uint *)(ulonglong)(uint)(iVar15 * 0x790072);
  puVar16 = (uint *)(ulonglong)uVar14;
  pcVar22 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar25);
  *pcVar22 = *pcVar22 + (char)(uVar5 >> 8);
  *(char *)(in_FS_OFFSET + lVar26) = *(char *)(in_FS_OFFSET + lVar26) + cVar10;
  cVar11 = (char)uVar14;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)puVar16 = (char)*puVar16 + cVar11;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar20 = (int *)(ulonglong)*puVar16;
  *(byte *)piVar20 = (char)*piVar20 + bVar27;
  uVar14 = *(int *)(ulonglong)(uint)(*piVar20 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + (char)uVar14;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[0x49] = pbVar19[0x49] + (char)(uVar14 >> 8);
  uVar14 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar14;
  bVar9 = *pbVar18;
  bVar12 = (byte)uVar14;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[1] = (pbVar18[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar18 = *pbVar18 + bVar12;
  cVar11 = (char)(uVar14 >> 8);
  pbVar18[0x14ee549] = pbVar18[0x14ee549] + cVar11;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x14ef312] = pbVar18[0x14ef312] + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar19 = (byte *)(lVar26 + 0x3a);
  bVar8 = CARRY1(*pbVar19,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar28 = &DAT_450064f8;
  puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar22,uVar25);
  _DAT_450064f8 = unaff_RDI;
  if (bVar8) {
    puVar32 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar30,uVar25);
    puVar23 = (uchar *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar28 = &DAT_450064f0;
    puVar29 = &DAT_450064f0;
    puVar30 = puVar32;
    _DAT_450064f0 = puVar23;
    if (*pbVar19 != 0) {
      bVar8 = CARRY1(*pbVar18,bVar12);
      *pbVar18 = *pbVar18 + bVar12;
      goto LAB_15309c6e0;
    }
  }
  puVar29 = puVar28;
  puVar32 = puVar30;
  if (*pbVar19 == 0) {
    *(undefined8 *)(puVar28 + -8) = 0x49000000;
    out(*puVar30,uVar25);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar18[1] = (pbVar18[1] - cVar24) - bVar8;
  *pbVar18 = *pbVar18 + bVar12;
  pbVar18[0x4f] = pbVar18[0x4f] + cVar11;
  uVar14 = in(0x4e);
  pbVar19 = (byte *)(ulonglong)uVar14;
  *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
  bVar9 = *pbVar19;
  bVar12 = (byte)uVar14;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + (char)(uVar14 >> 8);
  pbVar19 = (byte *)in(0x4e);
  *(int *)pbVar19 = *(int *)pbVar19 + (int)pbVar19;
  bVar9 = *pbVar19;
  bVar12 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar1 = puVar23 + -6;
  bVar9 = *puVar1;
  *puVar1 = *puVar1 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  puVar23 = puVar23 + -6;
  bVar9 = *puVar23;
  *puVar23 = *puVar23 + bVar12;
  pbVar19[1] = (pbVar19[1] - cVar24) - CARRY1(bVar9,bVar12);
  *pbVar19 = *pbVar19 + bVar12;
  *pbVar19 = *pbVar19 + cVar24;
  do {
    piVar20 = (int *)in(0x4e);
    *piVar20 = *piVar20 + (int)piVar20;
    bVar33 = SCARRY1((char)*piVar20,(char)piVar20);
    *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
    bVar8 = (char)*piVar20 < '\0';
    pbVar19 = (byte *)CONCAT71((int7)((ulonglong)piVar20 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar33 == bVar8);
  *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
  cVar11 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cVar11;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19[0x14eee7e] = pbVar19[0x14eee7e] + cVar10;
  *pbVar19 = *pbVar19 + cVar11;
  pbVar19 = (byte *)in(0x4e);
  puVar30 = puVar29;
  do {
    iVar15 = (int)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
    bVar9 = *pbVar19;
    bVar12 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar12;
    if (SCARRY1(bVar9,bVar12)) {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(char *)(lVar26 + -0x12) = *(char *)(lVar26 + -0x12) + cVar24;
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] =
           puVar32[(ulonglong)(uint)((int)unaff_RBP + (int)puVar32) * 8 + 0x4e] + bVar13;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      *(byte **)(puVar30 + -8) = pbVar19;
LAB_15309c7fc:
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      *pbVar19 = *pbVar19 + bVar12;
      pbVar19[0x5c] = pbVar19[0x5c] + cVar10;
      out(uVar25,bVar12);
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar25,bVar12);
    puVar31 = puVar30;
    do {
      *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
      *pbVar19 = *pbVar19 + bVar12;
      *(int *)pbVar19 = *(int *)pbVar19 + iVar15;
      bVar9 = *pbVar19;
      bVar33 = SCARRY1(*pbVar19,bVar12);
      *pbVar19 = *pbVar19 + bVar12;
      bVar2 = *pbVar19;
      bVar3 = *pbVar19;
      puVar29 = puVar31 + -8;
      puVar30 = puVar31 + -8;
      *(byte **)(puVar31 + -8) = pbVar19;
      if ((char)bVar2 < '\0') {
        *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
        bVar13 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        if (!SCARRY1(bVar13,bVar12)) {
          out(uVar25,bVar12);
          *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
          bVar13 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar12;
          if (SCARRY1(bVar13,bVar12)) {
            *pbVar19 = *pbVar19 + bVar12;
            pbVar19[2] = pbVar19[2] + cVar10;
            out(uVar25,bVar12);
            *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
            *pbVar19 = *pbVar19 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar14 = in(0x4e);
          pbVar19 = (byte *)(ulonglong)uVar14;
          *(uint *)pbVar19 = *(int *)pbVar19 + uVar14;
          bVar13 = *pbVar19;
          bVar9 = (byte)uVar14;
          *pbVar19 = *pbVar19 + bVar9;
          bVar13 = bVar9 << 1 | CARRY1(bVar13,bVar9);
          plVar21 = (longlong *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),bVar13);
          out(uVar25,bVar13);
          *plVar21 = *plVar21 + in_R8;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
          pcVar17[0x14eea] = pcVar17[0x14eea] ^ bVar27;
          *(byte *)plVar21 = (char)*plVar21 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar31 = puVar31 + -8;
    } while (CARRY1(bVar9,bVar12) || bVar3 == 0);
    bVar8 = false;
    if (bVar3 == 0 || bVar33) goto code_r0x00015309c749;
    *(longlong *)pbVar19 = *(longlong *)pbVar19 + in_R8;
    *pbVar19 = *pbVar19 + bVar12;
    pbVar18 = (byte *)(pcVar17 + -0x1b);
    *pbVar18 = *pbVar18 >> 6 | *pbVar18 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e5e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  char *pcVar21;
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  char cVar22;
  undefined2 uVar23;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar24;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar30;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar31;
  byte bVar2;
  uint *puVar15;
  longlong *plVar20;
  byte bVar25;
  
  bVar12 = (this->ObjectStorage).Pad[0x38];
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)((this->ObjectStorage).Pad + 0x10);
  if (1 < (ulonglong)bVar12) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar18 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar12];
  cVar9 = (char)((ulonglong)in_RDX >> 8);
  uVar23 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar12) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    return;
  case 10:
    return;
  case 0xc:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0xe:
    return;
  case 0x10:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    DestructItems<UE::Online::FUserStats,int>
              (*(FUserStats **)this_00,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)this_00 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)this_00);
    return;
  case 0x18:
    return;
  case 0x1a:
    this[1].ObjectStorage.Pad[0] = '\0';
    this[1].ObjectStorage.Pad[1] = '\0';
    this[1].ObjectStorage.Pad[2] = '\0';
    this[1].ObjectStorage.Pad[3] = '\0';
    if ((void *)this[1]._padding_ != (void *)0x0) {
      FMemory::Free((void *)this[1]._padding_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    return;
  case 0x1c:
    return;
  case 0x1e:
    return;
  case 0x20:
    return;
  case 0x22:
    return;
  case 0x24:
    return;
  case 0x26:
    return;
  case 0x28:
    return;
  case 0x2a:
    uVar13 = (uint)pbVar18 & 0x20007300;
    pcVar21 = (char *)(ulonglong)uVar13;
    *in_RDX = *in_RDX + cVar9;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar9;
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    pcVar16 = (char *)((longlong)pcVar21 * 2 + 0x3a);
    *pcVar16 = *pcVar16 + cVar9;
    cVar9 = (char)(uVar13 >> 8);
    *pcVar21 = *pcVar21 + cVar9;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar9;
    *pcVar21 = *pcVar21;
    *pcVar21 = *pcVar21;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    break;
  }
  bVar12 = (byte)unaff_RBX;
  if (bVar12 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(pbVar18 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar23);
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)this_00;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar25;
  cVar22 = (char)in_RDX;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x50] = pbVar18[0x50] + cVar9;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x22] = pbVar18[0x22] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  piVar19 = (int *)(ulonglong)uVar13;
  *piVar19 = *piVar19 + uVar13;
  *(char *)piVar19 = (char)*piVar19 + (char)uVar13;
  cVar22 = cVar22 + cVar9;
  pcVar16 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar22);
  uVar23 = SUB82(pcVar16,0);
  uVar13 = in(uVar23);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  bVar25 = (char)((ulonglong)unaff_RBX >> 8) + bVar25 + CARRY1(bVar8,bVar25);
  lVar24 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar25,bVar12));
  bVar8 = in(uVar23);
  puVar15 = (uint *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar8);
  *(longlong *)puVar15 = *(longlong *)puVar15 + in_R8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar12) {
LAB_15309c4c6_3:
    cVar9 = (char)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar9;
    pcVar16 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar23);
    out(*(undefined1 *)(ulonglong)*(uint *)(&this_00[1].field_0x37 + (longlong)unaff_RBP * 2),uVar23
       );
    cVar9 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar16 = *pcVar16 + cVar9;
    *pcVar16 = *pcVar16 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar23);
  uVar4 = *(uint *)(unaff_RDI + 0x70);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(ulonglong)uVar4;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  uVar6 = *puVar15;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (-1 < (char)(byte)*puVar15) {
    puVar15 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1((byte)uVar6,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *pcVar16 = *pcVar16 + (char)(uVar13 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar13 = *puVar15;
  puVar15 = (uint *)(ulonglong)uVar13;
  *pcVar16 = *pcVar16 + cVar9;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar23);
  *pcVar16 = *pcVar16 + cVar9;
  *(char *)puVar15 = (char)*puVar15 + (char)uVar13;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  iVar14 = *piVar19;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar14 * 0x790072) >> 8);
  uVar13 = *(uint *)(ulonglong)(uint)(iVar14 * 0x790072);
  puVar15 = (uint *)(ulonglong)uVar13;
  pcVar21 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar23);
  *pcVar21 = *pcVar21 + (char)(uVar4 >> 8);
  *(char *)(in_FS_OFFSET + lVar24) = *(char *)(in_FS_OFFSET + lVar24) + cVar9;
  cVar10 = (char)uVar13;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  uVar13 = *(int *)(ulonglong)(uint)(*piVar19 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar13 = *(char *)(ulonglong)uVar13 + (char)uVar13;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[0x49] = pbVar18[0x49] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  pbVar17 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar17 = *(int *)pbVar17 + uVar13;
  bVar8 = *pbVar17;
  bVar11 = (byte)uVar13;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[1] = (pbVar17[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar17 = *pbVar17 + bVar11;
  cVar10 = (char)(uVar13 >> 8);
  pbVar17[0x14ee549] = pbVar17[0x14ee549] + cVar10;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x14ef312] = pbVar17[0x14ef312] + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar18 = (byte *)(lVar24 + 0x3a);
  bVar7 = CARRY1(*pbVar18,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar26 = &DAT_450064f8;
  puVar28 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar21,uVar23);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar28,uVar23);
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar26 = &DAT_450064f0;
    puVar27 = &DAT_450064f0;
    puVar28 = puVar30;
    _DAT_450064f0 = this_00;
    if (*pbVar18 != 0) {
      bVar7 = CARRY1(*pbVar17,bVar11);
      *pbVar17 = *pbVar17 + bVar11;
      goto LAB_15309c6e0;
    }
  }
  puVar27 = puVar26;
  puVar30 = puVar28;
  if (*pbVar18 == 0) {
    *(undefined8 *)(puVar26 + -8) = 0x49000000;
    out(*puVar28,uVar23);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar17[1] = (pbVar17[1] - cVar22) - bVar7;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x4f] = pbVar17[0x4f] + cVar10;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + (char)(uVar13 >> 8);
  pbVar18 = (byte *)in(0x4e);
  *(int *)pbVar18 = *(int *)pbVar18 + (int)pbVar18;
  bVar8 = *pbVar18;
  bVar11 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + cVar22;
  do {
    piVar19 = (int *)in(0x4e);
    *piVar19 = *piVar19 + (int)piVar19;
    bVar31 = SCARRY1((char)*piVar19,(char)piVar19);
    *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
    bVar7 = (char)*piVar19 < '\0';
    pbVar18 = (byte *)CONCAT71((int7)((ulonglong)piVar19 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar31 == bVar7);
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  cVar10 = (char)pbVar18;
  *pbVar18 = *pbVar18 + cVar10;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18[0x14eee7e] = pbVar18[0x14eee7e] + cVar9;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18 = (byte *)in(0x4e);
  puVar28 = puVar27;
  do {
    iVar14 = (int)pbVar18;
    *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
    bVar8 = *pbVar18;
    bVar11 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar11;
    if (SCARRY1(bVar8,bVar11)) {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(char *)(lVar24 + -0x12) = *(char *)(lVar24 + -0x12) + cVar22;
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] =
           puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] + bVar12;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      *(byte **)(puVar28 + -8) = pbVar18;
LAB_15309c7fc:
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      pbVar18[0x5c] = pbVar18[0x5c] + cVar9;
      out(uVar23,bVar11);
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar23,bVar11);
    puVar29 = puVar28;
    do {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      bVar8 = *pbVar18;
      bVar31 = SCARRY1(*pbVar18,bVar11);
      *pbVar18 = *pbVar18 + bVar11;
      bVar1 = *pbVar18;
      bVar2 = *pbVar18;
      puVar27 = puVar29 + -8;
      puVar28 = puVar29 + -8;
      *(byte **)(puVar29 + -8) = pbVar18;
      if ((char)bVar1 < '\0') {
        *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
        bVar12 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar11;
        if (!SCARRY1(bVar12,bVar11)) {
          out(uVar23,bVar11);
          *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
          bVar12 = *pbVar18;
          *pbVar18 = *pbVar18 + bVar11;
          if (SCARRY1(bVar12,bVar11)) {
            *pbVar18 = *pbVar18 + bVar11;
            pbVar18[2] = pbVar18[2] + cVar9;
            out(uVar23,bVar11);
            *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
            *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar13 = in(0x4e);
          pbVar18 = (byte *)(ulonglong)uVar13;
          *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
          bVar12 = *pbVar18;
          bVar8 = (byte)uVar13;
          *pbVar18 = *pbVar18 + bVar8;
          bVar12 = bVar8 << 1 | CARRY1(bVar12,bVar8);
          plVar20 = (longlong *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar12);
          out(uVar23,bVar12);
          *plVar20 = *plVar20 + in_R8;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
          pcVar16[0x14eea] = pcVar16[0x14eea] ^ bVar25;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar29 = puVar29 + -8;
    } while (CARRY1(bVar8,bVar11) || bVar2 == 0);
    bVar7 = false;
    if (bVar2 == 0 || bVar31) goto code_r0x00015309c749;
    *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
    *pbVar18 = *pbVar18 + bVar11;
    pbVar17 = (byte *)(pcVar16 + -0x1b);
    *pbVar17 = *pbVar17 >> 6 | *pbVar17 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e640

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  char *pcVar21;
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  char cVar22;
  undefined2 uVar23;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar24;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar30;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar31;
  byte bVar2;
  uint *puVar15;
  longlong *plVar20;
  byte bVar25;
  
  bVar12 = (this->ObjectStorage).Pad[0x38];
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)((this->ObjectStorage).Pad + 0x10);
  if (1 < (ulonglong)bVar12) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar18 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar12];
  cVar9 = (char)((ulonglong)in_RDX >> 8);
  uVar23 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar12) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    return;
  case 4:
    DestructItems<UE::Online::FUserStats,int>
              (*(FUserStats **)this_00,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)this_00 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)this_00);
    return;
  case 6:
    return;
  case 8:
    this[1].ObjectStorage.Pad[0] = '\0';
    this[1].ObjectStorage.Pad[1] = '\0';
    this[1].ObjectStorage.Pad[2] = '\0';
    this[1].ObjectStorage.Pad[3] = '\0';
    if ((void *)this[1]._padding_ != (void *)0x0) {
      FMemory::Free((void *)this[1]._padding_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    return;
  case 10:
    return;
  case 0xc:
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    uVar13 = (uint)pbVar18 & 0x20007300;
    pcVar21 = (char *)(ulonglong)uVar13;
    *in_RDX = *in_RDX + cVar9;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar9;
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    pcVar16 = (char *)((longlong)pcVar21 * 2 + 0x3a);
    *pcVar16 = *pcVar16 + cVar9;
    cVar9 = (char)(uVar13 >> 8);
    *pcVar21 = *pcVar21 + cVar9;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar9;
    *pcVar21 = *pcVar21;
    *pcVar21 = *pcVar21;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    break;
  }
  bVar12 = (byte)unaff_RBX;
  if (bVar12 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(pbVar18 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar23);
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)this_00;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar25;
  cVar22 = (char)in_RDX;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x50] = pbVar18[0x50] + cVar9;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x22] = pbVar18[0x22] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  piVar19 = (int *)(ulonglong)uVar13;
  *piVar19 = *piVar19 + uVar13;
  *(char *)piVar19 = (char)*piVar19 + (char)uVar13;
  cVar22 = cVar22 + cVar9;
  pcVar16 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar22);
  uVar23 = SUB82(pcVar16,0);
  uVar13 = in(uVar23);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  bVar25 = (char)((ulonglong)unaff_RBX >> 8) + bVar25 + CARRY1(bVar8,bVar25);
  lVar24 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar25,bVar12));
  bVar8 = in(uVar23);
  puVar15 = (uint *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar8);
  *(longlong *)puVar15 = *(longlong *)puVar15 + in_R8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar12) {
LAB_15309c4c6_3:
    cVar9 = (char)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar9;
    pcVar16 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar23);
    out(*(undefined1 *)(ulonglong)*(uint *)(&this_00[1].field_0x37 + (longlong)unaff_RBP * 2),uVar23
       );
    cVar9 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar16 = *pcVar16 + cVar9;
    *pcVar16 = *pcVar16 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar23);
  uVar4 = *(uint *)(unaff_RDI + 0x70);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(ulonglong)uVar4;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  uVar6 = *puVar15;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (-1 < (char)(byte)*puVar15) {
    puVar15 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1((byte)uVar6,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *pcVar16 = *pcVar16 + (char)(uVar13 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar13 = *puVar15;
  puVar15 = (uint *)(ulonglong)uVar13;
  *pcVar16 = *pcVar16 + cVar9;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar23);
  *pcVar16 = *pcVar16 + cVar9;
  *(char *)puVar15 = (char)*puVar15 + (char)uVar13;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  iVar14 = *piVar19;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar14 * 0x790072) >> 8);
  uVar13 = *(uint *)(ulonglong)(uint)(iVar14 * 0x790072);
  puVar15 = (uint *)(ulonglong)uVar13;
  pcVar21 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar23);
  *pcVar21 = *pcVar21 + (char)(uVar4 >> 8);
  *(char *)(in_FS_OFFSET + lVar24) = *(char *)(in_FS_OFFSET + lVar24) + cVar9;
  cVar10 = (char)uVar13;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  uVar13 = *(int *)(ulonglong)(uint)(*piVar19 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar13 = *(char *)(ulonglong)uVar13 + (char)uVar13;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[0x49] = pbVar18[0x49] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  pbVar17 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar17 = *(int *)pbVar17 + uVar13;
  bVar8 = *pbVar17;
  bVar11 = (byte)uVar13;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[1] = (pbVar17[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar17 = *pbVar17 + bVar11;
  cVar10 = (char)(uVar13 >> 8);
  pbVar17[0x14ee549] = pbVar17[0x14ee549] + cVar10;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x14ef312] = pbVar17[0x14ef312] + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar18 = (byte *)(lVar24 + 0x3a);
  bVar7 = CARRY1(*pbVar18,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar26 = &DAT_450064f8;
  puVar28 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar21,uVar23);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar28,uVar23);
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar26 = &DAT_450064f0;
    puVar27 = &DAT_450064f0;
    puVar28 = puVar30;
    _DAT_450064f0 = this_00;
    if (*pbVar18 != 0) {
      bVar7 = CARRY1(*pbVar17,bVar11);
      *pbVar17 = *pbVar17 + bVar11;
      goto LAB_15309c6e0;
    }
  }
  puVar27 = puVar26;
  puVar30 = puVar28;
  if (*pbVar18 == 0) {
    *(undefined8 *)(puVar26 + -8) = 0x49000000;
    out(*puVar28,uVar23);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar17[1] = (pbVar17[1] - cVar22) - bVar7;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x4f] = pbVar17[0x4f] + cVar10;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + (char)(uVar13 >> 8);
  pbVar18 = (byte *)in(0x4e);
  *(int *)pbVar18 = *(int *)pbVar18 + (int)pbVar18;
  bVar8 = *pbVar18;
  bVar11 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + cVar22;
  do {
    piVar19 = (int *)in(0x4e);
    *piVar19 = *piVar19 + (int)piVar19;
    bVar31 = SCARRY1((char)*piVar19,(char)piVar19);
    *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
    bVar7 = (char)*piVar19 < '\0';
    pbVar18 = (byte *)CONCAT71((int7)((ulonglong)piVar19 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar31 == bVar7);
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  cVar10 = (char)pbVar18;
  *pbVar18 = *pbVar18 + cVar10;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18[0x14eee7e] = pbVar18[0x14eee7e] + cVar9;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18 = (byte *)in(0x4e);
  puVar28 = puVar27;
  do {
    iVar14 = (int)pbVar18;
    *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
    bVar8 = *pbVar18;
    bVar11 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar11;
    if (SCARRY1(bVar8,bVar11)) {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(char *)(lVar24 + -0x12) = *(char *)(lVar24 + -0x12) + cVar22;
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] =
           puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] + bVar12;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      *(byte **)(puVar28 + -8) = pbVar18;
LAB_15309c7fc:
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      pbVar18[0x5c] = pbVar18[0x5c] + cVar9;
      out(uVar23,bVar11);
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar23,bVar11);
    puVar29 = puVar28;
    do {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      bVar8 = *pbVar18;
      bVar31 = SCARRY1(*pbVar18,bVar11);
      *pbVar18 = *pbVar18 + bVar11;
      bVar1 = *pbVar18;
      bVar2 = *pbVar18;
      puVar27 = puVar29 + -8;
      puVar28 = puVar29 + -8;
      *(byte **)(puVar29 + -8) = pbVar18;
      if ((char)bVar1 < '\0') {
        *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
        bVar12 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar11;
        if (!SCARRY1(bVar12,bVar11)) {
          out(uVar23,bVar11);
          *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
          bVar12 = *pbVar18;
          *pbVar18 = *pbVar18 + bVar11;
          if (SCARRY1(bVar12,bVar11)) {
            *pbVar18 = *pbVar18 + bVar11;
            pbVar18[2] = pbVar18[2] + cVar9;
            out(uVar23,bVar11);
            *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
            *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar13 = in(0x4e);
          pbVar18 = (byte *)(ulonglong)uVar13;
          *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
          bVar12 = *pbVar18;
          bVar8 = (byte)uVar13;
          *pbVar18 = *pbVar18 + bVar8;
          bVar12 = bVar8 << 1 | CARRY1(bVar12,bVar8);
          plVar20 = (longlong *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar12);
          out(uVar23,bVar12);
          *plVar20 = *plVar20 + in_R8;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
          pcVar16[0x14eea] = pcVar16[0x14eea] ^ bVar25;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar29 = puVar29 + -8;
    } while (CARRY1(bVar8,bVar11) || bVar2 == 0);
    bVar7 = false;
    if (bVar2 == 0 || bVar31) goto code_r0x00015309c749;
    *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
    *pbVar18 = *pbVar18 + bVar11;
    pbVar17 = (byte *)(pcVar16 + -0x1b);
    *pbVar17 = *pbVar17 >> 6 | *pbVar17 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e6b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e6c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::FAsyncOpSharedState::~FAsyncOpSharedState
            ((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e6d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e6e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e6f0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::FAsyncOpSharedState,1>
                *this)

{
  byte bVar1;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  char *pcVar21;
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  char cVar22;
  undefined2 uVar23;
  char *in_RDX;
  longlong unaff_RBX;
  longlong lVar24;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar30;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar31;
  byte bVar2;
  uint *puVar15;
  longlong *plVar20;
  byte bVar25;
  
  bVar12 = (this->ObjectStorage).Pad[0x38];
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)((this->ObjectStorage).Pad + 0x10);
  if (1 < (ulonglong)bVar12) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar18 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar12];
  cVar9 = (char)((ulonglong)in_RDX >> 8);
  uVar23 = SUB82(in_RDX,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar12) {
  case 0:
    return;
  default:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 2:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
    return;
  case 4:
    return;
  case 6:
    return;
  case 8:
    DestructItems<UE::Online::FUserStats,int>
              (*(FUserStats **)this_00,*(int *)((this->ObjectStorage).Pad + 0x18));
    if (*(void **)this_00 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)this_00);
    return;
  case 10:
    return;
  case 0xc:
    this[1].ObjectStorage.Pad[0] = '\0';
    this[1].ObjectStorage.Pad[1] = '\0';
    this[1].ObjectStorage.Pad[2] = '\0';
    this[1].ObjectStorage.Pad[3] = '\0';
    if ((void *)this[1]._padding_ != (void *)0x0) {
      FMemory::Free((void *)this[1]._padding_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    return;
  case 0xe:
    return;
  case 0x10:
    return;
  case 0x12:
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    return;
  case 0x1c:
    uVar13 = (uint)pbVar18 & 0x20007300;
    pcVar21 = (char *)(ulonglong)uVar13;
    *in_RDX = *in_RDX + cVar9;
    *(char *)(unaff_RBX + 0xff00000000) = *(char *)(unaff_RBX + 0xff00000000) + cVar9;
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    pcVar16 = (char *)((longlong)pcVar21 * 2 + 0x3a);
    *pcVar16 = *pcVar16 + cVar9;
    cVar9 = (char)(uVar13 >> 8);
    *pcVar21 = *pcVar21 + cVar9;
    `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
    ::__l2::Result.Array[0x15]._1_1_ =
         `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>_>(void)'
         ::__l2::Result.Array[0x15]._1_1_ + cVar9;
    *pcVar21 = *pcVar21;
    *pcVar21 = *pcVar21;
    *(undefined1 *)unaff_RSI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1d:
    break;
  }
  bVar12 = (byte)unaff_RBX;
  if (bVar12 < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(pbVar18 + 0x61);
    out(*(undefined1 *)unaff_RSI,uVar23);
    uVar3 = in(uVar23);
    *unaff_RDI = uVar3;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
  }
  *(byte *)((longlong)unaff_RSI + -0x1b) = *(byte *)((longlong)unaff_RSI + -0x1b) & (byte)this_00;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar25;
  cVar22 = (char)in_RDX;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x50] = pbVar18[0x50] + cVar9;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar25;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar25);
  *pbVar18 = *pbVar18 + bVar25;
  pbVar18[0x22] = pbVar18[0x22] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  piVar19 = (int *)(ulonglong)uVar13;
  *piVar19 = *piVar19 + uVar13;
  *(char *)piVar19 = (char)*piVar19 + (char)uVar13;
  cVar22 = cVar22 + cVar9;
  pcVar16 = (char *)CONCAT71((int7)((ulonglong)in_RDX >> 8),cVar22);
  uVar23 = SUB82(pcVar16,0);
  uVar13 = in(uVar23);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  bVar8 = *pbVar18;
  bVar25 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar25;
  bVar25 = (char)((ulonglong)unaff_RBX >> 8) + bVar25 + CARRY1(bVar8,bVar25);
  lVar24 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar25,bVar12));
  bVar8 = in(uVar23);
  puVar15 = (uint *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar8);
  *(longlong *)puVar15 = *(longlong *)puVar15 + in_R8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= bVar12) {
LAB_15309c4c6_3:
    cVar9 = (char)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    *(byte *)puVar15 = (byte)*puVar15 + cVar9;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar9;
    pcVar16 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar23);
    out(*(undefined1 *)(ulonglong)*(uint *)(&this_00[1].field_0x37 + (longlong)unaff_RBP * 2),uVar23
       );
    cVar9 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar16 = *pcVar16 + cVar9;
    *pcVar16 = *pcVar16 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar23);
  uVar4 = *(uint *)(unaff_RDI + 0x70);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(ulonglong)uVar4;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  uVar6 = *puVar15;
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  if (-1 < (char)(byte)*puVar15) {
    puVar15 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1((byte)uVar6,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  puVar28 = &this_00[-1].field_0x32;
  bVar11 = *puVar28;
  *puVar28 = *puVar28 + bVar8;
  *(byte *)((longlong)puVar15 + 1) =
       (*(byte *)((longlong)puVar15 + 1) - cVar22) - CARRY1(bVar11,bVar8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar8;
  *pcVar16 = *pcVar16 + (char)(uVar13 >> 8);
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  uVar13 = *puVar15;
  puVar15 = (uint *)(ulonglong)uVar13;
  *pcVar16 = *pcVar16 + cVar9;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar23);
  *pcVar16 = *pcVar16 + cVar9;
  *(char *)puVar15 = (char)*puVar15 + (char)uVar13;
  *(char *)in_R9 = (char)*in_R9 + -0x18;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  iVar14 = *piVar19;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar14 * 0x790072) >> 8);
  uVar13 = *(uint *)(ulonglong)(uint)(iVar14 * 0x790072);
  puVar15 = (uint *)(ulonglong)uVar13;
  pcVar21 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar23);
  *pcVar21 = *pcVar21 + (char)(uVar4 >> 8);
  *(char *)(in_FS_OFFSET + lVar24) = *(char *)(in_FS_OFFSET + lVar24) + cVar9;
  cVar10 = (char)uVar13;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)puVar15 = (char)*puVar15 + cVar10;
  *(char *)in_R9 = (char)*in_R9 + -0x28;
  piVar19 = (int *)(ulonglong)*puVar15;
  *(byte *)piVar19 = (char)*piVar19 + bVar25;
  uVar13 = *(int *)(ulonglong)(uint)(*piVar19 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar13 = *(char *)(ulonglong)uVar13 + (char)uVar13;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[0x49] = pbVar18[0x49] + (char)(uVar13 >> 8);
  uVar13 = in(0x4e);
  pbVar17 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar17 = *(int *)pbVar17 + uVar13;
  bVar8 = *pbVar17;
  bVar11 = (byte)uVar13;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[1] = (pbVar17[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar17 = *pbVar17 + bVar11;
  cVar10 = (char)(uVar13 >> 8);
  pbVar17[0x14ee549] = pbVar17[0x14ee549] + cVar10;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x14ef312] = pbVar17[0x14ef312] + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar18 = (byte *)(lVar24 + 0x3a);
  bVar7 = CARRY1(*pbVar18,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar26 = &DAT_450064f8;
  puVar28 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar21,uVar23);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar30 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar28,uVar23);
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar26 = &DAT_450064f0;
    puVar27 = &DAT_450064f0;
    puVar28 = puVar30;
    _DAT_450064f0 = this_00;
    if (*pbVar18 != 0) {
      bVar7 = CARRY1(*pbVar17,bVar11);
      *pbVar17 = *pbVar17 + bVar11;
      goto LAB_15309c6e0;
    }
  }
  puVar27 = puVar26;
  puVar30 = puVar28;
  if (*pbVar18 == 0) {
    *(undefined8 *)(puVar26 + -8) = 0x49000000;
    out(*puVar28,uVar23);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar17[1] = (pbVar17[1] - cVar22) - bVar7;
  *pbVar17 = *pbVar17 + bVar11;
  pbVar17[0x4f] = pbVar17[0x4f] + cVar10;
  uVar13 = in(0x4e);
  pbVar18 = (byte *)(ulonglong)uVar13;
  *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
  bVar8 = *pbVar18;
  bVar11 = (byte)uVar13;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + (char)(uVar13 >> 8);
  pbVar18 = (byte *)in(0x4e);
  *(int *)pbVar18 = *(int *)pbVar18 + (int)pbVar18;
  bVar8 = *pbVar18;
  bVar11 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  puVar28 = &this_00[-1].field_0x32;
  bVar8 = *puVar28;
  *puVar28 = *puVar28 + bVar11;
  pbVar18[1] = (pbVar18[1] - cVar22) - CARRY1(bVar8,bVar11);
  *pbVar18 = *pbVar18 + bVar11;
  *pbVar18 = *pbVar18 + cVar22;
  do {
    piVar19 = (int *)in(0x4e);
    *piVar19 = *piVar19 + (int)piVar19;
    bVar31 = SCARRY1((char)*piVar19,(char)piVar19);
    *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
    bVar7 = (char)*piVar19 < '\0';
    pbVar18 = (byte *)CONCAT71((int7)((ulonglong)piVar19 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar31 == bVar7);
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
  cVar10 = (char)pbVar18;
  *pbVar18 = *pbVar18 + cVar10;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18[0x14eee7e] = pbVar18[0x14eee7e] + cVar9;
  *pbVar18 = *pbVar18 + cVar10;
  pbVar18 = (byte *)in(0x4e);
  puVar28 = puVar27;
  do {
    iVar14 = (int)pbVar18;
    *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
    bVar8 = *pbVar18;
    bVar11 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar11;
    if (SCARRY1(bVar8,bVar11)) {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(char *)(lVar24 + -0x12) = *(char *)(lVar24 + -0x12) + cVar22;
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] =
           puVar30[(ulonglong)(uint)((int)unaff_RBP + (int)puVar30) * 8 + 0x4e] + bVar12;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      *(byte **)(puVar28 + -8) = pbVar18;
LAB_15309c7fc:
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      *pbVar18 = *pbVar18 + bVar11;
      pbVar18[0x5c] = pbVar18[0x5c] + cVar9;
      out(uVar23,bVar11);
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar23,bVar11);
    puVar29 = puVar28;
    do {
      *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
      *pbVar18 = *pbVar18 + bVar11;
      *(int *)pbVar18 = *(int *)pbVar18 + iVar14;
      bVar8 = *pbVar18;
      bVar31 = SCARRY1(*pbVar18,bVar11);
      *pbVar18 = *pbVar18 + bVar11;
      bVar1 = *pbVar18;
      bVar2 = *pbVar18;
      puVar27 = puVar29 + -8;
      puVar28 = puVar29 + -8;
      *(byte **)(puVar29 + -8) = pbVar18;
      if ((char)bVar1 < '\0') {
        *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
        bVar12 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar11;
        if (!SCARRY1(bVar12,bVar11)) {
          out(uVar23,bVar11);
          *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
          bVar12 = *pbVar18;
          *pbVar18 = *pbVar18 + bVar11;
          if (SCARRY1(bVar12,bVar11)) {
            *pbVar18 = *pbVar18 + bVar11;
            pbVar18[2] = pbVar18[2] + cVar9;
            out(uVar23,bVar11);
            *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
            *pbVar18 = *pbVar18 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar13 = in(0x4e);
          pbVar18 = (byte *)(ulonglong)uVar13;
          *(uint *)pbVar18 = *(int *)pbVar18 + uVar13;
          bVar12 = *pbVar18;
          bVar8 = (byte)uVar13;
          *pbVar18 = *pbVar18 + bVar8;
          bVar12 = bVar8 << 1 | CARRY1(bVar12,bVar8);
          plVar20 = (longlong *)(ulonglong)CONCAT31((int3)(uVar13 >> 8),bVar12);
          out(uVar23,bVar12);
          *plVar20 = *plVar20 + in_R8;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
          pcVar16[0x14eea] = pcVar16[0x14eea] ^ bVar25;
          *(byte *)plVar20 = (char)*plVar20 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar29 = puVar29 + -8;
    } while (CARRY1(bVar8,bVar11) || bVar2 == 0);
    bVar7 = false;
    if (bVar2 == 0 || bVar31) goto code_r0x00015309c749;
    *(longlong *)pbVar18 = *(longlong *)pbVar18 + in_R8;
    *pbVar18 = *pbVar18 + bVar11;
    pbVar17 = (byte *)(pcVar16 + -0x1b);
    *pbVar17 = *pbVar17 >> 6 | *pbVar17 << 2;
  } while( true );
}

// DestroyObject @ 14ef9e750

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ef9e760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::FAsyncOpSharedState,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::FAsyncOpSharedState,1>
                *this)

{
  UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::FAsyncOpSharedState::
  ~FAsyncOpSharedState((FAsyncOpSharedState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effb8c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Online::Private::AwaitInvitation'::__l2::AwaitInvitationState,1>
::DestroyObject(void *this)

{
  `UE::Online::Private::AwaitInvitation'::__l2::AwaitInvitationState::~AwaitInvitationState
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14effb8d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FFunctionalTestConfig,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::FFunctionalTestConfig,1> *this)

{
  UE::Online::FFunctionalTestConfig::~FFunctionalTestConfig
            ((FFunctionalTestConfig *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effb8e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Online::RunLobbyFunctionalTest'::__l2::FSearchParams,1>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14effb8f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l2::FWhenAllState,1>
::DestroyObject(void *this)

{
  `UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'
  ::__l2::FWhenAllState::~FWhenAllState((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14effb900

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>,1>
                *this)

{
  return;
}

// DestroyObject @ 14effb910

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindLobbies>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FFindLobbies::Params_&&)>,1>
                *this)

{
  return;
}

// DestroyObject @ 14effb920

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FInviteLobbyMember>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FInviteLobbyMember::Params_&&)>,1>
                *this)

{
  return;
}

// DestroyObject @ 14effb930

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>,1>
                *this)

{
  return;
}

// DestroyObject @ 14effb940

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>,1>
                *this)

{
  return;
}

// DestroyObject @ 14effb950

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyAttributes::Params_&&)>,1>
                *this)

{
  return;
}

// DestroyObject @ 14effb960

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>::FBindImpl<UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FModifyLobbyMemberAttributes>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FModifyLobbyMemberAttributes::Params_&&)>,1>
                *this)

{
  return;
}

// DestroyObject @ 14effb970

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  ::
  ~TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
            ((TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effb980

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>,1>
                *this)

{
  TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  ::
  ~TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
            ((TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effb990

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effb9a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effb9b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
                *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
  ~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
            ((TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effb9c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TPromise<int>,1>::DestroyObject
          (TIntrusiveReferenceController<TPromise<int>,1> *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(this->ObjectStorage).Pad;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14effba20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
::DestroyObject(TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>,1>
                *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(this->ObjectStorage).Pad;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14effba80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
::DestroyObject(TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>,1>
                *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(this->ObjectStorage).Pad;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14effbae0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
::DestroyObject(TIntrusiveReferenceController<TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,1>
                *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(this->ObjectStorage).Pad;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14effbb40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>,1>
                *this)

{
  UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::
  ~TWrappedOp<UE::Online::FFunctionalTestLobbies>
            ((TWrappedOp<UE::Online::FFunctionalTestLobbies> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14effbb50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FLobbyEventCapture,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::FLobbyEventCapture,1> *this)

{
  UE::Online::FLobbyEventCapture::~FLobbyEventCapture((FLobbyEventCapture *)&this->ObjectStorage);
  return;
}

