// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 2

// GetGeometryGatheringMode @ 145ee3650

ENavDataGatheringMode __thiscall AStaticMeshActor::GetGeometryGatheringMode(AStaticMeshActor *this)

{
  return Default;
}

// StaticClass @ 145eecef0

UClass * __cdecl AStaticMeshActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshActor",
               &Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton,
               StaticRegisterNativesAStaticMeshActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AStaticMeshActor>,
               InternalVTableHelperCtorCaller<AStaticMeshActor>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton;
}

