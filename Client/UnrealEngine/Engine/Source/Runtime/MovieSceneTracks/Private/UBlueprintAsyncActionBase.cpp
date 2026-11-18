// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// StaticClass @ 14686ca10

UClass * __cdecl UBlueprintAsyncActionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintAsyncActionBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintAsyncActionBase",
               &Z_Registration_Info_UClass_UBlueprintAsyncActionBase.InnerSingleton,
               StaticRegisterNativesUBlueprintAsyncActionBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintAsyncActionBase>,
               InternalVTableHelperCtorCaller<UBlueprintAsyncActionBase>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintAsyncActionBase.InnerSingleton;
}

