// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// OnDestroy @ 14b8a5990

bool __thiscall FDS_PartyRepo::OnDestroy(FDS_PartyRepo *this)

{
  UDS_EntityManager *pUVar1;
  
  FDS_PartyInfo::Clear(&this->PartyInfo);
  pUVar1 = UDS_EntityManager::GetInst();
  if (pUVar1 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSpawnEntityEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemoveEntityEvent,
               this);
  }
  return true;
}

// FDS_PartyRepo @ 14b8b18c0

FDS_PartyRepo * __thiscall FDS_PartyRepo::FDS_PartyRepo(FDS_PartyRepo *this)

{
  this->_padding_ = (longlong)&___7FDS_PartyRepo__6B_;
  (this->PartyInfo).PartyType = None;
  (this->PartyInfo).PartyUID = 0;
  (this->PartyInfo).PartyLeaderUID = 0;
  (this->PartyInfo).PartyMemberInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyInfo).PartyMemberInfos.ArrayNum = 0;
  (this->PartyInfo).PartyMemberInfos.ArrayMax = 0;
  (this->PartyInfo).MySlotIndex = 0;
  (this->PartyInfo).PartyMemberCount = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.PlayerUID = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.EntityID = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.SlotIndex = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.Nickname.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PartyInfo).DefaultPartyMemberInfo.Nickname.Data.ArrayNum = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.Nickname.Data.ArrayMax = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.Level = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.CharID = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.ZoneID = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.Online = false;
  (this->PartyInfo).DefaultPartyMemberInfo.Dead = false;
  (this->PartyInfo).DefaultPartyMemberInfo.Position.field0_0x0._s_0.X = 0.0;
  (this->PartyInfo).DefaultPartyMemberInfo.Position.field0_0x0._s_0.Y = 0.0;
  (this->PartyInfo).DefaultPartyMemberInfo.Position.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats = 0;
  *(undefined8 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x8 = 0;
  *(undefined8 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x20 = 0;
  *(undefined4 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x28 = 0;
  *(undefined4 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x2c = 0x80;
  *(undefined4 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x34 = 0;
  *(undefined8 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x40 = 0;
  *(undefined4 *)&(this->PartyInfo).DefaultPartyMemberInfo.Stats.field_0x48 = 0;
  (this->PartyInfo).DefaultPartyMemberInfo.GameServerIndex = 0;
  return this;
}

// ClearPartyInfo @ 14b8b8a10

void __thiscall FDS_PartyRepo::ClearPartyInfo(FDS_PartyRepo *this)

{
  UDS_EntityManager *pUVar1;
  
  FDS_PartyInfo::Clear(&this->PartyInfo);
  pUVar1 = UDS_EntityManager::GetInst();
  if (pUVar1 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSpawnEntityEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemoveEntityEvent,
               this);
  }
  return;
}

// IsPartyJoined @ 14b8d0320

bool __thiscall FDS_PartyRepo::IsPartyJoined(FDS_PartyRepo *this)

{
  if ((0 < (this->PartyInfo).PartyUID) && ((this->PartyInfo).PartyType != None)) {
    return true;
  }
  return false;
}

// IsPartyMemeber @ 14b8d0480

bool __thiscall FDS_PartyRepo::IsPartyMemeber(FDS_PartyRepo *this,long64 param_1)

{
  bool bVar1;
  
  bVar1 = FDS_PartyInfo::IsPartyMemeber(&this->PartyInfo,param_1);
  return bVar1;
}

// OnRemoveEntity @ 14b8d97a0

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

void __thiscall FDS_PartyRepo::OnRemoveEntity(FDS_PartyRepo *this,ulong64 *param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  FDS_PartyMemberInfo *this_00;
  FDS_PartyMemberInfo *pFVar9;
  undefined1 auStackY_3d8 [32];
  undefined1 local_3a8 [8];
  FWeakObjectPtr local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  if (((this->PartyInfo).PartyUID < 1) || ((this->PartyInfo).PartyType == None)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4541407902354636913>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyRepo.cpp"
                       ,0x71,"PartyInfo.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_PartyRepo::OnRemoveEntity",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x73,L"PartyInfo.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar6 = FDS_EntityBase::GetEntityBase(param_1);
    if ((pFVar6 != (FDS_EntityBase *)0x0) && (pFVar6->EntityType == NetCharacter)) {
      UDS_PlayerData::GetData((ulong64)&local_3a0,*param_1,false);
      bVar5 = FWeakObjectPtr::IsValid(&local_3a0);
      if (bVar5) {
        pUVar7 = FWeakObjectPtr::Get(&local_3a0);
        lVar2 = *(longlong *)&pUVar7[6].field_0x8;
        bVar5 = FDS_PartyInfo::IsPartyMemeber(&this->PartyInfo,lVar2);
        if (bVar5) {
          pvVar3 = (void *)*param_1;
          if (lVar2 < 1) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_398._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_398,"FDS_PartyInfo::UnbindEntity",0x1b,Yes);
              UDS_LogManager::PrintLog(pUVar8,1,Warning,local_398.Ptr,0x290,L"InPlayerUID <= 0ll");
              if ((void *)local_398._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_398._padding_);
              }
            }
          }
          else if (pvVar3 == (void *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_278._padding_ = (longlong)pvVar3;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,"FDS_PartyInfo::UnbindEntity",0x1b,Yes);
              UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,0x296,L"InEntityID == 0ull");
              if ((void *)local_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_278._padding_);
              }
            }
          }
          else {
            this_00 = (FDS_PartyMemberInfo *)
                      (this->PartyInfo).PartyMemberInfos.AllocatorInstance.Data;
            iVar1 = (this->PartyInfo).PartyMemberInfos.ArrayNum;
            pFVar9 = this_00 + iVar1;
            while( true ) {
              if ((this->PartyInfo).PartyMemberInfos.ArrayNum != iVar1) {
                `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_3a8);
              }
              if (this_00 == pFVar9) {
                return;
              }
              if (this_00->PlayerUID == lVar2) break;
              this_00 = this_00 + 1;
            }
            FDS_PartyMemberInfo::UnbindEntity(this_00,(ulong64)pvVar3);
          }
        }
      }
    }
  }
  return;
}

// OnSpawnEntity @ 14b8da240

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

void __thiscall FDS_PartyRepo::OnSpawnEntity(FDS_PartyRepo *this,ulong64 *param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  FDS_PartyMemberInfo *this_00;
  FDS_PartyMemberInfo *pFVar9;
  undefined1 auStackY_3d8 [32];
  undefined1 local_3a8 [8];
  FWeakObjectPtr local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  if (((this->PartyInfo).PartyUID < 1) || ((this->PartyInfo).PartyType == None)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4541407902354636881>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyRepo.cpp"
                       ,0x51,"PartyInfo.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_PartyRepo::OnSpawnEntity",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x53,L"PartyInfo.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar6 = FDS_EntityBase::GetEntityBase(param_1);
    if ((pFVar6 != (FDS_EntityBase *)0x0) && (pFVar6->EntityType == NetCharacter)) {
      UDS_PlayerData::GetData((ulong64)&local_3a0,*param_1,false);
      bVar5 = FWeakObjectPtr::IsValid(&local_3a0);
      if (bVar5) {
        pUVar7 = FWeakObjectPtr::Get(&local_3a0);
        lVar2 = *(longlong *)&pUVar7[6].field_0x8;
        bVar5 = FDS_PartyInfo::IsPartyMemeber(&this->PartyInfo,lVar2);
        if (bVar5) {
          pvVar3 = (void *)*param_1;
          if (lVar2 < 1) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_398._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_398,"FDS_PartyInfo::BindEntity",0x19,Yes);
              UDS_LogManager::PrintLog(pUVar8,1,Warning,local_398.Ptr,0x277,L"InPlayerUID <= 0ll");
              if ((void *)local_398._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_398._padding_);
              }
            }
          }
          else if (pvVar3 == (void *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_278._padding_ = (longlong)pvVar3;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,"FDS_PartyInfo::BindEntity",0x19,Yes);
              UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,0x27d,L"InEntityID == 0ull");
              if ((void *)local_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_278._padding_);
              }
            }
          }
          else {
            this_00 = (FDS_PartyMemberInfo *)
                      (this->PartyInfo).PartyMemberInfos.AllocatorInstance.Data;
            iVar1 = (this->PartyInfo).PartyMemberInfos.ArrayNum;
            pFVar9 = this_00 + iVar1;
            while( true ) {
              if ((this->PartyInfo).PartyMemberInfos.ArrayNum != iVar1) {
                `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_3a8);
              }
              if (this_00 == pFVar9) {
                return;
              }
              if (this_00->PlayerUID == lVar2) break;
              this_00 = this_00 + 1;
            }
            FDS_PartyMemberInfo::BindEntity(this_00,(ulong64)pvVar3);
          }
        }
      }
    }
  }
  return;
}

