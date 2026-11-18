// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 191

// SetEventKeyDown_WrapperImpl @ 14b681a00

void __cdecl UDS_VM_Item::SetEventKeyDown_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569534>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x382,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x660))(pUVar3,param_2);
  }
  return;
}

// SetEventKeyUp_WrapperImpl @ 14b681a10

void __cdecl UDS_VM_Item::SetEventKeyUp_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569528>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x388,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x668))(pUVar3,param_2);
  }
  return;
}

// SetEventMouseEnter_WrapperImpl @ 14b681a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569522>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x38e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x670))(pUVar3,param_2);
    UpdateViewEntry(param_1,Selected);
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b681a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569514>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x396,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x678))(pUVar3,param_2);
    UpdateViewEntry(param_1,Selected);
  }
  return;
}

// SetEventOnDragDetected_WrapperImpl @ 14b681a40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::SetEventOnDragDetected_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569506>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x39e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x680))(pUVar3,param_2);
    UpdateViewEntry(param_1,Selected);
  }
  return;
}

// SetEventOnDrop_WrapperImpl @ 14b681a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::SetEventOnDrop_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569498>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3a6,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x688))(pUVar3,param_2);
    UpdateViewEntry(param_1,Selected);
  }
  return;
}

// SetEventOnDragCancelled_WrapperImpl @ 14b681a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::SetEventOnDragCancelled_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569490>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3ae,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x690))(pUVar3,param_2);
    UpdateViewEntry(param_1,Selected);
  }
  return;
}

// SetEventMouseButtonUp_WrapperImpl @ 14b681a70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::SetEventMouseButtonUp_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_VM_Item_OnEventMouseButtonUp");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId950,"UDS_VM_Item_OnEventMouseButtonUp",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp",
               0x3b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId950);
  }
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569480>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3b8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x698))(pUVar3,param_2);
    UpdateViewEntry(param_1,Selected);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// SetEventMouseButtonDown_WrapperImpl @ 14b681a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::SetEventMouseButtonDown_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569472>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3c0,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x6a0))(pUVar3,param_2);
    UpdateViewEntry(param_1,Selected);
  }
  return;
}

// SetEventMouseButtonDoubleClick_WrapperImpl @ 14b681a90

void __cdecl UDS_VM_Item::SetEventMouseButtonDoubleClick_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569464>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3c8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x6a8))(pUVar3,param_2);
  }
  return;
}

// SetItemMetarialSubtractionButton_WrapperImpl @ 14b681aa0

void __cdecl UDS_VM_Item::SetItemMetarialSubtractionButton_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                     ((longlong)param_1 + 0xaec),(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569458>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3ce,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xaec));
    (**(code **)(*(longlong *)pUVar3 + 0x6b0))(pUVar3,param_2);
  }
  return;
}

// SetAnimationFinishEvent_WrapperImpl @ 14b681ab0

void __cdecl UDS_VM_Item::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetReleasedListViewEvent_WrapperImpl @ 14b681ac0

void __cdecl UDS_VM_Item::SetReleasedListViewEvent_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014be32c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f8))();
  return;
}

// StaticClass @ 14b681ad0

UClass * __cdecl UDS_VM_Item::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Item.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Item",
               &Z_Registration_Info_UClass_UDS_VM_Item.InnerSingleton,
               StaticRegisterNativesUDS_VM_Item,0xb50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Item>,InternalVTableHelperCtorCaller<UDS_VM_Item>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Item.InnerSingleton;
}

// UDS_VM_Item @ 14b683640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_Item * __thiscall UDS_VM_Item::UDS_VM_Item(UDS_VM_Item *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->IsEquipSlot = false;
  this->IsEquipped = false;
  this->IsPressed = false;
  this->IsRequireLevel = false;
  this->IsDurability = false;
  this->IsShowDurabilityIcon = false;
  this->IsPrefix = false;
  this->IsEmpty = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->IsPassiveSkill = false;
  this->IsSetEffect = false;
  this->IsCharacterEquipType = false;
  this->IsCharacterExclusive = false;
  this->IsQuantityRightBottom = false;
  this->IsQuantityCenter = false;
  this->IsQuantityUnder = false;
  this->IsCooldown = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->IsEmptyVisibility = false;
  this->IsTradable = false;
  this->IsDimmed = false;
  this->IsShowCraftEffect = false;
  this->IsHovering = false;
  this->IsDragging = false;
  this->IsSelected = false;
  this->IsShowRemoveIcon = false;
  this->_padding_ = (longlong)&___7UDS_VM_Item__6B_;
  this->IsShowNewSymbol = false;
  this->IsQuickSlotRegistered = false;
  this->ItemIconID = 0;
  FText::FText(&this->QuantityCenter);
  FText::FText(&this->QuantityRightBottom);
  FText::FText(&this->QuantityUnder);
  this->ItemCoolTimeRemain = 0.0;
  FText::FText(&this->ItemCoolTimeRemainText);
  this->ItemCoolTimeRatio = 0.0;
  this->CurrentDurability = 0;
  this->MaxDurability = 0;
  this->DurabilityIcon = 0;
  (this->EventKeyDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyDown).KeyEvent);
  (this->EventKeyUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyUp).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->ItemMetarialSubtractionButton)._padding_ = '\0';
  (this->ItemMetarialSubtractionButton).bIsCustomSelected = false;
  (this->ItemMetarialSubtractionButton).bIsLacked = false;
  (this->ItemMetarialSubtractionButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ItemMetarialSubtractionButton).Delegate = 0;
  *(undefined8 *)&(this->ItemMetarialSubtractionButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ItemMetarialSubtractionButton).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ReleasedListViewEvent).bIsActivate = false;
  (this->Implementation).WeakPtr = (FWeakObjectPtr)0x0;
  this->EnableState = None;
  *(undefined8 *)&this->UpdateViewModelEntryMap = 0;
  *(undefined8 *)&(this->UpdateViewModelEntryMap).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateViewModelEntryMap).field_0x20 = 0;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x28 = 0;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x34 = 0;
  *(undefined8 *)&(this->UpdateViewModelEntryMap).field_0x40 = 0;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x48 = 0;
  return this;
}

// UDS_VM_Item @ 14b683990

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_Item * __thiscall UDS_VM_Item::UDS_VM_Item(UDS_VM_Item *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->IsEquipSlot = false;
  this->IsEquipped = false;
  this->IsPressed = false;
  this->IsRequireLevel = false;
  this->IsDurability = false;
  this->IsShowDurabilityIcon = false;
  this->IsPrefix = false;
  this->IsEmpty = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->IsPassiveSkill = false;
  this->IsSetEffect = false;
  this->IsCharacterEquipType = false;
  this->IsCharacterExclusive = false;
  this->IsQuantityRightBottom = false;
  this->IsQuantityCenter = false;
  this->IsQuantityUnder = false;
  this->IsCooldown = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->IsEmptyVisibility = false;
  this->IsTradable = false;
  this->IsDimmed = false;
  this->IsShowCraftEffect = false;
  this->IsHovering = false;
  this->IsDragging = false;
  this->IsSelected = false;
  this->IsShowRemoveIcon = false;
  this->_padding_ = (longlong)&___7UDS_VM_Item__6B_;
  this->IsShowNewSymbol = false;
  this->IsQuickSlotRegistered = false;
  this->ItemIconID = 0;
  FText::FText(&this->QuantityCenter);
  FText::FText(&this->QuantityRightBottom);
  FText::FText(&this->QuantityUnder);
  this->ItemCoolTimeRemain = 0.0;
  FText::FText(&this->ItemCoolTimeRemainText);
  this->ItemCoolTimeRatio = 0.0;
  this->CurrentDurability = 0;
  this->MaxDurability = 0;
  this->DurabilityIcon = 0;
  (this->EventKeyDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyDown).KeyEvent);
  (this->EventKeyUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyUp).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->ItemMetarialSubtractionButton)._padding_ = '\0';
  (this->ItemMetarialSubtractionButton).bIsCustomSelected = false;
  (this->ItemMetarialSubtractionButton).bIsLacked = false;
  (this->ItemMetarialSubtractionButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ItemMetarialSubtractionButton).Delegate = 0;
  *(undefined8 *)&(this->ItemMetarialSubtractionButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ItemMetarialSubtractionButton).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ReleasedListViewEvent).bIsActivate = false;
  (this->Implementation).WeakPtr = (FWeakObjectPtr)0x0;
  this->EnableState = None;
  *(undefined8 *)&this->UpdateViewModelEntryMap = 0;
  *(undefined8 *)&(this->UpdateViewModelEntryMap).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateViewModelEntryMap).field_0x20 = 0;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x28 = 0;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x34 = 0;
  *(undefined8 *)&(this->UpdateViewModelEntryMap).field_0x40 = 0;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x48 = 0;
  return this;
}

