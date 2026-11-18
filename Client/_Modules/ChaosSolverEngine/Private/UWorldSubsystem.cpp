// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// StaticClass @ 146320150

UClass * __cdecl UWorldSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldSubsystem",
               &Z_Registration_Info_UClass_UWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldSubsystem,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldSubsystem>,
               InternalVTableHelperCtorCaller<UWorldSubsystem>,aFStackX_8,USubsystem::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldSubsystem.InnerSingleton;
}

