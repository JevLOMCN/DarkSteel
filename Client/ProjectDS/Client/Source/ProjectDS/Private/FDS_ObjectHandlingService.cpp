// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// ProcessError @ 14bc025a0

bool __cdecl FDS_ObjectHandlingService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ProcessError_ReceiveGravityFall @ 14bc03040

bool __cdecl
FDS_ObjectHandlingService::ProcessError_ReceiveGravityFall
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ProcessError_ReceiveHandlingEnd @ 14bc03050

bool __cdecl
FDS_ObjectHandlingService::ProcessError_ReceiveHandlingEnd
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ProcessError_ReceiveHandlingStart @ 14bc03060

bool __cdecl
FDS_ObjectHandlingService::ProcessError_ReceiveHandlingStart
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  HandlingStartResponseDefaultTypeInternal *pHVar1;
  EDS_AbilityDeactivateType local_res8;
  undefined7 uStackX_9;
  ulong64 local_res10 [3];
  
  if (*(int *)&param_2[1].field_0xc == 0x26c) {
    pHVar1 = *(HandlingStartResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pHVar1 = &server_msg::_HandlingStartResponse_default_instance_;
  }
  local_res10[0] = (pHVar1->_instance)._impl_.entity_id_;
  _local_res8 = CONCAT71((int7)((ulonglong)param_1 >> 8),2);
  UDS_InteractionProcessAbility::Deactivate(local_res10,&local_res8);
  return false;
}

// ReceiveGravityFall @ 14bc045f0

void __cdecl FDS_ObjectHandlingService::ReceiveGravityFall(ServerMessages *param_1)

{
  double dVar1;
  Vector *pVVar2;
  GravityFallResponseDefaultTypeInternal *pGVar3;
  float local_res8 [2];
  ulong64 local_res10 [3];
  TVector<double>_u_0 local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x26e) {
    pGVar3 = *(GravityFallResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar3 = &server_msg::_GravityFallResponse_default_instance_;
  }
  local_res10[0] = *(ulong64 *)((longlong)pGVar3 + 0x20);
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pVVar2 = &_Vector_default_instance_._instance;
  if (*(Vector **)&((Message *)((longlong)pGVar3 + 0x10))->field_0x8 != (Vector *)0x0) {
    pVVar2 = *(Vector **)&((Message *)((longlong)pGVar3 + 0x10))->field_0x8;
  }
  DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar2);
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  local_res8[0] = (float)(*(double *)&((Message *)((longlong)pGVar3 + 0x20))->field_0x8 - dVar1);
  if (local_res8[0] < 0.0) {
    local_res8[0] = 0.0;
  }
  UDS_NPCClientControlAbility_Falling::TryActivate
            (local_res10,(TVector<double> *)&local_28._s_0,local_res8);
  return;
}

// ReceiveHandlingEnd @ 14bc046a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_ObjectHandlingService::ReceiveHandlingEnd(ServerMessages *param_1)

