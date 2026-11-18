// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 1470be3d0

UClass * __cdecl UMassTestProcessor_C::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_C.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_C",
               &Z_Registration_Info_UClass_UMassTestProcessor_C.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_C,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_C>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_C>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_C.InnerSingleton;
}

// UMassTestProcessor_C @ 1470f6300

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_C * __thiscall
UMassTestProcessor_C::UMassTestProcessor_C(UMassTestProcessor_C *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UMassTestProcessorBase__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0x140);
  *(undefined ***)this = &___7UMassTestProcessor_C__6B_;
  return this;
}

// UMassTestProcessor_C @ 1470f6360

UMassTestProcessor_C * __thiscall
UMassTestProcessor_C::UMassTestProcessor_C(UMassTestProcessor_C *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  *(undefined ***)this = &___7UMassTestProcessor_C__6B_;
  return this;
}

// ~UMassTestProcessor_C @ 1470f8e80

void __thiscall UMassTestProcessor_C::~UMassTestProcessor_C(UMassTestProcessor_C *this)

{
  *(undefined ***)this = &___7UMassTestProcessor_C__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// GetPrivateStaticClass @ 147121080

UClass * __cdecl UMassTestProcessor_C::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_C.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_C",
               &Z_Registration_Info_UClass_UMassTestProcessor_C.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_C,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_C>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_C>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_C.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_C @ 1471abb60

void __cdecl UMassTestProcessor_C::StaticRegisterNativesUMassTestProcessor_C(void)

{
  return;
}

