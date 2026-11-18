// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticClass @ 1471aba20

UClass * __cdecl UMassCompositeProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassCompositeProcessor",
               &Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton,
               StaticRegisterNativesUMassCompositeProcessor,0x128,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassCompositeProcessor>,
               InternalVTableHelperCtorCaller<UMassCompositeProcessor>,aFStackX_8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton;
}

