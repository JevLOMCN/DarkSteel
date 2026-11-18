// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 44

// SetClickedMoveItemModeButton_WrapperImpl @ 14b6a0ca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Mounts_Interaction_Main::SetClickedMoveItemModeButton_WrapperImpl
          (void *param_1,void *param_2)

{
  UDS_ContentEvent *pUVar1;
  ESlateVisibility aEStackX_8 [32];
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x1f9) = 2;
  *(undefined4 *)((longlong)param_1 + 0x138) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    aEStackX_8[0] = SelfHitTestInvisible;
    FDS_EventDelegate<enum_ESlateVisibility_const_&>::Broadcast
              (&pUVar1->OnContentsBackButtonVisibilityChangedDelegate,aEStackX_8);
  }
  SetMoveItemMode(param_1);
  return;
}

// SetClickedFeedModeButton_WrapperImpl @ 14b6a0d00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Mounts_Interaction_Main::SetClickedFeedModeButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ContentEvent *pUVar1;
  ESlateVisibility aEStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x1f9) = 3;
  *(undefined4 *)((longlong)param_1 + 0x138) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  if (*(char *)((longlong)param_1 + 0x1f0) != '\x04') {
    *(undefined1 *)((longlong)param_1 + 0x1f0) = 4;
    iStack_10 = FFieldNotificationClassDescriptor::MountSustainInfoVisibility.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::MountSustainInfoVisibility.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  *(undefined1 *)((longlong)param_1 + 0x1f1) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::bIsDisableFeedButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsDisableFeedButton.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    aEStackX_8[0] = SelfHitTestInvisible;
    FDS_EventDelegate<enum_ESlateVisibility_const_&>::Broadcast
              (&pUVar1->OnContentsBackButtonVisibilityChangedDelegate,aEStackX_8);
  }
  SetFeedMode(param_1);
  return;
}

// SetClickedEquipmentModeButton_WrapperImpl @ 14b6a0d10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Mounts_Interaction_Main::SetClickedEquipmentModeButton_WrapperImpl
          (void *param_1,void *param_2)

{
  UDS_ContentEvent *pUVar1;
  ESlateVisibility aEStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x1f9) = 4;
  *(undefined4 *)((longlong)param_1 + 0x138) = 4;
  iStack_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  if (*(char *)((longlong)param_1 + 0x194) != '\x04') {
    *(undefined1 *)((longlong)param_1 + 0x194) = 4;
    iStack_10 = FFieldNotificationClassDescriptor::EquipSlotListVisibility.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::EquipSlotListVisibility.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    aEStackX_8[0] = SelfHitTestInvisible;
    FDS_EventDelegate<enum_ESlateVisibility_const_&>::Broadcast
              (&pUVar1->OnContentsBackButtonVisibilityChangedDelegate,aEStackX_8);
  }
  SetEquipmentMode(param_1);
  return;
}

// SetClickedFeedingButton_WrapperImpl @ 14b6a0d20

void __cdecl
UDS_VM_Mounts_Interaction_Main::SetClickedFeedingButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_MountEvent *pUVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  TStack_28._0_8_ = 0;
  TStack_28._8_8_ = 0;
  TStack_28._16_4_ = 0;
  if (*(char *)((longlong)param_1 + 0x1f1) == '\0') {
    UDS_UIMessageManager::OpenMsgByStringUi(0x5573a,Complete_None_01,&TStack_28);
    pUVar1 = UDS_MountEvent::GetEvent();
    if (pUVar1 != (UDS_MountEvent *)0x0) {
      FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnSelectedMountFoodItem,0);
      return;
    }
  }
  else {
    UDS_UIMessageManager::OpenMsgByStringUi(0x5573b,Alert_System_01,&TStack_28);
  }
  return;
}

// SetCheckBoxMoveAllItems_WrapperImpl @ 14b6a0d30

void __cdecl
UDS_VM_Mounts_Interaction_Main::SetCheckBoxMoveAllItems_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(bool *)((longlong)param_1 + 0x13c) = *(char *)((longlong)param_1 + 0x13c) == '\0';
  iStack_10 = FFieldNotificationClassDescriptor::bMoveAllItems.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bMoveAllItems.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6a0d40

UClass * __cdecl UDS_VM_Mounts_Interaction_Main::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mounts_Interaction_Main.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mounts_Interaction_Main",
               &Z_Registration_Info_UClass_UDS_VM_Mounts_Interaction_Main.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mounts_Interaction_Main,0x278,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Mounts_Interaction_Main>,
               InternalVTableHelperCtorCaller<UDS_VM_Mounts_Interaction_Main>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mounts_Interaction_Main.InnerSingleton;
}

// UDS_VM_Mounts_Interaction_Main @ 14b6a6210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_Mounts_Interaction_Main * __thiscall
UDS_VM_Mounts_Interaction_Main::UDS_VM_Mounts_Interaction_Main
          (UDS_VM_Mounts_Interaction_Main *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mounts_Interaction_Main__6B_;
  (this->VM_Mount_Status).field0_0x0.DebugPtr = (UDS_VM_W_Mount_Status *)0x0;
  (this->VM_MountEquipItemList).field0_0x0.DebugPtr = (UDS_VM_MountEquipItemList *)0x0;
  (this->VM_Mounts_Sustain_Slot).field0_0x0.DebugPtr = (UDS_VM_Mounts_Sustain_Slot *)0x0;
  (this->ClickedMoveItemModeButton)._padding_ = '\0';
  (this->ClickedMoveItemModeButton).bIsCustomSelected = false;
  (this->ClickedMoveItemModeButton).bIsLacked = false;
  (this->ClickedMoveItemModeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedMoveItemModeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedMoveItemModeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedMoveItemModeButton).Delegate.field_0x10 = 0;
  (this->ClickedFeedModeButton)._padding_ = '\0';
  (this->ClickedFeedModeButton).bIsCustomSelected = false;
  (this->ClickedFeedModeButton).bIsLacked = false;
  (this->ClickedFeedModeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedFeedModeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedFeedModeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedFeedModeButton).Delegate.field_0x10 = 0;
  (this->ClickedEquipmentModeButton)._padding_ = '\0';
  (this->ClickedEquipmentModeButton).bIsCustomSelected = false;
  (this->ClickedEquipmentModeButton).bIsLacked = false;
  (this->ClickedEquipmentModeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedEquipmentModeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedEquipmentModeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedEquipmentModeButton).Delegate.field_0x10 = 0;
  (this->ClickedFeedingButton)._padding_ = '\0';
  (this->ClickedFeedingButton).bIsCustomSelected = false;
  (this->ClickedFeedingButton).bIsLacked = false;
  (this->ClickedFeedingButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedFeedingButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedFeedingButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedFeedingButton).Delegate.field_0x10 = 0;
  this->BagSwitcherIndex = 0;
  (this->CheckBoxMoveAllItems).bIsActivate = false;
  (this->MoveItemAllCheckBoxLabelText).StringTableType = None;
  (this->MoveItemAllCheckBoxLabelText).StringTableID = 0;
  (this->MoveItemAllCheckBoxLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MoveItemAllCheckBoxLabelText).StringEnumTableNameID.Number = 0;
  (this->MoveItemAllCheckBoxLabelText).DateTime.Ticks = 0;
  (this->MoveItemAllCheckBoxLabelText).TimeSpan.Ticks = 0;
  (this->MoveItemAllCheckBoxLabelText).TimeExpressionType = None;
  (this->MoveItemAllCheckBoxLabelText).IsExpression = false;
  (this->MoveItemAllCheckBoxLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MoveItemAllCheckBoxLabelText).UniqueString.Data.ArrayNum = 0;
  (this->MoveItemAllCheckBoxLabelText).UniqueString.Data.ArrayMax = 0;
  (this->MoveItemAllCheckBoxLabelText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MoveItemAllCheckBoxLabelText).FormatArgs.ArrayNum = 0;
  (this->MoveItemAllCheckBoxLabelText).FormatArgs.ArrayMax = 0;
  (this->FeedingButtonLabelText).StringTableType = None;
  (this->FeedingButtonLabelText).StringTableID = 0;
  (this->FeedingButtonLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FeedingButtonLabelText).StringEnumTableNameID.Number = 0;
  (this->FeedingButtonLabelText).DateTime.Ticks = 0;
  (this->FeedingButtonLabelText).TimeSpan.Ticks = 0;
  (this->FeedingButtonLabelText).TimeExpressionType = None;
  (this->FeedingButtonLabelText).IsExpression = false;
  (this->FeedingButtonLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FeedingButtonLabelText).UniqueString.Data.ArrayNum = 0;
  (this->FeedingButtonLabelText).UniqueString.Data.ArrayMax = 0;
  (this->FeedingButtonLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeedingButtonLabelText).FormatArgs.ArrayNum = 0;
  (this->FeedingButtonLabelText).FormatArgs.ArrayMax = 0;
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->CharacterInventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->MountInventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  return this;
}

// UDS_VM_Mounts_Interaction_Main @ 14b6a63d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_Mounts_Interaction_Main * __thiscall
UDS_VM_Mounts_Interaction_Main::UDS_VM_Mounts_Interaction_Main
          (UDS_VM_Mounts_Interaction_Main *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mounts_Interaction_Main__6B_;
  (this->VM_Mount_Status).field0_0x0.DebugPtr = (UDS_VM_W_Mount_Status *)0x0;
  (this->VM_MountEquipItemList).field0_0x0.DebugPtr = (UDS_VM_MountEquipItemList *)0x0;
  (this->VM_Mounts_Sustain_Slot).field0_0x0.DebugPtr = (UDS_VM_Mounts_Sustain_Slot *)0x0;
  (this->ClickedMoveItemModeButton)._padding_ = '\0';
  (this->ClickedMoveItemModeButton).bIsCustomSelected = false;
  (this->ClickedMoveItemModeButton).bIsLacked = false;
  (this->ClickedMoveItemModeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedMoveItemModeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedMoveItemModeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedMoveItemModeButton).Delegate.field_0x10 = 0;
  (this->ClickedFeedModeButton)._padding_ = '\0';
  (this->ClickedFeedModeButton).bIsCustomSelected = false;
  (this->ClickedFeedModeButton).bIsLacked = false;
  (this->ClickedFeedModeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedFeedModeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedFeedModeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedFeedModeButton).Delegate.field_0x10 = 0;
  (this->ClickedEquipmentModeButton)._padding_ = '\0';
  (this->ClickedEquipmentModeButton).bIsCustomSelected = false;
  (this->ClickedEquipmentModeButton).bIsLacked = false;
  (this->ClickedEquipmentModeButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedEquipmentModeButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedEquipmentModeButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedEquipmentModeButton).Delegate.field_0x10 = 0;
  (this->ClickedFeedingButton)._padding_ = '\0';
  (this->ClickedFeedingButton).bIsCustomSelected = false;
  (this->ClickedFeedingButton).bIsLacked = false;
  (this->ClickedFeedingButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedFeedingButton).Delegate = 0;
  *(undefined8 *)&(this->ClickedFeedingButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedFeedingButton).Delegate.field_0x10 = 0;
  this->BagSwitcherIndex = 0;
  (this->CheckBoxMoveAllItems).bIsActivate = false;
  (this->MoveItemAllCheckBoxLabelText).StringTableType = None;
  (this->MoveItemAllCheckBoxLabelText).StringTableID = 0;
  (this->MoveItemAllCheckBoxLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MoveItemAllCheckBoxLabelText).StringEnumTableNameID.Number = 0;
  (this->MoveItemAllCheckBoxLabelText).DateTime.Ticks = 0;
  (this->MoveItemAllCheckBoxLabelText).TimeSpan.Ticks = 0;
  (this->MoveItemAllCheckBoxLabelText).TimeExpressionType = None;
  (this->MoveItemAllCheckBoxLabelText).IsExpression = false;
  (this->MoveItemAllCheckBoxLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MoveItemAllCheckBoxLabelText).UniqueString.Data.ArrayNum = 0;
  (this->MoveItemAllCheckBoxLabelText).UniqueString.Data.ArrayMax = 0;
  (this->MoveItemAllCheckBoxLabelText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MoveItemAllCheckBoxLabelText).FormatArgs.ArrayNum = 0;
  (this->MoveItemAllCheckBoxLabelText).FormatArgs.ArrayMax = 0;
  (this->FeedingButtonLabelText).StringTableType = None;
  (this->FeedingButtonLabelText).StringTableID = 0;
  (this->FeedingButtonLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FeedingButtonLabelText).StringEnumTableNameID.Number = 0;
  (this->FeedingButtonLabelText).DateTime.Ticks = 0;
  (this->FeedingButtonLabelText).TimeSpan.Ticks = 0;
  (this->FeedingButtonLabelText).TimeExpressionType = None;
  (this->FeedingButtonLabelText).IsExpression = false;
  (this->FeedingButtonLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FeedingButtonLabelText).UniqueString.Data.ArrayNum = 0;
  (this->FeedingButtonLabelText).UniqueString.Data.ArrayMax = 0;
  (this->FeedingButtonLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeedingButtonLabelText).FormatArgs.ArrayNum = 0;
  (this->FeedingButtonLabelText).FormatArgs.ArrayMax = 0;
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->CharacterInventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->MountInventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  return this;
}

