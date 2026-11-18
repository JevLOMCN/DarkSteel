// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 61

// SetClickMountRepair_WrapperImpl @ 14b71a4c0

void __cdecl UDS_VM_W_B_MountsMain::SetClickMountRepair_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  TStack_28._0_8_ = 0;
  TStack_28._8_8_ = 0;
  TStack_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x5575e,Alert_None_01,&TStack_28);
  return;
}

// SetClickMountRegister_WrapperImpl @ 14b71a4d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_B_MountsMain::SetClickMountRegister_WrapperImpl(void *param_1,void *param_2)

{
  OpenCommonSystemPopup(param_1,Register);
  return;
}

// SetClickMountUnregister_WrapperImpl @ 14b71a4e0

void __cdecl UDS_VM_W_B_MountsMain::SetClickMountUnregister_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr aFStackX_8 [2];
  long64 alStackX_18 [2];
  
  if (*(ulong64 *)((longlong)param_1 + 0x2c0) != 0) {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid(aFStackX_8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(aFStackX_8);
      alStackX_18[0] = 0;
      FDS_MountService::RequestMountChangeCompanion
                ((ulong64 *)((longlong)param_1 + 0x2c0),alStackX_18,*(int *)&pUVar2[9].field_0x10);
    }
  }
  return;
}

// SetClickMountLeave_WrapperImpl @ 14b71a4f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_B_MountsMain::SetClickMountLeave_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(char *)((longlong)param_2 + 3) != '\0') {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x5575f,Alert_None_01,&TStack_28);
    return;
  }
  OpenCommonSystemPopup(param_1,Leave);
  return;
}

// SetClickBagBtn_WrapperImpl @ 14b71a500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_B_MountsMain::SetClickBagBtn_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  UpdateInventoryBag(param_1);
  *(undefined4 *)((longlong)param_1 + 0x298) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickMountStateBtn_WrapperImpl @ 14b71a510

void __cdecl UDS_VM_W_B_MountsMain::SetClickMountStateBtn_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x298) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickDropDownOrderTypeBtn_WrapperImpl @ 14b71a520

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_MountsMain::SetClickDropDownOrderTypeBtn_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MountDropDownSwitcher.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MountDropDownSwitcher.FieldName;
  uVar3 = (uint)(*(uint *)((longlong)param_1 + 0x294) == 0);
  if (*(uint *)((longlong)param_1 + 0x294) != uVar3) {
    *(uint *)((longlong)param_1 + 0x294) = uVar3;
    iStack_10 = iVar2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  UpdateMountList(param_1);
  return;
}

// SetClickExtendedButtonClick_WrapperImpl @ 14b71a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_MountsMain::SetClickExtendedButtonClick_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_MountDataSet *this;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr FStack_168;
  TArray<FDS_MountRegisterListTableRow_const_*,TSizedDefaultAllocator<32>_> TStack_160;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&FStack_168);
  bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&FStack_168,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_138.Ptr,0xed,L"mountDataSet is nullptr.");
    TStack_160.AllocatorInstance.Data = (FScriptContainerElement *)TStack_138._padding_;
    goto LAB_14bfb9dfa;
  }
  FDS_MountRegisterListTableRow::GetAll(&TStack_160);
  if (TStack_160.ArrayNum == 0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfb9dfa;
    pUVar5 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    pwVar7 = L"mountRegisterListTableRowArray is Empty.";
    uVar6 = 0xf4;
  }
  else if (TStack_160.ArrayNum < 1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfb9dfa;
    pUVar5 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    pwVar7 = L"mountRegisterListTableRowArray IsValidIndex(0) == false.";
    uVar6 = 0xfa;
  }
  else {
    lVar2 = *(longlong *)TStack_160.AllocatorInstance.Data;
    if (lVar2 != 0) {
      this = (UDS_MountDataSet *)FWeakObjectPtr::Get(&FStack_168);
      iVar1 = *(int *)(lVar2 + 0x14);
      iVar4 = UDS_MountDataSet::GetTotalSlotCount(this);
      if (iVar4 < iVar1) {
        OpenCommonSystemPopup(param_1,ItemExpansion);
      }
      else {
        TStack_150._0_8_ = 0;
        TStack_150._8_8_ = 0;
        TStack_150._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x55731,Alert_None_01,&TStack_150);
      }
      goto LAB_14bfb9dfa;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfb9dfa;
    pUVar5 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    pwVar7 = L"moneyBaseTable is nullptr.";
    uVar6 = 0x101;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_138.Ptr,uVar6,pwVar7);
  if ((FScriptContainerElement *)TStack_138._padding_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
LAB_14bfb9dfa:
  if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_160.AllocatorInstance.Data);
  }
  return;
}

// StaticClass @ 14b71a540

UClass * __cdecl UDS_VM_W_B_MountsMain::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_MountsMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_MountsMain",
               &Z_Registration_Info_UClass_UDS_VM_W_B_MountsMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_MountsMain,0x2f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_MountsMain>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_MountsMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_MountsMain.InnerSingleton;
}

// UDS_VM_W_B_MountsMain @ 14b71de80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_B_MountsMain * __thiscall
UDS_VM_W_B_MountsMain::UDS_VM_W_B_MountsMain(UDS_VM_W_B_MountsMain *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->RightUIVisibilty = Collapsed;
  this->IsDisableLeaveBTN = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_MountsMain__6B_;
  (this->MountListEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountListEntry).UserObjectList.ArrayNum = 0;
  (this->MountListEntry).UserObjectList.ArrayMax = 0;
  (this->ClickMountRepair)._padding_ = '\0';
  (this->ClickMountRepair).bIsCustomSelected = false;
  (this->ClickMountRepair).bIsLacked = false;
  (this->ClickMountRepair).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountRepair).Delegate = 0;
  *(undefined8 *)&(this->ClickMountRepair).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountRepair).Delegate.field_0x10 = 0;
  (this->ClickMountRegister)._padding_ = '\0';
  (this->ClickMountRegister).bIsCustomSelected = false;
  (this->ClickMountRegister).bIsLacked = false;
  (this->ClickMountRegister).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountRegister).Delegate = 0;
  *(undefined8 *)&(this->ClickMountRegister).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountRegister).Delegate.field_0x10 = 0;
  (this->ClickMountUnregister)._padding_ = '\0';
  (this->ClickMountUnregister).bIsCustomSelected = false;
  (this->ClickMountUnregister).bIsLacked = false;
  (this->ClickMountUnregister).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountUnregister).Delegate = 0;
  *(undefined8 *)&(this->ClickMountUnregister).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountUnregister).Delegate.field_0x10 = 0;
  (this->ClickMountLeave)._padding_ = '\0';
  (this->ClickMountLeave).bIsCustomSelected = false;
  (this->ClickMountLeave).bIsLacked = false;
  (this->ClickMountLeave).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountLeave).Delegate = 0;
  *(undefined8 *)&(this->ClickMountLeave).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountLeave).Delegate.field_0x10 = 0;
  (this->ClickBagBtn)._padding_ = '\0';
  (this->ClickBagBtn).bIsCustomSelected = false;
  (this->ClickBagBtn).bIsLacked = false;
  (this->ClickBagBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBagBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickBagBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBagBtn).Delegate.field_0x10 = 0;
  (this->ClickMountStateBtn)._padding_ = '\0';
  (this->ClickMountStateBtn).bIsCustomSelected = false;
  (this->ClickMountStateBtn).bIsLacked = false;
  (this->ClickMountStateBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountStateBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickMountStateBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountStateBtn).Delegate.field_0x10 = 0;
  (this->ClickDropDownOrderTypeBtn)._padding_ = '\0';
  (this->ClickDropDownOrderTypeBtn).bIsCustomSelected = false;
  (this->ClickDropDownOrderTypeBtn).bIsLacked = false;
  (this->ClickDropDownOrderTypeBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickDropDownOrderTypeBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickDropDownOrderTypeBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickDropDownOrderTypeBtn).Delegate.field_0x10 = 0;
  (this->ClickExtendedButtonClick)._padding_ = '\0';
  (this->ClickExtendedButtonClick).bIsCustomSelected = false;
  (this->ClickExtendedButtonClick).bIsLacked = false;
  (this->ClickExtendedButtonClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExtendedButtonClick).Delegate = 0;
  *(undefined8 *)&(this->ClickExtendedButtonClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExtendedButtonClick).Delegate.field_0x10 = 0;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->VM_Mount_Status).field0_0x0.DebugPtr = (UDS_VM_W_Mount_Status *)0x0;
  (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = (UDS_VM_ViewportInteractionButton *)0x0
  ;
  (this->VM_InventoryBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  (this->InventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->VM_MountCategoryList).field0_0x0.DebugPtr = (UDS_VM_MountCategoryList *)0x0;
  (this->VM_MountListDropDownBox).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->VM_MountEquipItemList).field0_0x0.DebugPtr = (UDS_VM_MountEquipItemList *)0x0;
  (this->MountListEmptyText).StringTableType = None;
  (this->MountListEmptyText).StringTableID = 0;
  (this->MountListEmptyText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountListEmptyText).StringEnumTableNameID.Number = 0;
  (this->MountListEmptyText).DateTime.Ticks = 0;
  (this->MountListEmptyText).TimeSpan.Ticks = 0;
  (this->MountListEmptyText).TimeExpressionType = None;
  (this->MountListEmptyText).IsExpression = false;
  (this->MountListEmptyText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountListEmptyText).UniqueString.Data.ArrayNum = 0;
  (this->MountListEmptyText).UniqueString.Data.ArrayMax = 0;
  (this->MountListEmptyText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountListEmptyText).FormatArgs.ArrayNum = 0;
  (this->MountListEmptyText).FormatArgs.ArrayMax = 0;
  (this->ExtendedText).StringTableType = None;
  (this->ExtendedText).StringTableID = 0;
  (this->ExtendedText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExtendedText).StringEnumTableNameID.Number = 0;
  (this->ExtendedText).DateTime.Ticks = 0;
  (this->ExtendedText).TimeSpan.Ticks = 0;
  (this->ExtendedText).TimeExpressionType = None;
  (this->ExtendedText).IsExpression = false;
  (this->ExtendedText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtendedText).UniqueString.Data.ArrayNum = 0;
  (this->ExtendedText).UniqueString.Data.ArrayMax = 0;
  (this->ExtendedText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtendedText).FormatArgs.ArrayNum = 0;
  (this->ExtendedText).FormatArgs.ArrayMax = 0;
  this->CategoryListSwitcher = 0;
  this->MountDropDownSwitcher = 0;
  this->BagSwitcherIndex = 0;
  this->RegisterBtnSwitcherIndex = 0;
  *(undefined8 *)&this->OnEventMountItemSlotDelegate = 0;
  *(undefined8 *)&(this->OnEventMountItemSlotDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventMountItemSlotDelegate).field_0x10 = 0;
  this->TargetEntityID = 0;
  this->CurMountUID = 0;
  this->ChangeNameMountUID = 0;
  this->SelectedCategoryType = 0;
  this->CurMountListOrderType = None;
  (this->MountListDropDownSortList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountListDropDownSortList).ArrayNum = 0;
  (this->MountListDropDownSortList).ArrayMax = 0;
  this->IsFirstSetViewModel = false;
  this->IsCoolTimeRegister = false;
  this->IsCoolTimeUnRegister = false;
  return this;
}

// UDS_VM_W_B_MountsMain @ 14b71e0d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_B_MountsMain * __thiscall
UDS_VM_W_B_MountsMain::UDS_VM_W_B_MountsMain
          (UDS_VM_W_B_MountsMain *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->RightUIVisibilty = Collapsed;
  this->IsDisableLeaveBTN = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_MountsMain__6B_;
  (this->MountListEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountListEntry).UserObjectList.ArrayNum = 0;
  (this->MountListEntry).UserObjectList.ArrayMax = 0;
  (this->ClickMountRepair)._padding_ = '\0';
  (this->ClickMountRepair).bIsCustomSelected = false;
  (this->ClickMountRepair).bIsLacked = false;
  (this->ClickMountRepair).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountRepair).Delegate = 0;
  *(undefined8 *)&(this->ClickMountRepair).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountRepair).Delegate.field_0x10 = 0;
  (this->ClickMountRegister)._padding_ = '\0';
  (this->ClickMountRegister).bIsCustomSelected = false;
  (this->ClickMountRegister).bIsLacked = false;
  (this->ClickMountRegister).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountRegister).Delegate = 0;
  *(undefined8 *)&(this->ClickMountRegister).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountRegister).Delegate.field_0x10 = 0;
  (this->ClickMountUnregister)._padding_ = '\0';
  (this->ClickMountUnregister).bIsCustomSelected = false;
  (this->ClickMountUnregister).bIsLacked = false;
  (this->ClickMountUnregister).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountUnregister).Delegate = 0;
  *(undefined8 *)&(this->ClickMountUnregister).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountUnregister).Delegate.field_0x10 = 0;
  (this->ClickMountLeave)._padding_ = '\0';
  (this->ClickMountLeave).bIsCustomSelected = false;
  (this->ClickMountLeave).bIsLacked = false;
  (this->ClickMountLeave).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountLeave).Delegate = 0;
  *(undefined8 *)&(this->ClickMountLeave).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountLeave).Delegate.field_0x10 = 0;
  (this->ClickBagBtn)._padding_ = '\0';
  (this->ClickBagBtn).bIsCustomSelected = false;
  (this->ClickBagBtn).bIsLacked = false;
  (this->ClickBagBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBagBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickBagBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBagBtn).Delegate.field_0x10 = 0;
  (this->ClickMountStateBtn)._padding_ = '\0';
  (this->ClickMountStateBtn).bIsCustomSelected = false;
  (this->ClickMountStateBtn).bIsLacked = false;
  (this->ClickMountStateBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountStateBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickMountStateBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountStateBtn).Delegate.field_0x10 = 0;
  (this->ClickDropDownOrderTypeBtn)._padding_ = '\0';
  (this->ClickDropDownOrderTypeBtn).bIsCustomSelected = false;
  (this->ClickDropDownOrderTypeBtn).bIsLacked = false;
  (this->ClickDropDownOrderTypeBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickDropDownOrderTypeBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickDropDownOrderTypeBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickDropDownOrderTypeBtn).Delegate.field_0x10 = 0;
  (this->ClickExtendedButtonClick)._padding_ = '\0';
  (this->ClickExtendedButtonClick).bIsCustomSelected = false;
  (this->ClickExtendedButtonClick).bIsLacked = false;
  (this->ClickExtendedButtonClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExtendedButtonClick).Delegate = 0;
  *(undefined8 *)&(this->ClickExtendedButtonClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExtendedButtonClick).Delegate.field_0x10 = 0;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->VM_Mount_Status).field0_0x0.DebugPtr = (UDS_VM_W_Mount_Status *)0x0;
  (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = (UDS_VM_ViewportInteractionButton *)0x0
  ;
  (this->VM_InventoryBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  (this->InventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->VM_MountCategoryList).field0_0x0.DebugPtr = (UDS_VM_MountCategoryList *)0x0;
  (this->VM_MountListDropDownBox).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->VM_MountEquipItemList).field0_0x0.DebugPtr = (UDS_VM_MountEquipItemList *)0x0;
  (this->MountListEmptyText).StringTableType = None;
  (this->MountListEmptyText).StringTableID = 0;
  (this->MountListEmptyText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountListEmptyText).StringEnumTableNameID.Number = 0;
  (this->MountListEmptyText).DateTime.Ticks = 0;
  (this->MountListEmptyText).TimeSpan.Ticks = 0;
  (this->MountListEmptyText).TimeExpressionType = None;
  (this->MountListEmptyText).IsExpression = false;
  (this->MountListEmptyText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountListEmptyText).UniqueString.Data.ArrayNum = 0;
  (this->MountListEmptyText).UniqueString.Data.ArrayMax = 0;
  (this->MountListEmptyText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountListEmptyText).FormatArgs.ArrayNum = 0;
  (this->MountListEmptyText).FormatArgs.ArrayMax = 0;
  (this->ExtendedText).StringTableType = None;
  (this->ExtendedText).StringTableID = 0;
  (this->ExtendedText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExtendedText).StringEnumTableNameID.Number = 0;
  (this->ExtendedText).DateTime.Ticks = 0;
  (this->ExtendedText).TimeSpan.Ticks = 0;
  (this->ExtendedText).TimeExpressionType = None;
  (this->ExtendedText).IsExpression = false;
  (this->ExtendedText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtendedText).UniqueString.Data.ArrayNum = 0;
  (this->ExtendedText).UniqueString.Data.ArrayMax = 0;
  (this->ExtendedText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtendedText).FormatArgs.ArrayNum = 0;
  (this->ExtendedText).FormatArgs.ArrayMax = 0;
  this->CategoryListSwitcher = 0;
  this->MountDropDownSwitcher = 0;
  this->BagSwitcherIndex = 0;
  this->RegisterBtnSwitcherIndex = 0;
  *(undefined8 *)&this->OnEventMountItemSlotDelegate = 0;
  *(undefined8 *)&(this->OnEventMountItemSlotDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventMountItemSlotDelegate).field_0x10 = 0;
  this->TargetEntityID = 0;
  this->CurMountUID = 0;
  this->ChangeNameMountUID = 0;
  this->SelectedCategoryType = 0;
  this->CurMountListOrderType = None;
  (this->MountListDropDownSortList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountListDropDownSortList).ArrayNum = 0;
  (this->MountListDropDownSortList).ArrayMax = 0;
  this->IsFirstSetViewModel = false;
  this->IsCoolTimeRegister = false;
  this->IsCoolTimeUnRegister = false;
  return this;
}

