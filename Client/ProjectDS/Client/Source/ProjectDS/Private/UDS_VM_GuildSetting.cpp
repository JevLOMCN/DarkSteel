// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 77

// SetCheckBoxJoinAuto_WrapperImpl @ 14b65a1f0

void __cdecl UDS_VM_GuildSetting::SetCheckBoxJoinAuto_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x690) = *(undefined1 *)((longlong)param_1 + 0x690);
    iStack_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x811) = 1;
  *(undefined1 *)((longlong)param_1 + 0x690) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x691) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x692) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  SetDisableSettingApplyButton(param_1);
  return;
}

// SetCheckBoxJoinApply_WrapperImpl @ 14b65a200

void __cdecl UDS_VM_GuildSetting::SetCheckBoxJoinApply_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x691) = *(undefined1 *)((longlong)param_1 + 0x691);
    iStack_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(char *)((longlong)param_1 + 0x691) = *(char *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x811) = 2;
  *(undefined1 *)((longlong)param_1 + 0x690) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x691) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x692) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  SetDisableSettingApplyButton(param_1);
  return;
}

// SetCheckBoxJoinPrivate_WrapperImpl @ 14b65a210

void __cdecl UDS_VM_GuildSetting::SetCheckBoxJoinPrivate_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x692) = *(undefined1 *)((longlong)param_1 + 0x692);
    iStack_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(char *)((longlong)param_1 + 0x692) = *(char *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x811) = 3;
  *(undefined1 *)((longlong)param_1 + 0x690) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x691) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x692) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  SetDisableSettingApplyButton(param_1);
  return;
}

// SetCheckBoxAutoKickNone_WrapperImpl @ 14b65a220

void __cdecl UDS_VM_GuildSetting::SetCheckBoxAutoKickNone_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x693) = *(undefined1 *)((longlong)param_1 + 0x693);
    iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x812) = 0;
  *(undefined1 *)((longlong)param_1 + 0x693) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x694) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x695) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  SetDisableSettingApplyButton(param_1);
  return;
}

// SetCheckBoxAutoKickOneWeek_WrapperImpl @ 14b65a230

void __cdecl
UDS_VM_GuildSetting::SetCheckBoxAutoKickOneWeek_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x694) = *(undefined1 *)((longlong)param_1 + 0x694);
    iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(char *)((longlong)param_1 + 0x694) = *(char *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x812) = 1;
  *(undefined1 *)((longlong)param_1 + 0x693) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x694) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x695) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  SetDisableSettingApplyButton(param_1);
  return;
}

// SetCheckBoxAutoKickOneMonth_WrapperImpl @ 14b65a240

void __cdecl
UDS_VM_GuildSetting::SetCheckBoxAutoKickOneMonth_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x695) = *(undefined1 *)((longlong)param_1 + 0x695);
    iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(char *)((longlong)param_1 + 0x695) = *(char *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x812) = 2;
  *(undefined1 *)((longlong)param_1 + 0x693) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x694) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0x695) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  SetDisableSettingApplyButton(param_1);
  return;
}

// SetClickGuildMarkChangeApplyButton_WrapperImpl @ 14b65a250

void __cdecl
UDS_VM_GuildSetting::SetClickGuildMarkChangeApplyButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    OpenGuildMarkChangePopup(param_1);
    return;
  }
  bVar1 = UDS_GuildManager::IsGuildSettingPermission();
  if (!bVar1) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a9a0,Complete_System_01,&TStack_28);
    return;
  }
  return;
}

// SetClickGuildNameChangeButton_WrapperImpl @ 14b65a260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_GuildSetting::SetClickGuildNameChangeButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_WindowManager *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 auStack_48 [8];
  FDelegateAllocation FStack_40;
  FDestructionSentinel FStack_30;
  FDelegateAllocation *pFStack_18;
  
  if (*(char *)((longlong)param_2 + 3) == '\x01') {
    bVar1 = UDS_GuildManager::IsGuildSettingPermission();
    if (!bVar1) {
      auStack_48 = (undefined1  [8])0x0;
      FStack_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_40.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3a9a0,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)auStack_48);
      return;
    }
  }
  else {
    this = UDS_WindowManager::GetInst();
    if (this != (UDS_WindowManager *)0x0) {
      auStack_48 = (undefined1  [8])0x0;
      FStack_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_40.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_48,
                 (FWriteAccessScope *)&FStack_30);
      pFStack_18 = &FStack_40;
      puVar2 = UE::Core::Private::DelegateAllocate(0x20,&FStack_40);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar2[3] = UDS_VM_GuildNameChangePopup::OnOpenPopup;
      }
      if (FStack_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_30.Accessor,&FStack_30);
      }
      UDS_WindowManager::OpenWindow
                (this,GuildPopupNameChange,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)auStack_48)
      ;
    }
  }
  return;
}

// SetClickGuildSettingApplyButton_WrapperImpl @ 14b65a270

void __cdecl
UDS_VM_GuildSetting::SetClickGuildSettingApplyButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr FStackX_10;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_78;
  FDS_Text FStack_60;
  
  if (*(char *)((longlong)param_2 + 3) == '\x01') {
    bVar1 = UDS_GuildManager::IsGuildSettingPermission();
    if (!bVar1) {
      pcStack_98 = (code *)0x0;
      uStack_90 = 0;
      uStack_88 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3a9a0,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&pcStack_98);
      return;
    }
  }
  else {
    this = UDS_CommonPopupManager::GetInst();
    if (this != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this);
      bVar1 = FWeakObjectPtr::IsValid(&FStackX_10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9dd);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9de);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        uStack_90._0_4_ = 0;
        pcStack_98 = OpenGuildSettingApplyPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>
                           (&TStack_78,param_1,(pmf_cc6a553e *)&pcStack_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
        pcStack_98 = OpenGuildSettingApplyPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>
                           (&TStack_78,param_1,(pmf_cc6a553e *)&pcStack_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// SetClickGuildLeaveButton_WrapperImpl @ 14b65a280

void __cdecl UDS_VM_GuildSetting::SetClickGuildLeaveButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr aFStackX_18 [2];
  code *pcStack_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_78;
  FDS_Text FStack_60;
  
  this = UDS_CommonPopupManager::GetInst();
  if (this != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = FWeakObjectPtr::IsValid(aFStackX_18);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9df);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9e0);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      uStack_80._0_4_ = 0;
      pcStack_88 = OnGuildLeavePopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&TStack_78,param_1,(pmf_cc6a553e *)&pcStack_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      pcStack_88 = OnGuildLeavePopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&TStack_78,param_1,(pmf_cc6a553e *)&pcStack_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// SetClickGuildDisbandButton_WrapperImpl @ 14b65a290

void __cdecl
UDS_VM_GuildSetting::SetClickGuildDisbandButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr FStackX_10;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_78;
  FDS_Text FStack_60;
  
  if (*(char *)((longlong)param_2 + 3) == '\x01') {
    bVar1 = UDS_GuildManager::IsGuildSettingPermission();
    if (!bVar1) {
      pcStack_98 = (code *)0x0;
      uStack_90 = 0;
      uStack_88 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3a9a0,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&pcStack_98);
      return;
    }
  }
  else {
    this = UDS_CommonPopupManager::GetInst();
    if (this != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this);
      bVar1 = FWeakObjectPtr::IsValid(&FStackX_10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9e1);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9e2);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        uStack_90._0_4_ = 0;
        pcStack_98 = OnGuildDisbandPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>
                           (&TStack_78,param_1,(pmf_cc6a553e *)&pcStack_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
        pcStack_98 = OnGuildDisbandPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>
                           (&TStack_78,param_1,(pmf_cc6a553e *)&pcStack_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// SetTextCommittedEvent_GuildIntroduction_WrapperImpl @ 14b65a2a0

void __cdecl
UDS_VM_GuildSetting::SetTextCommittedEvent_GuildIntroduction_WrapperImpl
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x6b0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x6b0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x6b8) = *(undefined4 *)((longlong)param_2 + 8);
    SetDisableSettingApplyButton(param_1);
  }
  return;
}

// SetTextCommittedEvent_GuildNotice_WrapperImpl @ 14b65a2b0

void __cdecl
UDS_VM_GuildSetting::SetTextCommittedEvent_GuildNotice_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x6c0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x6c0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x6c8) = *(undefined4 *)((longlong)param_2 + 8);
    SetDisableSettingApplyButton(param_1);
  }
  return;
}

// SetTextCommittedEvent_GuildJoinLimitLevel_WrapperImpl @ 14b65a2c0

void __cdecl
UDS_VM_GuildSetting::SetTextCommittedEvent_GuildJoinLimitLevel_WrapperImpl
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x6d0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x6d0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x6d8) = *(undefined4 *)((longlong)param_2 + 8);
    SetDisableSettingApplyButton(param_1);
  }
  return;
}

// StaticClass @ 14b65a2d0

UClass * __cdecl UDS_VM_GuildSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSetting",
               &Z_Registration_Info_UClass_UDS_VM_GuildSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSetting,0x818,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSetting.InnerSingleton;
}

// UDS_VM_GuildSetting @ 14b660970

