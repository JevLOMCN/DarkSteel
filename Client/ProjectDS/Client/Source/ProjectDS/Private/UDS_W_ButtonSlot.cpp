// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetbIsSelected_WrapperImpl @ 14b7681a0

void __cdecl UDS_W_ButtonSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x11a8) = *(undefined1 *)param_2;
  OnUpdateButtonStateType(param_1);
  return;
}

// SetbIsDisabled_WrapperImpl @ 14b7681b0

void __cdecl UDS_W_ButtonSlot::SetbIsDisabled_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x11a9) = *(undefined1 *)param_2;
  OnUpdateButtonStateType(param_1);
  return;
}

// StaticClass @ 14b7681c0

UClass * __cdecl UDS_W_ButtonSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_ButtonSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_ButtonSlot",
               &Z_Registration_Info_UClass_UDS_W_ButtonSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_ButtonSlot,0x11b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_ButtonSlot>,
               InternalVTableHelperCtorCaller<UDS_W_ButtonSlot>,local_res8,UDS_W_Slot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_ButtonSlot.InnerSingleton;
}

// UDS_W_ButtonSlot @ 14b76d4d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_ButtonSlot * __thiscall
UDS_W_ButtonSlot::UDS_W_ButtonSlot(UDS_W_ButtonSlot *this,FVTableHelper *param_1)

{
  UDS_W_Slot::UDS_W_Slot((UDS_W_Slot *)this,param_1);
  this->ButtonStateType = Normal;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->ButtonSwitcherArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonSwitcherArray).ArrayNum = 0;
  (this->ButtonSwitcherArray).ArrayMax = 0;
  return this;
}

// ~UDS_W_ButtonSlot @ 14b770a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_ButtonSlot::~UDS_W_ButtonSlot(UDS_W_ButtonSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pFVar1 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_W_Slot::~UDS_W_Slot((UDS_W_Slot *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b775010

IClassDescriptor * __thiscall
UDS_W_ButtonSlot::GetFieldNotificationDescriptor(UDS_W_ButtonSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_ButtonSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7753a0

UClass * __cdecl UDS_W_ButtonSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_ButtonSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_ButtonSlot",
               &Z_Registration_Info_UClass_UDS_W_ButtonSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_ButtonSlot,0x11b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_ButtonSlot>,
               InternalVTableHelperCtorCaller<UDS_W_ButtonSlot>,local_res8,UDS_W_Slot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_ButtonSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_W_ButtonSlot @ 14b777b70

void __cdecl UDS_W_ButtonSlot::StaticRegisterNativesUDS_W_ButtonSlot(void)

{
  return;
}

// UDS_W_ButtonSlot @ 14bce53a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_ButtonSlot * __thiscall
UDS_W_ButtonSlot::UDS_W_ButtonSlot(UDS_W_ButtonSlot *this,FObjectInitializer *param_1)

{
  UDS_W_Slot::UDS_W_Slot((UDS_W_Slot *)this,param_1);
  this->ButtonStateType = Normal;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->ButtonSwitcherArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonSwitcherArray).ArrayNum = 0;
  (this->ButtonSwitcherArray).ArrayMax = 0;
  return this;
}

// NativeConstruct @ 14bd06d00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_ButtonSlot::NativeConstruct(UDS_W_ButtonSlot *this)

