// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b457820

UClass * __cdecl UDS_CommonAnimatedSwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonAnimatedSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonAnimatedSwitcher",
               &Z_Registration_Info_UClass_UDS_CommonAnimatedSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_CommonAnimatedSwitcher,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonAnimatedSwitcher>,
               InternalVTableHelperCtorCaller<UDS_CommonAnimatedSwitcher>,local_res8,
               UCommonAnimatedSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonAnimatedSwitcher.InnerSingleton;
}

// UDS_CommonAnimatedSwitcher @ 14b45cb10

UDS_CommonAnimatedSwitcher * __thiscall
UDS_CommonAnimatedSwitcher::UDS_CommonAnimatedSwitcher
          (UDS_CommonAnimatedSwitcher *this,FVTableHelper *param_1)

{
  UCommonAnimatedSwitcher::UCommonAnimatedSwitcher((UCommonAnimatedSwitcher *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UDS_CommonAnimatedSwitcher @ 14b45cb50

UDS_CommonAnimatedSwitcher * __thiscall
UDS_CommonAnimatedSwitcher::UDS_CommonAnimatedSwitcher
          (UDS_CommonAnimatedSwitcher *this,FObjectInitializer *param_1)

{
  UCommonAnimatedSwitcher::UCommonAnimatedSwitcher((UCommonAnimatedSwitcher *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonAnimatedSwitcher @ 14b45d1a0

void __thiscall
UDS_CommonAnimatedSwitcher::~UDS_CommonAnimatedSwitcher(UDS_CommonAnimatedSwitcher *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonAnimatedSwitcher::~UCommonAnimatedSwitcher((UCommonAnimatedSwitcher *)this);
  return;
}

// GetPrivateStaticClass @ 14b45eec0

UClass * __cdecl UDS_CommonAnimatedSwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonAnimatedSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonAnimatedSwitcher",
               &Z_Registration_Info_UClass_UDS_CommonAnimatedSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_CommonAnimatedSwitcher,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonAnimatedSwitcher>,
               InternalVTableHelperCtorCaller<UDS_CommonAnimatedSwitcher>,local_res8,
               UCommonAnimatedSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonAnimatedSwitcher.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonAnimatedSwitcher @ 14b45f2b0

void __cdecl UDS_CommonAnimatedSwitcher::StaticRegisterNativesUDS_CommonAnimatedSwitcher(void)

{
  return;
}