UDS_VM_GuildSetting * __thiscall
UDS_VM_GuildSetting::UDS_VM_GuildSetting(UDS_VM_GuildSetting *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSetting__6B_;
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroduction).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroduction).IsExpression = false;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroductionHint).StringTableID = 0x3a9c8;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroductionHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroductionHint).IsExpression = false;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).StringTableType = StringUi;
  (this->FixedTxt_GuildNotice).StringTableID = 0x3aa05;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNotice).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeExpressionType = None;
  (this->FixedTxt_GuildNotice).IsExpression = false;
  (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).StringTableType = StringUi;
  (this->FixedTxt_GuildNoticeHint).StringTableID = 0x3aa06;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNoticeHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeExpressionType = None;
  (this->FixedTxt_GuildNoticeHint).IsExpression = false;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinType).StringTableType = StringUi;
  (this->FixedTxt_JoinType).StringTableID = 0x3a9c5;
  (this->FixedTxt_JoinType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinType).DateTime.Ticks = 0;
  (this->FixedTxt_JoinType).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinType).TimeExpressionType = None;
  (this->FixedTxt_JoinType).IsExpression = false;
  (this->FixedTxt_JoinType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).StringTableType = StringUi;
  (this->FixedTxt_JoinAuto).StringTableID = 0x3a9b0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinAuto).DateTime.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeExpressionType = None;
  (this->FixedTxt_JoinAuto).IsExpression = false;
  (this->FixedTxt_JoinAuto).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinApply).StringTableType = StringUi;
  (this->FixedTxt_JoinApply).StringTableID = 0x3a9b1;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApply).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeExpressionType = None;
  (this->FixedTxt_JoinApply).IsExpression = false;
  (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).StringTableType = StringUi;
  (this->FixedTxt_JoinPrivate).StringTableID = 0x3a9c9;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinPrivate).DateTime.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeExpressionType = None;
  (this->FixedTxt_JoinPrivate).IsExpression = false;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutType).StringTableType = StringUi;
  (this->FixedTxt_KickoutType).StringTableID = 0x3aa46;
  (this->FixedTxt_KickoutType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutType).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutType).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutType).TimeExpressionType = None;
  (this->FixedTxt_KickoutType).IsExpression = false;
  (this->FixedTxt_KickoutType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeNone).StringTableType = StringUi;
  (this->FixedTxt_KickoutTypeNone).StringTableID = 0x3aa42;
  (this->FixedTxt_KickoutTypeNone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutTypeNone).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutTypeNone).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutTypeNone).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutTypeNone).TimeExpressionType = None;
  (this->FixedTxt_KickoutTypeNone).IsExpression = false;
  (this->FixedTxt_KickoutTypeNone).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeNone).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeNone).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeNone).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeNone).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeNone).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeWeek).StringTableType = StringUi;
  (this->FixedTxt_KickoutTypeWeek).StringTableID = 0x3aa40;
  (this->FixedTxt_KickoutTypeWeek).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutTypeWeek).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutTypeWeek).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutTypeWeek).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutTypeWeek).TimeExpressionType = None;
  (this->FixedTxt_KickoutTypeWeek).IsExpression = false;
  (this->FixedTxt_KickoutTypeWeek).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeWeek).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeWeek).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeWeek).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeWeek).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeWeek).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeMonth).StringTableType = StringUi;
  (this->FixedTxt_KickoutTypeMonth).StringTableID = 0x3aa41;
  (this->FixedTxt_KickoutTypeMonth).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutTypeMonth).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutTypeMonth).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutTypeMonth).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutTypeMonth).TimeExpressionType = None;
  (this->FixedTxt_KickoutTypeMonth).IsExpression = false;
  (this->FixedTxt_KickoutTypeMonth).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeMonth).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeMonth).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeMonth).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeMonth).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeMonth).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).StringTableType = StringUi;
  (this->FixedTxt_JoinCondition).StringTableID = 0x3a9c6;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinCondition).DateTime.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeExpressionType = None;
  (this->FixedTxt_JoinCondition).IsExpression = false;
  (this->FixedTxt_JoinCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).StringTableType = StringUi;
  (this->FixedTxt_JoinConditionHint).StringTableID = 0x3a9ca;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinConditionHint).DateTime.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeExpressionType = None;
  (this->FixedTxt_JoinConditionHint).IsExpression = false;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringTableType = StringUi;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringTableID = 0x3aa47;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).TimeExpressionType = None;
  (this->FixedTxt_GuildMarkChangeApplyButton).IsExpression = false;
  (this->FixedTxt_GuildMarkChangeApplyButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMarkChangeApplyButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNameChangeButton).StringTableType = StringUi;
  (this->FixedTxt_GuildNameChangeButton).StringTableID = 0x3a9d7;
  (this->FixedTxt_GuildNameChangeButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNameChangeButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNameChangeButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNameChangeButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNameChangeButton).TimeExpressionType = None;
  (this->FixedTxt_GuildNameChangeButton).IsExpression = false;
  (this->FixedTxt_GuildNameChangeButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameChangeButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNameChangeButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNameChangeButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameChangeButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNameChangeButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildSettingApplyButton).StringTableType = StringUi;
  (this->FixedTxt_GuildSettingApplyButton).StringTableID = 0x3a9d8;
  (this->FixedTxt_GuildSettingApplyButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildSettingApplyButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildSettingApplyButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildSettingApplyButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildSettingApplyButton).TimeExpressionType = None;
  (this->FixedTxt_GuildSettingApplyButton).IsExpression = false;
  (this->FixedTxt_GuildSettingApplyButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSettingApplyButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildSettingApplyButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildSettingApplyButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSettingApplyButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildSettingApplyButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildLeaveButton).StringTableType = StringUi;
  (this->FixedTxt_GuildLeaveButton).StringTableID = 0x3a9d9;
  (this->FixedTxt_GuildLeaveButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildLeaveButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildLeaveButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildLeaveButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildLeaveButton).TimeExpressionType = None;
  (this->FixedTxt_GuildLeaveButton).IsExpression = false;
  (this->FixedTxt_GuildLeaveButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLeaveButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildLeaveButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildLeaveButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLeaveButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildLeaveButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildDisbandButton).StringTableType = StringUi;
  (this->FixedTxt_GuildDisbandButton).StringTableID = 0x3a9da;
  (this->FixedTxt_GuildDisbandButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildDisbandButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildDisbandButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildDisbandButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildDisbandButton).TimeExpressionType = None;
  (this->FixedTxt_GuildDisbandButton).IsExpression = false;
  (this->FixedTxt_GuildDisbandButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildDisbandButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildDisbandButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildDisbandButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildDisbandButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildDisbandButton).FormatArgs.ArrayMax = 0;
  FText::FText(&this->Txt_GuildIntroduction);
  FText::FText(&this->Txt_GuildNotice);
  FText::FText(&this->Txt_GuildConditionLevel);
  this->CheckBoxJoinAuto = false;
  this->CheckBoxJoinApply = false;
  this->CheckBoxJoinPrivate = false;
  this->CheckBoxAutoKickNone = false;
  this->CheckBoxAutoKickOneWeek = false;
  this->CheckBoxAutoKickOneMonth = false;
  (this->ClickGuildMarkChangeApplyButton)._padding_ = '\0';
  (this->ClickGuildMarkChangeApplyButton).bIsCustomSelected = false;
  (this->ClickGuildMarkChangeApplyButton).bIsLacked = false;
  (this->ClickGuildMarkChangeApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildMarkChangeApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildMarkChangeApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildMarkChangeApplyButton).Delegate.field_0x10 = 0;
  (this->ClickGuildNameChangeButton)._padding_ = '\0';
  (this->ClickGuildNameChangeButton).bIsCustomSelected = false;
  (this->ClickGuildNameChangeButton).bIsLacked = false;
  (this->ClickGuildNameChangeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildNameChangeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildNameChangeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildNameChangeButton).Delegate.field_0x10 = 0;
  (this->ClickGuildSettingApplyButton)._padding_ = '\0';
  (this->ClickGuildSettingApplyButton).bIsCustomSelected = false;
  (this->ClickGuildSettingApplyButton).bIsLacked = false;
  (this->ClickGuildSettingApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildSettingApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildSettingApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildSettingApplyButton).Delegate.field_0x10 = 0;
  (this->ClickGuildLeaveButton)._padding_ = '\0';
  (this->ClickGuildLeaveButton).bIsCustomSelected = false;
  (this->ClickGuildLeaveButton).bIsLacked = false;
  (this->ClickGuildLeaveButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildLeaveButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildLeaveButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildLeaveButton).Delegate.field_0x10 = 0;
  (this->ClickGuildDisbandButton)._padding_ = '\0';
  (this->ClickGuildDisbandButton).bIsCustomSelected = false;
  (this->ClickGuildDisbandButton).bIsLacked = false;
  (this->ClickGuildDisbandButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildDisbandButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildDisbandButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildDisbandButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEvent_GuildIntroduction).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildNotice).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildJoinLimitLevel).NewText);
  (this->EntryBindingEventField_MarkTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayMax = 0;
  (this->VM_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  this->GuildUID = 0;
  this->SelectGuildMarkType = None;
  this->SettingGuildJoinType = None;
  this->SettingGuildAutoKickType = None;
  return this;
}

// UDS_VM_GuildSetting @ 14b6610d0

UDS_VM_GuildSetting * __thiscall
UDS_VM_GuildSetting::UDS_VM_GuildSetting(UDS_VM_GuildSetting *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSetting__6B_;
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroduction).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroduction).IsExpression = false;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroductionHint).StringTableID = 0x3a9c8;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroductionHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroductionHint).IsExpression = false;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).StringTableType = StringUi;
  (this->FixedTxt_GuildNotice).StringTableID = 0x3aa05;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNotice).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeExpressionType = None;
  (this->FixedTxt_GuildNotice).IsExpression = false;
  (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).StringTableType = StringUi;
  (this->FixedTxt_GuildNoticeHint).StringTableID = 0x3aa06;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNoticeHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeExpressionType = None;
  (this->FixedTxt_GuildNoticeHint).IsExpression = false;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinType).StringTableType = StringUi;
  (this->FixedTxt_JoinType).StringTableID = 0x3a9c5;
  (this->FixedTxt_JoinType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinType).DateTime.Ticks = 0;
  (this->FixedTxt_JoinType).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinType).TimeExpressionType = None;
  (this->FixedTxt_JoinType).IsExpression = false;
  (this->FixedTxt_JoinType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).StringTableType = StringUi;
  (this->FixedTxt_JoinAuto).StringTableID = 0x3a9b0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinAuto).DateTime.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeExpressionType = None;
  (this->FixedTxt_JoinAuto).IsExpression = false;
  (this->FixedTxt_JoinAuto).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinApply).StringTableType = StringUi;
  (this->FixedTxt_JoinApply).StringTableID = 0x3a9b1;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApply).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeExpressionType = None;
  (this->FixedTxt_JoinApply).IsExpression = false;
  (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).StringTableType = StringUi;
  (this->FixedTxt_JoinPrivate).StringTableID = 0x3a9c9;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinPrivate).DateTime.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeExpressionType = None;
  (this->FixedTxt_JoinPrivate).IsExpression = false;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutType).StringTableType = StringUi;
  (this->FixedTxt_KickoutType).StringTableID = 0x3aa46;
  (this->FixedTxt_KickoutType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutType).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutType).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutType).TimeExpressionType = None;
  (this->FixedTxt_KickoutType).IsExpression = false;
  (this->FixedTxt_KickoutType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeNone).StringTableType = StringUi;
  (this->FixedTxt_KickoutTypeNone).StringTableID = 0x3aa42;
  (this->FixedTxt_KickoutTypeNone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutTypeNone).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutTypeNone).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutTypeNone).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutTypeNone).TimeExpressionType = None;
  (this->FixedTxt_KickoutTypeNone).IsExpression = false;
  (this->FixedTxt_KickoutTypeNone).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeNone).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeNone).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeNone).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeNone).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeNone).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeWeek).StringTableType = StringUi;
  (this->FixedTxt_KickoutTypeWeek).StringTableID = 0x3aa40;
  (this->FixedTxt_KickoutTypeWeek).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutTypeWeek).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutTypeWeek).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutTypeWeek).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutTypeWeek).TimeExpressionType = None;
  (this->FixedTxt_KickoutTypeWeek).IsExpression = false;
  (this->FixedTxt_KickoutTypeWeek).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeWeek).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeWeek).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeWeek).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeWeek).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeWeek).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeMonth).StringTableType = StringUi;
  (this->FixedTxt_KickoutTypeMonth).StringTableID = 0x3aa41;
  (this->FixedTxt_KickoutTypeMonth).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutTypeMonth).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutTypeMonth).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutTypeMonth).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutTypeMonth).TimeExpressionType = None;
  (this->FixedTxt_KickoutTypeMonth).IsExpression = false;
  (this->FixedTxt_KickoutTypeMonth).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeMonth).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeMonth).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutTypeMonth).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutTypeMonth).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutTypeMonth).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).StringTableType = StringUi;
  (this->FixedTxt_JoinCondition).StringTableID = 0x3a9c6;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinCondition).DateTime.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeExpressionType = None;
  (this->FixedTxt_JoinCondition).IsExpression = false;
  (this->FixedTxt_JoinCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).StringTableType = StringUi;
  (this->FixedTxt_JoinConditionHint).StringTableID = 0x3a9ca;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinConditionHint).DateTime.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeExpressionType = None;
  (this->FixedTxt_JoinConditionHint).IsExpression = false;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringTableType = StringUi;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringTableID = 0x3aa47;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).TimeExpressionType = None;
  (this->FixedTxt_GuildMarkChangeApplyButton).IsExpression = false;
  (this->FixedTxt_GuildMarkChangeApplyButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMarkChangeApplyButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNameChangeButton).StringTableType = StringUi;
  (this->FixedTxt_GuildNameChangeButton).StringTableID = 0x3a9d7;
  (this->FixedTxt_GuildNameChangeButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNameChangeButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNameChangeButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNameChangeButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNameChangeButton).TimeExpressionType = None;
  (this->FixedTxt_GuildNameChangeButton).IsExpression = false;
  (this->FixedTxt_GuildNameChangeButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameChangeButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNameChangeButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNameChangeButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameChangeButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNameChangeButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildSettingApplyButton).StringTableType = StringUi;
  (this->FixedTxt_GuildSettingApplyButton).StringTableID = 0x3a9d8;
  (this->FixedTxt_GuildSettingApplyButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildSettingApplyButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildSettingApplyButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildSettingApplyButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildSettingApplyButton).TimeExpressionType = None;
  (this->FixedTxt_GuildSettingApplyButton).IsExpression = false;
  (this->FixedTxt_GuildSettingApplyButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSettingApplyButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildSettingApplyButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildSettingApplyButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSettingApplyButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildSettingApplyButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildLeaveButton).StringTableType = StringUi;
  (this->FixedTxt_GuildLeaveButton).StringTableID = 0x3a9d9;
  (this->FixedTxt_GuildLeaveButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildLeaveButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildLeaveButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildLeaveButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildLeaveButton).TimeExpressionType = None;
  (this->FixedTxt_GuildLeaveButton).IsExpression = false;
  (this->FixedTxt_GuildLeaveButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLeaveButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildLeaveButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildLeaveButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLeaveButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildLeaveButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildDisbandButton).StringTableType = StringUi;
  (this->FixedTxt_GuildDisbandButton).StringTableID = 0x3a9da;
  (this->FixedTxt_GuildDisbandButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildDisbandButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildDisbandButton).DateTime.Ticks = 0;
  (this->FixedTxt_GuildDisbandButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildDisbandButton).TimeExpressionType = None;
  (this->FixedTxt_GuildDisbandButton).IsExpression = false;
  (this->FixedTxt_GuildDisbandButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildDisbandButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildDisbandButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildDisbandButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildDisbandButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildDisbandButton).FormatArgs.ArrayMax = 0;
  FText::FText(&this->Txt_GuildIntroduction);
  FText::FText(&this->Txt_GuildNotice);
  FText::FText(&this->Txt_GuildConditionLevel);
  this->CheckBoxJoinAuto = false;
  this->CheckBoxJoinApply = false;
  this->CheckBoxJoinPrivate = false;
  this->CheckBoxAutoKickNone = false;
  this->CheckBoxAutoKickOneWeek = false;
  this->CheckBoxAutoKickOneMonth = false;
  (this->ClickGuildMarkChangeApplyButton)._padding_ = '\0';
  (this->ClickGuildMarkChangeApplyButton).bIsCustomSelected = false;
  (this->ClickGuildMarkChangeApplyButton).bIsLacked = false;
  (this->ClickGuildMarkChangeApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildMarkChangeApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildMarkChangeApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildMarkChangeApplyButton).Delegate.field_0x10 = 0;
  (this->ClickGuildNameChangeButton)._padding_ = '\0';
  (this->ClickGuildNameChangeButton).bIsCustomSelected = false;
  (this->ClickGuildNameChangeButton).bIsLacked = false;
  (this->ClickGuildNameChangeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildNameChangeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildNameChangeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildNameChangeButton).Delegate.field_0x10 = 0;
  (this->ClickGuildSettingApplyButton)._padding_ = '\0';
  (this->ClickGuildSettingApplyButton).bIsCustomSelected = false;
  (this->ClickGuildSettingApplyButton).bIsLacked = false;
  (this->ClickGuildSettingApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildSettingApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildSettingApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildSettingApplyButton).Delegate.field_0x10 = 0;
  (this->ClickGuildLeaveButton)._padding_ = '\0';
  (this->ClickGuildLeaveButton).bIsCustomSelected = false;
  (this->ClickGuildLeaveButton).bIsLacked = false;
  (this->ClickGuildLeaveButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildLeaveButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildLeaveButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildLeaveButton).Delegate.field_0x10 = 0;
  (this->ClickGuildDisbandButton)._padding_ = '\0';
  (this->ClickGuildDisbandButton).bIsCustomSelected = false;
  (this->ClickGuildDisbandButton).bIsLacked = false;
  (this->ClickGuildDisbandButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildDisbandButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildDisbandButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildDisbandButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEvent_GuildIntroduction).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildNotice).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildJoinLimitLevel).NewText);
  (this->EntryBindingEventField_MarkTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayMax = 0;
  (this->VM_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  this->GuildUID = 0;
  this->SelectGuildMarkType = None;
  this->SettingGuildJoinType = None;
  this->SettingGuildAutoKickType = None;
  return this;
}

// ~UDS_VM_GuildSetting @ 14b662800

void __thiscall UDS_VM_GuildSetting::~UDS_VM_GuildSetting(UDS_VM_GuildSetting *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSetting__6B_;
  pFVar1 = (this->EntryBindingEventField_ColorTileView).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_MarkTileView).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TextCommittedEvent_GuildJoinLimitLevel).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TextCommittedEvent_GuildNotice).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TextCommittedEvent_GuildIntroduction).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickGuildDisbandButton).Delegate)
  ;
  pvVar3 = *(void **)&(this->ClickGuildDisbandButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGuildDisbandButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickGuildLeaveButton).Delegate);
  pvVar3 = *(void **)&(this->ClickGuildLeaveButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGuildLeaveButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickGuildSettingApplyButton).Delegate);
  pvVar3 = *(void **)&(this->ClickGuildSettingApplyButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGuildSettingApplyButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickGuildNameChangeButton).Delegate);
  pvVar3 = *(void **)&(this->ClickGuildNameChangeButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGuildNameChangeButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickGuildMarkChangeApplyButton).Delegate);
  pvVar3 = *(void **)&(this->ClickGuildMarkChangeApplyButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGuildMarkChangeApplyButton).Delegate);
  pIVar2 = (this->Txt_GuildConditionLevel).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildDisbandButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildDisbandButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildDisbandButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildDisbandButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildLeaveButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildLeaveButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildLeaveButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildLeaveButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildSettingApplyButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildSettingApplyButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildSettingApplyButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildSettingApplyButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildNameChangeButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildNameChangeButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNameChangeButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNameChangeButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildMarkChangeApplyButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildMarkChangeApplyButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinConditionHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinCondition).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinCondition).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_KickoutTypeMonth).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_KickoutTypeMonth).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_KickoutTypeMonth).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_KickoutTypeMonth).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_KickoutTypeWeek).FormatArgs.AllocatorInstance.Data
             ,(this->FixedTxt_KickoutTypeWeek).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_KickoutTypeWeek).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_KickoutTypeWeek).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_KickoutTypeNone).FormatArgs.AllocatorInstance.Data
             ,(this->FixedTxt_KickoutTypeNone).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_KickoutTypeNone).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_KickoutTypeNone).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_KickoutType).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_KickoutType).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_KickoutType).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_KickoutType).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinPrivate).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinPrivate).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinApply).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinAuto).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinAuto).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinType).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinType).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data
             ,(this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNoticeHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6648f0

IClassDescriptor * __thiscall
UDS_VM_GuildSetting::GetFieldNotificationDescriptor(UDS_VM_GuildSetting *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildSetting::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b665320

UClass * __cdecl UDS_VM_GuildSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSetting",
               &Z_Registration_Info_UClass_UDS_VM_GuildSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSetting,0x818,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSetting.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildSetting @ 14b6654b0

void __cdecl UDS_VM_GuildSetting::StaticRegisterNativesUDS_VM_GuildSetting(void)

{
  return;
}

// BindModel @ 14be76000

void __thiscall UDS_VM_GuildSetting::BindModel(UDS_VM_GuildSetting *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_UIEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UDS_GuildEvent *pUVar3;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res18 [2];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->VM_TabGroup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar2->OnClickTabIndex).Subscriptions,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildSetting>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_GuildSetting *)&local_res18[0].ObjectPtr,(pmf_05a3e29a *)this);
  }
  pUVar3 = UDS_GuildEvent::GetEvent();
  if (pUVar3 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->GuildMarkUpdateCompleteDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildSetting>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->GuildMarkUpdateCompleteDelegate,(UDS_VM_GuildSetting *)&local_res10,
               (pmf_b46c2236 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->GuildSettingUpdateCompleteDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildSetting>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->GuildSettingUpdateCompleteDelegate,(UDS_VM_GuildSetting *)&local_res10,
               (pmf_b46c2236 *)this);
  }
  return;
}

