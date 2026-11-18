// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// <lambda_invoker_cdecl> @ 1471b9540

UClass * __cdecl
FMassExternalSubsystemBitSetStructTrackerWrapper::<lambda_44>::<lambda_invoker_cdecl>(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Subsystem",&Z_Registration_Info_UClass_USubsystem.InnerSingleton,
               USubsystem::StaticRegisterNativesUSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USubsystem>,
               InternalVTableHelperCtorCaller<USubsystem>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsystem.InnerSingleton;
}

