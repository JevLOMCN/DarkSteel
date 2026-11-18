// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// StaticClass @ 146a96750

UClass * __cdecl UBlueprintGeneratedClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUBlueprintGeneratedClass,0x370,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UBlueprintGeneratedClass>,aFStackX_8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton;
}

