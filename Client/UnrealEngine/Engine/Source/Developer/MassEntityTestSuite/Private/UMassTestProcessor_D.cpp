// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 1470bede0

UClass * __cdecl UMassTestProcessor_D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_D",
               &Z_Registration_Info_UClass_UMassTestProcessor_D.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_D,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_D>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_D>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_D.InnerSingleton;
}

// UMassTestProcessor_D @ 1470f6390

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_D * __thiscall
UMassTestProcessor_D::UMassTestProcessor_D(UMassTestProcessor_D *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UMassTestProcessorBase__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0x140);
  *(undefined ***)this = &___7UMassTestProcessor_D__6B_;
  return this;
}

// UMassTestProcessor_D @ 1470f63f0

UMassTestProcessor_D * __thiscall
UMassTestProcessor_D::UMassTestProcessor_D(UMassTestProcessor_D *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  *(undefined ***)this = &___7UMassTestProcessor_D__6B_;
  return this;
}

// ~UMassTestProcessor_D @ 1470f8ea0

void __thiscall UMassTestProcessor_D::~UMassTestProcessor_D(UMassTestProcessor_D *this)

{
  *(undefined ***)this = &___7UMassTestProcessor_D__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// GetPrivateStaticClass @ 147121140

UClass * __cdecl UMassTestProcessor_D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_D",
               &Z_Registration_Info_UClass_UMassTestProcessor_D.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_D,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_D>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_D>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_D.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_D @ 1471abb70

void __cdecl UMassTestProcessor_D::StaticRegisterNativesUMassTestProcessor_D(void)

{
  return;
}