// ~UDS_VM_Mounts_Interaction_Main @ 14b6a77b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::~UDS_VM_Mounts_Interaction_Main
          (UDS_VM_Mounts_Interaction_Main *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mounts_Interaction_Main__6B_;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuantityDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuantityDataMap);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FeedingButtonLabelText).FormatArgs.AllocatorInstance.Data,
             (this->FeedingButtonLabelText).FormatArgs.ArrayNum);
  pFVar2 = (this->FeedingButtonLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FeedingButtonLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->MoveItemAllCheckBoxLabelText).FormatArgs.AllocatorInstance.Data,
             (this->MoveItemAllCheckBoxLabelText).FormatArgs.ArrayNum);
  pFVar2 = (this->MoveItemAllCheckBoxLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MoveItemAllCheckBoxLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickedFeedingButton).Delegate);
  pvVar1 = *(void **)&(this->ClickedFeedingButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickedFeedingButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickedEquipmentModeButton).Delegate);
  pvVar1 = *(void **)&(this->ClickedEquipmentModeButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickedEquipmentModeButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickedFeedModeButton).Delegate);
  pvVar1 = *(void **)&(this->ClickedFeedModeButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickedFeedModeButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickedMoveItemModeButton).Delegate);
  pvVar1 = *(void **)&(this->ClickedMoveItemModeButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickedMoveItemModeButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9b00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_Mounts_Interaction_Main::GetFieldNotificationDescriptor(UDS_VM_Mounts_Interaction_Main *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mounts_Interaction_Main::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa7c0

UClass * __cdecl UDS_VM_Mounts_Interaction_Main::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mounts_Interaction_Main.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mounts_Interaction_Main",
               &Z_Registration_Info_UClass_UDS_VM_Mounts_Interaction_Main.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mounts_Interaction_Main,0x278,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Mounts_Interaction_Main>,
               InternalVTableHelperCtorCaller<UDS_VM_Mounts_Interaction_Main>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mounts_Interaction_Main.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Mounts_Interaction_Main @ 14b6aadc0

void __cdecl
UDS_VM_Mounts_Interaction_Main::StaticRegisterNativesUDS_VM_Mounts_Interaction_Main(void)

{
  return;
}

// BindModel @ 14bed8850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Mounts_Interaction_Main::BindModel(UDS_VM_Mounts_Interaction_Main *this)

{
  UDS_ContentEvent *pUVar1;
  UDS_MountEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnContentsBackButttonClickDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Mounts_Interaction_Main>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnContentsBackButttonClickDelegate,
               (UDS_VM_Mounts_Interaction_Main *)&stack0x00000010,(pmf_77eb321e *)this);
  }
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnEquipSlotSelectDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Mounts_Interaction_Main>
              (&pUVar2->OnEquipSlotSelectDelegate,(UDS_VM_Mounts_Interaction_Main *)&stack0x00000010
               ,(pmf_79ac4260 *)this);
  }
  return;
}

// GetItemDataFromEvent @ 14beee3a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
UDS_VM_Mounts_Interaction_Main::GetItemDataFromEvent
          (UDS_VM_Mounts_Interaction_Main *this,UDS_ModelEventItemBase *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong in_R8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  if ((in_R8 == 0) || ((*(uint *)(in_R8 + 8) >> 0x1e & 1) != 0)) {
    param_1->_padding_ = 0;
    goto LAB_14beee4ac;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(in_R8 + 0x28));
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(in_R8 + 0x28));
    if (pUVar3 == (UObject *)0x0) {
LAB_14beee419:
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14beee419;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      (**(code **)(*(longlong *)pUVar3 + 0x3a0))(pUVar3,param_1);
      return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  param_1->_padding_ = 0;
LAB_14beee4ac:
  local_res20 = (UObject *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetQuantityData @ 14bef0130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr> __thiscall
UDS_VM_Mounts_Interaction_Main::GetQuantityData
          (UDS_VM_Mounts_Interaction_Main *this,long64 param_1,EDS_InventoryType param_2)

{
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *this_00;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 TVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 *pTVar5;
  TObjectPtr<UDS_InventoryQuantityData> *pTVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined7 in_register_00000081;
  EDS_InventoryType in_R9B;
  undefined1 auStackY_118 [32];
  TObjectPtr<UDS_InventoryQuantityData>_u_0 local_e8;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 local_e0;
  TPairInitializer<__int64_const_&,TObjectPtr<UDS_InventoryQuantityData>_&&> local_d8;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_e8._1_7_ = in_register_00000081;
  local_e8._0_1_ = param_2;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = &this->QuantityDataMap;
  if (*(int *)&(this->QuantityDataMap).field_0x8 != *(int *)&(this->QuantityDataMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->QuantityDataMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->QuantityDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->QuantityDataMap).field_0x48 - 1U &
                              (int)((uint7)in_register_00000081 >> 0x18) * 0x17 + local_e8._0_4_) *
                              4);
    if (iVar2 != -1) {
      do {
        if (*(UDS_InventoryQuantityData **)
             (*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18) == local_e8.DebugPtr)
        goto LAB_14bef0296;
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_InventoryQuantityData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = pUVar3;
  local_e0.DebugPtr =
       (UDS_InventoryQuantityData *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_e0.DebugPtr != (UDS_InventoryQuantityData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0.DebugPtr);
  }
  local_d8.Value = (TObjectPtr<UDS_InventoryQuantityData> *)&local_e8;
  local_c8 = &local_e0;
  TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_const_&,TObjectPtr<UDS_InventoryQuantityData>_&&>_>
            ((TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
              *)this_00,&local_d8,(bool *)&local_d8.Value);
  pTVar5 = &TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
            ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
                           *)this_00,(long64)local_e8)->field0_0x0;
  UDS_InventoryQuantityData::Init(pTVar5->DebugPtr,(long64)local_e8,in_R9B,0,0,-1);
LAB_14bef0296:
  pTVar6 = TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
           ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
                          *)this_00,(long64)local_e8);
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar6->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UDS_InventoryQuantityData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_InventoryQuantityData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_e0.ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar1.DebugPtr != (UDS_InventoryQuantityData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_e0);
  return (TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitViewModel @ 14bef3500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Mounts_Interaction_Main::InitViewModel(UDS_VM_Mounts_Interaction_Main *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_W_Mount_Status *pUVar3;
  UDS_VM_MountEquipItemList *pUVar4;
  UDS_VM_Mounts_Sustain_Slot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  FName local_b8;
  int local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->VM_Mount_Status).field0_0x0.DebugPtr == (UDS_VM_W_Mount_Status *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_W_Mount_Status_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_W_Mount_Status_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar3 = (UDS_VM_W_Mount_Status *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_W_Mount_Status *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_W_Mount_Status *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_Mount_Status).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_MountEquipItemList).field0_0x0.DebugPtr == (UDS_VM_MountEquipItemList *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_MountEquipItemList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_MountEquipItemList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar4 = (UDS_VM_MountEquipItemList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_MountEquipItemList *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_MountEquipItemList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_MountEquipItemList).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_Mounts_Sustain_Slot).field0_0x0.DebugPtr == (UDS_VM_Mounts_Sustain_Slot *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Mounts_Sustain_Slot_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Mounts_Sustain_Slot_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_Mounts_Sustain_Slot *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Mounts_Sustain_Slot *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Mounts_Sustain_Slot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_Mounts_Sustain_Slot).field0_0x0.DebugPtr = pUVar5;
  }
  this->MoveItemButtonIconID = 0x35b6c;
  local_b0 = FFieldNotificationClassDescriptor::MoveItemButtonIconID.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::MoveItemButtonIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  this->FeedButtonIconID = 0x35b6d;
  local_b0 = FFieldNotificationClassDescriptor::FeedButtonIconID.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::FeedButtonIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  this->EquipmentButtonIconID = 0x35b6e;
  local_b0 = FFieldNotificationClassDescriptor::EquipmentButtonIconID.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::EquipmentButtonIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  FDS_Text::SetTextFromStringTable(&this->MoveItemAllCheckBoxLabelText,StringUi,0x64191);
  local_b0 = FFieldNotificationClassDescriptor::MoveItemAllCheckBoxLabelText.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::MoveItemAllCheckBoxLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  FDS_Text::SetTextFromStringTable(&this->FeedingButtonLabelText,StringUi,0x5573d);
  local_b0 = FFieldNotificationClassDescriptor::FeedingButtonLabelText.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::FeedingButtonLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  this->bMoveAllItems = true;
  local_b0 = FFieldNotificationClassDescriptor::bMoveAllItems.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::bMoveAllItems.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  this->bIsDraggingItem = false;
  this->StallVisibility = Collapsed;
  local_b0 = FFieldNotificationClassDescriptor::StallVisibility.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::StallVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  return;
}

// MoveAllItems @ 14bef6460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::MoveAllItems
          (UDS_VM_Mounts_Interaction_Main *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          EDS_InventoryType param_2,EDS_InventoryType param_3)

