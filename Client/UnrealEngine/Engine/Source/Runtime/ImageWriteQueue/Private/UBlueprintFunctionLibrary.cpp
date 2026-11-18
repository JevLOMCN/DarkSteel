// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 1

// StaticClass @ 1446efd00

UClass * __cdecl UBlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintFunctionLibrary>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton;
}