{
  int iVar1;
  bool bVar2;
  HandlingEndResponseDefaultTypeInternal *pHVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_CharStateData *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_198 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityDeactivateType local_158 [8];
  FWeakObjectPtr local_150;
  ulong64 local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x26d) {
    pHVar3 = *(HandlingEndResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pHVar3 = &server_msg::_HandlingEndResponse_default_instance_;
  }
  local_148 = *(ulong64 *)&((Message *)((longlong)pHVar3 + 0x10))->field_0x8;
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_148);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_ObjectHandlingService::ReceiveHandlingEnd",0x2d,Yes);
    pwVar9 = L"sourceEntity is nullptr. (%llu)";
    uVar8 = 0x9f;
  }
  else {
    UDS_CharStateData::GetData((ulong64)&local_140);
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_140,(void *)0x0);
    if (bVar2) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_ObjectHandlingService::ReceiveHandlingEnd",0x2d,Yes);
      pwVar9 = L"charStateData is nullptr. (%llu)";
      uVar8 = 0xa7;
    }
    else {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_140);
      local_150.ObjectIndex = 0x47;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_150);
      if (bVar2) {
        local_158[0] = 0x42;
        UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
                  ((ulong64 *)&local_150,(EDS_AbilityTagType *)&local_148);
        bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                           &local_150,(void *)0x0);
        if (!bVar2) {
          pUVar7 = FWeakObjectPtr::Get(&local_150);
          iVar1 = *(int *)&pUVar7[2].field_0x10;
          pUVar7 = FWeakObjectPtr::Get(&local_150);
          bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                            (&local_148,(ulong64 *)&pUVar7[2].field_0x8,iVar1,false);
          if (bVar2) {
            if (pFVar4->EntityType != MainCharacter) {
              pUVar7 = FWeakObjectPtr::Get(&local_150);
              if (*(int *)&pUVar7[3].field_0x10 != 2) {
                return;
              }
              pUVar7 = FWeakObjectPtr::Get(&local_150);
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                        ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar7[5].field_0x20);
              return;
            }
            pUVar7 = FWeakObjectPtr::Get(&local_150);
            if (pUVar7[3].field_0x24 != '\0') {
              return;
            }
            pUVar7 = FWeakObjectPtr::Get(&local_150);
            if (pUVar7[3].field_0x25 != '\0') {
              return;
            }
          }
          local_158[0] = Success;
          UDS_InteractionAbility_LiftUp::Deactivate(&local_148,local_158);
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_ObjectHandlingService::ReceiveHandlingEnd",0x2d,Yes);
        pwVar9 = L"liftUpAbilityData is nullptr. (%llu)";
        uVar8 = 0xb1;
      }
      else {
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_140);
        local_150.ObjectIndex = 0x46;
        bVar2 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_150);
        if (bVar2) {
          local_158[0] = 0x41;
          UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_Hold>
                    ((ulong64 *)&local_150,(EDS_AbilityTagType *)&local_148);
          bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> *)
                             &local_150,(void *)0x0);
          if (!bVar2) {
            pUVar7 = FWeakObjectPtr::Get(&local_150);
            iVar1 = *(int *)&pUVar7[2].field_0x10;
            pUVar7 = FWeakObjectPtr::Get(&local_150);
            bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                              (&local_148,(ulong64 *)&pUVar7[2].field_0x8,iVar1,false);
            if (bVar2) {
              pUVar7 = FWeakObjectPtr::Get(&local_150);
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                        ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar7[3].field_0x18);
            }
            local_158[0] = Success;
            UDS_InteractionAbility_Hold::Deactivate(&local_148,local_158);
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"FDS_ObjectHandlingService::ReceiveHandlingEnd",0x2d,Yes);
          pwVar9 = L"holdAbilityData is nullptr. (%llu)";
          uVar8 = 0xd4;
        }
        else {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"FDS_ObjectHandlingService::ReceiveHandlingEnd",0x2d,Yes);
          pwVar9 = L"charStateData is invalid. (%llu)";
          uVar8 = 0xeb;
        }
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar8,pwVar9);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveHandlingStart @ 14bc04af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_ObjectHandlingService::ReceiveHandlingStart(ServerMessages *param_1)

{
  bool bVar1;
  EDS_HandlingType EVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCDataSet *this;
  UObject *pUVar4;
  HandlingStartResponseDefaultTypeInternal *pHVar5;
  undefined1 auStackY_1a8 [32];
  int local_168 [2];
  ulong64 local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x26c) {
    pHVar5 = *(HandlingStartResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pHVar5 = &server_msg::_HandlingStartResponse_default_instance_;
  }
  local_148[0] = *(ulong64 *)&((Message *)((longlong)pHVar5 + 0x10))->field_0x8;
  local_160 = *(ulong64 *)((longlong)pHVar5 + 0x20);
  local_168[0] = *(int *)&((Message *)((longlong)pHVar5 + 0x20))->field_0xc;
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_158);
  bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_ObjectHandlingService::ReceiveHandlingStart",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x5d,L"npcDataSet is nullptr. (%llu)")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar1) {
      this = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_158);
      pUVar4 = FWeakObjectPtr::Get(&local_150);
      EVar2 = UDS_NPCDataSet::GetHandlingType(this,*(int *)&pUVar4[9].field_0x10);
      if (EVar2 == Hold) {
        UDS_InteractionAbility_Hold::TryActivate(local_148,&local_160,local_168);
      }
      else if (EVar2 == LiftUp) {
        UDS_InteractionAbility_LiftUp::TryActivate(local_148,&local_160,local_168);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_ObjectHandlingService::ReceiveHandlingStart",0x2f,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x65,L"playerData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// SendHandlingEnd @ 14bc1b770

bool __cdecl FDS_ObjectHandlingService::SendHandlingEnd(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this_00;
  Arena *pAVar7;
  TSharedRef<client_msg::ClientMessages,1> local_18;
  
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x1c3) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x1c3;
    pAVar7 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::HandlingEndRequest>(pAVar7);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  if ((this->_impl_).ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1b81e;
    }
  }
  bVar3 = false;
LAB_14bc1b81e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// SendHandlingStart @ 14bc1b840

bool __cdecl FDS_ObjectHandlingService::SendHandlingStart(ulong64 *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this_00;
  Arena *pAVar7;
  TSharedRef<client_msg::ClientMessages,1> local_18;
  
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x1c2) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x1c2;
    pAVar7 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::HandlingStartRequest>(pAVar7);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  pMVar6 = (this->_impl_).ClientMessage_.joincontinentreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(int *)(pMVar6 + 2) = param_2;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 3;
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1b916;
    }
  }
  bVar3 = false;
LAB_14bc1b916:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