{
  code *pcVar1;
  DS_ItemInventoryMoveQuantityData DVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  EDS_ValidateResult EVar6;
  int iVar7;
  UObject *pUVar8;
  int *piVar9;
  UDS_ItemData *this_00;
  FScriptContainerElement *this_01;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_148 [32];
  EDS_InventoryType local_f8 [8];
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_f0;
  FWeakObjectPtr local_e0;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_d8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_b0;
  undefined1 local_98 [80];
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_res10[0] = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar5) {
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    DS_ItemInventoryMoveData::DS_ItemInventoryMoveData((DS_ItemInventoryMoveData *)local_98);
    local_f8[0] = param_2;
    pUVar8 = FWeakObjectPtr::Get(local_res10);
    piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar8[10].field_0x18,(uint)param_2,local_f8);
    local_e0.ObjectIndex = *piVar9;
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
    local_e0.ObjectSerialNumber = UDS_ItemData::GetStackCount_UnTradable(this_00,param_2);
    pUVar8 = FWeakObjectPtr::Get(local_res10);
    DS_ItemInventoryMoveData::Init
              ((DS_ItemInventoryMoveData *)local_98,*(long64 *)&pUVar8[8].field_0x8);
    DVar2.UntradableQuantity = local_e0.ObjectSerialNumber;
    DVar2.TradableQuantity = local_e0.ObjectIndex;
    DS_ItemInventoryMoveData::SetMoveData
              ((DS_ItemInventoryMoveData *)local_98,param_3,param_2,DVar2);
    if (((local_f0.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)local_98) &&
        ((FScriptContainerElement *)local_98 <
         local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 0x58)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar7 = local_f0.ArrayNum;
    if (local_f0.ArrayNum == local_f0.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
    }
    local_f0.ArrayNum = iVar7 + 1;
    *(undefined8 *)&local_f0.AllocatorInstance.Data[(longlong)iVar7 * 0x58].field_0x0 =
         local_98._0_8_;
    this_01 = local_f0.AllocatorInstance.Data + (longlong)iVar7 * 0x58 + 8;
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_01 + 8) = 0;
    *(undefined8 *)(this_01 + 0x20) = 0;
    *(undefined4 *)(this_01 + 0x28) = 0;
    *(undefined4 *)(this_01 + 0x2c) = 0x80;
    *(undefined4 *)(this_01 + 0x30) = 0xffffffff;
    *(undefined4 *)(this_01 + 0x34) = 0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    *(undefined4 *)(this_01 + 0x48) = 0;
    TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
    ::operator=(this_01,(TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                         *)(local_98 + 8));
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = FWeakObjectPtr::IsValid(&local_e0);
    if (bVar5) {
      EVar6 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion(param_3,param_2,&local_f0)
      ;
      if (EVar6 == MoveEnable) {
        pUVar8 = FWeakObjectPtr::Get(&local_e0);
        FVar3.Data = local_f0.AllocatorInstance.Data;
        iVar4 = local_f0.ArrayNum;
        iVar7 = *(int *)&pUVar8[9].field_0x10;
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = local_f0.ArrayNum;
        if (local_f0.ArrayNum == 0) {
          local_d8.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,local_f0.ArrayNum,0,&local_d8.AllocatorInstance,local_f0.ArrayNum,
                     &local_d8.ArrayMax);
          ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                    (local_d8.AllocatorInstance.Data,(DS_ItemInventoryMoveData *)FVar3.Data,iVar4);
        }
        FDS_ItemInventoryMoveService::RequestItemInventoryMove(0,&local_d8,iVar7);
        local_b0._0_8_ = 0;
        local_b0._8_8_ = 0;
        local_b0._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x664bb,Complete_None_01,&local_b0);
      }
      else if (EVar6 == MoveDisable) {
        local_c8._0_8_ = 0;
        local_c8._8_8_ = 0;
        local_c8._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x664bf,Alert_None_01,&local_c8);
      }
    }
    local_48 = 0;
    if ((void *)local_98._72_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._72_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_98 + 8);
    DestructItems<DS_ItemInventoryMoveData,int>
              ((DS_ItemInventoryMoveData *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    if ((DS_ItemInventoryMoveData *)local_f0.AllocatorInstance.Data !=
        (DS_ItemInventoryMoveData *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
  return;
}

// OnCheckBoxMoveAllItems @ 14bef8540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnCheckBoxMoveAllItems
          (UDS_VM_Mounts_Interaction_Main *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  this->bMoveAllItems = this->bMoveAllItems == false;
  local_10 = FFieldNotificationClassDescriptor::bMoveAllItems.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bMoveAllItems.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickEquipmentMode @ 14bef94d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnClickEquipmentMode
          (UDS_VM_Mounts_Interaction_Main *this,FDS_ButtonEventField *param_1)

{
  UDS_ContentEvent *pUVar1;
  ESlateVisibility local_res8 [8];
  FName local_18;
  int local_10;
  
  this->CurrentMountInteraction = Equipment;
  this->BagSwitcherIndex = 4;
  local_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  if (this->EquipSlotListVisibility != SelfHitTestInvisible) {
    this->EquipSlotListVisibility = SelfHitTestInvisible;
    local_10 = FFieldNotificationClassDescriptor::EquipSlotListVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EquipSlotListVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    local_res8[0] = SelfHitTestInvisible;
    FDS_EventDelegate<enum_ESlateVisibility_const_&>::Broadcast
              (&pUVar1->OnContentsBackButtonVisibilityChangedDelegate,local_res8);
  }
  SetEquipmentMode(this);
  return;
}

// OnClickFeedMode @ 14bef9780

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnClickFeedMode
          (UDS_VM_Mounts_Interaction_Main *this,FDS_ButtonEventField *param_1)

{
  UDS_ContentEvent *pUVar1;
  ESlateVisibility local_res8 [8];
  FName local_18;
  int local_10;
  
  this->CurrentMountInteraction = Feed;
  this->BagSwitcherIndex = 2;
  local_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  if (this->MountSustainInfoVisibility != SelfHitTestInvisible) {
    this->MountSustainInfoVisibility = SelfHitTestInvisible;
    local_10 = FFieldNotificationClassDescriptor::MountSustainInfoVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MountSustainInfoVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this->bIsDisableFeedButton = true;
  local_10 = FFieldNotificationClassDescriptor::bIsDisableFeedButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsDisableFeedButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    local_res8[0] = SelfHitTestInvisible;
    FDS_EventDelegate<enum_ESlateVisibility_const_&>::Broadcast
              (&pUVar1->OnContentsBackButtonVisibilityChangedDelegate,local_res8);
  }
  SetFeedMode(this);
  return;
}

// OnClickFeedingButton @ 14bef9870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnClickFeedingButton
          (UDS_VM_Mounts_Interaction_Main *this,FDS_ButtonEventField *param_1)

{
  UDS_MountEvent *pUVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  if (this->bIsDisableFeedButton == false) {
    UDS_UIMessageManager::OpenMsgByStringUi(0x5573a,Complete_None_01,&local_28);
    pUVar1 = UDS_MountEvent::GetEvent();
    if (pUVar1 != (UDS_MountEvent *)0x0) {
      FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnSelectedMountFoodItem,0);
      return;
    }
  }
  else {
    UDS_UIMessageManager::OpenMsgByStringUi(0x5573b,Alert_System_01,&local_28);
  }
  return;
}

// OnClickMovemItemMode @ 14befa290

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnClickMovemItemMode
          (UDS_VM_Mounts_Interaction_Main *this,FDS_ButtonEventField *param_1)

{
  UDS_ContentEvent *pUVar1;
  ESlateVisibility local_res8 [32];
  FName local_18;
  int local_10;
  
  this->CurrentMountInteraction = MoveItem;
  this->BagSwitcherIndex = 1;
  local_10 = FFieldNotificationClassDescriptor::BagSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BagSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    local_res8[0] = SelfHitTestInvisible;
    FDS_EventDelegate<enum_ESlateVisibility_const_&>::Broadcast
              (&pUVar1->OnContentsBackButtonVisibilityChangedDelegate,local_res8);
  }
  SetMoveItemMode(this);
  return;
}

// OnClickedQuantitySelectionPopupConfirm @ 14befb430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnClickedQuantitySelectionPopupConfirm
          (UDS_VM_Mounts_Interaction_Main *this,EDS_InventoryType param_1,EDS_InventoryType param_2)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *pTVar5;
  bool bVar6;
  EDS_InventoryType EVar7;
  EDS_ValidateResult EVar8;
  int iVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  long64 lVar13;
  EDS_MessageDefineType EVar14;
  FScriptContainerElement *pFVar15;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *pTVar16;
  DS_ItemInventoryMoveQuantityData DVar17;
  uint *puVar18;
  undefined1 auStackY_218 [32];
  EDS_InventoryType local_1c8 [8];
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_1b0;
  DS_ItemInventoryMoveQuantityData local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  FWeakObjectPtr local_188;
  int local_180;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  initializer_list<TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&>_>
  local_118;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_108;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_f0;
  TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> local_d8;
  EDS_InventoryType *local_c8;
  undefined8 *local_c0;
  EDS_InventoryType *local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [80];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  UDS_PlayerData::GetMainPlayerData();
  bVar6 = FWeakObjectPtr::IsValid(&local_188);
  if (!bVar6) {
    return;
  }
  local_178 = &this->QuantityDataMap;
  local_168 = &(this->QuantityDataMap).field_0x10;
  uStack_16c = 1;
  local_158 = 0;
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iStack_170 = 0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  iVar9 = *(int *)&(this->QuantityDataMap).field_0x28;
  iStack_15c = 0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(this->QuantityDataMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_168;
    }
    uVar2 = *puVar18;
    iStack_170 = 0;
    local_158 = 0;
    while (uVar2 == 0) {
      lVar12 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      iStack_15c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_14befb52c;
      uVar2 = puVar18[lVar12 + 1];
    }
    uStack_16c = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_16c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_180 = (int)lVar12;
    iStack_15c = local_158 + -1 + local_180;
    if (iVar9 < iStack_15c) {
      iStack_15c = iVar9;
    }
  }
LAB_14befb52c:
  uStack_160 = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_16c,iStack_170);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = iStack_15c;
  TStack_140.BaseBitIndex = local_158;
  iStack_154 = iStack_15c;
  local_148 = local_178;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_168;
  TStack_140.CurrentBitIndex = iStack_15c;
  if (iStack_15c < iVar9) {
    do {
      iVar9 = TStack_140.CurrentBitIndex;
      local_d8.Key = local_1c8;
      local_a8._0_8_ = (EDS_InventoryType *)0x0;
      local_d8.Value = &local_1a0;
      local_1c8[0] = PlayerNormal;
      local_c8 = local_1c8 + 1;
      local_1a0.TradableQuantity = 0;
      local_1a0.UntradableQuantity = 0;
      local_c0 = &local_198;
      local_b8 = local_1c8 + 2;
      local_b0 = &local_190;
      local_118._First = &local_d8;
      local_118._Last =
           (TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> *)
           local_a8;
      local_1c8[1] = 3;
      local_198 = 0;
      local_1c8[2] = 6;
      local_190 = 0;
      TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
      ::
      TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                (local_a8 + 8,&local_118);
      pTVar5 = local_148;
      DS_ItemInventoryMoveData::Init
                ((DS_ItemInventoryMoveData *)local_a8,
                 *(long64 *)(*(longlong *)local_148 + (longlong)iVar9 * 0x18));
      lVar12 = (longlong)iVar9 * 0x18;
      iVar9 = (**(code **)(**(longlong **)(*(longlong *)pTVar5 + 8 + (longlong)iVar9 * 0x18) + 0x2e8
                          ))();
      iVar10 = (**(code **)(**(longlong **)(*(longlong *)pTVar5 + 8 + lVar12) + 0x2f0))();
      EVar7 = (**(code **)(**(longlong **)(*(longlong *)pTVar5 + 8 + lVar12) + 0x2c0))();
      DVar17.UntradableQuantity = iVar10;
      DVar17.TradableQuantity = iVar9;
      DS_ItemInventoryMoveData::SetMoveData
                ((DS_ItemInventoryMoveData *)local_a8,param_1,EVar7,DVar17);
      if (((local_1c0.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)local_a8) &&
          ((FScriptContainerElement *)local_a8 <
           local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayMax * 0x58)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = local_1c0.ArrayNum;
      if (local_1c0.ArrayNum == local_1c0.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&local_1c0.AllocatorInstance,&local_1c0.ArrayMax);
      }
      local_1c0.ArrayNum = iVar9 + 1;
      pFVar15 = local_1c0.AllocatorInstance.Data + (longlong)iVar9 * 0x58;
      *(undefined8 *)&pFVar15->field_0x0 = local_a8._0_8_;
      *(undefined8 *)(pFVar15 + 8) = 0;
      *(undefined8 *)(pFVar15 + 0x10) = 0;
      *(undefined8 *)(pFVar15 + 0x28) = 0;
      *(undefined4 *)(pFVar15 + 0x30) = 0;
      *(undefined4 *)(pFVar15 + 0x34) = 0x80;
      *(undefined4 *)(pFVar15 + 0x38) = 0xffffffff;
      *(undefined4 *)(pFVar15 + 0x3c) = 0;
      *(undefined8 *)(pFVar15 + 0x48) = 0;
      *(undefined4 *)(pFVar15 + 0x50) = 0;
      TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
      ::operator=(pFVar15 + 8,
                  (TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                   *)(local_a8 + 8));
      local_58 = 0;
      if ((void *)local_a8._72_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._72_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_a8 + 8);
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  EVar8 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion(param_1,param_2,&local_1c0);
  if (EVar8 == MoveEnable) {
    pUVar11 = FWeakObjectPtr::Get(&local_188);
    FVar4.Data = local_1c0.AllocatorInstance.Data;
    iVar10 = local_1c0.ArrayNum;
    iVar9 = *(int *)&pUVar11[9].field_0x10;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = local_1c0.ArrayNum;
    if (local_1c0.ArrayNum == 0) {
      local_1b0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,local_1c0.ArrayNum,0,&local_1b0.AllocatorInstance,local_1c0.ArrayNum,
                 &local_1b0.ArrayMax);
      ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                (local_1b0.AllocatorInstance.Data,(DS_ItemInventoryMoveData *)FVar4.Data,iVar10);
    }
    FDS_ItemInventoryMoveService::RequestItemInventoryMove(0,&local_1b0,iVar9);
    pTVar16 = &local_f0;
    local_f0._0_8_ = 0;
    EVar14 = Complete_None_01;
    local_f0._8_8_ = 0;
    lVar13 = 0x664bb;
    local_f0._16_4_ = 0;
  }
  else {
    if (EVar8 != MoveDisable) goto LAB_14befb861;
    local_108._0_8_ = 0;
    pTVar16 = &local_108;
    local_108._8_8_ = 0;
    EVar14 = Alert_None_01;
    local_108._16_4_ = 0;
    lVar13 = 0x664bf;
  }
  UDS_UIMessageManager::OpenMsgByStringUi(lVar13,EVar14,pTVar16);
LAB_14befb861:
  DestructItems<DS_ItemInventoryMoveData,int>
            ((DS_ItemInventoryMoveData *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
  if ((DS_ItemInventoryMoveData *)local_1c0.AllocatorInstance.Data !=
      (DS_ItemInventoryMoveData *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  return;
}

// OnDragDetected @ 14befc880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnDragDetected
          (UDS_VM_Mounts_Interaction_Main *this,UDS_ModelEventItemBase *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  GetItemDataFromEvent(this,(UDS_ModelEventItemBase *)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this->bIsDraggingItem = true;
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    this->MoveItemUID = *(long64 *)&pUVar2[8].field_0x8;
  }
  return;
}

// OnEventCharacterInventoryItemSlot @ 14befc910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnEventCharacterInventoryItemSlot
          (UDS_VM_Mounts_Interaction_Main *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  ProcessItemMoveEvent(this,param_1,PlayerNormal,Mount);
  return;
}

// OnEventMountEquipItemSlot @ 14befd060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnEventMountEquipItemSlot
          (UDS_VM_Mounts_Interaction_Main *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_3d8 [32];
  FWeakObjectPtr local_3a8;
  FWeakObjectPtr local_3a0;
  FWeakObjectPtr local_398;
  FWeakObjectPtr local_390;
  UObject *local_388;
  UObject *local_380;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_378._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_378,"UDS_VM_Mounts_Interaction_Main::OnEventMountEquipItemSlot",0x39,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_378.Ptr,0x172,L"ModelEvent is Invalid.");
    if ((void *)local_378._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_378._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar6 == (UObject *)0x0) {
LAB_14befd154:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14befd154;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_3a8.ObjectIndex = 0;
  local_3a8.ObjectSerialNumber = 0;
  local_388 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_3a8,(FObjectPtr)&local_388);
  bVar4 = FWeakObjectPtr::IsValid(&local_3a8);
  if (!bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_VM_Mounts_Interaction_Main::OnEventMountEquipItemSlot",0x39,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_258.Ptr,0x179,L"ModelEventItemBase is Invalid.")
    ;
    if ((void *)local_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_258._padding_);
    return;
  }
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_390);
  bVar4 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_390,(void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Mounts_Interaction_Main::OnEventMountEquipItemSlot",0x39,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x180,L"mountDataSet is nullptr.");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar6 + 1));
  if (!bVar4) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_3a8);
  if ((*(int *)&pUVar6[5].field_0x8 != 7) && (*(int *)&pUVar6[5].field_0x8 != 10)) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14befd35d;
  }
  pUVar6 = (UObject *)0x0;
LAB_14befd35d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_3a0.ObjectIndex = 0;
  local_3a0.ObjectSerialNumber = 0;
  local_380 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_3a0,(FObjectPtr)&local_380);
  bVar4 = FWeakObjectPtr::IsValid(&local_3a0);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&local_3a0);
    (**(code **)(*(longlong *)pUVar6 + 0x3a0))(pUVar6,&local_398);
    bVar4 = FWeakObjectPtr::IsValid(&local_398);
    if ((bVar4) && (bVar4 = FWeakObjectPtr::IsValid(&local_398), bVar4)) {
      pUVar6 = FWeakObjectPtr::Get(&local_390);
      uVar2 = *(ulong64 *)(pUVar6 + 5);
      pUVar6 = FWeakObjectPtr::Get(&local_390);
      FDS_MountService::TryEquipItemToMount
                (*(long64 *)&pUVar6[4].field_0x20,uVar2,
                 (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_398);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8055233256959770228>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_Mounts_Interaction_Main.cpp"
                       ,0x18c,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// OnEventMountEquipSlot @ 14befd480

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnEventMountEquipSlot
          (UDS_VM_Mounts_Interaction_Main *this,EDS_EquipSlotType param_1)

{
  UDS_M_InventoryBag *pUVar1;
  code *pcVar2;
  bool bVar3;
  FDS_SlotBaseTableRow *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  if ((this->CurrentMountInteraction == Equipment) &&
     ((this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr != (UDS_M_InventoryBag *)0x0)) {
    this_00 = FDS_SlotBaseTableRow::GetRef((longlong)(int)param_1,true);
    bVar3 = FDS_SlotBaseTableRow::IsValid(this_00);
    if (bVar3) {
      UDS_M_InventoryBag::OnClickedTab
                ((this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr,this_00->ClickLinkedBag);
      pUVar1 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e0);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      (*pcVar2)(pUVar1,local_res8,0);
    }
  }
  return;
}

// OnEventMountFoodItemSlot @ 14befd520

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnEventMountFoodItemSlot
          (UDS_VM_Mounts_Interaction_Main *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FName FVar4;
  UClass *pUVar5;
  UDS_MountEvent *pUVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_18;
  int local_10;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar3 + 1));
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  FVar4 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 1));
  if (FVar4 != (FName)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14befd59f;
  }
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
LAB_14befd59f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_18 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_18);
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  if ((pUVar3 == (UObject *)0x0) || ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) != 0)) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar3 != (UObject *)0x0) {
      Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    }
    GetItemDataFromEvent(this,(UDS_ModelEventItemBase *)&local_res20);
    bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
    if (!bVar2) {
      pUVar6 = UDS_MountEvent::GetEvent();
      if (pUVar6 != (UDS_MountEvent *)0x0) {
        pUVar3 = FWeakObjectPtr::Get(&local_res20);
        FDS_EventDelegate<int_const_>::Broadcast
                  (&pUVar6->OnSelectedMountFoodItem,*(int *)&pUVar3[8].field_0x10);
      }
      this->bIsDisableFeedButton = false;
      local_10 = FFieldNotificationClassDescriptor::bIsDisableFeedButton.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::bIsDisableFeedButton.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnEventMountInventoryItemSlot @ 14befd6d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnEventMountInventoryItemSlot
          (UDS_VM_Mounts_Interaction_Main *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  ProcessItemMoveEvent(this,param_1,Mount,PlayerNormal);
  return;
}

// OnItemDrop @ 14befe500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnItemDrop
          (UDS_VM_Mounts_Interaction_Main *this,UDS_ModelEventItemBase *param_1,
          EDS_InventoryType param_2,EDS_InventoryType param_3)

{
  FDS_DragDropEventField *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FDS_ItemSlotInfo *pFVar6;
  UDragDropOperation *pUVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_18;
  UDragDropOperation *local_10;
  
  if ((param_1->DragDropEventField).Object == (FDS_DragDropEventField *)0x0) {
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
  pFVar1 = (param_1->DragDropEventField).Object;
  if ((pFVar1->DragDropOperation).field0_0x0.DebugPtr != (UDragDropOperation *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&pFVar1->DragDropOperation,pUVar4);
    if (bVar3) {
      pUVar7 = (pFVar1->DragDropOperation).field0_0x0.DebugPtr;
      goto LAB_14befe57d;
    }
  }
  pUVar7 = (UDragDropOperation *)0x0;
LAB_14befe57d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDragDropOperation *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_10 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDragDropOperation *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_10);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    pFVar6 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)&pUVar5[4].field_0x8);
    if ((((pFVar6 != (FDS_ItemSlotInfo *)0x0) && (this->bIsDraggingItem != false)) &&
        (0 < this->MoveItemUID)) && (this->MoveItemUID == pFVar6->ItemUID)) {
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_18);
      bVar3 = FWeakObjectPtr::IsValid(&local_18);
      if (bVar3) {
        if (this->bMoveAllItems == false) {
          OpenQuantitySelectionPopup
                    (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_18,param_2,param_3);
        }
        else {
          MoveAllItems(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_18,param_2,param_3);
        }
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8055233256959770109>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_Mounts_Interaction_Main.cpp"
                       ,0x203,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnRightButtonClicked @ 14bf035d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnRightButtonClicked
          (UDS_VM_Mounts_Interaction_Main *this,UDS_ModelEventItemBase *param_1,
          EDS_InventoryType param_2,EDS_InventoryType param_3)

{
  bool bVar1;
  FWeakObjectPtr local_18;
  
  GetItemDataFromEvent(this,(UDS_ModelEventItemBase *)&stack0xffffffffffffffe8);
  bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&stack0xffffffffffffffe8,
                     (void *)0x0);
  if (!bVar1) {
    if (this->bMoveAllItems != false) {
      MoveAllItems(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_18,param_2,param_3);
      return;
    }
    OpenQuantitySelectionPopup
              (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_18,param_2,param_3);
  }
  return;
}

