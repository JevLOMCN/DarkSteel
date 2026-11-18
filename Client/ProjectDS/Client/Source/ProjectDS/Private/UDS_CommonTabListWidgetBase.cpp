// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b462670

UClass * __cdecl UDS_CommonTabListWidgetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTabListWidgetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTabListWidgetBase",
               &Z_Registration_Info_UClass_UDS_CommonTabListWidgetBase.InnerSingleton,
               StaticRegisterNativesUDS_CommonTabListWidgetBase,0x598,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CommonTabListWidgetBase>,
               InternalVTableHelperCtorCaller<UDS_CommonTabListWidgetBase>,local_res8,
               UCommonTabListWidgetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTabListWidgetBase.InnerSingleton;
}

// UDS_CommonTabListWidgetBase @ 14b466150

UDS_CommonTabListWidgetBase * __thiscall
UDS_CommonTabListWidgetBase::UDS_CommonTabListWidgetBase
          (UDS_CommonTabListWidgetBase *this,FVTableHelper *param_1)

{
  UCommonTabListWidgetBase::UCommonTabListWidgetBase((UCommonTabListWidgetBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonTabListWidgetBase__6B_;
  return this;
}

// ~UDS_CommonTabListWidgetBase @ 14b4668e0

void __thiscall
UDS_CommonTabListWidgetBase::~UDS_CommonTabListWidgetBase(UDS_CommonTabListWidgetBase *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonTabListWidgetBase__6B_;
  UCommonTabListWidgetBase::~UCommonTabListWidgetBase((UCommonTabListWidgetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b468860

UClass * __cdecl UDS_CommonTabListWidgetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTabListWidgetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTabListWidgetBase",
               &Z_Registration_Info_UClass_UDS_CommonTabListWidgetBase.InnerSingleton,
               StaticRegisterNativesUDS_CommonTabListWidgetBase,0x598,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CommonTabListWidgetBase>,
               InternalVTableHelperCtorCaller<UDS_CommonTabListWidgetBase>,local_res8,
               UCommonTabListWidgetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTabListWidgetBase.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonTabListWidgetBase @ 14b468d30

void __cdecl UDS_CommonTabListWidgetBase::StaticRegisterNativesUDS_CommonTabListWidgetBase(void)

{
  return;
}

// UDS_CommonTabListWidgetBase @ 14bc837b0

UDS_CommonTabListWidgetBase * __thiscall
UDS_CommonTabListWidgetBase::UDS_CommonTabListWidgetBase
          (UDS_CommonTabListWidgetBase *this,FObjectInitializer *param_1)

{
  UCommonTabListWidgetBase::UCommonTabListWidgetBase((UCommonTabListWidgetBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonTabListWidgetBase__6B_;
  return this;
}

