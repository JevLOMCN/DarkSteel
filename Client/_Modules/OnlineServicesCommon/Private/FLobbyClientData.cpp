// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 11

// FLobbyClientData @ 14ee0d560

FLobbyClientData * __thiscall
UE::Online::FLobbyClientData::FLobbyClientData
          (FLobbyClientData *this,TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> param_1,
          TSharedRef<UE::Online::FSchemaRegistry_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->SchemaRegistry).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->SchemaRegistry).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  MakeShared<UE::Online::FLobbyInternal,1,TSharedRef<UE::Online::FSchemaRegistry_const_,1>_const_&>
            (&this->InternalPublicData,param_2);
  *(undefined8 *)&this->MemberDataStorage = 0;
  *(undefined8 *)&(this->MemberDataStorage).field_0x8 = 0;
  *(undefined8 *)&(this->MemberDataStorage).field_0x20 = 0;
  *(undefined4 *)&(this->MemberDataStorage).field_0x28 = 0;
  *(undefined4 *)&(this->MemberDataStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemberDataStorage).field_0x34 = 0;
  *(undefined4 *)&(this->MemberDataStorage).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MemberDataStorage).field_0x40 = 0;
  *(undefined4 *)&(this->MemberDataStorage).field_0x48 = 0;
  *(undefined8 *)&(this->LocalMembers).Elements = 0;
  *(undefined8 *)&(this->LocalMembers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalMembers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalMembers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalMembers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalMembers).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LocalMembers).Elements.field_0x30 = 0xffffffff;
  (this->LocalMembers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LocalMembers).HashSize = 0;
  (this->PreparedServiceChanges).bIsSet = false;
  (this->PreparedClientChanges).bIsSet = false;
  *(uint *)&((this->InternalPublicData).Object)->_padding_ = param_1.Value;
  return this;
}

// AddMember @ 14ee55f00

void __thiscall
UE::Online::FLobbyClientData::AddMember
          (FLobbyClientData *this,TSharedRef<UE::Online::FLobbyMemberInternal,1> *param_1)

{
  FLobbyInternal *pFVar1;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res8 [2];
  FLobbyMemberInternal *local_28;
  TReferenceControllerBase<1> *local_20;
  FLobbyMemberInternal *local_18;
  FLobbyMemberInternal **local_10;
  
  local_28 = param_1->Object;
  local_20 = (TReferenceControllerBase<1> *)param_1;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMemberInternal,1>_const_&>_>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
              *)&this->MemberDataStorage,
             (TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMemberInternal,1>_const_&>
              *)local_res8,(bool *)&local_28);
  local_28 = param_1->Object;
  pFVar1 = (this->InternalPublicData).Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = param_1->Object;
  local_10 = &local_28;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMember_const_,1>_&&>_>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>,0>,FDefaultSetAllocator>
              *)&pFVar1->_padding_,
             (TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMember_const_,1>_&&>
              *)local_res8,(bool *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((char)param_1->Object->_padding_ != '\0') {
    TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
    ::Emplace<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
              (&this->LocalMembers,local_res8,(bool *)param_1->Object);
  }
  return;
}

// CommitClientChanges @ 14ee81ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result * __thiscall
UE::Online::FLobbyClientData::CommitClientChanges
          (FLobbyClientData *this,Result *__return_storage_ptr__,Params *param_1)