// OnSetViewModel @ 14bf06f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OnSetViewModel
          (UDS_VM_Mounts_Interaction_Main *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  long64 lVar2;
  UDS_VM_W_Mount_Status *this_00;
  UDS_VM_MountEquipItemList *this_01;
  UDS_VM_Mounts_Sustain_Slot *this_02;
  code *pcVar3;
  undefined4 uVar4;
  FDS_VMContext_MountManagement *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FName *pFVar9;
  TTuple<FName,unsigned___int64> *pTVar10;
  FDS_ViewModelContext *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_03;
  UDS_MountEvent *pUVar13;
  FDS_ViewModelContext *pFVar14;
  FDS_ViewModelContext *pFVar15;
  undefined1 auStackY_348 [32];
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  TSharedPtr<FDS_ViewModelContext,1> local_308;
  TSharedPtr<FDS_VMContext_MountManagement,1> local_2f8;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_2e8;
  TSharedPtr<FDS_ViewModelContext,1> local_2d8;
  TSharedPtr<FDS_ViewModelContext,1> local_2c8;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  FName local_2a8 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_318);
  bVar6 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_318,(void *)0x0);
  if (bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_Mounts_Interaction_Main::OnSetViewModel",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0x52,L"mountDataSet is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&local_318);
  pFVar15 = (FDS_ViewModelContext *)0x0;
  lVar2 = *(long64 *)&pUVar8[4].field_0x20;
  if ((this->VM_Mount_Status).field0_0x0.DebugPtr != (UDS_VM_W_Mount_Status *)0x0) {
    local_2c8.Object = param_1->Object;
    local_2c8.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_2e8,&local_2c8);
    if (local_2e8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8055233256959770531>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_Mounts_Interaction_Main.cpp"
                         ,0x5d,"false");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Mounts_Interaction_Main::OnSetViewModel",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_158.Ptr,0x5e,L"contextContentsOpen is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
      goto LAB_14bf0743a;
    }
    local_310 = ((local_2e8.Object)->ContentArguments).WeakPtr;
    bVar6 = FWeakObjectPtr::IsValid(&local_310);
    pFVar14 = pFVar15;
    if (bVar6) {
      pUVar8 = FWeakObjectPtr::Get(&local_310);
      pFVar9 = ::FName::FName(local_2a8,L"InteractionMountEntityID");
      pTVar10 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                        *)(pUVar8 + 9),*pFVar9);
      if (pTVar10 != (TTuple<FName,unsigned___int64> *)0x0) {
        pFVar14 = *(FDS_ViewModelContext **)&pTVar10->field_0x8;
      }
    }
    MakeContext<FDS_VMContext_MountManagement>(&local_2f8);
    pFVar5 = local_2f8.Object;
    if ((local_2f8.Object == (FDS_VMContext_MountManagement *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x168;
    pFVar5->TargetEntityID = (ulong64)pFVar14;
    this_00 = (this->VM_Mount_Status).field0_0x0.DebugPtr;
    local_298.Object = (FDS_ViewModelContext *)local_2f8.Object;
    local_298.SharedReferenceCount.ReferenceController =
         local_2f8.SharedReferenceCount.ReferenceController;
    if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_298);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_MountEquipItemList).field0_0x0.DebugPtr != (UDS_VM_MountEquipItemList *)0x0) {
    pFVar11 = ::operator_new(0x38);
    pFVar14 = pFVar15;
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar11->DerivedStaticStruct = 0;
      (pFVar11->ViewModelName).ComparisonIndex = 0;
      (pFVar11->ViewModelName).Number = 0;
      pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_MountEquipItemSlotList__6B_;
      pFVar11[1]._padding_ = 0;
      *(undefined8 *)&pFVar11[1].DerivedStaticStruct = 0;
      pFVar11[1].ViewModelName.ComparisonIndex = 0;
      pFVar11[1].ViewModelName.Number = 0;
      pFVar14 = pFVar11;
    }
    pFVar11 = ::operator_new(0x20);
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountEquipItemSlotList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar14;
      pFVar15 = pFVar11;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar12 = FDS_ViewModelContext_MountEquipItemSlotList::StaticStruct();
    *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar12;
    this_03 = UDS_ViewModelContextManager::GetInst();
    if (this_03 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_2d8.Object = pFVar14;
      local_2d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
      UDS_ViewModelContextManager::RegisterContext(this_03,&local_2d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
    }
    pFVar14->ViewModelTemplateKey = MountEquipItemList;
    pFVar14[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
    pUVar8 = FWeakObjectPtr::Get(&local_318);
    uVar4 = *(undefined4 *)&pUVar8[5].field_0x4;
    pFVar14[1].ViewModelName.ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar8[5].field_0x0;
    pFVar14[1].ViewModelName.Number = uVar4;
    *(long64 *)&pFVar14[1].DerivedStaticStruct = lVar2;
    this_01 = (this->VM_MountEquipItemList).field0_0x0.DebugPtr;
    if (pFVar15 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar15->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_2b8.Object = pFVar14;
    local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_2b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
  }
  if ((this->VM_Mounts_Sustain_Slot).field0_0x0.DebugPtr != (UDS_VM_Mounts_Sustain_Slot *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_308);
    if ((local_308.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (local_308.Object)->ViewModelTemplateKey = MountSustainSlot;
    this_02 = (this->VM_Mounts_Sustain_Slot).field0_0x0.DebugPtr;
    local_288.Object = local_308.Object;
    local_288.SharedReferenceCount.ReferenceController =
         local_308.SharedReferenceCount.ReferenceController;
    if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_288);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
  }
  pUVar13 = UDS_MountEvent::GetEvent();
  if (pUVar13 != (UDS_MountEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar13->MountDataSlotSelectedChangeDel,lVar2);
  }
  SetInteractionMain(this);
LAB_14bf0743a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenQuantitySelectionPopup @ 14bf0e970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::OpenQuantitySelectionPopup
          (UDS_VM_Mounts_Interaction_Main *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          EDS_InventoryType param_2,EDS_InventoryType param_3)

{
  undefined1 *puVar1;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UDS_CommonPopupManager *this_01;
  undefined8 *puVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr> TVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  UDS_CommonPopupManager *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  UDS_GameInstance *local_70;
  UDS_VM_Mounts_Interaction_Main *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [12];
  undefined4 local_2c;
  
  local_res10 = param_1.WeakPtr;
  local_70 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UDS_GameInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UDS_GameInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_70);
  bVar4 = FWeakObjectPtr::IsValid(&local_a0);
  if (bVar4) {
    local_98 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_98 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_98 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_98);
    bVar4 = FWeakObjectPtr::IsValid(&local_a8);
    if (bVar4) {
      bVar4 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar4) {
        this_00 = &this->QuantityDataMap;
        bVar4 = 1 < *(int *)&(this->QuantityDataMap).field_0x48;
        if (!bVar4) {
          TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        puVar1 = &(this->QuantityDataMap).field_0xc;
        *(undefined4 *)&(this->QuantityDataMap).field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
        iVar2 = *(int *)&(this->QuantityDataMap).field_0x2c;
        *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
        if ((iVar2 < 0) || (0x80 < iVar2)) {
          *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuantityDataMap).field_0x10,0);
        }
        if (bVar4) {
          *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 1;
          TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
                    *)this_00);
        }
        this_01 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_a8);
        uStack_8c = local_2c;
        uStack_90 = 0;
        local_98 = (UDS_CommonPopupManager *)OnClickedQuantitySelectionPopupConfirm;
        local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_80.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_88,(FWriteAccessScope *)&local_60);
        local_48 = &local_80;
        puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDS_InventoryType__W42___6B_
          ;
          *(EDS_InventoryType *)(puVar5 + 1) = param_3;
          *(EDS_InventoryType *)((longlong)puVar5 + 9) = param_2;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mounts_Interaction_Main____A6AXXZUFDefaultDelegateUserPolicy__W4EDS_InventoryType__W43___6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_Mounts_Interaction_Main *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar5[3] = 0;
          local_68 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_Mounts_Interaction_Main *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_68);
          puVar5[4] = local_98;
          puVar5[5] = CONCAT44(uStack_8c,uStack_90);
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        TVar8 = GetQuantityData(this,(long64)local_40,
                                (EDS_InventoryType)*(undefined8 *)&pUVar7[8].field_0x8);
        UDS_CommonPopupManager::CreateQuantitySelectionPopup
                  (this_01,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_38,
                   (TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr>)local_res10,
                   *(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)TVar8.WeakPtr);
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8055233256959770032>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_Mounts_Interaction_Main.cpp"
                         ,0x250,"false");
      if (bVar4) goto code_r0x00014bf0eab4;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8055233256959770035>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_Mounts_Interaction_Main.cpp"
                       ,0x24d,"false");
    if (bVar4) {
code_r0x00014bf0eab4:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ProcessItemMoveEvent @ 14bf0ee50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::ProcessItemMoveEvent
          (UDS_VM_Mounts_Interaction_Main *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1,EDS_InventoryType param_2,
          EDS_InventoryType param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FDS_ItemSlotInfo *pFVar8;
  EDS_InventoryType EVar9;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  undefined1 local_48 [24];
  UObject *local_30;
  UObject *local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pUVar7 = (UObject *)0x0;
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bf0eecb;
  }
  pUVar5 = pUVar7;
LAB_14bf0eecb:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_30 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_30);
  bVar4 = FWeakObjectPtr::IsValid(&local_58);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&local_58);
    iVar1 = *(int *)&pUVar5[5].field_0x8;
    if (iVar1 == 1) {
      FWeakObjectPtr::Get(&local_58);
      GetItemDataFromEvent(this,(UDS_ModelEventItemBase *)(local_48 + 0x10));
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_48 + 0x10));
      if (bVar4) {
        this->bIsDraggingItem = true;
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_48 + 0x10));
        this->MoveItemUID = *(long64 *)&pUVar7[8].field_0x8;
      }
    }
    else if (iVar1 == 2) {
      this->bIsDraggingItem = false;
      this->MoveItemUID = 0;
    }
    else {
      if (iVar1 == 3) {
        pUVar5 = FWeakObjectPtr::Get(&local_58);
        if ((*(longlong *)(pUVar5 + 0xc) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)(pUVar5 + 0xc);
        if (*(longlong *)(lVar2 + 8) != 0) {
          pUVar6 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 8),pUVar6);
          if (bVar4) {
            pUVar7 = *(UObject **)(lVar2 + 8);
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_50.ObjectIndex = 0;
        local_50.ObjectSerialNumber = 0;
        local_28[0] = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&local_50,(FObjectPtr)local_28);
        bVar4 = FWeakObjectPtr::IsValid(&local_50);
        if (!bVar4) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8055233256959770109>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_Mounts_Interaction_Main.cpp"
                             ,0x203,"false");
          if (!bVar4) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar7 = FWeakObjectPtr::Get(&local_50);
        pFVar8 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)&pUVar7[4].field_0x8);
        if (pFVar8 == (FDS_ItemSlotInfo *)0x0) {
          return;
        }
        if (this->bIsDraggingItem == false) {
          return;
        }
        if (this->MoveItemUID < 1) {
          return;
        }
        if (this->MoveItemUID != pFVar8->ItemUID) {
          return;
        }
        DS_ItemDataUtil::GetItemDataByUID((long64)(local_48 + 8));
        bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_48 + 8));
        EVar9 = param_2;
        if (!bVar4) {
          return;
        }
      }
      else {
        if (iVar1 != 7) {
          return;
        }
        FWeakObjectPtr::Get(&local_58);
        GetItemDataFromEvent(this,(UDS_ModelEventItemBase *)local_48);
        bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_48,(void *)0x0);
        local_48._8_8_ = local_48._0_8_;
        EVar9 = param_3;
        param_3 = param_2;
        if (bVar4) {
          return;
        }
      }
      if (this->bMoveAllItems == false) {
        OpenQuantitySelectionPopup
                  (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_48._8_8_,param_3,EVar9);
      }
      else {
        MoveAllItems(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_48._8_8_,param_3,EVar9)
        ;
      }
    }
  }
  return;
}

