// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticClass @ 1471ab9f0

UClass * __cdecl UGameInstanceSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGameInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameInstanceSubsystem",
               &Z_Registration_Info_UClass_UGameInstanceSubsystem.InnerSingleton,
               StaticRegisterNativesUGameInstanceSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UGameInstanceSubsystem>,
               InternalVTableHelperCtorCaller<UGameInstanceSubsystem>,aFStackX_8,
               USubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameInstanceSubsystem.InnerSingleton;
}