// ~UDS_VM_Item @ 14b6841f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::~UDS_VM_Item(UDS_VM_Item *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Item__6B_;
  *(undefined4 *)&(this->UpdateViewModelEntryMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UpdateViewModelEntryMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UpdateViewModelEntryMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ItemMetarialSubtractionButton).Delegate);
  pvVar1 = *(void **)&(this->ItemMetarialSubtractionButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ItemMetarialSubtractionButton).Delegate);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventKeyUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventKeyUp).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventKeyDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventKeyDown).PointerEvent);
  pIVar2 = (this->ItemCoolTimeRemainText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->QuantityUnder).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->QuantityRightBottom).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->QuantityCenter).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b685020

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall UDS_VM_Item::GetFieldNotificationDescriptor(UDS_VM_Item *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Item::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b685400

UClass * __cdecl UDS_VM_Item::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Item.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Item",
               &Z_Registration_Info_UClass_UDS_VM_Item.InnerSingleton,
               StaticRegisterNativesUDS_VM_Item,0xb50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Item>,InternalVTableHelperCtorCaller<UDS_VM_Item>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Item.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Item @ 14b685650

void __cdecl UDS_VM_Item::StaticRegisterNativesUDS_VM_Item(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2a;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Item_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCharacterEquipTypeName @ 14b685e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execCharacterEquipTypeName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = CharacterEquipTypeName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execCharacterExclusiveName @ 14b685e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execCharacterExclusiveName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = CharacterExclusiveName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execEquipSlotName @ 14b685f80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execEquipSlotName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = EquipSlotName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execEquippedCharacterName @ 14b685ff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execEquippedCharacterName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = EquippedCharacterName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGemBindingEventField @ 14b686060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execGemBindingEventField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GemBindingEventField((UDS_VM_Item *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execGetEquipIconID @ 14b6861e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execGetEquipIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetEquipIconID((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGradeName @ 14b686220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execGradeName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GradeName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsBookmark @ 14b686310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsBookmark(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsBookmark((UDS_VM_Item *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsDiscard @ 14b686350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsDiscard(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDiscard((UDS_VM_Item *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsDismantle @ 14b686390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsDismantle(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDismantle((UDS_VM_Item *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsEvolve @ 14b6863d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsEvolve(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEvolve((UDS_VM_Item *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsInit @ 14b686410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsInit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_WidgetEventField FVar1;
  undefined7 extraout_var;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = IsInit((UDS_VM_Item *)param_1);
  *(undefined1 *)param_3 = *(undefined1 *)CONCAT71(extraout_var,FVar1.bIsActivate);
  return;
}

// execIsLock @ 14b686450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsLock(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsLock((UDS_VM_Item *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPeriod @ 14b686490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsPeriod(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPeriod((UDS_VM_Item *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsRepair @ 14b6864d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execIsRepair(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRepair((UDS_VM_Item *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execItemExplain @ 14b686710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execItemExplain(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ItemExplain((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execItemName @ 14b686780

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execItemName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ItemName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execItemSlotInfo @ 14b6867f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execItemSlotInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_SlotInfo *pFVar1;
  FDS_SlotInfo local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ItemSlotInfo((UDS_VM_Item *)param_1,&local_18);
  if (param_3 != pFVar1) {
    *(FDS_SlotInfoBase **)param_3 = (pFVar1->SlotInfo).Object;
    (pFVar1->SlotInfo).Object = (FDS_SlotInfoBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &(pFVar1->SlotInfo).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SlotInfo.SharedReferenceCount.ReferenceController);
  return;
}

// execItemTypeName @ 14b686850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execItemTypeName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ItemTypeName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execOwnedQuantity @ 14b6868c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execOwnedQuantity(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = OwnedQuantity((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execOwnedQuantityTradable @ 14b686900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execOwnedQuantityTradable(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = OwnedQuantityTradable((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execOwnedQuantityUnTradable @ 14b686940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Item::execOwnedQuantityUnTradable(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = OwnedQuantityUnTradable((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execPassiveSkillDesc @ 14b686980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execPassiveSkillDesc(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = PassiveSkillDesc((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execPassiveSkillName @ 14b6869f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execPassiveSkillName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = PassiveSkillName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execPrefixName @ 14b686a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execPrefixName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = PrefixName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execPrefixStatusBindingEventField @ 14b686ad0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Item::execPrefixStatusBindingEventField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = PrefixStatusBindingEventField((UDS_VM_Item *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execQuantityTextStyleTID @ 14b686b50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execQuantityTextStyleTID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = QuantityTextStyleTID((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execRequireLevel @ 14b686b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execRequireLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = RequireLevel((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execRequireLevelString @ 14b686bd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execRequireLevelString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = RequireLevelString((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSellPrice @ 14b686c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execSellPrice(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SellPrice((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSetEffectName @ 14b686c80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execSetEffectName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SetEffectName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetEffectOptions @ 14b686cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execSetEffectOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SetEffectOptions((UDS_VM_Item *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execSlotGradeBgColor @ 14b686d70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execSlotGradeBgColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = SlotGradeBgColor((UDS_VM_Item *)param_1,&local_18);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execSlotGradeBgID @ 14b686db0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execSlotGradeBgID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SlotGradeBgID((UDS_VM_Item *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execStatusBindingEventField @ 14b686df0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Item::execStatusBindingEventField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = StatusBindingEventField((UDS_VM_Item *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execStyleIDCharacterEquipType @ 14b686e70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Item::execStyleIDCharacterEquipType(UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = StyleIDCharacterEquipType((UDS_VM_Item *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execStyleIDCharacterExclusive @ 14b686eb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Item::execStyleIDCharacterExclusive(UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = StyleIDCharacterExclusive((UDS_VM_Item *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execStyleIDDurability @ 14b686ef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execStyleIDDurability(UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = StyleIDDurability((UDS_VM_Item *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execStyleIDPeriod @ 14b686f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execStyleIDPeriod(UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = StyleIDPeriod((UDS_VM_Item *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execTagStyleTextItemGrade @ 14b686f70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execTagStyleTextItemGrade(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TagStyleTextItemGrade((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execTagStyleTextItemName @ 14b686fe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execTagStyleTextItemName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TagStyleTextItemName((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execWeight @ 14b687180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Item::execWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = Weight((UDS_VM_Item *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// CharacterEquipTypeName @ 14be14030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::CharacterEquipTypeName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x420))(pUVar2);
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// CharacterExclusiveName @ 14be140b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::CharacterExclusiveName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FDS_CharacterBaseTableRow *pFVar4;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x430))(pUVar3);
    if (0 < iVar2) {
      pFVar4 = FDS_CharacterBaseTableRow::Get((longlong)iVar2,true);
      __return_storage_ptr__->StringTableType = None;
      __return_storage_ptr__->StringTableID = 0;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
      (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
      if (pFVar4 != (FDS_CharacterBaseTableRow *)0x0) {
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
        local_18.ArrayNum = iVar2 + 1;
        FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
                  ((FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar2 * 0x28),
                   &pFVar4->ID_Name);
        FDS_Text::SetTextFormatFromStringTable(__return_storage_ptr__,StringUi,0x9dd8,&local_18);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
        if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// EquipSlotName @ 14be1b120

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::EquipSlotName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UDS_M_ItemImplBase *this_00;
  FName FVar2;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    FVar2 = UDS_M_ItemImplBase::GetEquipSlotName(this_00);
    FDS_Text::SetTextFromStringEnumTable(__return_storage_ptr__,(FName *)FVar2);
  }
  return __return_storage_ptr__;
}

// EquippedCharacterName @ 14be1b1a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::EquippedCharacterName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FDS_CharacterBaseTableRow *pFVar4;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x438))(pUVar3);
    if (0 < iVar2) {
      pFVar4 = FDS_CharacterBaseTableRow::Get((longlong)iVar2,true);
      if (pFVar4 != (FDS_CharacterBaseTableRow *)0x0) {
        FDS_Text::FromStringID(__return_storage_ptr__,&pFVar4->ID_Name);
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GemBindingEventField @ 14be1fd80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_Item::GemBindingEventField
          (UDS_VM_Item *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x4c8))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEquipIconID @ 14be20e60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::GetEquipIconID(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be20e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 1000))(pUVar3,*(code **)(*(longlong *)pUVar3 + 1000));
  return iVar2;
}

// GradeName @ 14be23680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::GradeName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x3f8))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsBookmark @ 14be26130

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::IsBookmark(UDS_VM_Item *this)

{
  return false;
}

// IsDiscard @ 14be26880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::IsDiscard(UDS_VM_Item *this)

{
  return false;
}

// IsDismantle @ 14be26890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::IsDismantle(UDS_VM_Item *this)

{
  return false;
}

// IsEvolve @ 14be26980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::IsEvolve(UDS_VM_Item *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(&this->Implementation,(void *)0x0);
  return false;
}

// IsInit @ 14be269a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_WidgetEventField __thiscall UDS_VM_Item::IsInit(UDS_VM_Item *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = 0;
  return (FDS_WidgetEventField)SUB81(in_RDX,0);
}

// IsLock @ 14be26c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::IsLock(UDS_VM_Item *this)

{
  return false;
}

// IsPeriod @ 14be26c80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::IsPeriod(UDS_VM_Item *this)

{
  return false;
}

// IsRepair @ 14be26c90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::IsRepair(UDS_VM_Item *this)

{
  return false;
}

// ItemExplain @ 14be28180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::ItemExplain(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x410))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ItemName @ 14be28210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::ItemName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x400))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ItemSlotInfo @ 14be282a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_SlotInfo * __thiscall
UDS_VM_Item::ItemSlotInfo(UDS_VM_Item *this,FDS_SlotInfo *__return_storage_ptr__)

{
  bool bVar1;
  UDS_M_ItemImplBase *this_00;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    (__return_storage_ptr__->SlotInfo).Object = (FDS_SlotInfoBase *)0x0;
    (__return_storage_ptr__->SlotInfo).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  UDS_M_ItemImplBase::GetSlotInfo(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ItemTypeName @ 14be28300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::ItemTypeName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x408))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnAnimationFinishEvent @ 14be28f80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnAnimationFinishEvent(UDS_VM_Item *this,FDS_WidgetAnimationEventField *param_1)

{
  return;
}

// OnEventKeyDown @ 14be2e3e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::OnEventKeyDown(UDS_VM_Item *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569534>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x382,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x660))(pUVar3,param_1);
  }
  return;
}

// OnEventKeyUp @ 14be2e470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::OnEventKeyUp(UDS_VM_Item *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569528>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x388,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x668))(pUVar3,param_1);
  }
  return;
}

// OnEventMouseButtonDoubleClick @ 14be2eaf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnEventMouseButtonDoubleClick(UDS_VM_Item *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569464>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3c8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x6a8))(pUVar3,param_1);
  }
  return;
}

// OnEventMouseButtonDown @ 14be2ec50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnEventMouseButtonDown(UDS_VM_Item *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569472>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3c0,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x6a0))(pUVar3,param_1);
    UpdateViewEntry(this,Selected);
  }
  return;
}

// OnEventMouseButtonUp @ 14be2ed20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnEventMouseButtonUp(UDS_VM_Item *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_VM_Item_OnEventMouseButtonUp");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId950,"UDS_VM_Item_OnEventMouseButtonUp",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp",
               0x3b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId950);
  }
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569480>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3b8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x698))(pUVar3,param_1);
    UpdateViewEntry(this,Selected);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// OnEventMouseEnter @ 14be2f380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnEventMouseEnter(UDS_VM_Item *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569522>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x38e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x670))(pUVar3,param_1);
    UpdateViewEntry(this,Selected);
  }
  return;
}

// OnEventMouseLeave @ 14be2ff40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnEventMouseLeave(UDS_VM_Item *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569514>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x396,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x678))(pUVar3,param_1);
    UpdateViewEntry(this,Selected);
  }
  return;
}

// OnEventOnDragCanceled @ 14be30100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnEventOnDragCanceled(UDS_VM_Item *this,FDS_DragDropEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569490>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3ae,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x690))(pUVar3,param_1);
    UpdateViewEntry(this,Selected);
  }
  return;
}

// OnEventOnDragDetected @ 14be303d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnEventOnDragDetected(UDS_VM_Item *this,FDS_DragDropEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569506>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x39e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x680))(pUVar3,param_1);
    UpdateViewEntry(this,Selected);
  }
  return;
}

// OnEventOnDrop @ 14be30510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::OnEventOnDrop(UDS_VM_Item *this,FDS_DragDropEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569498>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3a6,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x688))(pUVar3,param_1);
    UpdateViewEntry(this,Selected);
  }
  return;
}

// OnItemSubtractionButtonClick @ 14be31020

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnItemSubtractionButtonClick(UDS_VM_Item *this,FDS_ButtonEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655569458>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x3ce,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x6b0))(pUVar3,param_1);
  }
  return;
}