// ~UDS_VM_W_B_MountsMain @ 14b71f740

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::~UDS_VM_W_B_MountsMain(UDS_VM_W_B_MountsMain *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_MountsMain__6B_;
  pFVar1 = (this->MountListDropDownSortList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEventMountItemSlotDelegate);
  pvVar2 = *(void **)&(this->OnEventMountItemSlotDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEventMountItemSlotDelegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ExtendedText).FormatArgs.AllocatorInstance.Data,
             (this->ExtendedText).FormatArgs.ArrayNum);
  pFVar1 = (this->ExtendedText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtendedText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MountListEmptyText).FormatArgs.AllocatorInstance.Data,
             (this->MountListEmptyText).FormatArgs.ArrayNum);
  pFVar1 = (this->MountListEmptyText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountListEmptyText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExtendedButtonClick).Delegate
            );
  pvVar2 = *(void **)&(this->ClickExtendedButtonClick).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExtendedButtonClick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickDropDownOrderTypeBtn).Delegate);
  pvVar2 = *(void **)&(this->ClickDropDownOrderTypeBtn).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickDropDownOrderTypeBtn).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMountStateBtn).Delegate);
  pvVar2 = *(void **)&(this->ClickMountStateBtn).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMountStateBtn).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickBagBtn).Delegate);
  pvVar2 = *(void **)&(this->ClickBagBtn).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickBagBtn).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMountLeave).Delegate);
  pvVar2 = *(void **)&(this->ClickMountLeave).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMountLeave).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMountUnregister).Delegate);
  pvVar2 = *(void **)&(this->ClickMountUnregister).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMountUnregister).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMountRegister).Delegate);
  pvVar2 = *(void **)&(this->ClickMountRegister).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMountRegister).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMountRepair).Delegate);
  pvVar2 = *(void **)&(this->ClickMountRepair).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMountRepair).Delegate);
  pFVar1 = (this->MountListEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b721170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_B_MountsMain::GetFieldNotificationDescriptor(UDS_VM_W_B_MountsMain *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_MountsMain::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b721760

UClass * __cdecl UDS_VM_W_B_MountsMain::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_MountsMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_MountsMain",
               &Z_Registration_Info_UClass_UDS_VM_W_B_MountsMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_MountsMain,0x2f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_MountsMain>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_MountsMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_MountsMain.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_MountsMain @ 14b721ba0

void __cdecl UDS_VM_W_B_MountsMain::StaticRegisterNativesUDS_VM_W_B_MountsMain(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_B_MountsMain_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnActionCooltimeEnd @ 14b722d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_MountsMain::execOnActionCooltimeEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  EDS_CoolDownType local_res20 [2];
  FWeakObjectPtr local_28 [2];
  
  local_res20[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_28[0].ObjectIndex = 0;
  local_28[0].ObjectSerialNumber = 0;
  FWeakObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnActionCooltimeEnd((UDS_VM_W_B_MountsMain *)param_1,local_res20[0],bVar2,
                      (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)local_28[0]);
  return;
}

// execOnChangedMountDataSet @ 14b722fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_MountsMain::execOnChangedMountDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedMountDataSet((UDS_VM_W_B_MountsMain *)param_1,local_res10);
  return;
}

// BindModel @ 14bf9c5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::BindModel(UDS_VM_W_B_MountsMain *this)

{
  UDS_MountEvent *pUVar1;
  UDS_TimeCoolDownManager *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [288];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  Open3DViewer(this);
  RefreshCamera(this);
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    local_168._8_4_ = 0;
    local_168._0_8_ = OnSelectedCategoryIndex;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->CurSelectedMountCategoryTypeDel,this);
    local_168._24_8_ = CONCAT44(local_168._12_4_,local_168._8_4_);
    local_168._16_8_ = local_168._0_8_;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_MountsMain>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->CurSelectedMountCategoryTypeDel,(UDS_VM_W_B_MountsMain *)local_168,
               (pmf_4c406909 *)this);
    local_168._8_4_ = 0;
    local_168._0_8_ = OnUpdateMountList;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->UpdateMountListDel,
               this);
    local_168._24_8_ = CONCAT44(local_168._12_4_,local_168._8_4_);
    local_168._16_8_ = local_168._0_8_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_MountsMain>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->UpdateMountListDel,(UDS_VM_W_B_MountsMain *)local_168,(pmf_a827f011 *)this);
    local_168._8_4_ = 0;
    local_168._0_8_ = OnUpdateMountExtendedText;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->UpdateMountExtendedTextDel,this);
    local_168._24_8_ = CONCAT44(local_168._12_4_,local_168._8_4_);
    local_168._16_8_ = local_168._0_8_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_MountsMain>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->UpdateMountExtendedTextDel,(UDS_VM_W_B_MountsMain *)local_168,
               (pmf_a827f011 *)this);
    local_168._8_4_ = 0;
    local_168._0_8_ = OnChangeNameMountUID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->CurChangeNameMountUIDDel,this);
    local_168._24_8_ = CONCAT44(local_168._12_4_,local_168._8_4_);
    local_168._16_8_ = local_168._0_8_;
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_MountsMain>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                *)&pUVar1->CurChangeNameMountUIDDel,(UDS_VM_W_B_MountsMain *)local_168,
               (pmf_e1e4400b *)this);
    local_168._8_4_ = 0;
    local_168._0_8_ = OnEquipSlotSelectEvent;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnEquipSlotSelectDelegate,this);
    local_168._24_8_ = CONCAT44(local_168._12_4_,local_168._8_4_);
    local_168._16_8_ = local_168._0_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_B_MountsMain>
              (&pUVar1->OnEquipSlotSelectDelegate,(UDS_VM_W_B_MountsMain *)local_168,
               (pmf_1408fb89 *)this);
  }
  pUVar2 = UDS_TimeCoolDownManager::GetInst();
  if (pUVar2 == (UDS_TimeCoolDownManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x20),
                 "UDS_VM_W_B_MountsMain::BindModel",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_40,0x8d,L"timeCoolDownManager is nullptr.");
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTimeCoolDownEvent,this);
    local_168._8_4_ = 0;
    local_168._0_8_ = OnActionCooltimeEnd;
    local_168._24_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
    local_168._16_8_ = OnActionCooltimeEnd;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_B_MountsMain>
              (&pUVar2->OnChangedTimeCoolDownEvent,(UDS_VM_W_B_MountsMain *)local_168,
               (pmf_f5837e78 *)this);
  }
  return;
}

// Close3DViewer @ 14bf9e410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::Close3DViewer(UDS_VM_W_B_MountsMain *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ViewerManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 == (UDS_ViewerManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_MountsMain::Close3DViewer",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x155,L"viewerManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6602883945488973482>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                       ,0x156,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UDS_ViewerManager::CloseViewerScene(this_00);
  }
  return;
}

// Init @ 14bfadd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::Init(UDS_VM_W_B_MountsMain *this)

{
  FDS_EventDelegate<__int64_const_> *this_00;
  FName FVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_MountEvent *pUVar5;
  UDS_LogManager *pUVar6;
  UDS_MountDataSet *this_01;
  UObject *pUVar7;
  void *pvVar8;
  ESlateVisibility EVar9;
  uint uVar10;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [32];
  longlong local_168;
  FName local_158;
  longlong lStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar5 = UDS_MountEvent::GetEvent();
  if (pUVar5 != (UDS_MountEvent *)0x0) {
    this_00 = &pUVar5->MountDataSlotSelectedChangeDel;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    local_188._8_4_ = 0;
    local_188._0_8_ = OnSetCurMountUID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    lStack_150 = CONCAT44(local_188._12_4_,local_188._8_4_);
    local_158.ComparisonIndex.Value = local_188._0_4_;
    local_158.Number = local_188._4_4_;
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_MountsMain>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               this_00,(UDS_VM_W_B_MountsMain *)local_188,(pmf_dc092ea4 *)this);
  }
  if (this->TargetEntityID == 0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_B_MountsMain::Init",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x118,L"TargetEntityID is 0.");
    pvVar8 = (void *)local_148._padding_;
  }
  else {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)(local_188 + 0x10));
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_188 + 0x10));
    if (bVar4) {
      local_188._24_8_ = (void *)0x0;
      local_168 = 0;
      this_01 = (UDS_MountDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_188 + 0x10));
      UDS_MountDataSet::GetMountDataList
                (this_01,(TArray<TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                          *)(local_188 + 0x18));
      bVar4 = (int)local_168 < 1;
      EVar9 = Collapsed;
      this->SelectedCategoryType = 1;
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_188 + 0x10));
      SetCurMountUID(this,*(long64 *)&pUVar7[4].field_0x20);
      iVar3 = FFieldNotificationClassDescriptor::CategoryListSwitcher.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName;
      uVar10 = (uint)bVar4;
      if (this->CategoryListSwitcher != uVar10) {
        this->CategoryListSwitcher = uVar10;
        FVar2 = FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName;
        local_188._8_4_ = iVar3;
        FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName.ComparisonIndex =
             FVar1.ComparisonIndex.Value;
        FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName.Number = FVar1.Number;
        local_188._0_4_ =
             FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName.ComparisonIndex.Value
        ;
        local_188._4_4_ = FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName.Number;
        FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_188);
      }
      iVar3 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
      if (uVar10 == 0) {
        EVar9 = SelfHitTestInvisible;
      }
      pvVar8 = (void *)local_188._24_8_;
      if (this->RightUIVisibilty != EVar9) {
        this->RightUIVisibilty = EVar9;
        FVar2 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
        local_188._8_4_ = iVar3;
        FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName.ComparisonIndex =
             FVar1.ComparisonIndex.Value;
        FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName.Number = FVar1.Number;
        local_188._0_4_ =
             FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName.ComparisonIndex.Value;
        local_188._4_4_ = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName.Number;
        FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_188);
        pvVar8 = (void *)local_188._24_8_;
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_B_MountsMain::Init",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x11f,L"mountDataSet is nullptr.");
      pvVar8 = (void *)local_148._padding_;
    }
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  return;
}

