// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickInvite_WrapperImpl @ 14b6ae560

void __cdecl UDS_VM_PartyInvitationSlot::SetClickInvite_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<int_const_,__int64_const_> *this;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FName FVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  UDS_PartyEvent *pUVar13;
  uint uVar14;
  longlong lVar15;
  FName FStack_68;
  int iStack_60;
  FName FStack_58;
  int iStack_50;
  FDestructionSentinel FStack_48;
  
  pUVar13 = UDS_PartyEvent::GetEvent();
  if (pUVar13 != (UDS_PartyEvent *)0x0) {
    this = &pUVar13->OnPartyInvitePlayer;
    uVar3 = *(undefined8 *)((longlong)param_1 + 200);
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xd0);
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
    if (bVar9) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&FStack_48);
      puVar1 = &(pUVar13->OnPartyInvitePlayer).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar9 = false;
      uVar14 = *(int *)&(pUVar13->OnPartyInvitePlayer).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar14) {
        lVar15 = (longlong)(int)uVar14 << 4;
        bVar9 = false;
        do {
          uVar12 = 0;
          if ((int)uVar14 < *(int *)&(pUVar13->OnPartyInvitePlayer).Delegate.field_0x10) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)&(pUVar13->OnPartyInvitePlayer).Delegate.field_0x8;
          if (((*(int *)(lVar15 + 8 + lVar4) == 0) ||
              (plVar5 = *(longlong **)(lVar15 + lVar4), plVar5 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar5 + 0x68))(plVar5,uVar2,uVar3), cVar11 == '\0')) {
            bVar9 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      puVar1 = &(pUVar13->OnPartyInvitePlayer).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
      }
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
  }
  iVar8 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName;
  if (*(char *)((longlong)param_1 + 0xc4) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
    iStack_60 = iVar8;
    FStack_68 = FVar7;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_68);
  }
  iStack_50 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
  FStack_58 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
  if (*(int *)((longlong)param_1 + 0xc0) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_58);
  }
  return;
}

// SetPlayerStateSwitcher_WrapperImpl @ 14b6ae570