// OnPostSetViewModel @ 14be32670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnPostSetViewModel(UDS_VM_Item *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  VisibleCollepsed(this);
  Update(this,this->EnableState);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnReleasedListViewEvent @ 14be32c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnReleasedListViewEvent(UDS_VM_Item *this,FDS_WidgetEventField *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014be32c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

// OnSetViewModel @ 14be36fb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::OnSetViewModel(UDS_VM_Item *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  UClass *pUVar4;
  UDS_M_ItemImplBase *this_00;
  FDS_ItemSlotStateTableRow *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  EDS_ItemViewModelEntry *pEVar8;
  undefined1 local_res8 [16];
  TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
  local_res18;
  code *local_ab8;
  undefined4 uStack_ab0;
  uint uStack_aac;
  code *local_aa8;
  undefined8 uStack_aa0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a98;
  FDelegateAllocation local_a90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a80;
  FDelegateAllocation local_a78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a68;
  FDelegateAllocation local_a60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a50;
  FDelegateAllocation local_a48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a38;
  FDelegateAllocation local_a30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a20;
  FDelegateAllocation local_a18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a08;
  FDelegateAllocation local_a00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_9f0;
  FDelegateAllocation local_9e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_9d8;
  FDelegateAllocation local_9d0;
  undefined1 local_9c0 [8];
  ForAnyElementType local_9b8;
  int local_9b0;
  undefined1 local_9a8 [8];
  undefined1 local_9a0 [8];
  undefined1 local_998 [8];
  undefined1 local_990 [8];
  undefined1 local_988 [8];
  undefined1 local_980 [8];
  undefined1 local_978 [8];
  undefined1 local_970 [8];
  UObject *local_968;
  UDS_VM_Item *local_960;
  undefined8 local_958;
  UDS_VM_Item *local_950;
  undefined8 local_948;
  UDS_VM_Item *local_940;
  undefined8 local_938;
  UDS_VM_Item *local_930;
  undefined8 local_928;
  UDS_VM_Item *local_920;
  undefined8 local_918;
  UDS_VM_Item *local_910;
  TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
  local_908;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
  local_868;
  undefined8 local_858;
  undefined8 local_850;
  UDS_VM_Item *local_848;
  undefined8 local_840;
  UDS_VM_Item *local_838;
  undefined8 local_830;
  undefined8 local_828;
  TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
  local_820;
  undefined1 local_810 [8];
  undefined1 local_808 [8];
  undefined1 local_800 [8];
  undefined1 local_7f8 [8];
  TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
  local_7f0;
  undefined8 *local_7e0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_7d8;
  undefined8 *local_7d0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_7c8;
  undefined8 *local_7c0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_7b8;
  undefined8 *local_7b0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_7a8;
  undefined8 *local_7a0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_798;
  undefined8 *local_790;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_788;
  undefined8 *local_780;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_778;
  undefined8 *local_770;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_768;
  undefined8 *local_760;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_758;
  undefined8 *local_750;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_748;
  undefined8 *local_740;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_738;
  undefined8 *local_730;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_728;
  undefined8 *local_720;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_718;
  undefined8 *local_710;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_708;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **local_700;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_6f8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **local_6f0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_6e8;
  undefined8 *local_6e0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_6d8;
  undefined8 *local_6d0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_6c8;
  undefined8 *local_6c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_6b8;
  undefined8 *local_6b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_6a8;
  undefined8 *local_6a0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_698;
  code **local_690;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_688;
  TSharedPtr<FDS_ViewModelContext,1> local_680;
  undefined8 *local_670;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_668;
  undefined8 *local_660;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_658;
  undefined8 *local_650;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_648;
  undefined8 *local_640;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_638;
  undefined8 *local_630;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_628;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **local_620;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_618;
  undefined8 *local_610;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_608;
  undefined8 *local_600;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_5f8;
  undefined8 *local_5f0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_5e8;
  undefined8 *local_5e0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_5d8;
  undefined1 local_5d0 [24];
  FDestructionSentinel local_5b8;
  FDestructionSentinel local_5a0;
  FDestructionSentinel local_588;
  undefined1 local_570 [24];
  undefined1 local_558 [24];
  undefined1 local_540 [24];
  undefined1 local_528 [24];
  undefined1 local_510 [24];
  undefined1 local_4f8 [24];
  undefined1 local_4e0 [24];
  undefined1 local_4c8 [24];
  undefined1 local_4b0 [24];
  undefined1 local_498 [24];
  undefined1 local_480 [24];
  undefined1 local_468 [24];
  undefined1 local_450 [24];
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [24];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  FDestructionSentinel local_3c0;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  FDestructionSentinel local_2d0;
  FDelegateAllocation *local_2b8;
  FDestructionSentinel local_2b0;
  FDelegateAllocation *local_298;
  FDestructionSentinel local_290;
  FDelegateAllocation *local_278;
  FDestructionSentinel local_270;
  FDelegateAllocation *local_258;
  FDestructionSentinel local_250;
  FDelegateAllocation *local_238;
  FDestructionSentinel local_230;
  FDelegateAllocation *local_218;
  FDestructionSentinel local_210;
  FDelegateAllocation *local_1f8;
  FDestructionSentinel local_1f0;
  FDelegateAllocation *local_1d8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  code *local_1a8;
  longlong lStack_1a0;
  code *local_198;
  longlong lStack_190;
  code *local_188;
  longlong lStack_180;
  code *local_178;
  longlong lStack_170;
  code *local_168;
  longlong lStack_160;
  code *local_158;
  longlong lStack_150;
  code *local_148;
  longlong lStack_140;
  code *local_138;
  longlong lStack_130;
  code *local_128;
  longlong lStack_120;
  code *local_118;
  longlong lStack_110;
  code *local_108;
  longlong lStack_100;
  code *local_f8;
  longlong lStack_f0;
  code *local_e8;
  longlong lStack_e0;
  code *local_d8;
  longlong lStack_d0;
  code *local_c8;
  longlong lStack_c0;
  code *local_b8;
  longlong lStack_b0;
  code *local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong lStack_90;
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  
  local_680.Object = param_1->Object;
  local_680.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_680.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_680.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_680.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_680);
  local_968 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      local_968 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_968 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_968);
  }
  FWeakObjectPtr::operator=(&(this->Implementation).WeakPtr,(FObjectPtr)&local_968);
  bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655570410>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x16,"false");
    if (bVar2) {
code_r0x00014be370f4:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    EVar3 = UDS_M_ItemImplBase::GetItemSlotType(this_00);
    pFVar5 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
    if (pFVar5 == (FDS_ItemSlotStateTableRow *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4000969985655570407>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                         ,0x19,"false");
      if (bVar2) goto code_r0x00014be370f4;
    }
    else {
      local_ab8 = UpdateInit;
      uStack_aac = uStack_aa0._4_4_;
      uStack_ab0 = 0;
      local_a98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a90.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a98,(FWriteAccessScope *)&local_2b0);
      local_298 = &local_a90;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_a90);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_960 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_960);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_2b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
      }
      local_670 = &local_958;
      local_668 = &local_a98;
      local_958 = 0x80000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_res8,(bool *)&local_670);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a98,(FWriteAccessScope *)&local_3c0);
      if ((local_a90.DelegateSize != 0) &&
         (local_a90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a90.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a90,0,0,0x10);
        local_a90.DelegateSize = 0;
      }
      if (local_3c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
      }
      if (local_a90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a90.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a98.AccessDetector);
      if (pFVar5->IsDefault != false) {
        this->EnableState = this->EnableState | Init;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateItemIcon;
      uStack_aac = uStack_aa0._4_4_;
      local_a80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a78.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a80,(FWriteAccessScope *)&local_2d0);
      local_2b8 = &local_a78;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_a78);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_950 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_950);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_2d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
      }
      local_660 = &local_948;
      local_948 = 2;
      local_658 = &local_a80;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_res8 + 8),(bool *)&local_660);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a80,(FWriteAccessScope *)&local_3a8);
      if ((local_a78.DelegateSize != 0) &&
         (local_a78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a78.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a78,0,0,0x10);
        local_a78.DelegateSize = 0;
      }
      if (local_3a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
      }
      if (local_a78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a78.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a80.AccessDetector);
      if (pFVar5->IsDefault != false) {
        this->EnableState = this->EnableState | ItemIcon;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateBackground;
      uStack_aac = uStack_aa0._4_4_;
      local_a68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a68,(FWriteAccessScope *)&local_290);
      local_278 = &local_a60;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_a60);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_940 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_940);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_290.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
      }
      local_650 = &local_938;
      local_938 = 0x400;
      local_648 = &local_a68;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,&local_res18,(bool *)&local_650);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a68,(FWriteAccessScope *)&local_390);
      if ((local_a60.DelegateSize != 0) &&
         (local_a60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a60,0,0,0x10);
        local_a60.DelegateSize = 0;
      }
      if (local_390.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
      }
      if (local_a60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a68.AccessDetector);
      if (pFVar5->IsDefault != false) {
        this->EnableState = this->EnableState | Background;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateSelected;
      uStack_aac = uStack_aa0._4_4_;
      local_a50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a48.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a50,(FWriteAccessScope *)&local_270);
      local_258 = &local_a48;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_a48);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_930 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_930);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_270.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
      }
      local_640 = &local_928;
      local_928 = 0x40000;
      local_638 = &local_a50;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)&local_res18.Value,(bool *)&local_640);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a50,(FWriteAccessScope *)&local_378);
      if ((local_a48.DelegateSize != 0) &&
         (local_a48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a48.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a48,0,0,0x10);
        local_a48.DelegateSize = 0;
      }
      if (local_378.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
      }
      if (local_a48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a48.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a50.AccessDetector);
      if (pFVar5->IsDefault != false) {
        this->EnableState = this->EnableState | Selected;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateItemName;
      uStack_aac = uStack_aa0._4_4_;
      local_a38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a30.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a30.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a38,(FWriteAccessScope *)&local_250);
      local_238 = &local_a30;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_a30);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_920 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_920);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_250.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
      }
      local_630 = &local_918;
      local_918 = 4;
      local_628 = &local_a38;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,&local_868,(bool *)&local_630);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a38,(FWriteAccessScope *)&local_360);
      if ((local_a30.DelegateSize != 0) &&
         (local_a30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a30.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a30,0,0,0x10);
        local_a30.DelegateSize = 0;
      }
      if (local_360.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
      }
      if (local_a30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a30.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a38.AccessDetector);
      if (pFVar5->IsDetailInfo != false) {
        this->EnableState = this->EnableState | ItemName;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateItemType;
      uStack_aac = uStack_aa0._4_4_;
      local_a20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a18.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a20,(FWriteAccessScope *)&local_230);
      local_218 = &local_a18;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_a18);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_910 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_910);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_230.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
      }
      local_620 = &local_820.Value;
      local_820.Value = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000080;
      local_618 = &local_a20;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,&local_820,(bool *)&local_620);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a20,(FWriteAccessScope *)&local_348);
      if ((local_a18.DelegateSize != 0) &&
         (local_a18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a18.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a18,0,0,0x10);
        local_a18.DelegateSize = 0;
      }
      if (local_348.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
      }
      if (local_a18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a18.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a20.AccessDetector);
      if (pFVar5->IsDetailInfo != false) {
        this->EnableState = this->EnableState | ItemType;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateExplain;
      uStack_aac = uStack_aa0._4_4_;
      local_a08.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a00.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a08,(FWriteAccessScope *)&local_210);
      local_1f8 = &local_a00;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_a00);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_908.Value = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_908.Value);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_210.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
      }
      local_610 = &local_8f8;
      local_8f8 = 0x100;
      local_608 = &local_a08;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_810,(bool *)&local_610);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a08,(FWriteAccessScope *)&local_330);
      if ((local_a00.DelegateSize != 0) &&
         (local_a00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a00.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a00,0,0,0x10);
        local_a00.DelegateSize = 0;
      }
      if (local_330.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
      }
      if (local_a00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a00.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a08.AccessDetector);
      pEVar8 = &this->EnableState;
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | ItemExplain;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateRequireLevel;
      lStack_190 = (ulonglong)uStack_aac << 0x20;
      local_198 = UpdateRequireLevel;
      local_5f8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_318,
                             this,(pmf_0d7c8f2c *)&local_198);
      local_600 = &local_8f0;
      local_8f0 = 0x200;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_810 + 4),(bool *)&local_600);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_318);
      if ((void *)local_318._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_318._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_318);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | RequireLevel;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdatePassiveSkill;
      lStack_1a0 = (ulonglong)uStack_aac << 0x20;
      local_1a8 = UpdatePassiveSkill;
      local_5e8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_300,
                             this,(pmf_0d7c8f2c *)&local_1a8);
      local_5f0 = &local_8e8;
      local_8e8 = 0x800;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_808,(bool *)&local_5f0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_300);
      if ((void *)local_300._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_300._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_300);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | PassiveSkill;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateGrade;
      lStack_50 = (ulonglong)uStack_aac << 0x20;
      local_58 = UpdateGrade;
      local_5d8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_528,
                             this,(pmf_0d7c8f2c *)&local_58);
      local_5e0 = &local_8e0;
      local_8e0 = 0x1000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_808 + 4),(bool *)&local_5e0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_528);
      if ((void *)local_528._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_528._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_528);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | Grade;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateCharacter;
      lStack_60 = (ulonglong)uStack_aac << 0x20;
      local_68 = UpdateCharacter;
      local_7d8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d8,
                             this,(pmf_0d7c8f2c *)&local_68);
      local_7e0 = &local_8d8;
      local_8d8 = 0x2000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_800,(bool *)&local_7e0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d8);
      if ((void *)local_3d8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_3d8._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_3d8);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | Character;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateEquippedCharacter;
      lStack_70 = (ulonglong)uStack_aac << 0x20;
      local_78 = UpdateEquippedCharacter;
      local_7c8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3f0,
                             this,(pmf_0d7c8f2c *)&local_78);
      local_7d0 = &local_8d0;
      local_8d0 = 0x4000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_800 + 4),(bool *)&local_7d0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
      if ((void *)local_3f0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_3f0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_3f0);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | EquippedCharacter;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateItemStatus;
      lStack_80 = (ulonglong)uStack_aac << 0x20;
      local_88 = UpdateItemStatus;
      local_7b8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_408,
                             this,(pmf_0d7c8f2c *)&local_88);
      local_7c0 = &local_8c8;
      local_8c8 = 0x8000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_7f8,(bool *)&local_7c0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
      if ((void *)local_408._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_408._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_408);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | Status;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateSetEffect;
      lStack_90 = (ulonglong)uStack_aac << 0x20;
      local_98 = UpdateSetEffect;
      local_7a8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_420,
                             this,(pmf_0d7c8f2c *)&local_98);
      local_7b0 = &local_8c0;
      local_8c0 = 0x10000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_7f8 + 4),(bool *)&local_7b0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
      if ((void *)local_420._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_420._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_420);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | SetEffect;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdatePrefix;
      lStack_a0 = (ulonglong)uStack_aac << 0x20;
      local_a8 = UpdatePrefix;
      local_798 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_438,
                             this,(pmf_0d7c8f2c *)&local_a8);
      local_7a0 = &local_8b8;
      local_8b8 = 0x20000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,&local_908,(bool *)&local_7a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
      if ((void *)local_438._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_438._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_438);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | Prefix;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateSellCost;
      lStack_b0 = (ulonglong)uStack_aac << 0x20;
      local_b8 = UpdateSellCost;
      local_788 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_450,
                             this,(pmf_0d7c8f2c *)&local_b8);
      local_790 = &local_8b0;
      local_8b0 = 0x80000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,&local_7f0,(bool *)&local_790);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
      if ((void *)local_450._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_450._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_450);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | SellCost;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdatePeriod;
      lStack_d0 = (ulonglong)uStack_aac << 0x20;
      local_d8 = UpdatePeriod;
      local_778 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_468,
                             this,(pmf_0d7c8f2c *)&local_d8);
      local_780 = &local_8a8;
      local_8a8 = 0x4000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_9a8,(bool *)&local_780);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_468);
      if ((void *)local_468._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_468._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_468);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | Period;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateGemSocket;
      lStack_e0 = (ulonglong)uStack_aac << 0x20;
      local_e8 = UpdateGemSocket;
      local_768 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_480,
                             this,(pmf_0d7c8f2c *)&local_e8);
      local_770 = &local_8a0;
      local_8a0 = 0x40000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_9a8 + 4),(bool *)&local_770);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
      if ((void *)local_480._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_480._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_480);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | GemSocket;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateQuantityByDetail;
      lStack_f0 = (ulonglong)uStack_aac << 0x20;
      local_f8 = UpdateQuantityByDetail;
      local_758 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_498,
                             this,(pmf_0d7c8f2c *)&local_f8);
      local_760 = &local_898;
      local_898 = 0x800000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_9a0,(bool *)&local_760);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
      if ((void *)local_498._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_498._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_498);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | QuantityDetail;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateEquipSlot;
      lStack_100 = (ulonglong)uStack_aac << 0x20;
      local_108 = UpdateEquipSlot;
      local_748 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b0,
                             this,(pmf_0d7c8f2c *)&local_108);
      local_890 = 0x200000000;
      local_750 = &local_890;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_9a0 + 4),(bool *)&local_750);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b0);
      if ((void *)local_4b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4b0);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | EquipSlot;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateWeight;
      lStack_110 = (ulonglong)uStack_aac << 0x20;
      local_118 = UpdateWeight;
      local_738 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4c8,
                             this,(pmf_0d7c8f2c *)&local_118);
      local_740 = &local_888;
      local_888 = 0x400000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_998,(bool *)&local_740);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c8);
      if ((void *)local_4c8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4c8);
      if (pFVar5->IsDetailInfo != false) {
        *pEVar8 = *pEVar8 | Weight;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateEquipped;
      lStack_120 = (ulonglong)uStack_aac << 0x20;
      local_128 = UpdateEquipped;
      local_728 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4e0,
                             this,(pmf_0d7c8f2c *)&local_128);
      local_730 = &local_880;
      local_880 = 0x10;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_998 + 4),(bool *)&local_730);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4e0);
      if ((void *)local_4e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4e0);
      if (pFVar5->IsEquip != false) {
        *pEVar8 = *pEVar8 | Equipped;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateItemSlotInfo;
      lStack_130 = (ulonglong)uStack_aac << 0x20;
      local_138 = UpdateItemSlotInfo;
      local_718 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4f8,
                             this,(pmf_0d7c8f2c *)&local_138);
      local_720 = &local_878;
      local_878 = 0x100000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_990,(bool *)&local_720);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f8);
      if ((void *)local_4f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4f8._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4f8);
      if (pFVar5->IsDrag != false) {
        *pEVar8 = *pEVar8 | SlotInfo;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateCooldown;
      lStack_140 = (ulonglong)uStack_aac << 0x20;
      local_148 = UpdateCooldown;
      local_708 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_510,
                             this,(pmf_0d7c8f2c *)&local_148);
      local_710 = &local_870;
      local_870 = 0x400000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_990 + 4),(bool *)&local_710);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
      if ((void *)local_510._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_510._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_510);
      if (pFVar5->IsCoolDown != false) {
        *pEVar8 = *pEVar8 | Cooldown;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateRemove;
      lStack_150 = (ulonglong)uStack_aac << 0x20;
      local_158 = UpdateRemove;
      local_6f8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_540,
                             this,(pmf_0d7c8f2c *)&local_158);
      local_700 = &local_7f0.Value;
      local_7f0.Value = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x800000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_988,(bool *)&local_700);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_540);
      if ((void *)local_540._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_540._8_8_);
      }
      pEVar8 = &this->EnableState;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_540);
      if (pFVar5->IsRemove != false) {
        *pEVar8 = *pEVar8 | Remove;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateRegister;
      lStack_c0 = (ulonglong)uStack_aac << 0x20;
      local_c8 = UpdateRegister;
      local_6e8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_558,
                             this,(pmf_0d7c8f2c *)&local_c8);
      local_6f0 = &local_868.Value;
      local_868.Value = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_01000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_988 + 4),(bool *)&local_6f0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_558);
      if ((void *)local_558._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_558._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_558);
      if (pFVar5->IsRegister != false) {
        *pEVar8 = *pEVar8 | Register;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateTradable;
      lStack_160 = (ulonglong)uStack_aac << 0x20;
      local_168 = UpdateTradable;
      local_6d8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_570,
                             this,(pmf_0d7c8f2c *)&local_168);
      local_6e0 = &local_858;
      local_858 = 0x2000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_980,(bool *)&local_6e0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_570);
      if ((void *)local_570._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_570._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_570);
      if (pFVar5->IsTrade != false) {
        this->EnableState = this->EnableState | Tradable;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateDiscard;
      lStack_170 = (ulonglong)uStack_aac << 0x20;
      local_178 = UpdateDiscard;
      local_6c8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_9c0,
                             this,(pmf_0d7c8f2c *)&local_178);
      local_6d0 = &local_850;
      local_850 = 0x8000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_980 + 4),(bool *)&local_6d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
                 (FWriteAccessScope *)&local_588);
      if ((local_9b0 != 0) && (local_9b8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_9b8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9b8,0,0,0x10);
        local_9b0 = 0;
      }
      if (local_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_588.Accessor,&local_588);
      }
      if (local_9b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_9c0);
      if (pFVar5->IsDiscard != false) {
        this->EnableState = this->EnableState | Discard;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateIsNewSymbol;
      uStack_aac = uStack_aa0._4_4_;
      local_9f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_9e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_9e8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_9f0,(FWriteAccessScope *)&local_1f0);
      local_1d8 = &local_9e8;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_9e8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_848 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_848);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_1f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f0.Accessor,&local_1f0);
      }
      local_6c0 = &local_840;
      local_840 = 0x10000000;
      local_6b8 = &local_9f0;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_978,(bool *)&local_6c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_9f0,(FWriteAccessScope *)&local_5a0);
      if ((local_9e8.DelegateSize != 0) &&
         (local_9e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_9e8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_9e8,0,0,0x10);
        local_9e8.DelegateSize = 0;
      }
      if (local_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
      }
      if (local_9e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_9e8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_9f0.AccessDetector);
      if (pFVar5->IsNewSymbol != false) {
        this->EnableState = this->EnableState | IsNew;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateDurability;
      uStack_aac = uStack_aa0._4_4_;
      local_9d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_9d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_9d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_9d8,(FWriteAccessScope *)&local_1d0);
      local_1b8 = &local_9d0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_9d0);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_838 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_838);
        puVar6[4] = local_ab8;
        puVar6[5] = CONCAT44(uStack_aac,uStack_ab0);
      }
      if (local_1d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
      }
      local_6b0 = &local_830;
      local_830 = 0x200000;
      local_6a8 = &local_9d8;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_978 + 4),(bool *)&local_6b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_9d8,(FWriteAccessScope *)&local_5b8);
      if ((local_9d0.DelegateSize != 0) &&
         (local_9d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_9d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_9d0,0,0,0x10);
        local_9d0.DelegateSize = 0;
      }
      if (local_5b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
      }
      if (local_9d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_9d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_9d8.AccessDetector);
      pEVar8 = &this->EnableState;
      if (pFVar5->IsDurability != false) {
        *pEVar8 = *pEVar8 | Durability;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateDimmed;
      lStack_180 = (ulonglong)uStack_aac << 0x20;
      local_188 = UpdateDimmed;
      local_698 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_5d0,
                             this,(pmf_0d7c8f2c *)&local_188);
      local_6a0 = &local_828;
      local_828 = 0x20000000;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)local_970,(bool *)&local_6a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d0);
      if ((void *)local_5d0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5d0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_5d0);
      if (pFVar5->IsDimmed != false) {
        *pEVar8 = *pEVar8 | Dimmed;
      }
      uStack_ab0 = 0;
      local_ab8 = UpdateQuantity;
      uStack_aa0 = (ulonglong)uStack_aac << 0x20;
      local_aa8 = UpdateQuantity;
      local_688 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateUObject<UDS_VM_Item>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2e8,
                             this,(pmf_0d7c8f2c *)&local_aa8);
      local_690 = &local_ab8;
      local_ab8 = (code *)0x40;
      TSet<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>_>
                (&this->UpdateViewModelEntryMap,
                 (TPairInitializer<EDS_ItemViewModelEntry_&&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&&>
                  *)(local_970 + 4),(bool *)&local_690);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e8);
      if ((void *)local_2e8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2e8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2e8);
      if (pFVar5->IsQuantity != false) {
        this->EnableState = this->EnableState | Quantity;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OwnedQuantity @ 14be45df0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::OwnedQuantity(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be45e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x360))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x360))
  ;
  return iVar2;
}