// HasGuildSettingChange @ 14be8a5b0

bool __thiscall UDS_VM_GuildSetting::HasGuildSettingChange(UDS_VM_GuildSetting *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UObject *pUVar5;
  ForAnyElementType _Str;
  longlong lVar6;
  FWeakObjectPtr local_res10;
  FString local_18;
  
  UDS_GuildManager::GetMyGuildData();
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return false;
  }
  pFVar4 = FText::ToString(&this->Txt_GuildIntroduction);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (pFVar4->Data).ArrayNum;
  lVar6 = (longlong)local_18.Data.ArrayNum;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,pFVar1,lVar6 * 2);
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  iVar3 = *(int *)&pUVar5[3].field_0x20;
  if (iVar3 == local_18.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)&pUVar5[3].field_0x18,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar3 == 0;
      goto LAB_14be8a681;
    }
LAB_14be8a68c:
    pFVar4 = FText::ToString(&this->Txt_GuildNotice);
    if (&local_18 != pFVar4) {
      iVar3 = (pFVar4->Data).ArrayNum;
      pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
      local_18.Data.ArrayNum = iVar3;
      if (((iVar3 != 0) || (local_18.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,local_18.Data.ArrayMax,(ForAnyElementType *)&local_18,iVar3,
                     &local_18.Data.ArrayMax), iVar3 != 0)) {
        memcpy(local_18.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar3 * 2);
      }
    }
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)&pUVar5[4].field_0x8;
    if (iVar3 == local_18.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pUVar5 + 4),(wchar_t *)local_18.Data.AllocatorInstance.Data
                          );
        bVar2 = iVar3 == 0;
        goto LAB_14be8a72e;
      }
    }
    else {
      bVar2 = local_18.Data.ArrayNum + iVar3 == 1;
LAB_14be8a72e:
      if (!bVar2) goto LAB_14be8a7a5;
    }
    pFVar4 = FText::ToString(&this->Txt_GuildConditionLevel);
    ::FString::operator=(&local_18,pFVar4);
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar3 = _wtoi((wchar_t *)_Str.Data);
    if (((*(int *)&pUVar5[4].field_0x1c == iVar3) &&
        (pUVar5 = FWeakObjectPtr::Get(&local_res10),
        pUVar5[2].field_0x8 == this->SettingGuildJoinType)) &&
       (pUVar5 = FWeakObjectPtr::Get(&local_res10),
       pUVar5[2].field_0x9 == this->SettingGuildAutoKickType)) {
      bVar2 = false;
      goto LAB_14be8a7a7;
    }
  }
  else {
    bVar2 = local_18.Data.ArrayNum + iVar3 == 1;
LAB_14be8a681:
    if (bVar2) goto LAB_14be8a68c;
  }
