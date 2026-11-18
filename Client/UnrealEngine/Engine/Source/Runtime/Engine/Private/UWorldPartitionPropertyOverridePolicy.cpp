// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~UWorldPartitionPropertyOverridePolicy @ 147e57e80

void __thiscall
UWorldPartitionPropertyOverridePolicy::~UWorldPartitionPropertyOverridePolicy
          (UWorldPartitionPropertyOverridePolicy *this)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// StaticClass @ 147e82160

UClass * __cdecl UWorldPartitionPropertyOverridePolicy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionPropertyOverridePolicy",
               &Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton,
               StaticRegisterNativesUWorldPartitionPropertyOverridePolicy,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionPropertyOverridePolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverridePolicy>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton;
}

// UWorldPartitionPropertyOverridePolicy @ 148ab55b0

UWorldPartitionPropertyOverridePolicy * __thiscall
UWorldPartitionPropertyOverridePolicy::UWorldPartitionPropertyOverridePolicy
          (UWorldPartitionPropertyOverridePolicy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  return this;
}

// GetPrivateStaticClass @ 148acf5a0

UClass * __cdecl UWorldPartitionPropertyOverridePolicy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionPropertyOverridePolicy",
               &Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton,
               StaticRegisterNativesUWorldPartitionPropertyOverridePolicy,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionPropertyOverridePolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverridePolicy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionPropertyOverridePolicy @ 148adb890

void __cdecl
UWorldPartitionPropertyOverridePolicy::StaticRegisterNativesUWorldPartitionPropertyOverridePolicy
          (void)

{
  return;
}