// OwnedQuantityTradable @ 14be45e40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::OwnedQuantityTradable(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be45e7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x368))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x368))
  ;
  return iVar2;
}

// OwnedQuantityUnTradable @ 14be45e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::OwnedQuantityUnTradable(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be45ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x370))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x370))
  ;
  return iVar2;
}

// PassiveSkillDesc @ 14be45ee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::PassiveSkillDesc(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x470))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PassiveSkillName @ 14be45f70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::PassiveSkillName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x468))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PlayAnimation @ 14be46000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::PlayAnimation(UDS_VM_Item *this,FName param_1,EDS_AnimationEventType param_2)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = param_1;
  (this->AnimationEvent).AnimationEventType = param_2;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// PrefixName @ 14be46110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::PrefixName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x480))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PrefixStatusBindingEventField @ 14be461a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_Item::PrefixStatusBindingEventField
          (UDS_VM_Item *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x4b8))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// QuantityTextStyleTID @ 14be46210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::QuantityTextStyleTID(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be4624d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x550))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x550))
  ;
  return iVar2;
}

// RequireLevel @ 14be47e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::RequireLevel(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be47ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x428))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x428))
  ;
  return iVar2;
}

// RequireLevelString @ 14be47ee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::RequireLevelString(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  int local_res8 [2];
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    local_res8[0] = 0;
  }
  else {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    local_res8[0] = (**(code **)(*(longlong *)pUVar2 + 0x428))(pUVar2);
  }
  FDS_Text::FromStringTableFormat<int>(__return_storage_ptr__,StringUi,0x9dd9,local_res8);
  return __return_storage_ptr__;
}