// InitViewModel @ 14bfafb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::InitViewModel(UDS_VM_W_B_MountsMain *this)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_VM_ViewportInteractionButton *this_00;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_W_Mount_Status *pUVar8;
  UDS_VM_W_InventoryBag *pUVar9;
  UDS_VM_PlayerData *pUVar10;
  UDS_VM_MountCategoryList *pUVar11;
  UDS_VM_Dropdown *pUVar12;
  UDS_VM_MountEquipItemList *pUVar13;
  UObject *pUVar14;
  char *pcVar15;
  char *pcVar16;
  UObject *this_01;
  UFunction *pUVar17;
  UDS_DataSetBase *pUVar18;
  UDS_VM_W_B_MountsMain *pUVar19;
  UScriptStruct *pUVar20;
  UDS_ViewModelContextManager *this_02;
  longlong *plVar21;
  UDS_VM_W_B_MountsMain *pUVar22;
  UDS_VM_W_B_MountsMain *pUVar23;
  char *pcVar24;
  undefined1 auStackY_378 [32];
  <lambda_1> local_348 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_340;
  FWeakObjectPtr local_338;
  FName local_330;
  EDS_ViewportInteractionActionType local_328 [2];
  FWeakObjectPtr local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  FName local_2f8;
  FName local_2f0;
  UDS_VM_W_B_MountsMain *local_2e8;
  FName *local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_2a8;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  FDestructionSentinel local_288;
  FReadAccessScope local_270;
  FReadAccessScope local_258;
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  iVar4 = FFieldNotificationClassDescriptor::MountDropDownSwitcher.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::MountDropDownSwitcher.FieldName;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pUVar22 = (UDS_VM_W_B_MountsMain *)0x0;
  if (this->MountDropDownSwitcher != 0) {
    this->MountDropDownSwitcher = 0;
    local_2d0 = iVar4;
    local_2d8 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
  }
  pcVar24 = &DAT_00000002;
  if ((this->VM_ViewportInteractionButton).field0_0x0.DebugPtr ==
      (UDS_VM_ViewportInteractionButton *)0x0) {
    this_00 = UDS_ViewModelBase::CreateViewModel<UDS_VM_ViewportInteractionButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_VM_ViewportInteractionButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = this_00;
    local_328[0] = MountManagement;
    UDS_VM_ViewportInteractionButton::SetActionType(this_00,local_328);
  }
  if ((this->VM_Mount_Status).field0_0x0.DebugPtr == (UDS_VM_W_Mount_Status *)0x0) {
    local_318 = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_W_Mount_Status_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_W_Mount_Status_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_238,pUVar6);
    local_238._48_8_ = (FObjectInstancingGraph *)0x0;
    local_238._56_8_ = (UPackage *)0x0;
    local_238._16_4_ = 0;
    local_238._20_4_ = 0;
    local_238._24_4_ = RF_Transient;
    local_238._40_8_ = (UObject *)0x0;
    local_238[0x20] = false;
    local_238._8_8_ = this;
    pUVar8 = (UDS_VM_W_Mount_Status *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
    if (local_238._64_8_ != 0) {
      plVar21 = (longlong *)(local_238 + 0x50);
      if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_238._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (pUVar8 != (UDS_VM_W_Mount_Status *)0x0) {
      *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_W_Mount_Status *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_Mount_Status).field0_0x0.DebugPtr = pUVar8;
  }
  if ((this->VM_InventoryBag).field0_0x0.DebugPtr == (UDS_VM_W_InventoryBag *)0x0) {
    local_310 = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_W_InventoryBag_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_W_InventoryBag_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar6);
    local_1b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1b8._56_8_ = (UPackage *)0x0;
    local_1b8._16_4_ = 0;
    local_1b8._20_4_ = 0;
    local_1b8._24_4_ = RF_Transient;
    local_1b8._40_8_ = (UObject *)0x0;
    local_1b8[0x20] = false;
    local_1b8._8_8_ = this;
    pUVar9 = (UDS_VM_W_InventoryBag *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ != 0) {
      plVar21 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (pUVar9 != (UDS_VM_W_InventoryBag *)0x0) {
      *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_W_InventoryBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_InventoryBag).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->VM_PlayerData).field0_0x0.DebugPtr == (UDS_VM_PlayerData *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_PlayerData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_PlayerData).field0_0x0.DebugPtr = pUVar10;
  }
  if ((this->VM_MountCategoryList).field0_0x0.DebugPtr == (UDS_VM_MountCategoryList *)0x0) {
    local_308 = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_MountCategoryList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_MountCategoryList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar6);
    local_138._48_8_ = (FObjectInstancingGraph *)0x0;
    local_138._56_8_ = (UPackage *)0x0;
    local_138._16_4_ = 0;
    local_138._20_4_ = 0;
    local_138._24_4_ = RF_Transient;
    local_138._40_8_ = (UObject *)0x0;
    local_138[0x20] = false;
    local_138._8_8_ = this;
    pUVar11 = (UDS_VM_MountCategoryList *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar21 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (pUVar11 != (UDS_VM_MountCategoryList *)0x0) {
      *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UDS_VM_MountCategoryList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->VM_MountCategoryList).field0_0x0.DebugPtr = pUVar11;
  }
  if ((this->VM_MountListDropDownBox).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
    pUVar12 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UDS_VM_Dropdown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->VM_MountListDropDownBox).field0_0x0.DebugPtr = pUVar12;
  }
  if ((this->VM_MountEquipItemList).field0_0x0.DebugPtr == (UDS_VM_MountEquipItemList *)0x0) {
    local_300 = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_MountEquipItemList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_MountEquipItemList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar13 = (UDS_VM_MountEquipItemList *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar21 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (pUVar13 != (UDS_VM_MountEquipItemList *)0x0) {
      *(undefined1 *)((longlong)&pUVar13->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UDS_VM_MountEquipItemList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->VM_MountEquipItemList).field0_0x0.DebugPtr = pUVar13;
  }
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_320);
  pUVar14 = FWeakObjectPtr::Get(&local_320);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar14 + 1),(UObject *)this);
  pUVar14 = FWeakObjectPtr::Get(&local_320);
  pcVar15 = strstr("&UDS_VM_W_B_MountsMain::OnChangedMountDataSet","::");
  if (pcVar15 == (char *)0x0) {
LAB_14bfb004c:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar16 = pcVar15;
      pcVar15 = strstr(pcVar16 + 1,"::");
    } while (pcVar15 != (char *)0x0);
    if ((pcVar16 == (char *)0x0) || (pcVar24 = pcVar16 + 2, pcVar16[2] == '0')) goto LAB_14bfb004c;
  }
  ::FName::FName(&local_2f0,pcVar24);
  local_340.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2e8 = this;
  if (this == (UDS_VM_W_B_MountsMain *)0x0) {
    local_2e8 = pUVar22;
  }
  local_338.ObjectIndex = 0;
  local_338.ObjectSerialNumber = 0;
  local_330.ComparisonIndex.Value = 0;
  local_330.Number = 0;
  local_2f8 = local_2f0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2e8 != (UDS_VM_W_B_MountsMain *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2e8);
  }
  FWeakObjectPtr::operator=(&local_338,(FObjectPtr)&local_2e8);
  local_330 = local_2f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_340,&local_270);
  if ((local_330 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_338), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_270);
LAB_14bfb0122:
    local_2e0 = &local_2f8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_BindDynamic<UDS_VM_W_B_MountsMain>'::__l2::<lambda_1>::operator()(&local_2e0);
  }
  else {
    pUVar17 = UObject::FindFunction(this_01,local_330);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_270);
    if (pUVar17 == (UFunction *)0x0) goto LAB_14bfb0122;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_340,&local_258);
  local_2a8.Object = local_338;
  local_2a8.FunctionName = local_330;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_258);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar14 + 1),
             (FWriteAccessScope *)&local_288);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar14[1].field_0x8,local_348,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar14 + 1),&local_2a8);
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_340.AccessDetector);
  pUVar18 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_320);
  OnChangedMountDataSet(this,pUVar18);
  if ((this->VM_PlayerData).field0_0x0.DebugPtr == (UDS_VM_PlayerData *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_PlayerData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_PlayerData).field0_0x0.DebugPtr = pUVar10;
    if (pUVar10 == (UDS_VM_PlayerData *)0x0) goto LAB_14bfb0304;
  }
  pUVar19 = ::operator_new(0x28);
  pUVar23 = pUVar22;
  if (pUVar19 != (UDS_VM_W_B_MountsMain *)0x0) {
    pUVar19->_padding_ = 0;
    pUVar19->_padding_ = 0;
    pUVar19->_padding_ = 0;
    pUVar19->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerData__6B_;
    pUVar19->_padding_ = 0;
    pUVar23 = pUVar19;
  }
  pUVar19 = ::operator_new(0x20);
  if (pUVar19 != (UDS_VM_W_B_MountsMain *)0x0) {
    *(undefined4 *)&pUVar19->_padding_ = 1;
    pUVar19->_padding_ = (longlong)ViewModelContextDeleter;
    pUVar19->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pUVar19->_padding_ + 4) = 1;
    pUVar19->_padding_ = (longlong)pUVar23;
    pUVar22 = pUVar19;
  }
  if ((pUVar23 == (UDS_VM_W_B_MountsMain *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar20 = FDS_ViewModelContext_PlayerData::StaticStruct();
  pUVar23->_padding_ = (longlong)pUVar20;
  this_02 = UDS_ViewModelContextManager::GetInst();
  if (this_02 != (UDS_ViewModelContextManager *)0x0) {
    if (pUVar22 != (UDS_VM_W_B_MountsMain *)0x0) {
      LOCK();
      *(int *)&pUVar22->_padding_ = (int)pUVar22->_padding_ + 1;
      UNLOCK();
    }
    local_2b8.Object = (FDS_ViewModelContext *)pUVar23;
    local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar22;
    UDS_ViewModelContextManager::RegisterContext(this_02,&local_2b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b8.SharedReferenceCount.ReferenceController);
  }
  *(undefined4 *)&pUVar23->_padding_ = 0xb;
  pUVar23->_padding_ = UDS_PlayerData::MainPlayerEntityID;
  pUVar10 = (this->VM_PlayerData).field0_0x0.DebugPtr;
  if (pUVar22 != (UDS_VM_W_B_MountsMain *)0x0) {
    LOCK();
    *(int *)&pUVar22->_padding_ = (int)pUVar22->_padding_ + 1;
    UNLOCK();
  }
  local_298.Object = (FDS_ViewModelContext *)pUVar23;
  local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar22;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_298);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar22);
LAB_14bfb0304:
  UpdateInventoryBag(this);
  (this->MountListEmptyText).StringTableType = StringUi;
  (this->MountListEmptyText).StringTableID = 0x5575c;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MountListEmptyText).FormatArgs.AllocatorInstance.Data,
             (this->MountListEmptyText).FormatArgs.ArrayNum);
  piVar1 = &(this->MountListEmptyText).FormatArgs.ArrayMax;
  (this->MountListEmptyText).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->MountListEmptyText).FormatArgs.AllocatorInstance,0,piVar1);
  }
  local_2c0 = FFieldNotificationClassDescriptor::MountListEmptyText.BitNumber;
  local_2c8 = FFieldNotificationClassDescriptor::MountListEmptyText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
  return;
}

// OnActionCooltimeEnd @ 14bfb3f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnActionCooltimeEnd
          (UDS_VM_W_B_MountsMain *this,EDS_CoolDownType param_1,bool param_2,
          TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr> param_3)

{
  if (!param_2) {
    if (param_1 == ChangeMountRegisterCoolTime) {
      this->IsCoolTimeRegister = false;
    }
    else if (param_1 == ChangeMountReleaseCoolTime) {
      this->IsCoolTimeUnRegister = false;
      return;
    }
  }
  return;
}

// OnChangeNameMountUID @ 14bfb4d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnChangeNameMountUID(UDS_VM_W_B_MountsMain *this,ulong64 param_1)

{
  this->ChangeNameMountUID = param_1;
  return;
}

// OnChangedMountDataSet @ 14bfb6a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnChangedMountDataSet(UDS_VM_W_B_MountsMain *this,UDS_DataSetBase *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_148;
  UDS_DataSetBase *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (UDS_DataSetBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_MountsMain::OnChangedMountDataSet",0x2c,Yes);
    pwVar6 = L"InDataSetBase is nullptr.";
    uVar5 = 0x16e;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_MountDataSet_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      param_1 = (UDS_DataSetBase *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataSetBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_140 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataSetBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
    bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (!bVar2) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_MountsMain::OnChangedMountDataSet",0x2c,Yes);
    pwVar6 = L"mountDataSet is nullptr.";
    uVar5 = 0x175;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnClickBagBtn @ 14bfb8750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickBagBtn(UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  UpdateInventoryBag(this);
  this->BagSwitcherIndex = 1;
  local_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickDropDownOrderType @ 14bfb96c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickDropDownOrderType
          (UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MountDropDownSwitcher.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MountDropDownSwitcher.FieldName;
  uVar3 = (uint)(this->MountDropDownSwitcher == 0);
  if (this->MountDropDownSwitcher != uVar3) {
    this->MountDropDownSwitcher = uVar3;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  UpdateMountList(this);
  return;
}

// OnClickExtendedButtonClick @ 14bfb9bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick
          (UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_MountDataSet *this_00;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_168;
  TArray<FDS_MountRegisterListTableRow_const_*,TSizedDefaultAllocator<32>_> local_160;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_168);
  bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0xed,L"mountDataSet is nullptr.");
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
    goto LAB_14bfb9dfa;
  }
  FDS_MountRegisterListTableRow::GetAll(&local_160);
  if (local_160.ArrayNum == 0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfb9dfa;
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    pwVar7 = L"mountRegisterListTableRowArray is Empty.";
    uVar6 = 0xf4;
  }
  else if (local_160.ArrayNum < 1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfb9dfa;
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    pwVar7 = L"mountRegisterListTableRowArray IsValidIndex(0) == false.";
    uVar6 = 0xfa;
  }
  else {
    lVar2 = *(longlong *)local_160.AllocatorInstance.Data;
    if (lVar2 != 0) {
      this_00 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_168);
      iVar1 = *(int *)(lVar2 + 0x14);
      iVar4 = UDS_MountDataSet::GetTotalSlotCount(this_00);
      if (iVar4 < iVar1) {
        OpenCommonSystemPopup(this,ItemExpansion);
      }
      else {
        local_150._0_8_ = 0;
        local_150._8_8_ = 0;
        local_150._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x55731,Alert_None_01,&local_150);
      }
      goto LAB_14bfb9dfa;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfb9dfa;
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_MountsMain::OnClickExtendedButtonClick",0x31,Yes);
    pwVar7 = L"moneyBaseTable is nullptr.";
    uVar6 = 0x101;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((FScriptContainerElement *)local_138._padding_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bfb9dfa:
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// OnClickMountLeave @ 14bfba0c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickMountLeave(UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (param_1->bIsCustomDisabled != false) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x5575f,Alert_None_01,&local_28);
    return;
  }
  OpenCommonSystemPopup(this,Leave);
  return;
}

// OnClickMountRegister @ 14bfba110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickMountRegister
          (UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  OpenCommonSystemPopup(this,Register);
  return;
}

// OnClickMountRepair @ 14bfba120

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickMountRepair(UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x5575e,Alert_None_01,&local_28);
  return;
}

// OnClickMountStateBtn @ 14bfba160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickMountStateBtn
          (UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  this->BagSwitcherIndex = 0;
  local_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickMountUnregister @ 14bfba1a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnClickMountUnregister
          (UDS_VM_W_B_MountsMain *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  long64 local_res18 [2];
  
  if (this->TargetEntityID != 0) {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      local_res18[0] = 0;
      FDS_MountService::RequestMountChangeCompanion
                (&this->TargetEntityID,local_res18,*(int *)&pUVar2[9].field_0x10);
    }
  }
  return;
}

// OnCloseSystemPopup @ 14bfbbff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnCloseSystemPopup
          (UDS_VM_W_B_MountsMain *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  return;
}

// OnEquipSlotSelectEvent @ 14bfbc640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnEquipSlotSelectEvent(UDS_VM_W_B_MountsMain *this,EDS_EquipSlotType param_1)

{
  UDS_M_InventoryBag *pUVar1;
  code *pcVar2;
  bool bVar3;
  FDS_SlotBaseTableRow *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  FName local_18;
  int local_10;
  
  UpdateInventoryBag(this);
  this_00 = FDS_SlotBaseTableRow::GetRef((longlong)(int)param_1,true);
  bVar3 = FDS_SlotBaseTableRow::IsValid(this_00);
  if ((bVar3) &&
     (pUVar1 = (this->InventoryBagModel).field0_0x0.DebugPtr, pUVar1 != (UDS_M_InventoryBag *)0x0))
  {
    UDS_M_InventoryBag::OnClickedTab(pUVar1,this_00->ClickLinkedBag);
    pUVar1 = (this->InventoryBagModel).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e0);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (*pcVar2)(pUVar1,local_res8,0);
  }
  this->BagSwitcherIndex = 1;
  local_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnEventMountItemSlot @ 14bfbc710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnEventMountItemSlot
          (UDS_VM_W_B_MountsMain *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_298;
  FWeakObjectPtr local_290;
  FWeakObjectPtr local_288;
  UObject *local_280;
  UObject *local_278 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_VM_W_B_MountsMain::OnEventMountItemSlot",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_268.Ptr,0x17e,L"ModelEvent is Invalid.");
    if ((void *)local_268._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_268._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 == (UObject *)0x0) {
LAB_14bfbc804:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bfbc804;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_298.ObjectIndex = 0;
  local_298.ObjectSerialNumber = 0;
  local_280 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_298,(FObjectPtr)&local_280);
  bVar3 = FWeakObjectPtr::IsValid(&local_298);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_B_MountsMain::OnEventMountItemSlot",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x185,L"ModelEventItemBase is Invalid.")
    ;
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  if (this->TargetEntityID == 0) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_298);
  if ((*(int *)&pUVar5[5].field_0x8 != 7) && (*(int *)&pUVar5[5].field_0x8 != 10)) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bfbc954;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfbc954:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_290.ObjectIndex = 0;
  local_290.ObjectSerialNumber = 0;
  local_278[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_290,(FObjectPtr)local_278);
  bVar3 = FWeakObjectPtr::IsValid(&local_290);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_290);
    (**(code **)(*(longlong *)pUVar5 + 0x3a0))(pUVar5,&local_288);
    bVar3 = FWeakObjectPtr::IsValid(&local_288);
    if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&local_288), bVar3)) {
      FDS_MountService::TryEquipItemToMount
                (this->CurMountUID,this->TargetEntityID,
                 (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_288);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6602883945488973420>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                       ,0x194,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnExtendedCallBack @ 14bfbd3f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnExtendedCallBack
          (UDS_VM_W_B_MountsMain *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  FWeakObjectPtr local_18 [2];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_18);
    local_res18[0] = 1.4013e-45;
    FDS_MountService::RequestMountListSlotExtend
              (&this->TargetEntityID,(uint *)local_res18,*(int *)&pUVar2[9].field_0x10);
    this_00 = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
    }
    else {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnMountLeave @ 14bfbf3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnMountLeave
          (UDS_VM_W_B_MountsMain *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->TargetEntityID != 0) {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_148);
    bVar1 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_B_MountsMain::OnMountLeave",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1f2,L"mountDataSet is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      UDS_PlayerData::GetMainPlayerData();
      bVar1 = FWeakObjectPtr::IsValid(&local_140);
      if ((bVar1) &&
         (pUVar3 = FWeakObjectPtr::Get(&local_148),
         this->CurMountUID != *(longlong *)&pUVar3[4].field_0x20)) {
        this->IsCoolTimeUnRegister = true;
        UDS_TimeCoolDownManager::StartCoolDown(ChangeMountReleaseCoolTime,0,0.0);
        pUVar3 = FWeakObjectPtr::Get(&local_140);
        FDS_MountService::RequestMountDelete
                  (&this->TargetEntityID,&this->CurMountUID,*(int *)&pUVar3[9].field_0x10);
        UpdateMountList(this);
        OnCloseSystemPopup(this,param_1);
      }
    }
  }
  return;
}

