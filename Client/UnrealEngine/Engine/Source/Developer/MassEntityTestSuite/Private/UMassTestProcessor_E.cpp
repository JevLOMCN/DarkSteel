// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 1470c1580

UClass * __cdecl UMassTestProcessor_E::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_E.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_E",
               &Z_Registration_Info_UClass_UMassTestProcessor_E.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_E,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_E>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_E>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_E.InnerSingleton;
}

// UMassTestProcessor_E @ 1470f6420

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_E * __thiscall
UMassTestProcessor_E::UMassTestProcessor_E(UMassTestProcessor_E *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UMassTestProcessorBase__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0x140);
  *(undefined ***)this = &___7UMassTestProcessor_E__6B_;
  return this;
}

// UMassTestProcessor_E @ 1470f6480

UMassTestProcessor_E * __thiscall
UMassTestProcessor_E::UMassTestProcessor_E(UMassTestProcessor_E *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  *(undefined ***)this = &___7UMassTestProcessor_E__6B_;
  return this;
}

// ~UMassTestProcessor_E @ 1470f8ec0

void __thiscall UMassTestProcessor_E::~UMassTestProcessor_E(UMassTestProcessor_E *this)

{
  *(undefined ***)this = &___7UMassTestProcessor_E__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// GetPrivateStaticClass @ 147121200

UClass * __cdecl UMassTestProcessor_E::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_E.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_E",
               &Z_Registration_Info_UClass_UMassTestProcessor_E.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_E,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_E>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_E>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_E.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_E @ 1471abb80

void __cdecl UMassTestProcessor_E::StaticRegisterNativesUMassTestProcessor_E(void)

{
  return;
}

