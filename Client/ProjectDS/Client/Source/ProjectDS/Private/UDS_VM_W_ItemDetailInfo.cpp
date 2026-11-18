// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 59

// SetItemEnhanceValue_WrapperImpl @ 14b73db50

void __cdecl UDS_VM_W_ItemDetailInfo::SetItemEnhanceValue_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ItemEnhanceValue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ItemEnhanceValue.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xa8),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xa8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xa8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetItemComparisonValue_WrapperImpl @ 14b73db60

void __cdecl
UDS_VM_W_ItemDetailInfo::SetItemComparisonValue_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ItemComparisonValue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ItemComparisonValue.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xb8),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xb8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xb8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xc0) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetItemEnhanceValueColor_WrapperImpl @ 14b73db70

void __cdecl
UDS_VM_W_ItemDetailInfo::SetItemEnhanceValueColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 200)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xcc))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xd0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0xd4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ItemEnhanceValueColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ItemEnhanceValueColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 200) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xd0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetItemComparisonValueColor_WrapperImpl @ 14b73db80

void __cdecl
UDS_VM_W_ItemDetailInfo::SetItemComparisonValueColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0xd8)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xdc))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xe0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0xe4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ItemComparisonValueColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ItemComparisonValueColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0xd8) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xe0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibleEnhanceValue_WrapperImpl @ 14b73db90

void __cdecl
UDS_VM_W_ItemDetailInfo::SetVisibleEnhanceValue_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.FieldName;
  if (*(char *)((longlong)param_1 + 0xe8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibleComparisonValue_WrapperImpl @ 14b73dba0

void __cdecl
UDS_VM_W_ItemDetailInfo::SetVisibleComparisonValue_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleComparisonValue.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleComparisonValue.FieldName;
  if (*(char *)((longlong)param_1 + 0xe9) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe9) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetSwitcherUseButton_WrapperImpl @ 14b73dbb0

void __cdecl UDS_VM_W_ItemDetailInfo::SetSwitcherUseButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::SwitcherUseButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SwitcherUseButton.FieldName;
  if (*(int *)((longlong)param_1 + 0xec) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xec) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetItemSaleExplain_WrapperImpl @ 14b73dbc0

void __cdecl UDS_VM_W_ItemDetailInfo::SetItemSaleExplain_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ItemSaleExplain.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ItemSaleExplain.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xf0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xf0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xf0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xf8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetVisibleQuantity_WrapperImpl @ 14b73dbd0

void __cdecl UDS_VM_W_ItemDetailInfo::SetVisibleQuantity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleQuantity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleQuantity.FieldName;
  if (*(char *)((longlong)param_1 + 0x100) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x100) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibleStatus_WrapperImpl @ 14b73dbe0

void __cdecl UDS_VM_W_ItemDetailInfo::SetVisibleStatus_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleStatus.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleStatus.FieldName;
  if (*(char *)((longlong)param_1 + 0x101) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x101) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibleStatusList_WrapperImpl @ 14b73dbf0

void __cdecl UDS_VM_W_ItemDetailInfo::SetVisibleStatusList_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleStatusList.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleStatusList.FieldName;
  if (*(char *)((longlong)param_1 + 0x102) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x102) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibleEquipUseButton_WrapperImpl @ 14b73dc00

void __cdecl
UDS_VM_W_ItemDetailInfo::SetVisibleEquipUseButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.FieldName;
  if (*(char *)((longlong)param_1 + 0x103) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x103) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetOnClickClose_WrapperImpl @ 14b73dc10

void __cdecl UDS_VM_W_ItemDetailInfo::SetOnClickClose_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  FName FStack_28;
  int iStack_20;
  
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  iStack_20 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  FStack_28 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x154);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x168),
             (FReadAccessScope *)&FStack_28);
  if ((*(int *)((longlong)param_1 + 0x178) != 0) &&
     (plVar2 = *(longlong **)((longlong)param_1 + 0x170), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_28);
  return;
}

// SetOnClickApply_WrapperImpl @ 14b73dc20

void __cdecl UDS_VM_W_ItemDetailInfo::SetOnClickApply_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetOnClickDestruction_WrapperImpl @ 14b73dc30

void __cdecl UDS_VM_W_ItemDetailInfo::SetOnClickDestruction_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetOnClickDismantle_WrapperImpl @ 14b73dc40

void __cdecl UDS_VM_W_ItemDetailInfo::SetOnClickDismantle_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetVisibleDismantle_WrapperImpl @ 14b73dc50

void __cdecl UDS_VM_W_ItemDetailInfo::SetVisibleDismantle_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleDismantle.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleDismantle.FieldName;
  if (*(char *)((longlong)param_1 + 300) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 300) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b73dc60

UClass * __cdecl UDS_VM_W_ItemDetailInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ItemDetailInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ItemDetailInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_ItemDetailInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ItemDetailInfo,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ItemDetailInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ItemDetailInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ItemDetailInfo.InnerSingleton;
}

// UDS_VM_W_ItemDetailInfo @ 14b741890

UDS_VM_W_ItemDetailInfo * __thiscall
UDS_VM_W_ItemDetailInfo::UDS_VM_W_ItemDetailInfo
          (UDS_VM_W_ItemDetailInfo *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bIsReserveCloseWindow = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ItemDetailInfo__6B_;
  this->CloseElapsedTime = 0.0;
  FText::FText(&this->ItemEnhanceValue);
  FText::FText(&this->ItemComparisonValue);
  this->VisibleEnhanceValue = Collapsed;
  this->VisibleComparisonValue = Collapsed;
  this->VisibleMenu = Collapsed;
  this->VisibleExplain = Collapsed;
  this->SwitcherUseButton = 0;
  FText::FText(&this->ItemSaleExplain);
  (this->OnClickClose)._padding_ = '\0';
  (this->OnClickClose).bIsCustomSelected = false;
  (this->OnClickClose).bIsLacked = false;
  (this->OnClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickClose).Delegate = 0;
  *(undefined8 *)&(this->OnClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickClose).Delegate.field_0x10 = 0;
  this->VisibleMoneyTradable = Collapsed;
  this->VisibleDismantle = Collapsed;
  (this->StatusBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StatusBindingEventField).UserObjectList.ArrayNum = 0;
  (this->StatusBindingEventField).UserObjectList.ArrayMax = 0;
  this->RequestCloseEvent = false;
  this->bIsShowEnhanceValue = false;
  (this->ItemData).WeakPtr = (FWeakObjectPtr)0x0;
  this->ItemTID = 0;
  this->InfoPopupType = FocusPopup;
  (this->ItemData_Comparison).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemData_Comparison).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->OnClickCloseDelegate = 0;
  *(undefined8 *)&(this->OnClickCloseDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickCloseDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnOpenItemDestructionPopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->OnOpenItemDismantlePopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDismantlePopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDismantlePopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDismantlePopup_Delegate).field_0x18 = 2;
  return this;
}

// UDS_VM_W_ItemDetailInfo @ 14b7419d0

UDS_VM_W_ItemDetailInfo * __thiscall
UDS_VM_W_ItemDetailInfo::UDS_VM_W_ItemDetailInfo
          (UDS_VM_W_ItemDetailInfo *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bIsReserveCloseWindow = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ItemDetailInfo__6B_;
  this->CloseElapsedTime = 0.0;
  FText::FText(&this->ItemEnhanceValue);
  FText::FText(&this->ItemComparisonValue);
  this->VisibleEnhanceValue = Collapsed;
  this->VisibleComparisonValue = Collapsed;
  this->VisibleMenu = Collapsed;
  this->VisibleExplain = Collapsed;
  this->SwitcherUseButton = 0;
  FText::FText(&this->ItemSaleExplain);
  (this->OnClickClose)._padding_ = '\0';
  (this->OnClickClose).bIsCustomSelected = false;
  (this->OnClickClose).bIsLacked = false;
  (this->OnClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickClose).Delegate = 0;
  *(undefined8 *)&(this->OnClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickClose).Delegate.field_0x10 = 0;
  this->VisibleMoneyTradable = Collapsed;
  this->VisibleDismantle = Collapsed;
  (this->StatusBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StatusBindingEventField).UserObjectList.ArrayNum = 0;
  (this->StatusBindingEventField).UserObjectList.ArrayMax = 0;
  this->RequestCloseEvent = false;
  this->bIsShowEnhanceValue = false;
  (this->ItemData).WeakPtr = (FWeakObjectPtr)0x0;
  this->ItemTID = 0;
  this->InfoPopupType = FocusPopup;
  (this->ItemData_Comparison).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemData_Comparison).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->OnClickCloseDelegate = 0;
  *(undefined8 *)&(this->OnClickCloseDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickCloseDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnOpenItemDestructionPopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->OnOpenItemDismantlePopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDismantlePopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDismantlePopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDismantlePopup_Delegate).field_0x18 = 2;
  return this;
}