// ProcessMoveRequest @ 14bf0f180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::ProcessMoveRequest
          (UDS_VM_Mounts_Interaction_Main *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          EDS_InventoryType param_2,EDS_InventoryType param_3)

{
  code *pcVar1;
  DS_ItemInventoryMoveQuantityData DVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  EDS_ValidateResult EVar6;
  int iVar7;
  UObject *pUVar8;
  int *piVar9;
  UDS_ItemData *this_00;
  FScriptContainerElement *this_01;
  FWeakObjectPtr aFStackX_10 [3];
  undefined1 auStackY_148 [32];
  EDS_InventoryType aEStack_f8 [8];
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> TStack_f0;
  FWeakObjectPtr FStack_e0;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> TStack_d8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_b0;
  undefined1 auStack_98 [80];
  undefined4 uStack_48;
  ulonglong uStack_38;
  
  if (this->bMoveAllItems == false) {
    OpenQuantitySelectionPopup(this,param_1,param_2,param_3);
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  aFStackX_10[0] = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(aFStackX_10);
  if (bVar5) {
    TStack_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_f0.ArrayNum = 0;
    TStack_f0.ArrayMax = 0;
    DS_ItemInventoryMoveData::DS_ItemInventoryMoveData((DS_ItemInventoryMoveData *)auStack_98);
    aEStack_f8[0] = param_2;
    pUVar8 = FWeakObjectPtr::Get(aFStackX_10);
    piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar8[10].field_0x18,(uint)param_2,aEStack_f8);
    FStack_e0.ObjectIndex = *piVar9;
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(aFStackX_10);
    FStack_e0.ObjectSerialNumber = UDS_ItemData::GetStackCount_UnTradable(this_00,param_2);
    pUVar8 = FWeakObjectPtr::Get(aFStackX_10);
    DS_ItemInventoryMoveData::Init
              ((DS_ItemInventoryMoveData *)auStack_98,*(long64 *)&pUVar8[8].field_0x8);
    DVar2.UntradableQuantity = FStack_e0.ObjectSerialNumber;
    DVar2.TradableQuantity = FStack_e0.ObjectIndex;
    DS_ItemInventoryMoveData::SetMoveData
              ((DS_ItemInventoryMoveData *)auStack_98,param_3,param_2,DVar2);
    if (((TStack_f0.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)auStack_98) &&
        ((FScriptContainerElement *)auStack_98 <
         TStack_f0.AllocatorInstance.Data + (longlong)TStack_f0.ArrayMax * 0x58)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar7 = TStack_f0.ArrayNum;
    if (TStack_f0.ArrayNum == TStack_f0.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&TStack_f0.AllocatorInstance,&TStack_f0.ArrayMax);
    }
    TStack_f0.ArrayNum = iVar7 + 1;
    *(undefined8 *)&TStack_f0.AllocatorInstance.Data[(longlong)iVar7 * 0x58].field_0x0 =
         auStack_98._0_8_;
    this_01 = TStack_f0.AllocatorInstance.Data + (longlong)iVar7 * 0x58 + 8;
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_01 + 8) = 0;
    *(undefined8 *)(this_01 + 0x20) = 0;
    *(undefined4 *)(this_01 + 0x28) = 0;
    *(undefined4 *)(this_01 + 0x2c) = 0x80;
    *(undefined4 *)(this_01 + 0x30) = 0xffffffff;
    *(undefined4 *)(this_01 + 0x34) = 0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    *(undefined4 *)(this_01 + 0x48) = 0;
    TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
    ::operator=(this_01,(TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                         *)(auStack_98 + 8));
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = FWeakObjectPtr::IsValid(&FStack_e0);
    if (bVar5) {
      EVar6 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion
                        (param_3,param_2,&TStack_f0);
      if (EVar6 == MoveEnable) {
        pUVar8 = FWeakObjectPtr::Get(&FStack_e0);
        FVar3.Data = TStack_f0.AllocatorInstance.Data;
        iVar4 = TStack_f0.ArrayNum;
        iVar7 = *(int *)&pUVar8[9].field_0x10;
        TStack_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_d8.ArrayNum = TStack_f0.ArrayNum;
        if (TStack_f0.ArrayNum == 0) {
          TStack_d8.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,TStack_f0.ArrayNum,0,&TStack_d8.AllocatorInstance,TStack_f0.ArrayNum,
                     &TStack_d8.ArrayMax);
          ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                    (TStack_d8.AllocatorInstance.Data,(DS_ItemInventoryMoveData *)FVar3.Data,iVar4);
        }
        FDS_ItemInventoryMoveService::RequestItemInventoryMove(0,&TStack_d8,iVar7);
        TStack_b0._0_8_ = 0;
        TStack_b0._8_8_ = 0;
        TStack_b0._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x664bb,Complete_None_01,&TStack_b0);
      }
      else if (EVar6 == MoveDisable) {
        TStack_c8._0_8_ = 0;
        TStack_c8._8_8_ = 0;
        TStack_c8._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x664bf,Alert_None_01,&TStack_c8);
      }
    }
    uStack_48 = 0;
    if ((void *)auStack_98._72_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_98._72_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (auStack_98 + 8);
    DestructItems<DS_ItemInventoryMoveData,int>
              ((DS_ItemInventoryMoveData *)TStack_f0.AllocatorInstance.Data,TStack_f0.ArrayNum);
    if ((DS_ItemInventoryMoveData *)TStack_f0.AllocatorInstance.Data !=
        (DS_ItemInventoryMoveData *)0x0) {
      FMemory::Free(TStack_f0.AllocatorInstance.Data);
    }
  }
  return;
}