// OnMountListDropDownChanged @ 14bfbf580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnMountListDropDownChanged(UDS_VM_W_B_MountsMain *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->MountListDropDownSortList).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->MountListDropDownSortList).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->CurMountListOrderType =
         (EDS_SortingType)(this->MountListDropDownSortList).AllocatorInstance.Data[param_1];
    UpdateMountList(this);
  }
  return;
}

// OnMountRegister @ 14bfbf620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnMountRegister
          (UDS_VM_W_B_MountsMain *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  if ((this->TargetEntityID != 0) && (this->CurMountUID != 0)) {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this->IsCoolTimeRegister = true;
      UDS_TimeCoolDownManager::StartCoolDown(ChangeMountRegisterCoolTime,0,0.0);
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      FDS_MountService::RequestMountChangeCompanion
                (&this->TargetEntityID,&this->CurMountUID,*(int *)&pUVar2[9].field_0x10);
      OnCloseSystemPopup(this,param_1);
    }
  }
  return;
}

// OnSelectedCategoryIndex @ 14bfc0ac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnSelectedCategoryIndex(UDS_VM_W_B_MountsMain *this,int param_1)

{
  this->SelectedCategoryType = param_1;
  UpdateMountList(this);
  return;
}

// OnSetCurMountUID @ 14bfc0ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::OnSetCurMountUID(UDS_VM_W_B_MountsMain *this,long64 param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  uint uVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr aFStack_158 [2];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)aFStack_158);
  bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)aFStack_158,(void *)0x0);
  if (!bVar3) {
    pUVar5 = FWeakObjectPtr::Get(aFStack_158);
    iVar2 = FFieldNotificationClassDescriptor::RegisterBtnSwitcherIndex.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::RegisterBtnSwitcherIndex.FieldName;
    uVar6 = (uint)(param_1 == *(longlong *)&pUVar5[4].field_0x20);
    if (this->RegisterBtnSwitcherIndex != uVar6) {
      this->RegisterBtnSwitcherIndex = uVar6;
      iStack_140 = iVar2;
      FStack_148 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_148);
    }
    if ((param_1 == 0) ||
       (pUVar5 = FWeakObjectPtr::Get(aFStack_158), param_1 != *(longlong *)&pUVar5[4].field_0x20)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar2 = FFieldNotificationClassDescriptor::IsDisableLeaveBTN.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::IsDisableLeaveBTN.FieldName;
    if (this->IsDisableLeaveBTN != bVar3) {
      this->IsDisableLeaveBTN = bVar3;
      iStack_140 = iVar2;
      FStack_148 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_148);
    }
    if (this->CurMountUID != param_1) {
      this->CurMountUID = param_1;
      Open3DViewer(this);
      RefreshCamera(this);
    }
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  TStack_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&TStack_138,"UDS_VM_W_B_MountsMain::SetCurMountUID",0x25,Yes);
  UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x2ac,L"mountDataSet is nullptr.");
  if ((void *)TStack_138._padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)TStack_138._padding_);
  return;
}

// OnSetViewModel @ 14bfc6af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OnSetViewModel
          (UDS_VM_W_B_MountsMain *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TSharedPtr<FDS_VMContext_MountManagement,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
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
  SafeCast<FDS_VMContext_MountManagement>(&local_158,&local_148);
  if (local_158.Object == (FDS_VMContext_MountManagement *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6602883945488973769>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                       ,0x37,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_MountsMain::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x38,L"context is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->TargetEntityID = (local_158.Object)->TargetEntityID;
    this->IsCoolTimeRegister = false;
    iVar4 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
    this->IsCoolTimeUnRegister = false;
    if (this->BagSwitcherIndex != 0) {
      this->BagSwitcherIndex = 0;
      local_160 = iVar4;
      local_168 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    SetContext(this);
    Init(this);
    UpdateMountList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateMountExtendedText @ 14bfd1ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::OnUpdateMountExtendedText(UDS_VM_W_B_MountsMain *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_MountsMain::OnUpdateMountExtendedText",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2cb,L"mountDataSet is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UpdateMountExtendedText(this,(TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)local_148[0]);
  }
  return;
}

// OnUpdateMountList @ 14bfd20f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::OnUpdateMountList(UDS_VM_W_B_MountsMain *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UDS_MountDataSet *this_00;
  UObject *pUVar8;
  FDS_MountBaseTableRow *pFVar9;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  UDS_ViewerManager *this_03;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  FDS_ViewModelContext *pFVar17;
  EDS_SortOrder EVar18;
  uint uVar19;
  FDS_ViewModelContext *pFVar20;
  undefined1 auStackY_368 [32];
  bool bStack_338;
  TArray<TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_330;
  int aiStack_320 [2];
  ulonglong uStack_318;
  longlong lStack_310;
  FWeakObjectPtr FStack_308;
  undefined8 uStack_300;
  UDS_UserObjectListItem *apUStack_2f8 [2];
  FName FStack_2e8;
  int iStack_2e0;
  FName FStack_2d8;
  int iStack_2d0;
  FName FStack_2c8;
  int iStack_2c0;
  FName FStack_2b8;
  int iStack_2b0;
  FName FStack_2a8;
  int iStack_2a0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_298;
  TSharedPtr<FDS_ViewModelContext,1> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&FStack_308);
  bVar4 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&FStack_308,(void *)0x0);
  if (bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    TStack_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_278,"UDS_VM_W_B_MountsMain::UpdateMountList",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_278.Ptr,0x308,L"mountDataSet is nullptr.");
    FVar13.Data = (FScriptContainerElement *)TStack_278._padding_;
  }
  else {
    pFVar20 = (FDS_ViewModelContext *)0x0;
    TStack_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_330.ArrayNum = 0;
    TStack_330.ArrayMax = 0;
    this_00 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&FStack_308);
    UDS_MountDataSet::GetMountDataList(this_00,&TStack_330);
    FDS_EntryBindingEventField::Reset(&this->MountListEntry);
    EVar18 = Descend;
    if (this->MountDropDownSwitcher == 0) {
      EVar18 = Ascend;
    }
    DS_Sorting<TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>_>::Sort
              (&TStack_330,this->CurMountListOrderType,EVar18);
    uVar14 = (ulonglong)TStack_330.ArrayNum;
    bStack_338 = this->ChangeNameMountUID < 1;
    if (0 < TStack_330.ArrayNum) {
      lStack_310 = 0;
      uVar15 = uVar14;
      pFVar17 = pFVar20;
      uStack_318 = uVar14;
      do {
        lVar16 = lStack_310;
        uVar19 = (uint)pFVar17;
        if ((-1 < (int)uVar19) && ((int)uVar19 < (int)uVar15)) {
          if (this->SelectedCategoryType == 1) {
LAB_14bfe450a:
            this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfe48da;
            }
            else {
              if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfe48da:
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6602883945488973011>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                                   ,0x32d,"false");
                FVar13.Data = TStack_330.AllocatorInstance.Data;
                if (bVar4) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                goto LAB_14bfe49d9;
              }
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            pFVar10 = ::operator_new(0x30);
            pFVar17 = pFVar20;
            if (pFVar10 != (FDS_ViewModelContext *)0x0) {
              *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
              *(undefined8 *)&pFVar10[1].DerivedStaticStruct = 0;
              *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
              (pFVar10->ViewModelName).ComparisonIndex = 0;
              (pFVar10->ViewModelName).Number = 0;
              pFVar10->_padding_ = (longlong)&___7FDS_VMContext_MountData__6B_;
              *(int *)&pFVar10[1]._padding_ = 0;
              *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
              uStack_300 = 0;
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar10 + 1),(FObjectPtr)&uStack_300);
              *(undefined1 *)&pFVar10[1].DerivedStaticStruct = 0;
              pFVar17 = pFVar10;
            }
            pFVar11 = ::operator_new(0x20);
            pFVar10 = pFVar20;
            if (pFVar11 != (FDS_ViewModelContext *)0x0) {
              *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
              *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
              ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
              pFVar11->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
              ;
              *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar17;
              pFVar10 = pFVar11;
            }
            if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pUVar12 = FDS_VMContext_MountData::StaticStruct();
            *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar12;
            this_02 = UDS_ViewModelContextManager::GetInst();
            if (this_02 != (UDS_ViewModelContextManager *)0x0) {
              if (pFVar10 != (FDS_ViewModelContext *)0x0) {
                LOCK();
                *(atomic<int> *)&pFVar10->DerivedStaticStruct =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
                UNLOCK();
              }
              TStack_298.Object = pFVar17;
              TStack_298.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar10;
              UDS_ViewModelContextManager::RegisterContext(this_02,&TStack_298);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_298.SharedReferenceCount.ReferenceController);
            }
            pFVar17->ViewModelTemplateKey = Data_Mount;
            uVar5 = 0;
            if ((int)uVar19 < TStack_330.ArrayNum) {
              uVar5 = ~uVar19 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar17[1]._padding_ = *(longlong *)(TStack_330.AllocatorInstance.Data + lStack_310 * 8)
            ;
            if (bStack_338 == true) {
              *(undefined1 *)&pFVar17[1].DerivedStaticStruct = 1;
              bStack_338 = false;
            }
            else {
              uVar5 = 0;
              if ((int)uVar19 < TStack_330.ArrayNum) {
                uVar5 = ~uVar19 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                           (TStack_330.AllocatorInstance.Data +
                                           (longlong)(int)uVar19 * 8));
              if (this->ChangeNameMountUID == *(longlong *)&pUVar8[2].field_0x10) {
                *(undefined1 *)&pFVar17[1].DerivedStaticStruct = 1;
                this->ChangeNameMountUID = 0;
              }
              else {
                *(bool *)&pFVar17[1].DerivedStaticStruct = bStack_338;
              }
            }
            if (pFVar10 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar10->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
              UNLOCK();
            }
            TStack_288.Object = pFVar17;
            TStack_288.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar10;
            UDS_UserObjectListItem::AddContext(this_01,&TStack_288);
            apUStack_2f8[0] = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FDS_EntryBindingEventField::Add
                      (&this->MountListEntry,(TObjectPtr<UDS_UserObjectListItem>)apUStack_2f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar10);
            lVar16 = lStack_310;
          }
          else {
            uVar5 = 0;
            if ((int)uVar19 < (int)uVar15) {
              uVar5 = ~uVar19 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                         (TStack_330.AllocatorInstance.Data +
                                         (longlong)(int)uVar19 * 8));
            pFVar9 = FDS_MountBaseTableRow::Get((longlong)*(int *)&pUVar8[2].field_0x18,true);
            if ((pFVar9 != (FDS_MountBaseTableRow *)0x0) &&
               ((uint)pFVar9->CategoryType == this->SelectedCategoryType)) goto LAB_14bfe450a;
          }
          uVar15 = TStack_330._8_8_ & 0xffffffff;
          uVar14 = uStack_318;
        }
        lStack_310 = lVar16 + 1;
        pFVar17 = (FDS_ViewModelContext *)(ulonglong)(uVar19 + 1);
      } while (lStack_310 < (longlong)uVar14);
    }
    iVar6 = FDS_EntryBindingEventField::Num(&this->MountListEntry);
    iVar3 = FFieldNotificationClassDescriptor::CategoryListSwitcher.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName;
    if (iVar6 == 0) {
      if (this->CategoryListSwitcher != 1) {
        this->CategoryListSwitcher = 1;
        iStack_2e0 = iVar3;
        FStack_2e8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))();
      }
      iVar3 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
      if (this->RightUIVisibilty != Collapsed) {
        this->RightUIVisibilty = Collapsed;
        iStack_2d0 = iVar3;
        FStack_2d8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))();
      }
      this->CurMountUID = 0;
      this_03 = UDS_ViewerManager::GetInst();
      if (this_03 == (UDS_ViewerManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          TStack_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_158,"UDS_VM_W_B_MountsMain::UpdateUIByMountListCount",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,TStack_158.Ptr,0x358,L"viewerManager is nullptr.");
          if ((void *)TStack_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_158._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6602883945488972967>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                           ,0x359,"false");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        aiStack_320[0] = 0;
        UDS_ViewerManager::SetViewerPreset(this_03,aiStack_320,0);
      }
    }
    else {
      if (this->CategoryListSwitcher != 0) {
        this->CategoryListSwitcher = 0;
        iStack_2c0 = iVar3;
        FStack_2c8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2c8);
      }
      iVar3 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
      if (this->RightUIVisibilty != SelfHitTestInvisible) {
        this->RightUIVisibilty = SelfHitTestInvisible;
        iStack_2b0 = iVar3;
        FStack_2b8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2b8);
      }
    }
    iStack_2a0 = FFieldNotificationClassDescriptor::MountListEntry.BitNumber;
    FStack_2a8 = FFieldNotificationClassDescriptor::MountListEntry.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2a8);
    UpdateMountExtendedText(this,(TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)FStack_308);
    FVar13.Data = TStack_330.AllocatorInstance.Data;
  }
LAB_14bfe49d9:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

// Open3DViewer @ 14bfd2240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::Open3DViewer(UDS_VM_W_B_MountsMain *this)

{
  UDS_ViewerSceneInfo *pUVar1;
  code *pcVar2;
  bool bVar3;
  UDS_ViewerManager *this_00;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_MountBaseTableRow *pFVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  EDS_ViewerSceneType local_150 [2];
  FWeakObjectPtr local_148;
  UDS_ViewerSceneInfo *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 == (UDS_ViewerManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_MountsMain::Open3DViewer",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x139,L"viewerManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6602883945488973510>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                       ,0x13a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar1 = (this_00->ViewerSceneInfo).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_ViewerSceneInfo *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_ViewerSceneInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_140 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_ViewerSceneInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_140);
    bVar3 = TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr> *)&local_158,(void *)0x0)
    ;
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_158);
      if (*(int *)(pUVar5 + 1) != 0) {
        pUVar5 = FWeakObjectPtr::Get(&local_158);
        if (*(int *)(pUVar5 + 1) != 5) {
          UDS_ViewerManager::CloseViewerScene(this_00);
        }
      }
    }
    local_150[0] = MountManagement;
    UDS_ViewerManager::OpenViewerScene(this_00,local_150);
    UDS_MountData::GetData
              ((ulong64)&local_148,UDS_PlayerData::MainPlayerEntityID,SUB81(this->CurMountUID,0));
    bVar3 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_148);
      pFVar6 = FDS_MountBaseTableRow::GetRef((longlong)*(int *)&pUVar5[2].field_0x18,true);
      UDS_ViewerManager::SetViewerPreset(this_00,&pFVar6->ID_OutGameResourcePreset,0);
    }
  }
  return;
}