// ~UDS_VM_W_ItemDetailInfo @ 14b742e00

void __thiscall UDS_VM_W_ItemDetailInfo::~UDS_VM_W_ItemDetailInfo(UDS_VM_W_ItemDetailInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ItemDetailInfo__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOpenItemDismantlePopup_Delegate).field_0x8,
             *(int *)&(this->OnOpenItemDismantlePopup_Delegate).field_0x10);
  pvVar1 = *(void **)&(this->OnOpenItemDismantlePopup_Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpenItemDismantlePopup_Delegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOpenItemDestructionPopup_Delegate).field_0x8,
             *(int *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x10);
  pvVar1 = *(void **)&(this->OnOpenItemDestructionPopup_Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpenItemDestructionPopup_Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickCloseDelegate);
  pvVar1 = *(void **)&(this->OnClickCloseDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickCloseDelegate);
  pFVar2 = (this->StatusBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickClose).Delegate);
  pvVar1 = *(void **)&(this->OnClickClose).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickClose).Delegate);
  pIVar3 = (this->ItemSaleExplain).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->ItemComparisonValue).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->ItemEnhanceValue).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744e30

IClassDescriptor * __thiscall
UDS_VM_W_ItemDetailInfo::GetFieldNotificationDescriptor(UDS_VM_W_ItemDetailInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ItemDetailInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745680

UClass * __cdecl UDS_VM_W_ItemDetailInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ItemDetailInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ItemDetailInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_ItemDetailInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ItemDetailInfo,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ItemDetailInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ItemDetailInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ItemDetailInfo.InnerSingleton;
}

// GetTickableTickType @ 14b745bc0

ETickableTickType __thiscall
UDS_VM_W_ItemDetailInfo::GetTickableTickType(UDS_VM_W_ItemDetailInfo *this)

{
  return Conditional;
}

// IsUpdate @ 14b745be0

bool __thiscall UDS_VM_W_ItemDetailInfo::IsUpdate(UDS_VM_W_ItemDetailInfo *this)

{
  return this->bIsReserveCloseWindow;
}

// StaticRegisterNativesUDS_VM_W_ItemDetailInfo @ 14b745d00

void __cdecl UDS_VM_W_ItemDetailInfo::StaticRegisterNativesUDS_VM_W_ItemDetailInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_ItemDetailInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeOptionValue @ 14b7475b0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __cdecl
UDS_VM_W_ItemDetailInfo::execOnChangeOptionValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_ItemDetailOption local_res10 [2];
  
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeOptionValue((UDS_VM_W_ItemDetailInfo *)param_1,local_res10[0]);
  return;
}

// execOnClickStatusEvent @ 14b747640

void __cdecl
UDS_VM_W_ItemDetailInfo::execOnClickStatusEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickStatusEvent((UDS_VM_W_ItemDetailInfo *)param_1);
  return;
}

// CloseDetailWindow @ 14c006880

void __thiscall UDS_VM_W_ItemDetailInfo::CloseDetailWindow(UDS_VM_W_ItemDetailInfo *this)

{
  EDS_ItemDetailInfoType EVar1;
  longlong *plVar2;
  FName local_28;
  int local_20;
  
  (this->RequestCloseEvent).bIsActivate = true;
  local_20 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  EVar1 = this->InfoType;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickCloseDelegate,
             (FReadAccessScope *)&local_28);
  if ((*(int *)&(this->OnClickCloseDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnClickCloseDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,EVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  return;
}

// InitData @ 14c01d600

void __thiscall UDS_VM_W_ItemDetailInfo::InitData(UDS_VM_W_ItemDetailInfo *this)

{
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FDS_ItemConsumeFunctionTableRow *pFVar8;
  UDS_ItemData *this_01;
  longlong lVar9;
  FText *pFVar10;
  FName FVar11;
  undefined1 local_res8 [8];
  FName local_58;
  int local_50;
  FDS_StringIDWrapper local_48;
  undefined8 local_40;
  FText local_38;
  
  this_00 = &this->ItemData;
  bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar7[0x13].field_0x1c != '\0') goto LAB_14c01d701;
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar8 = FDS_ItemConsumeFunctionTableRow::Get((longlong)*(int *)&pUVar7[0x13].field_0x20,false);
    iVar4 = FFieldNotificationClassDescriptor::SwitcherUseButton.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::SwitcherUseButton.FieldName;
    iVar6 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.BitNumber;
    FVar11 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.FieldName;
    if ((pFVar8 != (FDS_ItemConsumeFunctionTableRow *)0x0) && (pFVar8->IsUseFunction == false)) {
      if (this->VisibleEquipUseButton == Collapsed) goto LAB_14c01d7af;
      this->VisibleEquipUseButton = Collapsed;
      goto LAB_14c01d799;
    }
    if (this->SwitcherUseButton != 2) {
      this->SwitcherUseButton = 2;
      local_50 = iVar4;
      local_58 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    iVar6 = FFieldNotificationClassDescriptor::VisibleQuantity.BitNumber;
    FVar11 = FFieldNotificationClassDescriptor::VisibleQuantity.FieldName;
    if (this->VisibleQuantity == SelfHitTestInvisible) goto LAB_14c01d7af;
    this->VisibleQuantity = SelfHitTestInvisible;
    local_50 = iVar6;
    lVar9 = this->_padding_;
  }
  else {
LAB_14c01d701:
    bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar5) {
      this_01 = (UDS_ItemData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar5 = UDS_ItemData::IsEquipped(this_01);
      iVar6 = FFieldNotificationClassDescriptor::SwitcherUseButton.BitNumber;
      FVar11 = FFieldNotificationClassDescriptor::SwitcherUseButton.FieldName;
      if (!bVar5) goto LAB_14c01d744;
      if (this->SwitcherUseButton != 1) {
        this->SwitcherUseButton = 1;
        goto LAB_14c01d765;
      }
    }
    else {
LAB_14c01d744:
      iVar6 = FFieldNotificationClassDescriptor::SwitcherUseButton.BitNumber;
      FVar11 = FFieldNotificationClassDescriptor::SwitcherUseButton.FieldName;
      if (this->SwitcherUseButton != 0) {
        this->SwitcherUseButton = 0;
LAB_14c01d765:
        local_58 = FVar11;
        local_50 = iVar6;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
    }
    iVar6 = FFieldNotificationClassDescriptor::VisibleQuantity.BitNumber;
    FVar11 = FFieldNotificationClassDescriptor::VisibleQuantity.FieldName;
    if (this->VisibleQuantity == Collapsed) goto LAB_14c01d7af;
    this->VisibleQuantity = Collapsed;
LAB_14c01d799:
    lVar9 = this->_padding_;
    local_50 = iVar6;
  }
  local_58 = FVar11;
  (**(code **)(lVar9 + 0x38))(&this->_padding_,&local_58);
LAB_14c01d7af:
  local_40 = 0x6d;
  local_48 = (FDS_StringIDWrapper)&___7FDS_StringUiID__6B_;
  pFVar10 = FDS_StringIDWrapper::Text(&local_48,&local_38);
  iVar6 = FFieldNotificationClassDescriptor::ItemSaleExplain.BitNumber;
  FVar11 = FFieldNotificationClassDescriptor::ItemSaleExplain.FieldName;
  bVar5 = FText::IdenticalTo(&this->ItemSaleExplain,pFVar10,None);
  if (!bVar5) {
    pIVar1 = (pFVar10->TextData).Reference;
    pIVar2 = (this->ItemSaleExplain).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ItemSaleExplain).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ItemSaleExplain).Flags = pFVar10->Flags;
    local_58 = FVar11;
    local_50 = iVar6;
    (**(code **)(this->_padding_ + 0x38))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  bVar5 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar5) {
    UpdateItemStatus(this);
  }
  return;
}

// InitViewModel @ 14c01eab0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_VM_W_ItemDetailInfo::InitViewModel(UDS_VM_W_ItemDetailInfo *this)

{
  UDS_ItemDetailInfoManager *pUVar1;
  
  pUVar1 = UDS_ItemDetailInfoManager::GetInst();
  if (pUVar1 != (UDS_ItemDetailInfoManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedOptionValue_Delegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ItemDetailOption),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_ItemDetailInfo>
              (&pUVar1->ChangedOptionValue_Delegate,(UDS_VM_W_ItemDetailInfo *)&stack0x00000010,
               (pmf_8865ef9e *)this);
    this->bIsShowEnhanceValue = (bool)((char)pUVar1->OptionValue & INVEN_SHOW_ENHANCE_VALUE);
  }
  return;
}

// OnChangeOptionValue @ 14c025740

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall
UDS_VM_W_ItemDetailInfo::OnChangeOptionValue
          (UDS_VM_W_ItemDetailInfo *this,EDS_ItemDetailOption param_1)

{
  bool bVar1;
  
  this->bIsShowEnhanceValue = (bool)((byte)param_1 & 1);
  bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(&this->ItemData,(void *)0x0);
  if (!bVar1) {
    InitData(this);
    return;
  }
  return;
}

