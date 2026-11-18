// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetClickSlot_WrapperImpl @ 14b677120

void __cdecl UDS_VM_HUD_PartyMemberSlot::SetClickSlot_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_PartyMemberInfo *this;
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar3;
  long64 lVar4;
  
  lVar4 = 0;
  if (*(int *)((longlong)param_1 + 0x134) == 1) {
    pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    this = FDS_PartyInfo::GetPartyMemberInfo(&pFVar2->PartyInfo,*(int *)((longlong)param_1 + 0x138))
    ;
    bVar1 = FDS_PartyMemberInfo::IsValid(this);
    if (bVar1) {
      lVar4 = this->PlayerUID;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x134) == 2) {
    this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex
                       (this_00,*(int *)((longlong)param_1 + 0x138));
    lVar4 = 0;
    if (0 < pFVar3->PlayerUID) {
      lVar4 = pFVar3->PlayerUID;
    }
  }
  FDS_PartyService::OpenPartyMenuPopup
            (*(EDS_PartyType *)((longlong)param_1 + 0x134),PartyMemberMenu,lVar4);
  return;
}

// SetClickLeaderChange_WrapperImpl @ 14b677130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_PartyMemberSlot::SetClickLeaderChange_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_PartyRepo *pFVar6;
  long64 lVar7;
  FDS_PartyMemberInfo *this;
  FDS_RaidPartyRepo *pFVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  undefined1 auStackY_188 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(aFStack_148);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
    pwVar11 = L"mainPlayerData.IsValid() == false";
    uVar10 = 0x7b;
LAB_14bef9c7f:
    UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,uVar10,pwVar11);
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(aFStack_148);
  lVar1 = *(longlong *)&pUVar5[6].field_0x8;
  if (*(int *)((longlong)param_1 + 0x134) != 1) {
    if (*(int *)((longlong)param_1 + 0x134) != 2) {
      return;
    }
    pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if (lVar1 == (pFVar8->RaidPartyInfo).LeaderUID) {
      pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar9 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex
                         (pFVar8,*(int *)((longlong)param_1 + 0x138));
      lVar2 = pFVar9->PlayerUID;
      if (lVar2 < 1) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
        pwVar11 = L"raidPartyMemberInfo.PlayerUID <= 0";
        uVar10 = 0xa9;
      }
      else {
        if (lVar1 != lVar2) {
          FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup(lVar2);
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
        pwVar11 = L"mainPlayerUID == raidPartyMemberInfo.PlayerUID";
        uVar10 = 0xaf;
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
      pwVar11 = L"mainPlayerUID != raidPartyLeaderUID";
      uVar10 = 0xa1;
    }
    goto LAB_14bef9c7f;
  }
  pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  lVar7 = FDS_PartyInfo::GetPartyLeaderUID(&pFVar6->PartyInfo);
  if (lVar1 == lVar7) {
    this = FDS_PartyInfo::GetPartyMemberInfo(&pFVar6->PartyInfo,*(int *)((longlong)param_1 + 0x138))
    ;
    bVar3 = FDS_PartyMemberInfo::IsValid(this);
    if (!bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,TStack_138.Ptr,0x8e,
                 L"partyMemberInfo.IsValid() == false (SlotIndex : %d)");
      goto LAB_14bef9e3c;
    }
    if (lVar1 != this->PlayerUID) {
      FDS_PartyService::OpenPartyLeaderChangePopup(this->PlayerUID);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
    pwVar11 = L"mainPlayerUID == partyMemberInfo.PlayerUID";
    uVar10 = 0x94;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
    pwVar11 = L"mainPlayerUID != partyInfo.GetPartyLeaderUID()";
    uVar10 = 0x86;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,uVar10,pwVar11);
LAB_14bef9e3c:
  if ((void *)TStack_138._padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)TStack_138._padding_);
  return;
}

// SetClickExitParty_WrapperImpl @ 14b677140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_HUD_PartyMemberSlot::SetClickExitParty_WrapperImpl(void *param_1,void *param_2)

