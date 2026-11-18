// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 147068340

UClass * __cdecl UMassTestParallelSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestParallelSubsystem",
               &Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestParallelSubsystem,0x40,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestParallelSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestParallelSubsystem>,local_res8,
               UMassSubsystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton;
}

// UMassTestParallelSubsystem @ 1470f5de0

UMassTestParallelSubsystem * __thiscall
UMassTestParallelSubsystem::UMassTestParallelSubsystem
          (UMassTestParallelSubsystem *this,FVTableHelper *param_1)

{
  UMassSubsystemBase::UMassSubsystemBase((UMassSubsystemBase *)this,param_1);
  *(undefined ***)this = &___7UMassTestParallelSubsystem__6B_;
  return this;
}

// UMassTestParallelSubsystem @ 1470f5e10

UMassTestParallelSubsystem * __thiscall
UMassTestParallelSubsystem::UMassTestParallelSubsystem(UMassTestParallelSubsystem *this)

{
  UMassSubsystemBase::UMassSubsystemBase((UMassSubsystemBase *)this);
  *(undefined ***)this = &___7UMassTestParallelSubsystem__6B_;
  return this;
}

// ~UMassTestParallelSubsystem @ 1470f8ce0

void __thiscall
UMassTestParallelSubsystem::~UMassTestParallelSubsystem(UMassTestParallelSubsystem *this)

{
  *(undefined ***)this = &___7UMassTestParallelSubsystem__6B_;
  UMassSubsystemBase::~UMassSubsystemBase((UMassSubsystemBase *)this);
  return;
}

// GetPrivateStaticClass @ 147120b40

UClass * __cdecl UMassTestParallelSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestParallelSubsystem",
               &Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestParallelSubsystem,0x40,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestParallelSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestParallelSubsystem>,local_res8,
               UMassSubsystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton;
}

// StaticRegisterNativesUMassTestParallelSubsystem @ 1471abaf0

void __cdecl UMassTestParallelSubsystem::StaticRegisterNativesUMassTestParallelSubsystem(void)

{
  return;
}