// SetPartyInfo @ 14b8e92e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_PartyRepo::SetPartyInfo(FDS_PartyRepo *this,PartyInfoResponse *param_1)

{
  UDS_LogManager *pUVar1;
  UDS_EntityManager *pUVar2;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [272];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
               "FDS_PartyRepo::SetPartyInfo",0x1b,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_40,0x2c,L"[Party] FDS_PartyRepo::SetPartyInfo()");
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
  }
  FDS_PartyInfo::Clear(&this->PartyInfo);
  pUVar2 = UDS_EntityManager::GetInst();
  if (pUVar2 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSpawnEntityEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnRemoveEntityEvent,
               this);
  }
  FDS_PartyInfo::SetPartyInfo(&this->PartyInfo,param_1);
  pUVar2 = UDS_EntityManager::GetInst();
  if (pUVar2 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FDS_PartyRepo>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnSpawnEntityEvent,(FDS_PartyRepo *)local_158,(pmf_909f4c1e)this);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FDS_PartyRepo>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnRemoveEntityEvent,(FDS_PartyRepo *)local_158,(pmf_909f4c1e)this);
  }
  return;
}

// SetPartyLeaderUID @ 14b8e9440

void __thiscall FDS_PartyRepo::SetPartyLeaderUID(FDS_PartyRepo *this,ulong64 *param_1)

{
  UDS_PartyEvent *pUVar1;
  
  (this->PartyInfo).PartyLeaderUID = *param_1;
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar1->OnPartyLeaderChanged,*param_1);
    return;
  }
  return;
}

// SetPartyMemberSync @ 14b8e96d0

void __thiscall
FDS_PartyRepo::SetPartyMemberSync(FDS_PartyRepo *this,PartyMemberSyncResponse *param_1)

{
  FDS_PartyMemberInfo *this_00;
  
  this_00 = FDS_PartyInfo::GetPartyMemberInfo(&this->PartyInfo,(param_1->_impl_).player_uid_);
  if (0 < this_00->PlayerUID) {
    FDS_PartyMemberInfo::SetPartyMemberSync(this_00,param_1);
    return;
  }
  return;
}

// SetPartySlotInfo @ 14b8e9e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_PartyRepo::SetPartySlotInfo(FDS_PartyRepo *this,PartySlotInfo *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PartyRepo::SetPartySlotInfo",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x3b,L"[Party] FDS_PartyRepo::SetPartySlotInfo()");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  FDS_PartyInfo::SetPartySlotInfo(&this->PartyInfo,param_1);
  return;
}

