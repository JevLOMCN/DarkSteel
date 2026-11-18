// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4efdd0

UClass * __cdecl UDS_ModelEventBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventBase",
               &Z_Registration_Info_UClass_UDS_ModelEventBase.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventBase,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventBase>,
               InternalVTableHelperCtorCaller<UDS_ModelEventBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventBase.InnerSingleton;
}

// UDS_ModelEventBase @ 14b4f15f0

UDS_ModelEventBase * __thiscall
UDS_ModelEventBase::UDS_ModelEventBase(UDS_ModelEventBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventBase__6B_;
  (this->Model).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->EventData).DataMap = 0;
  *(undefined8 *)&(this->EventData).DataMap.field_0x8 = 0;
  *(undefined8 *)&(this->EventData).DataMap.field_0x20 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x28 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventData).DataMap.field_0x34 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventData).DataMap.field_0x40 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x48 = 0;
  *(undefined8 *)&(this->EventData).ListDataMap = 0;
  *(undefined8 *)&(this->EventData).ListDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->EventData).ListDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventData).ListDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x48 = 0;
  return this;
}

// UDS_ModelEventBase @ 14b4f1690

UDS_ModelEventBase * __thiscall
UDS_ModelEventBase::UDS_ModelEventBase(UDS_ModelEventBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventBase__6B_;
  (this->Model).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->EventData).DataMap = 0;
  *(undefined8 *)&(this->EventData).DataMap.field_0x8 = 0;
  *(undefined8 *)&(this->EventData).DataMap.field_0x20 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x28 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventData).DataMap.field_0x34 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventData).DataMap.field_0x40 = 0;
  *(undefined4 *)&(this->EventData).DataMap.field_0x48 = 0;
  *(undefined8 *)&(this->EventData).ListDataMap = 0;
  *(undefined8 *)&(this->EventData).ListDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->EventData).ListDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventData).ListDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x48 = 0;
  return this;
}

// ~UDS_ModelEventBase @ 14b4f1a10

void __thiscall UDS_ModelEventBase::~UDS_ModelEventBase(UDS_ModelEventBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ModelEventBase__6B_;
  *(undefined4 *)&(this->EventData).ListDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventData).ListDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->EventData).ListDataMap);
  *(undefined4 *)&(this->EventData).DataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventData).DataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventData);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f2480

UClass * __cdecl UDS_ModelEventBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventBase",
               &Z_Registration_Info_UClass_UDS_ModelEventBase.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventBase,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventBase>,
               InternalVTableHelperCtorCaller<UDS_ModelEventBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventBase.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventBase @ 14b4f2750

void __cdecl UDS_ModelEventBase::StaticRegisterNativesUDS_ModelEventBase(void)

{
  return;
}

