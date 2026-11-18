// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 1470c3f80

UClass * __cdecl UMassTestProcessor_F::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_F.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_F",
               &Z_Registration_Info_UClass_UMassTestProcessor_F.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_F,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_F>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_F>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_F.InnerSingleton;
}

// UMassTestProcessor_F @ 1470f64b0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_F * __thiscall
UMassTestProcessor_F::UMassTestProcessor_F(UMassTestProcessor_F *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UMassTestProcessorBase__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0x140);
  *(undefined ***)this = &___7UMassTestProcessor_F__6B_;
  return this;
}

// UMassTestProcessor_F @ 1470f6510

UMassTestProcessor_F * __thiscall
UMassTestProcessor_F::UMassTestProcessor_F(UMassTestProcessor_F *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  *(undefined ***)this = &___7UMassTestProcessor_F__6B_;
  return this;
}

// ~UMassTestProcessor_F @ 1470f8ee0

void __thiscall UMassTestProcessor_F::~UMassTestProcessor_F(UMassTestProcessor_F *this)

{
  *(undefined ***)this = &___7UMassTestProcessor_F__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// GetPrivateStaticClass @ 1471212c0

UClass * __cdecl UMassTestProcessor_F::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_F.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_F",
               &Z_Registration_Info_UClass_UMassTestProcessor_F.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_F,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_F>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_F>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_F.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_F @ 1471abb90

void __cdecl UMassTestProcessor_F::StaticRegisterNativesUMassTestProcessor_F(void)

{
  return;
}

