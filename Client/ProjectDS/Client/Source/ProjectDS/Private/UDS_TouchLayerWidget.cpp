// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5c2990

UClass * __cdecl UDS_TouchLayerWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TouchLayerWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TouchLayerWidget",
               &Z_Registration_Info_UClass_UDS_TouchLayerWidget.InnerSingleton,
               StaticRegisterNativesUDS_TouchLayerWidget,0x980,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TouchLayerWidget>,
               InternalVTableHelperCtorCaller<UDS_TouchLayerWidget>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TouchLayerWidget.InnerSingleton;
}

// UDS_TouchLayerWidget @ 14b5c73d0

UDS_TouchLayerWidget * __thiscall
UDS_TouchLayerWidget::UDS_TouchLayerWidget(UDS_TouchLayerWidget *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseButtonUp);
  return this;
}

// UDS_TouchLayerWidget @ 14b5c7430

UDS_TouchLayerWidget * __thiscall
UDS_TouchLayerWidget::UDS_TouchLayerWidget(UDS_TouchLayerWidget *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseButtonUp);
  return this;
}

// ~UDS_TouchLayerWidget @ 14b5c8c90

void __thiscall UDS_TouchLayerWidget::~UDS_TouchLayerWidget(UDS_TouchLayerWidget *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b5cb8f0

IClassDescriptor * __thiscall
UDS_TouchLayerWidget::GetFieldNotificationDescriptor(UDS_TouchLayerWidget *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_TouchLayerWidget::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b5cc1a0

UClass * __cdecl UDS_TouchLayerWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TouchLayerWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TouchLayerWidget",
               &Z_Registration_Info_UClass_UDS_TouchLayerWidget.InnerSingleton,
               StaticRegisterNativesUDS_TouchLayerWidget,0x980,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TouchLayerWidget>,
               InternalVTableHelperCtorCaller<UDS_TouchLayerWidget>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TouchLayerWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_TouchLayerWidget @ 14b5ce020

void __cdecl UDS_TouchLayerWidget::StaticRegisterNativesUDS_TouchLayerWidget(void)

{
  return;
}

// NativeOnMouseButtonDown @ 14bcad380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_TouchLayerWidget::NativeOnMouseButtonDown
          (UDS_TouchLayerWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FFieldId local_18;
  
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseButtonUp).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnEventMouseButtonUp @ 14bcb4e00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_TouchLayerWidget::OnEventMouseButtonUp
          (UDS_TouchLayerWidget *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FFieldId local_18;
  
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseButtonUp).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