// ResetMoveItemData @ 14bf12a10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::ResetMoveItemData(UDS_VM_Mounts_Interaction_Main *this)

{
  this->bIsDraggingItem = false;
  this->MoveItemUID = 0;
  return;
}

// SetEquipSlotListVisibility @ 14bf13b20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::SetEquipSlotListVisibility
          (UDS_VM_Mounts_Interaction_Main *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1 != this->EquipSlotListVisibility) {
    this->EquipSlotListVisibility = param_1;
    local_10 = FFieldNotificationClassDescriptor::EquipSlotListVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EquipSlotListVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEquipmentMode @ 14bf13b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::SetEquipmentMode(UDS_VM_Mounts_Interaction_Main *this)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  UObject *pUVar4;
  UDS_M_InventoryBag *pUVar5;
  UEnum *pUVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  FDS_DataContainer *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FName *pFVar12;
  UClass *pUVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  undefined1 auStackY_208 [32];
  FString local_1d8;
  FDestructionSentinel local_1c8;
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  FDS_DataContainer local_170;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr == (UDS_M_InventoryBag *)0x0) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar5 = NewObject<UDS_M_InventoryBag>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_M_InventoryBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr = pUVar5;
  }
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_98 = 0xffffffff;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  pUVar6 = StaticEnum<enum_EDS_BagGroupType>();
  if (pUVar6 == (UEnum *)0x0) {
    ::FString::FString(&local_1d8,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar6,&local_1d8,0xc);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_c8,(EDS_InventoryBagData)&local_1c8);
  uVar1 = *(undefined8 *)FVar7;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_c8._8_4_ != local_94) {
    FVar14 = (ForElementType<FSetElementId>)local_90;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar14 = local_88;
    }
    iVar15 = *(int *)((longlong)FVar14 + (ulonglong)(local_80 - 1U & uVar3) * 4);
    if (iVar15 != -1) {
      do {
        if (*(longlong *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) == *(longlong *)FVar7) {
          if ((iVar15 != -1) &&
             ((FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar8 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) + 8;
            goto LAB_14bf13d17;
          }
          break;
        }
        iVar15 = *(int *)(local_c8._0_8_ + (longlong)iVar15 * 0x20 + 0x18);
      } while (iVar15 != -1);
    }
  }
  pFVar8 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_c8,uVar3,(FName *)FVar7);
LAB_14bf13d17:
  iVar15 = local_1d8.Data.ArrayNum + -1;
  if (local_1d8.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  ::FString::AssignRange((FString *)pFVar8,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar15);
  if ((FWeakObjectPtr)local_1d8.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pUVar6 = StaticEnum<enum_EDS_SortingType>();
  if (pUVar6 == (UEnum *)0x0) {
    ::FString::FString(&local_1d8,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar6,&local_1d8,1);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_c8,(EDS_InventoryBagData)&local_1c8);
  uVar1 = *(undefined8 *)FVar7;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_c8._8_4_ != local_94) {
    FVar14 = (ForElementType<FSetElementId>)local_90;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar14 = local_88;
    }
    iVar15 = *(int *)((longlong)FVar14 + (ulonglong)(local_80 - 1U & uVar3) * 4);
    if (iVar15 != -1) {
      do {
        if (*(longlong *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) == *(longlong *)FVar7) {
          if ((iVar15 != -1) &&
             ((FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar8 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) + 8;
            goto LAB_14bf13e1b;
          }
          break;
        }
        iVar15 = *(int *)(local_c8._0_8_ + (longlong)iVar15 * 0x20 + 0x18);
      } while (iVar15 != -1);
    }
  }
  pFVar8 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_c8,uVar3,(FName *)FVar7);
