// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 147e42a70

UClass * __cdecl ULevelInstancePropertyOverrideAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideAsset",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton,
               StaticRegisterNativesULevelInstancePropertyOverrideAsset,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstancePropertyOverrideAsset>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideAsset>,local_res8,
               UWorldPartitionPropertyOverride::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton;
}

// ULevelInstancePropertyOverrideAsset @ 147e559f0

ULevelInstancePropertyOverrideAsset * __thiscall
ULevelInstancePropertyOverrideAsset::ULevelInstancePropertyOverrideAsset
          (ULevelInstancePropertyOverrideAsset *this,FVTableHelper *param_1)

{
  UWorldPartitionPropertyOverride::UWorldPartitionPropertyOverride
            ((UWorldPartitionPropertyOverride *)this,param_1);
  *(undefined ***)this = &___7ULevelInstancePropertyOverrideAsset__6B_;
  return this;
}

// ~ULevelInstancePropertyOverrideAsset @ 147e57ae0

void __thiscall
ULevelInstancePropertyOverrideAsset::~ULevelInstancePropertyOverrideAsset
          (ULevelInstancePropertyOverrideAsset *this)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverride__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147e69e00

UClass * __cdecl ULevelInstancePropertyOverrideAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideAsset",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton,
               StaticRegisterNativesULevelInstancePropertyOverrideAsset,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstancePropertyOverrideAsset>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideAsset>,local_res8,
               UWorldPartitionPropertyOverride::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton;
}

// StaticRegisterNativesULevelInstancePropertyOverrideAsset @ 147e82310

void __cdecl
ULevelInstancePropertyOverrideAsset::StaticRegisterNativesULevelInstancePropertyOverrideAsset(void)

{
  return;
}