// OnClickApplyEvent @ 14c025f80

void __thiscall
UDS_VM_W_ItemDetailInfo::OnClickApplyEvent(UDS_VM_W_ItemDetailInfo *this,FWidgetEventField *param_1)

{
  return;
}

// OnClickCloseEvent @ 14c0262c0

void __thiscall
UDS_VM_W_ItemDetailInfo::OnClickCloseEvent
          (UDS_VM_W_ItemDetailInfo *this,FDS_ButtonEventField *param_1)

{
  EDS_ItemDetailInfoType EVar1;
  longlong *plVar2;
  FName FStack_28;
  int iStack_20;
  
  (this->RequestCloseEvent).bIsActivate = true;
  iStack_20 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  FStack_28 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
  EVar1 = this->InfoType;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickCloseDelegate,
             (FReadAccessScope *)&FStack_28);
  if ((*(int *)&(this->OnClickCloseDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnClickCloseDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,EVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_28);
  return;
}

// OnClickDestructionEvent @ 14c0262d0

void __thiscall
UDS_VM_W_ItemDetailInfo::OnClickDestructionEvent
          (UDS_VM_W_ItemDetailInfo *this,FWidgetEventField *param_1)

{
  return;
}

// OnClickDismantleEvent @ 14c0262e0

void __thiscall
UDS_VM_W_ItemDetailInfo::OnClickDismantleEvent
          (UDS_VM_W_ItemDetailInfo *this,FWidgetEventField *param_1)

{
  return;
}

// OnClickStatusEvent @ 14c026d20

void __thiscall UDS_VM_W_ItemDetailInfo::OnClickStatusEvent(UDS_VM_W_ItemDetailInfo *this)

{
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::VisibleStatus.FieldName;
  local_10 = FFieldNotificationClassDescriptor::VisibleStatus.BitNumber;
  if (this->VisibleStatus == Collapsed) {
    this->VisibleStatus = SelfHitTestInvisible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->VisibleStatus = Collapsed;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseInit @ 14c0285a0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_VM_W_ItemDetailInfo::OnCloseInit(UDS_VM_W_ItemDetailInfo *this)

{
  UDS_ItemDetailInfoManager *pUVar1;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ItemDetailInfoManager::GetInst();
  if (pUVar1 != (UDS_ItemDetailInfoManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedOptionValue_Delegate,this);
    return;
  }
  return;
}

// OnOpenItemDestructionCallBack @ 14c02d7a0

void __thiscall
UDS_VM_W_ItemDetailInfo::OnOpenItemDestructionCallBack
          (UDS_VM_W_ItemDetailInfo *this,UDS_UserWidget *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  int iVar3;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnOpenItemDestructionPopup_Delegate);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->ItemData).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
      iVar3 = *(int *)&pUVar2[8].field_0x10;
    }
    else {
      iVar3 = 0;
    }
    TMulticastDelegate<void___cdecl(UDS_UserWidget_*,int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnOpenItemDestructionPopup_Delegate,param_1,iVar3);
  }
  CloseDetailWindow(this);
  return;
}

// OnOpenItemDismantleCallBack @ 14c02d830

void __thiscall
UDS_VM_W_ItemDetailInfo::OnOpenItemDismantleCallBack
          (UDS_VM_W_ItemDetailInfo *this,UDS_UserWidget *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  long64 lVar3;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnOpenItemDismantlePopup_Delegate);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->ItemData).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
      lVar3 = *(long64 *)&pUVar2[8].field_0x8;
    }
    else {
      lVar3 = 0;
    }
    TMulticastDelegate<void___cdecl(UDS_UserWidget_*,__int64),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnOpenItemDismantlePopup_Delegate,param_1,lVar3);
  }
  CloseDetailWindow(this);
  return;
}