{
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLobbyEvents *pFVar3;
  FLobbyMemberInternal *pFVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  FLobbyInternal *pFVar7;
  code *pcVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  undefined8 uVar10;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
  *pTVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  Result *pRVar15;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> *pTVar16;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
  *pTVar17;
  FName *pFVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  ulonglong uVar20;
  uint uVar21;
  atomic<int> *paVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  longlong lVar28;
  TOptional<UE::Online::FLobbyClientData::FPreparedClientChanges> *pTVar29;
  undefined1 auStack_838 [32];
  TOptional<UE::Online::FLobbyClientData::FPreparedClientChanges> *local_818;
  FScriptContainerElement *local_810;
  longlong local_808;
  longlong local_800;
  undefined8 local_7f8;
  char local_7e8;
  char local_7e7;
  undefined1 local_7e6;
  undefined1 local_7e5 [13];
  FLobbyMemberInternal *local_7d8;
  TReferenceControllerBase<1> *pTStack_7d0;
  TArray<TSharedRef<UE::Online::FLobbyMemberInternal,1>,TSizedDefaultAllocator<32>_> local_7c8;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> local_7b8;
  undefined1 local_7a8 [12];
  undefined4 uStack_79c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_798;
  uint local_790;
  int iStack_78c;
  int iStack_788;
  undefined4 uStack_784;
  undefined1 local_780 [8];
  FLobbyInternal *local_778;
  TReferenceControllerBase<1> *local_770;
  FLobbyLeft local_768;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
  *local_758;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_750;
  undefined8 uStack_730;
  FLobbyLeaderChanged local_728;
  FLobbyMemberJoined local_708;
  FLobbyMemberJoined local_6e8;
  FLobbyMemberLeft local_6c8;
  FLobbyMemberLeft local_6a0;
  FLobbyMemberLeft local_678;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> local_650;
  FLobbyMemberInternal *local_640;
  FLobbyMemberInternal **local_638;
  FLobbyMemberInternal *local_630;
  FLobbyMemberInternal **local_628;
  FLobbyMemberInternal *local_618;
  TReferenceControllerBase<1> *pTStack_610;
  FLobbySchemaChanged local_608;
  FDestructionSentinel local_5e8;
  undefined1 local_5d0 [40];
  int local_5a8;
  undefined4 uStack_5a4;
  FString local_5a0;
  longlong local_588;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  FLobbyMemberAttributesChanged local_558;
  FLobbyAttributesChanged local_448;
  TOptional<FName>_u_0 local_348;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  local_340;
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  local_2f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_2a0;
  FSchemaServiceClientChanges local_248;
  FSchemaServiceClientChanges local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_838;
  (__return_storage_ptr__->LeavingLocalMembers).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->LeavingLocalMembers).ArrayNum = 0;
  (__return_storage_ptr__->LeavingLocalMembers).ArrayMax = 0;
  if ((param_1->LobbyEvents == (FLobbyEvents *)0x0) ||
     (*(int *)&(this->LocalMembers).Elements.field_0x8 ==
      *(int *)&(this->LocalMembers).Elements.field_0x34)) {
    cVar13 = '\0';
  }
  else {
    cVar13 = '\x01';
  }
  local_7e8 = cVar13;
  if ((this->PreparedClientChanges).bIsSet == false) {
    if (2 < (byte)LogOnlineServices._0_1_) {
      Online::ToLogString(&local_5a0,
                          (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                          (this->InternalPublicData).Object);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((this->PreparedClientChanges).TypedValue.LocalName.field0_0x0.TypedValue.ComparisonIndex.
        Value != 0xffffffff) {
      ((this->InternalPublicData).Object)->_padding_ =
           (longlong)(this->PreparedClientChanges).TypedValue.LocalName.field0_0x0;
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      pRVar15 = (Result *)(*pcVar8)();
      return pRVar15;
    }
    if ((this->PreparedClientChanges).TypedValue.JoinPolicy.bIsSet != false) {
      if (((this->PreparedClientChanges).bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      if (((this->PreparedClientChanges).TypedValue.JoinPolicy.bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      *(ELobbyJoinPolicy *)((longlong)&((this->InternalPublicData).Object)->_padding_ + 4) =
           (this->PreparedClientChanges).TypedValue.JoinPolicy.TypedValue;
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      pRVar15 = (Result *)(*pcVar8)();
      return pRVar15;
    }
    if ((this->PreparedClientChanges).TypedValue.OwnerAccountId.bIsSet != false) {
      if (((this->PreparedClientChanges).bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      if (((this->PreparedClientChanges).TypedValue.OwnerAccountId.bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      *(uint *)((longlong)&((this->InternalPublicData).Object)->_padding_ + 4) =
           (this->PreparedClientChanges).TypedValue.OwnerAccountId.TypedValue.Value;
      if (cVar13 != '\0') {
        pTVar16 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
                  ::FindChecked((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
                                 *)&this->MemberDataStorage,
                                (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
                                ((longlong)&((this->InternalPublicData).Object)->_padding_ + 4));
        pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
        local_728.Leader.Object = (FLobbyMember *)pTVar16->Object;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          paVar22 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar22 = &pTVar2->SharedReferenceCount;
          LOCK();
          *paVar22 = (atomic<int>)((int)*paVar22 + 1);
          UNLOCK();
        }
        local_728.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
        pFVar3 = param_1->LobbyEvents;
        local_728.Lobby.SharedReferenceCount.ReferenceController =
             (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_728.Lobby.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_728.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_728.Lobby.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar22 = (atomic<int>)((int)*paVar22 + 1);
          UNLOCK();
        }
        local_728.Leader.SharedReferenceCount.ReferenceController = pTVar2;
        TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>::Broadcast
                  (&pFVar3->OnLobbyLeaderChanged,&local_728);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_728.Leader.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_728.Lobby.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      pRVar15 = (Result *)(*pcVar8)();
      return pRVar15;
    }
    if ((this->PreparedClientChanges).TypedValue.KickedTargetMember.bIsSet != false) {
      if (((this->PreparedClientChanges).bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      if (((this->PreparedClientChanges).TypedValue.KickedTargetMember.bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      pTVar17 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                        *)&this->MemberDataStorage,
                       &(this->PreparedClientChanges).TypedValue.KickedTargetMember.TypedValue);
      if ((pTVar17 ==
           (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
            *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      pFVar4 = *(FLobbyMemberInternal **)&pTVar17->field_0x8;
      pTVar2 = *(TReferenceControllerBase<1> **)&pTVar17->field_0x10;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_650.Object = pFVar4;
      local_650.SharedReferenceCount.ReferenceController = pTVar2;
      RemoveMember(this,&local_650);
      if (cVar13 != '\0') {
        local_6c8.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
        pFVar3 = param_1->LobbyEvents;
        local_6c8.Lobby.SharedReferenceCount.ReferenceController =
             (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_6c8.Lobby.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_6c8.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_6c8.Lobby.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_6c8.Reason = Kicked;
        local_6c8.Member.Object = (FLobbyMember *)pFVar4;
        local_6c8.Member.SharedReferenceCount.ReferenceController = pTVar2;
        TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>::Broadcast
                  (&pFVar3->OnLobbyMemberLeft,&local_6c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6c8.Member.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6c8.Lobby.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      pRVar15 = (Result *)(*pcVar8)();
      return pRVar15;
    }
    cVar13 = local_7e8;
    if ((this->PreparedClientChanges).TypedValue.bLobbyAttributesChanged != false) {
      Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges
                ((FSchemaCategoryInstanceBase *)&((this->InternalPublicData).Object)->SchemaData,
                 (Result *)&local_348.TypedValue);
      cVar13 = local_7e8;
      if (local_348.TypedValue.ComparisonIndex.Value != 0xffffffff) {
        local_608.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
        local_608.Lobby.SharedReferenceCount.ReferenceController =
             (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_608.Lobby.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_608.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_608.Lobby.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_608.PreviousSchemaId = (FName)((this->InternalPublicData).Object)->_padding_;
        pFVar18 = TOptional<FName>::operator*((TOptional<FName> *)&local_348.TypedValue);
        local_608.NewSchemaId = *pFVar18;
        pFVar18 = TOptional<FName>::operator*((TOptional<FName> *)&local_348.TypedValue);
        cVar13 = local_7e8;
        ((this->InternalPublicData).Object)->_padding_ = (longlong)*pFVar18;
        if (local_7e8 != '\0') {
          TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>::Broadcast
                    (&param_1->LobbyEvents->OnLobbySchemaChanged,&local_608);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_608.Lobby.SharedReferenceCount.ReferenceController);
      }
      if (((local_340.Elements._8_4_ == local_340.Elements._52_4_) &&
          (local_2f0.Elements._8_4_ == local_2f0.Elements._52_4_)) &&
         (local_2a0.Elements._8_4_ == local_2a0.Elements._52_4_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((cVar13 != '\0') && (bVar12)) {
        local_448.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
        pFVar3 = param_1->LobbyEvents;
        local_448.Lobby.SharedReferenceCount.ReferenceController =
             (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_448.Lobby.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_448.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_448.Lobby.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_448.AddedAttributes._44_4_ = 0x80;
        local_448.AddedAttributes._0_8_ = 0;
        local_448.AddedAttributes._8_8_ = 0;
        local_448.AddedAttributes._32_8_ = 0;
        local_448.AddedAttributes._40_4_ = 0;
        local_448.AddedAttributes._52_4_ = 0;
        local_448.AddedAttributes._64_8_ = 0;
        local_448.AddedAttributes._72_4_ = 0;
        local_448.AddedAttributes._48_4_ = 0xffffffff;
        TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)&local_448.AddedAttributes,&local_340);
        TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
        ::
        TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                    *)&local_448.ChangedAttributes,&local_2f0);
        local_448.RemovedAttributes.Elements._44_4_ = 0x80;
        local_448.RemovedAttributes.Elements._0_8_ = 0;
        local_448.RemovedAttributes.Elements._8_8_ = 0;
        local_448.RemovedAttributes.Elements._32_8_ = 0;
        local_448.RemovedAttributes.Elements._40_4_ = 0;
        local_448.RemovedAttributes.Elements._52_4_ = 0;
        local_448.RemovedAttributes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_448.RemovedAttributes.HashSize = 0;
        local_448.RemovedAttributes.Elements._48_4_ = 0xffffffff;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  (&local_448.RemovedAttributes,&local_2a0);
        TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>::Broadcast
                  (&pFVar3->OnLobbyAttributesChanged,&local_448);
        FLobbyAttributesChanged::~FLobbyAttributesChanged(&local_448);
      }
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges
                ((FSchemaServiceClientChanges *)&local_348.TypedValue);
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      pRVar15 = (Result *)(*pcVar8)();
      return pRVar15;
    }
    if ((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.Object !=
        (FLobbyMemberInternal *)0x0) {
      if (((this->PreparedClientChanges).bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      if (((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.Object ==
           (FLobbyMemberInternal *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      pTVar2 = (this->PreparedClientChanges).TypedValue.UpdatedLocalMember.SharedReferenceCount.
               ReferenceController;
      pFVar4 = (this->PreparedClientChanges).TypedValue.UpdatedLocalMember.Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FLobbyMemberInternal *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges
                ((FSchemaCategoryInstanceBase *)&pFVar4->SchemaData,(Result *)&local_248);
      if (((local_248.AddedAttributes._8_4_ == local_248.AddedAttributes._52_4_) &&
          (local_248.ChangedAttributes._8_4_ == local_248.ChangedAttributes._52_4_)) &&
         (local_248.RemovedAttributes.Elements._8_4_ == local_248.RemovedAttributes.Elements._52_4_)
         ) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((cVar13 != '\0') && (bVar12)) {
        local_558.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
        pFVar3 = param_1->LobbyEvents;
        local_558.Lobby.SharedReferenceCount.ReferenceController =
             (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_558.Lobby.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_558.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_558.Lobby.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_558.AddedAttributes._44_4_ = 0x80;
        local_558.AddedAttributes._0_8_ = 0;
        local_558.AddedAttributes._8_8_ = 0;
        local_558.AddedAttributes._32_8_ = 0;
        local_558.AddedAttributes._40_4_ = 0;
        local_558.AddedAttributes._48_4_ = 0xffffffff;
        local_558.AddedAttributes._52_4_ = 0;
        local_558.AddedAttributes._64_8_ = 0;
        local_558.AddedAttributes._72_4_ = 0;
        local_558.Member.Object = (FLobbyMember *)pFVar4;
        local_558.Member.SharedReferenceCount.ReferenceController = pTVar2;
        TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)&local_558.AddedAttributes,
                   (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)&local_248.AddedAttributes);
        TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
        ::
        TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                    *)&local_558.ChangedAttributes,
                   (TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                    *)&local_248.ChangedAttributes);
        local_558.RemovedAttributes.Elements._44_4_ = 0x80;
        local_558.RemovedAttributes.Elements._0_8_ = 0;
        local_558.RemovedAttributes.Elements._8_8_ = 0;
        local_558.RemovedAttributes.Elements._32_8_ = 0;
        local_558.RemovedAttributes.Elements._40_4_ = 0;
        local_558.RemovedAttributes.Elements._52_4_ = 0;
        local_558.RemovedAttributes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_558.RemovedAttributes.HashSize = 0;
        local_558.RemovedAttributes.Elements._48_4_ = 0xffffffff;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  (&local_558.RemovedAttributes,&local_248.RemovedAttributes);
        TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>::
        Broadcast(&pFVar3->OnLobbyMemberAttributesChanged,&local_558);
        FLobbyMemberAttributesChanged::~FLobbyMemberAttributesChanged(&local_558);
      }
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_248);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      pRVar15 = (Result *)(*pcVar8)();
      return pRVar15;
    }
    cVar13 = local_7e8;
    if ((this->PreparedClientChanges).TypedValue.JoiningLocalMember.Object !=
        (FLobbyMemberInternal *)0x0) {
      if (*(int *)&(this->LocalMembers).Elements.field_0x8 ==
          *(int *)&(this->LocalMembers).Elements.field_0x34) {
        pFVar3 = param_1->LobbyEvents;
        local_7e8 = pFVar3 != (FLobbyEvents *)0x0;
        if (pFVar3 != (FLobbyEvents *)0x0) {
          local_778 = (this->InternalPublicData).Object;
          local_770 = (this->InternalPublicData).SharedReferenceCount.ReferenceController;
          if (local_770 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_770->SharedReferenceCount =
                 (atomic<int>)((int)local_770->SharedReferenceCount + 1);
            UNLOCK();
          }
          this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                    (pFVar3->OnLobbyJoined).DelegateRef.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_5e8);
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
          uVar25 = (this_00->InvocationList).ArrayNum - 1;
          local_7e7 = '\0';
          if (-1 < (int)uVar25) {
            pTVar29 = (TOptional<UE::Online::FLobbyClientData::FPreparedClientChanges> *)
                      (longlong)(int)uVar25;
            lVar28 = (longlong)pTVar29 << 4;
            do {
              iVar14 = (this_00->InvocationList).ArrayNum;
              uVar21 = 0;
              if ((int)uVar25 < iVar14) {
                uVar21 = ~uVar25 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (local_818 = pTVar29, local_810 = (FScriptContainerElement *)(longlong)iVar14,
                 bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar12)) {
                pcVar8 = (code *)swi(3);
                pRVar15 = (Result *)(*pcVar8)();
                return pRVar15;
              }
              pFVar5 = (this_00->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar5 + lVar28 + 8) == 0) ||
                  (plVar6 = *(longlong **)(pFVar5 + lVar28), plVar6 == (longlong *)0x0)) ||
                 (cVar13 = (**(code **)(*plVar6 + 0x68))(), cVar13 == '\0')) {
                local_7e7 = '\x01';
              }
              pTVar29 = (TOptional<UE::Online::FLobbyClientData::FPreparedClientChanges> *)
                        ((longlong)(pTVar29 + -1) + 0x57);
              lVar28 = lVar28 + -0x10;
              uVar25 = uVar25 - 1;
            } while (-1 < (int)uVar25);
          }
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
          if (local_7e7 != '\0') {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false)
            ;
          }
          if (local_5e8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e8.Accessor,&local_5e8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_770);
          uStack_79c = 1;
          puVar24 = &(this->MemberDataStorage).field_0x10;
          local_7a8._8_4_ = 0;
          pTVar1 = &this->MemberDataStorage;
          local_790 = 0xffffffff;
          iStack_78c = 0;
          iStack_788 = 0;
          pTStack_798 = (TBitArray<FDefaultBitArrayAllocator> *)puVar24;
          if (*(int *)&(this->MemberDataStorage).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_7a8 + 8));
          }
          TStack_750._padding_ = CONCAT44(uStack_79c,local_7a8._8_4_);
          TStack_750.CurrentBitIndex = iStack_78c;
          TStack_750.UnvisitedBitMask = local_790;
          TStack_750._28_4_ = uStack_784;
          TStack_750.BaseBitIndex = iStack_788;
          local_5a8 = *(int *)&(this->MemberDataStorage).field_0x8 -
                      *(int *)&(this->MemberDataStorage).field_0x34;
          local_5d0._16_8_ = pTStack_798;
          uStack_730 = CONCAT44(uStack_5a4,local_5a8);
          TStack_750.Array = pTStack_798;
          local_758 = pTVar1;
          local_5d0._0_8_ = pTVar1;
          local_5d0._8_8_ = TStack_750._padding_;
          local_5d0._24_8_ = TStack_750._16_8_;
          local_5d0._32_8_ = TStack_750._24_8_;
          pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_5d0,
                               (TBitArray<FDefaultBitArrayAllocator> *)puVar24,
                               *(int *)&(this->MemberDataStorage).field_0x28);
          local_588 = pTVar19->_padding_;
          pTVar9 = pTVar19->Array;
          uVar10._0_4_ = pTVar19->UnvisitedBitMask;
          uVar10._4_4_ = pTVar19->CurrentBitIndex;
          uStack_570 = *(undefined8 *)&pTVar19->BaseBitIndex;
          pTStack_580 = pTVar9;
          local_578 = uVar10;
          while( true ) {
            pTVar11 = local_758;
            if (*(int *)&local_758->field_0x8 - *(int *)&local_758->field_0x34 != (int)uStack_730) {
              local_7e6 = 0;
              `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7e6);
            }
            if (((TStack_750.CurrentBitIndex == uVar10._4_4_) && (TStack_750.Array == pTVar9)) &&
               (pTVar11 == pTVar1)) break;
            local_708.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
            pFVar3 = param_1->LobbyEvents;
            lVar28 = *(longlong *)pTVar11;
            local_708.Lobby.SharedReferenceCount.ReferenceController =
                 (this->InternalPublicData).SharedReferenceCount.ReferenceController;
            if (local_708.Lobby.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_708.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_708.Lobby.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            local_708.Member.Object =
                 *(FLobbyMember **)((longlong)TStack_750.CurrentBitIndex * 0x20 + 8 + lVar28);
            local_708.Member.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)
                  ((longlong)TStack_750.CurrentBitIndex * 0x20 + 0x10 + lVar28);
            if (local_708.Member.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_708.Member.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_708.Member.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>::Broadcast
                      (&pFVar3->OnLobbyMemberJoined,&local_708);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_708.Member.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_708.Lobby.SharedReferenceCount.ReferenceController);
            TStack_750.UnvisitedBitMask = TStack_750.UnvisitedBitMask & ~TStack_750._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_750);
          }
        }
      }
      cVar13 = local_7e8;
      if (((this->PreparedClientChanges).bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      if (((this->PreparedClientChanges).TypedValue.JoiningLocalMember.Object ==
           (FLobbyMemberInternal *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      local_7d8 = (this->PreparedClientChanges).TypedValue.JoiningLocalMember.Object;
      pTStack_7d0 = (this->PreparedClientChanges).TypedValue.JoiningLocalMember.SharedReferenceCount
                    .ReferenceController;
      if (pTStack_7d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_7d0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_7d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_7d8 == (FLobbyMemberInternal *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      *(undefined1 *)&local_7d8->_padding_ = 1;
      uVar25 = (uint)local_7d8->_padding_;
      uVar27 = uVar25 & 0xffffff;
      uVar23 = (uVar25 >> 0x18) - uVar27 ^ uVar27 >> 0xd;
      uVar21 = (-0x61c88647 - uVar23) - uVar27 ^ uVar23 << 8;
      uVar27 = (uVar27 - uVar21) - uVar23 ^ uVar21 >> 0xd;
      uVar23 = (uVar23 - uVar27) - uVar21 ^ uVar27 >> 0xc;
      uVar21 = (uVar21 - uVar23) - uVar27 ^ uVar23 << 0x10;
      uVar27 = (uVar27 - uVar21) - uVar23 ^ uVar21 >> 5;
      uVar23 = (uVar23 - uVar27) - uVar21 ^ uVar27 >> 3;
      uVar21 = (uVar21 - uVar23) - uVar27 ^ uVar23 << 10;
      if (*(int *)&(this->MemberDataStorage).field_0x8 !=
          *(int *)&(this->MemberDataStorage).field_0x34) {
        puVar24 = *(undefined1 **)&(this->MemberDataStorage).field_0x40;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = &(this->MemberDataStorage).field_0x38;
        }
        iVar14 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(this->MemberDataStorage).field_0x48 - 1U &
                         ((uVar27 - uVar21) - uVar23 ^ uVar21 >> 0xf)) * 4);
        if (iVar14 != -1) {
          do {
            if (*(uint *)((longlong)iVar14 * 0x20 + *(longlong *)&this->MemberDataStorage) == uVar25
               ) goto LAB_14ee82c15;
            iVar14 = *(int *)((longlong)iVar14 * 0x20 + 0x18 + *(longlong *)&this->MemberDataStorage
                             );
          } while (iVar14 != -1);
        }
      }
      iVar14 = -1;
LAB_14ee82c15:
      local_638 = &local_7d8;
      local_640 = local_7d8;
      TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMemberInternal,1>_const_&>_>
                ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                  *)&this->MemberDataStorage,
                 (TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMemberInternal,1>_const_&>
                  *)local_7a8,(bool *)&local_640);
      pFVar7 = (this->InternalPublicData).Object;
      local_618 = local_7d8;
      pTStack_610 = pTStack_7d0;
      if (pTStack_7d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_7d0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_7d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_630 = local_7d8;
      local_628 = &local_618;
      TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMember_const_,1>_&&>_>
                ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>,0>,FDefaultSetAllocator>
                  *)&pFVar7->_padding_,
                 (TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FLobbyMember_const_,1>_&&>
                  *)local_780,(bool *)&local_630);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_610);
      if ((char)local_7d8->_padding_ != '\0') {
        TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
        ::Emplace<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                  (&this->LocalMembers,
                   (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)(local_780 + 4),
                   (bool *)local_7d8);
      }
      Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges
                ((FSchemaCategoryInstanceBase *)&local_7d8->SchemaData,(Result *)&local_148);
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_148);
      if ((cVar13 != '\0') && (iVar14 == -1)) {
        local_6e8.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
        pFVar3 = param_1->LobbyEvents;
        local_6e8.Lobby.SharedReferenceCount.ReferenceController =
             (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_6e8.Lobby.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_6e8.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_6e8.Lobby.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_6e8.Member.Object = (FLobbyMember *)local_7d8;
        local_6e8.Member.SharedReferenceCount.ReferenceController = pTStack_7d0;
        if (pTStack_7d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_7d0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_7d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>::Broadcast
                  (&pFVar3->OnLobbyMemberJoined,&local_6e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6e8.Member.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6e8.Lobby.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_7d0);
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      pRVar15 = (Result *)(*pcVar8)();
      return pRVar15;
    }
    if ((this->PreparedClientChanges).TypedValue.LocalUserLeaveReason.bIsSet != false) {
      if (((this->PreparedClientChanges).bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      pTVar17 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                        *)&this->MemberDataStorage,
                       (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
                       &this->PreparedClientChanges);
      if ((pTVar17 ==
           (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
            *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      local_7b8.Object = *(FLobbyMemberInternal **)&pTVar17->field_0x8;
      pTVar2 = *(TReferenceControllerBase<1> **)&pTVar17->field_0x10;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_7b8.SharedReferenceCount.ReferenceController = pTVar2;
      RemoveMember(this,&local_7b8);
      pTVar29 = &this->PreparedClientChanges;
      if (((this->PreparedClientChanges).bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pRVar15 = (Result *)(*pcVar8)();
        return pRVar15;
      }
      pFVar5 = (__return_storage_ptr__->LeavingLocalMembers).AllocatorInstance.Data;
      if ((pFVar5 <= pTVar29) &&
         (lVar28 = (longlong)(__return_storage_ptr__->LeavingLocalMembers).ArrayMax,
         pTVar29 < pFVar5 + lVar28 * 4)) {
        local_800 = (longlong)(__return_storage_ptr__->LeavingLocalMembers).ArrayNum;
        local_7f8 = 4;
        local_818 = pTVar29;
        local_810 = pFVar5;
        local_808 = lVar28;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          pRVar15 = (Result *)(*pcVar8)();
          return pRVar15;
        }
      }
      iVar14 = (__return_storage_ptr__->LeavingLocalMembers).ArrayNum;
      if (iVar14 == (__return_storage_ptr__->LeavingLocalMembers).ArrayMax) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)__return_storage_ptr__,
                            &(__return_storage_ptr__->LeavingLocalMembers).ArrayMax);
      }
      (__return_storage_ptr__->LeavingLocalMembers).ArrayNum = iVar14 + 1;
      *(uint *)((__return_storage_ptr__->LeavingLocalMembers).AllocatorInstance.Data +
               (longlong)iVar14 * 4) = (pTVar29->TypedValue).LocalAccountId.Value;
      if (cVar13 != '\0') {
        local_6a0.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
        pFVar3 = param_1->LobbyEvents;
        local_6a0.Lobby.SharedReferenceCount.ReferenceController =
             (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_6a0.Lobby.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_6a0.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_6a0.Lobby.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_6a0.Member.Object = (FLobbyMember *)local_7b8.Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_6a0.Member.SharedReferenceCount.ReferenceController = pTVar2;
        if (((this->PreparedClientChanges).bIsSet == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pRVar15 = (Result *)(*pcVar8)();
          return pRVar15;
        }
        if (((this->PreparedClientChanges).TypedValue.LocalUserLeaveReason.bIsSet == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pRVar15 = (Result *)(*pcVar8)();
          return pRVar15;
        }
        local_6a0.Reason = (this->PreparedClientChanges).TypedValue.LocalUserLeaveReason.TypedValue;
        TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>::Broadcast
                  (&pFVar3->OnLobbyMemberLeft,&local_6a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6a0.Member.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6a0.Lobby.SharedReferenceCount.ReferenceController);
        if (*(int *)&(this->LocalMembers).Elements.field_0x8 ==
            *(int *)&(this->LocalMembers).Elements.field_0x34) {
          local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7c8.ArrayNum = 0;
          local_7c8.ArrayMax = 0;
          TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
          ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                    ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
                      *)&this->MemberDataStorage,&local_7c8);
          iVar14 = local_7c8.ArrayNum;
          uVar20 = (ulonglong)local_7c8.ArrayNum;
          pTVar16 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
                    (local_7c8.AllocatorInstance.Data + uVar20 * 0x10);
          FVar26.Data = local_7c8.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar20 != iVar14) {
              `TCheckedPointerIterator<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_7e5);
            }
            if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)FVar26.Data == pTVar16) break;
            RemoveMember(this,&local_7b8);
            local_678.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
            pFVar3 = param_1->LobbyEvents;
            local_678.Lobby.SharedReferenceCount.ReferenceController =
                 (this->InternalPublicData).SharedReferenceCount.ReferenceController;
            if (local_678.Lobby.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_678.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_678.Lobby.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            local_678.Member.Object =
                 (FLobbyMember *)
                 ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)FVar26.Data)->Object;
            local_678.Member.SharedReferenceCount.ReferenceController =
                 (((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)FVar26.Data)->
                 SharedReferenceCount).ReferenceController;
            if (local_678.Member.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_678.Member.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_678.Member.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            local_678.Reason = Left;
            TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>::Broadcast
                      (&pFVar3->OnLobbyMemberLeft,&local_678);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_678.Member.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_678.Lobby.SharedReferenceCount.ReferenceController);
            uVar20 = local_7c8._8_8_ & 0xffffffff;
            FVar26.Data = FVar26.Data + 0x10;
          }
          local_768.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
          pFVar3 = param_1->LobbyEvents;
          local_768.Lobby.SharedReferenceCount.ReferenceController =
               (this->InternalPublicData).SharedReferenceCount.ReferenceController;
          if (local_768.Lobby.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_768.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_768.Lobby.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)>::Broadcast
                    (&pFVar3->OnLobbyLeft,&local_768);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_768.Lobby.SharedReferenceCount.ReferenceController);
          DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
                    ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
                     local_7c8.AllocatorInstance.Data,local_7c8.ArrayNum);
          if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_7c8.AllocatorInstance.Data !=
              (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0) {
            FMemory::Free(local_7c8.AllocatorInstance.Data);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    if ((this->PreparedServiceChanges).bIsSet != false) {
      FPreparedServiceChanges::~FPreparedServiceChanges(&(this->PreparedServiceChanges).TypedValue);
      (this->PreparedServiceChanges).bIsSet = false;
    }
    if ((this->PreparedClientChanges).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.SharedReferenceCount.
                 ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->PreparedClientChanges).TypedValue.JoiningLocalMember.SharedReferenceCount.
                 ReferenceController);
      (this->PreparedClientChanges).bIsSet = false;
    }
  }
  return __return_storage_ptr__;
}

// CommitServiceSnapshot @ 14ee831a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result * __thiscall
UE::Online::FLobbyClientData::CommitServiceSnapshot
          (FLobbyClientData *this,Result *__return_storage_ptr__,Params *param_1)

{
  undefined4 uVar1;
  FLobbyEvents *pFVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLobbyMemberInternal *pFVar7;
  FLobbyMemberInternal *pFVar8;
  code *pcVar9;
  bool bVar10;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> *pTVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  FName *pFVar18;
  Result *pRVar19;
  ulonglong uVar20;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
  *pTVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  FSharedReferencer<1> FVar27;
  Params *pPVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> *pTVar31;
  ForAnyElementType FVar32;
  undefined1 auStackY_748 [32];
  undefined1 local_6f0;
  undefined1 local_6ef;
  undefined1 local_6ee;
  undefined1 local_6ed [5];
  Params *local_6e8;
  Result *local_6e0;
  FLobbyClientData *local_6d8;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> *local_6d0;
  TArray<TSharedRef<UE::Online::FLobbyMemberInternal,1>,TSizedDefaultAllocator<32>_> local_6c8;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> local_6b8;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> local_6a8;
  undefined4 local_698;
  FLobbyLeft local_690;
  FLobbyInternal *local_680;
  TReferenceControllerBase<1> *local_678;
  FLobbyMemberInternal *local_670;
  TReferenceControllerBase<1> *local_668;
  FLobbyLeaderChanged local_660;
  FLobbyInternal *local_640;
  TReferenceControllerBase<1> *local_638;
  FLobbyMemberInternal *local_630;
  TReferenceControllerBase<1> *local_628;
  undefined4 local_620;
  FLobbyInternal *local_618;
  TReferenceControllerBase<1> *local_610;
  FLobbyMemberInternal *local_608;
  TReferenceControllerBase<1> *local_600;
  undefined4 local_5f8;
  FLobbySchemaChanged local_5f0;
  FDestructionSentinel local_5d0;
  FDestructionSentinel local_5b8;
  FDestructionSentinel local_5a0;
  FDestructionSentinel local_588;
  FString local_570;
  FLobbyInternal *local_558;
  TReferenceControllerBase<1> *local_550;
  longlong local_548;
  TReferenceControllerBase<1> *local_540;
  undefined1 local_538 [32];
  void *local_518;
  undefined4 local_510;
  uint local_50c;
  undefined4 local_508;
  undefined4 local_504;
  ForElementType<FSetElementId> local_4f8;
  int local_4f0;
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  local_4e8;
  undefined1 local_498 [32];
  void *local_478;
  undefined4 local_470;
  uint local_46c;
  undefined4 local_468;
  undefined4 local_464;
  ForElementType<FSetElementId> local_458;
  int local_450;
  FLobbyAttributesChanged local_448;
  TOptional<FName>_u_0 local_348;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  local_340;
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  local_2f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_2a0;
  FSchemaServiceClientChanges local_248;
  FSchemaServiceClientChanges local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
  (__return_storage_ptr__->LeavingLocalMembers).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->LeavingLocalMembers).ArrayNum = 0;
  (__return_storage_ptr__->LeavingLocalMembers).ArrayMax = 0;
  if ((param_1->LobbyEvents == (FLobbyEvents *)0x0) ||
     (*(int *)&(this->LocalMembers).Elements.field_0x8 ==
      *(int *)&(this->LocalMembers).Elements.field_0x34)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  local_6e8 = param_1;
  local_6e0 = __return_storage_ptr__;
  local_6d8 = this;
  if ((this->PreparedServiceChanges).bIsSet == false) {
    if (2 < (byte)LogOnlineServices._0_1_) {
      Online::ToLogString(&local_570,
                          (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                          (this->InternalPublicData).Object);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_570.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    Online::Private::FSchemaCategoryInstanceBase::CommitServiceSnapshot
              ((FSchemaCategoryInstanceBase *)&((this->InternalPublicData).Object)->SchemaData,
               (Result *)&local_348.TypedValue);
    if (local_348.TypedValue.ComparisonIndex.Value != 0xffffffff) {
      local_5f0.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
      local_5f0.Lobby.SharedReferenceCount.ReferenceController =
           (this->InternalPublicData).SharedReferenceCount.ReferenceController;
      if (local_5f0.Lobby.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_5f0.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5f0.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_5f0.PreviousSchemaId = (FName)((this->InternalPublicData).Object)->_padding_;
      pFVar18 = TOptional<FName>::operator*((TOptional<FName> *)&local_348.TypedValue);
      local_5f0.NewSchemaId = *pFVar18;
      pFVar18 = TOptional<FName>::operator*((TOptional<FName> *)&local_348.TypedValue);
      ((this->InternalPublicData).Object)->_padding_ = (longlong)*pFVar18;
      if (bVar10) {
        TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>::Broadcast
                  (&param_1->LobbyEvents->OnLobbySchemaChanged,&local_5f0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5f0.Lobby.SharedReferenceCount.ReferenceController);
    }
    if (((local_340.Elements._8_4_ == local_340.Elements._52_4_) &&
        (local_2f0.Elements._8_4_ == local_2f0.Elements._52_4_)) &&
       (local_2a0.Elements._8_4_ == local_2a0.Elements._52_4_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((bVar10) && (bVar13)) {
      local_448.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
      pFVar2 = param_1->LobbyEvents;
      local_448.Lobby.SharedReferenceCount.ReferenceController =
           (this->InternalPublicData).SharedReferenceCount.ReferenceController;
      if (local_448.Lobby.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_448.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_448.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_448.AddedAttributes._0_8_ = 0;
      local_448.AddedAttributes._8_8_ = 0;
      local_448.AddedAttributes._32_8_ = 0;
      local_448.AddedAttributes._40_4_ = 0;
      local_448.AddedAttributes._44_4_ = 0x80;
      local_448.AddedAttributes._48_4_ = 0xffffffff;
      local_448.AddedAttributes._52_4_ = 0;
      local_448.AddedAttributes._64_8_ = 0;
      local_448.AddedAttributes._72_4_ = 0;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)&local_448.AddedAttributes,&local_340);
      TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  *)&local_448.ChangedAttributes,&local_2f0);
      local_448.RemovedAttributes.Elements._0_8_ = 0;
      local_448.RemovedAttributes.Elements._8_8_ = 0;
      local_448.RemovedAttributes.Elements._32_8_ = 0;
      local_448.RemovedAttributes.Elements._40_4_ = 0;
      local_448.RemovedAttributes.Elements._44_4_ = 0x80;
      local_448.RemovedAttributes.Elements._48_4_ = 0xffffffff;
      local_448.RemovedAttributes.Elements._52_4_ = 0;
      local_448.RemovedAttributes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_448.RemovedAttributes.HashSize = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                (&local_448.RemovedAttributes,&local_2a0);
      TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>::Broadcast
                (&pFVar2->OnLobbyAttributesChanged,&local_448);
      FLobbyAttributesChanged::~FLobbyAttributesChanged(&local_448);
    }
    if (((this->PreparedServiceChanges).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      pRVar19 = (Result *)(*pcVar9)();
      return pRVar19;
    }
    uVar24 = (this->PreparedServiceChanges).TypedValue.NewMemberDataStorage.ArrayNum;
    uVar20 = (ulonglong)(int)uVar24;
    pFVar29 = (this->PreparedServiceChanges).TypedValue.NewMemberDataStorage.AllocatorInstance.Data;
    pFVar30 = pFVar29 + uVar20 * 0x10;
    while( true ) {
      if ((this->PreparedServiceChanges).TypedValue.NewMemberDataStorage.ArrayNum != (int)uVar20) {
        local_6f0 = 0;
        `TCheckedPointerIterator<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_6f0);
      }
      if (pFVar29 == pFVar30) break;
      local_6b8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar29 + 8);
      local_6b8.Object = *(FLobbyMemberInternal **)pFVar29;
      if (local_6b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      Online::Private::FSchemaCategoryInstanceBase::CommitServiceSnapshot
                ((FSchemaCategoryInstanceBase *)&(local_6b8.Object)->SchemaData,(Result *)&local_148
                );
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_148);
      AddMember(this,&local_6b8);
      if (bVar10) {
        local_680 = (this->InternalPublicData).Object;
        pFVar2 = param_1->LobbyEvents;
        local_678 = (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_678 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_678->SharedReferenceCount = (atomic<int>)((int)local_678->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_670 = local_6b8.Object;
        local_668 = local_6b8.SharedReferenceCount.ReferenceController;
        if (local_6b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (pFVar2->OnLobbyMemberJoined).DelegateRef.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,
                   (FWriteAccessScope *)&local_5d0);
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + 1;
        bVar13 = false;
        uVar23 = (pTVar3->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar23) {
          lVar26 = (longlong)(int)uVar23 << 4;
          bVar13 = false;
          do {
            uVar16 = 0;
            if ((int)uVar23 < (pTVar3->InvocationList).ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              pRVar19 = (Result *)(*pcVar9)();
              return pRVar19;
            }
            pFVar4 = (pTVar3->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar4 + lVar26 + 8) == 0) ||
                (plVar5 = *(longlong **)(pFVar4 + lVar26), plVar5 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar5 + 0x68))(), cVar15 == '\0')) {
              bVar13 = true;
            }
            lVar26 = lVar26 + -0x10;
            uVar23 = uVar23 - 1;
            this = local_6d8;
          } while (-1 < (int)uVar23);
        }
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + -1;
        if (bVar13) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar3,false);
        }
        if (local_5d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d0.Accessor,&local_5d0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_668);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_678);
        param_1 = local_6e8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6b8.SharedReferenceCount.ReferenceController);
      uVar20 = (ulonglong)uVar24;
      pFVar29 = pFVar29 + 0x10;
    }
    if (((this->PreparedServiceChanges).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      pRVar19 = (Result *)(*pcVar9)();
      return pRVar19;
    }
    uVar24 = (this->PreparedServiceChanges).TypedValue.UpdatedMemberDataStorage.ArrayNum;
    uVar20 = (ulonglong)(int)uVar24;
    pFVar29 = (this->PreparedServiceChanges).TypedValue.UpdatedMemberDataStorage.AllocatorInstance.
              Data;
    pTVar31 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)(pFVar29 + uVar20 * 0x10);
    local_6d0 = pTVar31;
    while( true ) {
      if ((this->PreparedServiceChanges).TypedValue.UpdatedMemberDataStorage.ArrayNum != (int)uVar20
         ) {
        local_6ef = 0;
        `TCheckedPointerIterator<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_6ef);
      }
      if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)pFVar29 == pTVar31) break;
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar29 + 8);
      lVar26 = *(longlong *)pFVar29;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      Online::Private::FSchemaCategoryInstanceBase::CommitServiceSnapshot
                ((FSchemaCategoryInstanceBase *)(lVar26 + 0x60),(Result *)&local_248);
      if (((local_248.AddedAttributes._8_4_ == local_248.AddedAttributes._52_4_) &&
          (local_248.ChangedAttributes._8_4_ == local_248.ChangedAttributes._52_4_)) &&
         (local_248.RemovedAttributes.Elements._8_4_ == local_248.RemovedAttributes.Elements._52_4_)
         ) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((bVar10) && (bVar13)) {
        local_558 = (this->InternalPublicData).Object;
        pFVar2 = param_1->LobbyEvents;
        local_550 = (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_550 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_550->SharedReferenceCount = (atomic<int>)((int)local_550->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_50c = 0x80;
        local_538._0_8_ = (FScriptContainerElement *)0x0;
        local_538._8_8_ = 0;
        local_518 = (void *)0x0;
        local_510 = 0;
        local_504 = 0;
        local_4f8 = (ForElementType<FSetElementId>)0x0;
        local_4f0 = 0;
        local_508 = 0xffffffff;
        local_548 = lVar26;
        local_540 = pTVar6;
        TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)local_538,
                   (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)&local_248.AddedAttributes);
        TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
        ::
        TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  (&local_4e8,
                   (TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                    *)&local_248.ChangedAttributes);
        local_498._0_8_ = (FScriptContainerElement *)0x0;
        local_498._8_8_ = 0;
        local_478 = (void *)0x0;
        local_470 = 0;
        local_46c = 0x80;
        local_468 = 0xffffffff;
        local_464 = 0;
        local_458 = (ForElementType<FSetElementId>)0x0;
        local_450 = 0;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_498,
                   &local_248.RemovedAttributes);
        pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (pFVar2->OnLobbyMemberAttributesChanged).DelegateRef.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,
                   (FWriteAccessScope *)&local_5b8);
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + 1;
        bVar13 = false;
        uVar23 = (pTVar3->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar23) {
          lVar26 = (longlong)(int)uVar23 << 4;
          bVar13 = false;
          do {
            uVar16 = 0;
            if ((int)uVar23 < (pTVar3->InvocationList).ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              pRVar19 = (Result *)(*pcVar9)();
              return pRVar19;
            }
            pFVar30 = (pTVar3->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar30 + lVar26 + 8) == 0) ||
                (plVar5 = *(longlong **)(pFVar30 + lVar26), plVar5 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar5 + 0x68))(), cVar15 == '\0')) {
              bVar13 = true;
            }
            lVar26 = lVar26 + -0x10;
            uVar23 = uVar23 - 1;
          } while (-1 < (int)uVar23);
        }
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + -1;
        if (bVar13) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar3,false);
        }
        if (local_5b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
        }
        local_450 = 0;
        if (local_458 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_458);
        }
        bVar13 = local_498._12_4_ != 0;
        local_498._8_8_ = (ulonglong)(uint)local_498._12_4_ << 0x20;
        if (bVar13) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_498,0,(int *)(local_498 + 0xc));
        }
        local_468 = 0xffffffff;
        local_464 = 0;
        local_470 = 0;
        if (0x80 < local_46c) {
          local_46c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_498 + 0x10),0);
        }
        if (local_478 != (void *)0x0) {
          FMemory::Free(local_478);
        }
        if ((FScriptContainerElement *)local_498._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_498._0_8_);
        }
        local_4e8.HashSize = 0;
        if (local_4e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_4e8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_4e8.Elements);
        local_4f0 = 0;
        if (local_4f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_4f8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_538,0,local_538._8_4_);
        bVar13 = local_538._12_4_ != 0;
        local_538._8_8_ = (ulonglong)(uint)local_538._12_4_ << 0x20;
        if (bVar13) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)local_538,0,(int *)(local_538 + 0xc));
        }
        local_508 = 0xffffffff;
        local_504 = 0;
        local_510 = 0;
        if (0x80 < local_50c) {
          local_50c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_538 + 0x10),0);
        }
        if (local_518 != (void *)0x0) {
          FMemory::Free(local_518);
        }
        if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_538._0_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_540);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_550);
        pTVar31 = local_6d0;
        this = local_6d8;
        param_1 = local_6e8;
      }
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_248);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      uVar20 = (ulonglong)uVar24;
      pFVar29 = pFVar29 + 0x10;
    }
    if (((this->PreparedServiceChanges).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      pRVar19 = (Result *)(*pcVar9)();
      return pRVar19;
    }
    pRVar19 = local_6e0;
    uVar24 = (this->PreparedServiceChanges).TypedValue.LeavingMembers.ArrayNum;
    uVar20 = (ulonglong)(int)uVar24;
    pTVar31 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
              (this->PreparedServiceChanges).TypedValue.LeavingMembers.AllocatorInstance.Data;
    local_6d0 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
                ((longlong)pTVar31 + uVar20 * 0x18);
    while( true ) {
      pTVar11 = local_6d0;
      if ((this->PreparedServiceChanges).TypedValue.LeavingMembers.ArrayNum != (int)uVar20) {
        local_6ee = 0;
        `TCheckedPointerIterator<TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,enum_UE::Online::ELobbyMemberLeaveReason>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_6ee);
      }
      if (pTVar31 == pTVar11) break;
      FVar27.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
      pFVar7 = pTVar31->Object;
      if (FVar27.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar27.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar27.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar1 = *(undefined4 *)&pTVar31[1].Object;
      local_6a8.Object = pFVar7;
      local_6a8.SharedReferenceCount.ReferenceController = FVar27.ReferenceController;
      local_698 = uVar1;
      RemoveMember(this,&local_6a8);
      if ((char)pFVar7->_padding_ != '\0') {
        pFVar8 = (FLobbyMemberInternal *)(pRVar19->LeavingLocalMembers).AllocatorInstance.Data;
        if (((pFVar8 <= pFVar7) &&
            (pFVar7 < (FLobbyMemberInternal *)
                      ((longlong)&pFVar8->_padding_ +
                      (longlong)(pRVar19->LeavingLocalMembers).ArrayMax * 4))) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          pRVar19 = (Result *)(*pcVar9)();
          return pRVar19;
        }
        iVar17 = (pRVar19->LeavingLocalMembers).ArrayNum;
        if (iVar17 == (pRVar19->LeavingLocalMembers).ArrayMax) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pRVar19,
                              &(pRVar19->LeavingLocalMembers).ArrayMax);
        }
        (pRVar19->LeavingLocalMembers).ArrayNum = iVar17 + 1;
        *(int *)((pRVar19->LeavingLocalMembers).AllocatorInstance.Data + (longlong)iVar17 * 4) =
             (int)pFVar7->_padding_;
      }
      if (bVar10) {
        pFVar2 = local_6e8->LobbyEvents;
        local_640 = (local_6d8->InternalPublicData).Object;
        local_638 = (local_6d8->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_638 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_638->SharedReferenceCount = (atomic<int>)((int)local_638->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (FVar27.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar27.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar27.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (pFVar2->OnLobbyMemberLeft).DelegateRef.Object;
        local_630 = pFVar7;
        local_628 = FVar27.ReferenceController;
        local_620 = uVar1;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,
                   (FWriteAccessScope *)&local_5a0);
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + 1;
        bVar13 = false;
        uVar23 = (pTVar3->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar23) {
          lVar26 = (longlong)(int)uVar23 << 4;
          bVar13 = false;
          do {
            uVar16 = 0;
            if ((int)uVar23 < (pTVar3->InvocationList).ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              pRVar19 = (Result *)(*pcVar9)();
              return pRVar19;
            }
            pFVar29 = (pTVar3->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar29 + lVar26 + 8) == 0) ||
                (plVar5 = *(longlong **)(pFVar29 + lVar26), plVar5 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar5 + 0x68))(), cVar15 == '\0')) {
              bVar13 = true;
            }
            lVar26 = lVar26 + -0x10;
            uVar23 = uVar23 - 1;
            FVar27.ReferenceController = local_6a8.SharedReferenceCount.ReferenceController;
          } while (-1 < (int)uVar23);
        }
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + -1;
        if (bVar13) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar3,false);
        }
        if (local_5a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_628);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_638);
        this = local_6d8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar27.ReferenceController);
      uVar20 = (ulonglong)uVar24;
      pTVar31 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)&pTVar31[1].SharedReferenceCount;
    }
    if (((this->PreparedServiceChanges).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      pRVar19 = (Result *)(*pcVar9)();
      return pRVar19;
    }
    pPVar28 = local_6e8;
    if ((this->PreparedServiceChanges).TypedValue.OwnerAccountId.bIsSet != false) {
      if (((this->PreparedServiceChanges).bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        pRVar19 = (Result *)(*pcVar9)();
        return pRVar19;
      }
      if (((this->PreparedServiceChanges).TypedValue.OwnerAccountId.bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        pRVar19 = (Result *)(*pcVar9)();
        return pRVar19;
      }
      pTVar21 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                        *)&this->MemberDataStorage,
                       (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
                       &this->PreparedServiceChanges);
      puVar25 = (undefined8 *)&pTVar21->field_0x8;
      if (pTVar21 ==
          (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
           *)0x0) {
        puVar25 = (undefined8 *)0x0;
      }
      if (puVar25 == (undefined8 *)0x0) {
        *(undefined4 *)((longlong)&((this->InternalPublicData).Object)->_padding_ + 4) = 0;
        pPVar28 = local_6e8;
      }
      else {
        if (((this->PreparedServiceChanges).bIsSet == false) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          pRVar19 = (Result *)(*pcVar9)();
          return pRVar19;
        }
        if (((this->PreparedServiceChanges).TypedValue.OwnerAccountId.bIsSet == false) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          pRVar19 = (Result *)(*pcVar9)();
          return pRVar19;
        }
        pPVar28 = local_6e8;
        *(uint *)((longlong)&((this->InternalPublicData).Object)->_padding_ + 4) =
             (this->PreparedServiceChanges).TypedValue.OwnerAccountId.TypedValue.Value;
        if (bVar10) {
          local_660.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
          pFVar2 = local_6e8->LobbyEvents;
          local_660.Lobby.SharedReferenceCount.ReferenceController =
               (this->InternalPublicData).SharedReferenceCount.ReferenceController;
          if (local_660.Lobby.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_660.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_660.Lobby.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_660.Leader.Object = (FLobbyMember *)*puVar25;
          local_660.Leader.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar25[1];
          if (local_660.Leader.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_660.Leader.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_660.Leader.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>::Broadcast
                    (&pFVar2->OnLobbyLeaderChanged,&local_660);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_660.Leader.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_660.Lobby.SharedReferenceCount.ReferenceController);
        }
      }
    }
    if (((this->PreparedServiceChanges).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      pRVar19 = (Result *)(*pcVar9)();
      return pRVar19;
    }
    if ((this->PreparedServiceChanges).TypedValue.MaxMembers.bIsSet != false) {
      if (((this->PreparedServiceChanges).bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        pRVar19 = (Result *)(*pcVar9)();
        return pRVar19;
      }
      if (((this->PreparedServiceChanges).TypedValue.MaxMembers.bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        pRVar19 = (Result *)(*pcVar9)();
        return pRVar19;
      }
      *(int *)&((this->InternalPublicData).Object)->_padding_ =
           (this->PreparedServiceChanges).TypedValue.MaxMembers.TypedValue;
    }
    if (((this->PreparedServiceChanges).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      pRVar19 = (Result *)(*pcVar9)();
      return pRVar19;
    }
    if ((this->PreparedServiceChanges).TypedValue.JoinPolicy.bIsSet != false) {
      if (((this->PreparedServiceChanges).bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        pRVar19 = (Result *)(*pcVar9)();
        return pRVar19;
      }
      if (((this->PreparedServiceChanges).TypedValue.JoinPolicy.bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        pRVar19 = (Result *)(*pcVar9)();
        return pRVar19;
      }
      *(ELobbyJoinPolicy *)((longlong)&((this->InternalPublicData).Object)->_padding_ + 4) =
           (this->PreparedServiceChanges).TypedValue.JoinPolicy.TypedValue;
    }
    if ((bVar10) &&
       (*(int *)&(this->LocalMembers).Elements.field_0x8 ==
        *(int *)&(this->LocalMembers).Elements.field_0x34)) {
      local_6c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6c8.ArrayNum = 0;
      local_6c8.ArrayMax = 0;
      TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
                  *)&this->MemberDataStorage,&local_6c8);
      uVar12 = local_6c8._8_8_;
      uVar22 = (ulonglong)local_6c8.ArrayNum;
      pTVar31 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
                (local_6c8.AllocatorInstance.Data + uVar22 * 0x10);
      uVar20 = uVar22;
      FVar32.Data = local_6c8.AllocatorInstance.Data;
      local_6d0 = pTVar31;
      while( true ) {
        if ((int)uVar22 != (int)uVar20) {
          local_6ed[0] = 0;
          `TCheckedPointerIterator<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_6ed);
        }
        if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)FVar32.Data == pTVar31) break;
        RemoveMember(this,(TSharedRef<UE::Online::FLobbyMemberInternal,1> *)FVar32.Data);
        local_618 = (this->InternalPublicData).Object;
        pFVar2 = pPVar28->LobbyEvents;
        local_610 = (this->InternalPublicData).SharedReferenceCount.ReferenceController;
        if (local_610 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_610->SharedReferenceCount = (atomic<int>)((int)local_610->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_608 = ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)FVar32.Data)->Object;
        local_600 = (((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)FVar32.Data)->
                    SharedReferenceCount).ReferenceController;
        if (local_600 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_600->SharedReferenceCount = (atomic<int>)((int)local_600->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_5f8 = 0;
        pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (pFVar2->OnLobbyMemberLeft).DelegateRef.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,
                   (FWriteAccessScope *)&local_588);
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + 1;
        bVar10 = false;
        uVar24 = (pTVar3->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar24) {
          lVar26 = (longlong)(int)uVar24 << 4;
          bVar10 = false;
          do {
            uVar23 = 0;
            if ((int)uVar24 < (pTVar3->InvocationList).ArrayNum) {
              uVar23 = ~uVar24 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              pRVar19 = (Result *)(*pcVar9)();
              return pRVar19;
            }
            pFVar29 = (pTVar3->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar29 + lVar26 + 8) == 0) ||
                (plVar5 = *(longlong **)(pFVar29 + lVar26), plVar5 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar5 + 0x68))(), cVar15 == '\0')) {
              bVar10 = true;
            }
            lVar26 = lVar26 + -0x10;
            uVar24 = uVar24 - 1;
            pPVar28 = local_6e8;
            pTVar31 = local_6d0;
            this = local_6d8;
          } while (-1 < (int)uVar24);
        }
        pTVar3->InvocationListLockCount = pTVar3->InvocationListLockCount + -1;
        if (bVar10) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar3,false);
        }
        if (local_588.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_588.Accessor,&local_588);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_600);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_610);
        uVar22 = local_6c8._8_8_ & 0xffffffff;
        FVar32.Data = FVar32.Data + 0x10;
        uVar20 = uVar12 & 0xffffffff;
      }
      local_690.Lobby.Object = (FLobby *)(this->InternalPublicData).Object;
      pFVar2 = pPVar28->LobbyEvents;
      local_690.Lobby.SharedReferenceCount.ReferenceController =
           (this->InternalPublicData).SharedReferenceCount.ReferenceController;
      if (local_690.Lobby.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_690.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_690.Lobby.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)>::Broadcast
                (&pFVar2->OnLobbyLeft,&local_690);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_690.Lobby.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
                ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_6c8.AllocatorInstance.Data,
                 local_6c8.ArrayNum);
      if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_6c8.AllocatorInstance.Data !=
          (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0) {
        FMemory::Free(local_6c8.AllocatorInstance.Data);
      }
    }
    if ((this->PreparedServiceChanges).bIsSet != false) {
      FPreparedServiceChanges::~FPreparedServiceChanges(&(this->PreparedServiceChanges).TypedValue);
      (this->PreparedServiceChanges).bIsSet = false;
    }
    if ((this->PreparedClientChanges).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.SharedReferenceCount.
                 ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->PreparedClientChanges).TypedValue.JoiningLocalMember.SharedReferenceCount.
                 ReferenceController);
      (this->PreparedClientChanges).bIsSet = false;
    }
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)&local_348.TypedValue);
    __return_storage_ptr__ = local_6e0;
  }
  return __return_storage_ptr__;
}

