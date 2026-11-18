// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4590c0

UClass * __cdecl UDS_CommonActivatableWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonActivatableWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonActivatableWidget",
               &Z_Registration_Info_UClass_UDS_CommonActivatableWidget.InnerSingleton,
               StaticRegisterNativesUDS_CommonActivatableWidget,0x558,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonActivatableWidget>,
               InternalVTableHelperCtorCaller<UDS_CommonActivatableWidget>,local_res8,
               UCommonActivatableWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonActivatableWidget.InnerSingleton;
}

// UDS_CommonActivatableWidget @ 14b45ca10

UDS_CommonActivatableWidget * __thiscall
UDS_CommonActivatableWidget::UDS_CommonActivatableWidget
          (UDS_CommonActivatableWidget *this,FVTableHelper *param_1)

{
  UCommonActivatableWidget::UCommonActivatableWidget((UCommonActivatableWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonActivatableWidget__6B_;
  return this;
}

// UDS_CommonActivatableWidget @ 14b45ca50

UDS_CommonActivatableWidget * __thiscall
UDS_CommonActivatableWidget::UDS_CommonActivatableWidget
          (UDS_CommonActivatableWidget *this,FObjectInitializer *param_1)

{
  UCommonActivatableWidget::UCommonActivatableWidget((UCommonActivatableWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonActivatableWidget__6B_;
  return this;
}

// ~UDS_CommonActivatableWidget @ 14b45d150

void __thiscall
UDS_CommonActivatableWidget::~UDS_CommonActivatableWidget(UDS_CommonActivatableWidget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonActivatableWidget__6B_;
  UCommonActivatableWidget::~UCommonActivatableWidget((UCommonActivatableWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b45ed40

UClass * __cdecl UDS_CommonActivatableWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonActivatableWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonActivatableWidget",
               &Z_Registration_Info_UClass_UDS_CommonActivatableWidget.InnerSingleton,
               StaticRegisterNativesUDS_CommonActivatableWidget,0x558,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonActivatableWidget>,
               InternalVTableHelperCtorCaller<UDS_CommonActivatableWidget>,local_res8,
               UCommonActivatableWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonActivatableWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonActivatableWidget @ 14b45f290

void __cdecl UDS_CommonActivatableWidget::StaticRegisterNativesUDS_CommonActivatableWidget(void)

{
  return;
}

