// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// StaticClass @ 1470cbda0

UClass * __cdecl UMassTestProcessor_FloatsInts::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_FloatsInts",
               &Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_FloatsInts,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_FloatsInts>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_FloatsInts>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.InnerSingleton;
}

// UMassTestProcessor_FloatsInts @ 1470f6600

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_FloatsInts * __thiscall
UMassTestProcessor_FloatsInts::UMassTestProcessor_FloatsInts
          (UMassTestProcessor_FloatsInts *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UMassTestProcessorBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->_padding_);
  this->_padding_ = (longlong)&___7UMassTestProcessor_FloatsInts__6B_;
  (this->Floats).DataPtr = (FTestFragment_Float *)0x0;
  (this->Floats).ArrayNum = 0;
  (this->Ints).DataPtr = (FTestFragment_Int *)0x0;
  (this->Ints).ArrayNum = 0;
  return this;
}

// UMassTestProcessor_FloatsInts @ 1470f6680

UMassTestProcessor_FloatsInts * __thiscall
UMassTestProcessor_FloatsInts::UMassTestProcessor_FloatsInts(UMassTestProcessor_FloatsInts *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  this->_padding_ = (longlong)&___7UMassTestProcessor_FloatsInts__6B_;
  (this->Floats).DataPtr = (FTestFragment_Float *)0x0;
  (this->Floats).ArrayNum = 0;
  (this->Ints).DataPtr = (FTestFragment_Int *)0x0;
  (this->Ints).ArrayNum = 0;
  return this;
}

// ~UMassTestProcessor_FloatsInts @ 1470f8f20

void __thiscall
UMassTestProcessor_FloatsInts::~UMassTestProcessor_FloatsInts(UMassTestProcessor_FloatsInts *this)

{
  this->_padding_ = (longlong)&___7UMassTestProcessor_FloatsInts__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// ConfigureQueries @ 14711b5c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestProcessor_FloatsInts::ConfigureQueries
          (UMassTestProcessor_FloatsInts *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&this->_padding_,ReadWrite,All);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&this->_padding_,ReadWrite,All);
  return;
}

// GetPrivateStaticClass @ 147121440

UClass * __cdecl UMassTestProcessor_FloatsInts::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_FloatsInts",
               &Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_FloatsInts,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_FloatsInts>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_FloatsInts>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_FloatsInts @ 1471abbb0

void __cdecl UMassTestProcessor_FloatsInts::StaticRegisterNativesUMassTestProcessor_FloatsInts(void)

{
  return;
}

