// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// StaticClass @ 1470c4f00

UClass * __cdecl UMassTestProcessor_Floats::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_Floats.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_Floats",
               &Z_Registration_Info_UClass_UMassTestProcessor_Floats.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_Floats,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_Floats>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_Floats>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_Floats.InnerSingleton;
}

// UMassTestProcessor_Floats @ 1470f6540

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessor_Floats * __thiscall
UMassTestProcessor_Floats::UMassTestProcessor_Floats
          (UMassTestProcessor_Floats *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UMassTestProcessorBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->_padding_);
  this->_padding_ = (longlong)&___7UMassTestProcessor_Floats__6B_;
  (this->Floats).DataPtr = (FTestFragment_Float *)0x0;
  (this->Floats).ArrayNum = 0;
  return this;
}

// UMassTestProcessor_Floats @ 1470f65c0

UMassTestProcessor_Floats * __thiscall
UMassTestProcessor_Floats::UMassTestProcessor_Floats(UMassTestProcessor_Floats *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  this->_padding_ = (longlong)&___7UMassTestProcessor_Floats__6B_;
  (this->Floats).DataPtr = (FTestFragment_Float *)0x0;
  (this->Floats).ArrayNum = 0;
  return this;
}

// ~UMassTestProcessor_Floats @ 1470f8f00

void __thiscall
UMassTestProcessor_Floats::~UMassTestProcessor_Floats(UMassTestProcessor_Floats *this)

{
  this->_padding_ = (longlong)&___7UMassTestProcessor_Floats__6B_;
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// ConfigureQueries @ 14711b580

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestProcessor_Floats::ConfigureQueries
          (UMassTestProcessor_Floats *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&this->_padding_,ReadWrite,All);
  return;
}

// GetPrivateStaticClass @ 147121380

UClass * __cdecl UMassTestProcessor_Floats::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessor_Floats.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessor_Floats",
               &Z_Registration_Info_UClass_UMassTestProcessor_Floats.InnerSingleton,
               StaticRegisterNativesUMassTestProcessor_Floats,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessor_Floats>,
               InternalVTableHelperCtorCaller<UMassTestProcessor_Floats>,local_res8,
               UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessor_Floats.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessor_Floats @ 1471abba0

void __cdecl UMassTestProcessor_Floats::StaticRegisterNativesUMassTestProcessor_Floats(void)

{
  return;
}

