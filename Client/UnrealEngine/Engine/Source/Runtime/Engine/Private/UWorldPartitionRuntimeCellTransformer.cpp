// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aaa950

UClass * __cdecl UWorldPartitionRuntimeCellTransformer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformer",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformer,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformer>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton;
}

// UWorldPartitionRuntimeCellTransformer @ 148ab5910

UWorldPartitionRuntimeCellTransformer * __thiscall
UWorldPartitionRuntimeCellTransformer::UWorldPartitionRuntimeCellTransformer
          (UWorldPartitionRuntimeCellTransformer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnabled = true;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellTransformer__6B_;
  return this;
}

// UWorldPartitionRuntimeCellTransformer @ 148ab5940

UWorldPartitionRuntimeCellTransformer * __thiscall
UWorldPartitionRuntimeCellTransformer::UWorldPartitionRuntimeCellTransformer
          (UWorldPartitionRuntimeCellTransformer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnabled = true;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellTransformer__6B_;
  return this;
}

// ~UWorldPartitionRuntimeCellTransformer @ 148ab7600

void __thiscall
UWorldPartitionRuntimeCellTransformer::~UWorldPartitionRuntimeCellTransformer
          (UWorldPartitionRuntimeCellTransformer *this)

{
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellTransformer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148acf870

UClass * __cdecl UWorldPartitionRuntimeCellTransformer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformer",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformer,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformer>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionRuntimeCellTransformer @ 148adb8d0

void __cdecl
UWorldPartitionRuntimeCellTransformer::StaticRegisterNativesUWorldPartitionRuntimeCellTransformer
          (void)

{
  return;
}

