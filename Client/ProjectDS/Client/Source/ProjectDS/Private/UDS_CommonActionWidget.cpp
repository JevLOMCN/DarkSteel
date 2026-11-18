// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b457760

UClass * __cdecl UDS_CommonActionWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonActionWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonActionWidget",
               &Z_Registration_Info_UClass_UDS_CommonActionWidget.InnerSingleton,
               StaticRegisterNativesUDS_CommonActionWidget,0x490,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_CommonActionWidget>,
               InternalVTableHelperCtorCaller<UDS_CommonActionWidget>,local_res8,
               UCommonActionWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonActionWidget.InnerSingleton;
}

// UDS_CommonActionWidget @ 14b45c9d0

UDS_CommonActionWidget * __thiscall
UDS_CommonActionWidget::UDS_CommonActionWidget(UDS_CommonActionWidget *this,FVTableHelper *param_1)

{
  UCommonActionWidget::UCommonActionWidget((UCommonActionWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonActionWidget @ 14b45d130

void __thiscall UDS_CommonActionWidget::~UDS_CommonActionWidget(UDS_CommonActionWidget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonActionWidget::~UCommonActionWidget((UCommonActionWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b45ec80

UClass * __cdecl UDS_CommonActionWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonActionWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonActionWidget",
               &Z_Registration_Info_UClass_UDS_CommonActionWidget.InnerSingleton,
               StaticRegisterNativesUDS_CommonActionWidget,0x490,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_CommonActionWidget>,
               InternalVTableHelperCtorCaller<UDS_CommonActionWidget>,local_res8,
               UCommonActionWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonActionWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonActionWidget @ 14b45f280

void __cdecl UDS_CommonActionWidget::StaticRegisterNativesUDS_CommonActionWidget(void)

{
  return;
}

// UDS_CommonActionWidget @ 14bc83450

UDS_CommonActionWidget * __thiscall
UDS_CommonActionWidget::UDS_CommonActionWidget
          (UDS_CommonActionWidget *this,FObjectInitializer *param_1)

{
  UCommonActionWidget::UCommonActionWidget((UCommonActionWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

