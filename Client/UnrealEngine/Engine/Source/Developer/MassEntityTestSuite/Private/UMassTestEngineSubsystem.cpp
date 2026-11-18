// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 1470696f0

UClass * __cdecl UMassTestEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestEngineSubsystem",
               &Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestEngineSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMassTestEngineSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton;
}

// UMassTestEngineSubsystem @ 1470f5cc0

UMassTestEngineSubsystem * __thiscall
UMassTestEngineSubsystem::UMassTestEngineSubsystem
          (UMassTestEngineSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)this = &___7UMassTestEngineSubsystem__6B_;
  return this;
}

// UMassTestEngineSubsystem @ 1470f5cf0

UMassTestEngineSubsystem * __thiscall
UMassTestEngineSubsystem::UMassTestEngineSubsystem(UMassTestEngineSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined ***)this = &___7UMassTestEngineSubsystem__6B_;
  return this;
}

// ~UMassTestEngineSubsystem @ 1470f8c80

void __thiscall UMassTestEngineSubsystem::~UMassTestEngineSubsystem(UMassTestEngineSubsystem *this)

{
  *(undefined ***)this = &___7UMassTestEngineSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 147120900

UClass * __cdecl UMassTestEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestEngineSubsystem",
               &Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestEngineSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMassTestEngineSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton;
}

// StaticRegisterNativesUMassTestEngineSubsystem @ 1471abac0

void __cdecl UMassTestEngineSubsystem::StaticRegisterNativesUMassTestEngineSubsystem(void)

{
  return;
}

