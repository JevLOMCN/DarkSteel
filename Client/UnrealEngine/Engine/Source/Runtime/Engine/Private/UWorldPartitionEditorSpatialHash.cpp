// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 148aaaa80

UClass * __cdecl UWorldPartitionEditorSpatialHash::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionEditorSpatialHash,0x28,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionEditorSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorSpatialHash>,local_res8,
               UWorldPartitionEditorHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton;
}

// UWorldPartitionEditorSpatialHash @ 148ab5210

UWorldPartitionEditorSpatialHash * __thiscall
UWorldPartitionEditorSpatialHash::UWorldPartitionEditorSpatialHash
          (UWorldPartitionEditorSpatialHash *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionEditorSpatialHash__6B_;
  return this;
}

// UWorldPartitionEditorSpatialHash @ 148ab5240

UWorldPartitionEditorSpatialHash * __thiscall
UWorldPartitionEditorSpatialHash::UWorldPartitionEditorSpatialHash
          (UWorldPartitionEditorSpatialHash *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionEditorSpatialHash__6B_;
  return this;
}

// GetPrivateStaticClass @ 148acf2b0

UClass * __cdecl UWorldPartitionEditorSpatialHash::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionEditorSpatialHash,0x28,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionEditorSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorSpatialHash>,local_res8,
               UWorldPartitionEditorHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionEditorSpatialHash @ 148adb850

void __cdecl
UWorldPartitionEditorSpatialHash::StaticRegisterNativesUWorldPartitionEditorSpatialHash(void)

{
  return;
}