{
  FDS_PartyInfo *this;
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_PartyRepo *pFVar6;
  FDS_PartyMemberInfo *pFVar7;
  long64 lVar8;
  FDS_RaidPartyRepo *pFVar9;
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar10;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(aFStack_148);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(aFStack_148);
    lVar1 = *(longlong *)&pUVar5[6].field_0x8;
    if (*(int *)((longlong)param_1 + 0x134) == 1) {
      pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      this = &pFVar6->PartyInfo;
      pFVar7 = FDS_PartyInfo::GetPartyMemberInfo(this,*(int *)((longlong)param_1 + 0x138));
      lVar8 = FDS_PartyInfo::GetPartyLeaderUID(this);
      if (lVar1 == pFVar7->PlayerUID) {
        if ((lVar1 == lVar8) && (iVar3 = FDS_PartyInfo::GetPartyMemberCount(this), iVar3 < 2)) {
          FDS_PartyService::OpenPartyDismissPopup();
        }
        else {
          FDS_PartyService::OpenPartyLeavePopup();
        }
      }
      else if (lVar1 == lVar8) {
        FDS_PartyService::OpenPartyKickPopup(pFVar7->PlayerUID);
      }
    }
    else if (*(int *)((longlong)param_1 + 0x134) == 2) {
      pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar10 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex
                          (this_00,*(int *)((longlong)param_1 + 0x138));
      if (lVar1 == pFVar10->PlayerUID) {
        FDS_RaidPartyService::OpenRaidPartyLeavePopup();
      }
      else if (lVar1 == (pFVar9->RaidPartyInfo).LeaderUID) {
        FDS_PartyService::OpenPartyKickPopup(pFVar10->PlayerUID);
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_PartyMemberSlot::OnClickExitParty",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,TStack_138.Ptr,0xbc,L"mainPlayerData.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b677150

UClass * __cdecl UDS_VM_HUD_PartyMemberSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PartyMemberSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PartyMemberSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PartyMemberSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PartyMemberSlot,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_PartyMemberSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PartyMemberSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PartyMemberSlot.InnerSingleton;
}

// UDS_VM_HUD_PartyMemberSlot @ 14b679a90

UDS_VM_HUD_PartyMemberSlot * __thiscall
UDS_VM_HUD_PartyMemberSlot::UDS_VM_HUD_PartyMemberSlot
          (UDS_VM_HUD_PartyMemberSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyMemberSlot__6B_;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->ClickLeaderChange)._padding_ = '\0';
  (this->ClickLeaderChange).bIsCustomSelected = false;
  (this->ClickLeaderChange).bIsLacked = false;
  (this->ClickLeaderChange).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickLeaderChange).Delegate = 0;
  *(undefined8 *)&(this->ClickLeaderChange).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLeaderChange).Delegate.field_0x10 = 0;
  (this->ClickExitParty)._padding_ = '\0';
  (this->ClickExitParty).bIsCustomSelected = false;
  (this->ClickExitParty).bIsLacked = false;
  (this->ClickExitParty).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExitParty).Delegate = 0;
  *(undefined8 *)&(this->ClickExitParty).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExitParty).Delegate.field_0x10 = 0;
  this->SwitcherIndex = 0;
  this->PortraitID = 0;
  FText::FText(&this->Name);
  this->Level = 0;
  this->SlotNumber = 0;
  this->SlotNumberIconID = 0;
  this->Vis_Leader = Collapsed;
  this->Vis_LogOut = Collapsed;
  this->Vis_Dead = Collapsed;
  this->Vis_Alive = Collapsed;
  this->Vis_LeaderChange = Collapsed;
  this->Vis_Exit = Collapsed;
  this->HPPercent = 0.0;
  this->SlotOpacity = 1.0;
  this->SlotIndex = 0;
  return this;
}

// UDS_VM_HUD_PartyMemberSlot @ 14b679b80

UDS_VM_HUD_PartyMemberSlot * __thiscall
UDS_VM_HUD_PartyMemberSlot::UDS_VM_HUD_PartyMemberSlot
          (UDS_VM_HUD_PartyMemberSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyMemberSlot__6B_;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->ClickLeaderChange)._padding_ = '\0';
  (this->ClickLeaderChange).bIsCustomSelected = false;
  (this->ClickLeaderChange).bIsLacked = false;
  (this->ClickLeaderChange).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickLeaderChange).Delegate = 0;
  *(undefined8 *)&(this->ClickLeaderChange).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLeaderChange).Delegate.field_0x10 = 0;
  (this->ClickExitParty)._padding_ = '\0';
  (this->ClickExitParty).bIsCustomSelected = false;
  (this->ClickExitParty).bIsLacked = false;
  (this->ClickExitParty).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExitParty).Delegate = 0;
  *(undefined8 *)&(this->ClickExitParty).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExitParty).Delegate.field_0x10 = 0;
  this->SwitcherIndex = 0;
  this->PortraitID = 0;
  FText::FText(&this->Name);
  this->Level = 0;
  this->SlotNumber = 0;
  this->SlotNumberIconID = 0;
  this->Vis_Leader = Collapsed;
  this->Vis_LogOut = Collapsed;
  this->Vis_Dead = Collapsed;
  this->Vis_Alive = Collapsed;
  this->Vis_LeaderChange = Collapsed;
  this->Vis_Exit = Collapsed;
  this->HPPercent = 0.0;
  this->SlotOpacity = 1.0;
  this->SlotIndex = 0;
  return this;
}

// ~UDS_VM_HUD_PartyMemberSlot @ 14b67b510

void __thiscall
UDS_VM_HUD_PartyMemberSlot::~UDS_VM_HUD_PartyMemberSlot(UDS_VM_HUD_PartyMemberSlot *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyMemberSlot__6B_;
  pIVar1 = (this->Name).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExitParty).Delegate);
  pvVar2 = *(void **)&(this->ClickExitParty).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExitParty).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickLeaderChange).Delegate);
  pvVar2 = *(void **)&(this->ClickLeaderChange).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickLeaderChange).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlot).Delegate);
  pvVar2 = *(void **)&(this->ClickSlot).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlot).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67ddb0

