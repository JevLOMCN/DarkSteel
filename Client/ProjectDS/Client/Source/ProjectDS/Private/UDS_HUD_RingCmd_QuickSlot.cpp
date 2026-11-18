// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b4ad590

UClass * __cdecl UDS_HUD_RingCmd_QuickSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_RingCmd_QuickSlot",
               &Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_HUD_RingCmd_QuickSlot,0xb90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_HUD_RingCmd_QuickSlot>,
               InternalVTableHelperCtorCaller<UDS_HUD_RingCmd_QuickSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlot.InnerSingleton;
}

// UDS_HUD_RingCmd_QuickSlot @ 14b4b2160

UDS_HUD_RingCmd_QuickSlot * __thiscall
UDS_HUD_RingCmd_QuickSlot::UDS_HUD_RingCmd_QuickSlot
          (UDS_HUD_RingCmd_QuickSlot *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventOnMouseButtonUp);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  return this;
}

// UDS_HUD_RingCmd_QuickSlot @ 14b4b21e0

UDS_HUD_RingCmd_QuickSlot * __thiscall
UDS_HUD_RingCmd_QuickSlot::UDS_HUD_RingCmd_QuickSlot
          (UDS_HUD_RingCmd_QuickSlot *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventOnMouseButtonUp);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  return this;
}

// ~UDS_HUD_RingCmd_QuickSlot @ 14b4b35d0

void __thiscall
UDS_HUD_RingCmd_QuickSlot::~UDS_HUD_RingCmd_QuickSlot(UDS_HUD_RingCmd_QuickSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventOnMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnMouseButtonUp).PointerEvent);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b4b65d0

IClassDescriptor * __thiscall
UDS_HUD_RingCmd_QuickSlot::GetFieldNotificationDescriptor(UDS_HUD_RingCmd_QuickSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_HUD_RingCmd_QuickSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b4b71a0

UClass * __cdecl UDS_HUD_RingCmd_QuickSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_RingCmd_QuickSlot",
               &Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_HUD_RingCmd_QuickSlot,0xb90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_HUD_RingCmd_QuickSlot>,
               InternalVTableHelperCtorCaller<UDS_HUD_RingCmd_QuickSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_RingCmd_QuickSlot @ 14b4b84d0

void __cdecl UDS_HUD_RingCmd_QuickSlot::StaticRegisterNativesUDS_HUD_RingCmd_QuickSlot(void)

{
  return;
}

// NativeOnMouseButtonUp @ 14c0912f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_HUD_RingCmd_QuickSlot::NativeOnMouseButtonUp
          (UDS_HUD_RingCmd_QuickSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  FFieldId local_d8;
  FReply local_c8;
  
  UCommonUserWidget::NativeOnMouseButtonUp((UCommonUserWidget *)this,&local_c8,param_1,param_2);
  FReply::~FReply(&local_c8);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar2 != EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    local_d8.FieldName = FFieldNotificationClassDescriptor::EventOnMouseButtonUp.FieldName;
    local_d8.BitNumber = FFieldNotificationClassDescriptor::EventOnMouseButtonUp.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_d8);
  }
  FReply::FReply(__return_storage_ptr__,!bVar3);
  return __return_storage_ptr__;
}

// NativeOnMouseEnter @ 14c0913a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HUD_RingCmd_QuickSlot::NativeOnMouseEnter
          (UDS_HUD_RingCmd_QuickSlot *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseEnter.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseEnter.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// NativeOnMouseLeave @ 14c0913e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HUD_RingCmd_QuickSlot::NativeOnMouseLeave
          (UDS_HUD_RingCmd_QuickSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseLeave.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseLeave.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