// GetMemberData @ 14eee0a90

TSharedPtr<UE::Online::FLobbyMemberInternal_const_,1> * __thiscall
UE::Online::FLobbyClientData::GetMemberData
          (FLobbyClientData *this,
          TSharedPtr<UE::Online::FLobbyMemberInternal_const_,1> *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLobbyMemberInternal *pFVar2;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
  *pTVar3;
  undefined8 *puVar4;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res18 [4];
  
  local_res18[0].Value = param_1.Value;
  pTVar3 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                   *)&this->MemberDataStorage,local_res18);
  puVar4 = (undefined8 *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
                 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    __return_storage_ptr__->Object = (FLobbyMemberInternal *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (TReferenceControllerBase<1> *)puVar4[1];
    pFVar2 = (FLobbyMemberInternal *)*puVar4;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// PrepareClientChanges @ 14eef43e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> * __thiscall
UE::Online::FLobbyClientData::PrepareClientChanges
          (FLobbyClientData *this,
          TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *__return_storage_ptr__,
          Params *param_1)

{
  FLobbyClientChanges *this_00;
  TOptional<UE::Online::ELobbyJoinPolicy> *pTVar1;
  TOptional<UE::Online::FLobbyClientAttributeChanges> *pTVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  FLobbyInternal *pFVar4;
  TOptional<FName>_u_0 TVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FString *pFVar15;
  FOnlineError *pFVar16;
  TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *pTVar17;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar18;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
  *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  FLobbyClientMemberAttributeChanges *pFVar21;
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
  *pTVar22;
  Result *pRVar23;
  ELobbyMemberLeaveReason *pEVar24;
  uint uVar25;
  FSharedReferencer<1> FVar26;
  uint uVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  uint uVar30;
  TReferenceControllerBase<1> *pTVar31;
  FLobbyMemberInternal *pFVar32;
  bool bVar33;
  undefined1 auStackY_908 [32];
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_8d8;
  TOptional<FName>_u_0 local_8d4;
  ELobbyJoinPolicy local_8cc;
  bool local_8cb;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_8c8;
  bool local_8c4;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_8c0;
  bool local_8bc;
  FLobbyMemberInternal *local_8b8;
  FSharedReferencer<1> FStack_8b0;
  FLobbyMemberInternal *local_8a8;
  FSharedReferencer<1> FStack_8a0;
  ELobbyMemberLeaveReason local_898;
  bool local_894;
  bool local_890;
  FName local_888;
  undefined8 local_880;
  FSharedReferencer<1> local_878;
  undefined8 local_870;
  FSharedReferencer<1> local_868;
  undefined8 local_860;
  FSharedReferencer<1> local_858;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  FString local_710;
  FString local_700;
  FString local_6f0;
  TOptional<UE::Online::FOnlineError> local_6e0;
  TOptional<UE::Online::FOnlineError> local_6b0;
  TOptional<UE::Online::FOnlineError> local_680;
  TOptional<UE::Online::FOnlineError> local_650;
  TOptional<UE::Online::FOnlineError> local_620;
  TOptional<UE::Online::FOnlineError> local_5f0;
  TOptional<UE::Online::FOnlineError> local_5c0;
  FOnlineError local_590;
  FOnlineError local_568;
  FOnlineError local_540;
  FOnlineError local_518;
  FOnlineError local_4f0;
  FOnlineError local_4c8;
  FOnlineError local_4a0;
  undefined1 local_478 [24];
  undefined1 local_460 [32];
  void *local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  ForElementType<FSetElementId> local_420;
  int local_418;
  undefined1 local_410 [32];
  void *local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  ForElementType<FSetElementId> local_3d0;
  int local_3c8;
  undefined1 local_3c0 [32];
  void *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  ForElementType<FSetElementId> local_380;
  int local_378;
  undefined1 local_370 [32];
  void *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  ForElementType<FSetElementId> local_330;
  int local_328;
  undefined1 local_318 [8];
  undefined1 local_310 [32];
  void *local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  ForElementType<FSetElementId> local_2d0;
  int local_2c8;
  undefined1 local_2c0 [32];
  void *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  ForElementType<FSetElementId> local_280;
  int local_278;
  TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
  local_268;
  undefined1 local_1b8 [88];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_160;
  TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
  local_108;
  ulonglong local_58;
  
  uVar8 = _UNK_150631d98;
  lVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_908;
  pTVar31 = (TReferenceControllerBase<1> *)0x0;
  local_8d4.TypedValue.ComparisonIndex.Value = (FNameEntryId)0xffffffff;
  local_8d4.TypedValue.Number = 0;
  local_8cb = false;
  local_8c4 = false;
  local_8bc = false;
  local_8b8 = (FLobbyMemberInternal *)0x0;
  FStack_8b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_8a8 = (FLobbyMemberInternal *)0x0;
  FStack_8a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_894 = false;
  local_890 = false;
  local_478[1] = false;
  local_478[8] = false;
  local_478[0x10] = false;
  local_460._0_8_ = (FScriptContainerElement *)0x0;
  local_460._8_8_ = 0;
  local_440 = (void *)0x0;
  local_438 = ___xmm_00000000ffffffff0000008000000000;
  uStack_430 = _UNK_150631d98;
  local_420 = (ForElementType<FSetElementId>)0x0;
  local_418 = 0;
  local_410._0_8_ = (FScriptContainerElement *)0x0;
  local_410._8_8_ = 0;
  local_3f0 = (void *)0x0;
  local_3e8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_3e0 = _UNK_150631d98;
  local_3d0 = (ForElementType<FSetElementId>)0x0;
  local_3c8 = 0;
  local_3c0._0_8_ = (FScriptContainerElement *)0x0;
  local_3c0._8_8_ = 0;
  local_3a0 = (void *)0x0;
  local_398 = ___xmm_00000000ffffffff0000008000000000;
  uStack_390 = _UNK_150631d98;
  local_380 = (ForElementType<FSetElementId>)0x0;
  local_378 = 0;
  local_370._0_8_ = (FScriptContainerElement *)0x0;
  local_370._8_8_ = 0;
  local_350 = (void *)0x0;
  local_348 = ___xmm_00000000ffffffff0000008000000000;
  uStack_340 = _UNK_150631d98;
  local_330 = (ForElementType<FSetElementId>)0x0;
  local_328 = 0;
  if ((this->PreparedServiceChanges).bIsSet != false) {
    FPreparedServiceChanges::~FPreparedServiceChanges(&(this->PreparedServiceChanges).TypedValue);
    (this->PreparedServiceChanges).bIsSet = false;
  }
  if ((this->PreparedClientChanges).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.JoiningLocalMember.SharedReferenceCount.
               ReferenceController);
    (this->PreparedClientChanges).bIsSet = false;
  }
  pFVar4 = (this->InternalPublicData).Object;
  this_00 = &param_1->ClientChanges;
  bVar11 = false;
  local_888 = (FName)pFVar4->_padding_;
  local_8d8.Value = (param_1->LocalAccountId).Value;
  if (((this_00->LocalName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) &&
     (TVar5 = (TOptional<FName>_u_0)pFVar4->_padding_,
     TVar5 != (TOptional<FName>_u_0)*(FName *)&(this_00->LocalName).field0_0x0)) {
    if (TVar5 != (TOptional<FName>_u_0)0x0) {
      if (2 < (byte)LogOnlineServices._0_1_) {
        pFVar14 = TOptional<FName>::GetValue(&this_00->LocalName);
        pFVar15 = ::FName::ToString(pFVar14,&local_820);
        ::FString::ToLower(pFVar15,&local_830);
        pFVar15 = ::FName::ToString((FName *)&((this->InternalPublicData).Object)->_padding_,
                                    &local_840);
        ::FString::ToLower(pFVar15,&local_850);
        Online::ToLogString(&local_6f0,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (this->InternalPublicData).Object);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
        }
        if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_850.Data.AllocatorInstance.Data);
        }
        if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_840.Data.AllocatorInstance.Data);
        }
        if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_830.Data.AllocatorInstance.Data);
        }
        if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.Data.AllocatorInstance.Data);
        }
      }
      local_6e0.bIsSet = false;
      pFVar16 = Errors::InvalidParams(&local_4a0,&local_6e0);
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
                (__return_storage_ptr__,pFVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a0.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a0.Details.SharedReferenceCount.ReferenceController);
      if (local_6e0.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6e0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6e0.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      if (local_330 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_330);
      }
      if (local_370._12_4_ != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_370,0,(int *)(local_370 + 0xc));
      }
      uVar12 = local_348._4_4_;
      uStack_340 = 0xffffffff;
      local_348 = (ulonglong)local_348._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_348 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_370 + 0x10),0);
      }
      if (local_350 != (void *)0x0) {
        FMemory::Free(local_350);
      }
      if ((FScriptContainerElement *)local_370._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_370._0_8_);
      }
      local_378 = 0;
      if (local_380 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_380);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_3c0);
      local_3c8 = 0;
      if (local_3d0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3d0);
      }
      iVar13 = SUB84(local_410._8_8_,4);
      local_410._8_8_ = local_410._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_410,0,(int *)(local_410 + 0xc));
      }
      uVar12 = local_3e8._4_4_;
      uStack_3e0 = 0xffffffff;
      local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_3e8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_410 + 0x10),0);
      }
      if (local_3f0 != (void *)0x0) {
        FMemory::Free(local_3f0);
      }
      if ((FScriptContainerElement *)local_410._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_410._0_8_);
      }
      local_418 = 0;
      if (local_420 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_420);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_460);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FVar26.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14eef62ca;
    }
    pFVar14 = TOptional<FName>::operator*(&this_00->LocalName);
    TOptional<FName>::operator=((TOptional<FName> *)&local_8d4.TypedValue,pFVar14);
  }
  bVar10 = (param_1->ClientChanges).JoinPolicy.bIsSet;
  if (bVar10 != false) {
    pTVar1 = &(param_1->ClientChanges).JoinPolicy;
    if (bVar10 == true) {
      bVar10 = *(ELobbyJoinPolicy *)((longlong)&((this->InternalPublicData).Object)->_padding_ + 4)
               != pTVar1->TypedValue;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      bVar11 = true;
      if (pTVar1 != (TOptional<UE::Online::ELobbyJoinPolicy> *)&local_8cc) {
        local_8cc = pTVar1->TypedValue;
        local_8cb = true;
      }
      if (((param_1->ClientChanges).JoinPolicy.bIsSet == false) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      if (pTVar1 != (TOptional<UE::Online::ELobbyJoinPolicy> *)local_478) {
        local_478[0] = pTVar1->TypedValue;
        local_478[1] = true;
      }
    }
  }
  if ((param_1->ClientChanges).OwnerAccountId.bIsSet != false) {
    bVar10 = (param_1->ClientChanges).OwnerAccountId.bIsSet;
    if (bVar10 == true) {
      bVar33 = *(uint *)((longlong)&((this->InternalPublicData).Object)->_padding_ + 4) !=
               (param_1->ClientChanges).OwnerAccountId.TypedValue.Value;
    }
    else {
      bVar33 = true;
    }
    if (!bVar33) goto LAB_14eef4ae5;
    if ((bVar10 == false) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
      return pTVar17;
    }
    uVar12 = (param_1->ClientChanges).OwnerAccountId.TypedValue.Value;
    uVar30 = uVar12 & 0xffffff;
    uVar27 = (uVar12 >> 0x18) - uVar30 ^ uVar30 >> 0xd;
    uVar25 = (-0x61c88647 - uVar27) - uVar30 ^ uVar27 << 8;
    uVar30 = (uVar30 - uVar25) - uVar27 ^ uVar25 >> 0xd;
    uVar27 = (uVar27 - uVar30) - uVar25 ^ uVar30 >> 0xc;
    uVar25 = (uVar25 - uVar27) - uVar30 ^ uVar27 << 0x10;
    uVar30 = (uVar30 - uVar25) - uVar27 ^ uVar25 >> 5;
    uVar27 = (uVar27 - uVar30) - uVar25 ^ uVar30 >> 3;
    uVar25 = (uVar25 - uVar27) - uVar30 ^ uVar27 << 10;
    if (*(int *)&(this->MemberDataStorage).field_0x8 !=
        *(int *)&(this->MemberDataStorage).field_0x34) {
      puVar28 = *(undefined1 **)&(this->MemberDataStorage).field_0x40;
      if (puVar28 == (undefined1 *)0x0) {
        puVar28 = &(this->MemberDataStorage).field_0x38;
      }
      iVar13 = *(int *)(puVar28 +
                       (ulonglong)
                       (*(int *)&(this->MemberDataStorage).field_0x48 - 1U &
                       ((uVar30 - uVar25) - uVar27 ^ uVar25 >> 0xf)) * 4);
      if (iVar13 != -1) {
        do {
          if (*(uint *)((longlong)iVar13 * 0x20 + *(longlong *)&this->MemberDataStorage) == uVar12)
          {
            bVar11 = true;
            pTVar18 = TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::
                      operator*(&(param_1->ClientChanges).OwnerAccountId);
            if (pTVar18 != &local_8c8) {
              local_8c8.Value = pTVar18->Value;
              local_8c4 = true;
            }
            pTVar18 = TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::
                      operator*(&(param_1->ClientChanges).OwnerAccountId);
            if (pTVar18 != (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)(local_478 + 4)) {
              local_478._4_4_ = pTVar18->Value;
              local_478[8] = true;
            }
            goto LAB_14eef4ae5;
          }
          iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + *(longlong *)&this->MemberDataStorage);
        } while (iVar13 != -1);
      }
    }
    if (2 < (byte)LogOnlineServices._0_1_) {
      pTVar18 = TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::
                operator*(&(param_1->ClientChanges).OwnerAccountId);
      Online::ToLogString(&local_800,pTVar18);
      Online::ToLogString(&local_810,
                          (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                          (this->InternalPublicData).Object);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_810.Data.AllocatorInstance.Data);
      }
      if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_800.Data.AllocatorInstance.Data);
      }
    }
    local_6b0.bIsSet = false;
    pFVar16 = Errors::InvalidParams(&local_590,&local_6b0);
    TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
    TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>(__return_storage_ptr__,pFVar16);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_590.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_590.Details.SharedReferenceCount.ReferenceController);
    if (local_6b0.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6b0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      goto LAB_14eef4cae;
    }
    goto LAB_14eef4cb3;
  }
