// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b461320

UClass * __cdecl UDS_CommonLoadGuard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonLoadGuard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonLoadGuard",
               &Z_Registration_Info_UClass_UDS_CommonLoadGuard.InnerSingleton,
               StaticRegisterNativesUDS_CommonLoadGuard,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UDS_CommonLoadGuard>,
               InternalVTableHelperCtorCaller<UDS_CommonLoadGuard>,local_res8,
               UCommonLoadGuard::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonLoadGuard.InnerSingleton;
}

// UDS_CommonLoadGuard @ 14b465a30

UDS_CommonLoadGuard * __thiscall
UDS_CommonLoadGuard::UDS_CommonLoadGuard(UDS_CommonLoadGuard *this,FVTableHelper *param_1)

{
  UCommonLoadGuard::UCommonLoadGuard((UCommonLoadGuard *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UDS_CommonLoadGuard @ 14b465a70

UDS_CommonLoadGuard * __thiscall
UDS_CommonLoadGuard::UDS_CommonLoadGuard(UDS_CommonLoadGuard *this,FObjectInitializer *param_1)

{
  UCommonLoadGuard::UCommonLoadGuard((UCommonLoadGuard *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonLoadGuard @ 14b466630

void __thiscall UDS_CommonLoadGuard::~UDS_CommonLoadGuard(UDS_CommonLoadGuard *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonLoadGuard::~UCommonLoadGuard((UCommonLoadGuard *)this);
  return;
}

// GetPrivateStaticClass @ 14b4683e0

UClass * __cdecl UDS_CommonLoadGuard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonLoadGuard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonLoadGuard",
               &Z_Registration_Info_UClass_UDS_CommonLoadGuard.InnerSingleton,
               StaticRegisterNativesUDS_CommonLoadGuard,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UDS_CommonLoadGuard>,
               InternalVTableHelperCtorCaller<UDS_CommonLoadGuard>,local_res8,
               UCommonLoadGuard::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonLoadGuard.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonLoadGuard @ 14b468cd0

void __cdecl UDS_CommonLoadGuard::StaticRegisterNativesUDS_CommonLoadGuard(void)

{
  return;
}