// SellPrice @ 14be486f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::SellPrice(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be4872d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x440))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x440))
  ;
  return iVar2;
}

// SetCurrentDurability @ 14be4a580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetCurrentDurability(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::CurrentDurability.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrentDurability.FieldName;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3);
    if (this->CurrentDurability != iVar2) {
      this->CurrentDurability = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetDurabilityIcon @ 14be4b1d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetDurabilityIcon(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::DurabilityIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DurabilityIcon.FieldName;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x458))(pUVar3);
    if (this->DurabilityIcon != iVar2) {
      this->DurabilityIcon = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetEffectName @ 14be4b2e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::SetEffectName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x498))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetEffectOptions @ 14be4b370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_Item::SetEffectOptions(UDS_VM_Item *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x4c0))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetIsCharacterEquipType @ 14be4b7a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsCharacterEquipType(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsCharacterEquipType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsCharacterEquipType.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5c0))(pUVar2);
  if (this->IsCharacterEquipType != bVar1) {
    this->IsCharacterEquipType = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsCharacterEquipType;
}

// SetIsCharacterExclusive @ 14be4b850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsCharacterExclusive(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsCharacterExclusive.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsCharacterExclusive.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5b8))(pUVar2);
  if (this->IsCharacterExclusive != bVar1) {
    this->IsCharacterExclusive = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsCharacterExclusive;
}

// SetIsCooldown @ 14be4ba10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsCooldown(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsCooldown.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsCooldown.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x630))(pUVar2);
  if (this->IsCooldown != bVar1) {
    this->IsCooldown = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsCooldown;
}

// SetIsDimmed @ 14be4bb00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsDimmed(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsDimmed.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDimmed.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x620))(pUVar2);
  if (this->IsDimmed != bVar1) {
    this->IsDimmed = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsDimmed;
}

// SetIsDragging @ 14be4bbb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsDragging(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsDragging.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDragging.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x648))(pUVar2);
  if (this->IsDragging != bVar1) {
    this->IsDragging = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsDragging;
}

// SetIsDurability @ 14be4bc60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsDurability(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsDurability.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDurability.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5e0))(pUVar2);
  if (this->IsDurability != bVar1) {
    this->IsDurability = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsDurability;
}

// SetIsEmpty @ 14be4bd10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsEmpty(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmpty.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x558))(pUVar2);
  if (this->IsEmpty != bVar1) {
    this->IsEmpty = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsEmpty;
}

// SetIsEmptyVisibility @ 14be4be10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsEmptyVisibility(UDS_VM_Item *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  FName local_18;
  int local_10;
  
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsEmptyVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsEmptyVisibility.FieldName;
  if (bVar3) {
    return false;
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  cVar4 = (**(code **)(*(longlong *)pUVar5 + 0x558))(pUVar5);
  if (cVar4 != '\0') {
    pUVar5 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    cVar4 = (**(code **)(*(longlong *)pUVar5 + 0x560))(pUVar5);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_14be4be96;
    }
  }
  bVar3 = false;
LAB_14be4be96:
  if (this->IsEmptyVisibility != bVar3) {
    this->IsEmptyVisibility = bVar3;
    local_18 = FVar1;
    local_10 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsEmptyVisibility;
}

// SetIsEquipped @ 14be4bee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsEquipped(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsEquipped.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEquipped.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x598))(pUVar2);
  if (this->IsEquipped != bVar1) {
    this->IsEquipped = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsEquipped;
}

// SetIsHovering @ 14be4bf90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsHovering(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsHovering.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHovering.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x640))(pUVar2);
  if (this->IsHovering != bVar1) {
    this->IsHovering = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsHovering;
}

// SetIsPassiveSkill @ 14be4c1c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsPassiveSkill(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsPassiveSkill.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPassiveSkill.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5f0))(pUVar2);
  if (this->IsPassiveSkill != bVar1) {
    this->IsPassiveSkill = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsPassiveSkill;
}

// SetIsPrefix @ 14be4c310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsPrefix(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsPrefix.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrefix.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5f8))(pUVar2);
  if (this->IsPrefix != bVar1) {
    this->IsPrefix = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsPrefix;
}

// SetIsPressed @ 14be4c3c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsPressed(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsPressed.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPressed.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x650))(pUVar2);
  if (this->IsPressed != bVar1) {
    this->IsPressed = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsPressed;
}

// SetIsQuantityCenter @ 14be4c510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsQuantityCenter(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsQuantityCenter.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuantityCenter.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x588))(pUVar2);
  if (this->IsQuantityCenter != bVar1) {
    this->IsQuantityCenter = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsQuantityCenter;
}

// SetIsQuantityRightBottom @ 14be4c5c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsQuantityRightBottom(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsQuantityRightBottom.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuantityRightBottom.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x578))(pUVar2);
  if (this->IsQuantityRightBottom != bVar1) {
    this->IsQuantityRightBottom = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsQuantityRightBottom;
}

// SetIsQuantityUnder @ 14be4c670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsQuantityUnder(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsQuantityUnder.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuantityUnder.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x590))(pUVar2);
  if (this->IsQuantityUnder != bVar1) {
    this->IsQuantityUnder = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsQuantityUnder;
}

// SetIsQuickSlotRegistered @ 14be4c840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsQuickSlotRegistered(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsQuickSlotRegistered.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuickSlotRegistered.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5a0))(pUVar2);
  if (this->IsQuickSlotRegistered != bVar1) {
    this->IsQuickSlotRegistered = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsQuickSlotRegistered;
}

// SetIsRequireLevel @ 14be4c8f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsRequireLevel(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsRequireLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRequireLevel.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5d8))(pUVar2);
  if (this->IsRequireLevel != bVar1) {
    this->IsRequireLevel = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsRequireLevel;
}

// SetIsSelected @ 14be4cc10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsSelected(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x358))(pUVar2);
  if (this->IsSelected != bVar1) {
    this->IsSelected = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsSelected;
}

// SetIsSetEffect @ 14be4ccc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsSetEffect(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsSetEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSetEffect.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x600))(pUVar2);
  if (this->IsSetEffect != bVar1) {
    this->IsSetEffect = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsSetEffect;
}

// SetIsShowCraftEffect @ 14be4cd70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsShowCraftEffect(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsShowCraftEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowCraftEffect.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x638))(pUVar2);
  if (this->IsShowCraftEffect != bVar1) {
    this->IsShowCraftEffect = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsShowCraftEffect;
}

// SetIsShowDurabilityIcon @ 14be4ce20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsShowDurabilityIcon(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsShowDurabilityIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowDurabilityIcon.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5e8))(pUVar2);
  if (this->IsShowDurabilityIcon != bVar1) {
    this->IsShowDurabilityIcon = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsShowDurabilityIcon;
}

// SetIsShowNewSymbol @ 14be4ced0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsShowNewSymbol(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsShowNewSymbol.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowNewSymbol.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x610))(pUVar2);
  if (this->IsShowNewSymbol != bVar1) {
    this->IsShowNewSymbol = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsShowNewSymbol;
}

// SetIsShowRemoveIcon @ 14be4cf80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsShowRemoveIcon(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsShowRemoveIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowRemoveIcon.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x608))(pUVar2);
  if (this->IsShowRemoveIcon != bVar1) {
    this->IsShowRemoveIcon = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsShowRemoveIcon;
}