LAB_14eef4ae5:
  if ((param_1->ClientChanges).KickedTargetMember.bIsSet != false) {
    uVar12 = (param_1->ClientChanges).KickedTargetMember.TypedValue.Value;
    uVar30 = uVar12 & 0xffffff;
    uVar25 = (uVar12 >> 0x18) - uVar30 ^ uVar30 >> 0xd;
    uVar27 = (-0x61c88647 - uVar25) - uVar30 ^ uVar25 << 8;
    uVar30 = (uVar30 - uVar27) - uVar25 ^ uVar27 >> 0xd;
    uVar25 = (uVar25 - uVar30) - uVar27 ^ uVar30 >> 0xc;
    uVar27 = (uVar27 - uVar25) - uVar30 ^ uVar25 << 0x10;
    uVar30 = (uVar30 - uVar27) - uVar25 ^ uVar27 >> 5;
    uVar25 = (uVar25 - uVar30) - uVar27 ^ uVar30 >> 3;
    uVar27 = (uVar27 - uVar25) - uVar30 ^ uVar25 << 10;
    if (*(int *)&(this->MemberDataStorage).field_0x8 !=
        *(int *)&(this->MemberDataStorage).field_0x34) {
      puVar28 = *(undefined1 **)&(this->MemberDataStorage).field_0x40;
      if (puVar28 == (undefined1 *)0x0) {
        puVar28 = &(this->MemberDataStorage).field_0x38;
      }
      iVar13 = *(int *)(puVar28 +
                       (ulonglong)
                       (*(int *)&(this->MemberDataStorage).field_0x48 - 1U &
                       ((uVar30 - uVar27) - uVar25 ^ uVar27 >> 0xf)) * 4);
      if (iVar13 != -1) {
        do {
          if (*(uint *)((longlong)iVar13 * 0x20 + *(longlong *)&this->MemberDataStorage) == uVar12)
          {
            bVar11 = true;
            pTVar18 = TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::
                      operator*(&(param_1->ClientChanges).KickedTargetMember);
            if (pTVar18 != &local_8c0) {
              local_8c0.Value = pTVar18->Value;
              local_8bc = true;
            }
            pTVar18 = TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::
                      operator*(&(param_1->ClientChanges).KickedTargetMember);
            if (pTVar18 != (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)(local_478 + 0xc))
            {
              local_478._12_4_ = pTVar18->Value;
              local_478[0x10] = true;
            }
            goto LAB_14eef4d1e;
          }
          iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + *(longlong *)&this->MemberDataStorage);
        } while (iVar13 != -1);
      }
    }
    if (2 < (byte)LogOnlineServices._0_1_) {
      pTVar18 = TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::
                operator*(&(param_1->ClientChanges).KickedTargetMember);
      Online::ToLogString(&local_7e0,pTVar18);
      Online::ToLogString(&local_7f0,
                          (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                          (this->InternalPublicData).Object);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
      }
      if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
      }
    }
    local_5c0.bIsSet = false;
    pFVar16 = Errors::InvalidParams(&local_568,&local_5c0);
    TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
    TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>(__return_storage_ptr__,pFVar16);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_568.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_568.Details.SharedReferenceCount.ReferenceController);
    if (local_5c0.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5c0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5c0.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    local_328 = 0;
    if (local_330 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_330);
    }
    iVar13 = SUB84(local_370._8_8_,4);
    local_370._8_8_ = local_370._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_370,0,(int *)(local_370 + 0xc));
    }
    uVar12 = local_348._4_4_;
    uStack_340 = 0xffffffff;
    local_348 = (ulonglong)local_348._4_4_ << 0x20;
    if (0x80 < uVar12) {
      local_348 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_370 + 0x10),0);
    }
    if (local_350 != (void *)0x0) {
      FMemory::Free(local_350);
    }
    if ((FScriptContainerElement *)local_370._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_370._0_8_);
    }
    local_378 = 0;
    if (local_380 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_380);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_3c0);
    local_3c8 = 0;
    if (local_3d0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3d0);
    }
    iVar13 = SUB84(local_410._8_8_,4);
    local_410._8_8_ = local_410._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_410,0,(int *)(local_410 + 0xc));
    }
    uVar12 = local_3e8._4_4_;
    uStack_3e0 = 0xffffffff;
    local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
    if (0x80 < uVar12) {
      local_3e8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_410 + 0x10),0);
    }
    if (local_3f0 != (void *)0x0) {
      FMemory::Free(local_3f0);
    }
    if ((FScriptContainerElement *)local_410._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_410._0_8_);
    }
    local_418 = 0;
    if (local_420 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_420);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_460);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_8a0.ReferenceController);
    FVar26.ReferenceController = FStack_8b0.ReferenceController;
    goto LAB_14eef62ca;
  }