{
  int *piVar1;
  TArray<TObjectPtr<UDS_ButtonSwitcher>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  int iVar6;
  int iVar7;
  TSharedRef<SWidget,1> *pTVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UDS_ButtonSwitcher *this_00;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_58;
  TSharedRef<SWidget,1> local_48;
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  if ((char)this->_padding_ == '\x01') {
    pTVar8 = UWidget::TakeWidget((UWidget *)this,&local_48);
    pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar8->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if (pSVar5 != (SWidget *)0x0) {
      pFVar9 = ::FName::FName(&local_res10,"Slot");
      pSVar5->Tag = *pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  pTVar2 = &this->ButtonSwitcherArray;
  piVar1 = &(this->ButtonSwitcherArray).ArrayMax;
  (this->ButtonSwitcherArray).ArrayNum = 0;
  if ((this->ButtonSwitcherArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  UWidgetTree::GetAllWidgets((UWidgetTree *)this->_padding_,&local_58);
  iVar6 = local_58.ArrayNum;
  pFVar3 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
  FVar11.Data = local_58.AllocatorInstance.Data;
  do {
    if (local_58.ArrayNum != iVar6) {
      `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar11.Data == pFVar3) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    this_00 = *(UDS_ButtonSwitcher **)FVar11.Data;
    if (this_00 != (UDS_ButtonSwitcher *)0x0) {
      pUVar10 = Z_Construct_UClass_UDS_ButtonSwitcher_NoRegister();
      iVar7 = (int)pUVar10->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar10->_padding_)) {
        this_00 = (UDS_ButtonSwitcher *)0x0;
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 != (UDS_ButtonSwitcher *)0x0) goto LAB_14bd06e5c;
      }
      else if (this_00 != (UDS_ButtonSwitcher *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bd06e5c:
        iVar7 = (this->ButtonSwitcherArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ButtonSwitcherArray).ArrayNum = iVar7 + 1;
        *(UDS_ButtonSwitcher **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        UDS_ButtonSwitcher::SetButtonEvent(this_00,&this->ButtonStateType);
      }
    }
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// NativeDestruct @ 14bd07790

void __thiscall UDS_W_ButtonSlot::NativeDestruct(UDS_W_ButtonSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if ((char)this->_padding_ == '\x01') {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      if (pUVar2[0x3d].field_0x20 == '\x02') {
        this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res8);
        ADS_PlayerController::SetCursorShape(this_00,Default);
      }
    }
  }
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  (this->ButtonSwitcherArray).ArrayNum = 0;
  if ((this->ButtonSwitcherArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ButtonSwitcherArray).AllocatorInstance,0,
               &(this->ButtonSwitcherArray).ArrayMax);
  }
  return;
}

// NativeOnDragCancelled @ 14bd07970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_ButtonSlot::NativeOnDragCancelled
          (UDS_W_ButtonSlot *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EDS_ButtonStateType EVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FFieldId local_28;
  
  UUserWidget::NativeOnDragCancelled((UUserWidget *)this,param_1,param_2);
  local_28.FieldName = UDS_W_Slot::FFieldNotificationClassDescriptor::EventOnDragCancelled.FieldName
  ;
  local_28.BitNumber = UDS_W_Slot::FFieldNotificationClassDescriptor::EventOnDragCancelled.BitNumber
  ;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_28);
  this->IsPressed = false;
  this->IsHovered = false;
  if (this->bIsDisabled == true) {
    this->ButtonStateType = Disabled;
  }
  else {
    EVar3 = Normal;
    if (this->bIsSelected == true) {
      EVar3 = Selected;
    }
    this->ButtonStateType = EVar3;
  }
  pFVar4 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
  iVar2 = (this->ButtonSwitcherArray).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(UDS_ButtonSwitcher **)pFVar4 != (UDS_ButtonSwitcher *)0x0) {
      UDS_ButtonSwitcher::SetButtonEvent(*(UDS_ButtonSwitcher **)pFVar4,&this->ButtonStateType);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// NativeOnMouseButtonDown @ 14bd08610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_ButtonSlot::NativeOnMouseButtonDown
          (UDS_W_ButtonSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FFieldId local_18;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    this->IsPressed = true;
    OnUpdateButtonStateType(this);
    FPointerEvent::operator=((FPointerEvent *)&this->_padding_,param_2);
    local_18.FieldName =
         UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName;
    local_18.BitNumber =
         UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonUp @ 14bd08ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_ButtonSlot::NativeOnMouseButtonUp
          (UDS_W_ButtonSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FFieldId local_18;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    this->IsPressed = false;
    OnUpdateButtonStateType(this);
    this->_padding_ = (longlong)this;
    FPointerEvent::operator=((FPointerEvent *)&this->_padding_,param_2);
    local_18.FieldName = UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName
    ;
    local_18.BitNumber = UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber
    ;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// NativeOnMouseEnter @ 14bd08f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_ButtonSlot::NativeOnMouseEnter
          (UDS_W_ButtonSlot *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  EDS_ButtonStateType EVar4;
  ADS_PlayerController *this_00;
  FScriptContainerElement *pFVar5;
  FWeakObjectPtr local_res8;
  FFieldId local_28;
  
  UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
  this->_padding_ = (longlong)this;
  FGeometry::operator=((FGeometry *)&this->_padding_,param_1);
  FPointerEvent::operator=((FPointerEvent *)&this->_padding_,param_2);
  local_28.FieldName = UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseEnter.FieldName;
  local_28.BitNumber = UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseEnter.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_28);
  bVar3 = UUserWidget::IsFocusable((UUserWidget *)this);
  if (bVar3) {
    UWidget::SetKeyboardFocus((UWidget *)this);
  }
  if ((char)this->_padding_ == '\x01') {
    ADS_PlayerController::GetPlayerController();
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      ADS_PlayerController::SetCursorShape(this_00,Hovered_Button);
    }
  }
  bVar3 = this->IsPressed;
  this->IsHovered = true;
  if (this->bIsDisabled == true) {
    EVar4 = Disabled_Clicked;
    if (bVar3 != true) {
      EVar4 = Disabled_Hovered;
    }
  }
  else if (this->bIsSelected == true) {
    EVar4 = Selected_Clicked;
    if (bVar3 != true) {
      EVar4 = Selected_Hovered;
    }
  }
  else {
    EVar4 = Normal_Clicked;
    if (bVar3 != true) {
      EVar4 = Normal_Hovered;
    }
  }
  this->ButtonStateType = EVar4;
  pFVar5 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
  iVar2 = (this->ButtonSwitcherArray).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(UDS_ButtonSwitcher **)pFVar5 != (UDS_ButtonSwitcher *)0x0) {
      UDS_ButtonSwitcher::SetButtonEvent(*(UDS_ButtonSwitcher **)pFVar5,&this->ButtonStateType);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// NativeOnMouseLeave @ 14bd09290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_ButtonSlot::NativeOnMouseLeave(UDS_W_ButtonSlot *this,FPointerEvent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  EDS_ButtonStateType EVar4;
  ADS_PlayerController *this_00;
  FScriptContainerElement *pFVar5;
  FWeakObjectPtr local_res8;
  FFieldId local_28;
  
  UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
  FPointerEvent::operator=((FPointerEvent *)&this->_padding_,param_1);
  local_28.FieldName = UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseLeave.FieldName;
  local_28.BitNumber = UDS_W_Slot::FFieldNotificationClassDescriptor::EventMouseLeave.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_28);
  if ((char)this->_padding_ == '\x01') {
    ADS_PlayerController::GetPlayerController();
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      ADS_PlayerController::SetCursorShape(this_00,Default);
    }
  }
  bVar3 = this->IsPressed;
  this->IsHovered = false;
  if (this->bIsDisabled == true) {
    EVar4 = Disabled_Clicked;
    if (bVar3 != true) {
      EVar4 = Disabled;
    }
  }
  else if (this->bIsSelected == true) {
    EVar4 = Selected_Clicked;
    if (bVar3 != true) {
      EVar4 = Selected;
    }
  }
  else {
    EVar4 = Normal_Clicked;
    if (bVar3 != true) {
      EVar4 = Normal;
    }
  }
  this->ButtonStateType = EVar4;
  pFVar5 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
  iVar2 = (this->ButtonSwitcherArray).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(UDS_ButtonSwitcher **)pFVar5 != (UDS_ButtonSwitcher *)0x0) {
      UDS_ButtonSwitcher::SetButtonEvent(*(UDS_ButtonSwitcher **)pFVar5,&this->ButtonStateType);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// NotifyButtonSwitcher @ 14bd09e00

void __thiscall UDS_W_ButtonSlot::NotifyButtonSwitcher(UDS_W_ButtonSlot *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
  iVar2 = (this->ButtonSwitcherArray).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UDS_ButtonSwitcher **)pFVar3 != (UDS_ButtonSwitcher *)0x0) {
      UDS_ButtonSwitcher::SetButtonEvent(*(UDS_ButtonSwitcher **)pFVar3,&this->ButtonStateType);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnUpdateButtonStateType @ 14bd113c0

void __thiscall UDS_W_ButtonSlot::OnUpdateButtonStateType(UDS_W_ButtonSlot *this)

{
  EDS_ButtonStateType *pEVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  EDS_ButtonStateType EVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pEVar1 = &this->ButtonStateType;
  bVar3 = this->IsPressed;
  if (this->bIsDisabled == true) {
    if (bVar3 == true) {
      *pEVar1 = Disabled_Clicked;
      goto LAB_14bd11455;
    }
    EVar5 = Disabled;
    if (this->IsHovered == true) {
      EVar5 = Disabled_Hovered;
    }
  }
  else if (this->bIsSelected == true) {
    if (bVar3 == true) {
      *pEVar1 = Selected_Clicked;
      goto LAB_14bd11455;
    }
    EVar5 = Selected;
    if (this->IsHovered == true) {
      EVar5 = Selected_Hovered;
    }
  }
  else {
    if (bVar3 == true) {
      *pEVar1 = Normal_Clicked;
      goto LAB_14bd11455;
    }
    EVar5 = (this->IsHovered == true) + Normal;
  }
  *pEVar1 = EVar5;
LAB_14bd11455:
  pFVar6 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
  iVar4 = (this->ButtonSwitcherArray).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->ButtonSwitcherArray).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    if (*(UDS_ButtonSwitcher **)pFVar6 != (UDS_ButtonSwitcher *)0x0) {
      UDS_ButtonSwitcher::SetButtonEvent(*(UDS_ButtonSwitcher **)pFVar6,pEVar1);
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// SetbIsDisabled @ 14bd22f70

void __thiscall UDS_W_ButtonSlot::SetbIsDisabled(UDS_W_ButtonSlot *this,bool *param_1)

{
  this->bIsDisabled = *param_1;
  OnUpdateButtonStateType(this);
  return;
}

// SetbIsSelected @ 14bd22f90

void __thiscall UDS_W_ButtonSlot::SetbIsSelected(UDS_W_ButtonSlot *this,bool *param_1)

{
  this->bIsSelected = *param_1;
  OnUpdateButtonStateType(this);
  return;
}

