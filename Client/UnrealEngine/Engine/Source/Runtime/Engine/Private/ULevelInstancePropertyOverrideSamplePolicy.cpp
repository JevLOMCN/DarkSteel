// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 147e44090

UClass * __cdecl ULevelInstancePropertyOverrideSamplePolicy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideSamplePolicy",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton
               ,StaticRegisterNativesULevelInstancePropertyOverrideSamplePolicy,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstancePropertyOverrideSamplePolicy>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideSamplePolicy>,local_res8
               ,ULevelInstancePropertyOverridePolicy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton;
}

// ULevelInstancePropertyOverrideSamplePolicy @ 147e55a50

ULevelInstancePropertyOverrideSamplePolicy * __thiscall
ULevelInstancePropertyOverrideSamplePolicy::ULevelInstancePropertyOverrideSamplePolicy
          (ULevelInstancePropertyOverrideSamplePolicy *this,FVTableHelper *param_1)

{
  UWorldPartitionPropertyOverridePolicy::UWorldPartitionPropertyOverridePolicy
            ((UWorldPartitionPropertyOverridePolicy *)this,param_1);
  *(undefined ***)this = &___7ULevelInstancePropertyOverrideSamplePolicy__6B_;
  return this;
}

// ~ULevelInstancePropertyOverrideSamplePolicy @ 147e57b20

void __thiscall
ULevelInstancePropertyOverrideSamplePolicy::~ULevelInstancePropertyOverrideSamplePolicy
          (ULevelInstancePropertyOverrideSamplePolicy *this)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147e69f80

UClass * __cdecl ULevelInstancePropertyOverrideSamplePolicy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideSamplePolicy",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton
               ,StaticRegisterNativesULevelInstancePropertyOverrideSamplePolicy,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstancePropertyOverrideSamplePolicy>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideSamplePolicy>,local_res8
               ,ULevelInstancePropertyOverridePolicy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton;
}

// StaticRegisterNativesULevelInstancePropertyOverrideSamplePolicy @ 147e82330

void __cdecl
ULevelInstancePropertyOverrideSamplePolicy::
StaticRegisterNativesULevelInstancePropertyOverrideSamplePolicy(void)

{
  return;
}

