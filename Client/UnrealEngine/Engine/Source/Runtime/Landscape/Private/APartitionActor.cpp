// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticClass @ 145fa3fc0

UClass * __cdecl APartitionActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_APartitionActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PartitionActor",
               &Z_Registration_Info_UClass_APartitionActor.InnerSingleton,
               StaticRegisterNativesAPartitionActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<APartitionActor>,InternalVTableHelperCtorCaller<APartitionActor>,
               aFStackX_8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartitionActor.InnerSingleton;
}

