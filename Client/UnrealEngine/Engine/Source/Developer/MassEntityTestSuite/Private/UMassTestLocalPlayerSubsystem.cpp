// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// StaticClass @ 14706b720

UClass * __cdecl UMassTestLocalPlayerSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestLocalPlayerSubsystem",
               &Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestLocalPlayerSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMassTestLocalPlayerSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestLocalPlayerSubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton;
}

// UMassTestLocalPlayerSubsystem @ 1470f5d80

UMassTestLocalPlayerSubsystem * __thiscall
UMassTestLocalPlayerSubsystem::UMassTestLocalPlayerSubsystem
          (UMassTestLocalPlayerSubsystem *this,FVTableHelper *param_1)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this,param_1);
  *(undefined ***)this = &___7UMassTestLocalPlayerSubsystem__6B_;
  return this;
}

// UMassTestLocalPlayerSubsystem @ 1470f5db0

UMassTestLocalPlayerSubsystem * __thiscall
UMassTestLocalPlayerSubsystem::UMassTestLocalPlayerSubsystem(UMassTestLocalPlayerSubsystem *this)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  *(undefined ***)this = &___7UMassTestLocalPlayerSubsystem__6B_;
  return this;
}

// ~UMassTestLocalPlayerSubsystem @ 1470f8cc0

void __thiscall
UMassTestLocalPlayerSubsystem::~UMassTestLocalPlayerSubsystem(UMassTestLocalPlayerSubsystem *this)

{
  *(undefined ***)this = &___7UMassTestLocalPlayerSubsystem__6B_;
  ULocalPlayerSubsystem::~ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 147120a80

UClass * __cdecl UMassTestLocalPlayerSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestLocalPlayerSubsystem",
               &Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestLocalPlayerSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMassTestLocalPlayerSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestLocalPlayerSubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton;
}

// StaticRegisterNativesUMassTestLocalPlayerSubsystem @ 1471abae0

void __cdecl UMassTestLocalPlayerSubsystem::StaticRegisterNativesUMassTestLocalPlayerSubsystem(void)

{
  return;
}