// OnSetViewModel @ 14c031e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ItemDetailInfo::OnSetViewModel
          (UDS_VM_W_ItemDetailInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  FName FVar9;
  undefined1 auStackY_248 [32];
  FName local_218;
  int local_210;
  FName local_208;
  int local_200;
  undefined1 local_1f8 [8];
  ForAnyElementType local_1f0;
  int local_1e8;
  TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> local_1e0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FDestructionSentinel local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemDetailInfo>(&local_1e0,&local_198);
  if (local_1e0.Object == (FDS_ViewModelContext_ItemDetailInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0321f5;
  }
  (this->ItemData).WeakPtr = ((local_1e0.Object)->ItemData).WeakPtr;
  this->bIsReserveCloseWindow = (local_1e0.Object)->bCloseWindow;
  this->InfoType = (local_1e0.Object)->InfoType;
  iVar5 = FFieldNotificationClassDescriptor::VisibleExplain.BitNumber;
  FVar9 = FFieldNotificationClassDescriptor::VisibleExplain.FieldName;
  if (this->VisibleExplain != SelfHitTestInvisible) {
    this->VisibleExplain = SelfHitTestInvisible;
    local_1c0 = iVar5;
    local_1c8 = FVar9;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
  }
  iVar5 = FFieldNotificationClassDescriptor::VisibleMenu.BitNumber;
  FVar9 = FFieldNotificationClassDescriptor::VisibleMenu.FieldName;
  if ((local_1e0.Object)->PopupType == FixedPopup) {
    if (this->VisibleMenu != SelfHitTestInvisible) {
      this->VisibleMenu = SelfHitTestInvisible;
LAB_14c031f1e:
      local_200 = iVar5;
      local_208 = FVar9;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
    }
  }
  else if (this->VisibleMenu != Collapsed) {
    this->VisibleMenu = Collapsed;
    goto LAB_14c031f1e;
  }
  this->InfoPopupType = (local_1e0.Object)->PopupType;
  if (&(local_1e0.Object)->OnClickCloseDelegate != &this->OnClickCloseDelegate) {
    local_1f8 = (undefined1  [8])0x0;
    local_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_1e0.Object)->OnClickCloseDelegate,&local_170);
    if ((*(int *)&((local_1e0.Object)->OnClickCloseDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&((local_1e0.Object)->OnClickCloseDelegate).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickCloseDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
               (FWriteAccessScope *)&local_188);
    if ((local_1e8 != 0) && (local_1f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f0,0,0,0x10);
      local_1e8 = 0;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f8);
  }
  this->ItemTID = (local_1e0.Object)->ItemTID;
  this->CloseElapsedTime = 0.0;
  if (this->bIsReserveCloseWindow == false) {
    lVar3 = this->_padding_;
    (this->ItemData_Comparison).WeakPtr = ((local_1e0.Object)->ItemData_Comparison).WeakPtr;
    if (lVar3 != 0) {
      pUVar6 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) {
        bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(&this->ItemData,(void *)0x0)
        ;
        if (bVar4) {
LAB_14c0320c6:
          iVar5 = FFieldNotificationClassDescriptor::VisibleDismantle.BitNumber;
          FVar9 = FFieldNotificationClassDescriptor::VisibleDismantle.FieldName;
          if (this->VisibleDismantle != Collapsed) {
            this->VisibleDismantle = Collapsed;
LAB_14c0320e4:
            local_218 = FVar9;
            local_210 = iVar5;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
          }
        }
        else {
          pUVar7 = FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
          iVar5 = FFieldNotificationClassDescriptor::VisibleDismantle.BitNumber;
          FVar9 = FFieldNotificationClassDescriptor::VisibleDismantle.FieldName;
          if (*(int *)&pUVar7[0x15].field_0x24 < 1) goto LAB_14c0320c6;
          if (this->VisibleDismantle != Visible) {
            this->VisibleDismantle = Visible;
            goto LAB_14c0320e4;
          }
        }
        iVar5 = FFieldNotificationClassDescriptor::VisibleComparisonValue.BitNumber;
        FVar9 = FFieldNotificationClassDescriptor::VisibleComparisonValue.FieldName;
        if (this->VisibleComparisonValue != Collapsed) {
          this->VisibleComparisonValue = Collapsed;
          local_1b0 = iVar5;
          local_1b8 = FVar9;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
        }
        iVar5 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.BitNumber;
        FVar9 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.FieldName;
        if (this->VisibleEquipUseButton != SelfHitTestInvisible) {
          this->VisibleEquipUseButton = SelfHitTestInvisible;
          local_1a0 = iVar5;
          local_1a8 = FVar9;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
        }
        InitData(this);
        goto LAB_14c0321e3;
      }
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_ItemDetailInfo::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x44,L"widget is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
LAB_14c0321e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
LAB_14c0321f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03a700

void __thiscall UDS_VM_W_ItemDetailInfo::OnUpdate(UDS_VM_W_ItemDetailInfo *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3e4ccccd;
  fVar2 = param_1 + this->CloseElapsedTime;
  this->CloseElapsedTime = fVar2;
  if (fVar1 < fVar2) {
    this->bIsReserveCloseWindow = false;
    CloseDetailWindow(this);
    return;
  }
  return;
}

// SetItemComparisonValue @ 14c041d60

void __thiscall
UDS_VM_W_ItemDetailInfo::SetItemComparisonValue(UDS_VM_W_ItemDetailInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ItemComparisonValue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ItemComparisonValue.FieldName;
  bVar5 = FText::IdenticalTo(&this->ItemComparisonValue,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ItemComparisonValue).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ItemComparisonValue).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ItemComparisonValue).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetItemComparisonValueColor @ 14c041e20

void __thiscall
UDS_VM_W_ItemDetailInfo::SetItemComparisonValueColor
          (UDS_VM_W_ItemDetailInfo *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ItemComparisonValueColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ItemComparisonValueColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ItemComparisonValueColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ItemComparisonValueColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ItemComparisonValueColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ItemComparisonValueColor.FieldName;
    (this->ItemComparisonValueColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ItemComparisonValueColor).field0_0x0._s_0.G = fVar1;
    (this->ItemComparisonValueColor).field0_0x0._s_0.B = fVar2;
    (this->ItemComparisonValueColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemEnhanceValue @ 14c041ea0

void __thiscall
UDS_VM_W_ItemDetailInfo::SetItemEnhanceValue(UDS_VM_W_ItemDetailInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ItemEnhanceValue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ItemEnhanceValue.FieldName;
  bVar5 = FText::IdenticalTo(&this->ItemEnhanceValue,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ItemEnhanceValue).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ItemEnhanceValue).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ItemEnhanceValue).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetItemEnhanceValueColor @ 14c041f60

void __thiscall
UDS_VM_W_ItemDetailInfo::SetItemEnhanceValueColor
          (UDS_VM_W_ItemDetailInfo *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ItemEnhanceValueColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ItemEnhanceValueColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ItemEnhanceValueColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ItemEnhanceValueColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ItemEnhanceValueColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ItemEnhanceValueColor.FieldName;
    (this->ItemEnhanceValueColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ItemEnhanceValueColor).field0_0x0._s_0.G = fVar1;
    (this->ItemEnhanceValueColor).field0_0x0._s_0.B = fVar2;
    (this->ItemEnhanceValueColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemSaleExplain @ 14c041fe0

void __thiscall
UDS_VM_W_ItemDetailInfo::SetItemSaleExplain(UDS_VM_W_ItemDetailInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ItemSaleExplain.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ItemSaleExplain.FieldName;
  bVar5 = FText::IdenticalTo(&this->ItemSaleExplain,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ItemSaleExplain).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ItemSaleExplain).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ItemSaleExplain).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetSwitcherUseButton @ 14c043ae0

void __thiscall
UDS_VM_W_ItemDetailInfo::SetSwitcherUseButton(UDS_VM_W_ItemDetailInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SwitcherUseButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherUseButton.FieldName;
  if (this->SwitcherUseButton != *param_1) {
    this->SwitcherUseButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleComparisonValue @ 14c046030

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleComparisonValue
          (UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleComparisonValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleComparisonValue.FieldName;
  if (this->VisibleComparisonValue != *param_1) {
    this->VisibleComparisonValue = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleDismantle @ 14c046080

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleDismantle
          (UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleDismantle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDismantle.FieldName;
  if (this->VisibleDismantle != *param_1) {
    this->VisibleDismantle = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleEnhanceValue @ 14c0460d0

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleEnhanceValue
          (UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.FieldName;
  if (this->VisibleEnhanceValue != *param_1) {
    this->VisibleEnhanceValue = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleEquipUseButton @ 14c046120

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleEquipUseButton
          (UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleEquipUseButton.FieldName;
  if (this->VisibleEquipUseButton != *param_1) {
    this->VisibleEquipUseButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleExplain @ 14c046170

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleExplain(UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleExplain.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleExplain.FieldName;
  if (this->VisibleExplain != *param_1) {
    this->VisibleExplain = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleMenu @ 14c0461c0

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleMenu(UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleMenu.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleMenu.FieldName;
  if (this->VisibleMenu != *param_1) {
    this->VisibleMenu = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleQuantity @ 14c046210

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleQuantity(UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleQuantity.FieldName;
  if (this->VisibleQuantity != *param_1) {
    this->VisibleQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleStatus @ 14c046260

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleStatus(UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleStatus.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleStatus.FieldName;
  if (this->VisibleStatus != *param_1) {
    this->VisibleStatus = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleStatusList @ 14c0462b0

void __thiscall
UDS_VM_W_ItemDetailInfo::SetVisibleStatusList
          (UDS_VM_W_ItemDetailInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleStatusList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleStatusList.FieldName;
  if (this->VisibleStatusList != *param_1) {
    this->VisibleStatusList = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdateItemStatus @ 14c04afc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_ItemDetailInfo::UpdateItemStatus(UDS_VM_W_ItemDetailInfo *this)

{
  ulonglong uVar1;
  EDS_StatusType EVar2;
  code *pcVar3;
  float fVar4;
  FName FVar5;
  FDS_ViewModelContext_StatusInfo *pFVar6;
  FDS_ViewModelContext_CommonVariation *pFVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  FDS_ItemBaseTableRow *pFVar12;
  FDS_ResourceColorTableRow *pFVar13;
  FDS_StringUiTableRow *pFVar14;
  FText *pFVar15;
  FString *pFVar16;
  FDS_EquipmentItemComparisonData *pFVar17;
  FDS_ItemAbilityTableRow *pFVar18;
  FDS_StatusTableRow *pFVar19;
  UDS_UserObjectListItem *pUVar20;
  int *piVar21;
  UDS_LogManager *pUVar22;
  byte bVar23;
  longlong lVar24;
  FLinearColor *pFVar25;
  undefined1 *puVar26;
  uint uVar27;
  FSharedReferencer<1> FVar28;
  FSharedReferencer<1> FVar29;
  ForElementType<unsigned_int> FVar30;
  uint uVar31;
  FSharedReferencer<1> FVar32;
  undefined1 auVar33 [8];
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_9d8 [32];
  undefined1 local_9a8 [8];
  FString local_9a0;
  undefined1 local_988 [8];
  undefined8 uStack_980;
  FString local_978;
  EDS_StatusType local_968 [2];
  undefined8 local_960;
  undefined1 local_958 [8];
  float fStack_950;
  float fStack_94c;
  undefined1 local_948 [8];
  float fStack_940;
  float fStack_93c;
  FString local_938;
  FString local_928;
  FString local_918;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_908;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_8f8;
  longlong local_8e8;
  TSharedPtr<FDS_ViewModelContext_CommonVariation,1> local_8d8;
  TSharedPtr<FDS_ViewModelContext_CommonVariation,1> local_8c8;
  FString local_8b8;
  TSharedPtr<FDS_ViewModelContext_CommonVariation,1> local_8a8;
  int local_898;
  FName local_894;
  FName local_88c;
  FDS_StatusTableRow *local_880;
  FName local_878;
  FName local_870;
  UDS_UserObjectListItem *local_868 [2];
  FName local_858;
  int local_850;
  FFieldId local_848;
  FName local_838;
  int local_830;
  FName local_828;
  int local_820;
  FName local_818;
  int local_810;
  FName local_808;
  int local_800;
  FName local_7f8;
  int local_7f0;
  FName local_7e8;
  int local_7e0;
  FName local_7d8;
  int local_7d0;
  FName local_7c8;
  int local_7c0;
  UDS_UserObjectListItem *local_7b8;
  int local_7b0;
  FString local_7a8;
  longlong *local_798;
  uint uStack_790;
  uint uStack_78c;
  TBitArray<FDefaultBitArrayAllocator> *local_788;
  undefined4 uStack_780;
  uint uStack_77c;
  uint local_778;
  undefined4 uStack_774;
  int iStack_770;
  undefined4 uStack_76c;
  longlong *local_768;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_760;
  undefined8 uStack_740;
  FDS_StringUiID local_738;
  FDS_StringUiID local_728;
  FDS_StringUiID local_718;
  FDS_StringUiID local_708;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6e8;
  FString local_6d8;
  FString local_6c8;
  FText local_6b8;
  FString local_6a8;
  FText local_698;
  FString local_688;
  FText local_678;
  TSharedPtr<FDS_ViewModelContext,1> local_668;
  FString local_658;
  FString local_648;
  TSharedPtr<FDS_ViewModelContext,1> local_638;
  FString local_628;
  TSharedPtr<FDS_ViewModelContext,1> local_618;
  TSharedPtr<FDS_ViewModelContext,1> local_608;
  TSharedPtr<FDS_ViewModelContext,1> local_5f8;
  TSharedPtr<FDS_ViewModelContext,1> local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8 [2];
  undefined4 local_58c;
  int local_588;
  longlong local_580;
  undefined8 local_578;
  undefined8 local_560;
  int local_558;
  int iStack_554;
  undefined8 uStack_550;
  undefined1 local_548 [8];
  undefined1 *local_540;
  int local_538;
  longlong local_530;
  undefined8 local_528;
  undefined8 local_510;
  int local_508;
  int iStack_504;
  undefined8 uStack_500;
  undefined1 local_4f8 [8];
  undefined1 *local_4f0;
  int local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  TBitArray<FDefaultBitArrayAllocator> local_4d0;
  undefined8 uStack_4b0;
  void *local_4a0;
  undefined4 local_498;
  undefined1 local_488 [80];
  undefined4 local_438;
  longlong local_430;
  int local_428;
  int local_3fc;
  undefined1 local_3f8 [8];
  undefined1 *local_3f0;
  int local_3e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  FDS_EquipmentItemComparisonData local_198;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_9d8;
  bVar9 = FWeakObjectPtr::IsValid(&(this->ItemData).WeakPtr);
  if (bVar9) {
    pUVar11 = FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
    pFVar12 = FDS_ItemBaseTableRow::Get((longlong)*(int *)&pUVar11[8].field_0x10,true);
    local_850 = FFieldNotificationClassDescriptor::VisibleStatusList.BitNumber;
    local_858 = FFieldNotificationClassDescriptor::VisibleStatusList.FieldName;
    if (pFVar12 != (FDS_ItemBaseTableRow *)0x0) {
      if (pFVar12->ID_Ability == 0) {
        if (this->VisibleStatusList != Collapsed) {
          this->VisibleStatusList = Collapsed;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_858);
        }
      }
      else {
        FDS_EquipmentItemValueData::GetItemValueData
                  ((FDS_EquipmentItemValueData *)local_488,
                   (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(this->ItemData).WeakPtr);
        iVar10 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.BitNumber;
        FVar5 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.FieldName;
        fVar4 = __real_3b808081;
        fVar36 = FLinearColor::Black.field0_0x0._0_4_;
        fVar37 = FLinearColor::Black.field0_0x0._4_4_;
        fVar38 = FLinearColor::Black.field0_0x0._8_4_;
        fVar35 = FLinearColor::Black.field0_0x0._12_4_;
        uVar31 = 0;
        _local_958 = FLinearColor::Black.field0_0x0;
        local_588 = 0;
        _local_948 = FLinearColor::Black.field0_0x0;
        local_580 = 0;
        _local_988 = FLinearColor::Black.field0_0x0;
        local_578 = 0;
        local_560 = 0;
        local_558 = ___xmm_00000000ffffffff0000008000000000;
        iStack_554 = _UNK_150631d94;
        uStack_550 = _UNK_150631d98;
        local_540 = (undefined1 *)0x0;
        local_538 = 0;
        local_530 = 0;
        local_528 = 0;
        local_510 = 0;
        local_508 = ___xmm_00000000ffffffff0000008000000000;
        iStack_504 = _UNK_150631d94;
        uStack_500 = _UNK_150631d98;
        local_4f0 = (undefined1 *)0x0;
        local_4e8 = 0;
        local_4e0 = 0;
        local_4d8 = 0;
        local_4d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_4d0.NumBits = ___xmm_00000000ffffffff0000008000000000;
        local_4d0.MaxBits = _UNK_150631d94;
        uStack_4b0 = _UNK_150631d98;
        local_4a0 = (void *)0x0;
        local_498 = 0;
        local_978.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_978.Data.ArrayNum = 0;
        local_978.Data.ArrayMax = 0;
        local_918.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_918.Data.ArrayNum = 0;
        local_918.Data.ArrayMax = 0;
        local_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_928.Data.ArrayNum = 0;
        local_928.Data.ArrayMax = 0;
        local_938.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_938.Data.ArrayNum = 0;
        local_938.Data.ArrayMax = 0;
        if ((this->bIsShowEnhanceValue == false) || ((int)local_488._0_4_ < 1)) {
          if (this->VisibleEnhanceValue != Collapsed) {
            this->VisibleEnhanceValue = Collapsed;
            local_810 = iVar10;
            local_818 = FVar5;
            (**(code **)(this->_padding_ + 0x38))();
          }
        }
        else {
          pFVar13 = FDS_ResourceColorTableRow::Get(0x452,true);
          if (pFVar13 != (FDS_ResourceColorTableRow *)0x0) {
            fVar36 = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.R];
            fVar37 = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.G];
            fVar38 = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.B];
            fVar35 = (float)(pFVar13->Color).field0_0x0._s_0.A * fVar4;
            local_988._4_4_ = fVar37;
            local_988._0_4_ = fVar36;
            uStack_980._0_4_ = fVar38;
            uStack_980._4_4_ = fVar35;
          }
          pFVar14 = FDS_StringUiTableRow::GetRef(0x9dd1,true);
          ::FString::operator=(&local_978,&pFVar14->Text);
          local_8b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8b8.Data.ArrayNum = 0;
          local_8b8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_8b8,local_488._0_4_);
          DS_Util::GetFormatString<FString>(&local_6c8,&local_978,&local_8b8);
          pFVar15 = FText::FromString(&local_6b8,&local_6c8);
          local_848.BitNumber = FFieldNotificationClassDescriptor::ItemEnhanceValue.BitNumber;
          local_848.FieldName = FFieldNotificationClassDescriptor::ItemEnhanceValue.FieldName;
          UMVVMViewModelBase::SetPropertyValue
                    ((UMVVMViewModelBase *)this,&this->ItemEnhanceValue,pFVar15,&local_848);
          if (local_6b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_6b8.TextData.Reference + 0x10))();
          }
          FVar5 = FFieldNotificationClassDescriptor::ItemEnhanceValueColor.FieldName;
          if ((((fVar36 != (this->ItemEnhanceValueColor).field0_0x0._s_0.R) ||
               (fVar37 != (this->ItemEnhanceValueColor).field0_0x0._s_0.G)) ||
              (fVar38 != (this->ItemEnhanceValueColor).field0_0x0._s_0.B)) ||
             (fVar35 != (this->ItemEnhanceValueColor).field0_0x0._s_0.A)) {
            local_830 = FFieldNotificationClassDescriptor::ItemEnhanceValueColor.BitNumber;
            (this->ItemEnhanceValueColor).field0_0x0._s_0.R = fVar36;
            (this->ItemEnhanceValueColor).field0_0x0._s_0.G = fVar37;
            (this->ItemEnhanceValueColor).field0_0x0._s_0.B = fVar38;
            (this->ItemEnhanceValueColor).field0_0x0._s_0.A = fVar35;
            local_838 = FVar5;
            (**(code **)(this->_padding_ + 0x38))();
          }
          iVar10 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.BitNumber;
          FVar5 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.FieldName;
          if (this->VisibleEnhanceValue != SelfHitTestInvisible) {
            this->VisibleEnhanceValue = SelfHitTestInvisible;
            local_820 = iVar10;
            local_828 = FVar5;
            (**(code **)(this->_padding_ + 0x38))();
          }
          if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
          }
        }
        bVar9 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          (&this->ItemData_Comparison,(void *)0x0);
        iVar10 = FFieldNotificationClassDescriptor::VisibleComparisonValue.BitNumber;
        FVar5 = FFieldNotificationClassDescriptor::VisibleComparisonValue.FieldName;
        if (bVar9) {
          if (this->VisibleComparisonValue != Collapsed) {
            this->VisibleComparisonValue = Collapsed;
            local_7e0 = iVar10;
            local_7e8 = FVar5;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_7e8);
          }
        }
        else {
          local_738.ID = 0x9dd1;
          local_738._padding_ = (longlong)&___7FDS_StringUiID__6B_;
          pFVar16 = FDS_StringUiID::Str(&local_738);
          ::FString::operator=(&local_978,pFVar16);
          local_728._padding_ = (longlong)&___7FDS_StringUiID__6B_;
          local_728.ID = 0x9dd2;
          pFVar16 = FDS_StringUiID::Str(&local_728);
          ::FString::operator=(&local_918,pFVar16);
          local_718._padding_ = (longlong)&___7FDS_StringUiID__6B_;
          local_718.ID = 0x9dd3;
          pFVar16 = FDS_StringUiID::Str(&local_718);
          ::FString::operator=(&local_928,pFVar16);
          local_708._padding_ = (longlong)&___7FDS_StringUiID__6B_;
          local_708.ID = 0x9dd4;
          pFVar16 = FDS_StringUiID::Str(&local_708);
          ::FString::operator=(&local_938,pFVar16);
          pFVar13 = FDS_ResourceColorTableRow::Get(0x44f,true);
          if (pFVar13 != (FDS_ResourceColorTableRow *)0x0) {
            local_958._4_4_ = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.G];
            local_958._0_4_ = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.R];
            fStack_950 = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.B];
            fStack_94c = (float)(pFVar13->Color).field0_0x0._s_0.A * fVar4;
          }
          pFVar13 = FDS_ResourceColorTableRow::Get(0x451,true);
          if (pFVar13 != (FDS_ResourceColorTableRow *)0x0) {
            local_948._4_4_ = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.G];
            local_948._0_4_ = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.R];
            fStack_940 = FLinearColor::sRGBToLinearTable[(pFVar13->Color).field0_0x0._s_0.B];
            fStack_93c = (float)(pFVar13->Color).field0_0x0._s_0.A * fVar4;
          }
          pFVar17 = FDS_EquipmentItemComparisonData::GetComparisonData
                              (&local_198,
                               (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(this->ItemData).WeakPtr
                               ,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)
                                (this->ItemData_Comparison).WeakPtr);
          local_588 = pFVar17->ComparisonCombatPower;
          TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
          ::operator=(&local_580,&pFVar17->ComparisonValue);
          TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
          ::operator=(&local_530,&pFVar17->AddStatus);
          TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
          ::operator=(&local_4e0,&pFVar17->DeleteStatus);
          FDS_EquipmentItemComparisonData::~FDS_EquipmentItemComparisonData(&local_198);
          local_9a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_9a0.Data.ArrayNum = 0;
          local_9a0.Data.ArrayMax = 0;
          iVar10 = -local_588;
          if (-local_588 < 0) {
            iVar10 = local_588;
          }
          ::FString::AppendInt(&local_9a0,iVar10);
          iVar10 = FFieldNotificationClassDescriptor::VisibleComparisonValue.BitNumber;
          FVar5 = FFieldNotificationClassDescriptor::VisibleComparisonValue.FieldName;
          if (local_588 == 0) {
            if (this->VisibleComparisonValue != Collapsed) {
              this->VisibleComparisonValue = Collapsed;
              local_800 = iVar10;
              local_808 = FVar5;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_808);
            }
          }
          else {
            if (local_588 < 1) {
              local_6e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                        (&local_6e8,(wchar_t *)local_9a0.Data.AllocatorInstance.Data,
                         local_9a0.Data.ArrayNum,0);
              pFVar16 = DS_Util::GetFormatString<FString>
                                  (&local_688,&local_918,(FString *)&local_6e8);
              if (&local_9a0 != pFVar16) {
                if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
                }
                local_9a0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
                (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_9a0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
                local_9a0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
                (pFVar16->Data).ArrayNum = 0;
                (pFVar16->Data).ArrayMax = 0;
              }
              if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_688.Data.AllocatorInstance.Data);
              }
              pFVar15 = FText::FromString(&local_678,&local_9a0);
              SetItemComparisonValue(this,pFVar15);
              if (local_678.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_678.TextData.Reference + 0x10))();
              }
              pFVar25 = (FLinearColor *)local_948;
            }
            else {
              local_6f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                        (&local_6f8,(wchar_t *)local_9a0.Data.AllocatorInstance.Data,
                         local_9a0.Data.ArrayNum,0);
              pFVar16 = DS_Util::GetFormatString<FString>
                                  (&local_6a8,&local_978,(FString *)&local_6f8);
              if (&local_9a0 != pFVar16) {
                if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
                }
                local_9a0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
                (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_9a0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
                local_9a0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
                (pFVar16->Data).ArrayNum = 0;
                (pFVar16->Data).ArrayMax = 0;
              }
              if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
              }
              pFVar15 = FText::FromString(&local_698,&local_9a0);
              SetItemComparisonValue(this,pFVar15);
              if (local_698.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_698.TextData.Reference + 0x10))();
              }
              pFVar25 = (FLinearColor *)local_958;
            }
            SetItemComparisonValueColor(this,pFVar25);
          }
          iVar10 = FFieldNotificationClassDescriptor::VisibleComparisonValue.BitNumber;
          FVar5 = FFieldNotificationClassDescriptor::VisibleComparisonValue.FieldName;
          if (this->VisibleComparisonValue != SelfHitTestInvisible) {
            this->VisibleComparisonValue = SelfHitTestInvisible;
            local_7f0 = iVar10;
            local_7f8 = FVar5;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_7f8);
          }
          if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
          }
        }
        pFVar18 = FDS_ItemAbilityTableRow::Get((longlong)pFVar12->ID_Ability,true);
        local_960 = pFVar18;
        if (pFVar18 != (FDS_ItemAbilityTableRow *)0x0) {
          FDS_EntryBindingEventField::Reset(&this->StatusBindingEventField);
          if (0 < (pFVar18->StatusType).ArrayNum) {
            local_8e8 = 0;
            do {
              lVar24 = local_8e8;
              uVar27 = 0;
              if ((int)uVar31 < (pFVar18->StatusType).ArrayNum) {
                uVar27 = ~uVar31 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar10 = *(int *)((pFVar18->StatusType).AllocatorInstance.Data + lVar24 * 4);
              uVar27 = 0;
              if ((int)uVar31 < (pFVar18->StatusType).ArrayNum) {
                uVar27 = ~uVar31 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              EVar2 = *(EDS_StatusType *)((pFVar18->StatusType).AllocatorInstance.Data + lVar24 * 4)
              ;
              pFVar19 = FDS_StatusTableRow::Get((longlong)iVar10,true);
              local_880 = pFVar19;
              if (pFVar19 != (FDS_StatusTableRow *)0x0) {
                pUVar20 = NewObject<UDS_UserObjectListItem>((UObject *)this);
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
                  if (pUVar20 == (UDS_UserObjectListItem *)0x0) goto LAB_14c04c146;
                }
                else {
                  if (pUVar20 == (UDS_UserObjectListItem *)0x0) {
LAB_14c04c146:
                    pUVar22 = UDS_LogManager::GetInst();
                    if (pUVar22 != (UDS_LogManager *)0x0) {
                      pUVar22 = UDS_LogManager::GetInst();
                      local_3d8._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_3d8,"UDS_VM_W_ItemDetailInfo::UpdateItemStatus",0x29,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar22,1,Warning,local_3d8.Ptr,0x134,L"listItem is nullptr.");
                      if ((void *)local_3d8._padding_ != (void *)0x0) {
                        FMemory::Free((void *)local_3d8._padding_);
                      }
                    }
                    goto LAB_14c04c4bd;
                  }
                  UE::GC::MarkAsReachable((UObject *)pUVar20);
                }
                MakeContext<FDS_ViewModelContext_StatusInfo>(&local_908);
                pFVar6 = local_908.Object;
                FVar28.ReferenceController = local_908.SharedReferenceCount.ReferenceController;
                if (local_908.Object != (FDS_ViewModelContext_StatusInfo *)0x0) {
                  if ((local_908.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined4 *)&pFVar6->_padding_ = 0x12;
                  pFVar6->StatusID = EVar2;
                  if (local_428 != local_3fc) {
                    puVar26 = local_3f8;
                    if (local_3f0 != (undefined1 *)0x0) {
                      puVar26 = local_3f0;
                    }
                    for (iVar10 = *(int *)(puVar26 + (ulonglong)(local_3e8 - Hp & EVar2) * 4);
                        iVar10 != -1; iVar10 = *(int *)(local_430 + 8 + (longlong)iVar10 * 0x10)) {
                      if (*(EDS_StatusType *)(local_430 + (longlong)iVar10 * 0x10) == EVar2) {
                        piVar21 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                                  ::FindChecked(&local_430,EVar2);
                        pFVar6->StatusValue = *piVar21;
                        break;
                      }
                    }
                  }
                  FVar28.ReferenceController = local_908.SharedReferenceCount.ReferenceController;
                  local_668.Object = (FDS_ViewModelContext *)local_908.Object;
                  local_668.SharedReferenceCount.ReferenceController =
                       local_908.SharedReferenceCount.ReferenceController;
                  if (local_908.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_908.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_908.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  UDS_UserObjectListItem::AddContext(pUVar20,&local_668);
                }
                MakeContext<FDS_ViewModelContext_CommonVariation>(&local_8d8);
                pFVar7 = local_8d8.Object;
                FVar32.ReferenceController = local_8d8.SharedReferenceCount.ReferenceController;
                if (local_8d8.Object != (FDS_ViewModelContext_CommonVariation *)0x0) {
                  if ((local_8d8.Object == (FDS_ViewModelContext_CommonVariation *)0x0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined4 *)&pFVar7->_padding_ = 0x59;
                  ::FName::FName(&local_894,"DS_VM_Variation_Comparison");
                  pFVar7->_padding_ = (longlong)local_894;
                  if ((int)local_578 != uStack_550._4_4_) {
                    puVar26 = local_548;
                    if (local_540 != (undefined1 *)0x0) {
                      puVar26 = local_540;
                    }
                    for (iVar10 = *(int *)(puVar26 + (ulonglong)(local_538 - Hp & EVar2) * 4);
                        iVar10 != -1; iVar10 = *(int *)(local_580 + 8 + (longlong)iVar10 * 0x10)) {
                      if (*(EDS_StatusType *)(local_580 + (longlong)iVar10 * 0x10) == EVar2) {
                        pFVar7->Visibility = SelfHitTestInvisible;
                        piVar21 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                                  ::FindChecked(&local_580,EVar2);
                        iVar10 = -*piVar21;
                        if (-*piVar21 < 0) {
                          iVar10 = *piVar21;
                        }
                        DS_Util::GetInfoViewValueFormattedString
                                  (&local_7a8,pFVar19->InfoViewValueFormat,(float)iVar10);
                        piVar21 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                                  ::FindChecked(&local_580,EVar2);
                        if (*piVar21 < 1) {
                          pFVar16 = ::FString::FString(&local_5c8,&local_7a8);
                          pFVar16 = DS_Util::GetFormatString<FString>(&local_648,&local_918,pFVar16)
                          ;
                          ::FString::operator=(&pFVar7->Variation,pFVar16);
                          if (local_648.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_648.Data.AllocatorInstance.Data);
                          }
                          auVar33 = local_948;
                          uVar34 = _fStack_940;
                        }
                        else {
                          pFVar16 = ::FString::FString(&local_5d8,&local_7a8);
                          pFVar16 = DS_Util::GetFormatString<FString>(&local_658,&local_978,pFVar16)
                          ;
                          ::FString::operator=(&pFVar7->Variation,pFVar16);
                          if (local_658.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_658.Data.AllocatorInstance.Data);
                          }
                          auVar33 = local_958;
                          uVar34 = _fStack_950;
                        }
                        *(undefined1 (*) [8])&(pFVar7->Color).field0_0x0 = auVar33;
                        *(undefined8 *)((longlong)&(pFVar7->Color).field0_0x0 + 8) = uVar34;
                        if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
                        }
                        goto LAB_14c04bbbb;
                      }
                    }
                  }
                  if ((int)local_528 != uStack_500._4_4_) {
                    puVar26 = local_4f8;
                    if (local_4f0 != (undefined1 *)0x0) {
                      puVar26 = local_4f0;
                    }
                    for (iVar10 = *(int *)(puVar26 + (ulonglong)(local_4e8 - Hp & EVar2) * 4);
                        iVar10 != -1; iVar10 = *(int *)(local_530 + 8 + (longlong)iVar10 * 0x10)) {
                      if (*(EDS_StatusType *)(local_530 + (longlong)iVar10 * 0x10) == EVar2) {
                        pFVar7->Visibility = SelfHitTestInvisible;
                        iVar10 = local_928.Data.ArrayNum + -1;
                        if (local_928.Data.ArrayNum == 0) {
                          iVar10 = 0;
                        }
                        ::FString::AssignRange
                                  (&pFVar7->Variation,
                                   (wchar_t *)local_928.Data.AllocatorInstance.Data,iVar10);
                        *(undefined1 (*) [8])&(pFVar7->Color).field0_0x0 = local_958;
                        *(undefined8 *)((longlong)&(pFVar7->Color).field0_0x0 + 8) = _fStack_950;
                        goto LAB_14c04bbbb;
                      }
                    }
                  }
                  pFVar7->Visibility = Collapsed;
LAB_14c04bbbb:
                  FVar32.ReferenceController = local_8d8.SharedReferenceCount.ReferenceController;
                  local_638.Object = (FDS_ViewModelContext *)local_8d8.Object;
                  local_638.SharedReferenceCount.ReferenceController =
                       local_8d8.SharedReferenceCount.ReferenceController;
                  if (local_8d8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_8d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_8d8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  UDS_UserObjectListItem::AddContext(pUVar20,&local_638);
                }
                MakeContext<FDS_ViewModelContext_CommonVariation>(&local_8c8);
                pFVar7 = local_8c8.Object;
                FVar29.ReferenceController = local_8c8.SharedReferenceCount.ReferenceController;
                if (local_8c8.Object != (FDS_ViewModelContext_CommonVariation *)0x0) {
                  if ((local_8c8.Object == (FDS_ViewModelContext_CommonVariation *)0x0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined4 *)&pFVar7->_padding_ = 0x59;
                  ::FName::FName(&local_88c,"DS_VM_Variation_Enhance");
                  pFVar7->_padding_ = (longlong)local_88c;
                  if (((this->bIsShowEnhanceValue == false) ||
                      (local_968[0] = EVar2,
                      iVar10 = TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                               ::FindIndexByHash<enum_EDS_StatusType>(local_488 + 8,EVar2,local_968)
                      , iVar10 == -1)) ||
                     (piVar21 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                                ::FindChecked(local_488 + 8,EVar2), *piVar21 == 0)) {
                    pFVar7->Visibility = Collapsed;
                  }
                  else {
                    piVar21 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                              ::FindChecked(local_488 + 8,EVar2);
                    DS_Util::GetInfoViewValueFormattedString
                              (&local_6d8,local_880->InfoViewValueFormat,(float)*piVar21);
                    pFVar16 = ::FString::FString(local_5b8,&local_6d8);
                    pFVar16 = DS_Util::GetFormatString<FString>(&local_628,&local_978,pFVar16);
                    ::FString::operator=(&pFVar7->Variation,pFVar16);
                    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_628.Data.AllocatorInstance.Data);
                    }
                    (pFVar7->Color).field0_0x0._s_0.R = fVar36;
                    (pFVar7->Color).field0_0x0._s_0.G = fVar37;
                    (pFVar7->Color).field0_0x0._s_0.B = fVar38;
                    (pFVar7->Color).field0_0x0._s_0.A = fVar35;
                    pFVar7->Visibility = SelfHitTestInvisible;
                    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
                    }
                  }
                  FVar29.ReferenceController = local_8c8.SharedReferenceCount.ReferenceController;
                  local_618.Object = (FDS_ViewModelContext *)local_8c8.Object;
                  local_618.SharedReferenceCount.ReferenceController =
                       local_8c8.SharedReferenceCount.ReferenceController;
                  if (local_8c8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_8c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_8c8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  UDS_UserObjectListItem::AddContext(pUVar20,&local_618);
                }
                local_7b8 = pUVar20;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar20);
                }
                FDS_EntryBindingEventField::Add
                          (&this->StatusBindingEventField,
                           (TObjectPtr<UDS_UserObjectListItem>)&local_7b8);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar29.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar32.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar28.ReferenceController);
              }
              uVar31 = uVar31 + 1;
              local_8e8 = local_8e8 + 1;
              pFVar18 = local_960;
            } while ((int)uVar31 < (local_960->StatusType).ArrayNum);
          }
          uVar31 = local_4d0.NumBits;
          uStack_790 = 0;
          uStack_78c = 1;
          local_778 = 0;
          uStack_77c = uStack_790;
          if (local_4d0.NumBits != 0) {
            FVar30 = (ForElementType<unsigned_int>)&local_4d0;
            if (local_4d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar30 = local_4d0.AllocatorInstance.SecondaryData;
            }
            uVar27 = *(uint *)FVar30;
            local_778 = 0;
            uStack_790 = 0;
            while (uVar27 == 0) {
              lVar24 = (longlong)(int)uStack_790;
              local_778 = local_778 + 0x20;
              uStack_790 = uStack_790 + 1;
              uStack_77c = local_4d0.NumBits;
              if ((int)((local_4d0.NumBits - 1U) + ((int)(local_4d0.NumBits - 1U) >> 0x1f & 0x1fU))
                  >> 5 < (int)uStack_790) goto LAB_14c04bf75;
              uVar27 = *(uint *)((longlong)FVar30 + (lVar24 + 1) * 4);
            }
            uStack_78c = -uVar27 & uVar27;
            uVar1 = (ulonglong)uStack_78c * 2 + 1;
            lVar24 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_7b0 = (int)lVar24;
            uStack_77c = local_7b0 + -1 + local_778;
            if (local_4d0.NumBits < (int)uStack_77c) {
              uStack_77c = local_4d0.NumBits;
            }
          }
LAB_14c04bf75:
          local_798 = &local_4e0;
          uStack_774 = local_58c;
          local_788 = &local_4d0;
          iStack_770 = (int)local_4d8 - uStack_4b0._4_4_;
          uVar27 = local_4d0.NumBits & 0xffffffe0;
          uStack_780 = 0xffffffff;
          TStack_760.CurrentBitIndex = uStack_77c;
          TStack_760.UnvisitedBitMask = 0xffffffff;
          TStack_760._padding_ = CONCAT44(uStack_78c,uStack_790);
          iVar10 = local_4d0.NumBits >> 5;
          TStack_760._28_4_ = local_58c;
          TStack_760.BaseBitIndex = local_778;
          uStack_740 = CONCAT44(uStack_76c,iStack_770);
          bVar23 = (byte)local_4d0.NumBits;
          local_768 = local_798;
          TStack_760.Array = local_788;
          if (local_4d0.NumBits < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (uVar31 != local_4d0.NumBits) {
            FVar30 = (ForElementType<unsigned_int>)&local_4d0;
            if (local_4d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar30 = local_4d0.AllocatorInstance.SecondaryData;
            }
            uVar31 = -1 << (bVar23 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar10 * 4);
            while (uVar31 == 0) {
              lVar24 = (longlong)iVar10;
              uVar27 = uVar27 + 0x20;
              iVar10 = iVar10 + 1;
              uVar31 = local_4d0.NumBits;
              if ((int)((local_4d0.NumBits - 1U) + ((int)(local_4d0.NumBits - 1U) >> 0x1f & 0x1fU))
                  >> 5 < iVar10) goto LAB_14c04c0c0;
              uVar31 = *(uint *)((longlong)FVar30 + (lVar24 + 1) * 4);
            }
            uVar1 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
            lVar24 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_898 = (int)lVar24;
            uVar31 = local_898 + -1 + uVar27;
            if (local_4d0.NumBits < (int)uVar31) {
              uVar31 = local_4d0.NumBits;
            }
          }
LAB_14c04c0c0:
          do {
            plVar8 = local_768;
            if ((int)local_768[1] - *(int *)((longlong)local_768 + 0x34) != (int)uStack_740) {
              local_9a8[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_9a8);
            }
            iVar10 = FFieldNotificationClassDescriptor::VisibleStatusList.BitNumber;
            FVar5 = FFieldNotificationClassDescriptor::VisibleStatusList.FieldName;
            if (((TStack_760.CurrentBitIndex == uVar31) && (TStack_760.Array == &local_4d0)) &&
               (plVar8 == &local_4e0)) {
              if (this->VisibleStatusList != SelfHitTestInvisible) {
                this->VisibleStatusList = SelfHitTestInvisible;
                local_7d0 = iVar10;
                local_7d8 = FVar5;
                (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_7d8);
              }
              local_7c0 = FFieldNotificationClassDescriptor::StatusBindingEventField.BitNumber;
              local_7c8 = FFieldNotificationClassDescriptor::StatusBindingEventField.FieldName;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_7c8);
              break;
            }
            pFVar18 = *(FDS_ItemAbilityTableRow **)
                       (*plVar8 + (longlong)TStack_760.CurrentBitIndex * 0x10);
            local_960 = pFVar18;
            pUVar20 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar20 == (UDS_UserObjectListItem *)0x0) goto LAB_14c04c5ee;
            }
            else {
              if (pUVar20 == (UDS_UserObjectListItem *)0x0) {
LAB_14c04c5ee:
                pUVar22 = UDS_LogManager::GetInst();
                if (pUVar22 != (UDS_LogManager *)0x0) {
                  pUVar22 = UDS_LogManager::GetInst();
                  local_2b8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_2b8,"UDS_VM_W_ItemDetailInfo::UpdateItemStatus",0x29,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar22,1,Warning,local_2b8.Ptr,0x18a,L"listItem is nullptr.");
                  if ((void *)local_2b8._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_2b8._padding_);
                  }
                }
                break;
              }
              UE::GC::MarkAsReachable((UObject *)pUVar20);
            }
            MakeContext<FDS_ViewModelContext_StatusInfo>(&local_8f8);
            pFVar6 = local_8f8.Object;
            FVar28.ReferenceController = local_8f8.SharedReferenceCount.ReferenceController;
            if (local_8f8.Object != (FDS_ViewModelContext_StatusInfo *)0x0) {
              if ((local_8f8.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar28.ReferenceController = local_8f8.SharedReferenceCount.ReferenceController;
              *(undefined4 *)&pFVar6->_padding_ = 0x12;
              pFVar6->StatusID = (EDS_StatusType)pFVar18;
              local_608.Object = (FDS_ViewModelContext *)local_8f8.Object;
              local_608.SharedReferenceCount.ReferenceController =
                   local_8f8.SharedReferenceCount.ReferenceController;
              pFVar6->StatusValue = local_960._4_4_;
              if (local_8f8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_8f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_8f8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar20,&local_608);
            }
            MakeContext<FDS_ViewModelContext_CommonVariation>
                      ((TSharedPtr<FDS_ViewModelContext_CommonVariation,1> *)local_988);
            auVar33 = local_988;
            if (local_988 == (undefined1  [8])0x0) {
              FVar32.ReferenceController = uStack_980;
            }
            else {
              if ((local_988 == (undefined1  [8])0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)((longlong)auVar33 + 0x18) = 0x59;
              ::FName::FName(&local_878,"DS_VM_Variation_Comparison");
              *(FName *)((longlong)auVar33 + 0x10) = local_878;
              *(ESlateVisibility *)((longlong)auVar33 + 0x20) = SelfHitTestInvisible;
              iVar10 = local_938.Data.ArrayNum + -1;
              if (local_938.Data.ArrayNum == 0) {
                iVar10 = 0;
              }
              ::FString::AssignRange
                        ((FString *)((longlong)auVar33 + 0x28),
                         (wchar_t *)local_938.Data.AllocatorInstance.Data,iVar10);
              FVar32.ReferenceController = uStack_980;
              local_5f8.Object = (FDS_ViewModelContext *)local_988;
              local_5f8.SharedReferenceCount.ReferenceController = uStack_980;
              *(undefined1 (*) [8])&((FLinearColor *)((longlong)auVar33 + 0x48))->field0_0x0 =
                   local_948;
              *(undefined8 *)
               ((longlong)&((FLinearColor *)((longlong)auVar33 + 0x48))->field0_0x0 + 8) =
                   _fStack_940;
              if (uStack_980 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                uStack_980->SharedReferenceCount =
                     (atomic<int>)((int)uStack_980->SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar20,&local_5f8);
            }
            MakeContext<FDS_ViewModelContext_CommonVariation>(&local_8a8);
            pFVar7 = local_8a8.Object;
            FVar29.ReferenceController = local_8a8.SharedReferenceCount.ReferenceController;
            if (local_8a8.Object != (FDS_ViewModelContext_CommonVariation *)0x0) {
              if ((local_8a8.Object == (FDS_ViewModelContext_CommonVariation *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)&pFVar7->_padding_ = 0x59;
              ::FName::FName(&local_870,"DS_VM_Variation_Enhance");
              FVar29.ReferenceController = local_8a8.SharedReferenceCount.ReferenceController;
              pFVar7->_padding_ = (longlong)local_870;
              local_5e8.Object = (FDS_ViewModelContext *)local_8a8.Object;
              local_5e8.SharedReferenceCount.ReferenceController =
                   local_8a8.SharedReferenceCount.ReferenceController;
              pFVar7->Visibility = Collapsed;
              if (local_8a8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_8a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_8a8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar20,&local_5e8);
            }
            local_868[0] = pUVar20;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar20);
            }
            FDS_EntryBindingEventField::Add
                      (&this->StatusBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)local_868)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar29.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar32.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar28.ReferenceController);
            TStack_760.UnvisitedBitMask = TStack_760.UnvisitedBitMask & ~TStack_760._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_760);
          } while( true );
        }
