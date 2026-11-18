// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticClass @ 1471aba40

UClass * __cdecl UMassSubsystemBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassSubsystemBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassSubsystemBase",
               &Z_Registration_Info_UClass_UMassSubsystemBase.InnerSingleton,
               StaticRegisterNativesUMassSubsystemBase,0x40,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassSubsystemBase>,
               InternalVTableHelperCtorCaller<UMassSubsystemBase>,aFStackX_8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassSubsystemBase.InnerSingleton;
}

