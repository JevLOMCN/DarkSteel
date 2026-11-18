// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 1470b9390

UClass * __cdecl UMassTestProcessor_A::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_A.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_A",
               &Z_Registration_Info_UClass_UMassTestProcessor_A.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_A,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_A>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_A>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_A.InnerSingleton;
}

// UMassTestProcessor_A @ 1470f61e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_A * __thiscall
UMassTestProcessor_A::UMassTestProcessor_A(UMassTestProcessor_A *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UMassTestProcessorBase__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0x140);
  *(undefined ***)this = &___7UMassTestProcessor_A__6B_;
  return this;
}

// UMassTestProcessor_A @ 1470f6240

UMassTestProcessor_A * __thiscall
UMassTestProcessor_A::UMassTestProcessor_A(UMassTestProcessor_A *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  *(undefined ***)this = &___7UMassTestProcessor_A__6B_;
  return this;
}

// ~UMassTestProcessor_A @ 1470f8e40

void __thiscall UMassTestProcessor_A::~UMassTestProcessor_A(UMassTestProcessor_A *this)

{
  *(undefined ***)this = &___7UMassTestProcessor_A__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// GetPrivateStaticClass @ 147120f00

UClass * __cdecl UMassTestProcessor_A::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_A.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_A",
               &Z_Registration_Info_UClass_UMassTestProcessor_A.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_A,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_A>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_A>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_A.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_A @ 1471abb40

void __cdecl UMassTestProcessor_A::StaticRegisterNativesUMassTestProcessor_A(void)

{
  return;
}