// OpenCommonSystemPopup @ 14bfd2460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::OpenCommonSystemPopup
          (UDS_VM_W_B_MountsMain *this,EDS_MountSystemMessageType param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar5;
  FDS_MoneyBaseTableRow *pFVar6;
  UDS_DataSetBase *this_01;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_02;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_M_CommonPopup *pUVar9;
  FDS_Text *pFVar10;
  UDS_MoneyData *this_03;
  long64 lVar11;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar12;
  void *pvVar13;
  pmf_00a60bd9 *ppVar14;
  undefined1 auStackY_a38 [32];
  FWeakObjectPtr local_a08 [2];
  TArray<FDS_MountRegisterListTableRow_const_*,TSizedDefaultAllocator<32>_> local_9f8;
  FWeakObjectPtr local_9e8;
  FWeakObjectPtr local_9e0;
  FWeakObjectPtr local_9d8;
  FWeakObjectPtr local_9d0;
  UDS_GameInstance *local_9c8;
  UDS_CommonPopupManager *local_9c0;
  UObject *local_9b8 [2];
  code *local_9a8;
  undefined4 uStack_9a0;
  uint uStack_99c;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_998;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_980;
  code *local_968;
  longlong lStack_960;
  code *local_958;
  longlong lStack_950;
  code *local_948;
  longlong lStack_940;
  code *local_938;
  longlong lStack_930;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_928;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_910;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_8f8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_8e0;
  FDS_Text local_8c8;
  FDS_Text local_878;
  FDS_Text local_828;
  FDS_Text local_7d8;
  FDS_Text local_788;
  FDS_Text local_738;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a38;
  local_9c8 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_9c8 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_9c8);
  }
  local_9d8.ObjectIndex = 0;
  local_9d8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_9c8 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_9c8);
  }
  FWeakObjectPtr::operator=(&local_9d8,(FObjectPtr)&local_9c8);
  bVar4 = FWeakObjectPtr::IsValid(&local_9d8);
  if (!bVar4) {
    return;
  }
  local_9c0 = UDS_CommonPopupManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_9c0 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_9c0);
  }
  local_9e8.ObjectIndex = 0;
  local_9e8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_9c0 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_9c0);
  }
  FWeakObjectPtr::operator=(&local_9e8,(FObjectPtr)&local_9c0);
  bVar4 = FWeakObjectPtr::IsValid(&local_9e8);
  if (!bVar4) {
    return;
  }
  this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_9e8);
  UDS_CommonPopupManager::CreateCommonPopup(this_00);
  bVar4 = FWeakObjectPtr::IsValid(local_a08);
  if (!bVar4) {
    return;
  }
  if (param_1 == Register) {
    if (this->IsCoolTimeRegister == true) {
      local_980._0_8_ = 0;
      local_980._8_8_ = 0;
      local_980._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x55747,Alert_System_01,&local_980);
      return;
    }
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
    pFVar10 = FDS_Text::FromStringTable(&local_788,StringUi,0x55750);
    UDS_M_CommonPopup::SetTitle(pUVar9,pFVar10);
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
    pFVar10 = FDS_Text::FromStringTableFormat<>(&local_738,StringUi,0x55754);
    UDS_M_CommonPopup::SetMainContent(pUVar9,pFVar10);
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
    local_9f8.AllocatorInstance.Data = (FScriptContainerElement *)OnMountRegister;
    ppVar14 = (pmf_00a60bd9 *)&local_948;
    lStack_940 = (ulonglong)(uint)local_9f8.ArrayMax << 0x20;
    pTVar12 = &local_8f8;
    local_948 = OnMountRegister;
  }
  else {
    if (param_1 != Leave) {
      if (param_1 != ItemExpansion) goto LAB_14bfd2c28;
      FDS_MountRegisterListTableRow::GetAll(&local_9f8);
      if (local_9f8.ArrayNum == 0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfd29a3;
        pUVar5 = UDS_LogManager::GetInst();
        local_6e8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_6e8,"UDS_VM_W_B_MountsMain::OpenCommonSystemPopup",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_6e8.Ptr,0x252,L"mountRegisterListTableRowArray is Empty.")
        ;
        pvVar13 = (void *)local_6e8._padding_;
      }
      else if (local_9f8.ArrayNum < 1) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfd29a3;
        pUVar5 = UDS_LogManager::GetInst();
        local_5c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5c8,"UDS_VM_W_B_MountsMain::OpenCommonSystemPopup",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_5c8.Ptr,600,
                   L"mountRegisterListTableRowArray IsValidIndex(0) == false.");
        pvVar13 = (void *)local_5c8._padding_;
      }
      else {
        if ((local_9f8.ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)local_9f8.AllocatorInstance.Data;
        if (lVar2 == 0) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfd29a3;
          pUVar5 = UDS_LogManager::GetInst();
          local_4a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4a8,"UDS_VM_W_B_MountsMain::OpenCommonSystemPopup",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_4a8.Ptr,0x25f,L"moneyBaseTable is nullptr.");
          pvVar13 = (void *)local_4a8._padding_;
        }
        else {
          pFVar6 = FDS_MoneyBaseTableRow::Get((ulonglong)*(byte *)(lVar2 + 0x18),true);
          if (pFVar6 == (FDS_MoneyBaseTableRow *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfd29a3;
            pUVar5 = UDS_LogManager::GetInst();
            local_388._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_388,"UDS_VM_W_B_MountsMain::OpenCommonSystemPopup",0x2c,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_388.Ptr,0x266,L"moneyBaseTable is nullptr.");
            pvVar13 = (void *)local_388._padding_;
          }
          else {
            TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_9d0);
            bVar4 = TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> *)&local_9d0,
                               (void *)0x0);
            if (bVar4) {
              pUVar5 = UDS_LogManager::GetInst();
              if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfd29a3;
              pUVar5 = UDS_LogManager::GetInst();
              local_268._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_268,"UDS_VM_W_B_MountsMain::OpenCommonSystemPopup",0x2c,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_268.Ptr,0x26d,L"moneyDataSet is nullptr.");
              pvVar13 = (void *)local_268._padding_;
            }
            else {
              this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_9d0);
              this_02 = UDS_DataSetBase::GetData(this_01,(ulong64)&local_9a8);
              pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
              if (pUVar7 == (UObject *)0x0) {
LAB_14bfd28ce:
                pUVar7 = (UObject *)0x0;
              }
              else {
                pUVar8 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
                iVar1 = (int)pUVar8->_padding_;
                if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar8->_padding_)) goto LAB_14bfd28ce;
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar7);
              }
              local_9e0.ObjectIndex = 0;
              local_9e0.ObjectSerialNumber = 0;
              local_9b8[0] = pUVar7;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar7);
              }
              FWeakObjectPtr::operator=(&local_9e0,(FObjectPtr)local_9b8);
              bVar4 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)&local_9e0,
                                 (void *)0x0);
              if (!bVar4) {
                pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
                pFVar10 = FDS_Text::FromStringTable(&local_8c8,StringUi,0x5574e);
                UDS_M_CommonPopup::SetTitle(pUVar9,pFVar10);
                pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
                pFVar10 = FDS_Text::FromStringTableFormat<>(&local_878,StringUi,0x55752);
                UDS_M_CommonPopup::SetMainContent(pUVar9,pFVar10);
                pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
                this_03 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_9e0);
                lVar11 = UDS_MoneyData::GetTotalQuantity(this_03);
                UDS_M_CommonPopup::SetAsset
                          (pUVar9,Asset01,pFVar6->ID_MoneyIcon,*(int *)(lVar2 + 0x20),(int)lVar11,
                           false);
                pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
                uStack_9a0 = 0;
                local_9a8 = OnExtendedCallBack;
                lStack_960 = (ulonglong)uStack_99c << 0x20;
                local_968 = OnExtendedCallBack;
                pTVar12 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_W_B_MountsMain>
                                    (&local_928,this,(pmf_00a60bd9 *)&local_968);
                UDS_M_CommonPopup::SetDelegate(pUVar9,ButtonConfirm,pTVar12);
                if (local_9f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_9f8.AllocatorInstance.Data);
                }
                goto LAB_14bfd2c28;
              }
              pUVar5 = UDS_LogManager::GetInst();
              if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfd29a3;
              pUVar5 = UDS_LogManager::GetInst();
              local_148._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_148,"UDS_VM_W_B_MountsMain::OpenCommonSystemPopup",0x2c,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_148.Ptr,0x274,L"moneyData is nullptr.");
              pvVar13 = (void *)local_148._padding_;
            }
          }
        }
      }
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
LAB_14bfd29a3:
      if (local_9f8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_9f8.AllocatorInstance.Data);
      return;
    }
    if (this->IsCoolTimeUnRegister == true) {
      local_998._0_8_ = 0;
      local_998._8_8_ = 0;
      local_998._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x55748,Alert_System_01,&local_998);
      return;
    }
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
    pFVar10 = FDS_Text::FromStringTable(&local_828,StringUi,0x55751);
    UDS_M_CommonPopup::SetTitle(pUVar9,pFVar10);
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
    pFVar10 = FDS_Text::FromStringTableFormat<>(&local_7d8,StringUi,0x55755);
    UDS_M_CommonPopup::SetMainContent(pUVar9,pFVar10);
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
    local_9f8.AllocatorInstance.Data = (FScriptContainerElement *)OnMountLeave;
    ppVar14 = (pmf_00a60bd9 *)&local_958;
    lStack_950 = (ulonglong)(uint)local_9f8.ArrayMax << 0x20;
    pTVar12 = &local_910;
    local_958 = OnMountLeave;
  }
  local_9f8.ArrayNum = 0;
  pTVar12 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            ::CreateUObject<UDS_VM_W_B_MountsMain>(pTVar12,this,ppVar14);
  UDS_M_CommonPopup::SetDelegate(pUVar9,ButtonConfirm,pTVar12);
LAB_14bfd2c28:
  pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
  local_9f8.ArrayNum = 0;
  local_9f8.AllocatorInstance.Data = (FScriptContainerElement *)OnCloseSystemPopup;
  lStack_930 = (ulonglong)(uint)local_9f8.ArrayMax << 0x20;
  local_938 = OnCloseSystemPopup;
  pTVar12 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            ::CreateUObject<UDS_VM_W_B_MountsMain>(&local_8e0,this,(pmf_00a60bd9 *)&local_938);
  UDS_M_CommonPopup::SetDelegate(pUVar9,ButtonCancel,pTVar12);
  pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
  UDS_M_CommonPopup::SetButton(pUVar9,ButtonCancel,StringUi,0x66,false);
  pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
  UDS_M_CommonPopup::SetButton(pUVar9,ButtonConfirm,StringUi,0x65,false);
  pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_a08);
  UDS_M_CommonPopup::OpenCommonPopup(pUVar9);
  return;
}

// RefreshCamera @ 14bfd4150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::RefreshCamera(UDS_VM_W_B_MountsMain *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ViewerManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 == (UDS_ViewerManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_MountsMain::RefreshCamera",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x162,L"viewerManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6602883945488973469>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                       ,0x163,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UDS_ViewerManager::RefreshViewerCamera(this_00);
  }
  return;
}

// Reset @ 14bfd5380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::Reset(UDS_VM_W_B_MountsMain *this)

{
  FDS_EntryBindingEventField::Reset(&this->MountListEntry);
  RefreshCamera(this);
  return;
}

