// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// ConfigureQueries @ 14711b3e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassProcessor::ConfigureQueries(UMassProcessor *this)

{
  return;
}

// StaticClass @ 1471aba30

UClass * __cdecl UMassProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassProcessor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassProcessor",
               &Z_Registration_Info_UClass_UMassProcessor.InnerSingleton,
               StaticRegisterNativesUMassProcessor,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Mass",InternalConstructor<UMassProcessor>,
               InternalVTableHelperCtorCaller<UMassProcessor>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassProcessor.InnerSingleton;
}

