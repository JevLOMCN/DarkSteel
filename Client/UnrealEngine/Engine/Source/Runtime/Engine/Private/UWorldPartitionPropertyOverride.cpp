// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~UWorldPartitionPropertyOverride @ 147e57e60

void __thiscall
UWorldPartitionPropertyOverride::~UWorldPartitionPropertyOverride
          (UWorldPartitionPropertyOverride *this)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverride__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// StaticClass @ 147e82150

UClass * __cdecl UWorldPartitionPropertyOverride::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionPropertyOverride",
               &Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton,
               StaticRegisterNativesUWorldPartitionPropertyOverride,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionPropertyOverride>,
               InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverride>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton;
}

// UWorldPartitionPropertyOverride @ 148ab5580

UWorldPartitionPropertyOverride * __thiscall
UWorldPartitionPropertyOverride::UWorldPartitionPropertyOverride
          (UWorldPartitionPropertyOverride *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionPropertyOverride__6B_;
  return this;
}

// GetPrivateStaticClass @ 148acf4f0

UClass * __cdecl UWorldPartitionPropertyOverride::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionPropertyOverride",
               &Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton,
               StaticRegisterNativesUWorldPartitionPropertyOverride,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionPropertyOverride>,
               InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverride>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionPropertyOverride @ 148adb880

void __cdecl
UWorldPartitionPropertyOverride::StaticRegisterNativesUWorldPartitionPropertyOverride(void)

{
  return;
}