// SetCategorySwitcher @ 14bfd6260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::SetCategorySwitcher(UDS_VM_W_B_MountsMain *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CategoryListSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName;
  if (this->CategoryListSwitcher != param_1) {
    this->CategoryListSwitcher = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetContext @ 14bfd73f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::SetContext(UDS_VM_W_B_MountsMain *this)

{
  int *piVar1;
  int *piVar2;
  UDS_VM_MountCategoryList *this_00;
  UDS_VM_W_Mount_Status *this_01;
  UDS_VM_Dropdown *this_02;
  UDS_VM_MountEquipItemList *this_03;
  code *pcVar3;
  undefined4 uVar4;
  FDS_ViewModelContext_Dropdown *pFVar5;
  bool bVar6;
  int iVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *pUVar10;
  FDS_ViewModelContext *pFVar11;
  UDS_LogManager *pUVar12;
  UEnum *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FScriptContainerElement *pFVar16;
  FDS_ViewModelContext *pFVar17;
  FDS_ViewModelContext *pFVar18;
  undefined1 auStackY_4e8 [32];
  undefined1 local_4b8 [8];
  FDelegateAllocation local_4b0;
  TSharedPtr<FDS_ViewModelContext,1> local_498;
  FDS_Text local_488;
  FDS_Text local_438;
  FDS_Text local_3e8;
  FDS_Text local_398;
  FDS_Text local_348;
  FDS_Text local_2f8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [40];
  FDS_ViewModelContext *local_230;
  TSharedPtr<FDS_ViewModelContext,1> local_228;
  FDS_Text local_218;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  FDestructionSentinel local_198;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  pFVar18 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_MountCategoryList).field0_0x0.DebugPtr != (UDS_VM_MountCategoryList *)0x0) {
    pFVar8 = ::operator_new(0x20);
    pFVar17 = pFVar18;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar8->field_0x1c = 0;
      pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
      (pFVar8->ViewModelName).ComparisonIndex = 0;
      (pFVar8->ViewModelName).Number = 0;
      pFVar8->ViewModelTemplateKey = None;
      pFVar17 = pFVar8;
    }
    local_498.Object = pFVar17;
    pFVar8 = ::operator_new(0x20);
    local_498.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar17;
      local_498.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    }
    if ((local_498.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = local_498.Object;
    pUVar9 = FDS_ViewModelContext::StaticStruct();
    *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar9;
    pUVar10 = UDS_ViewModelContextManager::GetInst();
    if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_498);
    }
    if ((local_498.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (local_498.Object)->ViewModelTemplateKey = W_MountCategoryList;
    this_00 = (this->VM_MountCategoryList).field0_0x0.DebugPtr;
    local_1a8.Object = local_498.Object;
    local_1a8.SharedReferenceCount.ReferenceController =
         local_498.SharedReferenceCount.ReferenceController;
    if ((FDS_ViewModelContext *)local_498.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_498.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_Mount_Status).field0_0x0.DebugPtr != (UDS_VM_W_Mount_Status *)0x0) {
    pFVar8 = ::operator_new(0x28);
    pFVar17 = pFVar18;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
      (pFVar8->ViewModelName).ComparisonIndex = 0;
      (pFVar8->ViewModelName).Number = 0;
      pFVar8->_padding_ = (longlong)&___7FDS_VMContext_MountManagement__6B_;
      pFVar8[1]._padding_ = 0;
      pFVar17 = pFVar8;
    }
    pFVar11 = ::operator_new(0x20);
    pFVar8 = pFVar18;
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountManagement__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar17;
      pFVar8 = pFVar11;
    }
    if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar9 = FDS_VMContext_MountManagement::StaticStruct();
    *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar9;
    pUVar10 = UDS_ViewModelContextManager::GetInst();
    if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_258._32_8_ = pFVar17;
      local_230 = pFVar8;
      UDS_ViewModelContextManager::RegisterContext
                (pUVar10,(TSharedPtr<FDS_ViewModelContext,1> *)(local_258 + 0x20));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_230);
    }
    pFVar17->ViewModelTemplateKey = Mount_Status;
    pFVar17[1]._padding_ = this->TargetEntityID;
    this_01 = (this->VM_Mount_Status).field0_0x0.DebugPtr;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_1c8.Object = pFVar17;
    local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  if ((this->VM_MountListDropDownBox).field0_0x0.DebugPtr != (UDS_VM_Dropdown *)0x0) {
    piVar1 = &(this->MountListDropDownSortList).ArrayMax;
    (this->MountListDropDownSortList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->MountListDropDownSortList).AllocatorInstance,0,piVar1);
    }
    MakeContext<FDS_ViewModelContext_Dropdown>(&local_298);
    pFVar5 = local_298.Object;
    if (local_298.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_B_MountsMain::SetContext",0x21,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_158.Ptr,0x39e,L"dropdownContext is invalid.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      goto LAB_14bfd84fe;
    }
    if ((local_298.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x117;
    this->CurMountListOrderType = MountGet;
    pUVar13 = StaticEnum<enum_EDS_SortingType>();
    DS_Util::GetStringEnumTableKey((UEnum *)local_288,(int)pUVar13);
    local_218.StringTableType = None;
    local_218.StringTableID = 0;
    local_218.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_218.StringEnumTableNameID.Number = 0;
    local_218.DateTime.Ticks = 0;
    local_218.TimeSpan.Ticks = 0;
    local_218.TimeExpressionType = None;
    local_218.IsExpression = false;
    local_218.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.UniqueString.Data.ArrayNum = 0;
    local_218.UniqueString.Data.ArrayMax = 0;
    local_218.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FormatArgs.ArrayNum = 0;
    local_218.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_218,(FName *)local_288);
    iVar7 = (pFVar5->DropdownList).ArrayNum;
    piVar2 = &(pFVar5->DropdownList).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar2);
    }
    (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
    FDS_Text::FDS_Text((FDS_Text *)
                       ((pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50),
                       &local_218);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_218.FormatArgs.AllocatorInstance.Data,
               local_218.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_218.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_218.FormatArgs.AllocatorInstance.Data);
    }
    if (local_218.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = (this->MountListDropDownSortList).ArrayNum;
    if (iVar7 == (this->MountListDropDownSortList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->MountListDropDownSortList).AllocatorInstance,piVar1);
    }
    (this->MountListDropDownSortList).ArrayNum = iVar7 + 1;
    (this->MountListDropDownSortList).AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0xf;
    pUVar13 = StaticEnum<enum_EDS_SortingType>();
    DS_Util::GetStringEnumTableKey((UEnum *)(local_288 + 8),(int)pUVar13);
    local_488.StringTableType = None;
    local_488.StringTableID = 0;
    local_488.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_488.StringEnumTableNameID.Number = 0;
    local_488.DateTime.Ticks = 0;
    local_488.TimeSpan.Ticks = 0;
    local_488.TimeExpressionType = None;
    local_488.IsExpression = false;
    local_488.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.UniqueString.Data.ArrayNum = 0;
    local_488.UniqueString.Data.ArrayMax = 0;
    local_488.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.FormatArgs.ArrayNum = 0;
    local_488.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_488,(FName *)(local_288 + 8));
    iVar7 = (pFVar5->DropdownList).ArrayNum;
    piVar2 = &(pFVar5->DropdownList).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar2);
    }
    (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
    pFVar16 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *pFVar16 = (FScriptContainerElement)local_488.StringTableType;
    *(long64 *)(pFVar16 + 8) = local_488.StringTableID;
    *(FName *)(pFVar16 + 0x10) = local_488.StringEnumTableNameID;
    *(long64 *)(pFVar16 + 0x18) = local_488.DateTime.Ticks;
    *(long64 *)(pFVar16 + 0x20) = local_488.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar16 + 0x28) = local_488.TimeExpressionType;
    *(undefined8 *)(pFVar16 + 0x30) = 0;
    pFVar16[0x2c] = (FScriptContainerElement)local_488.IsExpression;
    *(FScriptContainerElement **)(pFVar16 + 0x30) =
         local_488.UniqueString.Data.AllocatorInstance.Data;
    local_488.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x38) = local_488.UniqueString.Data.ArrayNum;
    *(int *)(pFVar16 + 0x3c) = local_488.UniqueString.Data.ArrayMax;
    local_488.UniqueString.Data.ArrayNum = 0;
    local_488.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar16 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar16 + 0x40) = local_488.FormatArgs.AllocatorInstance.Data;
    local_488.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x48) = local_488.FormatArgs.ArrayNum;
    *(int *)(pFVar16 + 0x4c) = local_488.FormatArgs.ArrayMax;
    local_488.FormatArgs.ArrayNum = 0;
    local_488.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_488.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.FormatArgs.AllocatorInstance.Data);
    }
    if (local_488.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = (this->MountListDropDownSortList).ArrayNum;
    if (iVar7 == (this->MountListDropDownSortList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->MountListDropDownSortList).AllocatorInstance,piVar1);
    }
    (this->MountListDropDownSortList).ArrayNum = iVar7 + 1;
    (this->MountListDropDownSortList).AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0x10;
    pUVar13 = StaticEnum<enum_EDS_SortingType>();
    DS_Util::GetStringEnumTableKey((UEnum *)local_278,(int)pUVar13);
    local_438.StringTableType = None;
    local_438.StringTableID = 0;
    local_438.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_438.StringEnumTableNameID.Number = 0;
    local_438.DateTime.Ticks = 0;
    local_438.TimeSpan.Ticks = 0;
    local_438.TimeExpressionType = None;
    local_438.IsExpression = false;
    local_438.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_438.UniqueString.Data.ArrayNum = 0;
    local_438.UniqueString.Data.ArrayMax = 0;
    local_438.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_438.FormatArgs.ArrayNum = 0;
    local_438.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_438,(FName *)local_278);
    iVar7 = (pFVar5->DropdownList).ArrayNum;
    piVar2 = &(pFVar5->DropdownList).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar2);
    }
    (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
    pFVar16 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *pFVar16 = (FScriptContainerElement)local_438.StringTableType;
    *(long64 *)(pFVar16 + 8) = local_438.StringTableID;
    *(FName *)(pFVar16 + 0x10) = local_438.StringEnumTableNameID;
    *(long64 *)(pFVar16 + 0x18) = local_438.DateTime.Ticks;
    *(long64 *)(pFVar16 + 0x20) = local_438.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar16 + 0x28) = local_438.TimeExpressionType;
    *(undefined8 *)(pFVar16 + 0x30) = 0;
    pFVar16[0x2c] = (FScriptContainerElement)local_438.IsExpression;
    *(FScriptContainerElement **)(pFVar16 + 0x30) =
         local_438.UniqueString.Data.AllocatorInstance.Data;
    local_438.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x38) = local_438.UniqueString.Data.ArrayNum;
    *(int *)(pFVar16 + 0x3c) = local_438.UniqueString.Data.ArrayMax;
    local_438.UniqueString.Data.ArrayNum = 0;
    local_438.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar16 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar16 + 0x40) = local_438.FormatArgs.AllocatorInstance.Data;
    local_438.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x48) = local_438.FormatArgs.ArrayNum;
    *(int *)(pFVar16 + 0x4c) = local_438.FormatArgs.ArrayMax;
    local_438.FormatArgs.ArrayNum = 0;
    local_438.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_438.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.FormatArgs.AllocatorInstance.Data);
    }
    if (local_438.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = (this->MountListDropDownSortList).ArrayNum;
    if (iVar7 == (this->MountListDropDownSortList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->MountListDropDownSortList).AllocatorInstance,piVar1);
    }
    (this->MountListDropDownSortList).ArrayNum = iVar7 + 1;
    (this->MountListDropDownSortList).AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0x11;
    pUVar13 = StaticEnum<enum_EDS_SortingType>();
    DS_Util::GetStringEnumTableKey((UEnum *)(local_278 + 8),(int)pUVar13);
    local_3e8.StringTableType = None;
    local_3e8.StringTableID = None;
    local_3e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_3e8.StringEnumTableNameID.Number = 0;
    local_3e8.DateTime.Ticks = None;
    local_3e8.TimeSpan.Ticks = None;
    local_3e8.TimeExpressionType = None;
    local_3e8.IsExpression = false;
    local_3e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.UniqueString.Data.ArrayNum = 0;
    local_3e8.UniqueString.Data.ArrayMax = 0;
    local_3e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.FormatArgs.ArrayNum = 0;
    local_3e8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_3e8,(FName *)(local_278 + 8));
    iVar7 = (pFVar5->DropdownList).ArrayNum;
    piVar2 = &(pFVar5->DropdownList).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar2);
    }
    (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
    pFVar16 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *pFVar16 = (FScriptContainerElement)local_3e8.StringTableType;
    *(long64 *)(pFVar16 + 8) = local_3e8.StringTableID;
    *(FName *)(pFVar16 + 0x10) = local_3e8.StringEnumTableNameID;
    *(long64 *)(pFVar16 + 0x18) = local_3e8.DateTime.Ticks;
    *(long64 *)(pFVar16 + 0x20) = local_3e8.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar16 + 0x28) = local_3e8.TimeExpressionType;
    *(undefined8 *)(pFVar16 + 0x30) = None;
    pFVar16[0x2c] = (FScriptContainerElement)local_3e8.IsExpression;
    *(FScriptContainerElement **)(pFVar16 + 0x30) =
         local_3e8.UniqueString.Data.AllocatorInstance.Data;
    local_3e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x38) = local_3e8.UniqueString.Data.ArrayNum;
    *(int *)(pFVar16 + 0x3c) = local_3e8.UniqueString.Data.ArrayMax;
    local_3e8.UniqueString.Data.ArrayNum = 0;
    local_3e8.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar16 + 0x40) = None;
    *(FScriptContainerElement **)(pFVar16 + 0x40) = local_3e8.FormatArgs.AllocatorInstance.Data;
    local_3e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x48) = local_3e8.FormatArgs.ArrayNum;
    *(int *)(pFVar16 + 0x4c) = local_3e8.FormatArgs.ArrayMax;
    local_3e8.FormatArgs.ArrayNum = 0;
    local_3e8.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_3e8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_3e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = (this->MountListDropDownSortList).ArrayNum;
    if (iVar7 == (this->MountListDropDownSortList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->MountListDropDownSortList).AllocatorInstance,piVar1);
    }
    (this->MountListDropDownSortList).ArrayNum = iVar7 + 1;
    (this->MountListDropDownSortList).AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0x12;
    pUVar13 = StaticEnum<enum_EDS_SortingType>();
    DS_Util::GetStringEnumTableKey((UEnum *)local_268,(int)pUVar13);
    local_398.StringTableType = None;
    local_398.StringTableID = 0;
    local_398.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_398.StringEnumTableNameID.Number = 0;
    local_398.DateTime.Ticks = 0;
    local_398.TimeSpan.Ticks = 0;
    local_398.TimeExpressionType = None;
    local_398.IsExpression = false;
    local_398.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.UniqueString.Data.ArrayNum = 0;
    local_398.UniqueString.Data.ArrayMax = 0;
    local_398.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.FormatArgs.ArrayNum = 0;
    local_398.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_398,(FName *)local_268);
    iVar7 = (pFVar5->DropdownList).ArrayNum;
    piVar2 = &(pFVar5->DropdownList).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar2);
    }
    (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
    pFVar16 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *pFVar16 = (FScriptContainerElement)local_398.StringTableType;
    *(long64 *)(pFVar16 + 8) = local_398.StringTableID;
    *(FName *)(pFVar16 + 0x10) = local_398.StringEnumTableNameID;
    *(long64 *)(pFVar16 + 0x18) = local_398.DateTime.Ticks;
    *(long64 *)(pFVar16 + 0x20) = local_398.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar16 + 0x28) = local_398.TimeExpressionType;
    *(undefined8 *)(pFVar16 + 0x30) = 0;
    pFVar16[0x2c] = (FScriptContainerElement)local_398.IsExpression;
    *(FScriptContainerElement **)(pFVar16 + 0x30) =
         local_398.UniqueString.Data.AllocatorInstance.Data;
    local_398.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x38) = local_398.UniqueString.Data.ArrayNum;
    *(int *)(pFVar16 + 0x3c) = local_398.UniqueString.Data.ArrayMax;
    local_398.UniqueString.Data.ArrayNum = 0;
    local_398.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar16 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar16 + 0x40) = local_398.FormatArgs.AllocatorInstance.Data;
    local_398.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x48) = local_398.FormatArgs.ArrayNum;
    *(int *)(pFVar16 + 0x4c) = local_398.FormatArgs.ArrayMax;
    local_398.FormatArgs.ArrayNum = 0;
    local_398.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_398.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.FormatArgs.AllocatorInstance.Data);
    }
    if (local_398.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = (this->MountListDropDownSortList).ArrayNum;
    if (iVar7 == (this->MountListDropDownSortList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->MountListDropDownSortList).AllocatorInstance,piVar1);
    }
    (this->MountListDropDownSortList).ArrayNum = iVar7 + 1;
    (this->MountListDropDownSortList).AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0x13;
    pUVar13 = StaticEnum<enum_EDS_SortingType>();
    DS_Util::GetStringEnumTableKey((UEnum *)(local_268 + 8),(int)pUVar13);
    local_348.StringTableType = None;
    local_348.StringTableID = 0;
    local_348.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_348.StringEnumTableNameID.Number = 0;
    local_348.DateTime.Ticks = 0;
    local_348.TimeSpan.Ticks = 0;
    local_348.TimeExpressionType = None;
    local_348.IsExpression = false;
    local_348.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_348.UniqueString.Data.ArrayNum = 0;
    local_348.UniqueString.Data.ArrayMax = 0;
    local_348.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_348.FormatArgs.ArrayNum = 0;
    local_348.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_348,(FName *)(local_268 + 8));
    iVar7 = (pFVar5->DropdownList).ArrayNum;
    piVar2 = &(pFVar5->DropdownList).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar2);
    }
    (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
    pFVar16 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *pFVar16 = (FScriptContainerElement)local_348.StringTableType;
    *(long64 *)(pFVar16 + 8) = local_348.StringTableID;
    *(FName *)(pFVar16 + 0x10) = local_348.StringEnumTableNameID;
    *(long64 *)(pFVar16 + 0x18) = local_348.DateTime.Ticks;
    *(long64 *)(pFVar16 + 0x20) = local_348.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar16 + 0x28) = local_348.TimeExpressionType;
    *(undefined8 *)(pFVar16 + 0x30) = 0;
    pFVar16[0x2c] = (FScriptContainerElement)local_348.IsExpression;
    *(FScriptContainerElement **)(pFVar16 + 0x30) =
         local_348.UniqueString.Data.AllocatorInstance.Data;
    local_348.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x38) = local_348.UniqueString.Data.ArrayNum;
    *(int *)(pFVar16 + 0x3c) = local_348.UniqueString.Data.ArrayMax;
    local_348.UniqueString.Data.ArrayNum = 0;
    local_348.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar16 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar16 + 0x40) = local_348.FormatArgs.AllocatorInstance.Data;
    local_348.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x48) = local_348.FormatArgs.ArrayNum;
    *(int *)(pFVar16 + 0x4c) = local_348.FormatArgs.ArrayMax;
    local_348.FormatArgs.ArrayNum = 0;
    local_348.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_348.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.FormatArgs.AllocatorInstance.Data);
    }
    if (local_348.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = (this->MountListDropDownSortList).ArrayNum;
    if (iVar7 == (this->MountListDropDownSortList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->MountListDropDownSortList).AllocatorInstance,piVar1);
    }
    (this->MountListDropDownSortList).ArrayNum = iVar7 + 1;
    (this->MountListDropDownSortList).AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0x14;
    pUVar13 = StaticEnum<enum_EDS_SortingType>();
    DS_Util::GetStringEnumTableKey((UEnum *)local_258,(int)pUVar13);
    local_2f8.StringTableType = None;
    local_2f8.StringTableID = 0;
    local_2f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2f8.StringEnumTableNameID.Number = 0;
    local_2f8.DateTime.Ticks = 0;
    local_2f8.TimeSpan.Ticks = 0;
    local_2f8.TimeExpressionType = None;
    local_2f8.IsExpression = false;
    local_2f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.UniqueString.Data.ArrayNum = 0;
    local_2f8.UniqueString.Data.ArrayMax = 0;
    local_2f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.FormatArgs.ArrayNum = 0;
    local_2f8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_2f8,(FName *)local_258);
    iVar7 = (pFVar5->DropdownList).ArrayNum;
    piVar2 = &(pFVar5->DropdownList).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar2);
    }
    (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
    pFVar16 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *pFVar16 = (FScriptContainerElement)local_2f8.StringTableType;
    *(long64 *)(pFVar16 + 8) = local_2f8.StringTableID;
    *(FName *)(pFVar16 + 0x10) = local_2f8.StringEnumTableNameID;
    *(long64 *)(pFVar16 + 0x18) = local_2f8.DateTime.Ticks;
    *(long64 *)(pFVar16 + 0x20) = local_2f8.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar16 + 0x28) = local_2f8.TimeExpressionType;
    *(undefined8 *)(pFVar16 + 0x30) = 0;
    pFVar16[0x2c] = (FScriptContainerElement)local_2f8.IsExpression;
    *(FScriptContainerElement **)(pFVar16 + 0x30) =
         local_2f8.UniqueString.Data.AllocatorInstance.Data;
    local_2f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x38) = local_2f8.UniqueString.Data.ArrayNum;
    *(int *)(pFVar16 + 0x3c) = local_2f8.UniqueString.Data.ArrayMax;
    local_2f8.UniqueString.Data.ArrayNum = 0;
    local_2f8.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar16 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar16 + 0x40) = local_2f8.FormatArgs.AllocatorInstance.Data;
    local_2f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + 0x48) = local_2f8.FormatArgs.ArrayNum;
    *(int *)(pFVar16 + 0x4c) = local_2f8.FormatArgs.ArrayMax;
    local_2f8.FormatArgs.ArrayNum = 0;
    local_2f8.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_2f8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_2f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = (this->MountListDropDownSortList).ArrayNum;
    if (iVar7 == (this->MountListDropDownSortList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->MountListDropDownSortList).AllocatorInstance,piVar1);
    }
    (this->MountListDropDownSortList).ArrayNum = iVar7 + 1;
    local_4b8 = (undefined1  [8])0x0;
    local_4b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_4b0.DelegateSize = 0;
    (this->MountListDropDownSortList).AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0x15;
    local_2a8.Object = (FDS_ViewModelContext *)OnMountListDropDownChanged;
    local_2a8.SharedReferenceCount.ReferenceController =
         local_1a8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
               (FWriteAccessScope *)&local_180);
    local_168 = &local_4b0;
    puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_4b0);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_MountsMain____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar14[3] = 0;
      local_258._8_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)((longlong)local_258 + 8));
      puVar14[4] = local_2a8.Object;
      puVar14[5] = local_2a8.SharedReferenceCount.ReferenceController;
    }
    if (local_180.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickList,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
               (FWriteAccessScope *)&local_198);
    if ((local_4b0.DelegateSize != 0) &&
       (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_4b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_4b0,0,0,0x10);
      local_4b0.DelegateSize = 0;
    }
    if (local_198.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
    }
    if (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_4b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4b8);
    local_2a8.Object = (FDS_ViewModelContext *)local_298.Object;
    local_2a8.SharedReferenceCount.ReferenceController =
         local_298.SharedReferenceCount.ReferenceController;
    pFVar5->bOpenUpward = true;
    this_02 = (this->VM_MountListDropDownBox).field0_0x0.DebugPtr;
    if ((FDS_ViewModelContext *)local_298.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_2a8);
    local_258._24_4_ = FFieldNotificationClassDescriptor::VM_MountListDropDownBox.BitNumber;
    local_258._16_4_ =
         FFieldNotificationClassDescriptor::VM_MountListDropDownBox.FieldName.ComparisonIndex.Value;
    local_258._20_4_ = FFieldNotificationClassDescriptor::VM_MountListDropDownBox.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_258 + 0x10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_MountEquipItemList).field0_0x0.DebugPtr == (UDS_VM_MountEquipItemList *)0x0) {
    return;
  }
  pFVar8 = ::operator_new(0x38);
  pFVar17 = pFVar18;
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
    (pFVar8->ViewModelName).ComparisonIndex = 0;
    (pFVar8->ViewModelName).Number = 0;
    pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_MountEquipItemSlotList__6B_;
    pFVar8[1]._padding_ = 0;
    *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
    pFVar8[1].ViewModelName.ComparisonIndex = 0;
    pFVar8[1].ViewModelName.Number = 0;
    pFVar17 = pFVar8;
  }
  pFVar8 = ::operator_new(0x20);
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountEquipItemSlotList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar17;
    pFVar18 = pFVar8;
  }
  if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar9 = FDS_ViewModelContext_MountEquipItemSlotList::StaticStruct();
  *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar9;
  pUVar10 = UDS_ViewModelContextManager::GetInst();
  if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar18 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar18->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_228.Object = pFVar17;
    local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
    UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
  }
  pFVar17->ViewModelTemplateKey = MountEquipItemList;
  pFVar17[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
  *(long64 *)&pFVar17[1].DerivedStaticStruct = this->CurMountUID;
  uVar4 = *(undefined4 *)((longlong)&this->TargetEntityID + 4);
  pFVar17[1].ViewModelName.ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->TargetEntityID;
  pFVar17[1].ViewModelName.Number = uVar4;
  this_03 = (this->VM_MountEquipItemList).field0_0x0.DebugPtr;
  if (pFVar18 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar18->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_1b8.Object = pFVar17;
  local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&local_1b8);
  local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
LAB_14bfd84fe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  return;
}

