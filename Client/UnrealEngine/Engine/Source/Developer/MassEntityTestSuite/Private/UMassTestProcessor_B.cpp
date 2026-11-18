// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 1470bc190

UClass * __cdecl UMassTestProcessor_B::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_B.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_B",
               &Z_Registration_Info_UClass_UMassTestProcessor_B.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_B,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_B>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_B>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_B.InnerSingleton;
}

// UMassTestProcessor_B @ 1470f6270

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_B * __thiscall
UMassTestProcessor_B::UMassTestProcessor_B(UMassTestProcessor_B *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UMassTestProcessorBase__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0x140);
  *(undefined ***)this = &___7UMassTestProcessor_B__6B_;
  return this;
}

// UMassTestProcessor_B @ 1470f62d0

UMassTestProcessor_B * __thiscall
UMassTestProcessor_B::UMassTestProcessor_B(UMassTestProcessor_B *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  *(undefined ***)this = &___7UMassTestProcessor_B__6B_;
  return this;
}

// ~UMassTestProcessor_B @ 1470f8e60

void __thiscall UMassTestProcessor_B::~UMassTestProcessor_B(UMassTestProcessor_B *this)

{
  *(undefined ***)this = &___7UMassTestProcessor_B__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// GetPrivateStaticClass @ 147120fc0

UClass * __cdecl UMassTestProcessor_B::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_B.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_B",
               &Z_Registration_Info_UClass_UMassTestProcessor_B.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_B,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_B>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_B>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_B.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_B @ 1471abb50

void __cdecl UMassTestProcessor_B::StaticRegisterNativesUMassTestProcessor_B(void)

{
  return;
}