LAB_14eef4d1e:
  uVar12 = (param_1->ClientChanges).LobbySchema.field0_0x0.TypedValue.ComparisonIndex.Value;
  pFVar32 = (FLobbyMemberInternal *)&DAT_00000010;
  if ((uVar12 == 0xffffffff) && ((param_1->ClientChanges).Attributes.bIsSet == false)) {
    if (bVar11) goto LAB_14eef59c3;
LAB_14eef4d51:
    if ((param_1->ClientChanges).MemberAttributes.bIsSet == false) {
LAB_14eef5ff9:
      if ((param_1->ClientChanges).LocalUserLeaveReason.bIsSet != false) {
        uVar12 = GetTypeHash<UE::Online::OnlineIdHandleTags::FAccount>(&param_1->LocalAccountId);
        iVar13 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                           ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                             *)&this->MemberDataStorage,uVar12,&param_1->LocalAccountId);
        if (iVar13 == -1) {
          if (2 < (byte)LogOnlineServices._0_1_) {
            Online::ToLogString(&local_700,&param_1->LocalAccountId);
            Online::ToLogString(&local_710,
                                (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                                (this->InternalPublicData).Object);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
            if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_710.Data.AllocatorInstance.Data);
            }
            if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_700.Data.AllocatorInstance.Data);
            }
          }
          local_5f0.bIsSet = false;
          pFVar16 = Errors::InvalidParams(&local_4c8,&local_5f0);
          TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
          TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
                    (__return_storage_ptr__,pFVar16);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_4c8.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_4c8.Details.SharedReferenceCount.ReferenceController);
          if (local_5f0.bIsSet != false) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_5f0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
            local_6b0.TypedValue.Details.SharedReferenceCount.ReferenceController =
                 local_5f0.TypedValue.Details.SharedReferenceCount.ReferenceController;
            goto LAB_14eef4cae;
          }
          goto LAB_14eef4cb3;
        }
        pEVar24 = TOptional<enum_UE::Online::ELobbyMemberLeaveReason>::operator*
                            (&(param_1->ClientChanges).LocalUserLeaveReason);
        if (pEVar24 != &local_898) {
          local_894 = true;
          local_898 = *pEVar24;
        }
      }
      FVar9.ReferenceController = FStack_8a0.ReferenceController;
      FVar26.ReferenceController = FStack_8b0.ReferenceController;
      if ((TOptional<UE::Online::FLobbyClientData::FPreparedClientChanges> *)&local_8d8 !=
          &this->PreparedClientChanges) {
        if ((this->PreparedClientChanges).bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.
                     SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((this->PreparedClientChanges).TypedValue.JoiningLocalMember.
                     SharedReferenceCount.ReferenceController);
        }
        (this->PreparedClientChanges).TypedValue.LocalAccountId.Value = local_8d8.Value;
        (this->PreparedClientChanges).TypedValue.LocalName.field0_0x0.TypedValue.ComparisonIndex.
        Value = 0xffffffff;
        (this->PreparedClientChanges).TypedValue.LocalName.field0_0x0.TypedValue.Number = 0;
        if (local_8d4.TypedValue.ComparisonIndex.Value != 0xffffffff) {
          TVar5.TypedValue.Number = local_8d4.TypedValue.Number;
          TVar5.TypedValue.ComparisonIndex.Value = local_8d4.TypedValue.ComparisonIndex.Value;
          (this->PreparedClientChanges).TypedValue.LocalName.field0_0x0 = TVar5;
        }
        (this->PreparedClientChanges).TypedValue.JoinPolicy.bIsSet = local_8cb;
        if (local_8cb != false) {
          (this->PreparedClientChanges).TypedValue.JoinPolicy.TypedValue = local_8cc;
        }
        (this->PreparedClientChanges).TypedValue.OwnerAccountId.bIsSet = local_8c4;
        if (local_8c4 != false) {
          (this->PreparedClientChanges).TypedValue.OwnerAccountId.TypedValue.Value = local_8c8.Value
          ;
        }
        (this->PreparedClientChanges).TypedValue.KickedTargetMember.bIsSet = local_8bc;
        if (local_8bc != false) {
          (this->PreparedClientChanges).TypedValue.KickedTargetMember.TypedValue.Value =
               local_8c0.Value;
        }
        (this->PreparedClientChanges).TypedValue.JoiningLocalMember.Object = local_8b8;
        (this->PreparedClientChanges).TypedValue.JoiningLocalMember.SharedReferenceCount.
        ReferenceController = FVar26.ReferenceController;
        if (FVar26.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar26.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar26.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (this->PreparedClientChanges).TypedValue.UpdatedLocalMember.Object = local_8a8;
        (this->PreparedClientChanges).TypedValue.UpdatedLocalMember.SharedReferenceCount.
        ReferenceController = FVar9.ReferenceController;
        if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar9.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (this->PreparedClientChanges).TypedValue.LocalUserLeaveReason.bIsSet = local_894;
        if (local_894 != false) {
          (this->PreparedClientChanges).TypedValue.LocalUserLeaveReason.TypedValue = local_898;
        }
        (this->PreparedClientChanges).TypedValue.bLobbyAttributesChanged = local_890;
        (this->PreparedClientChanges).bIsSet = true;
      }
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TResult_UResult_FLobbyClientDataPrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
      ;
      __return_storage_ptr__->field_0x9 = local_478[1];
      if (local_478[1] != false) {
        __return_storage_ptr__->field_0x8 = local_478[0];
      }
      __return_storage_ptr__->field_0x10 = local_478[8];
      if (local_478[8] != false) {
        *(undefined4 *)&__return_storage_ptr__->field_0xc = local_478._4_4_;
      }
      __return_storage_ptr__->field_0x18 = local_478[0x10];
      if (local_478[0x10] != false) {
        *(undefined4 *)&__return_storage_ptr__->field_0x14 = local_478._12_4_;
      }
      TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
      ::
      TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
                ((TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
                  *)&__return_storage_ptr__->field_0x20,
                 (TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
                  *)local_460);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 &__return_storage_ptr__->field_0x70,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_410);
      TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
      ::
      TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
                ((TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
                  *)&__return_storage_ptr__->field_0xc0,
                 (TMap<FName,UE::Online::FSchemaServiceAttributeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>_>
                  *)local_3c0);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 &__return_storage_ptr__->field_0x110,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_370);
      __return_storage_ptr__->field_0x160 = 0;
      *(undefined ***)__return_storage_ptr__ =
           &___7__TOnlineResult_UFLobbyClientDataPrepareClientChanges_Online_UE___Online_UE__6B_;
      FLobbyClientServiceChanges::~FLobbyClientServiceChanges
                ((FLobbyClientServiceChanges *)local_478);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      goto LAB_14eef62ca;
    }
    if ((param_1->ClientChanges).LocalUserLeaveReason.bIsSet == false) {
      pTVar19 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                        *)&this->MemberDataStorage,&param_1->LocalAccountId);
      pTVar20 = (TReferenceControllerBase<1> *)&pTVar19->field_0x8;
      if (pTVar19 ==
          (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
           *)0x0) {
        pTVar20 = pTVar31;
      }
      if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
        pTVar20 = ::operator_new(0x350);
        if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
          _DAT_00000010 = (param_1->LocalAccountId).Value;
        }
        else {
          pTVar20->SharedReferenceCount = (atomic<int>)0x1;
          pTVar20->WeakReferenceCount = (atomic<int>)0x1;
          pTVar20->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFLobbyMemberInternal_Online_UE___00_SharedPointerInternals__6B_
          ;
          FLobbyMemberInternal::FLobbyMemberInternal
                    ((FLobbyMemberInternal *)(pTVar20 + 1),&this->SchemaRegistry,&local_888);
          pFVar32 = (FLobbyMemberInternal *)(pTVar20 + 1);
          if ((pFVar32 == (FLobbyMemberInternal *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)()
            ;
            return pTVar17;
          }
          *(uint *)&pFVar32->_padding_ = (param_1->LocalAccountId).Value;
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
          pTVar31 = pTVar20;
        }
        local_880 = 0;
        local_8b8 = pFVar32;
        local_878.ReferenceController = pTVar31;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_8b0,&local_878);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_878.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31)
        ;
      }
      else {
        local_868.ReferenceController =
             *(TReferenceControllerBase<1> **)&pTVar20->SharedReferenceCount;
        local_8a8 = (FLobbyMemberInternal *)pTVar20->_padding_;
        if (local_868.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_868.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_868.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_870 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_8a0,&local_868);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_868.ReferenceController);
        pFVar32 = (FLobbyMemberInternal *)pTVar20->_padding_;
        uVar12 = GetTypeHash<UE::Online::OnlineIdHandleTags::FAccount>(&param_1->LocalAccountId);
        iVar13 = TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                           (&this->LocalMembers,uVar12,&param_1->LocalAccountId);
        if (iVar13 == -1) {
          local_858.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar20->SharedReferenceCount;
          if (local_858.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_858.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_858.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_860 = 0;
          local_8b8 = pFVar32;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_8b0,&local_858);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_858.ReferenceController);
        }
      }
      FSchemaCategoryInstancePrepareClientChanges::Params::Params((Params *)local_1b8);
      if (((local_888 != (FName)((this->InternalPublicData).Object)->_padding_) &&
          (local_1b8._0_4_ = local_888.ComparisonIndex.Value, local_1b8._4_4_ = local_888.Number,
          local_888.ComparisonIndex.Value.Value == 0xffffffff)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      pFVar21 = TOptional<UE::Online::FLobbyClientMemberAttributeChanges>::operator->
                          (&(param_1->ClientChanges).MemberAttributes);
      if ((FLobbyClientMemberAttributeChanges *)(local_1b8 + 8) != pFVar21) {
        TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)(local_1b8 + 8),
                   (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)pFVar21);
      }
      pFVar21 = TOptional<UE::Online::FLobbyClientMemberAttributeChanges>::operator->
                          (&(param_1->ClientChanges).MemberAttributes);
      if (&local_160 != &pFVar21->RemovedAttributes) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  (&local_160,&pFVar21->RemovedAttributes);
      }
      Online::Private::FSchemaCategoryInstanceBase::PrepareClientChanges
                ((FSchemaCategoryInstanceBase *)&pFVar32->SchemaData,
                 (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)
                 &local_108,(Params *)local_1b8);
      bVar11 = TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
               ::IsError(&local_108);
      if (!bVar11) {
        pTVar22 = (TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
                   *)TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
                     ::GetOkValue(&local_108);
        if ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
             *)local_3c0 != pTVar22) {
          TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
                      *)local_3c0,pTVar22);
        }
        pRVar23 = TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
                  ::GetOkValue(&local_108);
        pTVar3 = &(pRVar23->ServiceChanges).RemovedAttributes;
        if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_370 != pTVar3) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
          Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_370,pTVar3);
        }
        TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
        ~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                  ((TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)
                   &local_108);
        FSchemaCategoryInstancePrepareClientChanges::Params::~Params((Params *)local_1b8);
        goto LAB_14eef5ff9;
      }
      if (2 < (byte)LogOnlineServices._0_1_) {
        pFVar16 = TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
                  ::GetErrorValue(&local_108);
        FOnlineError::GetLogString(pFVar16,&local_720,true);
        Online::ToLogString(&local_730,&param_1->LocalAccountId);
        Online::ToLogString(&local_740,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (this->InternalPublicData).Object);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_740.Data.AllocatorInstance.Data);
        }
        if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_730.Data.AllocatorInstance.Data);
        }
        if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_720.Data.AllocatorInstance.Data);
        }
      }
      pFVar16 = TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
                ::GetErrorValue(&local_108);
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
                (__return_storage_ptr__,pFVar16);
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
      ~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                ((TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)
                 &local_108);
      FSchemaCategoryInstancePrepareClientChanges::Params::~Params((Params *)local_1b8);
    }
    else {
      if (2 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_750,&param_1->LocalAccountId);
        Online::ToLogString(&local_760,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (this->InternalPublicData).Object);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_760.Data.AllocatorInstance.Data);
        }
        if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_750.Data.AllocatorInstance.Data);
        }
      }
      local_620.bIsSet = false;
      pFVar16 = Errors::InvalidParams(&local_4f0,&local_620);
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
                (__return_storage_ptr__,pFVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4f0.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4f0.Details.SharedReferenceCount.ReferenceController);
      if (local_620.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_620.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        local_6b0.TypedValue.Details.SharedReferenceCount.ReferenceController =
             local_620.TypedValue.Details.SharedReferenceCount.ReferenceController;
        goto LAB_14eef4cae;
      }
    }
  }
  else {
    local_318._0_4_ = 0xffffffff;
    local_318._4_4_ = 0;
    local_310._0_8_ = (FScriptContainerElement *)0x0;
    local_310._8_8_ = 0;
    local_2f0 = (void *)0x0;
    local_2e8 = lVar7;
    uStack_2e0 = uVar8;
    local_2d0 = (ForElementType<FSetElementId>)0x0;
    local_2c8 = 0;
    local_2c0._0_8_ = (FScriptContainerElement *)0x0;
    local_2c0._8_8_ = 0;
    local_2a0 = (void *)0x0;
    local_298 = lVar7;
    uStack_290 = uVar8;
    local_280 = (ForElementType<FSetElementId>)0x0;
    local_278 = 0;
    if (uVar12 != 0xffffffff) {
      pFVar14 = TOptional<FName>::operator*(&(param_1->ClientChanges).LobbySchema);
      if (((pFVar14 != (FName *)local_318) &&
          (local_318 = *(undefined1 (*) [8])pFVar14, local_318._0_4_ == 0xffffffff)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      pFVar14 = TOptional<FName>::operator*(&(param_1->ClientChanges).LobbySchema);
      local_888 = *pFVar14;
    }
    if ((param_1->ClientChanges).Attributes.bIsSet != false) {
      pTVar2 = &(param_1->ClientChanges).Attributes;
      if (((param_1->ClientChanges).Attributes.bIsSet == false) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      if ((TOptional<UE::Online::FLobbyClientAttributeChanges> *)local_310 != pTVar2) {
        TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)local_310,
                   (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                    *)pTVar2);
      }
      if (((param_1->ClientChanges).Attributes.bIsSet == false) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      pTVar3 = &(param_1->ClientChanges).Attributes.TypedValue.RemovedAttributes;
      if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2c0 != pTVar3) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2c0,pTVar3);
      }
    }
    Online::Private::FSchemaCategoryInstanceBase::PrepareClientChanges
              ((FSchemaCategoryInstanceBase *)&((this->InternalPublicData).Object)->SchemaData,
               (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)&local_268,
               (Params *)local_318);
    uVar29 = (ulonglong)local_268.Storage.TypeIndex;
    if ((1 < uVar29) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
      return pTVar17;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar29 + 4) != '\0') {
      if (2 < (byte)LogOnlineServices._0_1_) {
        pFVar16 = TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
                  ::GetErrorValue(&local_268);
        FOnlineError::GetLogString(pFVar16,&local_7c0,true);
        Online::ToLogString(&local_7d0,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (this->InternalPublicData).Object);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
        }
        if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
        }
      }
      uVar29 = (ulonglong)local_268.Storage.TypeIndex;
      if ((1 < uVar29) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      if ((*(char *)((longlong)
                     &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType + uVar29 + 4) == '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                              ,0x8c,
                              L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      if ((local_268.Storage.TypeIndex != 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      *(longlong *)&__return_storage_ptr__->field_0x8 = local_268.Storage._padding_;
      *(longlong *)&__return_storage_ptr__->field_0x10 = local_268.Storage._padding_;
      *(longlong *)&__return_storage_ptr__->field_0x18 = local_268.Storage._padding_;
      *(longlong *)&__return_storage_ptr__->field_0x20 = local_268.Storage._padding_;
      *(longlong *)&__return_storage_ptr__->field_0x28 = local_268.Storage._padding_;
      __return_storage_ptr__->field_0x160 = 1;
      *(undefined ***)__return_storage_ptr__ =
           &___7__TOnlineResult_UFLobbyClientDataPrepareClientChanges_Online_UE___Online_UE__6B_;
      local_268.Storage._padding_ = 0;
      local_268.Storage._padding_ = 0;
      local_268.Storage._padding_ = 0;
      local_268.Storage._padding_ = 0;
      if ((1 < local_268.Storage.TypeIndex) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *)(*pcVar6)();
        return pTVar17;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_268.Storage.TypeIndex])(&local_268.Storage);
      local_278 = 0;
      if (local_280 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_280);
      }
      iVar13 = SUB84(local_2c0._8_8_,4);
      local_2c0._8_8_ = local_2c0._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_2c0,0,(int *)(local_2c0 + 0xc));
      }
      uVar12 = local_298._4_4_;
      uStack_290 = 0xffffffff;
      local_298 = (ulonglong)local_298._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_298 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c0 + 0x10),0);
      }
      if (local_2a0 != (void *)0x0) {
        FMemory::Free(local_2a0);
      }
      if ((FScriptContainerElement *)local_2c0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2c0._0_8_);
      }
      local_2c8 = 0;
      if (local_2d0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2d0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_310,0,local_310._8_4_);
      iVar13 = SUB84(local_310._8_8_,4);
      local_310._8_8_ = local_310._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_310,0,(int *)(local_310 + 0xc));
      }
      uVar12 = local_2e8._4_4_;
      uStack_2e0 = 0xffffffff;
      local_2e8 = (ulonglong)local_2e8._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_2e8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_310 + 0x10),0);
      }
      if (local_2f0 != (void *)0x0) {
        FMemory::Free(local_2f0);
      }
      if ((FScriptContainerElement *)local_310._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_310._0_8_);
      }
      local_328 = 0;
      if (local_330 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_330);
      }
      iVar13 = SUB84(local_370._8_8_,4);
      local_370._8_8_ = local_370._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_370,0,(int *)(local_370 + 0xc));
      }
      uVar12 = local_348._4_4_;
      uStack_340 = 0xffffffff;
      local_348 = (ulonglong)local_348._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_348 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_370 + 0x10),0);
      }
      if (local_350 != (void *)0x0) {
        FMemory::Free(local_350);
      }
      if ((FScriptContainerElement *)local_370._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_370._0_8_);
      }
      local_378 = 0;
      if (local_380 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_380);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_3c0,0,local_3c0._8_4_);
      iVar13 = SUB84(local_3c0._8_8_,4);
      local_3c0._8_8_ = local_3c0._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,(ForAnyElementType *)local_3c0,0,(int *)(local_3c0 + 0xc));
      }
      uVar12 = local_398._4_4_;
      uStack_390 = 0xffffffff;
      local_398 = (ulonglong)local_398._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_398 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_3c0 + 0x10),0);
      }
      if (local_3a0 != (void *)0x0) {
        FMemory::Free(local_3a0);
      }
      if ((FScriptContainerElement *)local_3c0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3c0._0_8_);
      }
      local_3c8 = 0;
      if (local_3d0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3d0);
      }
      iVar13 = SUB84(local_410._8_8_,4);
      local_410._8_8_ = local_410._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_410,0,(int *)(local_410 + 0xc));
      }
      uVar12 = local_3e8._4_4_;
      uStack_3e0 = 0xffffffff;
      local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_3e8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_410 + 0x10),0);
      }
      if (local_3f0 != (void *)0x0) {
        FMemory::Free(local_3f0);
      }
      if ((FScriptContainerElement *)local_410._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_410._0_8_);
      }
      local_418 = 0;
      if (local_420 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_420);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_460,0,local_460._8_4_);
      iVar13 = SUB84(local_460._8_8_,4);
      local_460._8_8_ = local_460._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,(ForAnyElementType *)local_460,0,(int *)(local_460 + 0xc));
      }
      uVar12 = local_438._4_4_;
      uStack_430 = 0xffffffff;
      local_438 = (ulonglong)local_438._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_438 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_460 + 0x10),0);
      }
      if (local_440 != (void *)0x0) {
        FMemory::Free(local_440);
      }
      if ((FScriptContainerElement *)local_460._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_460._0_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_8a0.ReferenceController);
      FVar26.ReferenceController = FStack_8b0.ReferenceController;
      goto LAB_14eef62ca;
    }
    pTVar22 = (TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
               *)TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
                 ::GetOkValue(&local_268);
    if ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
         *)local_460 != pTVar22) {
      TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
                  *)local_460,pTVar22);
    }
    pRVar23 = TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
              ::GetOkValue(&local_268);
    pTVar3 = &(pRVar23->ServiceChanges).RemovedAttributes;
    if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_410 != pTVar3) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_410,pTVar3);
    }
    local_890 = true;
    TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
    ~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
              ((TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)&local_268)
    ;
    local_278 = 0;
    if (local_280 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_280);
    }
    iVar13 = SUB84(local_2c0._8_8_,4);
    local_2c0._8_8_ = local_2c0._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_2c0,0,(int *)(local_2c0 + 0xc));
    }
    uVar12 = local_298._4_4_;
    uStack_290 = 0xffffffff;
    local_298 = (ulonglong)local_298._4_4_ << 0x20;
    if (0x80 < uVar12) {
      local_298 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c0 + 0x10),0);
    }
    if (local_2a0 != (void *)0x0) {
      FMemory::Free(local_2a0);
    }
    if ((FScriptContainerElement *)local_2c0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2c0._0_8_);
    }
    local_2c8 = 0;
    if (local_2d0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2d0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_310,0,local_310._8_4_);
    iVar13 = SUB84(local_310._8_8_,4);
    local_310._8_8_ = local_310._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_310,0,(int *)(local_310 + 0xc));
    }
    uVar12 = local_2e8._4_4_;
    uStack_2e0 = 0xffffffff;
    local_2e8 = (ulonglong)local_2e8._4_4_ << 0x20;
    if (0x80 < uVar12) {
      local_2e8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_310 + 0x10),0);
    }
    if (local_2f0 != (void *)0x0) {
      FMemory::Free(local_2f0);
    }
    if ((FScriptContainerElement *)local_310._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_310._0_8_);
    }
