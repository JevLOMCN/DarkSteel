// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 9

// StaticClass @ 1470cd190

UClass * __cdecl UMassTestStaticCounterProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestStaticCounterProcessor",
               &Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.InnerSingleton,
               StaticRegisterNativesUMassTestStaticCounterProcessor,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestStaticCounterProcessor>,
               InternalVTableHelperCtorCaller<UMassTestStaticCounterProcessor>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.InnerSingleton;
}

// UMassTestStaticCounterProcessor @ 1470f6790

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestStaticCounterProcessor * __thiscall
UMassTestStaticCounterProcessor::UMassTestStaticCounterProcessor
          (UMassTestStaticCounterProcessor *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UMassTestStaticCounterProcessor__6B_;
  return this;
}

// UMassTestStaticCounterProcessor @ 1470f67c0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestStaticCounterProcessor * __thiscall
UMassTestStaticCounterProcessor::UMassTestStaticCounterProcessor
          (UMassTestStaticCounterProcessor *this)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  *(undefined ***)this = &___7UMassTestStaticCounterProcessor__6B_;
  this->field_0x62 = this->field_0x62 & 0xfe;
  this->field_0x61 = 0x1f;
  return this;
}

// ~UMassTestStaticCounterProcessor @ 1470f8f60

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassTestStaticCounterProcessor::~UMassTestStaticCounterProcessor
          (UMassTestStaticCounterProcessor *this)

{
  *(undefined ***)this = &___7UMassTestStaticCounterProcessor__6B_;
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// ConfigureQueries @ 14711b660

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestStaticCounterProcessor::ConfigureQueries
          (UMassTestStaticCounterProcessor *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  return;
}

// Execute @ 14711e1f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestStaticCounterProcessor::Execute
          (UMassTestStaticCounterProcessor *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  StaticCounter = StaticCounter + 1;
  return;
}

// GetPrivateStaticClass @ 1471215c0

UClass * __cdecl UMassTestStaticCounterProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestStaticCounterProcessor",
               &Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.InnerSingleton,
               StaticRegisterNativesUMassTestStaticCounterProcessor,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestStaticCounterProcessor>,
               InternalVTableHelperCtorCaller<UMassTestStaticCounterProcessor>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.InnerSingleton;
}

// ShouldAllowQueryBasedPruning @ 1471ab6f0

bool __thiscall
UMassTestStaticCounterProcessor::ShouldAllowQueryBasedPruning
          (UMassTestStaticCounterProcessor *this,bool param_1)

{
  return false;
}

// StaticRegisterNativesUMassTestStaticCounterProcessor @ 1471abbd0

void __cdecl
UMassTestStaticCounterProcessor::StaticRegisterNativesUMassTestStaticCounterProcessor(void)

{
  return;
}

