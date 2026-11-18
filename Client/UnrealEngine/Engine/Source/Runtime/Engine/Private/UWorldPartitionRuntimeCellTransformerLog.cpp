// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aa75a0

UClass * __cdecl UWorldPartitionRuntimeCellTransformerLog::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerLog",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformerLog,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerLog>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerLog>,local_res8,
               UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton;
}

// UWorldPartitionRuntimeCellTransformerLog @ 148ab5ba0

UWorldPartitionRuntimeCellTransformerLog * __thiscall
UWorldPartitionRuntimeCellTransformerLog::UWorldPartitionRuntimeCellTransformerLog
          (UWorldPartitionRuntimeCellTransformerLog *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 1;
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerLog__6B_;
  return this;
}

// UWorldPartitionRuntimeCellTransformerLog @ 148ab5bd0

UWorldPartitionRuntimeCellTransformerLog * __thiscall
UWorldPartitionRuntimeCellTransformerLog::UWorldPartitionRuntimeCellTransformerLog
          (UWorldPartitionRuntimeCellTransformerLog *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 1;
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerLog__6B_;
  return this;
}

// ~UWorldPartitionRuntimeCellTransformerLog @ 148ab7640

void __thiscall
UWorldPartitionRuntimeCellTransformerLog::~UWorldPartitionRuntimeCellTransformerLog
          (UWorldPartitionRuntimeCellTransformerLog *this)

{
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148acf9e0

UClass * __cdecl UWorldPartitionRuntimeCellTransformerLog::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerLog",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformerLog,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerLog>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerLog>,local_res8,
               UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionRuntimeCellTransformerLog @ 148adb8f0

void __cdecl
UWorldPartitionRuntimeCellTransformerLog::
StaticRegisterNativesUWorldPartitionRuntimeCellTransformerLog(void)

{
  return;
}

