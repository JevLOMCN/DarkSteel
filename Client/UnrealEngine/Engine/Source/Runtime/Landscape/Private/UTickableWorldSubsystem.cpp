// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticClass @ 145fc8510

UClass * __cdecl UTickableWorldSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTickableWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TickableWorldSubsystem",
               &Z_Registration_Info_UClass_UTickableWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUTickableWorldSubsystem,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableWorldSubsystem>,
               InternalVTableHelperCtorCaller<UTickableWorldSubsystem>,aFStackX_8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableWorldSubsystem.InnerSingleton;
}