// SetIsTradable @ 14be4d030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Item::SetIsTradable(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsTradable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsTradable.FieldName;
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x568))(pUVar2);
  if (this->IsTradable != bVar1) {
    this->IsTradable = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return this->IsTradable;
}

// SetItemCoolTimeRatio @ 14be4d170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetItemCoolTimeRatio(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  float fVar3;
  FName local_28;
  int local_20;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_20 = FFieldNotificationClassDescriptor::ItemCoolTimeRatio.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::ItemCoolTimeRatio.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    fVar3 = (float)(**(code **)(*(longlong *)pUVar2 + 0x3c0))(pUVar2);
    if (fVar3 != this->ItemCoolTimeRatio) {
      this->ItemCoolTimeRatio = fVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
  }
  return;
}

// SetItemCoolTimeRemain @ 14be4d210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetItemCoolTimeRemain(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  float fVar3;
  FName local_28;
  int local_20;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_20 = FFieldNotificationClassDescriptor::ItemCoolTimeRemain.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::ItemCoolTimeRemain.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    fVar3 = (float)(**(code **)(*(longlong *)pUVar2 + 0x3b8))(pUVar2);
    if (fVar3 != this->ItemCoolTimeRemain) {
      this->ItemCoolTimeRemain = fVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
  }
  return;
}

// SetItemCoolTimeRemainText @ 14be4d2b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetItemCoolTimeRemainText(UDS_VM_Item *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FString *pFVar6;
  FText *pFVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 local_res8 [8];
  FName local_58;
  int local_50;
  FText local_48;
  FString local_38 [2];
  
  iVar4 = FFieldNotificationClassDescriptor::ItemCoolTimeRemainText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ItemCoolTimeRemainText.FieldName;
  auVar8 = roundps(in_XMM1,ZEXT416((uint)this->ItemCoolTimeRemain),2);
  pFVar6 = UDS_TimeUtilManager::ConvertStringFromSec(local_38,auVar8._0_4_,Seconds,false);
  pFVar7 = FText::FromString(&local_48,pFVar6);
  bVar5 = FText::IdenticalTo(&this->ItemCoolTimeRemainText,pFVar7,None);
  if (!bVar5) {
    pIVar1 = (pFVar7->TextData).Reference;
    pIVar2 = (this->ItemCoolTimeRemainText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ItemCoolTimeRemainText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ItemCoolTimeRemainText).Flags = pFVar7->Flags;
    local_58 = FVar3;
    local_50 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// SetItemIconID @ 14be4d3e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetItemIconID(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x390))(pUVar3);
    if (this->ItemIconID != iVar2) {
      this->ItemIconID = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetMaxDurability @ 14be4dc50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetMaxDurability(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::MaxDurability.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxDurability.FieldName;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x450))(pUVar3);
    if (this->MaxDurability != iVar2) {
      this->MaxDurability = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetQuantityCenter @ 14be4f460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetQuantityCenter(UDS_VM_Item *this)

{
  bool bVar1;
  UDS_M_ItemImplBase *this_00;
  FText *pFVar2;
  FFieldId local_28;
  FText local_18;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_28.BitNumber = FFieldNotificationClassDescriptor::QuantityCenter.BitNumber;
  local_28.FieldName = FFieldNotificationClassDescriptor::QuantityCenter.FieldName;
  if (!bVar1) {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    pFVar2 = UDS_M_ItemImplBase::GetQuantityTextCenter(this_00,&local_18);
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->QuantityCenter,pFVar2,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetQuantityRightBottom @ 14be4f500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetQuantityRightBottom(UDS_VM_Item *this)

{
  bool bVar1;
  UDS_M_ItemImplBase *this_00;
  FText *pFVar2;
  FFieldId local_28;
  FText local_18;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_28.BitNumber = FFieldNotificationClassDescriptor::QuantityRightBottom.BitNumber;
  local_28.FieldName = FFieldNotificationClassDescriptor::QuantityRightBottom.FieldName;
  if (!bVar1) {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    pFVar2 = UDS_M_ItemImplBase::GetQuantityTextRightBottom(this_00,&local_18);
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->QuantityRightBottom,pFVar2,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetQuantityUnder @ 14be4f5a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::SetQuantityUnder(UDS_VM_Item *this)

{
  bool bVar1;
  UDS_M_ItemImplBase *this_00;
  FText *pFVar2;
  FFieldId local_28;
  FText local_18;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_28.BitNumber = FFieldNotificationClassDescriptor::QuantityUnder.BitNumber;
  local_28.FieldName = FFieldNotificationClassDescriptor::QuantityUnder.FieldName;
  if (!bVar1) {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    pFVar2 = UDS_M_ItemImplBase::GetQuantityTextUnder(this_00,&local_18);
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->QuantityUnder,pFVar2,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SlotGradeBgColor @ 14be53580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __thiscall
UDS_VM_Item::SlotGradeBgColor(UDS_VM_Item *this,FLinearColor *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x3d0))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SlotGradeBgID @ 14be535f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Item::SlotGradeBgID(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be5362d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x3c8))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x3c8))
  ;
  return iVar2;
}

// StatusBindingEventField @ 14be53b80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_Item::StatusBindingEventField
          (UDS_VM_Item *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x4b0))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StyleIDCharacterEquipType @ 14be542a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UDS_VM_Item::StyleIDCharacterEquipType(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  long64 lVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be542dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x4e8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x4e8))
  ;
  return lVar3;
}

// StyleIDCharacterExclusive @ 14be542f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UDS_VM_Item::StyleIDCharacterExclusive(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  long64 lVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be5432d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x4e0))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x4e0))
  ;
  return lVar3;
}

// StyleIDDurability @ 14be54340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UDS_VM_Item::StyleIDDurability(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  long64 lVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be5437d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x528))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x528))
  ;
  return lVar3;
}

// StyleIDPeriod @ 14be54390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UDS_VM_Item::StyleIDPeriod(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  long64 lVar3;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014be543cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x530))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x530))
  ;
  return lVar3;
}

// TagStyleTextItemGrade @ 14be54790

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::TagStyleTextItemGrade(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x4d8))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TagStyleTextItemName @ 14be54820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_Item::TagStyleTextItemName(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x4d0))(pUVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Update @ 14be55e60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::Update(UDS_VM_Item *this,EDS_ItemViewModelEntry param_1)

{
  bool bVar1;
  UObject *pUVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_VM_Item_Update");
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId92,"UDS_VM_Item_Update",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp",
               0x5c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId92);
  }
  UpdateViewEntry(this,param_1);
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmpty.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x558))(pUVar2);
    if (this->IsEmpty != bVar1) {
      this->IsEmpty = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::IsEmptyVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmptyVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UpdateBackground @ 14be56150

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateBackground(UDS_VM_Item *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::SlotGradeBgID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotGradeBgID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SlotGradeBgColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotGradeBgColor.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// UpdateCharacter @ 14be56840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateCharacter(UDS_VM_Item *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FName local_18;
  int local_10;
  
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsCharacterExclusive.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsCharacterExclusive.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x5b8))(pUVar4);
    if (this->IsCharacterExclusive != bVar3) {
      this->IsCharacterExclusive = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
    if (this->IsCharacterExclusive != false) {
      local_10 = FFieldNotificationClassDescriptor::CharacterExclusiveName.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::CharacterExclusiveName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      local_10 = FFieldNotificationClassDescriptor::StyleIDCharacterExclusive.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::StyleIDCharacterExclusive.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
  }
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsCharacterEquipType.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsCharacterEquipType.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x5c0))(pUVar4);
    if (this->IsCharacterEquipType != bVar3) {
      this->IsCharacterEquipType = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    if (this->IsCharacterEquipType != false) {
      local_10 = FFieldNotificationClassDescriptor::CharacterEquipTypeName.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::CharacterEquipTypeName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      local_10 = FFieldNotificationClassDescriptor::StyleIDCharacterEquipType.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::StyleIDCharacterEquipType.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateCooldown @ 14be56a10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateCooldown(UDS_VM_Item *this)

{
  longlong *plVar1;
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_00;
  FText *this_01;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  UObject *pUVar7;
  FString *pFVar8;
  FText *pFVar9;
  float fVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 local_res8 [8];
  FName local_58;
  int local_50;
  FText local_48;
  FString local_38 [2];
  
  this_00 = &this->Implementation;
  plVar1 = &this->_padding_;
  bVar6 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar5 = FFieldNotificationClassDescriptor::IsCooldown.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::IsCooldown.FieldName;
  if (!bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar6 = (bool)(**(code **)(*(longlong *)pUVar7 + 0x630))(pUVar7);
    if (this->IsCooldown != bVar6) {
      this->IsCooldown = bVar6;
      local_58 = FVar4;
      local_50 = iVar5;
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    if (this->IsCooldown != false) {
      bVar6 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar5 = FFieldNotificationClassDescriptor::ItemCoolTimeRemain.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::ItemCoolTimeRemain.FieldName;
      if (!bVar6) {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar10 = (float)(**(code **)(*(longlong *)pUVar7 + 0x3b8))(pUVar7);
        if (fVar10 != this->ItemCoolTimeRemain) {
          this->ItemCoolTimeRemain = fVar10;
          local_58 = FVar4;
          local_50 = iVar5;
          (**(code **)(*plVar1 + 0x38))(plVar1);
        }
      }
      bVar6 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar5 = FFieldNotificationClassDescriptor::ItemCoolTimeRatio.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::ItemCoolTimeRatio.FieldName;
      if (!bVar6) {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar10 = (float)(**(code **)(*(longlong *)pUVar7 + 0x3c0))(pUVar7);
        if (fVar10 != this->ItemCoolTimeRatio) {
          this->ItemCoolTimeRatio = fVar10;
          local_58 = FVar4;
          local_50 = iVar5;
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
        }
      }
      iVar5 = FFieldNotificationClassDescriptor::ItemCoolTimeRemainText.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::ItemCoolTimeRemainText.FieldName;
      auVar11 = roundps(in_XMM1,ZEXT416((uint)this->ItemCoolTimeRemain),2);
      pFVar8 = UDS_TimeUtilManager::ConvertStringFromSec(local_38,auVar11._0_4_,Seconds,false);
      pFVar9 = FText::FromString(&local_48,pFVar8);
      this_01 = &this->ItemCoolTimeRemainText;
      bVar6 = FText::IdenticalTo(this_01,pFVar9,None);
      if (!bVar6) {
        pIVar2 = (pFVar9->TextData).Reference;
        pIVar3 = (this_01->TextData).Reference;
        if (pIVar3 != pIVar2) {
          (this_01->TextData).Reference = pIVar2;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
          }
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
          }
        }
        (this->ItemCoolTimeRemainText).Flags = pFVar9->Flags;
        local_58 = FVar4;
        local_50 = iVar5;
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateDimmed @ 14be57070

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateDimmed(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsDimmed.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDimmed.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x620))(pUVar2);
    if (this->IsDimmed != bVar1) {
      this->IsDimmed = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateDiscard @ 14be57110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateDiscard(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsDiscard.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDiscard.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateDurability @ 14be57150

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateDurability(UDS_VM_Item *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_00;
  FName FVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  FName local_18;
  int local_10;
  
  this_00 = &this->Implementation;
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsDurability.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsDurability.FieldName;
  if (!bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar5 + 0x5e0))(pUVar5);
    if (this->IsDurability != bVar3) {
      this->IsDurability = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
    if (this->IsDurability != false) {
      local_10 = FFieldNotificationClassDescriptor::StyleIDDurability.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::StyleIDDurability.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
      bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar2 = FFieldNotificationClassDescriptor::CurrentDurability.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::CurrentDurability.FieldName;
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5);
        if (this->CurrentDurability != iVar4) {
          this->CurrentDurability = iVar4;
          local_18 = FVar1;
          local_10 = iVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
        }
      }
      bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar2 = FFieldNotificationClassDescriptor::MaxDurability.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::MaxDurability.FieldName;
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x450))(pUVar5);
        if (this->MaxDurability != iVar4) {
          this->MaxDurability = iVar4;
          local_18 = FVar1;
          local_10 = iVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
        }
      }
    }
  }
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsShowDurabilityIcon.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsShowDurabilityIcon.FieldName;
  if (!bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar5 + 0x5e8))(pUVar5);
    if (this->IsShowDurabilityIcon != bVar3) {
      this->IsShowDurabilityIcon = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
    if (this->IsShowDurabilityIcon != false) {
      bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar2 = FFieldNotificationClassDescriptor::DurabilityIcon.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::DurabilityIcon.FieldName;
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x458))(pUVar5);
        if (this->DurabilityIcon != iVar4) {
          this->DurabilityIcon = iVar4;
          local_18 = FVar1;
          local_10 = iVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        }
      }
    }
  }
  return;
}