LAB_14be8a7a5:
  bVar2 = true;
LAB_14be8a7a7:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// InitViewModel @ 14be8cd10

void __thiscall UDS_VM_GuildSetting::InitViewModel(UDS_VM_GuildSetting *this)

{
  return;
}

// OnCheckBoxAutoKickNone @ 14be916b0

void __thiscall
UDS_VM_GuildSetting::OnCheckBoxAutoKickNone(UDS_VM_GuildSetting *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsAutoKickNone = this->IsAutoKickNone;
    local_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->SettingGuildAutoKickType = None;
  this->IsAutoKickNone = true;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneWeek = false;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneMonth = false;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// OnCheckBoxAutoKickOneMonth @ 14be917b0

void __thiscall
UDS_VM_GuildSetting::OnCheckBoxAutoKickOneMonth
          (UDS_VM_GuildSetting *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsAutoKickOneMonth = this->IsAutoKickOneMonth;
    local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->IsAutoKickOneMonth = param_1->bIsActivate;
  this->SettingGuildAutoKickType = OneMonth;
  this->IsAutoKickNone = false;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneWeek = false;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneMonth = true;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// OnCheckBoxAutoKickOneWeek @ 14be918c0

void __thiscall
UDS_VM_GuildSetting::OnCheckBoxAutoKickOneWeek
          (UDS_VM_GuildSetting *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsAutoKickOneWeek = this->IsAutoKickOneWeek;
    local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->IsAutoKickOneWeek = param_1->bIsActivate;
  this->SettingGuildAutoKickType = OneWeek;
  this->IsAutoKickNone = false;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneWeek = true;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneMonth = false;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// OnCheckBoxJoinApply @ 14be91aa0

void __thiscall
UDS_VM_GuildSetting::OnCheckBoxJoinApply(UDS_VM_GuildSetting *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsJoinApply = this->IsJoinApply;
    local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->IsJoinApply = param_1->bIsActivate;
  this->SettingGuildJoinType = Approval;
  this->IsJoinAuto = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsJoinApply = true;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsPrivate = false;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// OnCheckBoxJoinAuto @ 14be91c80

void __thiscall
UDS_VM_GuildSetting::OnCheckBoxJoinAuto(UDS_VM_GuildSetting *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsJoinAuto = this->IsJoinAuto;
    local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->SettingGuildJoinType = Free;
  this->IsJoinAuto = true;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsJoinApply = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsPrivate = false;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// OnCheckBoxJoinPrivate @ 14be91e50

void __thiscall
UDS_VM_GuildSetting::OnCheckBoxJoinPrivate(UDS_VM_GuildSetting *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsPrivate = this->IsPrivate;
    local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->IsPrivate = param_1->bIsActivate;
  this->SettingGuildJoinType = Private;
  this->IsJoinAuto = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsJoinApply = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsPrivate = true;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// OnClickGuildDisbandButton @ 14be94b10

void __thiscall
UDS_VM_GuildSetting::OnClickGuildDisbandButton
          (UDS_VM_GuildSetting *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10;
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  if (param_1->bIsCustomDisabled == true) {
    bVar1 = UDS_GuildManager::IsGuildSettingPermission();
    if (!bVar1) {
      local_98 = (code *)0x0;
      uStack_90 = 0;
      local_88 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3a9a0,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&local_98);
      return;
    }
  }
  else {
    this_00 = UDS_CommonPopupManager::GetInst();
    if (this_00 != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9e1);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9e2);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        uStack_90._0_4_ = 0;
        local_98 = OnGuildDisbandPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
        local_98 = OnGuildDisbandPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// OnClickGuildLeaveButton @ 14be94d20

void __thiscall
UDS_VM_GuildSetting::OnClickGuildLeaveButton
          (UDS_VM_GuildSetting *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res18 [2];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9df);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9e0);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      uStack_80._0_4_ = 0;
      local_88 = OnGuildLeavePopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnGuildLeavePopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OnClickGuildMarkChangeApplyButton @ 14be94ee0

void __thiscall
UDS_VM_GuildSetting::OnClickGuildMarkChangeApplyButton
          (UDS_VM_GuildSetting *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (param_1->bIsCustomDisabled != true) {
    OpenGuildMarkChangePopup(this);
    return;
  }
  bVar1 = UDS_GuildManager::IsGuildSettingPermission();
  if (!bVar1) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a9a0,Complete_System_01,&local_28);
    return;
  }
  return;
}

// OnClickGuildMarkTabIndex @ 14be94f60

void __thiscall UDS_VM_GuildSetting::OnClickGuildMarkTabIndex(UDS_VM_GuildSetting *this,int param_1)

{
  this->SelectGuildMarkType = (char)param_1 + Emblem;
  UpdateGuildMarkList(this);
  UpdateGuildMarkColorList(this);
  return;
}

// OnClickGuildNameChangeButton @ 14be94f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OnClickGuildNameChangeButton
          (UDS_VM_GuildSetting *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (param_1->bIsCustomDisabled == true) {
    bVar1 = UDS_GuildManager::IsGuildSettingPermission();
    if (!bVar1) {
      local_48 = (undefined1  [8])0x0;
      local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_40.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3a9a0,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_48);
      return;
    }
  }
  else {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_48 = (undefined1  [8])0x0;
      local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_40.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      local_18 = &local_40;
      puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar2[3] = UDS_VM_GuildNameChangePopup::OnOpenPopup;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      UDS_WindowManager::OpenWindow
                (this_00,GuildPopupNameChange,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_48);
    }
  }
  return;
}

// OnClickGuildSettingApplyButton @ 14be95150

void __thiscall
UDS_VM_GuildSetting::OnClickGuildSettingApplyButton
          (UDS_VM_GuildSetting *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10;
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  if (param_1->bIsCustomDisabled == true) {
    bVar1 = UDS_GuildManager::IsGuildSettingPermission();
    if (!bVar1) {
      local_98 = (code *)0x0;
      uStack_90 = 0;
      local_88 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3a9a0,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&local_98);
      return;
    }
  }
  else {
    this_00 = UDS_CommonPopupManager::GetInst();
    if (this_00 != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9dd);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9de);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        uStack_90._0_4_ = 0;
        local_98 = OpenGuildSettingApplyPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
        local_98 = OpenGuildSettingApplyPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_98);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// OnGuildDisbandPopup_Cancel @ 14be98e10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OnGuildDisbandPopup_Cancel
          (UDS_VM_GuildSetting *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnGuildDisbandPopup_Confrim @ 14be98e50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OnGuildDisbandPopup_Confrim
          (UDS_VM_GuildSetting *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this_00;
  UDS_WindowManager *this_01;
  float local_res18 [2];
  uint local_res20 [2];
  FName local_18;
  int local_10;
  
  this_00 = UDS_GuildManager::GetInst();
  if (this_00 != (UDS_GuildManager *)0x0) {
    bVar3 = UDS_GuildManager::SendDisbandGuild(this_00,this->GuildUID);
    iVar2 = FFieldNotificationClassDescriptor::DisableDisbandButton.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::DisableDisbandButton.FieldName;
    if (bVar3) {
      if (this->DisableDisbandButton != true) {
        this->DisableDisbandButton = true;
        local_10 = iVar2;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_01,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnGuildLeavePopup_Cancel @ 14be991d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OnGuildLeavePopup_Cancel
          (UDS_VM_GuildSetting *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnGuildLeavePopup_Confrim @ 14be99210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OnGuildLeavePopup_Confrim
          (UDS_VM_GuildSetting *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  UDS_GuildManager *this_00;
  UDS_WindowManager *this_01;
  float local_res8 [4];
  uint local_res18 [4];
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableLeaveButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableLeaveButton.FieldName;
  if (this->DisableLeaveButton != true) {
    this->DisableLeaveButton = true;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this_00 = UDS_GuildManager::GetInst();
  if (this_00 != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SendLeaveGuild(this_00,this->GuildUID);
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_01,PopupCommon,local_res18,local_res8);
  }
  return;
}

// OnGuildMarkChangePopup_Confrim @ 14be99360

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_GuildSetting::OnGuildMarkChangePopup_Confrim(UDS_VM_GuildSetting *this)

{
  UDS_VM_GuildMark *pUVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UDS_GuildManager *this_00;
  UDS_WindowManager *this_01;
  float local_res10 [2];
  uint local_res18 [4];
  FName local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  iVar4 = DS_GuildDataHelper::MarkChangeMoneyValue();
  iVar5 = DS_GuildDataHelper::MarkChangeMoneyType();
  bVar3 = UDS_MoneyDataSet::CheckEnoughMoney((EDS_MoneyType)iVar5,(longlong)iVar4);
  iVar4 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.FieldName;
  if (!bVar3) {
    local_28.ComparisonIndex.Value = 0;
    local_28.Number = 0;
    local_20 = 0;
    local_18 = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x3aa4a,Alert_None_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)&local_28);
    return;
  }
  if (this->DisableMarkChangeApplyButton != true) {
    this->DisableMarkChangeApplyButton = true;
    local_20._0_4_ = iVar4;
    local_28 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  this_00 = UDS_GuildManager::GetInst();
  if ((this_00 != (UDS_GuildManager *)0x0) &&
     (pUVar1 = (this->VM_GuildMark).field0_0x0.DebugPtr, pUVar1 != (UDS_VM_GuildMark *)0x0)) {
    UDS_GuildManager::MakeGuildMarkInfoToJson((FString *)&local_28,&pUVar1->GuildMarkInfo);
    UDS_GuildManager::SendUpdateGuildMark(this_00,(FString *)&local_28);
    if (local_28 != (FName)0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_01,PopupConsumeMoney,local_res18,local_res10);
  }
  return;
}

// OnGuildMarkUpdateComplete @ 14be99480

void __thiscall UDS_VM_GuildSetting::OnGuildMarkUpdateComplete(UDS_VM_GuildSetting *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMark *pFVar2;
  bool bVar3;
  UDS_VM_GuildMark *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  FWeakObjectPtr FStackX_8;
  UDS_VM_GuildSetting *pUStackX_10;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> TStack_58;
  TSharedPtr<FDS_ViewModelContext,1> TStack_48;
  FDestructionSentinel FStack_38;
  undefined1 *puStack_20;
  
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMark *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMark>(&TStack_58);
  pFVar2 = TStack_58.Object;
  if (TStack_58.Object != (FDS_ViewModelContext_GuildMark *)0x0) {
    if ((TStack_58.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x1f8;
    TStack_48.Object = (FDS_ViewModelContext *)OnVMGuildMarkInfoUpdateEvent;
    TStack_48.SharedReferenceCount.ReferenceController =
         TStack_48.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->OnGuildMarkUpdateDelegate,(FWriteAccessScope *)&FStack_38);
    puStack_20 = &(pFVar2->OnGuildMarkUpdateDelegate).field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_20);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSetting____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      pUStackX_10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&pUStackX_10);
      puVar5[4] = TStack_48.Object;
      puVar5[5] = TStack_48.SharedReferenceCount.ReferenceController;
    }
    if (FStack_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_38.Accessor,&FStack_38);
    }
    UDS_GuildData::GetData
              ((ulong64)&FStackX_8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
    bVar3 = FWeakObjectPtr::IsValid(&FStackX_8);
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&FStackX_8);
      pFVar2->GuildMarkTableID = *(int *)&pUVar7[4].field_0x20;
      pUVar7 = FWeakObjectPtr::Get(&FStackX_8);
      pFVar2->GuildMarkColorTableID = *(int *)&pUVar7[4].field_0x24;
      pUVar7 = FWeakObjectPtr::Get(&FStackX_8);
      pFVar2->GuildMarkBgTableID = *(int *)(pUVar7 + 5);
      pUVar7 = FWeakObjectPtr::Get(&FStackX_8);
      pFVar2->GuildMarkBgColorTableID = *(int *)&pUVar7[5].field_0x4;
    }
    pUVar4 = (this->VM_GuildMark).field0_0x0.DebugPtr;
    TStack_48.Object = (FDS_ViewModelContext *)TStack_58.Object;
    TStack_48.SharedReferenceCount.ReferenceController =
         TStack_58.SharedReferenceCount.ReferenceController;
    if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&TStack_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  return;
}

// OnGuildSettingUpdateComplete @ 14be995d0

void __thiscall UDS_VM_GuildSetting::OnGuildSettingUpdateComplete(UDS_VM_GuildSetting *this)

{
  bool bVar1;
  bool bVar2;
  FName FStack_18;
  int iStack_10;
  
  bVar2 = true;
  bVar1 = UDS_GuildManager::IsGuildSettingPermission();
  if (bVar1) {
    bVar2 = HasGuildSettingChange(this);
    bVar2 = !bVar2;
  }
  iStack_10 = FFieldNotificationClassDescriptor::DisableSettingApplyButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DisableSettingApplyButton.FieldName;
  if (this->DisableSettingApplyButton != bVar2) {
    this->DisableSettingApplyButton = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// OnSetViewModel @ 14bea14b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OnSetViewModel
          (UDS_VM_GuildSetting *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FName FVar6;
  int iVar7;
  FDS_ViewModelContext_GuildData *pFVar8;
  bool bVar9;
  long64 lVar10;
  UObject *pUVar11;
  FText *pFVar12;
  UDS_VM_GuildData *pUVar13;
  TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> TVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_138 [2];
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_128;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  TSharedPtr<FCulture,1> local_a8;
  FText local_90;
  FText local_80;
  FText local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_58 [2];
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (param_1->Object == (FDS_ViewModelContext *)0x0) goto LAB_14bea1971;
  lVar10 = UDS_GuildManager::GetMyGuildUID();
  this->GuildUID = lVar10;
  UDS_GuildManager::GetMyGuildData();
  bVar9 = FWeakObjectPtr::IsValid(local_138);
  if (bVar9) {
    pUVar11 = FWeakObjectPtr::Get(local_138);
    SetGuildJoinType(this,pUVar11[2].field_0x8);
    pUVar11 = FWeakObjectPtr::Get(local_138);
    SetGuildAutoKickType(this,pUVar11[2].field_0x9);
    pUVar11 = FWeakObjectPtr::Get(local_138);
    pFVar12 = FText::FromString(&local_90,(FString *)&pUVar11[3].field_0x18);
    iVar7 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.FieldName;
    bVar9 = FText::IdenticalTo(&this->Txt_GuildIntroduction,pFVar12,None);
    if (!bVar9) {
      pIVar3 = (pFVar12->TextData).Reference;
      pIVar4 = (this->Txt_GuildIntroduction).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->Txt_GuildIntroduction).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->Txt_GuildIntroduction).Flags = pFVar12->Flags;
      local_118 = FVar6;
      local_110 = iVar7;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    pUVar11 = FWeakObjectPtr::Get(local_138);
    pFVar12 = FText::FromString(&local_80,(FString *)(pUVar11 + 4));
    iVar7 = FFieldNotificationClassDescriptor::Txt_GuildNotice.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::Txt_GuildNotice.FieldName;
    bVar9 = FText::IdenticalTo(&this->Txt_GuildNotice,pFVar12,None);
    if (!bVar9) {
      pIVar3 = (pFVar12->TextData).Reference;
      pIVar4 = (this->Txt_GuildNotice).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->Txt_GuildNotice).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->Txt_GuildNotice).Flags = pFVar12->Flags;
      local_108 = FVar6;
      local_100 = iVar7;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    local_a8.Object = (FCulture *)0x0;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar11 = FWeakObjectPtr::Get(local_138);
    pFVar12 = FText::AsNumber(&local_70,*(int *)&pUVar11[4].field_0x1c,
                              (FNumberFormattingOptions *)0x0,&local_a8);
    iVar7 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.FieldName;
    bVar9 = FText::IdenticalTo(&this->Txt_GuildConditionLevel,pFVar12,None);
    if (!bVar9) {
      pIVar3 = (pFVar12->TextData).Reference;
      pIVar4 = (this->Txt_GuildConditionLevel).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->Txt_GuildConditionLevel).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res20);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->Txt_GuildConditionLevel).Flags = pFVar12->Flags;
      local_f8 = FVar6;
      local_f0 = iVar7;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  SetVM_GuildMark(this);
  SetVM_CommonTabGroup(this);
  if ((this->VM_GuildData).field0_0x0.DebugPtr == (UDS_VM_GuildData *)0x0) {
    pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UDS_VM_GuildData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar13;
    if (pUVar13 != (UDS_VM_GuildData *)0x0) goto LAB_14bea17cb;
  }
  else {
LAB_14bea17cb:
    MakeContext<FDS_ViewModelContext_GuildData>(&local_128);
    pFVar8 = local_128.Object;
    if (local_128.Object != (FDS_ViewModelContext_GuildData *)0x0) {
      if ((local_128.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(EDS_ViewModelTemplateKey *)&pFVar8->_padding_ = GuildData;
      TVar14 = UDS_GuildManager::GetMyGuildData();
      local_58[0].Object = (FDS_ViewModelContext *)local_128.Object;
      local_58[0].SharedReferenceCount.ReferenceController =
           local_128.SharedReferenceCount.ReferenceController;
                    /* WARNING: Load size is inaccurate */
      (pFVar8->guildData).WeakPtr = *TVar14.WeakPtr;
      pUVar13 = (this->VM_GuildData).field0_0x0.DebugPtr;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
  }
  iVar7 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.FieldName;
  plVar1 = &this->_padding_;
  if (this->DisableMarkChangeApplyButton != true) {
    this->DisableMarkChangeApplyButton = true;
    local_e0 = iVar7;
    local_e8 = FVar6;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_e8);
  }
  bVar9 = UDS_GuildManager::IsGuildSettingPermission();
  iVar7 = FFieldNotificationClassDescriptor::DisableGuildNameChangebutton.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::DisableGuildNameChangebutton.FieldName;
  if (this->DisableGuildNameChangebutton != !bVar9) {
    this->DisableGuildNameChangebutton = !bVar9;
    local_d0 = iVar7;
    local_d8 = FVar6;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_d8);
  }
  SetDisableSettingApplyButton(this);
  bVar9 = UDS_GuildManager::IsGuildSettingPermission();
  iVar7 = FFieldNotificationClassDescriptor::DisableDisbandButton.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::DisableDisbandButton.FieldName;
  if (this->DisableDisbandButton != !bVar9) {
    this->DisableDisbandButton = !bVar9;
    local_c0 = iVar7;
    local_c8 = FVar6;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_c8);
  }
  iVar7 = FFieldNotificationClassDescriptor::DisableLeaveButton.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::DisableLeaveButton.FieldName;
  if (this->DisableLeaveButton != false) {
    this->DisableLeaveButton = false;
    local_b0 = iVar7;
    local_b8 = FVar6;
    (**(code **)(this->_padding_ + 0x38))(plVar1,&local_b8);
  }
LAB_14bea1971:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextCommittedEvent_GuildIntroduction @ 14bea6de0

void __thiscall
UDS_VM_GuildSetting::OnTextCommittedEvent_GuildIntroduction
          (UDS_VM_GuildSetting *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  if ((param_1->CommitType == OnUserMovedFocus) || (param_1->CommitType == OnEnter)) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildIntroduction).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildIntroduction).Flags = (param_1->NewText).Flags;
    SetDisableSettingApplyButton(this);
  }
  return;
}