void __cdecl
UDS_VM_PartyInvitationSlot::SetPlayerStateSwitcher_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
  if (*(int *)((longlong)param_1 + 0xc0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xc0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetbIsInviteAble_WrapperImpl @ 14b6ae580

void __cdecl UDS_VM_PartyInvitationSlot::SetbIsInviteAble_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName;
  if (*(char *)((longlong)param_1 + 0xc4) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xc4) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6ae590

UClass * __cdecl UDS_VM_PartyInvitationSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyInvitationSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyInvitationSlot",
               &Z_Registration_Info_UClass_UDS_VM_PartyInvitationSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyInvitationSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_PartyInvitationSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyInvitationSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyInvitationSlot.InnerSingleton;
}

// UDS_VM_PartyInvitationSlot @ 14b6b33c0

UDS_VM_PartyInvitationSlot * __thiscall
UDS_VM_PartyInvitationSlot::UDS_VM_PartyInvitationSlot
          (UDS_VM_PartyInvitationSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInvitationSlot__6B_;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  this->bIsInviteAble = false;
  this->PlayerUID = 0;
  this->GameServerIndex = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_PartyInvitationSlot @ 14b6b3430

UDS_VM_PartyInvitationSlot * __thiscall
UDS_VM_PartyInvitationSlot::UDS_VM_PartyInvitationSlot
          (UDS_VM_PartyInvitationSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInvitationSlot__6B_;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  this->bIsInviteAble = false;
  this->PlayerUID = 0;
  this->GameServerIndex = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_PartyInvitationSlot @ 14b6b46d0

void __thiscall
UDS_VM_PartyInvitationSlot::~UDS_VM_PartyInvitationSlot(UDS_VM_PartyInvitationSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInvitationSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInvite).Delegate);
  pvVar1 = *(void **)&(this->ClickInvite).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInvite).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6cc0

IClassDescriptor * __thiscall
UDS_VM_PartyInvitationSlot::GetFieldNotificationDescriptor(UDS_VM_PartyInvitationSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PartyInvitationSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7b20

UClass * __cdecl UDS_VM_PartyInvitationSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyInvitationSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyInvitationSlot",
               &Z_Registration_Info_UClass_UDS_VM_PartyInvitationSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyInvitationSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_PartyInvitationSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyInvitationSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyInvitationSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PartyInvitationSlot @ 14b6b7ec0

void __cdecl UDS_VM_PartyInvitationSlot::StaticRegisterNativesUDS_VM_PartyInvitationSlot(void)

{
  return;
}

// OnClickInvite @ 14bef9990

void __thiscall
UDS_VM_PartyInvitationSlot::OnClickInvite
          (UDS_VM_PartyInvitationSlot *this,FDS_ButtonEventField *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<int_const_,__int64_const_> *this_00;
  int iVar2;
  long64 lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UDS_PartyEvent *pUVar12;
  uint uVar13;
  longlong lVar14;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FDestructionSentinel local_48;
  
  pUVar12 = UDS_PartyEvent::GetEvent();
  if (pUVar12 != (UDS_PartyEvent *)0x0) {
    this_00 = &pUVar12->OnPartyInvitePlayer;
    lVar3 = this->PlayerUID;
    iVar2 = this->GameServerIndex;
    bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      puVar1 = &(pUVar12->OnPartyInvitePlayer).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar8 = false;
      uVar13 = *(int *)&(pUVar12->OnPartyInvitePlayer).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar13) {
        lVar14 = (longlong)(int)uVar13 << 4;
        bVar8 = false;
        do {
          uVar11 = 0;
          if ((int)uVar13 < *(int *)&(pUVar12->OnPartyInvitePlayer).Delegate.field_0x10) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)&(pUVar12->OnPartyInvitePlayer).Delegate.field_0x8;
          if (((*(int *)(lVar14 + 8 + lVar4) == 0) ||
              (plVar5 = *(longlong **)(lVar14 + lVar4), plVar5 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar5 + 0x68))(plVar5,iVar2,lVar3), cVar10 == '\0')) {
            bVar8 = true;
          }
          lVar14 = lVar14 + -0x10;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
      puVar1 = &(pUVar12->OnPartyInvitePlayer).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
  }
  iVar2 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName;
  if (this->bIsInviteAble != false) {
    this->bIsInviteAble = false;
    local_60 = iVar2;
    local_68 = FVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  local_50 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
  if (this->PlayerStateSwitcher != 0) {
    this->PlayerStateSwitcher = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  return;
}

// OnSetViewModel @ 14bf0a280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartyInvitationSlot::OnSetViewModel
          (UDS_VM_PartyInvitationSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_Player,1> local_158;
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
  SafeCast<FDS_ViewModelContext_Player>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_Player *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_PartyInvitationSlot::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x15,L"playerSlotContext is nullptr.")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->PlayerUID = (local_158.Object)->PlayerUID;
    UpdatePlayerInfo(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsInviteAble @ 14bf14e60

void __thiscall
UDS_VM_PartyInvitationSlot::SetIsInviteAble(UDS_VM_PartyInvitationSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName;
  if (this->bIsInviteAble != *param_1) {
    this->bIsInviteAble = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPlayerStateSwitcher @ 14bf188a0

void __thiscall
UDS_VM_PartyInvitationSlot::SetPlayerStateSwitcher(UDS_VM_PartyInvitationSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
  if (this->PlayerStateSwitcher != *param_1) {
    this->PlayerStateSwitcher = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdatePlayerInfo @ 14bf23960

void __thiscall UDS_VM_PartyInvitationSlot::UpdatePlayerInfo(UDS_VM_PartyInvitationSlot *this)

{
  bool bVar1;
  FDS_PlayerRepo *this_00;
  Player *pPVar2;
  FDateTime FVar3;
  FDateTime FVar4;
  FDS_RaidPartyRepo *pFVar5;
  FDS_RaidPartyMemberInfo *pFVar6;
  FDS_PartyRepo *pFVar7;
  longlong lVar8;
  FName local_28;
  int local_20;
  
  this_00 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  pPVar2 = FDS_PlayerRepo::FindCharTableByPlayerUID(this_00,this->PlayerUID);
  if ((pPVar2->_impl_).player_uid_ < 1) {
    return;
  }
  this->GameServerIndex = (pPVar2->_impl_).game_server_index_;
  FVar3 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000008);
  FVar4 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000010);
  local_20 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName;
  if (*(longlong *)FVar4.Ticks < *(longlong *)FVar3.Ticks) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (bVar1) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar6 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(pFVar5,this->PlayerUID);
      local_20 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName;
      if (pFVar6->PlayerUID == this->PlayerUID) {
        if (this->bIsInviteAble != false) {
          this->bIsInviteAble = false;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
        }
        local_20 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
        local_28 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
        if (this->PlayerStateSwitcher == 2) {
          return;
        }
        this->PlayerStateSwitcher = 2;
        lVar8 = this->_padding_;
        goto LAB_14bf23bb3;
      }
    }
    pFVar7 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar1 = FDS_PartyInfo::IsValid(&pFVar7->PartyInfo);
    if ((bVar1) &&
       (bVar1 = FDS_PartyInfo::IsPartyMemeber(&pFVar7->PartyInfo,this->PlayerUID),
       local_20 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber,
       local_28 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName, bVar1)) {
      if (this->bIsInviteAble != false) {
        this->bIsInviteAble = false;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      local_20 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
      if (this->PlayerStateSwitcher == 2) {
        return;
      }
      this->PlayerStateSwitcher = 2;
      lVar8 = this->_padding_;
    }
    else {
      local_20 = FFieldNotificationClassDescriptor::bIsInviteAble.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::bIsInviteAble.FieldName;
      if (this->bIsInviteAble == true) {
        return;
      }
      this->bIsInviteAble = true;
      lVar8 = this->_padding_;
    }
  }
  else {
    if (this->bIsInviteAble != false) {
      this->bIsInviteAble = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
    if (this->PlayerStateSwitcher == 1) {
      return;
    }
    this->PlayerStateSwitcher = 1;
    lVar8 = this->_padding_;
  }
LAB_14bf23bb3:
  (**(code **)(lVar8 + 0x38))(&this->_padding_,&local_28);
  return;
}