LAB_14eef59c3:
    pTVar18 = (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
              ((longlong)&((this->InternalPublicData).Object)->_padding_ + 4);
    if ((param_1->LocalAccountId).Value == pTVar18->Value) {
      if ((param_1->ClientChanges).LocalUserLeaveReason.bIsSet == false) goto LAB_14eef4d51;
      if (2 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_770,&param_1->LocalAccountId);
        Online::ToLogString(&local_780,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (this->InternalPublicData).Object);
        Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u__FLobbyClientDa_15309f9c8,
                   (FLogCategoryBase *)&LogOnlineServices);
        if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_780.Data.AllocatorInstance.Data);
        }
        if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_770.Data.AllocatorInstance.Data);
        }
      }
      local_650.bIsSet = false;
      pFVar16 = Errors::InvalidParams(&local_518,&local_650);
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
                (__return_storage_ptr__,pFVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_518.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_518.Details.SharedReferenceCount.ReferenceController);
      if (local_650.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_650.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        local_6b0.TypedValue.Details.SharedReferenceCount.ReferenceController =
             local_650.TypedValue.Details.SharedReferenceCount.ReferenceController;
        goto LAB_14eef4cae;
      }
    }
    else {
      if (2 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_790,pTVar18);
        Online::ToLogString(&local_7a0,&param_1->LocalAccountId);
        Online::ToLogString(&local_7b0,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (this->InternalPublicData).Object);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
        }
        if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
        }
        if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_790.Data.AllocatorInstance.Data);
        }
      }
      local_680.bIsSet = false;
      pFVar16 = Errors::InvalidParams(&local_540,&local_680);
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
      TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
                (__return_storage_ptr__,pFVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_540.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_540.Details.SharedReferenceCount.ReferenceController);
      if (local_680.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_680.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        local_6b0.TypedValue.Details.SharedReferenceCount.ReferenceController =
             local_680.TypedValue.Details.SharedReferenceCount.ReferenceController;
LAB_14eef4cae:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6b0.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
    }
  }
LAB_14eef4cb3:
  FLobbyClientServiceChanges::~FLobbyClientServiceChanges((FLobbyClientServiceChanges *)local_478);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_8a0.ReferenceController);
  FVar26.ReferenceController = FStack_8b0.ReferenceController;
LAB_14eef62ca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  return __return_storage_ptr__;
}

// PrepareServiceSnapshot @ 14eef6310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> * __thiscall
UE::Online::FLobbyClientData::PrepareServiceSnapshot
          (FLobbyClientData *this,
          TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *__return_storage_ptr__,
          Params *param_1)