// UpdateEquipSlot @ 14be573e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateEquipSlot(UDS_VM_Item *this)

{
  bool bVar1;
  UDS_M_ItemImplBase *this_00;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsEquipSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEquipSlot.FieldName;
  if (!bVar1) {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = UDS_M_ItemImplBase::IsEquipSlot(this_00);
    if (this->IsEquipSlot != bVar1) {
      this->IsEquipSlot = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    if (this->IsEquipSlot != false) {
      local_10 = FFieldNotificationClassDescriptor::EquipSlotName.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::EquipSlotName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateEquipped @ 14be574b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateEquipped(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsEquipped.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEquipped.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x598))(pUVar2);
    if (this->IsEquipped != bVar1) {
      this->IsEquipped = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    if (this->IsEquipped != false) {
      local_10 = FFieldNotificationClassDescriptor::GetEquipIconID.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::GetEquipIconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateEquippedCharacter @ 14be57590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateEquippedCharacter(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::EquippedCharacterName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EquippedCharacterName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateExplain @ 14be575d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateExplain(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemExplain.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemExplain.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateGemSocket @ 14be576c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateGemSocket(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GemBindingEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GemBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateGrade @ 14be57700

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateGrade(UDS_VM_Item *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::GradeName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GradeName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TagStyleTextItemGrade.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TagStyleTextItemGrade.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// UpdateInit @ 14be57770

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateInit(UDS_VM_Item *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_00;
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  UObject *pUVar6;
  FName local_18;
  int local_10;
  
  this_00 = &this->Implementation;
  bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4000969985655570281>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Item.cpp"
                       ,0x97,"false");
    if (!bVar4) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  cVar5 = (**(code **)(*(longlong *)pUVar6 + 0x658))(pUVar6);
  if (cVar5 != '\0') {
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar4) goto LAB_14be578ad;
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  cVar5 = (**(code **)(*(longlong *)pUVar6 + 0x558))(pUVar6);
  if (cVar5 == '\0') {
LAB_14be5787d:
    bVar4 = false;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    cVar5 = (**(code **)(*(longlong *)pUVar6 + 0x560))(pUVar6);
    if (cVar5 == '\0') goto LAB_14be5787d;
    bVar4 = true;
  }
  if (this->IsEmptyVisibility != bVar4) {
    this->IsEmptyVisibility = bVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
LAB_14be578ad:
  bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar3 = FFieldNotificationClassDescriptor::IsShowCraftEffect.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsShowCraftEffect.FieldName;
  if (!bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar4 = (bool)(**(code **)(*(longlong *)pUVar6 + 0x638))(pUVar6);
    if (this->IsShowCraftEffect != bVar4) {
      this->IsShowCraftEffect = bVar4;
      local_18 = FVar2;
      local_10 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  SetIsShowRemoveIcon(this);
  return;
}

// UpdateIsNewSymbol @ 14be57a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateIsNewSymbol(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsShowNewSymbol.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowNewSymbol.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x610))(pUVar2);
    if (this->IsShowNewSymbol != bVar1) {
      this->IsShowNewSymbol = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateItemIcon @ 14be57af0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateItemIcon(UDS_VM_Item *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x390))(pUVar3);
    if (this->ItemIconID != iVar2) {
      this->ItemIconID = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateItemName @ 14be57b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateItemName(UDS_VM_Item *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TagStyleTextItemName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TagStyleTextItemName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// UpdateItemSlotInfo @ 14be57c00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateItemSlotInfo(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemSlotInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemSlotInfo.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateItemStatus @ 14be57c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateItemStatus(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::StatusBindingEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatusBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateItemType @ 14be57c80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateItemType(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemTypeName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemTypeName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdatePassiveSkill @ 14be58980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdatePassiveSkill(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsPassiveSkill.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPassiveSkill.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5f0))(pUVar2);
    if (this->IsPassiveSkill != bVar1) {
      this->IsPassiveSkill = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    if (this->IsPassiveSkill != false) {
      local_10 = FFieldNotificationClassDescriptor::PassiveSkillName.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::PassiveSkillName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      local_10 = FFieldNotificationClassDescriptor::PassiveSkillDesc.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::PassiveSkillDesc.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdatePeriod @ 14be58a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdatePeriod(UDS_VM_Item *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::IsPeriod.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPeriod.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StyleIDPeriod.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StyleIDPeriod.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// UpdatePrefix @ 14be58fc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdatePrefix(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsPrefix.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrefix.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5f8))(pUVar2);
    if (this->IsPrefix != bVar1) {
      this->IsPrefix = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    if (this->IsPrefix != false) {
      local_10 = FFieldNotificationClassDescriptor::PrefixStatusBindingEventField.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::PrefixStatusBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      local_10 = FFieldNotificationClassDescriptor::PrefixName.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::PrefixName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateQuantity @ 14be590c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateQuantity(UDS_VM_Item *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_00;
  FName FVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_M_ItemImplBase *pUVar5;
  FText *pFVar6;
  FFieldId local_28;
  FText local_18;
  
  this_00 = &this->Implementation;
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsQuantityRightBottom.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsQuantityRightBottom.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x578))(pUVar4);
    if (this->IsQuantityRightBottom != bVar3) {
      this->IsQuantityRightBottom = bVar3;
      local_28.FieldName = FVar1;
      local_28.BitNumber = iVar2;
      (**(code **)(this->_padding_ + 0x38))();
    }
    if (this->IsQuantityRightBottom != false) {
      bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar2 = FFieldNotificationClassDescriptor::QuantityRightBottom.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::QuantityRightBottom.FieldName;
      if (!bVar3) {
        pUVar5 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar6 = UDS_M_ItemImplBase::GetQuantityTextRightBottom(pUVar5,&local_18);
        local_28.FieldName = FVar1;
        local_28.BitNumber = iVar2;
        UMVVMViewModelBase::SetPropertyValue
                  ((UMVVMViewModelBase *)this,&this->QuantityRightBottom,pFVar6,&local_28);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
      }
    }
  }
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsQuantityCenter.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsQuantityCenter.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x588))(pUVar4);
    if (this->IsQuantityCenter != bVar3) {
      this->IsQuantityCenter = bVar3;
      local_28.FieldName = FVar1;
      local_28.BitNumber = iVar2;
      (**(code **)(this->_padding_ + 0x38))();
    }
    if (this->IsQuantityCenter != false) {
      bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar2 = FFieldNotificationClassDescriptor::QuantityCenter.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::QuantityCenter.FieldName;
      if (!bVar3) {
        pUVar5 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar6 = UDS_M_ItemImplBase::GetQuantityTextCenter(pUVar5,&local_18);
        local_28.FieldName = FVar1;
        local_28.BitNumber = iVar2;
        UMVVMViewModelBase::SetPropertyValue
                  ((UMVVMViewModelBase *)this,&this->QuantityCenter,pFVar6,&local_28);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
      }
    }
  }
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsQuantityUnder.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsQuantityUnder.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x590))(pUVar4);
    if (this->IsQuantityUnder != bVar3) {
      this->IsQuantityUnder = bVar3;
      local_28.FieldName = FVar1;
      local_28.BitNumber = iVar2;
      (**(code **)(this->_padding_ + 0x38))();
    }
    if (this->IsQuantityUnder != false) {
      bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      iVar2 = FFieldNotificationClassDescriptor::QuantityUnder.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::QuantityUnder.FieldName;
      if (!bVar3) {
        pUVar5 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar6 = UDS_M_ItemImplBase::GetQuantityTextUnder(pUVar5,&local_18);
        local_28.FieldName = FVar1;
        local_28.BitNumber = iVar2;
        UMVVMViewModelBase::SetPropertyValue
                  ((UMVVMViewModelBase *)this,&this->QuantityUnder,pFVar6,&local_28);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
      }
    }
  }
  local_28.BitNumber = FFieldNotificationClassDescriptor::QuantityTextStyleTID.BitNumber;
  local_28.FieldName = FFieldNotificationClassDescriptor::QuantityTextStyleTID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// UpdateQuantityByDetail @ 14be593b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateQuantityByDetail(UDS_VM_Item *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::OwnedQuantityTradable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OwnedQuantityTradable.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::OwnedQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OwnedQuantity.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// UpdateRegister @ 14be597b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateRegister(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsQuickSlotRegistered.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuickSlotRegistered.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5a0))(pUVar2);
    if (this->IsQuickSlotRegistered != bVar1) {
      this->IsQuickSlotRegistered = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateRemove @ 14be59850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateRemove(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName FStack_18;
  int iStack_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  iStack_10 = FFieldNotificationClassDescriptor::IsShowRemoveIcon.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsShowRemoveIcon.FieldName;
  if (bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
  bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x608))(pUVar2);
  if (this->IsShowRemoveIcon != bVar1) {
    this->IsShowRemoveIcon = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// UpdateRequireLevel @ 14be59860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateRequireLevel(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsRequireLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRequireLevel.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x5d8))(pUVar2);
    if (this->IsRequireLevel != bVar1) {
      this->IsRequireLevel = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    if (this->IsRequireLevel != false) {
      local_10 = FFieldNotificationClassDescriptor::RequireLevelString.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::RequireLevelString.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateSelected @ 14be59940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateSelected(UDS_VM_Item *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_00;
  FName FVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FName local_18;
  int local_10;
  
  this_00 = &this->Implementation;
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4);
    if (this->IsSelected != bVar3) {
      this->IsSelected = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))();
    }
  }
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsHovering.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsHovering.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x640))(pUVar4);
    if (this->IsHovering != bVar3) {
      this->IsHovering = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))();
    }
  }
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsPressed.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsPressed.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x650))(pUVar4);
    if (this->IsPressed != bVar3) {
      this->IsPressed = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))();
    }
  }
  bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  iVar2 = FFieldNotificationClassDescriptor::IsDragging.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsDragging.FieldName;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = (bool)(**(code **)(*(longlong *)pUVar4 + 0x648))(pUVar4);
    if (this->IsDragging != bVar3) {
      this->IsDragging = bVar3;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateSellCost @ 14be59b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateSellCost(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SellPrice.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SellPrice.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateSetEffect @ 14be59b50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateSetEffect(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsSetEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSetEffect.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x600))(pUVar2);
    if (this->IsSetEffect != bVar1) {
      this->IsSetEffect = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    if (this->IsSetEffect != false) {
      local_10 = FFieldNotificationClassDescriptor::SetEffectName.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::SetEffectName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      local_10 = FFieldNotificationClassDescriptor::SetEffectOptions.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::SetEffectOptions.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateTradable @ 14be59e50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateTradable(UDS_VM_Item *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsTradable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsTradable.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    bVar1 = (bool)(**(code **)(*(longlong *)pUVar2 + 0x568))(pUVar2);
    if (this->IsTradable != bVar1) {
      this->IsTradable = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateView @ 14be5a490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Item::UpdateView(UDS_VM_Item *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  FName FVar5;
  FString *pFVar6;
  UEnum *pUVar7;
  FName *pFVar8;
  EDS_ItemViewModelEntry EVar9;
  FName FVar10;
  long64 lVar11;
  int iVar12;
  wchar_t *pwVar13;
  EDS_AnimationEventType EVar14;
  wchar_t *pwVar15;
  FWeakObjectPtr local_res10;
  EDS_AnimationEventType local_res18;
  undefined7 uStackX_19;
  FName local_res20;
  FString local_48;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    Update(this,this->EnableState);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemSlotUpdateViewEvent>
                    ((FDS_DataContainer *)&pUVar4[1].field_0x8,UpdateViewEntry);
  pwVar15 = L"";
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
                      ((FDS_DataContainer *)&pUVar4[1].field_0x8,
                       (EDS_ItemSlotUpdateViewEvent)&local_res18);
    uVar1 = *(undefined8 *)FVar5;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar4[1].field_0x8,uVar3 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_48,pwVar13);
    pUVar7 = StaticEnum<enum_EDS_ItemViewModelEntry>();
    if (pUVar7 == (UEnum *)0x0) {
      EVar9 = CONCAT71(uStackX_19,local_res18);
    }
    else {
      iVar12 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      pFVar8 = ::FName::FName(&local_res20,iVar12,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                              FNAME_Add);
      EVar9 = UEnum::GetValueByName(pUVar7,*pFVar8,None);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    Update(this,EVar9);
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemSlotUpdateViewEvent>
                    ((FDS_DataContainer *)&pUVar4[1].field_0x8,AnimationName);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
                      ((FDS_DataContainer *)&pUVar4[1].field_0x8,
                       (EDS_ItemSlotUpdateViewEvent)&local_res18);
    uVar1 = *(undefined8 *)FVar5;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar4[1].field_0x8,uVar3 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res20,pwVar13);
    FVar5 = *pFVar8;
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
                       ((FDS_DataContainer *)&pUVar4[1].field_0x8,
                        (EDS_ItemSlotUpdateViewEvent)&local_res18);
    uVar1 = *(undefined8 *)FVar10;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar4[1].field_0x8,uVar3 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar10);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_48,pwVar15);
    pUVar7 = StaticEnum<enum_EDS_AnimationEventType>();
    EVar14 = local_res18;
    if (pUVar7 != (UEnum *)0x0) {
      iVar12 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      pFVar8 = ::FName::FName(&local_res20,iVar12,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                              FNAME_Add);
      lVar11 = UEnum::GetValueByName(pUVar7,*pFVar8,None);
      EVar14 = (EDS_AnimationEventType)lVar11;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    (this->AnimationEvent).AnimationName = FVar5;
    (this->AnimationEvent).AnimationEventType = EVar14;
    local_48.Data.ArrayNum = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_48.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  return;
}

// UpdateViewEntry @ 14be5af40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateViewEntry(UDS_VM_Item *this,EDS_ItemViewModelEntry param_1)

{
  undefined1 *puVar1;
  TMap<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  EDS_ItemViewModelEntry EVar6;
  code *pcVar7;
  TMap<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_e0 [8];
  ForAnyElementType FStack_d8;
  int local_d0;
  TMap<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  puVar1 = &(this->UpdateViewModelEntryMap).field_0x10;
  iStack_c0 = 0;
  iVar4 = *(int *)&(this->UpdateViewModelEntryMap).field_0x28;
  pTVar2 = &this->UpdateViewModelEntryMap;
  local_a8 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->UpdateViewModelEntryMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14be5afed;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_bc = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_bc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_ac = (int)lVar10 + -1 + local_a8;
    if (iVar4 < iStack_ac) {
      iStack_ac = iVar4;
    }
  }
LAB_14be5afed:
  iStack_a0 = *(int *)&(this->UpdateViewModelEntryMap).field_0x8 -
              *(int *)&(this->UpdateViewModelEntryMap).field_0x34;
  uVar13 = *(uint *)&(this->UpdateViewModelEntryMap).field_0x28;
  uStack_b0 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_90._28_4_ = iStack_ac;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = pTVar2;
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->UpdateViewModelEntryMap).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->UpdateViewModelEntryMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be5b0f0;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14be5b0f0:
  while( true ) {
    pTVar8 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemViewModelEntry,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar13) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    lVar10 = *(longlong *)pTVar8;
    EVar6 = *(EDS_ItemViewModelEntry *)(lVar10 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    local_e0 = (undefined1  [8])0x0;
    FStack_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_e0,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (lVar10 + (longlong)TStack_90.CurrentBitIndex * 0x28 + 8));
    if ((EVar6 & param_1) != None) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,&local_50);
      if ((local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)FStack_d8.Data + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_68);
    if ((local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
      local_d0 = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e0);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// UpdateWeight @ 14be5b220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::UpdateWeight(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Weight.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Weight.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// VisibleCollepsed @ 14be5b260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Item::VisibleCollepsed(UDS_VM_Item *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
  if (this->ItemIconID != 0) {
    this->ItemIconID = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsEquipSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEquipSlot.FieldName;
  if (this->IsEquipSlot != false) {
    this->IsEquipSlot = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsEquipped.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEquipped.FieldName;
  if (this->IsEquipped != false) {
    this->IsEquipped = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsPressed.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPressed.FieldName;
  if (this->IsPressed != false) {
    this->IsPressed = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsRequireLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRequireLevel.FieldName;
  if (this->IsRequireLevel != false) {
    this->IsRequireLevel = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsDurability.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDurability.FieldName;
  if (this->IsDurability != false) {
    this->IsDurability = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsShowDurabilityIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowDurabilityIcon.FieldName;
  if (this->IsShowDurabilityIcon != false) {
    this->IsShowDurabilityIcon = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsPrefix.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrefix.FieldName;
  if (this->IsPrefix != false) {
    this->IsPrefix = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmpty.FieldName;
  if (this->IsEmpty != false) {
    this->IsEmpty = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsPassiveSkill.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPassiveSkill.FieldName;
  if (this->IsPassiveSkill != false) {
    this->IsPassiveSkill = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsSetEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSetEffect.FieldName;
  if (this->IsSetEffect != false) {
    this->IsSetEffect = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsQuantityRightBottom.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuantityRightBottom.FieldName;
  if (this->IsQuantityRightBottom != false) {
    this->IsQuantityRightBottom = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsQuantityCenter.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuantityCenter.FieldName;
  if (this->IsQuantityCenter != false) {
    this->IsQuantityCenter = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsQuantityUnder.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuantityUnder.FieldName;
  if (this->IsQuantityUnder != false) {
    this->IsQuantityUnder = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsCooldown.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsCooldown.FieldName;
  if (this->IsCooldown != false) {
    this->IsCooldown = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsEmptyVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmptyVisibility.FieldName;
  if (this->IsEmptyVisibility != false) {
    this->IsEmptyVisibility = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsTradable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsTradable.FieldName;
  if (this->IsTradable != false) {
    this->IsTradable = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsDimmed.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDimmed.FieldName;
  if (this->IsDimmed != false) {
    this->IsDimmed = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsShowCraftEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowCraftEffect.FieldName;
  if (this->IsShowCraftEffect != false) {
    this->IsShowCraftEffect = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsHovering.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHovering.FieldName;
  if (this->IsHovering != false) {
    this->IsHovering = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsDragging.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDragging.FieldName;
  if (this->IsDragging != false) {
    this->IsDragging = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (this->IsSelected != false) {
    this->IsSelected = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsShowRemoveIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowRemoveIcon.FieldName;
  if (this->IsShowRemoveIcon != false) {
    this->IsShowRemoveIcon = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsShowNewSymbol.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowNewSymbol.FieldName;
  if (this->IsShowNewSymbol != false) {
    this->IsShowNewSymbol = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsQuickSlotRegistered.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsQuickSlotRegistered.FieldName;
  if (this->IsQuickSlotRegistered != false) {
    this->IsQuickSlotRegistered = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// Weight @ 14be5bd60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall UDS_VM_Item::Weight(UDS_VM_Item *this,FDS_Text *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNumberFormattingOptions *pFVar6;
  UDS_M_ItemImplBase *this_00;
  float fVar7;
  FNumberFormattingOptions local_68;
  FNumberFormattingOptions local_48 [2];
  
  bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                    (&this->Implementation,(void *)0x0);
  if (bVar4) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  else {
    pFVar6 = FNumberFormattingOptions::FNumberFormattingOptions(local_48);
    pFVar6->MinimumFractionalDigits = 2;
    pFVar6->MaximumFractionalDigits = 2;
    uVar2._0_1_ = pFVar6->AlwaysSign;
    uVar2._1_1_ = pFVar6->UseGrouping;
    uVar2._2_1_ = pFVar6->IndicateNearlyInteger;
    uVar2._3_1_ = pFVar6->field_0x3;
    uVar2._4_4_ = pFVar6->RoundingMode;
    uVar3._0_4_ = pFVar6->MinimumIntegralDigits;
    uVar3._4_4_ = pFVar6->MaximumIntegralDigits;
    uVar1._0_4_ = pFVar6->MinimumFractionalDigits;
    uVar1._4_4_ = pFVar6->MaximumFractionalDigits;
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->Implementation).WeakPtr);
    iVar5 = UDS_M_ItemImplBase::GetWeight(this_00);
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    fVar7 = (float)iVar5 * __real_3c23d70a;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    local_68._0_8_ = uVar2;
    local_68._8_8_ = uVar3;
    local_68._16_8_ = uVar1;
    FDS_Text::SetTextFromNumber(__return_storage_ptr__,fVar7,&local_68);
  }
  return __return_storage_ptr__;
}

