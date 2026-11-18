// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetClickOk_WrapperImpl @ 14b6436a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_VM_Dungeon_RaidPartyJoinPopup::SetClickOk_WrapperImpl(void *param_1,void *param_2)

{
  UDS_DungeonManager *this;
  UDS_LogManager *pUVar1;
  FString *pFVar2;
  UDS_WindowManager *this_00;
  undefined1 auStackY_1d8 [32];
  uint uVar3;
  wchar_t *pwVar4;
  float fStack_1a8;
  uint auStack_1a4 [3];
  FDS_RaidPartySimpleInfo FStack_198;
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (*(longlong *)((longlong)param_1 + 0x200) < 1) {
    return;
  }
  this = UDS_DungeonManager::GetInst();
  if (this == (UDS_DungeonManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickOk",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x29,L"dungeonManager is nullptr.");
    FStack_198.PartyName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)TStack_138._padding_;
    goto LAB_14be2c92d;
  }
  UDS_DungeonManager::GetRaidPartySimpleInfo
            (this,&FStack_198,*(long64 *)((longlong)param_1 + 0x200));
  if (FStack_198.RaidPartyUID == *(longlong *)((longlong)param_1 + 0x200)) {
    pFVar2 = FText::ToString((FText *)((longlong)param_1 + 0xe0));
    pFVar2 = ::FString::FString(&FStack_148,pFVar2);
    FDS_RaidPartyService::RequestRaidPartyJoin(FStack_198.RaidPartyUID,pFVar2,FStack_198.DungeonId);
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickOk",0x2c,Yes);
        pwVar4 = L"windowManager is nullptr.";
        uVar3 = 0x39;
        goto LAB_14be2c8c3;
      }
    }
    else {
      fStack_1a8 = 0.0;
      auStack_1a4[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,RaidPartyInputPopup,auStack_1a4,&fStack_1a8);
    }
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickOk",0x2c,Yes);
      pwVar4 = L"raid_party_uid is not valid.";
      uVar3 = 0x30;
LAB_14be2c8c3:
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,uVar3,pwVar4);
      if ((FScriptContainerElement *)TStack_138._padding_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  if (FStack_198.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.LeaderNickName.Data.AllocatorInstance.Data);
  }
LAB_14be2c92d:
  if (FStack_198.PartyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.PartyName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickCancel_WrapperImpl @ 14b6436b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyJoinPopup::SetClickCancel_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickCancel",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x45,L"windowManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartyInputPopup,auStack_144,&fStack_148);
  }
  return;
}

// SetRaidPartyPassword_WrapperImpl @ 14b6436c0

void __cdecl
UDS_VM_Dungeon_RaidPartyJoinPopup::SetRaidPartyPassword_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyPassword.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyPassword.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xe0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xe0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xe0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xe8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetRaidPartyPasswordChanged_WrapperImpl @ 14b6436d0

void __cdecl
UDS_VM_Dungeon_RaidPartyJoinPopup::SetRaidPartyPasswordChanged_WrapperImpl
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStackX_8 [8];
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xe0);
  if (plVar2 == plVar1) {
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  else {
    *(longlong **)((longlong)param_1 + 0xe0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  *(undefined4 *)((longlong)param_1 + 0xe8) = uVar3;
  return;
}

// SetMaxPasswordLength_WrapperImpl @ 14b6436e0

void __cdecl
UDS_VM_Dungeon_RaidPartyJoinPopup::SetMaxPasswordLength_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MaxPasswordLength.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MaxPasswordLength.FieldName;
  if (*(int *)((longlong)param_1 + 0x108) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0x108) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetbIsNumeric_WrapperImpl @ 14b6436f0

void __cdecl
UDS_VM_Dungeon_RaidPartyJoinPopup::SetbIsNumeric_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsNumeric.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsNumeric.FieldName;
  if (*(char *)((longlong)param_1 + 0x10c) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x10c) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b643740

UClass * __cdecl UDS_VM_Dungeon_RaidPartyJoinPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyJoinPopup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyJoinPopup",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyJoinPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyJoinPopup,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyJoinPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyJoinPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyJoinPopup.InnerSingleton;
}

// UDS_VM_Dungeon_RaidPartyJoinPopup @ 14b646ec0

UDS_VM_Dungeon_RaidPartyJoinPopup * __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::UDS_VM_Dungeon_RaidPartyJoinPopup
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyJoinPopup__6B_;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  FText::FText(&this->RaidPartyPassword);
  FText::FText(&(this->RaidPartyPasswordChanged).NewText);
  (this->FixedText_Message).StringTableType = StringUi;
  (this->FixedText_Message).StringTableID = 0x3347b;
  (this->FixedText_Message).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Message).StringEnumTableNameID.Number = 0;
  (this->FixedText_Message).DateTime.Ticks = 0;
  (this->FixedText_Message).TimeSpan.Ticks = 0;
  (this->FixedText_Message).TimeExpressionType = None;
  (this->FixedText_Message).IsExpression = false;
  (this->FixedText_Message).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Message).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Message).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Message).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Message).FormatArgs.ArrayNum = 0;
  (this->FixedText_Message).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  this->RaidPartyUID = 0;
  return this;
}

