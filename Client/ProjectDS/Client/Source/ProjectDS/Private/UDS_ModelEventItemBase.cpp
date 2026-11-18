// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b519880

UClass * __cdecl UDS_ModelEventItemBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemBase",
               &Z_Registration_Info_UClass_UDS_ModelEventItemBase.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemBase,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventItemBase>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemBase>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemBase.InnerSingleton;
}

// UDS_ModelEventItemBase @ 14b5229f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ModelEventItemBase * __thiscall
UDS_ModelEventItemBase::UDS_ModelEventItemBase(UDS_ModelEventItemBase *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->Event = None;
  this->_padding_ = (longlong)&___7UDS_ModelEventItemBase__6B_;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->WidgetPointerEventField);
  (this->DragDropEventField).Object = (FDS_DragDropEventField *)0x0;
  (this->DragDropEventField).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_ModelEventItemBase @ 14b522a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ModelEventItemBase * __thiscall
UDS_ModelEventItemBase::UDS_ModelEventItemBase
          (UDS_ModelEventItemBase *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->Event = None;
  this->_padding_ = (longlong)&___7UDS_ModelEventItemBase__6B_;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->WidgetPointerEventField);
  (this->DragDropEventField).Object = (FDS_DragDropEventField *)0x0;
  (this->DragDropEventField).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_ModelEventItemBase @ 14b523790

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ModelEventItemBase::~UDS_ModelEventItemBase(UDS_ModelEventItemBase *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventItemBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DragDropEventField).SharedReferenceCount.ReferenceController);
  FKeyEvent::~FKeyEvent(&(this->WidgetPointerEventField).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->WidgetPointerEventField).PointerEvent);
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526b20

UClass * __cdecl UDS_ModelEventItemBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemBase",
               &Z_Registration_Info_UClass_UDS_ModelEventItemBase.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemBase,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventItemBase>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemBase>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemBase.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventItemBase @ 14b527690

void __cdecl UDS_ModelEventItemBase::StaticRegisterNativesUDS_ModelEventItemBase(void)

{
  return;
}

