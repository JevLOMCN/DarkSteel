// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticClass @ 145f5e6b0

UClass * __cdecl UEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineSubsystem",
               &Z_Registration_Info_UClass_UEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUEngineSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineSubsystem>,
               InternalVTableHelperCtorCaller<UEngineSubsystem>,aFStackX_8,
               UDynamicSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineSubsystem.InnerSingleton;
}