// UDS_VM_Dungeon_RaidPartyJoinPopup @ 14b647050

UDS_VM_Dungeon_RaidPartyJoinPopup * __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::UDS_VM_Dungeon_RaidPartyJoinPopup
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyJoinPopup__6B_;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  FText::FText(&this->RaidPartyPassword);
  FText::FText(&(this->RaidPartyPasswordChanged).NewText);
  (this->FixedText_Message).StringTableType = StringUi;
  (this->FixedText_Message).StringTableID = 0x3347b;
  (this->FixedText_Message).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Message).StringEnumTableNameID.Number = 0;
  (this->FixedText_Message).DateTime.Ticks = 0;
  (this->FixedText_Message).TimeSpan.Ticks = 0;
  (this->FixedText_Message).TimeExpressionType = None;
  (this->FixedText_Message).IsExpression = false;
  (this->FixedText_Message).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Message).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Message).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Message).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Message).FormatArgs.ArrayNum = 0;
  (this->FixedText_Message).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  this->RaidPartyUID = 0;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyJoinPopup @ 14b648db0

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::~UDS_VM_Dungeon_RaidPartyJoinPopup
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyJoinPopup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_OK).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Message).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Message).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Message).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Message).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RaidPartyPasswordChanged).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->RaidPartyPassword).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancel).Delegate);
  pvVar3 = *(void **)&(this->ClickCancel).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOk).Delegate);
  pvVar3 = *(void **)&(this->ClickOk).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOk).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64ade0

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::GetFieldNotificationDescriptor
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyJoinPopup::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b450

UClass * __cdecl UDS_VM_Dungeon_RaidPartyJoinPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyJoinPopup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyJoinPopup",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyJoinPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyJoinPopup,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyJoinPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyJoinPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyJoinPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyJoinPopup @ 14b64be20

void __cdecl
UDS_VM_Dungeon_RaidPartyJoinPopup::StaticRegisterNativesUDS_VM_Dungeon_RaidPartyJoinPopup(void)

{
  return;
}

// __VTableCtorCaller @ 14b64ce10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_Dungeon_RaidPartyJoinPopup::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyJoinPopup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FText::FText((FText *)&this[1]._padding_);
    FText::FText((FText *)&this[1]._padding_);
    *(undefined1 *)&this[1].ViewModelContext.Object = 2;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x3347b;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    *(undefined1 *)&this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x65;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2].ViewModelContext.Object = 2;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x66;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    *(undefined1 *)&this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// OnClickCancel @ 14be2c1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickCancel
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickCancel",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x45,L"windowManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartyInputPopup,local_144,&local_148);
  }
  return;
}

// OnClickOk @ 14be2c700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickOk
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_DungeonManager *this_00;
  UDS_LogManager *pUVar1;
  FString *pFVar2;
  UDS_WindowManager *this_01;
  undefined1 auStackY_1d8 [32];
  uint uVar3;
  wchar_t *pwVar4;
  float local_1a8;
  uint local_1a4 [3];
  FDS_RaidPartySimpleInfo local_198;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->RaidPartyUID < 1) {
    return;
  }
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickOk",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x29,L"dungeonManager is nullptr.");
    local_198.PartyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_
    ;
    goto LAB_14be2c92d;
  }
  UDS_DungeonManager::GetRaidPartySimpleInfo(this_00,&local_198,this->RaidPartyUID);
  if (local_198.RaidPartyUID == this->RaidPartyUID) {
    pFVar2 = FText::ToString(&this->RaidPartyPassword);
    pFVar2 = ::FString::FString(&local_148,pFVar2);
    FDS_RaidPartyService::RequestRaidPartyJoin(local_198.RaidPartyUID,pFVar2,local_198.DungeonId);
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 == (UDS_WindowManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickOk",0x2c,Yes);
        pwVar4 = L"windowManager is nullptr.";
        uVar3 = 0x39;
        goto LAB_14be2c8c3;
      }
    }
    else {
      local_1a8 = 0.0;
      local_1a4[0] = 0;
      UDS_WindowManager::CloseWindow(this_01,RaidPartyInputPopup,local_1a4,&local_1a8);
    }
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnClickOk",0x2c,Yes);
      pwVar4 = L"raid_party_uid is not valid.";
      uVar3 = 0x30;