LAB_14c04c4bd:
        if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_938.Data.AllocatorInstance.Data);
        }
        if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_928.Data.AllocatorInstance.Data);
        }
        if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_918.Data.AllocatorInstance.Data);
        }
        if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_978.Data.AllocatorInstance.Data);
        }
        local_498 = 0;
        if (local_4a0 != (void *)0x0) {
          FMemory::Free(local_4a0);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_4e0);
        local_4e8 = 0;
        if (local_4f0 != (undefined1 *)0x0) {
          FMemory::Free(local_4f0);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_530);
        local_538 = 0;
        if (local_540 != (undefined1 *)0x0) {
          FMemory::Free(local_540);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_580);
        local_3e8 = 0;
        if (local_3f0 != (undefined1 *)0x0) {
          FMemory::Free(local_3f0);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_430);
        local_438 = 0;
        if ((void *)local_488._72_8_ != (void *)0x0) {
          FMemory::Free((void *)local_488._72_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (local_488 + 8);
      }
    }
  }
  return;
}

// UpdateQuickSlotOption @ 14c04dcf0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_VM_W_ItemDetailInfo::UpdateQuickSlotOption(UDS_VM_W_ItemDetailInfo *this)

{
  bool bVar1;
  UDS_ItemDetailInfoManager *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(&this->ItemData,(void *)0x0);
  if (((!bVar1) && (this->InfoPopupType != FixedPopup)) &&
     (pUVar2 = UDS_ItemDetailInfoManager::GetInst(),
     local_10 = FFieldNotificationClassDescriptor::VisibleExplain.BitNumber,
     local_18 = FFieldNotificationClassDescriptor::VisibleExplain.FieldName,
     pUVar2 != (UDS_ItemDetailInfoManager *)0x0)) {
    if (this->VisibleExplain != SelfHitTestInvisible) {
      this->VisibleExplain = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::VisibleMenu.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VisibleMenu.FieldName;
    if ((pUVar2->OptionValue & OPTION_KEY_02) == None) {
      if (this->VisibleMenu != Collapsed) {
        this->VisibleMenu = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        return;
      }
    }
    else {
      if (this->VisibleMenu != SelfHitTestInvisible) {
        this->VisibleMenu = SelfHitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      this->InfoPopupType = FixedPopup;
    }
  }
  return;
}

