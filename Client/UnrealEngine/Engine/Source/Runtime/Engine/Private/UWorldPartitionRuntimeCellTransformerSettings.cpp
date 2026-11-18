// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aaa8a0

UClass * __cdecl UWorldPartitionRuntimeCellTransformerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerSettings",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.
                InnerSingleton,StaticRegisterNativesUWorldPartitionRuntimeCellTransformerSettings,
               0x28,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.InnerSingleton;
}

// UWorldPartitionRuntimeCellTransformerSettings @ 148ab5c00

UWorldPartitionRuntimeCellTransformerSettings * __thiscall
UWorldPartitionRuntimeCellTransformerSettings::UWorldPartitionRuntimeCellTransformerSettings
          (UWorldPartitionRuntimeCellTransformerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerSettings__6B_;
  return this;
}

// UWorldPartitionRuntimeCellTransformerSettings @ 148ab5c30

UWorldPartitionRuntimeCellTransformerSettings * __thiscall
UWorldPartitionRuntimeCellTransformerSettings::UWorldPartitionRuntimeCellTransformerSettings
          (UWorldPartitionRuntimeCellTransformerSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerSettings__6B_;
  return this;
}

// ~UWorldPartitionRuntimeCellTransformerSettings @ 148ab7660

void __thiscall
UWorldPartitionRuntimeCellTransformerSettings::~UWorldPartitionRuntimeCellTransformerSettings
          (UWorldPartitionRuntimeCellTransformerSettings *this)

{
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148acfaa0

UClass * __cdecl UWorldPartitionRuntimeCellTransformerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerSettings",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.
                InnerSingleton,StaticRegisterNativesUWorldPartitionRuntimeCellTransformerSettings,
               0x28,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionRuntimeCellTransformerSettings @ 148adb900

void __cdecl
UWorldPartitionRuntimeCellTransformerSettings::
StaticRegisterNativesUWorldPartitionRuntimeCellTransformerSettings(void)

{
  return;
}

