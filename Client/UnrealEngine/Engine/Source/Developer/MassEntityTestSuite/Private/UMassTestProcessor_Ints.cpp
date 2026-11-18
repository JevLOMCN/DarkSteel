// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// StaticClass @ 1470c8590

UClass * __cdecl UMassTestProcessor_Ints::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_Ints.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_Ints",
               &Z_Registration_Info_UClass_UMassTestProcessor_Ints.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_Ints,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_Ints>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_Ints>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_Ints.InnerSingleton;
}

// UMassTestProcessor_Ints @ 1470f66d0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_Ints * __thiscall
UMassTestProcessor_Ints::UMassTestProcessor_Ints
          (UMassTestProcessor_Ints *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UMassTestProcessorBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->_padding_);
  this->_padding_ = (longlong)&___7UMassTestProcessor_Ints__6B_;
  (this->Ints).DataPtr = (FTestFragment_Int *)0x0;
  (this->Ints).ArrayNum = 0;
  return this;
}

// UMassTestProcessor_Ints @ 1470f6750

UMassTestProcessor_Ints * __thiscall
UMassTestProcessor_Ints::UMassTestProcessor_Ints(UMassTestProcessor_Ints *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  this->_padding_ = (longlong)&___7UMassTestProcessor_Ints__6B_;
  (this->Ints).DataPtr = (FTestFragment_Int *)0x0;
  (this->Ints).ArrayNum = 0;
  return this;
}

// ~UMassTestProcessor_Ints @ 1470f8f40

void __thiscall UMassTestProcessor_Ints::~UMassTestProcessor_Ints(UMassTestProcessor_Ints *this)

{
  this->_padding_ = (longlong)&___7UMassTestProcessor_Ints__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// ConfigureQueries @ 14711b620

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestProcessor_Ints::ConfigureQueries
          (UMassTestProcessor_Ints *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&this->_padding_,ReadWrite,All);
  return;
}

// GetPrivateStaticClass @ 147121500

UClass * __cdecl UMassTestProcessor_Ints::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_Ints.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_Ints",
               &Z_Registration_Info_UClass_UMassTestProcessor_Ints.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_Ints,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_Ints>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_Ints>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_Ints.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_Ints @ 1471abbc0

void __cdecl UMassTestProcessor_Ints::StaticRegisterNativesUMassTestProcessor_Ints(void)

{
  return;
}

