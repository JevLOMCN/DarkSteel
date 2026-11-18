// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b462a50

UClass * __cdecl UDS_CommonRotator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonRotator",
               &Z_Registration_Info_UClass_UDS_CommonRotator.InnerSingleton,
               StaticRegisterNativesUDS_CommonRotator,0x17e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonRotator>,
               InternalVTableHelperCtorCaller<UDS_CommonRotator>,local_res8,
               UCommonRotator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonRotator.InnerSingleton;
}

// UDS_CommonRotator @ 14b465db0

UDS_CommonRotator * __thiscall
UDS_CommonRotator::UDS_CommonRotator(UDS_CommonRotator *this,FVTableHelper *param_1)

{
  UCommonRotator::UCommonRotator((UCommonRotator *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonRotator__6B_;
  return this;
}

// ~UDS_CommonRotator @ 14b466790

void __thiscall UDS_CommonRotator::~UDS_CommonRotator(UDS_CommonRotator *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonRotator__6B_;
  UCommonRotator::~UCommonRotator((UCommonRotator *)this);
  return;
}

// GetPrivateStaticClass @ 14b4686e0

UClass * __cdecl UDS_CommonRotator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonRotator",
               &Z_Registration_Info_UClass_UDS_CommonRotator.InnerSingleton,
               StaticRegisterNativesUDS_CommonRotator,0x17e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonRotator>,
               InternalVTableHelperCtorCaller<UDS_CommonRotator>,local_res8,
               UCommonRotator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonRotator.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonRotator @ 14b468d10

void __cdecl UDS_CommonRotator::StaticRegisterNativesUDS_CommonRotator(void)

{
  return;
}

// UDS_CommonRotator @ 14bc83770

UDS_CommonRotator * __thiscall
UDS_CommonRotator::UDS_CommonRotator(UDS_CommonRotator *this,FObjectInitializer *param_1)

{
  UCommonRotator::UCommonRotator((UCommonRotator *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_CommonRotator__6B_;
  return this;
}