IClassDescriptor * __thiscall
UDS_VM_HUD_PartyMemberSlot::GetFieldNotificationDescriptor(UDS_VM_HUD_PartyMemberSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_PartyMemberSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e770

UClass * __cdecl UDS_VM_HUD_PartyMemberSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PartyMemberSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PartyMemberSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PartyMemberSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PartyMemberSlot,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_PartyMemberSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PartyMemberSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PartyMemberSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_PartyMemberSlot @ 14b67f200

void __cdecl UDS_VM_HUD_PartyMemberSlot::StaticRegisterNativesUDS_VM_HUD_PartyMemberSlot(void)

{
  return;
}

// BindModel @ 14bed7710

void __thiscall UDS_VM_HUD_PartyMemberSlot::BindModel(UDS_VM_HUD_PartyMemberSlot *this)

{
  UDS_PartyEvent *pUVar1;
  UDS_DungeonEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnJoinedParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnJoinedParty,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_4c8986b3 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftParty,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_4c8986b3 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnJoinedPartyMember,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnJoinedPartyMember,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_b5bf3be2 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftPartyMember,this
              );
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftPartyMember,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_b5bf3be2 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyMemberInfoChanged,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyMemberInfoChanged,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_b5bf3be2 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyLeaderChanged,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_b5bf3be2 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyMemberSync,this
              );
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyMemberSync,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_b5bf3be2 *)this);
  }
  pUVar2 = UDS_DungeonEvent::GetEvent();
  if (pUVar2 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedRaidPartyInfo,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_4c8986b3 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedRaidPartyMemberSync,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PartyMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedRaidPartyMemberSync,(UDS_VM_HUD_PartyMemberSlot *)&stack0x00000010,
               (pmf_b5bf3be2 *)this);
  }
  return;
}

// OnClickExitParty @ 14bef95c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnClickExitParty
          (UDS_VM_HUD_PartyMemberSlot *this,FDS_ButtonEventField *param_1)

{
  FDS_PartyInfo *this_00;
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_PartyRepo *pFVar6;
  FDS_PartyMemberInfo *pFVar7;
  long64 lVar8;
  FDS_RaidPartyRepo *pFVar9;
  FDS_RaidPartyRepo *this_01;
  FDS_RaidPartyMemberInfo *pFVar10;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(local_148);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(local_148);
    lVar1 = *(longlong *)&pUVar5[6].field_0x8;
    if (this->PartyType == Party) {
      pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      this_00 = &pFVar6->PartyInfo;
      pFVar7 = FDS_PartyInfo::GetPartyMemberInfo(this_00,this->SlotIndex);
      lVar8 = FDS_PartyInfo::GetPartyLeaderUID(this_00);
      if (lVar1 == pFVar7->PlayerUID) {
        if ((lVar1 == lVar8) && (iVar3 = FDS_PartyInfo::GetPartyMemberCount(this_00), iVar3 < 2)) {
          FDS_PartyService::OpenPartyDismissPopup();
        }
        else {
          FDS_PartyService::OpenPartyLeavePopup();
        }
      }
      else if (lVar1 == lVar8) {
        FDS_PartyService::OpenPartyKickPopup(pFVar7->PlayerUID);
      }
    }
    else if (this->PartyType == RaidParty) {
      pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      this_01 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar10 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_01,this->SlotIndex);
      if (lVar1 == pFVar10->PlayerUID) {
        FDS_RaidPartyService::OpenRaidPartyLeavePopup();
      }
      else if (lVar1 == (pFVar9->RaidPartyInfo).LeaderUID) {
        FDS_PartyService::OpenPartyKickPopup(pFVar10->PlayerUID);
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickExitParty",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xbc,L"mainPlayerData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnClickLeaderChange @ 14bef9bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange
          (UDS_VM_HUD_PartyMemberSlot *this,FDS_ButtonEventField *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_PartyRepo *pFVar6;
  long64 lVar7;
  FDS_PartyMemberInfo *this_00;
  FDS_RaidPartyRepo *pFVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  undefined1 auStackY_188 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(local_148);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
    pwVar11 = L"mainPlayerData.IsValid() == false";
    uVar10 = 0x7b;
LAB_14bef9c7f:
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar10,pwVar11);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(local_148);
  lVar1 = *(longlong *)&pUVar5[6].field_0x8;
  if (this->PartyType != Party) {
    if (this->PartyType != RaidParty) {
      return;
    }
    pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if (lVar1 == (pFVar8->RaidPartyInfo).LeaderUID) {
      pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar9 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar8,this->SlotIndex);
      lVar2 = pFVar9->PlayerUID;
      if (lVar2 < 1) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
        pwVar11 = L"raidPartyMemberInfo.PlayerUID <= 0";
        uVar10 = 0xa9;
      }
      else {
        if (lVar1 != lVar2) {
          FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup(lVar2);
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
        pwVar11 = L"mainPlayerUID == raidPartyMemberInfo.PlayerUID";
        uVar10 = 0xaf;
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
      pwVar11 = L"mainPlayerUID != raidPartyLeaderUID";
      uVar10 = 0xa1;
    }
    goto LAB_14bef9c7f;
  }
  pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  lVar7 = FDS_PartyInfo::GetPartyLeaderUID(&pFVar6->PartyInfo);
  if (lVar1 == lVar7) {
    this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar6->PartyInfo,this->SlotIndex);
    bVar3 = FDS_PartyMemberInfo::IsValid(this_00);
    if (!bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x8e,
                 L"partyMemberInfo.IsValid() == false (SlotIndex : %d)");
      goto LAB_14bef9e3c;
    }
    if (lVar1 != this_00->PlayerUID) {
      FDS_PartyService::OpenPartyLeaderChangePopup(this_00->PlayerUID);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
    pwVar11 = L"mainPlayerUID == partyMemberInfo.PlayerUID";
    uVar10 = 0x94;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnClickLeaderChange",0x2f,Yes);
    pwVar11 = L"mainPlayerUID != partyInfo.GetPartyLeaderUID()";
    uVar10 = 0x86;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar10,pwVar11);
LAB_14bef9e3c:
  if ((void *)local_138._padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)local_138._padding_);
  return;
}

