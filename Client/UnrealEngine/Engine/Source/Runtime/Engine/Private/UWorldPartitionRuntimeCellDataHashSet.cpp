// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a71f50

UClass * __cdecl UWorldPartitionRuntimeCellDataHashSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellDataHashSet",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellDataHashSet,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeCellDataHashSet>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataHashSet>,local_res8,
               UWorldPartitionRuntimeCellData::StaticClass,UWorldPartitionRuntimeCell::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton;
}

// UWorldPartitionRuntimeCellDataHashSet @ 148a80860

UWorldPartitionRuntimeCellDataHashSet * __thiscall
UWorldPartitionRuntimeCellDataHashSet::UWorldPartitionRuntimeCellDataHashSet
          (UWorldPartitionRuntimeCellDataHashSet *this,FVTableHelper *param_1)

{
  UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData
            ((UWorldPartitionRuntimeCellData *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataHashSet__6B_;
  return this;
}

// UWorldPartitionRuntimeCellDataHashSet @ 148a80890

UWorldPartitionRuntimeCellDataHashSet * __thiscall
UWorldPartitionRuntimeCellDataHashSet::UWorldPartitionRuntimeCellDataHashSet
          (UWorldPartitionRuntimeCellDataHashSet *this,FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData
            ((UWorldPartitionRuntimeCellData *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataHashSet__6B_;
  return this;
}

// ~UWorldPartitionRuntimeCellDataHashSet @ 148a81e40

void __thiscall
UWorldPartitionRuntimeCellDataHashSet::~UWorldPartitionRuntimeCellDataHashSet
          (UWorldPartitionRuntimeCellDataHashSet *this)

{
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a96c90

UClass * __cdecl UWorldPartitionRuntimeCellDataHashSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellDataHashSet",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellDataHashSet,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeCellDataHashSet>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataHashSet>,local_res8,
               UWorldPartitionRuntimeCellData::StaticClass,UWorldPartitionRuntimeCell::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionRuntimeCellDataHashSet @ 148aa2ae0

void __cdecl
UWorldPartitionRuntimeCellDataHashSet::StaticRegisterNativesUWorldPartitionRuntimeCellDataHashSet
          (void)

{
  return;
}