LAB_14bf13e1b:
  iVar15 = local_1d8.Data.ArrayNum + -1;
  if (local_1d8.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  ::FString::AssignRange((FString *)pFVar8,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar15);
  if ((FWeakObjectPtr)local_1d8.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  local_1a0._8_8_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c8.bDestroyed = false;
  local_1c8._17_7_ = 0;
  local_1c8.AccessType = Reader;
  local_1c8._4_4_ = 0;
  local_1c8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  pFVar9 = FDS_DataContainer::FDS_DataContainer(&local_170,(FDS_DataContainer *)local_c8);
  UDS_M_InventoryBag::InitModel
            (pUVar5,pFVar9,
             (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)&local_1c8,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_1a8);
  UDS_ModelBase::ClearModelDelegate
            ((UDS_ModelBase *)(this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr);
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  local_1c8._0_8_ = OnEventMountEquipItemSlot;
  local_1c8.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_1c8.Accessor & 0xffffffff00000000);
  local_1a8 = (undefined1  [8])0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a0._8_8_ = local_1a0._8_8_ & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_190);
  local_178 = &local_1a0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mounts_Interaction_Main____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_1d8);
    puVar10[4] = local_1c8._0_8_;
    puVar10[5] = local_1c8.Accessor;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  UDS_ModelBase::AddUpdateModelDelegate
            ((UDS_ModelBase *)pUVar5,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_1a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_1c8);
  if ((local_1a0.DelegateSize != 0) &&
     (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1a0,0,0,0x10);
    local_1a0._8_8_ = local_1a0._8_8_ & 0xffffffff00000000;
  }
  if (local_1c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
  }
  if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a8);
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  pFVar12 = ::FName::FName((FName *)&local_1c8,L"FoodEquipInventoryBag");
  UDS_ModelBase::SetViewModelName((UDS_ModelBase *)pUVar5,*pFVar12);
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0))
  goto LAB_14bf140b9;
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  pUVar4 = (UObject *)this->_padding_;
  pcVar2 = *(code **)(pUVar5->_padding_ + 0x2e8);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bf14062:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar15 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar13->_padding_)) goto LAB_14bf14062;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8._0_8_ = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1d8,(FObjectPtr)&local_1c8);
  (*pcVar2)(pUVar5);
LAB_14bf140b9:
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar15 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar15 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// SetFeedMode @ 14bf14270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Mounts_Interaction_Main::SetFeedMode(UDS_VM_Mounts_Interaction_Main *this)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  UObject *pUVar4;
  UDS_M_InventoryBag *pUVar5;
  UEnum *pUVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  FDS_DataContainer *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FName *pFVar12;
  UClass *pUVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  undefined1 auStackY_208 [32];
  FString local_1d8;
  FDestructionSentinel local_1c8;
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  FDS_DataContainer local_170;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  if ((pUVar5 == (UDS_M_InventoryBag *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar5 = NewObject<UDS_M_InventoryBag>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_M_InventoryBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr = pUVar5;
  }
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_98 = 0xffffffff;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  pUVar6 = StaticEnum<enum_EDS_BagGroupType>();
  if (pUVar6 == (UEnum *)0x0) {
    ::FString::FString(&local_1d8,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar6,&local_1d8,0xd);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_c8,(EDS_InventoryBagData)&local_1c8);
  uVar1 = *(undefined8 *)FVar7;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_c8._8_4_ != local_94) {
    FVar14 = (ForElementType<FSetElementId>)local_90;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar14 = local_88;
    }
    iVar15 = *(int *)((longlong)FVar14 + (ulonglong)(local_80 - 1U & uVar3) * 4);
    if (iVar15 != -1) {
      do {
        if (*(longlong *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) == *(longlong *)FVar7) {
          if ((iVar15 != -1) &&
             ((FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar8 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) + 8;
            goto LAB_14bf14418;
          }
          break;
        }
        iVar15 = *(int *)(local_c8._0_8_ + (longlong)iVar15 * 0x20 + 0x18);
      } while (iVar15 != -1);
    }
  }
  pFVar8 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_c8,uVar3,(FName *)FVar7);
LAB_14bf14418:
  iVar15 = local_1d8.Data.ArrayNum + -1;
  if (local_1d8.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  ::FString::AssignRange((FString *)pFVar8,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar15);
  if ((FWeakObjectPtr)local_1d8.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pUVar6 = StaticEnum<enum_EDS_SortingType>();
  if (pUVar6 == (UEnum *)0x0) {
    ::FString::FString(&local_1d8,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar6,&local_1d8,0xf);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_c8,(EDS_InventoryBagData)&local_1c8);
  uVar1 = *(undefined8 *)FVar7;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_c8._8_4_ != local_94) {
    FVar14 = (ForElementType<FSetElementId>)local_90;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar14 = local_88;
    }
    iVar15 = *(int *)((longlong)FVar14 + (ulonglong)(local_80 - 1U & uVar3) * 4);
    if (iVar15 != -1) {
      do {
        if (*(longlong *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) == *(longlong *)FVar7) {
          if ((iVar15 != -1) &&
             ((FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar8 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar15 * 0x20) + 8;
            goto LAB_14bf1451b;
          }
          break;
        }
        iVar15 = *(int *)(local_c8._0_8_ + (longlong)iVar15 * 0x20 + 0x18);
      } while (iVar15 != -1);
    }
  }
  pFVar8 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_c8,uVar3,(FName *)FVar7);
LAB_14bf1451b:
  iVar15 = local_1d8.Data.ArrayNum + -1;
  if (local_1d8.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  ::FString::AssignRange((FString *)pFVar8,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar15);
  if ((FWeakObjectPtr)local_1d8.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  local_1a0._8_8_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c8.bDestroyed = false;
  local_1c8._17_7_ = 0;
  local_1c8.AccessType = Reader;
  local_1c8._4_4_ = 0;
  local_1c8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  pFVar9 = FDS_DataContainer::FDS_DataContainer(&local_170,(FDS_DataContainer *)local_c8);
  UDS_M_InventoryBag::InitModel
            (pUVar5,pFVar9,
             (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)&local_1c8,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_1a8);
  UDS_ModelBase::ClearModelDelegate
            ((UDS_ModelBase *)(this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr);
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  local_1c8._0_8_ = OnEventMountFoodItemSlot;
  local_1c8.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_1c8.Accessor & 0xffffffff00000000);
  local_1a8 = (undefined1  [8])0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a0._8_8_ = local_1a0._8_8_ & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_190);
  local_178 = &local_1a0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mounts_Interaction_Main____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_1d8);
    puVar10[4] = local_1c8._0_8_;
    puVar10[5] = local_1c8.Accessor;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  UDS_ModelBase::AddUpdateModelDelegate
            ((UDS_ModelBase *)pUVar5,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_1a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_1c8);
  if ((local_1a0.DelegateSize != 0) &&
     (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1a0,0,0,0x10);
    local_1a0._8_8_ = local_1a0._8_8_ & 0xffffffff00000000;
  }
  if (local_1c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
  }
  if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a8);
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  pFVar12 = ::FName::FName((FName *)&local_1c8,L"FoodEquipInventoryBag");
  UDS_ModelBase::SetViewModelName((UDS_ModelBase *)pUVar5,*pFVar12);
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0))
  goto LAB_14bf147b9;
  pUVar5 = (this->FoodEquipInventoryBagModel).field0_0x0.DebugPtr;
  pUVar4 = (UObject *)this->_padding_;
  pcVar2 = *(code **)(pUVar5->_padding_ + 0x2e8);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bf14762:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar15 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar13->_padding_)) goto LAB_14bf14762;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8._0_8_ = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1d8,(FObjectPtr)&local_1c8);
  (*pcVar2)(pUVar5);
LAB_14bf147b9:
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar15 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar15 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// SetInteractionMain @ 14bf14d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::SetInteractionMain(UDS_VM_Mounts_Interaction_Main *this)

{
  UDS_ContentEvent *pUVar1;
  UDS_MountEvent *pUVar2;
  ESlateVisibility local_res8 [8];
  
  this->CurrentMountInteraction = Main;
  this->BagSwitcherIndex = 0;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  if (this->MountSustainInfoVisibility != Collapsed) {
    this->MountSustainInfoVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  if (this->EquipSlotListVisibility != Collapsed) {
    this->EquipSlotListVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    local_res8[0] = Collapsed;
    FDS_EventDelegate<enum_ESlateVisibility_const_&>::Broadcast
              (&pUVar1->OnContentsBackButtonVisibilityChangedDelegate,local_res8);
  }
  this->bIsDraggingItem = false;
  this->MoveItemUID = 0;
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar2->OnSelectedMountFoodItem,0);
  }
  return;
}

