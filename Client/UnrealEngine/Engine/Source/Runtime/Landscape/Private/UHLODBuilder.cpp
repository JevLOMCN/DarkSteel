// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticClass @ 145fa3fd0

UClass * __cdecl UHLODBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODBuilder",
               &Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton,
               StaticRegisterNativesUHLODBuilder,0x28,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Editor",InternalConstructor<UHLODBuilder>,
               InternalVTableHelperCtorCaller<UHLODBuilder>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton;
}

