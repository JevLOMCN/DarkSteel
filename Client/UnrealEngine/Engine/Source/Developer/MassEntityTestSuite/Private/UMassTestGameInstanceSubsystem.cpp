// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 14706e1c0

UClass * __cdecl UMassTestGameInstanceSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestGameInstanceSubsystem",
               &Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestGameInstanceSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMassTestGameInstanceSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestGameInstanceSubsystem>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton;
}

// UMassTestGameInstanceSubsystem @ 1470f5d20

UMassTestGameInstanceSubsystem * __thiscall
UMassTestGameInstanceSubsystem::UMassTestGameInstanceSubsystem
          (UMassTestGameInstanceSubsystem *this,FVTableHelper *param_1)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this,param_1);
  *(undefined ***)this = &___7UMassTestGameInstanceSubsystem__6B_;
  return this;
}

// UMassTestGameInstanceSubsystem @ 1470f5d50

UMassTestGameInstanceSubsystem * __thiscall
UMassTestGameInstanceSubsystem::UMassTestGameInstanceSubsystem(UMassTestGameInstanceSubsystem *this)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  *(undefined ***)this = &___7UMassTestGameInstanceSubsystem__6B_;
  return this;
}

// ~UMassTestGameInstanceSubsystem @ 1470f8ca0

void __thiscall
UMassTestGameInstanceSubsystem::~UMassTestGameInstanceSubsystem
          (UMassTestGameInstanceSubsystem *this)

{
  *(undefined ***)this = &___7UMassTestGameInstanceSubsystem__6B_;
  UGameInstanceSubsystem::~UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 1471209c0

UClass * __cdecl UMassTestGameInstanceSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestGameInstanceSubsystem",
               &Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestGameInstanceSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMassTestGameInstanceSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestGameInstanceSubsystem>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton;
}

// StaticRegisterNativesUMassTestGameInstanceSubsystem @ 1471abad0

void __cdecl
UMassTestGameInstanceSubsystem::StaticRegisterNativesUMassTestGameInstanceSubsystem(void)

{
  return;
}

