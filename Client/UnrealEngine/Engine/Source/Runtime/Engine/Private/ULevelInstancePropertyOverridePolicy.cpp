// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 147e41be0

UClass * __cdecl ULevelInstancePropertyOverridePolicy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverridePolicy",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton,
               StaticRegisterNativesULevelInstancePropertyOverridePolicy,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstancePropertyOverridePolicy>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverridePolicy>,local_res8,
               UWorldPartitionPropertyOverridePolicy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton;
}

// ULevelInstancePropertyOverridePolicy @ 147e55a20

ULevelInstancePropertyOverridePolicy * __thiscall
ULevelInstancePropertyOverridePolicy::ULevelInstancePropertyOverridePolicy
          (ULevelInstancePropertyOverridePolicy *this,FVTableHelper *param_1)

{
  UWorldPartitionPropertyOverridePolicy::UWorldPartitionPropertyOverridePolicy
            ((UWorldPartitionPropertyOverridePolicy *)this,param_1);
  *(undefined ***)this = &___7ULevelInstancePropertyOverridePolicy__6B_;
  return this;
}

// ~ULevelInstancePropertyOverridePolicy @ 147e57b00

void __thiscall
ULevelInstancePropertyOverridePolicy::~ULevelInstancePropertyOverridePolicy
          (ULevelInstancePropertyOverridePolicy *this)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147e69ec0

UClass * __cdecl ULevelInstancePropertyOverridePolicy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverridePolicy",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton,
               StaticRegisterNativesULevelInstancePropertyOverridePolicy,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstancePropertyOverridePolicy>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverridePolicy>,local_res8,
               UWorldPartitionPropertyOverridePolicy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton;
}

// StaticRegisterNativesULevelInstancePropertyOverridePolicy @ 147e82320

void __cdecl
ULevelInstancePropertyOverridePolicy::StaticRegisterNativesULevelInstancePropertyOverridePolicy
          (void)

{
  return;
}

