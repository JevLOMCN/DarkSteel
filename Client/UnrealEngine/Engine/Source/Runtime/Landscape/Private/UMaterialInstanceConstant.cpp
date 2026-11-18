// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticClass @ 145ef5fc0

UClass * __cdecl UMaterialInstanceConstant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstanceConstant.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UMaterialInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceConstant",
               &Z_Registration_Info_UClass_UMaterialInstanceConstant.InnerSingleton,
               StaticRegisterNativesUMaterialInstanceConstant,0x2e8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMaterialInstanceConstant>,
               InternalVTableHelperCtorCaller<UMaterialInstanceConstant>,aFStackX_8,
               UMaterialInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstanceConstant.InnerSingleton;
}

