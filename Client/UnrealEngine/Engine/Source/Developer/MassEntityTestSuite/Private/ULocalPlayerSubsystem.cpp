// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticClass @ 1471aba10

UClass * __cdecl ULocalPlayerSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULocalPlayerSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalPlayerSubsystem",
               &Z_Registration_Info_UClass_ULocalPlayerSubsystem.InnerSingleton,
               StaticRegisterNativesULocalPlayerSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocalPlayerSubsystem>,
               InternalVTableHelperCtorCaller<ULocalPlayerSubsystem>,aFStackX_8,
               USubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalPlayerSubsystem.InnerSingleton;
}

