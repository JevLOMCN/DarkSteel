// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b462b10

UClass * __cdecl UDS_CommonLazyWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonLazyWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonLazyWidget",
               &Z_Registration_Info_UClass_UDS_CommonLazyWidget.InnerSingleton,
               StaticRegisterNativesUDS_CommonLazyWidget,0x3e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonLazyWidget>,
               InternalVTableHelperCtorCaller<UDS_CommonLazyWidget>,local_res8,
               UCommonLazyWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonLazyWidget.InnerSingleton;
}

// UDS_CommonLazyWidget @ 14b465910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_CommonLazyWidget * __thiscall
UDS_CommonLazyWidget::UDS_CommonLazyWidget(UDS_CommonLazyWidget *this,FVTableHelper *param_1)

{
  UCommonLazyWidget::UCommonLazyWidget((UCommonLazyWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonLazyWidget @ 14b4665c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_CommonLazyWidget::~UDS_CommonLazyWidget(UDS_CommonLazyWidget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonLazyWidget::~UCommonLazyWidget((UCommonLazyWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b468260

UClass * __cdecl UDS_CommonLazyWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonLazyWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonLazyWidget",
               &Z_Registration_Info_UClass_UDS_CommonLazyWidget.InnerSingleton,
               StaticRegisterNativesUDS_CommonLazyWidget,0x3e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonLazyWidget>,
               InternalVTableHelperCtorCaller<UDS_CommonLazyWidget>,local_res8,
               UCommonLazyWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonLazyWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonLazyWidget @ 14b468c80

void __cdecl UDS_CommonLazyWidget::StaticRegisterNativesUDS_CommonLazyWidget(void)

{
  return;
}

// UDS_CommonLazyWidget @ 14bc83640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_CommonLazyWidget * __thiscall
UDS_CommonLazyWidget::UDS_CommonLazyWidget(UDS_CommonLazyWidget *this,FObjectInitializer *param_1)

{
  UCommonLazyWidget::UCommonLazyWidget((UCommonLazyWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