{
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar1;
  TOptional<UE::Online::FLobbyClientData::FPreparedServiceChanges> *this_00;
  ELobbyJoinPolicy EVar2;
  uchar auVar3 [4];
  FLobbyInternal *pFVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FLobbyMemberInternal *pFVar11;
  TOptional<FName>_u_0 TVar12;
  FLobbyClientData *pFVar13;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
  *pTVar14;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot,0>_>
  *pTVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uchar auVar19 [4];
  TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *pTVar20;
  FOnlineError *pFVar21;
  FOnlineError *pFVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  longlong lVar24;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
  *pTVar25;
  TReferenceControllerBase<1> *pTVar26;
  code *pcVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar38;
  uchar auVar39 [4];
  undefined1 *puVar31;
  uint *puVar32;
  ForElementType<FSetElementId> FVar33;
  ForElementType<FSetElementId> FVar34;
  ulonglong uVar35;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> *pTVar36;
  FLobbyMemberInternal *pFVar37;
  undefined1 *puVar40;
  uchar auVar41 [4];
  uint uVar42;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
  *pTVar43;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar44;
  undefined1 auStackY_4b8 [32];
  undefined1 local_468;
  undefined1 local_467 [15];
  undefined1 local_458 [4];
  undefined1 local_454;
  int local_450;
  bool local_44c;
  ELobbyJoinPolicy local_448;
  bool local_447;
  ForAnyElementType local_440;
  undefined8 local_438;
  ForAnyElementType local_430;
  undefined8 local_428;
  ForAnyElementType local_420;
  undefined8 local_418;
  TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *local_408;
  TSharedRef<UE::Online::FLobbyMemberInternal,1> local_400;
  TOptional<FName>_u_0 local_3f0;
  FLobbyClientData *local_3e8;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
  *local_3e0;
  undefined8 uStack_3d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3d0;
  uint uStack_3c8;
  uchar auStack_3c4 [4];
  ForElementType<FSetElementId> FStack_3c0;
  undefined1 local_3b0 [16];
  uint local_3a0;
  undefined1 local_398 [16];
  undefined4 local_388;
  FName local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_378;
  int local_358;
  int local_354;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
  *local_350;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
  *local_348;
  undefined1 auStack_340 [32];
  int iStack_320;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot,0>_>
  *local_318;
  undefined1 auStack_310 [32];
  undefined8 uStack_2f0;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  TOptional<UE::Online::FOnlineError> local_238;
  FOnlineError local_208;
  int local_1c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  TOptional<FName>_u_0 local_198;
  undefined1 local_190 [32];
  void *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ForElementType<FSetElementId> local_150;
  int local_148;
  TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
  local_138;
  TOptional<FName>_u_0 local_f8;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  local_f0;
  TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
  local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_440.Data = (FScriptContainerElement *)0x0;
  local_438 = 0;
  local_430.Data = (FScriptContainerElement *)0x0;
  local_428 = 0;
  local_420.Data = (FScriptContainerElement *)0x0;
  local_418 = 0;
  local_454 = 0;
  local_44c = false;
  local_447 = false;
  local_408 = __return_storage_ptr__;
  local_3e8 = this;
  ResetPreparedChanges(this);
  uVar10 = _UNK_150631d98;
  uVar9 = ___xmm_00000000ffffffff0000008000000000;
  pFVar4 = (this->InternalPublicData).Object;
  local_168 = ___xmm_00000000ffffffff0000008000000000;
  uStack_160 = _UNK_150631d98;
  local_198.TypedValue.ComparisonIndex.Value = (FNameEntryId)0xffffffff;
  local_198.TypedValue.Number = 0;
  local_190._0_8_ = (FScriptContainerElement *)0x0;
  local_190._8_8_ = 0;
  local_170 = (void *)0x0;
  local_150 = (ForElementType<FSetElementId>)0x0;
  local_148 = 0;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)local_190,
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&(param_1->LobbySnapshot).SchemaServiceSnapshot);
  Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot
            ((FSchemaCategoryInstanceBase *)&pFVar4->SchemaData,
             (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)&local_138,
             (Params *)&local_198.TypedValue);
  local_148 = 0;
  if (local_150 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_150);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_190,0,local_190._8_4_);
  iVar17 = SUB84(local_190._8_8_,4);
  local_190._8_8_ = local_190._8_8_ & 0xffffffff00000000;
  if (iVar17 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_190,0,(int *)(local_190 + 0xc));
  }
  uVar18 = local_168._4_4_;
  uStack_160 = 0xffffffff;
  local_168 = (ulonglong)local_168._4_4_ << 0x20;
  if (0x80 < uVar18) {
    local_168 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_190 + 0x10),0);
  }
  if (local_170 != (void *)0x0) {
    FMemory::Free(local_170);
  }
  if ((FScriptContainerElement *)local_190._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_190._0_8_);
  }
  uVar35 = (ulonglong)local_138.Storage.TypeIndex;
  if ((1 < uVar35) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar16)) {
    pcVar27 = (code *)swi(3);
    pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)(*pcVar27)();
    return pTVar20;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar35) == '\0') {
    uVar35 = (ulonglong)local_138.Storage.TypeIndex;
    if ((1 < uVar35) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar16)) {
      pcVar27 = (code *)swi(3);
      pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)(*pcVar27)();
      return pTVar20;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetJoinedLobbies::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar35 + 4) == '\0') &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsOk()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                            ,0x7e,
                            L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                           ), bVar16)) {
      pcVar27 = (code *)swi(3);
      pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)(*pcVar27)();
      return pTVar20;
    }
    if ((local_138.Storage.TypeIndex != 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar16)) {
      pcVar27 = (code *)swi(3);
      pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)(*pcVar27)();
      return pTVar20;
    }
    pTVar43 = &this->MemberDataStorage;
    puVar40 = &(this->MemberDataStorage).field_0x10;
    local_3f0 = (TOptional<FName>_u_0)0xffffffff;
    if ((uint)local_138.Storage._padding_ != 0xffffffff) {
      local_3f0 = (TOptional<FName>_u_0)local_138.Storage._padding_;
    }
    local_378._padding_._0_4_ = 0;
    local_378._padding_._4_4_ = 1;
    local_378.UnvisitedBitMask = 0xffffffff;
    local_378.CurrentBitIndex = 0;
    local_378.BaseBitIndex._0_1_ = '\0';
    local_378.BaseBitIndex._1_1_ = '\0';
    local_378.BaseBitIndex._2_1_ = '\0';
    local_378.BaseBitIndex._3_1_ = '\0';
    local_378.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar40;
    local_350 = (TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                 *)pTVar43;
    if (*(int *)&(this->MemberDataStorage).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_378);
    }
    uStack_3d8 = CONCAT44(local_378._padding_._4_4_,(undefined4)local_378._padding_);
    auStack_3c4 = (uchar  [4])local_378.CurrentBitIndex;
    uStack_3c8 = local_378.UnvisitedBitMask;
    FStack_3c0._padding_ = local_378._28_4_;
    FStack_3c0.InlineData[0] = (undefined1)local_378.BaseBitIndex;
    FStack_3c0.InlineData[1] = local_378.BaseBitIndex._1_1_;
    FStack_3c0.InlineData[2] = local_378.BaseBitIndex._2_1_;
    FStack_3c0.InlineData[3] = local_378.BaseBitIndex._3_1_;
    FStack_3c0.SecondaryData._0_4_ =
         *(int *)&(this->MemberDataStorage).field_0x8 -
         *(int *)&(this->MemberDataStorage).field_0x34;
    pTStack_3d0 = local_378.Array;
    unique0x10000d14 = FStack_3c0.SecondaryData._4_4_;
    iStack_320 = FStack_3c0.SecondaryData._0_4_;
    auStack_340._8_8_ = local_378.Array;
    local_3e0 = pTVar43;
    local_348 = pTVar43;
    auStack_340._0_8_ = uStack_3d8;
    auStack_340._16_8_ = _uStack_3c8;
    auStack_340._24_8_ = FStack_3c0._0_8_;
    pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_1c0,(TBitArray<FDefaultBitArrayAllocator> *)puVar40,
                         *(int *)&(this->MemberDataStorage).field_0x28);
    pFVar13 = local_3e8;
    uStack_3d8 = pTVar23->_padding_;
    pTVar7 = pTVar23->Array;
    uVar8._0_4_ = pTVar23->UnvisitedBitMask;
    uVar8._4_4_ = pTVar23->CurrentBitIndex;
    FStack_3c0._0_8_ = *(undefined8 *)&pTVar23->BaseBitIndex;
    pTStack_3d0 = pTVar7;
    _uStack_3c8 = uVar8;
    while( true ) {
      pTVar14 = local_348;
      if (*(int *)(&local_348->field_0x0 + 8) - *(int *)(&local_348->field_0x0 + 0x34) != iStack_320
         ) {
        local_468 = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_468);
      }
      TVar12 = local_3f0;
      __return_storage_ptr__ = local_408;
      if (((auStack_340._20_4_ == uVar8._4_4_) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_340._8_8_ == pTVar7)) &&
         (pTVar14 == pTVar43)) break;
      pTVar44 = (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
                ((longlong)(int)auStack_340._20_4_ * 0x20 + *(longlong *)&pTVar14->field_0x0);
      uVar18 = pTVar44->Value;
      uVar38 = uVar18 & 0xffffff;
      uVar30 = (uVar18 >> 0x18) - uVar38 ^ uVar38 >> 0xd;
      uVar28 = (-0x61c88647 - uVar30) - uVar38 ^ uVar30 << 8;
      uVar38 = (uVar38 - uVar28) - uVar30 ^ uVar28 >> 0xd;
      uVar30 = (uVar30 - uVar38) - uVar28 ^ uVar38 >> 0xc;
      uVar28 = (uVar28 - uVar30) - uVar38 ^ uVar30 << 0x10;
      uVar38 = (uVar38 - uVar28) - uVar30 ^ uVar28 >> 5;
      uVar30 = (uVar30 - uVar38) - uVar28 ^ uVar38 >> 3;
      uVar28 = (uVar28 - uVar30) - uVar38 ^ uVar30 << 10;
      if (*(int *)&(param_1->LobbySnapshot).Members.Elements.field_0x8 !=
          *(int *)&(param_1->LobbySnapshot).Members.Elements.field_0x34) {
        FVar34 = (param_1->LobbySnapshot).Members.Hash.SecondaryData;
        FVar33 = (ForElementType<FSetElementId>)&(param_1->LobbySnapshot).Members.Hash;
        if (FVar34 != (ForElementType<FSetElementId>)0x0) {
          FVar33 = FVar34;
        }
        iVar17 = *(int *)((longlong)FVar33 +
                         (ulonglong)
                         ((param_1->LobbySnapshot).Members.HashSize - 1U &
                         ((uVar38 - uVar28) - uVar30 ^ uVar28 >> 0xf)) * 4);
        if (iVar17 != -1) {
          lVar24 = *(longlong *)&(param_1->LobbySnapshot).Members.Elements;
          do {
            if (*(uint *)(lVar24 + (longlong)iVar17 * 0xc) == uVar18) goto LAB_14eef6bc0;
            iVar17 = *(int *)(lVar24 + 4 + (longlong)iVar17 * 0xc);
          } while (iVar17 != -1);
        }
      }
      uVar28 = GetTypeHash<UE::Online::OnlineIdHandleTags::FAccount>(pTVar44);
      if (*(int *)&(param_1->LeaveReasons).field_0x8 != *(int *)&(param_1->LeaveReasons).field_0x34)
      {
        puVar40 = *(undefined1 **)&(param_1->LeaveReasons).field_0x40;
        puVar31 = &(param_1->LeaveReasons).field_0x38;
        if (puVar40 != (undefined1 *)0x0) {
          puVar31 = puVar40;
        }
        uVar28 = *(uint *)(puVar31 +
                          (ulonglong)(*(int *)&(param_1->LeaveReasons).field_0x48 - 1U & uVar28) * 4
                          );
        if (uVar28 != 0xffffffff) {
          do {
            puVar29 = (uint *)((longlong)(int)uVar28 * 0x10 + *(longlong *)&param_1->LeaveReasons);
            if (*puVar29 == uVar18) goto LAB_14eef694e;
            uVar28 = puVar29[2];
          } while (uVar28 != 0xffffffff);
        }
      }
      puVar29 = (uint *)0x0;
LAB_14eef694e:
      uVar5 = *(undefined8 *)(pTVar44 + 2);
      puVar32 = puVar29 + 1;
      if (puVar29 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      pTVar6 = *(TReferenceControllerBase<1> **)(pTVar44 + 4);
      if (puVar32 == (uint *)0x0) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_388 = 2;
        local_398._0_8_ = uVar5;
        local_398._8_8_ = pTVar6;
        if (((local_420.Data <=
              (TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
               *)local_398) &&
            ((FScriptContainerElement *)local_398 <
             local_420.Data + (longlong)local_418._4_4_ * 0x18)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar27 = (code *)swi(3);
          pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                    (*pcVar27)();
          return pTVar20;
        }
        iVar17 = (int)local_418;
        if ((int)local_418 == local_418._4_4_) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_420,(int *)((longlong)&local_418 + 4));
        }
        lVar24 = (longlong)iVar17;
        local_418._0_4_ = iVar17 + 1;
        *(undefined8 *)(local_420.Data + lVar24 * 0x18) = local_398._0_8_;
        *(undefined8 *)(local_420.Data + lVar24 * 0x18 + 8) = local_398._8_8_;
        if ((TReferenceControllerBase<1> *)local_398._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *(atomic<int> *)(local_398._8_8_ + 8) =
               (atomic<int>)((int)*(atomic<int> *)(local_398._8_8_ + 8) + 1);
          UNLOCK();
        }
        *(undefined4 *)(local_420.Data + lVar24 * 0x18 + 0x10) = local_388;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_398._8_8_);
        if (2 < (byte)LogOnlineServices._0_1_) {
          Online::ToLogString(&local_278,pTVar44);
          Online::LexToString(Disconnected);
          Online::ToLogString(&local_288,
                              (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                              (pFVar13->InternalPublicData).Object);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_3a0 = *puVar32;
        local_3b0._0_8_ = uVar5;
        local_3b0._8_8_ = pTVar6;
        if (((local_420.Data <=
              (TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
               *)local_3b0) &&
            ((FScriptContainerElement *)local_3b0 <
             local_420.Data + (longlong)local_418._4_4_ * 0x18)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar27 = (code *)swi(3);
          pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                    (*pcVar27)();
          return pTVar20;
        }
        iVar17 = (int)local_418;
        if ((int)local_418 == local_418._4_4_) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_420,(int *)((longlong)&local_418 + 4));
        }
        lVar24 = (longlong)iVar17;
        local_418._0_4_ = iVar17 + 1;
        *(undefined8 *)(local_420.Data + lVar24 * 0x18) = local_3b0._0_8_;
        *(undefined8 *)(local_420.Data + lVar24 * 0x18 + 8) = local_3b0._8_8_;
        if ((TReferenceControllerBase<1> *)local_3b0._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *(atomic<int> *)(local_3b0._8_8_ + 8) =
               (atomic<int>)((int)*(atomic<int> *)(local_3b0._8_8_ + 8) + 1);
          UNLOCK();
        }
        *(uint *)(local_420.Data + lVar24 * 0x18 + 0x10) = local_3a0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_3b0._8_8_);
      }
LAB_14eef6bc0:
      auStack_340._16_4_ = auStack_340._16_4_ & ~auStack_340._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
      pTVar43 = &pFVar13->MemberDataStorage;
    }
    pTStack_3d0 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(param_1->LobbyMemberSnapshots).field_0x10;
    auVar3 = *(uchar (*) [4])&(param_1->LobbyMemberSnapshots).field_0x28;
    auVar39[0] = '\0';
    auVar39[1] = '\0';
    auVar39[2] = '\0';
    auVar39[3] = '\0';
    uVar18 = 1;
    auVar19 = auVar39;
    auVar41 = auVar39;
    if (auVar3 != (uchar  [4])0x0) {
      puVar29 = *(uint **)&(param_1->LobbyMemberSnapshots).field_0x20;
      if (puVar29 == (uint *)0x0) {
        puVar29 = (uint *)pTStack_3d0;
      }
      uVar28 = *puVar29;
      while (uVar28 == 0) {
        lVar24 = (longlong)(int)auVar39;
        auVar41 = (uchar  [4])((int)auVar41 + 0x20);
        auVar39 = (uchar  [4])((int)auVar39 + 1);
        auVar19 = auVar3;
        if ((int)((int)auVar3 + -1 + ((int)auVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auVar39)
        goto LAB_14eef6c6f;
        uVar28 = puVar29[lVar24 + 1];
      }
      uVar18 = -uVar28 & uVar28;
      uVar35 = (ulonglong)uVar18 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_358 = (int)lVar24;
      auVar19 = (uchar  [4])(local_358 + -1 + (int)auVar41);
      if ((int)auVar3 < (int)auVar19) {
        auVar19 = auVar3;
      }
    }
LAB_14eef6c6f:
    uVar28 = *(uint *)&(param_1->LobbyMemberSnapshots).field_0x28;
    local_3e0 = (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>_>
                 *)&param_1->LobbyMemberSnapshots;
    FStack_3c0.SecondaryData._0_4_ =
         *(int *)&(param_1->LobbyMemberSnapshots).field_0x8 -
         *(int *)&(param_1->LobbyMemberSnapshots).field_0x34;
    uVar30 = uVar28 & 0xffffffe0;
    uStack_3d8 = CONCAT44(uVar18,auVar39);
    auStack_3c4[0] = auVar19[0];
    auStack_3c4[1] = auVar19[1];
    auStack_3c4[2] = auVar19[2];
    auStack_3c4[3] = auVar19[3];
    uStack_3c8 = 0xffffffff;
    FStack_3c0._padding_ = local_1c4;
    FStack_3c0.InlineData[0] = auVar41[0];
    FStack_3c0.InlineData[1] = auVar41[1];
    FStack_3c0.InlineData[2] = auVar41[2];
    FStack_3c0.InlineData[3] = auVar41[3];
    auStack_310._0_8_ = uStack_3d8;
    iVar17 = (int)uVar28 >> 5;
    uStack_2f0 = CONCAT44(FStack_3c0.SecondaryData._4_4_,FStack_3c0.SecondaryData._0_4_);
    auStack_310[0x18] = auVar41[0];
    auStack_310[0x19] = auVar41[1];
    auStack_310[0x1a] = auVar41[2];
    auStack_310[0x1b] = auVar41[3];
    auStack_310._28_4_ = local_1c4;
    auStack_310._16_4_ = 0xffffffff;
    auStack_310._20_4_ = auStack_3c4;
    local_318 = (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot,0>_>
                 *)local_3e0;
    auStack_310._8_8_ = pTStack_3d0;
    local_408._0_4_ = uVar28;
    if ((((int)uVar28 < 0) || ((int)auVar3 < (int)uVar28)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar27 = (code *)swi(3);
      pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)(*pcVar27)();
      return pTVar20;
    }
    pTVar6 = _UNK_150651568;
    pFVar11 = ___xmm_00000000000000000000000000000010;
    uVar18 = *(uint *)&(param_1->LobbyMemberSnapshots).field_0x28;
    uVar38 = (uint)local_408;
    if ((uint)local_408 != uVar18) {
      puVar40 = *(undefined1 **)&(param_1->LobbyMemberSnapshots).field_0x20;
      if (puVar40 == (undefined1 *)0x0) {
        puVar40 = &(param_1->LobbyMemberSnapshots).field_0x10;
      }
      uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar40 + (longlong)iVar17 * 4);
      while (uVar28 == 0) {
        lVar24 = (longlong)iVar17;
        uVar30 = uVar30 + 0x20;
        iVar17 = iVar17 + 1;
        local_408._0_4_ = uVar18;
        uVar38 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14eef6dc0;
        uVar28 = *(uint *)(puVar40 + lVar24 * 4 + 4);
      }
      uVar35 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_354 = (int)lVar24;
      local_408._0_4_ = local_354 + -1 + uVar30;
      uVar38 = (uint)local_408;
      if ((int)uVar18 < (int)(uint)local_408) {
        local_408._0_4_ = uVar18;
        uVar38 = uVar18;
      }
    }
LAB_14eef6dc0:
    while( true ) {
      pTVar15 = local_318;
      if (*(int *)&local_318->field_0x8 - *(int *)&local_318->field_0x34 != (int)uStack_2f0) {
        local_467[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_467);
      }
      pFVar13 = local_3e8;
      if (((auStack_310._20_4_ == uVar38) &&
          ((undefined1 *)auStack_310._8_8_ == &(param_1->LobbyMemberSnapshots).field_0x10)) &&
         (pTVar15 == &param_1->LobbyMemberSnapshots)) break;
      pTVar44 = (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
                ((longlong)(int)auStack_310._20_4_ * 0x68 + *(longlong *)pTVar15);
      uVar18 = pTVar44->Value;
      uVar42 = uVar18 & 0xffffff;
      uVar30 = (uVar18 >> 0x18) - uVar42 ^ uVar42 >> 0xd;
      uVar28 = (-0x61c88647 - uVar30) - uVar42 ^ uVar30 << 8;
      uVar42 = (uVar42 - uVar28) - uVar30 ^ uVar28 >> 0xd;
      uVar30 = (uVar30 - uVar42) - uVar28 ^ uVar42 >> 0xc;
      uVar28 = (uVar28 - uVar30) - uVar42 ^ uVar30 << 0x10;
      uVar42 = (uVar42 - uVar28) - uVar30 ^ uVar28 >> 5;
      uVar30 = (uVar30 - uVar42) - uVar28 ^ uVar42 >> 3;
      uVar28 = (uVar28 - uVar30) - uVar42 ^ uVar30 << 10;
      if (*(int *)&(param_1->LobbySnapshot).Members.Elements.field_0x8 !=
          *(int *)&(param_1->LobbySnapshot).Members.Elements.field_0x34) {
        FVar34 = (param_1->LobbySnapshot).Members.Hash.SecondaryData;
        FVar33 = (ForElementType<FSetElementId>)&(param_1->LobbySnapshot).Members.Hash;
        if (FVar34 != (ForElementType<FSetElementId>)0x0) {
          FVar33 = FVar34;
        }
        iVar17 = *(int *)((longlong)FVar33 +
                         (ulonglong)
                         ((param_1->LobbySnapshot).Members.HashSize - 1U &
                         ((uVar42 - uVar28) - uVar30 ^ uVar28 >> 0xf)) * 4);
        if (iVar17 != -1) {
          lVar24 = *(longlong *)&(param_1->LobbySnapshot).Members.Elements;
          do {
            if (*(uint *)(lVar24 + (longlong)iVar17 * 0xc) == uVar18) {
              pTVar1 = pTVar44 + 2;
              pTVar25 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                        ::Find(local_350,pTVar1);
              pTVar36 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)&pTVar25->field_0x8;
              if (pTVar25 ==
                  (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>
                   *)0x0) {
                pTVar36 = (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0;
              }
              if (pTVar36 == (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0) {
                pTVar26 = ::operator_new(0x350);
                if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
                  local_400.Object = pFVar11;
                  local_400.SharedReferenceCount.ReferenceController = pTVar6;
                }
                else {
                  pTVar26->SharedReferenceCount = (atomic<int>)0x1;
                  pTVar26->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar26->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_UFLobbyMemberInternal_Online_UE___00_SharedPointerInternals__6B_
                  ;
                  local_380.ComparisonIndex.Value = 0;
                  local_380.Number = 0;
                  FLobbyMemberInternal::FLobbyMemberInternal
                            ((FLobbyMemberInternal *)(pTVar26 + 1),&local_3e8->SchemaRegistry,
                             &local_380);
                  local_400.Object = (FLobbyMemberInternal *)(pTVar26 + 1);
                  local_400.SharedReferenceCount.ReferenceController = pTVar26;
                  if ((local_400.Object == (FLobbyMemberInternal *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InObject != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x246,L""), bVar16)) {
                    pcVar27 = (code *)swi(3);
                    pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                              (*pcVar27)();
                    return pTVar20;
                  }
                }
                *(uint *)&(local_400.Object)->_padding_ = pTVar1->Value;
                if (((local_440.Data <= &local_400) &&
                    (&local_400 <
                     (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
                     (local_440.Data + (longlong)local_438._4_4_ * 0x10))) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar27 = (code *)swi(3);
                  pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                            (*pcVar27)();
                  return pTVar20;
                }
                iVar17 = (int)local_438;
                if ((int)local_438 == local_438._4_4_) {
                  iVar17 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_440,(int *)((longlong)&local_438 + 4));
                }
                pFVar37 = local_400.Object;
                local_438._0_4_ = iVar17 + 1;
                *(FLobbyMemberInternal **)&local_440.Data[(longlong)iVar17 * 0x10].field_0x0 =
                     local_400.Object;
                *(TReferenceControllerBase<1> **)(local_440.Data + (longlong)iVar17 * 0x10 + 8) =
                     local_400.SharedReferenceCount.ReferenceController;
                if (local_400.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_400.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_400.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_400.SharedReferenceCount.ReferenceController);
              }
              else {
                if (((local_430.Data <= pTVar36) &&
                    (pTVar36 < (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
                               (local_430.Data + (longlong)local_428._4_4_ * 0x10))) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar27 = (code *)swi(3);
                  pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                            (*pcVar27)();
                  return pTVar20;
                }
                iVar17 = (int)local_428;
                if ((int)local_428 == local_428._4_4_) {
                  iVar17 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_430,(int *)((longlong)&local_428 + 4));
                }
                local_428._0_4_ = iVar17 + 1;
                *(FLobbyMemberInternal **)&local_430.Data[(longlong)iVar17 * 0x10].field_0x0 =
                     pTVar36->Object;
                pTVar26 = (pTVar36->SharedReferenceCount).ReferenceController;
                *(TReferenceControllerBase<1> **)(local_430.Data + (longlong)iVar17 * 0x10 + 8) =
                     pTVar26;
                if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar26->SharedReferenceCount =
                       (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar37 = pTVar36->Object;
              }
              local_f8 = (TOptional<FName>_u_0)0xffffffff;
              if (local_3f0._0_4_ != 0xffffffff) {
                local_f8 = TVar12;
              }
              local_f0.Elements._0_8_ = 0;
              local_f0.Elements._8_8_ = 0;
              local_f0.Elements._32_8_ = 0;
              local_f0.Elements._40_8_ = uVar9;
              local_f0.Elements._48_8_ = uVar10;
              local_f0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_f0.HashSize = 0;
              TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              ::
              Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                        (&local_f0,
                         (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                          *)(pTVar44 + 4));
              Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot
                        ((FSchemaCategoryInstanceBase *)&pFVar37->SchemaData,
                         (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *
                         )&local_98,(Params *)&local_f8.TypedValue);
              local_f0.HashSize = 0;
              if (local_f0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_f0.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_f0.Elements);
              uVar35 = (ulonglong)local_98.Storage.TypeIndex;
              if ((1 < uVar35) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0x12f,L""), bVar16)) {
                pcVar27 = (code *)swi(3);
                pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                          (*pcVar27)();
                return pTVar20;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar35) == '\0') {
                uVar35 = (ulonglong)local_98.Storage.TypeIndex;
                if ((1 < local_98.Storage.TypeIndex) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xd4,L""), bVar16)) {
                  pcVar27 = (code *)swi(3);
                  pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                            (*pcVar27)();
                  return pTVar20;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar35])(&local_98.Storage);
                goto LAB_14eef72d2;
              }
              if (2 < (byte)LogOnlineServices._0_1_) {
                pFVar21 = TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
                          ::GetErrorValue(&local_98);
                FOnlineError::GetLogString(pFVar21,&local_2b8,true);
                Online::ToLogString(&local_2c8,pTVar1);
                Online::ToLogString(&local_2d8,
                                    (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                                    (local_3e8->InternalPublicData).Object);
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
                if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
                }
                if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                }
                if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                }
              }
              pFVar22 = TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
                        ::GetErrorValue(&local_98);
              *(undefined ***)__return_storage_ptr__ =
                   &
                   ___7__TResult_UResult_FLobbyClientDataPrepareServiceSnapshot_Online_UE__VFOnlineError_34__Online_UE__6B_
              ;
              *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 =
                   (pFVar22->Details).Object;
              *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
                   (pFVar22->Details).SharedReferenceCount.ReferenceController;
              pFVar21 = (pFVar22->Inner).Object;
              (pFVar22->Details).SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              (pFVar22->Details).Object = (IOnlineErrorDetails *)0x0;
              *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar21;
              *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
                   (pFVar22->Inner).SharedReferenceCount.ReferenceController;
              (pFVar22->Inner).SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              (pFVar22->Inner).Object = (FOnlineError *)0x0;
              *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar22->ErrorCode;
              __return_storage_ptr__->field_0x30 = 1;
              *(undefined ***)__return_storage_ptr__ =
                   &
                   ___7__TOnlineResult_UFLobbyClientDataPrepareServiceSnapshot_Online_UE___Online_UE__6B_
              ;
              if ((1 < local_98.Storage.TypeIndex) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar16)) {
                pcVar27 = (code *)swi(3);
                pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                          (*pcVar27)();
                return pTVar20;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_98.Storage.TypeIndex])(&local_98.Storage);
              if ((1 < local_138.Storage.TypeIndex) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar16)) {
                pcVar27 = (code *)swi(3);
                pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)
                          (*pcVar27)();
                return pTVar20;
              }
              pcVar27 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                                  ::__l2::Destructors)[local_138.Storage.TypeIndex];
              goto LAB_14eef7830;
            }
            iVar17 = *(int *)(lVar24 + 4 + (longlong)iVar17 * 0xc);
          } while (iVar17 != -1);
        }
      }
      if (2 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_258,pTVar44);
        Online::ToLogString(&local_268,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (local_3e8->InternalPublicData).Object);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
      }