// SetCurMountUID @ 14bfd88d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::SetCurMountUID(UDS_VM_W_B_MountsMain *this,long64 param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  uint uVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_158);
  bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)local_158,(void *)0x0);
  if (!bVar3) {
    pUVar5 = FWeakObjectPtr::Get(local_158);
    iVar2 = FFieldNotificationClassDescriptor::RegisterBtnSwitcherIndex.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::RegisterBtnSwitcherIndex.FieldName;
    uVar6 = (uint)(param_1 == *(longlong *)&pUVar5[4].field_0x20);
    if (this->RegisterBtnSwitcherIndex != uVar6) {
      this->RegisterBtnSwitcherIndex = uVar6;
      local_140 = iVar2;
      local_148 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
    if ((param_1 == 0) ||
       (pUVar5 = FWeakObjectPtr::Get(local_158), param_1 != *(longlong *)&pUVar5[4].field_0x20)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar2 = FFieldNotificationClassDescriptor::IsDisableLeaveBTN.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::IsDisableLeaveBTN.FieldName;
    if (this->IsDisableLeaveBTN != bVar3) {
      this->IsDisableLeaveBTN = bVar3;
      local_140 = iVar2;
      local_148 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
    if (this->CurMountUID != param_1) {
      this->CurMountUID = param_1;
      Open3DViewer(this);
      RefreshCamera(this);
    }
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_VM_W_B_MountsMain::SetCurMountUID",0x25,Yes);
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x2ac,L"mountDataSet is nullptr.");
  if ((void *)local_138._padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)local_138._padding_);
  return;
}

// SetIsDisableLeaveBTN @ 14bfda920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::SetIsDisableLeaveBTN(UDS_VM_W_B_MountsMain *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsDisableLeaveBTN.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDisableLeaveBTN.FieldName;
  if (this->IsDisableLeaveBTN != param_1) {
    this->IsDisableLeaveBTN = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPlayerInfoUI @ 14bfdd290

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::SetPlayerInfoUI(UDS_VM_W_B_MountsMain *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_VM_PlayerData *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_PlayerData).field0_0x0.DebugPtr == (UDS_VM_PlayerData *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_PlayerData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_PlayerData).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UDS_VM_PlayerData *)0x0) {
      return;
    }
  }
  pFVar4 = ::operator_new(0x28);
  pFVar6 = (FDS_ViewModelContext *)0x0;
  pFVar7 = pFVar6;
  if (pFVar4 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
    (pFVar4->ViewModelName).ComparisonIndex = 0;
    (pFVar4->ViewModelName).Number = 0;
    pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerData__6B_;
    pFVar4[1]._padding_ = 0;
    pFVar7 = pFVar4;
  }
  pFVar4 = ::operator_new(0x20);
  if (pFVar4 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar7;
    pFVar6 = pFVar4;
  }
  if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar5 = FDS_ViewModelContext_PlayerData::StaticStruct();
  *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar5;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar7;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  pFVar7->ViewModelTemplateKey = Data_PlayerData;
  pFVar7[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
  pUVar3 = (this->VM_PlayerData).field0_0x0.DebugPtr;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar6->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_18.Object = pFVar7;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar3,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return;
}

// SetRightUIVisibility @ 14bfdd5c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::SetRightUIVisibility(UDS_VM_W_B_MountsMain *this,int param_1)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
  EVar1 = Collapsed;
  if (param_1 == 0) {
    EVar1 = SelfHitTestInvisible;
  }
  if (this->RightUIVisibilty != EVar1) {
    this->RightUIVisibilty = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetText @ 14bfddbf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::SetText(UDS_VM_W_B_MountsMain *this)

{
  int *piVar1;
  FName local_18;
  int local_10;
  
  (this->MountListEmptyText).StringTableType = StringUi;
  (this->MountListEmptyText).StringTableID = 0x5575c;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MountListEmptyText).FormatArgs.AllocatorInstance.Data,
             (this->MountListEmptyText).FormatArgs.ArrayNum);
  piVar1 = &(this->MountListEmptyText).FormatArgs.ArrayMax;
  (this->MountListEmptyText).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->MountListEmptyText).FormatArgs.AllocatorInstance,0,piVar1);
  }
  local_10 = FFieldNotificationClassDescriptor::MountListEmptyText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MountListEmptyText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdf950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::UnbindModel(UDS_VM_W_B_MountsMain *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ViewerManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_MountEvent *pUVar4;
  UDS_TimeCoolDownManager *pUVar5;
  undefined1 auStackY_288 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 == (UDS_ViewerManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_W_B_MountsMain::Close3DViewer",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x155,L"viewerManager is nullptr.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6602883945488973482>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                       ,0x156,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UDS_ViewerManager::CloseViewerScene(this_00);
  }
  FDS_EntryBindingEventField::Reset(&this->MountListEntry);
  RefreshCamera(this);
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEventMountItemSlotDelegate);
  pUVar4 = UDS_MountEvent::GetEvent();
  if (pUVar4 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->CurSelectedMountCategoryTypeDel,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->UpdateMountListDel,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->UpdateMountExtendedTextDel,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->CurChangeNameMountUIDDel,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnEquipSlotSelectDelegate,this);
  }
  pUVar5 = UDS_TimeCoolDownManager::GetInst();
  if (pUVar5 == (UDS_TimeCoolDownManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_MountsMain::UnbindModel",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xa8,L"timeCoolDownManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangedTimeCoolDownEvent,this);
  }
  return;
}

// UpdateCurMountData @ 14bfe2720

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::UpdateCurMountData(UDS_VM_W_B_MountsMain *this)

{
  Open3DViewer(this);
  RefreshCamera(this);
  return;
}

// UpdateInventoryBag @ 14bfe36a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::UpdateInventoryBag(UDS_VM_W_B_MountsMain *this)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  UEnum *pUVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_M_InventoryBag *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FDS_DataContainer *pFVar12;
  UDS_LogManager *pUVar13;
  longlong *plVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  undefined1 auStackY_278 [32];
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_248;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_228;
  FDestructionSentinel local_208;
  undefined1 *local_1f0;
  undefined1 local_1e8 [32];
  void *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [8];
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  undefined1 local_198 [32];
  void *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  void *local_158;
  undefined4 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1e8._0_8_ = (FScriptContainerElement *)0x0;
  local_1e8._8_8_ = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_164 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_16c = 0x80;
  local_168 = 0xffffffff;
  pUVar4 = StaticEnum<enum_EDS_BagGroupType>();
  if (pUVar4 == (UEnum *)0x0) {
    ::FString::FString((FString *)&local_248,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar4,(FString *)&local_248,0xc);
  }
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_1e8,(EDS_InventoryBagData)&local_228);
  uVar1 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_1e8._8_4_ != local_1b4) {
    FVar15 = (ForElementType<FSetElementId>)local_1b0;
    if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
      FVar15 = local_1a8;
    }
    iVar16 = *(int *)((longlong)FVar15 + (ulonglong)(local_1a0 - 1U & uVar3) * 4);
    if (iVar16 != -1) {
      do {
        if (*(longlong *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20) == *(longlong *)FVar5) {
          if ((iVar16 != -1) &&
             ((FScriptContainerElement *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar6 = (FScriptContainerElement *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20) + 8;
            goto LAB_14bfe37e7;
          }
          break;
        }
        iVar16 = *(int *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20 + 0x18);
      } while (iVar16 != -1);
    }
  }
  pFVar6 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_1e8,uVar3,(FName *)FVar5);
LAB_14bfe37e7:
  iVar16 = local_248._8_4_ + -1;
  if (local_248._8_4_ == 0) {
    iVar16 = 0;
  }
  ::FString::AssignRange((FString *)pFVar6,(wchar_t *)local_248._0_8_,iVar16);
  if ((UDS_VM_W_B_MountsMain *)local_248._0_8_ != (UDS_VM_W_B_MountsMain *)0x0) {
    FMemory::Free((void *)local_248._0_8_);
  }
  pUVar4 = StaticEnum<enum_EDS_SortingType>();
  if (pUVar4 == (UEnum *)0x0) {
    ::FString::FString((FString *)&local_248,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar4,(FString *)&local_248,1);
  }
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_1e8,(EDS_InventoryBagData)&local_228);
  uVar1 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_1e8._8_4_ != local_1b4) {
    FVar15 = (ForElementType<FSetElementId>)local_1b0;
    if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
      FVar15 = local_1a8;
    }
    iVar16 = *(int *)((longlong)FVar15 + (ulonglong)(local_1a0 - 1U & uVar3) * 4);
    if (iVar16 != -1) {
      do {
        if (*(longlong *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20) == *(longlong *)FVar5) {
          if ((iVar16 != -1) &&
             ((FScriptContainerElement *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar6 = (FScriptContainerElement *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20) + 8;
            goto LAB_14bfe38eb;
          }
          break;
        }
        iVar16 = *(int *)(local_1e8._0_8_ + (longlong)iVar16 * 0x20 + 0x18);
      } while (iVar16 != -1);
    }
  }
  pFVar6 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_1e8,uVar3,(FName *)FVar5);
