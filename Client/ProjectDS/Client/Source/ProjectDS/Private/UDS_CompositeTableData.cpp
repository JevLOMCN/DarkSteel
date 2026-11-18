// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b761db0

UClass * __cdecl UDS_CompositeTableData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CompositeTableData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CompositeTableData",
               &Z_Registration_Info_UClass_UDS_CompositeTableData.InnerSingleton,
               StaticRegisterNativesUDS_CompositeTableData,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CompositeTableData>,
               InternalVTableHelperCtorCaller<UDS_CompositeTableData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CompositeTableData.InnerSingleton;
}

// UDS_CompositeTableData @ 14b764110

UDS_CompositeTableData * __thiscall
UDS_CompositeTableData::UDS_CompositeTableData(UDS_CompositeTableData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CompositeTableData__6B_;
  (this->CompositeTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  *(undefined8 *)&this->PathMap = 0;
  *(undefined8 *)&(this->PathMap).field_0x8 = 0;
  *(undefined8 *)&(this->PathMap).field_0x20 = 0;
  *(undefined4 *)&(this->PathMap).field_0x28 = 0;
  *(undefined4 *)&(this->PathMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathMap).field_0x34 = 0;
  *(undefined4 *)&(this->PathMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PathMap).field_0x40 = 0;
  *(undefined4 *)&(this->PathMap).field_0x48 = 0;
  return this;
}

// UDS_CompositeTableData @ 14b764170

UDS_CompositeTableData * __thiscall
UDS_CompositeTableData::UDS_CompositeTableData
          (UDS_CompositeTableData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CompositeTableData__6B_;
  (this->CompositeTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  *(undefined8 *)&this->PathMap = 0;
  *(undefined8 *)&(this->PathMap).field_0x8 = 0;
  *(undefined8 *)&(this->PathMap).field_0x20 = 0;
  *(undefined4 *)&(this->PathMap).field_0x28 = 0;
  *(undefined4 *)&(this->PathMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathMap).field_0x34 = 0;
  *(undefined4 *)&(this->PathMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PathMap).field_0x40 = 0;
  *(undefined4 *)&(this->PathMap).field_0x48 = 0;
  return this;
}

// ~UDS_CompositeTableData @ 14b765060

void __thiscall UDS_CompositeTableData::~UDS_CompositeTableData(UDS_CompositeTableData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CompositeTableData__6B_;
  *(undefined4 *)&(this->PathMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PathMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PathMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b766260

UClass * __cdecl UDS_CompositeTableData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CompositeTableData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CompositeTableData",
               &Z_Registration_Info_UClass_UDS_CompositeTableData.InnerSingleton,
               StaticRegisterNativesUDS_CompositeTableData,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CompositeTableData>,
               InternalVTableHelperCtorCaller<UDS_CompositeTableData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CompositeTableData.InnerSingleton;
}

// StaticRegisterNativesUDS_CompositeTableData @ 14b766cb0

void __cdecl UDS_CompositeTableData::StaticRegisterNativesUDS_CompositeTableData(void)

{
  return;
}

