// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aaa370

UClass * __cdecl UWorldPartitionEditorHash::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorHash",
               &Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionEditorHash,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionEditorHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorHash>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton;
}

// UWorldPartitionEditorHash @ 148ab5180

UWorldPartitionEditorHash * __thiscall
UWorldPartitionEditorHash::UWorldPartitionEditorHash
          (UWorldPartitionEditorHash *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionEditorHash__6B_;
  return this;
}

// UWorldPartitionEditorHash @ 148ab51b0

UWorldPartitionEditorHash * __thiscall
UWorldPartitionEditorHash::UWorldPartitionEditorHash
          (UWorldPartitionEditorHash *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionEditorHash__6B_;
  return this;
}

// ~UWorldPartitionEditorHash @ 148ab73e0

void __thiscall
UWorldPartitionEditorHash::~UWorldPartitionEditorHash(UWorldPartitionEditorHash *this)

{
  *(undefined ***)this = &___7UWorldPartitionEditorHash__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148acf130

UClass * __cdecl UWorldPartitionEditorHash::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorHash",
               &Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionEditorHash,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionEditorHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorHash>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionEditorHash @ 148adb830

void __cdecl UWorldPartitionEditorHash::StaticRegisterNativesUWorldPartitionEditorHash(void)

{
  return;
}

