// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b458e10

UClass * __cdecl UDS_CommonCustomNavigation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonCustomNavigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonCustomNavigation",
               &Z_Registration_Info_UClass_UDS_CommonCustomNavigation.InnerSingleton,
               StaticRegisterNativesUDS_CommonCustomNavigation,0x3a0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonCustomNavigation>,
               InternalVTableHelperCtorCaller<UDS_CommonCustomNavigation>,local_res8,
               UCommonCustomNavigation::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonCustomNavigation.InnerSingleton;
}

// UDS_CommonCustomNavigation @ 14b45cbd0

UDS_CommonCustomNavigation * __thiscall
UDS_CommonCustomNavigation::UDS_CommonCustomNavigation
          (UDS_CommonCustomNavigation *this,FVTableHelper *param_1)

{
  UCommonCustomNavigation::UCommonCustomNavigation((UCommonCustomNavigation *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonCustomNavigation @ 14b45d1f0

void __thiscall
UDS_CommonCustomNavigation::~UDS_CommonCustomNavigation(UDS_CommonCustomNavigation *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonCustomNavigation::~UCommonCustomNavigation((UCommonCustomNavigation *)this);
  return;
}

// GetPrivateStaticClass @ 14b45f040

UClass * __cdecl UDS_CommonCustomNavigation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonCustomNavigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonCustomNavigation",
               &Z_Registration_Info_UClass_UDS_CommonCustomNavigation.InnerSingleton,
               StaticRegisterNativesUDS_CommonCustomNavigation,0x3a0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonCustomNavigation>,
               InternalVTableHelperCtorCaller<UDS_CommonCustomNavigation>,local_res8,
               UCommonCustomNavigation::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonCustomNavigation.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonCustomNavigation @ 14b45f2d0

void __cdecl UDS_CommonCustomNavigation::StaticRegisterNativesUDS_CommonCustomNavigation(void)

{
  return;
}

// UDS_CommonCustomNavigation @ 14bc834d0

UDS_CommonCustomNavigation * __thiscall
UDS_CommonCustomNavigation::UDS_CommonCustomNavigation
          (UDS_CommonCustomNavigation *this,FObjectInitializer *param_1)

{
  UCommonCustomNavigation::UCommonCustomNavigation((UCommonCustomNavigation *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