// OnClickSlot @ 14befb240

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnClickSlot
          (UDS_VM_HUD_PartyMemberSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_PartyMemberInfo *this_00;
  FDS_RaidPartyRepo *this_01;
  FDS_RaidPartyMemberInfo *pFVar3;
  long64 lVar4;
  
  lVar4 = 0;
  if (this->PartyType == Party) {
    pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar2->PartyInfo,this->SlotIndex);
    bVar1 = FDS_PartyMemberInfo::IsValid(this_00);
    if (bVar1) {
      lVar4 = this_00->PlayerUID;
    }
  }
  else if (this->PartyType == RaidParty) {
    this_01 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_01,this->SlotIndex);
    lVar4 = 0;
    if (0 < pFVar3->PlayerUID) {
      lVar4 = pFVar3->PlayerUID;
    }
  }
  FDS_PartyService::OpenPartyMenuPopup(this->PartyType,PartyMemberMenu,lVar4);
  return;
}

// OnPartyInfoChanged @ 14bf02690

void __thiscall UDS_VM_HUD_PartyMemberSlot::OnPartyInfoChanged(UDS_VM_HUD_PartyMemberSlot *this)

{
  bool bVar1;
  FDS_RaidPartyRepo *this_00;
  FDS_PartyRepo *pFVar2;
  FDS_PartyMemberInfo *this_01;
  long64 lVar3;
  longlong lVar4;
  ESlateVisibility EVar5;
  FName local_18;
  int local_10;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
  if (!bVar1) {
    pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    this_01 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar2->PartyInfo,this->SlotIndex);
    bVar1 = FDS_PartyMemberInfo::IsValid(this_01);
    local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
    if (bVar1) {
      lVar3 = FDS_PartyInfo::GetPartyLeaderUID(&pFVar2->PartyInfo);
      EVar5 = Collapsed;
      if (this_01->PlayerUID == lVar3) {
        EVar5 = HitTestInvisible;
      }
      this->Vis_Leader = EVar5;
      local_10 = FFieldNotificationClassDescriptor::Vis_Leader.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::Vis_Leader.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
      if (this->SwitcherIndex == 1) {
        return;
      }
      this->SwitcherIndex = 1;
      lVar4 = this->_padding_;
    }
    else {
      if (this->SwitcherIndex == 0) {
        return;
      }
      this->SwitcherIndex = 0;
      lVar4 = this->_padding_;
    }
    (**(code **)(lVar4 + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnPartyLeaderChange @ 14bf02a90

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnPartyLeaderChange(UDS_VM_HUD_PartyMemberSlot *this,long64 param_1)

{
  bool bVar1;
  ESlateVisibility EVar2;
  FDS_PartyRepo *pFVar3;
  FDS_PartyMemberInfo *this_00;
  FName local_18;
  int local_10;
  
  pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar3->PartyInfo,this->SlotIndex);
  bVar1 = FDS_PartyMemberInfo::IsValid(this_00);
  local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (bVar1) {
    EVar2 = Collapsed;
    if (param_1 == this_00->PlayerUID) {
      EVar2 = HitTestInvisible;
    }
    this->Vis_Leader = EVar2;
    local_10 = FFieldNotificationClassDescriptor::Vis_Leader.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Vis_Leader.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    UpdatePartyButtons(this);
  }
  else if (this->SwitcherIndex != 0) {
    this->SwitcherIndex = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    return;
  }
  return;
}

// OnPartyMemberChanged @ 14bf02c60

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnPartyMemberChanged(UDS_VM_HUD_PartyMemberSlot *this,long64 param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  FDS_PartyRepo *pFVar5;
  FDS_PartyMemberInfo *this_00;
  FDS_CharacterBaseTableRow *this_01;
  FDS_CharacterSkinTableRow *pFVar6;
  FText *pFVar7;
  int iVar8;
  FFieldId FStack_38;
  FText FStack_28;
  
  pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar5->PartyInfo,this->SlotIndex);
  bVar3 = FDS_PartyMemberInfo::IsValid(this_00);
  iVar2 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (bVar3) {
    if (this->SwitcherIndex != 1) {
      this->SwitcherIndex = 1;
      FStack_38.BitNumber = iVar2;
      FStack_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    }
    this_01 = FDS_CharacterBaseTableRow::GetRef((longlong)this_00->CharID,true);
    iVar2 = FFieldNotificationClassDescriptor::PortraitID.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::PortraitID.FieldName;
    pFVar6 = FDS_CharacterBaseTableRow::ID_DefaultSkinTable(this_01);
    if (this->PortraitID != pFVar6->ID_Portrait) {
      this->PortraitID = pFVar6->ID_Portrait;
      FStack_38.FieldName = FVar1;
      FStack_38.BitNumber = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    }
    if (this_00->Online == true) {
      this->Vis_LogOut = Collapsed;
    }
    else {
      this->Vis_LogOut = HitTestInvisible;
      this->HPPercent = 0.0;
      FStack_38.BitNumber = FFieldNotificationClassDescriptor::HPPercent.BitNumber;
      FStack_38.FieldName = FFieldNotificationClassDescriptor::HPPercent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    }
    FStack_38.BitNumber = FFieldNotificationClassDescriptor::Vis_LogOut.BitNumber;
    FStack_38.FieldName = FFieldNotificationClassDescriptor::Vis_LogOut.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    EVar4 = Collapsed;
    if (this_00->Dead == true) {
      EVar4 = HitTestInvisible;
    }
    this->Vis_Dead = EVar4;
    FStack_38.BitNumber = FFieldNotificationClassDescriptor::Vis_Dead.BitNumber;
    FStack_38.FieldName = FFieldNotificationClassDescriptor::Vis_Dead.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    EVar4 = Collapsed;
    if (this_00->Dead == false) {
      EVar4 = HitTestInvisible;
    }
    this->Vis_Alive = EVar4;
    FStack_38.BitNumber = FFieldNotificationClassDescriptor::Vis_Alive.BitNumber;
    FStack_38.FieldName = FFieldNotificationClassDescriptor::Vis_Alive.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    iVar2 = FFieldNotificationClassDescriptor::Name.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Name.FieldName;
    pFVar7 = FText::FromString(&FStack_28,&this_00->Nickname);
    FStack_38.FieldName = FVar1;
    FStack_38.BitNumber = iVar2;
    UMVVMViewModelBase::SetPropertyValue((UMVVMViewModelBase *)this,&this->Name,pFVar7,&FStack_38);
    if (FStack_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
    }
    iVar2 = FFieldNotificationClassDescriptor::Level.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Level.FieldName;
    if (this->Level != this_00->Level) {
      this->Level = this_00->Level;
      FStack_38.BitNumber = iVar2;
      FStack_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    }
    iVar2 = FFieldNotificationClassDescriptor::SlotNumber.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::SlotNumber.FieldName;
    iVar8 = this_00->SlotIndex + 1;
    if (this->PartyType != Party) {
      iVar8 = this_00->SlotIndex;
    }
    if (this->SlotNumber != iVar8) {
      this->SlotNumber = iVar8;
      FStack_38.BitNumber = iVar2;
      FStack_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    }
    iVar2 = FFieldNotificationClassDescriptor::SlotNumberIconID.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::SlotNumberIconID.FieldName;
    if (this->SlotNumberIconID != iVar8 + 0x13881) {
      this->SlotNumberIconID = iVar8 + 0x13881;
      FStack_38.BitNumber = iVar2;
      FStack_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    }
    UpdateSlotOpacity(this,this_00->PlayerUID,this_00->Online == false);
    UpdatePartyButtons(this);
  }
  else if (this->SwitcherIndex != 0) {
    this->SwitcherIndex = 0;
    FStack_38.BitNumber = iVar2;
    FStack_38.FieldName = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    return;
  }
  return;
}

// OnPartyMemberSync @ 14bf02ca0

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnPartyMemberSync(UDS_VM_HUD_PartyMemberSlot *this,long64 param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  FDS_PartyRepo *pFVar4;
  FDS_PartyMemberInfo *this_00;
  float fVar5;
  FDS_PartyMemberStat local_28;
  FName local_18;
  int local_10;
  
  pFVar4 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar4->PartyInfo,this->SlotIndex);
  bVar3 = FDS_PartyMemberInfo::IsValid(this_00);
  if ((bVar3) && (this_00->PlayerUID == param_1)) {
    local_28.StatusType = None;
    local_28.Value = 0.0;
    local_28.MaxValue = 0.0;
    bVar3 = FDS_PartyMemberInfo::GetStat(this_00,Hp,&local_28);
    if (bVar3) {
      fVar5 = FDS_PartyMemberStat::GetStatRatio(&local_28);
      iVar2 = FFieldNotificationClassDescriptor::HPPercent.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::HPPercent.FieldName;
      if (fVar5 != this->HPPercent) {
        this->HPPercent = fVar5;
        local_10 = iVar2;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
    UpdateSlotOpacity(this,param_1,this_00->Online == false);
  }
  return;
}

// OnRaidPartyMemberInfoChanged @ 14bf031c0

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnRaidPartyMemberInfoChanged(UDS_VM_HUD_PartyMemberSlot *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  int iVar5;
  FDS_RaidPartyRepo *pFVar6;
  FDS_RaidPartyMemberInfo *this_00;
  FText *pFVar7;
  FDS_CharacterBaseTableRow *this_01;
  FDS_CharacterSkinTableRow *pFVar8;
  ESlateVisibility EVar9;
  FText local_28;
  
  pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar6);
  if (bVar3) {
    pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    this_00 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar6,this->SlotIndex);
    iVar2 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
    if (0 < this_00->PlayerUID) {
      if (this->SwitcherIndex != 1) {
        this->SwitcherIndex = 1;
        local_28.Flags = iVar2;
        local_28.TextData.Reference = (ITextData *)FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      pFVar7 = FText::FromString(&local_28,&this_00->NickName);
      FText::operator=(&this->Name,pFVar7);
      if ((FName)local_28.TextData.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.TextData.Reference + 0x10))();
      }
      local_28.Flags = FFieldNotificationClassDescriptor::Name.BitNumber;
      local_28.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Name.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      bVar3 = FDS_RaidPartyMemberInfo::IsValidCharInfo(this_00);
      if (bVar3) {
        this_01 = FDS_CharacterBaseTableRow::GetRef((longlong)(this_00->CharInfo).CharId,true);
        pFVar8 = FDS_CharacterBaseTableRow::ID_DefaultSkinTable(this_01);
        this->PortraitID = pFVar8->ID_Portrait;
        local_28.Flags = FFieldNotificationClassDescriptor::PortraitID.BitNumber;
        local_28.TextData.Reference =
             (ITextData *)FFieldNotificationClassDescriptor::PortraitID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
        this->Level = (this_00->CharInfo).CharLevel;
        local_28.Flags = FFieldNotificationClassDescriptor::Level.BitNumber;
        local_28.TextData.Reference =
             (ITextData *)FFieldNotificationClassDescriptor::Level.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      this->SlotNumber = this_00->SlotIndex;
      local_28.Flags = FFieldNotificationClassDescriptor::SlotNumber.BitNumber;
      local_28.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::SlotNumber.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      iVar2 = FFieldNotificationClassDescriptor::SlotNumberIconID.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::SlotNumberIconID.FieldName;
      iVar5 = this->SlotNumber + 0x13881;
      if (this->SlotNumberIconID != iVar5) {
        this->SlotNumberIconID = iVar5;
        local_28.Flags = iVar2;
        local_28.TextData.Reference = (ITextData *)FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      EVar9 = Collapsed;
      EVar4 = Collapsed;
      if ((pFVar6->RaidPartyInfo).LeaderUID == this_00->PlayerUID) {
        EVar4 = HitTestInvisible;
      }
      this->Vis_Leader = EVar4;
      local_28.Flags = FFieldNotificationClassDescriptor::Vis_Leader.BitNumber;
      local_28.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::Vis_Leader.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      if (this_00->MemberState == OffLine) {
        EVar9 = HitTestInvisible;
      }
      this->Vis_LogOut = EVar9;
      local_28.Flags = FFieldNotificationClassDescriptor::Vis_LogOut.BitNumber;
      local_28.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::Vis_LogOut.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      UpdateSlotOpacity(this,this_00->PlayerUID,this_00->MemberState == OffLine);
      UpdateRaidPartyButtons(this);
      return;
    }
  }
  Reset(this);
  return;
}

// OnRaidPartyMemberSyncChanged @ 14bf03450

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnRaidPartyMemberSyncChanged
          (UDS_VM_HUD_PartyMemberSlot *this,long64 param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  FDS_RaidPartyMemberInfo *pFVar5;
  ESlateVisibility EVar6;
  float fVar7;
  FName local_38;
  int local_30;
  
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar5 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar4,this->SlotIndex);
    if (0 < pFVar5->PlayerUID) {
      bVar3 = (pFVar5->RaidPartyMemberSyncData).IsDead;
      fVar7 = FDS_RaidPartyMemberSyncData::GetStatusRatio(&pFVar5->RaidPartyMemberSyncData,Hp);
      EVar6 = Collapsed;
      if (bVar3 == true) {
        EVar6 = HitTestInvisible;
      }
      this->Vis_Dead = EVar6;
      local_30 = FFieldNotificationClassDescriptor::Vis_Dead.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::Vis_Dead.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      EVar6 = Collapsed;
      if (bVar3 == false) {
        EVar6 = HitTestInvisible;
      }
      this->Vis_Alive = EVar6;
      local_30 = FFieldNotificationClassDescriptor::Vis_Alive.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::Vis_Alive.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      iVar2 = FFieldNotificationClassDescriptor::HPPercent.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::HPPercent.FieldName;
      if (fVar7 != this->HPPercent) {
        this->HPPercent = fVar7;
        local_30 = iVar2;
        local_38 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      }
      UpdateSlotOpacity(this,pFVar5->PlayerUID,pFVar5->MemberState == OffLine);
    }
  }
  return;
}

