// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 14707e710

UClass * __cdecl UFarmProcessorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmProcessorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmProcessorBase",
               &Z_Registration_Info_UClass_UFarmProcessorBase.InnerSingleton,
               StaticRegisterNativesUFarmProcessorBase,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Mass",InternalConstructor<UFarmProcessorBase>,
               InternalVTableHelperCtorCaller<UFarmProcessorBase>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmProcessorBase.InnerSingleton;
}

// UFarmProcessorBase @ 1470f5bb0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmProcessorBase * __thiscall
UFarmProcessorBase::UFarmProcessorBase(UFarmProcessorBase *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery);
  return this;
}

// UFarmProcessorBase @ 1470f5bf0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmProcessorBase * __thiscall UFarmProcessorBase::UFarmProcessorBase(UFarmProcessorBase *this)

{
  byte *pbVar1;
  
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  this->_padding_ = (longlong)&___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery,(UMassProcessor *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  return this;
}

// ~UFarmProcessorBase @ 1470f8c00

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UFarmProcessorBase::~UFarmProcessorBase(UFarmProcessorBase *this)

{
  this->_padding_ = (longlong)&___7UFarmProcessorBase__6B_;
  FMassEntityQuery::~FMassEntityQuery(&this->EntityQuery);
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// GetPrivateStaticClass @ 147120780

UClass * __cdecl UFarmProcessorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmProcessorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmProcessorBase",
               &Z_Registration_Info_UClass_UFarmProcessorBase.InnerSingleton,
               StaticRegisterNativesUFarmProcessorBase,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Mass",InternalConstructor<UFarmProcessorBase>,
               InternalVTableHelperCtorCaller<UFarmProcessorBase>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmProcessorBase.InnerSingleton;
}

// StaticRegisterNativesUFarmProcessorBase @ 1471abaa0

void __cdecl UFarmProcessorBase::StaticRegisterNativesUFarmProcessorBase(void)

{
  return;
}