// SetMountSustainInfoVisibility @ 14bf16aa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::SetMountSustainInfoVisibility
          (UDS_VM_Mounts_Interaction_Main *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1 != this->MountSustainInfoVisibility) {
    this->MountSustainInfoVisibility = param_1;
    local_10 = FFieldNotificationClassDescriptor::MountSustainInfoVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MountSustainInfoVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMoveItemMode @ 14bf16c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::SetMoveItemMode(UDS_VM_Mounts_Interaction_Main *this)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  UObject *pUVar4;
  UDS_M_InventoryBag *pUVar5;
  UEnum *pUVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  FDS_DataContainer *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FName *pFVar12;
  UClass *pUVar13;
  FString *this_00;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  int iVar17;
  undefined1 auStackY_2a8 [32];
  FString local_278;
  FDestructionSentinel local_268;
  undefined1 local_248 [8];
  FDelegateAllocation local_240;
  FDestructionSentinel local_230;
  FDelegateAllocation *local_218;
  FDS_DataContainer local_210;
  undefined1 local_168 [32];
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  int local_134;
  undefined1 local_130 [8];
  ForElementType<FSetElementId> local_128;
  int local_120;
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  void *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [64];
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [64];
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pUVar5 = (this->CharacterInventoryBagModel).field0_0x0.DebugPtr;
  if ((pUVar5 == (UDS_M_InventoryBag *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar5 = NewObject<UDS_M_InventoryBag>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_M_InventoryBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->CharacterInventoryBagModel).field0_0x0.DebugPtr = pUVar5;
  }
  local_13c = 0x80;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._8_8_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_134 = 0;
  local_128 = (ForElementType<FSetElementId>)0x0;
  local_120 = 0;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e4 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_138 = 0xffffffff;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  pUVar6 = StaticEnum<enum_EDS_BagGroupType>();
  if (pUVar6 == (UEnum *)0x0) {
    ::FString::FString(&local_278,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar6,&local_278,0xe);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_168,(EDS_InventoryBagData)&local_268);
  uVar1 = *(undefined8 *)FVar7;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_168._8_4_ != local_134) {
    FVar16 = (ForElementType<FSetElementId>)local_130;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FVar16 = local_128;
    }
    iVar17 = *(int *)((longlong)FVar16 + (ulonglong)(local_120 - 1U & uVar3) * 4);
    if (iVar17 != -1) {
      do {
        if (*(longlong *)(local_168._0_8_ + (longlong)iVar17 * 0x20) == *(longlong *)FVar7) {
          if ((iVar17 != -1) &&
             ((FScriptContainerElement *)(local_168._0_8_ + (longlong)iVar17 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar8 = (FScriptContainerElement *)(local_168._0_8_ + (longlong)iVar17 * 0x20) + 8;
            goto LAB_14bf16e08;
          }
          break;
        }
        iVar17 = *(int *)(local_168._0_8_ + (longlong)iVar17 * 0x20 + 0x18);
      } while (iVar17 != -1);
    }
  }
  pFVar8 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_168,uVar3,(FName *)FVar7);
LAB_14bf16e08:
  iVar17 = local_278.Data.ArrayNum + -1;
  if (local_278.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  ::FString::AssignRange((FString *)pFVar8,(wchar_t *)local_278.Data.AllocatorInstance.Data,iVar17);
  if ((FWeakObjectPtr)local_278.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  pUVar6 = StaticEnum<enum_EDS_SortingType>();
  if (pUVar6 == (UEnum *)0x0) {
    ::FString::FString(&local_278,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar6,&local_278,5);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_168,(EDS_InventoryBagData)&local_268);
  uVar1 = *(undefined8 *)FVar7;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_168._8_4_ != local_134) {
    FVar16 = (ForElementType<FSetElementId>)local_130;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FVar16 = local_128;
    }
    iVar17 = *(int *)((longlong)FVar16 + (ulonglong)(local_120 - 1U & uVar3) * 4);
    if (iVar17 != -1) {
      do {
        if (*(longlong *)(local_168._0_8_ + (longlong)iVar17 * 0x20) == *(longlong *)FVar7) {
          if ((iVar17 != -1) &&
             ((FScriptContainerElement *)(local_168._0_8_ + (longlong)iVar17 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar8 = (FScriptContainerElement *)(local_168._0_8_ + (longlong)iVar17 * 0x20) + 8;
            goto LAB_14bf16f0b;
          }
          break;
        }
        iVar17 = *(int *)(local_168._0_8_ + (longlong)iVar17 * 0x20 + 0x18);
      } while (iVar17 != -1);
    }
  }
  pFVar8 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_168,uVar3,(FName *)FVar7);
LAB_14bf16f0b:
  iVar17 = local_278.Data.ArrayNum + -1;
  if (local_278.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  ::FString::AssignRange((FString *)pFVar8,(wchar_t *)local_278.Data.AllocatorInstance.Data,iVar17);
  if ((FWeakObjectPtr)local_278.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->CharacterInventoryBagModel).field0_0x0.DebugPtr;
  local_240._8_8_ = 0;
  local_248 = (undefined1  [8])0x0;
  local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_268.bDestroyed = false;
  local_268._17_7_ = 0;
  local_268.AccessType = Reader;
  local_268._4_4_ = 0;
  local_268.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  pFVar9 = FDS_DataContainer::FDS_DataContainer(&local_210,(FDS_DataContainer *)local_168);
  UDS_M_InventoryBag::InitModel
            (pUVar5,pFVar9,
             (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)&local_268,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_248);
  UDS_ModelBase::ClearModelDelegate
            ((UDS_ModelBase *)(this->CharacterInventoryBagModel).field0_0x0.DebugPtr);
  pUVar5 = (this->CharacterInventoryBagModel).field0_0x0.DebugPtr;
  local_268._0_8_ = OnEventCharacterInventoryItemSlot;
  local_268.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_268.Accessor & 0xffffffff00000000);
  local_248 = (undefined1  [8])0x0;
  local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_240._8_8_ = local_240._8_8_ & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
             (FWriteAccessScope *)&local_230);
  local_218 = &local_240;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_240);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mounts_Interaction_Main____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_278);
    puVar10[4] = local_268._0_8_;
    puVar10[5] = local_268.Accessor;
  }
  if (local_230.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
  }
  UDS_ModelBase::AddUpdateModelDelegate
            ((UDS_ModelBase *)pUVar5,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_248);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
             (FWriteAccessScope *)&local_268);
  if ((local_240.DelegateSize != 0) &&
     (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_240,0,0,0x10);
    local_240._8_8_ = local_240._8_8_ & 0xffffffff00000000;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_240.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_248);
  pUVar5 = (this->CharacterInventoryBagModel).field0_0x0.DebugPtr;
  pFVar12 = ::FName::FName((FName *)&local_268,L"CharacterInventoryBag");
  UDS_ModelBase::SetViewModelName((UDS_ModelBase *)pUVar5,*pFVar12);
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
    pUVar5 = (this->CharacterInventoryBagModel).field0_0x0.DebugPtr;
    pUVar4 = (UObject *)this->_padding_;
    pcVar2 = *(code **)(pUVar5->_padding_ + 0x2e8);
    if (pUVar4 == (UObject *)0x0) {
LAB_14bf17152:
      pUVar4 = (UObject *)0x0;
    }
    else {
      pUVar13 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      iVar17 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar17) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
          &pUVar13->_padding_)) goto LAB_14bf17152;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268._0_8_ = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_278,(FObjectPtr)&local_268);
    (*pcVar2)(pUVar5,local_278.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->MountInventoryBagModel).field0_0x0.DebugPtr;
  if ((pUVar5 == (UDS_M_InventoryBag *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar5 = NewObject<UDS_M_InventoryBag>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_M_InventoryBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->MountInventoryBagModel).field0_0x0.DebugPtr = pUVar5;
  }
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_c8._32_8_ = 0;
  local_c8._40_4_ = 0;
  local_c8._44_4_ = 0x80;
  local_c8._48_4_ = 0xffffffff;
  local_c8._52_4_ = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_78._32_8_ = 0;
  local_78._40_4_ = 0;
  local_78._44_4_ = 0x80;
  local_78._48_4_ = 0xffffffff;
  local_78._52_4_ = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  pUVar6 = StaticEnum<enum_EDS_BagGroupType>();
  if (pUVar6 == (UEnum *)0x0) {
    ::FString::FString(&local_278,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar6,&local_278,0xf);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_c8,(EDS_InventoryBagData)&local_268);
  uVar1 = *(undefined8 *)FVar7;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = uVar3 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_c8._8_4_ != local_c8._52_4_) {
    FVar16 = (ForElementType<FSetElementId>)((longlong)local_c8 + 0x38);
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar16 = local_88;
    }
    iVar17 = *(int *)((longlong)FVar16 + (ulonglong)(local_80 - 1U & uVar3) * 4);
    if (iVar17 != -1) {
      do {
        if (*(longlong *)((longlong)iVar17 * 0x20 + local_c8._0_8_) == *(longlong *)FVar7) {
          if ((iVar17 != -1) && (lVar15 = (longlong)iVar17 * 0x20 + local_c8._0_8_, lVar15 != 0)) {
            this_00 = (FString *)(lVar15 + 8);
            goto LAB_14bf1736e;
          }
          break;
        }
        iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 + local_c8._0_8_);
      } while (iVar17 != -1);
    }
  }
  this_00 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::EmplaceByHash<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)local_c8,uVar3,(FName *)FVar7);
LAB_14bf1736e:
  iVar17 = local_278.Data.ArrayNum + -1;
  if (local_278.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  ::FString::AssignRange(this_00,(wchar_t *)local_278.Data.AllocatorInstance.Data,iVar17);
  if ((FWeakObjectPtr)local_278.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
            ((FDS_DataContainer *)local_c8,SortType,MountGet);
  pUVar5 = (this->MountInventoryBagModel).field0_0x0.DebugPtr;
  local_240._8_8_ = 0;
  local_248 = (undefined1  [8])0x0;
  local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_268.bDestroyed = false;
  local_268._17_7_ = 0;
  local_268.AccessType = Reader;
  local_268._4_4_ = 0;
  local_268.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  pFVar9 = FDS_DataContainer::FDS_DataContainer(&local_210,(FDS_DataContainer *)local_c8);
  UDS_M_InventoryBag::InitModel
            (pUVar5,pFVar9,
             (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)&local_268,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_248);
  UDS_ModelBase::ClearModelDelegate
            ((UDS_ModelBase *)(this->MountInventoryBagModel).field0_0x0.DebugPtr);
  pUVar5 = (this->MountInventoryBagModel).field0_0x0.DebugPtr;
  local_268.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_268.Accessor & 0xffffffff00000000);
  local_268._0_8_ = OnEventMountInventoryItemSlot;
  pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            ::CreateUObject<UDS_VM_Mounts_Interaction_Main>
                      ((TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                        *)local_248,this,(pmf_8f2255cd *)&local_268);
  UDS_ModelBase::AddUpdateModelDelegate((UDS_ModelBase *)pUVar5,pTVar14);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
             (FWriteAccessScope *)&local_268);
  if ((local_240.DelegateSize != 0) &&
     (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_240,0,0,0x10);
    local_240._8_8_ = local_240._8_8_ & 0xffffffff00000000;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_240.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_248);
  pUVar5 = (this->MountInventoryBagModel).field0_0x0.DebugPtr;
  pFVar12 = ::FName::FName((FName *)&local_268,L"MountsInventoryBag");
  UDS_ModelBase::SetViewModelName((UDS_ModelBase *)pUVar5,*pFVar12);
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0))
  goto LAB_14bf17585;
  pUVar5 = (this->MountInventoryBagModel).field0_0x0.DebugPtr;
  pUVar4 = (UObject *)this->_padding_;
  pcVar2 = *(code **)(pUVar5->_padding_ + 0x2e8);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bf1752e:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar17 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar13->_padding_)) goto LAB_14bf1752e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268._0_8_ = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_278,(FObjectPtr)&local_268);
  (*pcVar2)(pUVar5);
LAB_14bf17585:
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_118,0,local_118._8_4_);
  iVar17 = SUB84(local_118._8_8_,4);
  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
  if (iVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
  }
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_f0 = 0;
  if (0x80 < local_ec) {
    local_ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  local_120 = 0;
  if (local_128 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_168,0,local_168._8_4_);
  iVar17 = SUB84(local_168._8_8_,4);
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  if (iVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_13c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  return;
}

// TryMoveItem @ 14bf1dad0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mounts_Interaction_Main::TryMoveItem
          (UDS_VM_Mounts_Interaction_Main *this,
          TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> *param_1,
          EDS_InventoryType param_2,EDS_InventoryType param_3)

{
  int iVar1;
  int iVar2;
  DS_ItemInventoryMoveData *pDVar3;
  bool bVar4;
  EDS_ValidateResult EVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_28;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_20;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = FWeakObjectPtr::IsValid(&local_28);
  if (bVar4) {
    EVar5 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion(param_2,param_3,param_1);
    if (EVar5 == MoveEnable) {
      pUVar6 = FWeakObjectPtr::Get(&local_28);
      iVar1 = param_1->ArrayNum;
      pDVar3 = (DS_ItemInventoryMoveData *)(param_1->AllocatorInstance).Data;
      iVar2 = *(int *)&pUVar6[9].field_0x10;
      local_20._0_8_ = (FScriptContainerElement *)0x0;
      local_20._8_4_ = iVar1;
      if (iVar1 == 0) {
        local_20._8_8_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar1,0,(ForAnyElementType *)&local_20,iVar1,
                   (int *)((longlong)&local_20 + 0xc));
        ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                  ((void *)local_20._0_8_,pDVar3,iVar1);
      }
      FDS_ItemInventoryMoveService::RequestItemInventoryMove
                (0,(TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> *)&local_20,iVar2);
      local_20._0_8_ = (FScriptContainerElement *)0x0;
      local_20._8_8_ = 0;
      local_20._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x664bb,Complete_None_01,&local_20);
    }
    else if (EVar5 == MoveDisable) {
      local_20._0_8_ = (FScriptContainerElement *)0x0;
      local_20._8_8_ = 0;
      local_20._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x664bf,Alert_None_01,&local_20);
      return;
    }
  }
  return;
}

// UnbindModel @ 14bf1e220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Mounts_Interaction_Main::UnbindModel(UDS_VM_Mounts_Interaction_Main *this)

{
  UDS_ContentEvent *pUVar1;
  UDS_MountEvent *pUVar2;
  
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnContentsBackButttonClickDelegate,this);
  }
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnEquipSlotSelectDelegate,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