LAB_14bfe38eb:
  iVar16 = local_248._8_4_ + -1;
  if (local_248._8_4_ == 0) {
    iVar16 = 0;
  }
  ::FString::AssignRange((FString *)pFVar6,(wchar_t *)local_248._0_8_,iVar16);
  if ((UDS_VM_W_B_MountsMain *)local_248._0_8_ != (UDS_VM_W_B_MountsMain *)0x0) {
    FMemory::Free((void *)local_248._0_8_);
  }
  pUVar9 = (this->InventoryBagModel).field0_0x0.DebugPtr;
  if (pUVar9 == (UDS_M_InventoryBag *)0x0) {
    pUVar7 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)&local_148,pUVar8);
    local_148._padding_ = (longlong)pUVar7;
    pUVar9 = (UDS_M_InventoryBag *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)&local_148);
    if (local_148._padding_ != 0) {
      plVar14 = &local_148._padding_;
      if ((longlong *)local_148._padding_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_148._padding_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar9 == (UDS_M_InventoryBag *)0x0)) {
      (this->InventoryBagModel).field0_0x0.DebugPtr = pUVar9;
      if (pUVar9 == (UDS_M_InventoryBag *)0x0) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_W_B_MountsMain::UpdateInventoryBag",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_148.Ptr,0x2e2,L"InventoryBagModel is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        goto LAB_14bfe3c85;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      (this->InventoryBagModel).field0_0x0.DebugPtr = pUVar9;
    }
    local_228._0_8_ = OnEventMountItemSlot;
    local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnEventMountItemSlotDelegate,(FWriteAccessScope *)&local_208);
    local_1f0 = &(this->OnEventMountItemSlotDelegate).field_0x8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1f0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_MountsMain____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_248._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_248);
      puVar10[4] = local_228._0_8_;
      puVar10[5] = local_228._8_8_;
    }
    if (local_208.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
    }
    pUVar9 = (this->InventoryBagModel).field0_0x0.DebugPtr;
    local_228._16_8_ = 0;
    local_228._0_8_ = 0;
    local_228._8_8_ = 0;
    local_248._16_8_ = 0;
    local_248._0_8_ = 0;
    local_248._8_8_ = 0;
    pFVar12 = FDS_DataContainer::FDS_DataContainer
                        ((FDS_DataContainer *)&local_148,(FDS_DataContainer *)local_1e8);
    UDS_M_InventoryBag::InitModel(pUVar9,pFVar12,&local_248,&local_228);
    UDS_ModelBase::AddUpdateModelDelegate
              ((UDS_ModelBase *)(this->InventoryBagModel).field0_0x0.DebugPtr,
               &this->OnEventMountItemSlotDelegate);
  }
  else {
    local_228._16_8_ = 0;
    local_228._0_8_ = 0;
    local_228._8_8_ = 0;
    local_248._16_8_ = 0;
    local_248._0_8_ = 0;
    local_248._8_8_ = 0;
    pFVar12 = FDS_DataContainer::FDS_DataContainer
                        ((FDS_DataContainer *)&local_148,(FDS_DataContainer *)local_1e8);
    UDS_M_InventoryBag::InitModel(pUVar9,pFVar12,&local_248,&local_228);
    pUVar9 = (this->InventoryBagModel).field0_0x0.DebugPtr;
    local_228._0_8_ = 0;
    local_248._0_8_ = 0;
    pcVar2 = *(code **)(pUVar9->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_248,(FObjectPtr)&local_228);
    (*pcVar2)(pUVar9,local_248._0_8_,0);
  }
  pUVar9 = (this->InventoryBagModel).field0_0x0.DebugPtr;
  pUVar7 = (UObject *)this->_padding_;
  pcVar2 = *(code **)(pUVar9->_padding_ + 0x2e8);
  if (pUVar7 == (UObject *)0x0) {
LAB_14bfe3c2e:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar16 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar8->_padding_)) goto LAB_14bfe3c2e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_248._0_8_ = (UDS_VM_W_B_MountsMain *)0x0;
  local_228._0_8_ = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_248,(FObjectPtr)&local_228);
  (*pcVar2)(pUVar9);
LAB_14bfe3c85:
  local_150 = 0;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_198,0,local_198._8_4_);
  iVar16 = SUB84(local_198._8_8_,4);
  local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
  if (iVar16 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
  }
  local_168 = 0xffffffff;
  local_164 = 0;
  local_170 = 0;
  if (0x80 < local_16c) {
    local_16c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._0_8_);
  }
  local_1a0 = 0;
  if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1e8,0,local_1e8._8_4_);
  iVar16 = SUB84(local_1e8._8_8_,4);
  local_1e8._8_8_ = local_1e8._8_8_ & 0xffffffff00000000;
  if (iVar16 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_1e8,0,(int *)(local_1e8 + 0xc));
  }
  local_1b4 = 0;
  local_1c0 = 0;
  local_1b8 = 0xffffffff;
  if (0x80 < local_1bc) {
    local_1bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),0);
  }
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._0_8_);
  }
  return;
}

// UpdateMountExtendedText @ 14bfe4040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::UpdateMountExtendedText
          (UDS_VM_W_B_MountsMain *this,TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  UDS_MountDataSet *pUVar10;
  FObjectPtr_u_0 *pFVar11;
  FDS_Int32StringFormatArg *pFVar12;
  ForAnyElementType FVar13;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188;
  TArray<TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_180;
  FName local_168;
  int local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_res10 = param_1.WeakPtr;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_188);
  bVar5 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_188,(void *)0x0);
  if (bVar5) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_W_B_MountsMain::UpdateMountExtendedText",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0x36b,L"mountDataSet is nullptr.");
    FVar13.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.ArrayNum = 0;
    local_180.ArrayMax = 0;
    pUVar10 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_188);
    UDS_MountDataSet::GetMountDataList(pUVar10,&local_180);
    pUVar10 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_res10);
    iVar6 = UDS_MountDataSet::GetTotalSlotCount(pUVar10);
    iVar8 = local_180.ArrayNum;
    pTVar2 = &(this->ExtendedText).FormatArgs;
    (this->ExtendedText).StringTableType = StringUi;
    (this->ExtendedText).StringTableID = 0x55743;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->ExtendedText).FormatArgs.ArrayNum);
    piVar1 = &(this->ExtendedText).FormatArgs.ArrayMax;
    (this->ExtendedText).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar7 = (this->ExtendedText).FormatArgs.ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ExtendedText).FormatArgs.ArrayNum = iVar7 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar11[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar12 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar12 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar12->Value = iVar8;
    }
    iVar8 = (this->ExtendedText).FormatArgs.ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ExtendedText).FormatArgs.ArrayNum = iVar8 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar11[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar12 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar12 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar12->Value = iVar6;
    }
    local_160 = FFieldNotificationClassDescriptor::ExtendedText.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::ExtendedText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    FVar13.Data = local_180.AllocatorInstance.Data;
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

// UpdateMountList @ 14bfe42f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_B_MountsMain::UpdateMountList(UDS_VM_W_B_MountsMain *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UDS_MountDataSet *this_00;
  UObject *pUVar8;
  FDS_MountBaseTableRow *pFVar9;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  UDS_ViewerManager *this_03;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  FDS_ViewModelContext *pFVar17;
  EDS_SortOrder EVar18;
  uint uVar19;
  FDS_ViewModelContext *pFVar20;
  undefined1 auStackY_368 [32];
  bool local_338;
  TArray<TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_330;
  int local_320 [2];
  ulonglong local_318;
  longlong local_310;
  FWeakObjectPtr local_308;
  undefined8 local_300;
  UDS_UserObjectListItem *local_2f8 [2];
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_308);
  bVar4 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_308,(void *)0x0);
  if (bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_VM_W_B_MountsMain::UpdateMountList",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0x308,L"mountDataSet is nullptr.");
    FVar13.Data = (FScriptContainerElement *)local_278._padding_;
  }
  else {
    pFVar20 = (FDS_ViewModelContext *)0x0;
    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.ArrayNum = 0;
    local_330.ArrayMax = 0;
    this_00 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_308);
    UDS_MountDataSet::GetMountDataList(this_00,&local_330);
    FDS_EntryBindingEventField::Reset(&this->MountListEntry);
    EVar18 = Descend;
    if (this->MountDropDownSwitcher == 0) {
      EVar18 = Ascend;
    }
    DS_Sorting<TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>_>::Sort
              (&local_330,this->CurMountListOrderType,EVar18);
    uVar14 = (ulonglong)local_330.ArrayNum;
    local_338 = this->ChangeNameMountUID < 1;
    if (0 < local_330.ArrayNum) {
      local_310 = 0;
      uVar15 = uVar14;
      pFVar17 = pFVar20;
      local_318 = uVar14;
      do {
        lVar16 = local_310;
        uVar19 = (uint)pFVar17;
        if ((-1 < (int)uVar19) && ((int)uVar19 < (int)uVar15)) {
          if (this->SelectedCategoryType == 1) {
LAB_14bfe450a:
            this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfe48da;
            }
            else {
              if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfe48da:
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6602883945488973011>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                                   ,0x32d,"false");
                FVar13.Data = local_330.AllocatorInstance.Data;
                if (bVar4) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                goto LAB_14bfe49d9;
              }
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            pFVar10 = ::operator_new(0x30);
            pFVar17 = pFVar20;
            if (pFVar10 != (FDS_ViewModelContext *)0x0) {
              *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
              *(undefined8 *)&pFVar10[1].DerivedStaticStruct = 0;
              *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
              (pFVar10->ViewModelName).ComparisonIndex = 0;
              (pFVar10->ViewModelName).Number = 0;
              pFVar10->_padding_ = (longlong)&___7FDS_VMContext_MountData__6B_;
              *(int *)&pFVar10[1]._padding_ = 0;
              *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
              local_300 = 0;
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar10 + 1),(FObjectPtr)&local_300);
              *(undefined1 *)&pFVar10[1].DerivedStaticStruct = 0;
              pFVar17 = pFVar10;
            }
            pFVar11 = ::operator_new(0x20);
            pFVar10 = pFVar20;
            if (pFVar11 != (FDS_ViewModelContext *)0x0) {
              *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
              *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
              ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
              pFVar11->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
              ;
              *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar17;
              pFVar10 = pFVar11;
            }
            if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pUVar12 = FDS_VMContext_MountData::StaticStruct();
            *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar12;
            this_02 = UDS_ViewModelContextManager::GetInst();
            if (this_02 != (UDS_ViewModelContextManager *)0x0) {
              if (pFVar10 != (FDS_ViewModelContext *)0x0) {
                LOCK();
                *(atomic<int> *)&pFVar10->DerivedStaticStruct =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
                UNLOCK();
              }
              local_298.Object = pFVar17;
              local_298.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar10;
              UDS_ViewModelContextManager::RegisterContext(this_02,&local_298);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_298.SharedReferenceCount.ReferenceController);
            }
            pFVar17->ViewModelTemplateKey = Data_Mount;
            uVar5 = 0;
            if ((int)uVar19 < local_330.ArrayNum) {
              uVar5 = ~uVar19 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar17[1]._padding_ = *(longlong *)(local_330.AllocatorInstance.Data + local_310 * 8);
            if (local_338 == true) {
              *(undefined1 *)&pFVar17[1].DerivedStaticStruct = 1;
              local_338 = false;
            }
            else {
              uVar5 = 0;
              if ((int)uVar19 < local_330.ArrayNum) {
                uVar5 = ~uVar19 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                           (local_330.AllocatorInstance.Data +
                                           (longlong)(int)uVar19 * 8));
              if (this->ChangeNameMountUID == *(longlong *)&pUVar8[2].field_0x10) {
                *(undefined1 *)&pFVar17[1].DerivedStaticStruct = 1;
                this->ChangeNameMountUID = 0;
              }
              else {
                *(bool *)&pFVar17[1].DerivedStaticStruct = local_338;
              }
            }
            if (pFVar10 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar10->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_288.Object = pFVar17;
            local_288.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar10;
            UDS_UserObjectListItem::AddContext(this_01,&local_288);
            local_2f8[0] = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FDS_EntryBindingEventField::Add
                      (&this->MountListEntry,(TObjectPtr<UDS_UserObjectListItem>)local_2f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar10);
            lVar16 = local_310;
          }
          else {
            uVar5 = 0;
            if ((int)uVar19 < (int)uVar15) {
              uVar5 = ~uVar19 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                         (local_330.AllocatorInstance.Data +
                                         (longlong)(int)uVar19 * 8));
            pFVar9 = FDS_MountBaseTableRow::Get((longlong)*(int *)&pUVar8[2].field_0x18,true);
            if ((pFVar9 != (FDS_MountBaseTableRow *)0x0) &&
               ((uint)pFVar9->CategoryType == this->SelectedCategoryType)) goto LAB_14bfe450a;
          }
          uVar15 = local_330._8_8_ & 0xffffffff;
          uVar14 = local_318;
        }
        local_310 = lVar16 + 1;
        pFVar17 = (FDS_ViewModelContext *)(ulonglong)(uVar19 + 1);
      } while (local_310 < (longlong)uVar14);
    }
    iVar6 = FDS_EntryBindingEventField::Num(&this->MountListEntry);
    iVar3 = FFieldNotificationClassDescriptor::CategoryListSwitcher.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName;
    if (iVar6 == 0) {
      if (this->CategoryListSwitcher != 1) {
        this->CategoryListSwitcher = 1;
        local_2e0 = iVar3;
        local_2e8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))();
      }
      iVar3 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
      if (this->RightUIVisibilty != Collapsed) {
        this->RightUIVisibilty = Collapsed;
        local_2d0 = iVar3;
        local_2d8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))();
      }
      this->CurMountUID = 0;
      this_03 = UDS_ViewerManager::GetInst();
      if (this_03 == (UDS_ViewerManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_W_B_MountsMain::UpdateUIByMountListCount",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_158.Ptr,0x358,L"viewerManager is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6602883945488972967>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                           ,0x359,"false");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        local_320[0] = 0;
        UDS_ViewerManager::SetViewerPreset(this_03,local_320,0);
      }
    }
    else {
      if (this->CategoryListSwitcher != 0) {
        this->CategoryListSwitcher = 0;
        local_2c0 = iVar3;
        local_2c8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
      }
      iVar3 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
      if (this->RightUIVisibilty != SelfHitTestInvisible) {
        this->RightUIVisibilty = SelfHitTestInvisible;
        local_2b0 = iVar3;
        local_2b8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
      }
    }
    local_2a0 = FFieldNotificationClassDescriptor::MountListEntry.BitNumber;
    local_2a8 = FFieldNotificationClassDescriptor::MountListEntry.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
    UpdateMountExtendedText(this,(TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)local_308);
    FVar13.Data = local_330.AllocatorInstance.Data;
  }
LAB_14bfe49d9:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

// UpdateUIByMountListCount @ 14bfe5c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_MountsMain::UpdateUIByMountListCount(UDS_VM_W_B_MountsMain *this,int param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_ViewerManager *this_00;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1b8 [32];
  int local_188 [4];
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  iVar3 = FFieldNotificationClassDescriptor::CategoryListSwitcher.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::CategoryListSwitcher.FieldName;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_1 == 0) {
    if (this->CategoryListSwitcher != 1) {
      this->CategoryListSwitcher = 1;
      local_170 = iVar3;
      local_178 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
    iVar3 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
    if (this->RightUIVisibilty != Collapsed) {
      this->RightUIVisibilty = Collapsed;
      local_160 = iVar3;
      local_168 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
    this->CurMountUID = 0;
    this_00 = UDS_ViewerManager::GetInst();
    if (this_00 == (UDS_ViewerManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_B_MountsMain::UpdateUIByMountListCount",0x2f,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x358,L"viewerManager is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6602883945488972967>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_MountsMain.cpp"
                         ,0x359,"false");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_188[0] = 0;
      UDS_ViewerManager::SetViewerPreset(this_00,local_188,0);
    }
  }
  else {
    if (this->CategoryListSwitcher != 0) {
      this->CategoryListSwitcher = 0;
      local_150 = iVar3;
      local_158 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    local_140 = FFieldNotificationClassDescriptor::RightUIVisibilty.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::RightUIVisibilty.FieldName;
    if (this->RightUIVisibilty != SelfHitTestInvisible) {
      this->RightUIVisibilty = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  return;
}