LAB_14be2c8c3:
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar3,pwVar4);
      if ((FScriptContainerElement *)local_138._padding_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  if (local_198.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.LeaderNickName.Data.AllocatorInstance.Data);
  }
LAB_14be2c92d:
  if (local_198.PartyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.PartyName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnRaidPartyPasswordChanged @ 14be32bc0

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::OnRaidPartyPasswordChanged
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->NewText).TextData.Reference;
  pIVar2 = (this->RaidPartyPassword).TextData.Reference;
  if (pIVar2 == pIVar1) {
    uVar3 = (param_1->NewText).Flags;
  }
  else {
    (this->RaidPartyPassword).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    uVar3 = (param_1->NewText).Flags;
  }
  (this->RaidPartyPassword).Flags = uVar3;
  return;
}

// OnSetViewModel @ 14be34420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  FText *pFVar9;
  undefined1 auStackY_208 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_1d8;
  undefined1 local_1c8 [16];
  FName local_1b8;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  FText local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RaidPartyInfo>(&local_1d8,&local_178);
  if (local_1d8.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)local_1d8.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Dungeon_RaidPartyJoinPopup::OnSetViewModel",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_158.Ptr,0x13,L"raidPartyInfoContext.IsValid() == false");
      if ((FDS_ViewModelContext_RaidPartyInfo *)local_158._padding_ !=
          (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if (local_1d8.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this->RaidPartyUID = (local_1d8.Object)->RaidPartyUID;
    pFVar9 = FText::FText(&local_168);
    iVar7 = FFieldNotificationClassDescriptor::RaidPartyPassword.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::RaidPartyPassword.FieldName;
    bVar6 = FText::IdenticalTo(&this->RaidPartyPassword,pFVar9,None);
    if (!bVar6) {
      pIVar2 = (pFVar9->TextData).Reference;
      pIVar3 = (this->RaidPartyPassword).TextData.Reference;
      if (pIVar3 != pIVar2) {
        (this->RaidPartyPassword).TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_1c8);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (this->RaidPartyPassword).Flags = pFVar9->Flags;
      local_1a8 = local_1b8;
      local_1a0 = iVar7;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    iVar7 = DS_CommonDataHelper::RaidPartyPasswordMaxLength();
    FVar5 = FFieldNotificationClassDescriptor::MaxPasswordLength.FieldName;
    if (this->MaxPasswordLength != iVar7) {
      local_190 = FFieldNotificationClassDescriptor::MaxPasswordLength.BitNumber;
      this->MaxPasswordLength = iVar7;
      local_198 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
    iVar7 = FFieldNotificationClassDescriptor::bIsNumeric.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::bIsNumeric.FieldName;
    if (this->bIsNumeric != true) {
      this->bIsNumeric = true;
      local_180 = iVar7;
      local_188 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsNumeric @ 14be4c170

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::SetIsNumeric
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsNumeric.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsNumeric.FieldName;
  if (this->bIsNumeric != *param_1) {
    this->bIsNumeric = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxPasswordLength @ 14be4dd80

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::SetMaxPasswordLength
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MaxPasswordLength.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxPasswordLength.FieldName;
  if (this->MaxPasswordLength != *param_1) {
    this->MaxPasswordLength = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRaidPartyPassword @ 14be4fa20

void __thiscall
UDS_VM_Dungeon_RaidPartyJoinPopup::SetRaidPartyPassword
          (UDS_VM_Dungeon_RaidPartyJoinPopup *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyPassword.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyPassword.FieldName;
  bVar5 = FText::IdenticalTo(&this->RaidPartyPassword,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->RaidPartyPassword).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RaidPartyPassword).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RaidPartyPassword).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