LAB_14eef72d2:
      auStack_310._16_4_ = auStack_310._16_4_ & ~auStack_310._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_310);
    }
    uVar18 = (param_1->LobbySnapshot).OwnerAccountId.Value;
    pFVar4 = (local_3e8->InternalPublicData).Object;
    if (*(uint *)((longlong)&pFVar4->_padding_ + 4) == uVar18) {
LAB_14eef756d:
      iVar17 = (param_1->LobbySnapshot).MaxMembers;
      if (((int)pFVar4->_padding_ != iVar17) && (&(param_1->LobbySnapshot).MaxMembers != &local_450)
         ) {
        local_44c = true;
        local_450 = iVar17;
      }
      EVar2 = (param_1->LobbySnapshot).JoinPolicy;
      if ((*(ELobbyJoinPolicy *)((longlong)&pFVar4->_padding_ + 4) != EVar2) &&
         (&(param_1->LobbySnapshot).JoinPolicy != &local_448)) {
        local_447 = true;
        local_448 = EVar2;
      }
      this_00 = &local_3e8->PreparedServiceChanges;
      if ((TOptional<UE::Online::FLobbyClientData::FPreparedServiceChanges> *)local_458 != this_00)
      {
        if ((local_3e8->PreparedServiceChanges).bIsSet != false) {
          FPreparedServiceChanges::~FPreparedServiceChanges(&this_00->TypedValue);
        }
        (pFVar13->PreparedServiceChanges).TypedValue.OwnerAccountId.bIsSet = (bool)local_454;
        if ((bool)local_454 != false) {
          (this_00->TypedValue).OwnerAccountId.TypedValue.Value = (uint)local_458;
        }
        (pFVar13->PreparedServiceChanges).TypedValue.MaxMembers.bIsSet = local_44c;
        if (local_44c != false) {
          (pFVar13->PreparedServiceChanges).TypedValue.MaxMembers.TypedValue = local_450;
        }
        (pFVar13->PreparedServiceChanges).TypedValue.JoinPolicy.bIsSet = local_447;
        if (local_447 != false) {
          (pFVar13->PreparedServiceChanges).TypedValue.JoinPolicy.TypedValue = local_448;
        }
        (pFVar13->PreparedServiceChanges).TypedValue.NewMemberDataStorage.AllocatorInstance.Data =
             local_440.Data;
        (pFVar13->PreparedServiceChanges).TypedValue.NewMemberDataStorage.ArrayNum = (int)local_438;
        (pFVar13->PreparedServiceChanges).TypedValue.NewMemberDataStorage.ArrayMax = local_438._4_4_
        ;
        (pFVar13->PreparedServiceChanges).TypedValue.UpdatedMemberDataStorage.AllocatorInstance.Data
             = local_430.Data;
        (pFVar13->PreparedServiceChanges).TypedValue.UpdatedMemberDataStorage.ArrayNum =
             (int)local_428;
        (pFVar13->PreparedServiceChanges).TypedValue.UpdatedMemberDataStorage.ArrayMax =
             local_428._4_4_;
        (pFVar13->PreparedServiceChanges).TypedValue.LeavingMembers.AllocatorInstance.Data =
             local_420.Data;
        (pFVar13->PreparedServiceChanges).TypedValue.LeavingMembers.ArrayNum = (int)local_418;
        (pFVar13->PreparedServiceChanges).TypedValue.LeavingMembers.ArrayMax = local_418._4_4_;
        (pFVar13->PreparedServiceChanges).bIsSet = true;
        local_440.Data = (FScriptContainerElement *)0x0;
        local_438 = 0;
        local_430.Data = (FScriptContainerElement *)0x0;
        local_428 = 0;
        local_420.Data = (FScriptContainerElement *)0x0;
        local_418 = 0;
      }
      __return_storage_ptr__->field_0x30 = 0;
      *(undefined ***)__return_storage_ptr__ =
           &___7__TOnlineResult_UFLobbyClientDataPrepareServiceSnapshot_Online_UE___Online_UE__6B_;
    }
    else {
      uVar38 = uVar18 & 0xffffff;
      uVar28 = (uVar18 >> 0x18) - uVar38 ^ uVar38 >> 0xd;
      uVar30 = (-0x61c88647 - uVar28) - uVar38 ^ uVar28 << 8;
      uVar38 = (uVar38 - uVar30) - uVar28 ^ uVar30 >> 0xd;
      uVar28 = (uVar28 - uVar38) - uVar30 ^ uVar38 >> 0xc;
      uVar30 = (uVar30 - uVar28) - uVar38 ^ uVar28 << 0x10;
      uVar38 = (uVar38 - uVar30) - uVar28 ^ uVar30 >> 5;
      uVar28 = (uVar28 - uVar38) - uVar30 ^ uVar38 >> 3;
      uVar30 = (uVar30 - uVar28) - uVar38 ^ uVar28 << 10;
      if (*(int *)&(param_1->LobbySnapshot).Members.Elements.field_0x8 !=
          *(int *)&(param_1->LobbySnapshot).Members.Elements.field_0x34) {
        FVar34 = (param_1->LobbySnapshot).Members.Hash.SecondaryData;
        if (FVar34 == (ForElementType<FSetElementId>)0x0) {
          FVar34 = (ForElementType<FSetElementId>)&(param_1->LobbySnapshot).Members.Hash;
        }
        iVar17 = *(int *)((longlong)FVar34 +
                         (ulonglong)
                         ((param_1->LobbySnapshot).Members.HashSize - 1U &
                         ((uVar38 - uVar30) - uVar28 ^ uVar30 >> 0xf)) * 4);
        if (iVar17 != -1) {
          lVar24 = *(longlong *)&(param_1->LobbySnapshot).Members.Elements;
          do {
            if (*(uint *)(lVar24 + (longlong)iVar17 * 0xc) == uVar18) {
              if (param_1 != (Params *)local_458) {
                local_454 = 1;
                local_458 = (undefined1  [4])uVar18;
              }
              goto LAB_14eef756d;
            }
            iVar17 = *(int *)(lVar24 + 4 + (longlong)iVar17 * 0xc);
          } while (iVar17 != -1);
        }
      }
      if (2 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_2e8,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)param_1);
        Online::ToLogString(&local_248,
                            (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                            (pFVar13->InternalPublicData).Object);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
      }
      local_238.bIsSet = false;
      pFVar22 = Errors::InvalidState(&local_208,&local_238);
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TResult_UResult_FLobbyClientDataPrepareServiceSnapshot_Online_UE__VFOnlineError_34__Online_UE__6B_
      ;
      *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar22->Details).Object;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
           (pFVar22->Details).SharedReferenceCount.ReferenceController;
      pFVar21 = (pFVar22->Inner).Object;
      (pFVar22->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar22->Details).Object = (IOnlineErrorDetails *)0x0;
      *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar21;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
           (pFVar22->Inner).SharedReferenceCount.ReferenceController;
      (pFVar22->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar22->Inner).Object = (FOnlineError *)0x0;
      *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar22->ErrorCode;
      __return_storage_ptr__->field_0x30 = 1;
      *(undefined ***)__return_storage_ptr__ =
           &___7__TOnlineResult_UFLobbyClientDataPrepareServiceSnapshot_Online_UE___Online_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.Details.SharedReferenceCount.ReferenceController);
      if (local_238.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_238.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_238.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
    }
    if ((1 < local_138.Storage.TypeIndex) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar27 = (code *)swi(3);
      pTVar20 = (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *)(*pcVar27)();
      return pTVar20;
    }
    pcVar27 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_138.Storage.TypeIndex];
LAB_14eef7830:
    (*pcVar27)(&local_138.Storage);
    DestructItems<TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,enum_UE::Online::ELobbyMemberLeaveReason>,int>
              ((TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
                *)local_420.Data,(int)local_418);
    if ((TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
         *)local_420.Data !=
        (TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
         *)0x0) {
      FMemory::Free(local_420.Data);
    }
    DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
              ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_430.Data,(int)local_428);
    if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_430.Data !=
        (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0) {
      FMemory::Free(local_430.Data);
    }
    DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
              ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_440.Data,(int)local_438);
    if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_440.Data !=
        (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0) {
      FMemory::Free(local_440.Data);
    }
  }
  else {
    if (2 < (byte)LogOnlineServices._0_1_) {
      pFVar21 = TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
                ::GetErrorValue(&local_138);
      FOnlineError::GetLogString(pFVar21,&local_298,true);
      Online::ToLogString(&local_2a8,
                          (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)
                          (this->InternalPublicData).Object);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
              ::GetErrorValue(&local_138);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TResult_UResult_FLobbyClientDataPrepareServiceSnapshot_Online_UE__VFOnlineError_34__Online_UE__6B_
    ;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar22->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar22->Details).SharedReferenceCount.ReferenceController;
    pFVar21 = (pFVar22->Inner).Object;
    (pFVar22->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (pFVar22->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar21;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar22->Inner).SharedReferenceCount.ReferenceController;
    (pFVar22->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar22->Inner).Object = (FOnlineError *)0x0;
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar22->ErrorCode;
    __return_storage_ptr__->field_0x30 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFLobbyClientDataPrepareServiceSnapshot_Online_UE___Online_UE__6B_;
    TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>::
    ~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>
              ((TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
               &local_138);
    DestructItems<TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,enum_UE::Online::ELobbyMemberLeaveReason>,int>
              ((TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
                *)local_420.Data,(int)local_418);
    if ((TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
         *)local_420.Data !=
        (TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
         *)0x0) {
      FMemory::Free(local_420.Data);
    }
    DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
              ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_430.Data,(int)local_428);
    if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_430.Data !=
        (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0) {
      FMemory::Free(local_430.Data);
    }
    DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
              ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_440.Data,(int)local_438);
    if ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)local_440.Data !=
        (TSharedRef<UE::Online::FLobbyMemberInternal,1> *)0x0) {
      FMemory::Free(local_440.Data);
    }
  }
  return __return_storage_ptr__;
}

// RemoveMember @ 14eefe3e0

void __thiscall
UE::Online::FLobbyClientData::RemoveMember
          (FLobbyClientData *this,TSharedRef<UE::Online::FLobbyMemberInternal,1> *param_1)

{
  FLobbyInternal *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)&(this->MemberDataStorage).field_0x8 != *(int *)&(this->MemberDataStorage).field_0x34)
  {
    uVar3 = *(uint *)&param_1->Object->_padding_;
    uVar2 = uVar3 & 0xffffff;
    uVar5 = (uVar3 >> 0x18) - uVar2 ^ uVar2 >> 0xd;
    uVar4 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xc;
    uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 0x10;
    uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 5;
    uVar4 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
    TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>,0>,FDefaultSetAllocator>
                *)&this->MemberDataStorage,(uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf,
               (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)param_1->Object);
  }
  pFVar1 = (this->InternalPublicData).Object;
  if ((int)pFVar1->_padding_ != *(int *)((longlong)&pFVar1->_padding_ + 4)) {
    uVar3 = *(uint *)&param_1->Object->_padding_;
    uVar2 = uVar3 & 0xffffff;
    uVar5 = (uVar3 >> 0x18) - uVar2 ^ uVar2 >> 0xd;
    uVar4 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xc;
    uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 0x10;
    uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 5;
    uVar4 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
    TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMember_const_,1>,0>,FDefaultSetAllocator>
                *)&pFVar1->_padding_,(uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf,
               (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)param_1->Object);
  }
  if ((char)param_1->Object->_padding_ != '\0') {
    TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
    ::Remove(&this->LocalMembers,
             (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)param_1->Object);
  }
  return;
}

// ResetPreparedChanges @ 14eefeab0

void __thiscall UE::Online::FLobbyClientData::ResetPreparedChanges(FLobbyClientData *this)

{
  if ((this->PreparedServiceChanges).bIsSet != false) {
    FPreparedServiceChanges::~FPreparedServiceChanges(&(this->PreparedServiceChanges).TypedValue);
    (this->PreparedServiceChanges).bIsSet = false;
  }
  if ((this->PreparedClientChanges).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.JoiningLocalMember.SharedReferenceCount.
               ReferenceController);
    (this->PreparedClientChanges).bIsSet = false;
  }
  return;
}

// ~FLobbyClientData @ 14efe6540

void __thiscall UE::Online::FLobbyClientData::~FLobbyClientData(FLobbyClientData *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  if ((this->PreparedClientChanges).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.UpdatedLocalMember.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.JoiningLocalMember.SharedReferenceCount.
               ReferenceController);
  }
  if ((this->PreparedServiceChanges).bIsSet != false) {
    FPreparedServiceChanges::~FPreparedServiceChanges(&(this->PreparedServiceChanges).TypedValue);
  }
  (this->LocalMembers).HashSize = 0;
  FVar1 = (this->LocalMembers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LocalMembers).Elements);
  *(undefined4 *)&(this->MemberDataStorage).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MemberDataStorage).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FLobbyMemberInternal,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemberDataStorage);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InternalPublicData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SchemaRegistry).SharedReferenceCount.ReferenceController);
  return;
}

// GetPublicDataPtr @ 14efff1a0

TSharedRef<UE::Online::FLobby_const_,1> * __thiscall
UE::Online::FLobbyClientData::GetPublicDataPtr
          (FLobbyClientData *this,TSharedRef<UE::Online::FLobby_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (FLobby *)(this->InternalPublicData).Object;
  pTVar1 = (this->InternalPublicData).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