// OnTextCommittedEvent_GuildJoinLimitLevel @ 14bea6ee0

void __thiscall
UDS_VM_GuildSetting::OnTextCommittedEvent_GuildJoinLimitLevel
          (UDS_VM_GuildSetting *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  if ((param_1->CommitType == OnUserMovedFocus) || (param_1->CommitType == OnEnter)) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->Txt_GuildConditionLevel).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildConditionLevel).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildConditionLevel).Flags = (param_1->NewText).Flags;
    SetDisableSettingApplyButton(this);
  }
  return;
}

// OnTextCommittedEvent_GuildNotice @ 14bea71d0

void __thiscall
UDS_VM_GuildSetting::OnTextCommittedEvent_GuildNotice
          (UDS_VM_GuildSetting *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  if ((param_1->CommitType == OnUserMovedFocus) || (param_1->CommitType == OnEnter)) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildNotice).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildNotice).Flags = (param_1->NewText).Flags;
    SetDisableSettingApplyButton(this);
  }
  return;
}

// OnVMGuildMarkInfoUpdateEvent @ 14bea9ed0

void __thiscall UDS_VM_GuildSetting::OnVMGuildMarkInfoUpdateEvent(UDS_VM_GuildSetting *this)

{
  UDS_VM_GuildMark *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  FName local_18;
  int local_10;
  
  bVar2 = UDS_GuildManager::IsGuildSettingPermission();
  if (bVar2) {
    UDS_GuildData::GetData
              ((ulong64)local_res10,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if ((bVar2) && ((this->VM_GuildMark).field0_0x0.DebugPtr != (UDS_VM_GuildMark *)0x0)) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      local_18 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.FieldName;
      pUVar1 = (this->VM_GuildMark).field0_0x0.DebugPtr;
      if ((*(int *)&pUVar3[4].field_0x20 == (pUVar1->GuildMarkInfo).GuildMarkTableID) &&
         (((*(int *)&pUVar3[4].field_0x24 == (pUVar1->GuildMarkInfo).GuildMarkColorTableID &&
           (*(int *)(pUVar3 + 5) == (pUVar1->GuildMarkInfo).GuildMarkBgTableID)) &&
          (*(int *)&pUVar3[5].field_0x4 == (pUVar1->GuildMarkInfo).GuildMarkBgColorTableID)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (this->DisableMarkChangeApplyButton != bVar2) {
        local_10 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.BitNumber;
        this->DisableMarkChangeApplyButton = bVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  return;
}

// OpenGuildDisbandPopup @ 14beaa490

void __thiscall UDS_VM_GuildSetting::OpenGuildDisbandPopup(UDS_VM_GuildSetting *this)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9e1);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9e2);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OnGuildDisbandPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnGuildDisbandPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OpenGuildLeavePopup @ 14beaa650

void __thiscall UDS_VM_GuildSetting::OpenGuildLeavePopup(UDS_VM_GuildSetting *this)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9df);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9e0);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OnGuildLeavePopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnGuildLeavePopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OpenGuildMarkChangePopup @ 14beaa810

void __thiscall UDS_VM_GuildSetting::OpenGuildMarkChangePopup(UDS_VM_GuildSetting *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Common_ConsumeMoneyPopup *pFVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UDS_VM_GuildSetting *local_res10;
  TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> local_f8;
  TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> local_e8;
  FDS_Text local_d8;
  FDS_Text local_88;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  MakeContext<FDS_ViewModelContext_Common_ConsumeMoneyPopup>(&local_e8);
  pFVar2 = local_e8.Object;
  if (local_e8.Object != (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0) {
    if ((local_e8.Object == (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x213;
    iVar4 = DS_GuildDataHelper::MarkChangeMoneyType();
    pFVar2->MoneyType = iVar4;
    iVar4 = DS_GuildDataHelper::MarkChangeMoneyValue();
    pFVar2->MoneyQuantity = (longlong)iVar4;
    local_d8.StringTableType = None;
    local_d8.StringTableID = 0;
    local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_d8.StringEnumTableNameID.Number = 0;
    local_d8.DateTime.Ticks = 0;
    local_d8.TimeSpan.Ticks = 0;
    local_d8.TimeExpressionType = None;
    local_d8.IsExpression = false;
    local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniqueString.Data.ArrayNum = 0;
    local_d8.UniqueString.Data.ArrayMax = 0;
    local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.FormatArgs.ArrayNum = 0;
    local_d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_d8,StringUi,0x3aa48);
    FDS_Text::operator=(&pFVar2->Txt_Title,&local_d8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
               local_d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniqueString.Data.AllocatorInstance.Data);
    }
    local_88.StringTableType = None;
    local_88.StringTableID = 0;
    local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_88.StringEnumTableNameID.Number = 0;
    local_88.TimeExpressionType = None;
    local_88.DateTime.Ticks = 0;
    local_88.TimeSpan.Ticks = 0;
    local_88.IsExpression = false;
    local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.UniqueString.Data.ArrayNum = 0;
    local_88.UniqueString.Data.ArrayMax = 0;
    local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.FormatArgs.ArrayNum = 0;
    local_88.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x3aa49);
    FDS_Text::operator=(&pFVar2->Txt_Content,&local_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
               local_88.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
    }
    if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
    }
    local_f8.Object =
         (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)OnGuildMarkChangePopup_Confrim;
    local_f8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnConsumeConfirm,
               (FWriteAccessScope *)&local_38);
    local_20 = &(pFVar2->OnConsumeConfirm).field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSetting____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSetting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSetting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res10);
      puVar5[4] = local_f8.Object;
      puVar5[5] = local_f8.SharedReferenceCount.ReferenceController;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    local_f8.Object = local_e8.Object;
    local_f8.SharedReferenceCount.ReferenceController =
         local_e8.SharedReferenceCount.ReferenceController;
    if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_VM_Common_ConsumeMoneyPopup::OpenPopup(&local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  return;
}

// OpenGuildSettingApplyPopup @ 14beaaaa0

void __thiscall UDS_VM_GuildSetting::OpenGuildSettingApplyPopup(UDS_VM_GuildSetting *this)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9dd);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9de);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OpenGuildSettingApplyPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OpenGuildSettingApplyPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSetting>(&local_78,this,(pmf_cc6a553e *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OpenGuildSettingApplyPopup_Cancel @ 14beaac60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OpenGuildSettingApplyPopup_Cancel
          (UDS_VM_GuildSetting *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OpenGuildSettingApplyPopup_Confrim @ 14beaaca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSetting::OpenGuildSettingApplyPopup_Confrim
          (UDS_VM_GuildSetting *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_GuildManager *this_00;
  FString *pFVar4;
  UObject *pUVar5;
  UDS_WindowManager *this_01;
  EDS_GuildJoinType EVar6;
  EDS_GuildAutoKickType EVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  float local_res18 [2];
  uint local_res20 [2];
  FWeakObjectPtr local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  FDS_GuildSettingUpdate local_50;
  
  UDS_GuildManager::GetMyGuildData();
  bVar2 = FWeakObjectPtr::IsValid(&local_88);
  if (!bVar2) {
    return;
  }
  this_00 = UDS_GuildManager::GetInst();
  if (this_00 == (UDS_GuildManager *)0x0) goto LAB_14beab017;
  local_50.GuildIntroduction.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.GuildIntroduction.Data.ArrayNum = 0;
  local_50.GuildIntroduction.Data.ArrayMax = 0;
  local_50.GuildNotice.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.GuildNotice.Data.ArrayNum = 0;
  local_50.GuildNotice.Data.ArrayMax = 0;
  local_50.KickType = None;
  local_50.JoinType = None;
  local_50.JoinLimitLevel = 0;
  pFVar4 = FText::ToString(&this->Txt_GuildIntroduction);
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = (pFVar4->Data).ArrayNum;
  lVar9 = (longlong)local_58;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_58 == 0) {
    local_54 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58,0,&local_60,local_58,&local_54);
    memcpy(local_60.Data,pFVar1,lVar9 * 2);
  }
  pUVar5 = FWeakObjectPtr::Get(&local_88);
  iVar3 = *(int *)&pUVar5[3].field_0x20;
  if (iVar3 == local_58) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)&pUVar5[3].field_0x18,(wchar_t *)local_60.Data);
      bVar2 = iVar3 == 0;
      goto LAB_14beaadaf;
    }
