// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// StaticClass @ 14646e4d0

UClass * __cdecl USkeletalMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshComponent",
               &Z_Registration_Info_UClass_USkeletalMeshComponent.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshComponent,0x1060,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_USkeletalMeshComponent,L"Engine",
               InternalConstructor<USkeletalMeshComponent>,
               InternalVTableHelperCtorCaller<USkeletalMeshComponent>,aFStackX_8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshComponent.InnerSingleton;
}