// OnSetViewModel @ 14bf04d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_PartyMemberSlot::OnSetViewModel
          (UDS_VM_HUD_PartyMemberSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PartyMember>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)local_158.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_PartyMemberSlot::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x1d,L"partyMemberContext.IsValid() == false");
      if ((FDS_ViewModelContext_PartyMember *)local_138._padding_ !=
          (FDS_ViewModelContext_PartyMember *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->PartyType = (local_158.Object)->PartyType;
    this->SlotIndex = (local_158.Object)->SlotIndex;
    Reset(this);
    if (this->PartyType == Party) {
      OnPartyInfoChanged(this);
      UpdatePartySlot(this);
    }
    else if (this->PartyType == RaidParty) {
      OnRaidPartyMemberInfoChanged(this);
      OnRaidPartyMemberSyncChanged(this,0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14bf127b0

void __thiscall UDS_VM_HUD_PartyMemberSlot::Reset(UDS_VM_HUD_PartyMemberSlot *this)

{
  FText *pFVar1;
  longlong *plVar2;
  FText local_18;
  
  this->SwitcherIndex = 0;
  this->PortraitID = 0;
  pFVar1 = FText::FromString(&local_18,"");
  FText::operator=(&this->Name,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  this->Level = 0;
  this->SlotNumber = 0;
  this->Vis_Leader = Collapsed;
  this->Vis_LogOut = Collapsed;
  this->Vis_Dead = Collapsed;
  this->Vis_Alive = Collapsed;
  this->Vis_LeaderChange = Collapsed;
  this->Vis_Exit = Collapsed;
  this->HPPercent = 0.0;
  this->SlotOpacity = 1.0;
  plVar2 = &this->_padding_;
  local_18.Flags = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18.TextData.Reference =
       (ITextData *)FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::PortraitID.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::PortraitID.FieldName
  ;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::Name.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Name.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::Level.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Level.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::SlotNumber.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::SlotNumber.FieldName
  ;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::Vis_Leader.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Vis_Leader.FieldName
  ;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::Vis_LogOut.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Vis_LogOut.FieldName
  ;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::Vis_Dead.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Vis_Dead.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::Vis_Alive.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Vis_Alive.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.TextData.Reference =
       (ITextData *)FFieldNotificationClassDescriptor::Vis_LeaderChange.FieldName;
  local_18.Flags = FFieldNotificationClassDescriptor::Vis_LeaderChange.BitNumber;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::Vis_Exit.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Vis_Exit.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::HPPercent.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::HPPercent.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_18.Flags = FFieldNotificationClassDescriptor::SlotOpacity.BitNumber;
  local_18.TextData.Reference =
       (ITextData *)FFieldNotificationClassDescriptor::SlotOpacity.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  return;
}

// UnbindModel @ 14bf1de60

void __thiscall UDS_VM_HUD_PartyMemberSlot::UnbindModel(UDS_VM_HUD_PartyMemberSlot *this)

{
  UDS_PartyEvent *pUVar1;
  UDS_DungeonEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnJoinedPartyMember,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftPartyMember,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyMemberInfoChanged,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyMemberSync,this
              );
  }
  pUVar2 = UDS_DungeonEvent::GetEvent();
  if (pUVar2 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedRaidPartyMemberSync,this);
  }
  return;
}

// UpdatePartyButtons @ 14bf21a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PartyMemberSlot::UpdatePartyButtons(UDS_VM_HUD_PartyMemberSlot *this)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_PartyRepo *pFVar6;
  FDS_PartyMemberInfo *pFVar7;
  long64 lVar8;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(local_148);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_PartyMemberSlot::UpdatePartyButtons",0x2e,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_138.Ptr,300,L"mainPlayerData.IsValid() == false");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(local_148);
  lVar1 = *(longlong *)&pUVar5[6].field_0x8;
  pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  pFVar7 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar6->PartyInfo,this->SlotIndex);
  lVar8 = FDS_PartyInfo::GetPartyLeaderUID(&pFVar6->PartyInfo);
  local_150 = FFieldNotificationClassDescriptor::Vis_LeaderChange.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::Vis_LeaderChange.FieldName;
  lVar2 = pFVar7->PlayerUID;
  if ((lVar1 == lVar8) && (lVar1 != lVar2)) {
    if (this->Vis_LeaderChange != SelfHitTestInvisible) {
      this->Vis_LeaderChange = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
  }
  else {
    if (this->Vis_LeaderChange != Collapsed) {
      this->Vis_LeaderChange = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    local_150 = FFieldNotificationClassDescriptor::Vis_Exit.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::Vis_Exit.FieldName;
    if ((lVar1 != lVar8) && (lVar1 != lVar2)) {
      if (this->Vis_Exit == Collapsed) {
        return;
      }
      this->Vis_Exit = Collapsed;
      goto LAB_14bf21b77;
    }
  }
  local_150 = FFieldNotificationClassDescriptor::Vis_Exit.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::Vis_Exit.FieldName;
  if (this->Vis_Exit == SelfHitTestInvisible) {
    return;
  }
  this->Vis_Exit = SelfHitTestInvisible;
LAB_14bf21b77:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  return;
}

// UpdatePartySlot @ 14bf23640

void __thiscall UDS_VM_HUD_PartyMemberSlot::UpdatePartySlot(UDS_VM_HUD_PartyMemberSlot *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  FDS_PartyRepo *pFVar5;
  FDS_PartyMemberInfo *this_00;
  FDS_CharacterBaseTableRow *this_01;
  FDS_CharacterSkinTableRow *pFVar6;
  FText *pFVar7;
  int iVar8;
  FFieldId local_38;
  FText local_28;
  
  pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar5->PartyInfo,this->SlotIndex);
  bVar3 = FDS_PartyMemberInfo::IsValid(this_00);
  iVar2 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (bVar3) {
    if (this->SwitcherIndex != 1) {
      this->SwitcherIndex = 1;
      local_38.BitNumber = iVar2;
      local_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    this_01 = FDS_CharacterBaseTableRow::GetRef((longlong)this_00->CharID,true);
    iVar2 = FFieldNotificationClassDescriptor::PortraitID.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::PortraitID.FieldName;
    pFVar6 = FDS_CharacterBaseTableRow::ID_DefaultSkinTable(this_01);
    if (this->PortraitID != pFVar6->ID_Portrait) {
      this->PortraitID = pFVar6->ID_Portrait;
      local_38.FieldName = FVar1;
      local_38.BitNumber = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    if (this_00->Online == true) {
      this->Vis_LogOut = Collapsed;
    }
    else {
      this->Vis_LogOut = HitTestInvisible;
      this->HPPercent = 0.0;
      local_38.BitNumber = FFieldNotificationClassDescriptor::HPPercent.BitNumber;
      local_38.FieldName = FFieldNotificationClassDescriptor::HPPercent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    local_38.BitNumber = FFieldNotificationClassDescriptor::Vis_LogOut.BitNumber;
    local_38.FieldName = FFieldNotificationClassDescriptor::Vis_LogOut.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    EVar4 = Collapsed;
    if (this_00->Dead == true) {
      EVar4 = HitTestInvisible;
    }
    this->Vis_Dead = EVar4;
    local_38.BitNumber = FFieldNotificationClassDescriptor::Vis_Dead.BitNumber;
    local_38.FieldName = FFieldNotificationClassDescriptor::Vis_Dead.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    EVar4 = Collapsed;
    if (this_00->Dead == false) {
      EVar4 = HitTestInvisible;
    }
    this->Vis_Alive = EVar4;
    local_38.BitNumber = FFieldNotificationClassDescriptor::Vis_Alive.BitNumber;
    local_38.FieldName = FFieldNotificationClassDescriptor::Vis_Alive.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    iVar2 = FFieldNotificationClassDescriptor::Name.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Name.FieldName;
    pFVar7 = FText::FromString(&local_28,&this_00->Nickname);
    local_38.FieldName = FVar1;
    local_38.BitNumber = iVar2;
    UMVVMViewModelBase::SetPropertyValue((UMVVMViewModelBase *)this,&this->Name,pFVar7,&local_38);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    iVar2 = FFieldNotificationClassDescriptor::Level.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Level.FieldName;
    if (this->Level != this_00->Level) {
      this->Level = this_00->Level;
      local_38.BitNumber = iVar2;
      local_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    iVar2 = FFieldNotificationClassDescriptor::SlotNumber.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::SlotNumber.FieldName;
    iVar8 = this_00->SlotIndex + 1;
    if (this->PartyType != Party) {
      iVar8 = this_00->SlotIndex;
    }
    if (this->SlotNumber != iVar8) {
      this->SlotNumber = iVar8;
      local_38.BitNumber = iVar2;
      local_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    iVar2 = FFieldNotificationClassDescriptor::SlotNumberIconID.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::SlotNumberIconID.FieldName;
    if (this->SlotNumberIconID != iVar8 + 0x13881) {
      this->SlotNumberIconID = iVar8 + 0x13881;
      local_38.BitNumber = iVar2;
      local_38.FieldName = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    UpdateSlotOpacity(this,this_00->PlayerUID,this_00->Online == false);
    UpdatePartyButtons(this);
  }
  else if (this->SwitcherIndex != 0) {
    this->SwitcherIndex = 0;
    local_38.BitNumber = iVar2;
    local_38.FieldName = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    return;
  }
  return;
}

// UpdateRaidPartyButtons @ 14bf23ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PartyMemberSlot::UpdateRaidPartyButtons(UDS_VM_HUD_PartyMemberSlot *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_RaidPartyRepo *pFVar7;
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar8;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = FWeakObjectPtr::IsValid(local_148);
  if (!bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_PartyMemberSlot::UpdateRaidPartyButtons",0x32,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_138.Ptr,0x151,L"mainPlayerData.IsValid() == false");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(local_148);
  lVar1 = *(longlong *)&pUVar6[6].field_0x8;
  pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar8 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->SlotIndex);
  local_150 = FFieldNotificationClassDescriptor::Vis_LeaderChange.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::Vis_LeaderChange.FieldName;
  lVar2 = (pFVar7->RaidPartyInfo).LeaderUID;
  lVar3 = pFVar8->PlayerUID;
  if ((lVar1 == lVar2) && (lVar1 != lVar3)) {
    if (this->Vis_LeaderChange != SelfHitTestInvisible) {
      this->Vis_LeaderChange = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
  }
  else {
    if (this->Vis_LeaderChange != Collapsed) {
      this->Vis_LeaderChange = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    local_150 = FFieldNotificationClassDescriptor::Vis_Exit.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::Vis_Exit.FieldName;
    if ((lVar1 != lVar2) && (lVar1 != lVar3)) {
      if (this->Vis_Exit == Collapsed) {
        return;
      }
      this->Vis_Exit = Collapsed;
      goto LAB_14bf24162;
    }
  }
  local_150 = FFieldNotificationClassDescriptor::Vis_Exit.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::Vis_Exit.FieldName;
  if (this->Vis_Exit == SelfHitTestInvisible) {
    return;
  }
  this->Vis_Exit = SelfHitTestInvisible;
LAB_14bf24162:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  return;
}

// UpdateSlotOpacity @ 14bf25cb0

void __thiscall
UDS_VM_HUD_PartyMemberSlot::UpdateSlotOpacity
          (UDS_VM_HUD_PartyMemberSlot *this,long64 param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  float local_res18 [2];
  ulong64 local_res20;
  ulong64 local_28 [2];
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SlotOpacity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotOpacity.FieldName;
  if ((param_2) || (param_1 < 1)) {
    if (__real_3f800000 == this->SlotOpacity) {
      return;
    }
    this->SlotOpacity = 1.0;
  }
  else {
    local_28[0] = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    local_res20 = UDS_PlayerData::GetCurrentCharEntityIDByPlayerUID(param_1);
    iVar2 = DS_CommonDataHelper::PartyEffectiveRange();
    local_res18[0] = (float)iVar2;
    bVar1 = DS_Util::IsCloseDist2D(local_28,&local_res20,local_res18);
    local_10 = FFieldNotificationClassDescriptor::SlotOpacity.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::SlotOpacity.FieldName;
    if (bVar1) {
      if (__real_3f800000 == this->SlotOpacity) {
        return;
      }
      this->SlotOpacity = 1.0;
    }
    else {
      if (__real_3f000000 == this->SlotOpacity) {
        return;
      }
      this->SlotOpacity = 0.5;
    }
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