LAB_14beaadcf:
    pUVar5 = FWeakObjectPtr::Get(&local_88);
    ::FString::operator=(&local_50.GuildIntroduction,(FString *)&pUVar5[3].field_0x18);
  }
  else {
    bVar2 = local_58 + iVar3 == 1;
LAB_14beaadaf:
    if (bVar2) goto LAB_14beaadcf;
    iVar3 = local_58 + -1;
    if (local_58 == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange(&local_50.GuildIntroduction,(wchar_t *)local_60.Data,iVar3);
  }
  pFVar4 = FText::ToString(&this->Txt_GuildNotice);
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = (pFVar4->Data).ArrayNum;
  lVar9 = (longlong)local_68;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_68 == 0) {
    local_64 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68,0,&local_70,local_68,&local_64);
    memcpy(local_70.Data,pFVar1,lVar9 * 2);
  }
  pUVar5 = FWeakObjectPtr::Get(&local_88);
  iVar3 = *(int *)&pUVar5[4].field_0x8;
  if (iVar3 == local_68) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)(pUVar5 + 4),(wchar_t *)local_70.Data);
      bVar2 = iVar3 == 0;
      goto LAB_14beaae7e;
    }
LAB_14beaae9e:
    pUVar5 = FWeakObjectPtr::Get(&local_88);
    ::FString::operator=(&local_50.GuildNotice,(FString *)(pUVar5 + 4));
  }
  else {
    bVar2 = local_68 + iVar3 == 1;
LAB_14beaae7e:
    if (bVar2) goto LAB_14beaae9e;
    iVar3 = local_68 + -1;
    if (local_68 == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange(&local_50.GuildNotice,(wchar_t *)local_70.Data,iVar3);
  }
  pFVar4 = FText::ToString(&this->Txt_GuildConditionLevel);
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = (pFVar4->Data).ArrayNum;
  lVar9 = (longlong)local_78;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_78 == 0) {
    local_74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78,0,&local_80,local_78,&local_74);
    memcpy(local_80.Data,pFVar1,lVar9 * 2);
  }
  pUVar5 = FWeakObjectPtr::Get(&local_88);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_78 != 0) {
    FVar8.Data = local_80.Data;
  }
  iVar3 = _wtoi((wchar_t *)FVar8.Data);
  if (*(int *)&pUVar5[4].field_0x1c == iVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_88);
    local_50.JoinLimitLevel = *(int *)&pUVar5[4].field_0x1c;
  }
  else {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_78 != 0) {
      FVar8.Data = local_80.Data;
    }
    local_50.JoinLimitLevel = _wtoi((wchar_t *)FVar8.Data);
  }
  pUVar5 = FWeakObjectPtr::Get(&local_88);
  EVar6 = this->SettingGuildJoinType;
  if (pUVar5[2].field_0x8 == EVar6) {
    pUVar5 = FWeakObjectPtr::Get(&local_88);
    EVar6 = pUVar5[2].field_0x8;
  }
  local_50.JoinType = EVar6;
  pUVar5 = FWeakObjectPtr::Get(&local_88);
  EVar7 = this->SettingGuildAutoKickType;
  if (pUVar5[2].field_0x9 == EVar7) {
    pUVar5 = FWeakObjectPtr::Get(&local_88);
    EVar7 = pUVar5[2].field_0x9;
  }
  local_50.KickType = EVar7;
  UDS_GuildManager::SendUpdateGuildSetting(this_00,&local_50);
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_50.GuildNotice.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.GuildNotice.Data.AllocatorInstance.Data);
  }
  if (local_50.GuildIntroduction.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.GuildIntroduction.Data.AllocatorInstance.Data);
  }
LAB_14beab017:
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_01,PopupCommon,local_res20,local_res18);
  }
  return;
}

// SetDisableDisbandButton @ 14beae020

void __thiscall UDS_VM_GuildSetting::SetDisableDisbandButton(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableDisbandButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableDisbandButton.FieldName;
  if (this->DisableDisbandButton != param_1) {
    this->DisableDisbandButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableGuildNameChangebutton @ 14beae0c0

void __thiscall UDS_VM_GuildSetting::SetDisableGuildNameChangebutton(UDS_VM_GuildSetting *this)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  bVar1 = UDS_GuildManager::IsGuildSettingPermission();
  local_18 = FFieldNotificationClassDescriptor::DisableGuildNameChangebutton.FieldName;
  if (this->DisableGuildNameChangebutton != !bVar1) {
    local_10 = FFieldNotificationClassDescriptor::DisableGuildNameChangebutton.BitNumber;
    this->DisableGuildNameChangebutton = !bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableLeaveButton @ 14beae2b0

void __thiscall UDS_VM_GuildSetting::SetDisableLeaveButton(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableLeaveButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableLeaveButton.FieldName;
  if (this->DisableLeaveButton != param_1) {
    this->DisableLeaveButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableMarkChangeApplyButton @ 14beae350

void __thiscall
UDS_VM_GuildSetting::SetDisableMarkChangeApplyButton(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableMarkChangeApplyButton.FieldName;
  if (this->DisableMarkChangeApplyButton != param_1) {
    this->DisableMarkChangeApplyButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableSettingApplyButton @ 14beae490

void __thiscall UDS_VM_GuildSetting::SetDisableSettingApplyButton(UDS_VM_GuildSetting *this)

{
  bool bVar1;
  bool bVar2;
  FName local_18;
  int local_10;
  
  bVar2 = true;
  bVar1 = UDS_GuildManager::IsGuildSettingPermission();
  if (bVar1) {
    bVar2 = HasGuildSettingChange(this);
    bVar2 = !bVar2;
  }
  local_10 = FFieldNotificationClassDescriptor::DisableSettingApplyButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableSettingApplyButton.FieldName;
  if (this->DisableSettingApplyButton != bVar2) {
    this->DisableSettingApplyButton = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildAutoKickType @ 14beaf850

void __thiscall
UDS_VM_GuildSetting::SetGuildAutoKickType(UDS_VM_GuildSetting *this,EDS_GuildAutoKickType param_1)

{
  FName local_18;
  int local_10;
  
  this->SettingGuildAutoKickType = param_1;
  this->IsAutoKickNone = param_1 == None;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneWeek = param_1 == OneWeek;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsAutoKickOneMonth = param_1 == OneMonth;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// SetGuildJoinType @ 14beafa20

void __thiscall
UDS_VM_GuildSetting::SetGuildJoinType(UDS_VM_GuildSetting *this,EDS_GuildJoinType param_1)

{
  FName local_18;
  int local_10;
  
  this->SettingGuildJoinType = param_1;
  this->IsJoinAuto = param_1 == Free;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsJoinApply = param_1 == Approval;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsPrivate = param_1 == Private;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SetDisableSettingApplyButton(this);
  return;
}

// SetIsAutoKickNone @ 14beb1230

void __thiscall UDS_VM_GuildSetting::SetIsAutoKickNone(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsAutoKickNone = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickNone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickNone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsAutoKickOneMonth @ 14beb1270

void __thiscall UDS_VM_GuildSetting::SetIsAutoKickOneMonth(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsAutoKickOneMonth = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneMonth.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsAutoKickOneWeek @ 14beb12b0

void __thiscall UDS_VM_GuildSetting::SetIsAutoKickOneWeek(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsAutoKickOneWeek = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoKickOneWeek.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsJoinApply @ 14beb14f0

void __thiscall UDS_VM_GuildSetting::SetIsJoinApply(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsJoinApply = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsJoinAuto @ 14beb1570

void __thiscall UDS_VM_GuildSetting::SetIsJoinAuto(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsJoinAuto = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNumericGuildJoinLimitLevel @ 14beb1890

void __thiscall
UDS_VM_GuildSetting::SetIsNumericGuildJoinLimitLevel(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsNumericGuildJoinLimitLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNumericGuildJoinLimitLevel.FieldName;
  if (this->IsNumericGuildJoinLimitLevel != param_1) {
    this->IsNumericGuildJoinLimitLevel = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsPrivate @ 14beb1970

void __thiscall UDS_VM_GuildSetting::SetIsPrivate(UDS_VM_GuildSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsPrivate = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_GuildConditionLevel @ 14beb4e70

void __thiscall
UDS_VM_GuildSetting::SetTxt_GuildConditionLevel(UDS_VM_GuildSetting *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildConditionLevel,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildConditionLevel).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildConditionLevel).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildConditionLevel).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildIntroduction @ 14beb5210

void __thiscall
UDS_VM_GuildSetting::SetTxt_GuildIntroduction(UDS_VM_GuildSetting *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildIntroduction,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildIntroduction).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildIntroduction).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildNotice @ 14beb58f0

void __thiscall UDS_VM_GuildSetting::SetTxt_GuildNotice(UDS_VM_GuildSetting *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildNotice.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildNotice.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildNotice,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildNotice).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildNotice).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetVM_CommonTabGroup @ 14beb66e0

void __thiscall UDS_VM_GuildSetting::SetVM_CommonTabGroup(UDS_VM_GuildSetting *this)

{
  TArray<FDS_TabInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  EDS_StringTableType EVar3;
  long64 lVar4;
  FName FVar5;
  FDateTime FVar6;
  FTimespan FVar7;
  EDS_TimeExpression EVar8;
  ForAnyElementType FVar9;
  FDS_ViewModelContext_TabGroup *pFVar10;
  bool bVar11;
  int iVar12;
  UDS_VM_Common_TabGroup *pUVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined2 local_140;
  FScriptContainerElement local_13e;
  undefined8 local_138;
  FScriptContainerElement local_130;
  long64 local_128;
  FName local_120;
  long64 local_118;
  long64 local_110;
  EDS_TimeExpression local_108;
  FScriptContainerElement local_104;
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  FScriptContainerElement local_de;
  FDS_Text local_d8;
  FDS_Text local_88;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if ((this->VM_TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->VM_TabGroup).field0_0x0.DebugPtr = pUVar13;
    if (pUVar13 == (UDS_VM_Common_TabGroup *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_TabGroup>(&local_38);
  pFVar10 = local_38.Object;
  if (local_38.Object != (FDS_ViewModelContext_TabGroup *)0x0) {
    if ((local_38.Object == (FDS_ViewModelContext_TabGroup *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar10->_padding_ = 0x162;
    pFVar10->SelectedIndex = 0;
    local_d8.StringTableType = None;
    local_d8.StringTableID = 0;
    local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_d8.StringEnumTableNameID.Number = 0;
    local_d8.DateTime.Ticks = 0;
    local_d8.TimeSpan.Ticks = 0;
    local_d8.TimeExpressionType = None;
    pTVar1 = &pFVar10->TabInfos;
    local_d8.IsExpression = false;
    local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniqueString.Data.ArrayNum = 0;
    local_d8.UniqueString.Data.ArrayMax = 0;
    local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.FormatArgs.ArrayNum = 0;
    local_d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_d8,StringUi,0x3a9c0);
    FVar9.Data = local_d8.UniqueString.Data.AllocatorInstance.Data;
    bVar11 = local_d8.IsExpression;
    EVar8 = local_d8.TimeExpressionType;
    FVar7.Ticks = local_d8.TimeSpan.Ticks;
    FVar6.Ticks = local_d8.DateTime.Ticks;
    FVar5 = local_d8.StringEnumTableNameID;
    lVar4 = local_d8.StringTableID;
    EVar3 = local_d8.StringTableType;
    lVar15 = (longlong)local_d8.UniqueString.Data.ArrayNum;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = CONCAT44(local_158._4_4_,local_d8.UniqueString.Data.ArrayNum);
    if (local_d8.UniqueString.Data.ArrayNum == 0) {
      local_158 = local_d8.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_d8.UniqueString.Data.ArrayNum,0,&local_160,
                 local_d8.UniqueString.Data.ArrayNum,(int *)((longlong)&local_158 + 4));
      memcpy(local_160.Data,FVar9.Data,lVar15 * 2);
    }
    FVar9.Data = local_d8.FormatArgs.AllocatorInstance.Data;
    iVar12 = local_d8.FormatArgs.ArrayNum;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = CONCAT44(local_148._4_4_,local_d8.FormatArgs.ArrayNum);
    if (local_d8.FormatArgs.ArrayNum == 0) {
      local_148 = local_d8.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_d8.FormatArgs.ArrayNum,0,&local_150,local_d8.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_148 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_150.Data,(FDS_TextFormatArg *)FVar9.Data,iVar12);
    }
    local_140 = 0;
    local_13e = (FScriptContainerElement)0x0;
    iVar12 = (pFVar10->TabInfos).ArrayNum;
    if (iVar12 == (pFVar10->TabInfos).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,&pTVar1->AllocatorInstance,&(pFVar10->TabInfos).ArrayMax);
    }
    (pFVar10->TabInfos).ArrayNum = iVar12 + 1;
    pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x60;
    *(undefined4 *)pFVar14 = 0xffffffff;
    *(undefined4 *)(pFVar14 + 4) = 0xffffffff;
    pFVar14[8] = (FScriptContainerElement)EVar3;
    *(long64 *)(pFVar14 + 0x10) = lVar4;
    *(FName *)(pFVar14 + 0x18) = FVar5;
    *(long64 *)(pFVar14 + 0x20) = FVar6.Ticks;
    *(long64 *)(pFVar14 + 0x28) = FVar7.Ticks;
    *(EDS_TimeExpression *)(pFVar14 + 0x30) = EVar8;
    *(undefined8 *)(pFVar14 + 0x38) = 0;
    pFVar14[0x34] = (FScriptContainerElement)bVar11;
    *(FScriptContainerElement **)(pFVar14 + 0x38) = local_160.Data;
    local_160.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x40) = (undefined4)local_158;
    *(undefined4 *)(pFVar14 + 0x44) = local_158._4_4_;
    local_158 = 0;
    *(undefined8 *)(pFVar14 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar14 + 0x48) = local_150.Data;
    local_150.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x50) = (undefined4)local_148;
    *(undefined4 *)(pFVar14 + 0x54) = local_148._4_4_;
    local_148 = 0;
    pFVar14[0x58] = local_140._0_1_;
    pFVar14[0x59] = local_140._1_1_;
    pFVar14[0x5a] = local_13e;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
               local_d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniqueString.Data.AllocatorInstance.Data);
    }
    local_88.StringTableType = None;
    local_88.StringTableID = 0;
    local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_88.StringEnumTableNameID.Number = 0;
    local_88.TimeExpressionType = None;
    local_88.DateTime.Ticks = 0;
    local_88.TimeSpan.Ticks = 0;
    local_88.IsExpression = false;
    local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.UniqueString.Data.ArrayNum = 0;
    local_88.UniqueString.Data.ArrayMax = 0;
    local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.FormatArgs.ArrayNum = 0;
    local_88.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x3a9c1);
    FVar9.Data = local_88.UniqueString.Data.AllocatorInstance.Data;
    lVar15 = (longlong)local_88.UniqueString.Data.ArrayNum;
    local_130 = (FScriptContainerElement)local_88.StringTableType;
    local_128 = local_88.StringTableID;
    local_120 = local_88.StringEnumTableNameID;
    local_118 = local_88.DateTime.Ticks;
    local_110 = local_88.TimeSpan.Ticks;
    local_108 = local_88.TimeExpressionType;
    local_104 = (FScriptContainerElement)local_88.IsExpression;
    local_138 = 0xffffffffffffffff;
    local_100.Data = (FScriptContainerElement *)0x0;
    local_f8 = CONCAT44(local_f8._4_4_,local_88.UniqueString.Data.ArrayNum);
    if (local_88.UniqueString.Data.ArrayNum == 0) {
      local_f8 = local_88.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.UniqueString.Data.ArrayNum,0,&local_100,
                 local_88.UniqueString.Data.ArrayNum,(int *)((longlong)&local_f8 + 4));
      memcpy(local_100.Data,FVar9.Data,lVar15 * 2);
    }
    FVar9.Data = local_88.FormatArgs.AllocatorInstance.Data;
    iVar12 = local_88.FormatArgs.ArrayNum;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = CONCAT44(local_e8._4_4_,local_88.FormatArgs.ArrayNum);
    if (local_88.FormatArgs.ArrayNum == 0) {
      local_e8 = local_88.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_88.FormatArgs.ArrayNum,0,&local_f0,local_88.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_e8 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_f0.Data,(FDS_TextFormatArg *)FVar9.Data,iVar12);
    }
    local_e0 = 0;
    local_de = (FScriptContainerElement)0x0;
    iVar12 = (pFVar10->TabInfos).ArrayNum;
    if (iVar12 == (pFVar10->TabInfos).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,&pTVar1->AllocatorInstance,&(pFVar10->TabInfos).ArrayMax);
    }
    (pFVar10->TabInfos).ArrayNum = iVar12 + 1;
    pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x60;
    *(undefined4 *)pFVar14 = (undefined4)local_138;
    *(undefined4 *)(pFVar14 + 4) = local_138._4_4_;
    pFVar14[8] = local_130;
    *(long64 *)(pFVar14 + 0x10) = local_128;
    *(FName *)(pFVar14 + 0x18) = local_120;
    *(long64 *)(pFVar14 + 0x20) = local_118;
    *(long64 *)(pFVar14 + 0x28) = local_110;
    *(EDS_TimeExpression *)(pFVar14 + 0x30) = local_108;
    *(undefined8 *)(pFVar14 + 0x38) = 0;
    pFVar14[0x34] = local_104;
    *(FScriptContainerElement **)(pFVar14 + 0x38) = local_100.Data;
    local_100.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x40) = (undefined4)local_f8;
    *(undefined4 *)(pFVar14 + 0x44) = local_f8._4_4_;
    local_f8 = 0;
    *(undefined8 *)(pFVar14 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar14 + 0x48) = local_f0.Data;
    local_f0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x50) = (undefined4)local_e8;
    *(undefined4 *)(pFVar14 + 0x54) = local_e8._4_4_;
    local_e8 = 0;
    pFVar14[0x58] = local_e0._0_1_;
    pFVar14[0x59] = local_e0._1_1_;
    pFVar14[0x5a] = local_de;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
               local_88.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
    }
    if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
    }
    pUVar13 = (this->VM_TabGroup).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_38.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  this->SelectGuildMarkType = Emblem;
  UpdateGuildMarkList(this);
  UpdateGuildMarkColorList(this);
  return;
}

// SetVM_GuildData @ 14beb7940

void __thiscall UDS_VM_GuildSetting::SetVM_GuildData(UDS_VM_GuildSetting *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildData *pFVar2;
  bool bVar3;
  UDS_VM_GuildData *pUVar4;
  TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> TVar5;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildData).field0_0x0.DebugPtr == (UDS_VM_GuildData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x211;
  TVar5 = UDS_GuildManager::GetMyGuildData();
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
                    /* WARNING: Load size is inaccurate */
  (pFVar2->guildData).WeakPtr = *TVar5.WeakPtr;
  pUVar4 = (this->VM_GuildData).field0_0x0.DebugPtr;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_GuildMark @ 14beb8010

void __thiscall UDS_VM_GuildSetting::SetVM_GuildMark(UDS_VM_GuildSetting *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMark *pFVar2;
  bool bVar3;
  UDS_VM_GuildMark *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  UDS_VM_GuildSetting *local_res10;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMark *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMark>(&local_58);
  pFVar2 = local_58.Object;
  if (local_58.Object != (FDS_ViewModelContext_GuildMark *)0x0) {
    if ((local_58.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x1f8;
    local_48.Object = (FDS_ViewModelContext *)OnVMGuildMarkInfoUpdateEvent;
    local_48.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->OnGuildMarkUpdateDelegate,(FWriteAccessScope *)&local_38);
    local_20 = &(pFVar2->OnGuildMarkUpdateDelegate).field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSetting____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res10);
      puVar5[4] = local_48.Object;
      puVar5[5] = local_48.SharedReferenceCount.ReferenceController;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    UDS_GuildData::GetData
              ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      pFVar2->GuildMarkTableID = *(int *)&pUVar7[4].field_0x20;
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      pFVar2->GuildMarkColorTableID = *(int *)&pUVar7[4].field_0x24;
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      pFVar2->GuildMarkBgTableID = *(int *)(pUVar7 + 5);
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      pFVar2->GuildMarkBgColorTableID = *(int *)&pUVar7[5].field_0x4;
    }
    pUVar4 = (this->VM_GuildMark).field0_0x0.DebugPtr;
    local_48.Object = (FDS_ViewModelContext *)local_58.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebc170

void __thiscall UDS_VM_GuildSetting::UnbindModel(UDS_VM_GuildSetting *this)

{
  UDS_UIEvent *pUVar1;
  UDS_GuildEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::
    Remove<UDS_VM_GuildSetting>(&pUVar1->OnClickTabIndex,this);
  }
  pUVar2 = UDS_GuildEvent::GetEvent();
  if (pUVar2 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->GuildMarkUpdateCompleteDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->GuildSettingUpdateCompleteDelegate,this);
  }
  return;
}

// UpdateGuildMarkColorList @ 14bebe9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_GuildSetting::UpdateGuildMarkColorList(UDS_VM_GuildSetting *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UDS_VM_GuildMark *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  FDS_ViewModelContext *pFVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  ForAnyElementType local_120;
  uint local_118;
  uint local_114;
  uint local_110;
  TArray<FDS_GuildMarkColorTableRow_const_*,TSizedDefaultAllocator<32>_> local_108;
  UDS_UserObjectListItem *local_f8;
  FScriptContainerElement *local_f0;
  FName local_e8;
  int local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_ColorTileView);
  FDS_GuildMarkColorTableRow::GetAll(&local_108);
  iVar15 = local_108.ArrayNum;
  uVar10 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_114 = 0;
  local_118 = 0;
  pFVar1 = local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 8;
  FVar13.Data = local_108.AllocatorInstance.Data;
  while( true ) {
    local_110 = uVar10;
    if (local_108.ArrayNum != iVar15) {
      local_128 = 0;
      `TCheckedPointerIterator<FDS_GuildMarkColorTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_128);
      local_110 = local_118;
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    uVar10 = local_110;
    if ((lVar2 != 0) && (*(EDS_GuildMarkType *)(lVar2 + 0x20) == this->SelectGuildMarkType)) {
      if (local_110 == local_114) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_120,(int *)&local_114);
      }
      uVar10 = local_110 + 1;
      *(longlong *)(local_120.Data + (longlong)(int)local_110 * 8) = lVar2;
      local_118 = uVar10;
    }
    FVar13.Data = FVar13.Data + 8;
  }
  pUVar3 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  iVar15 = 0;
  if (pUVar3 != (UDS_VM_GuildMark *)0x0) {
    if (this->SelectGuildMarkType == Emblem) {
      iVar15 = (pUVar3->GuildMarkInfo).GuildMarkColorTableID;
    }
    else {
      iVar15 = 0;
      if (this->SelectGuildMarkType == BackGround) {
        iVar15 = (pUVar3->GuildMarkInfo).GuildMarkBgColorTableID;
      }
    }
  }
  uVar11 = (ulonglong)(int)local_110;
  local_f0 = local_120.Data + uVar11 * 8;
  FVar13.Data = local_120.Data;
  uVar10 = local_110;
  while( true ) {
    pFVar1 = local_f0;
    pFVar14 = (FDS_ViewModelContext *)0x0;
    if (uVar10 != (uint)uVar11) {
      local_127[0] = 0;
      `TCheckedPointerIterator<FDS_GuildMarkColorTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_127);
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._8_8_ = this;
    this_00 = (UDS_UserObjectListItem *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebed3c;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebed3c;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar7 = ::operator_new(0x28);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar7[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 7) = 0;
      pFVar7->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildMarkColorSlot__6B_;
      *(undefined4 *)&pFVar7[1]._padding_ = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
      pFVar14 = pFVar7;
    }
    pTVar8 = ::operator_new(0x20);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildMarkColorSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar8[1].SharedReferenceCount = pFVar14;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_GuildMarkColorSlot::StaticStruct();
    pFVar14->DerivedStaticStruct = (UStruct *)pUVar9;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar14;
      local_d8.SharedReferenceCount.ReferenceController = pTVar8;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    pFVar14->ViewModelTemplateKey = GuildMarkColorSlot;
    *(undefined4 *)&pFVar14[1]._padding_ = *(undefined4 *)(lVar2 + 8);
    *(bool *)((longlong)&pFVar14[1]._padding_ + 4) = *(int *)(lVar2 + 8) == iVar15;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar14;
    local_c8.SharedReferenceCount.ReferenceController = pTVar8;
    UDS_UserObjectListItem::AddContext(this_00,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    local_f8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_ColorTileView,
               (TObjectPtr<UDS_UserObjectListItem>)&local_f8);
    FVar13.Data = FVar13.Data + 8;
    uVar11 = (ulonglong)local_110;
    uVar10 = local_118;
  }
  local_e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorTileView.BitNumber;
  local_e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorTileView.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
LAB_14bebed3c:
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

// UpdateGuildMarkList @ 14bebf170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_GuildSetting::UpdateGuildMarkList(UDS_VM_GuildSetting *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UDS_VM_GuildMark *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  FDS_ViewModelContext *pFVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  ForAnyElementType local_120;
  uint local_118;
  uint local_114;
  uint local_110;
  TArray<FDS_GuildMarkTableRow_const_*,TSizedDefaultAllocator<32>_> local_108;
  UDS_UserObjectListItem *local_f8;
  FScriptContainerElement *local_f0;
  FName local_e8;
  int local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_MarkTileView);
  FDS_GuildMarkTableRow::GetAll(&local_108);
  iVar15 = local_108.ArrayNum;
  uVar10 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_114 = 0;
  local_118 = 0;
  pFVar1 = local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 8;
  FVar13.Data = local_108.AllocatorInstance.Data;
  while( true ) {
    local_110 = uVar10;
    if (local_108.ArrayNum != iVar15) {
      local_128 = 0;
      `TCheckedPointerIterator<FDS_GuildMarkTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_128);
      local_110 = local_118;
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    uVar10 = local_110;
    if ((lVar2 != 0) && (*(EDS_GuildMarkType *)(lVar2 + 0x20) == this->SelectGuildMarkType)) {
      if (local_110 == local_114) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_120,(int *)&local_114);
      }
      uVar10 = local_110 + 1;
      *(longlong *)(local_120.Data + (longlong)(int)local_110 * 8) = lVar2;
      local_118 = uVar10;
    }
    FVar13.Data = FVar13.Data + 8;
  }
  pUVar3 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  iVar15 = 0;
  if (pUVar3 != (UDS_VM_GuildMark *)0x0) {
    if (this->SelectGuildMarkType == Emblem) {
      iVar15 = (pUVar3->GuildMarkInfo).GuildMarkTableID;
    }
    else {
      iVar15 = 0;
      if (this->SelectGuildMarkType == BackGround) {
        iVar15 = (pUVar3->GuildMarkInfo).GuildMarkBgTableID;
      }
    }
  }
  uVar11 = (ulonglong)(int)local_110;
  local_f0 = local_120.Data + uVar11 * 8;
  FVar13.Data = local_120.Data;
  uVar10 = local_110;
  while( true ) {
    pFVar1 = local_f0;
    pFVar14 = (FDS_ViewModelContext *)0x0;
    if (uVar10 != (uint)uVar11) {
      local_127[0] = 0;
      `TCheckedPointerIterator<FDS_GuildMarkTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_127);
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._8_8_ = this;
    this_00 = (UDS_UserObjectListItem *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebf4bc;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebf4bc;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar7 = ::operator_new(0x28);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar7[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 7) = 0;
      pFVar7->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildMarkSlot__6B_;
      *(undefined4 *)&pFVar7[1]._padding_ = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
      pFVar14 = pFVar7;
    }
    pTVar8 = ::operator_new(0x20);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildMarkSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar8[1].SharedReferenceCount = pFVar14;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_GuildMarkSlot::StaticStruct();
    pFVar14->DerivedStaticStruct = (UStruct *)pUVar9;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar14;
      local_d8.SharedReferenceCount.ReferenceController = pTVar8;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    pFVar14->ViewModelTemplateKey = GuildMarkSlot;
    *(undefined4 *)&pFVar14[1]._padding_ = *(undefined4 *)(lVar2 + 8);
    *(bool *)((longlong)&pFVar14[1]._padding_ + 4) = *(int *)(lVar2 + 8) == iVar15;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar14;
    local_c8.SharedReferenceCount.ReferenceController = pTVar8;
    UDS_UserObjectListItem::AddContext(this_00,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    local_f8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_MarkTileView,
               (TObjectPtr<UDS_UserObjectListItem>)&local_f8);
    FVar13.Data = FVar13.Data + 8;
    uVar11 = (ulonglong)local_110;
    uVar10 = local_118;
  }
  local_e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_MarkTileView.BitNumber;
  local_e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_MarkTileView.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
LAB_14bebf4bc:
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

