// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b46cec0

UClass * __cdecl UDS_ContentArguments::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentArguments.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentArguments",
               &Z_Registration_Info_UClass_UDS_ContentArguments.InnerSingleton,
               StaticRegisterNativesUDS_ContentArguments,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentArguments>,
               InternalVTableHelperCtorCaller<UDS_ContentArguments>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentArguments.InnerSingleton;
}

// UDS_ContentArguments @ 14b4714f0

UDS_ContentArguments * __thiscall
UDS_ContentArguments::UDS_ContentArguments(UDS_ContentArguments *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentArguments__6B_;
  *(undefined8 *)&this->StringMap = 0;
  *(undefined8 *)&(this->StringMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringMap).field_0x20 = 0;
  *(undefined4 *)&(this->StringMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringMap).field_0x34 = 0;
  *(undefined4 *)&(this->StringMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringMap).field_0x48 = 0;
  *(undefined8 *)&this->Int32Map = 0;
  *(undefined8 *)&(this->Int32Map).field_0x8 = 0;
  *(undefined8 *)&(this->Int32Map).field_0x20 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x28 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Int32Map).field_0x34 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Int32Map).field_0x40 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x48 = 0;
  *(undefined8 *)&this->UInt32Map = 0;
  *(undefined8 *)&(this->UInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->UInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->UInt32Map).field_0x34 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x48 = 0;
  *(undefined8 *)&this->Int64Map = 0;
  *(undefined8 *)&(this->Int64Map).field_0x8 = 0;
  *(undefined8 *)&(this->Int64Map).field_0x20 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x28 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Int64Map).field_0x34 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Int64Map).field_0x40 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x48 = 0;
  *(undefined8 *)&this->UInt64Map = 0;
  *(undefined8 *)&(this->UInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->UInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->UInt64Map).field_0x34 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x48 = 0;
  *(undefined8 *)&this->FloatMap = 0;
  *(undefined8 *)&(this->FloatMap).field_0x8 = 0;
  *(undefined8 *)&(this->FloatMap).field_0x20 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x28 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FloatMap).field_0x34 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FloatMap).field_0x40 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x48 = 0;
  *(undefined8 *)&this->BoolMap = 0;
  *(undefined8 *)&(this->BoolMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoolMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoolMap).field_0x34 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoolMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x48 = 0;
  *(undefined8 *)&this->ObjectMap = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x48 = 0;
  return this;
}

// UDS_ContentArguments @ 14b471710

UDS_ContentArguments * __thiscall
UDS_ContentArguments::UDS_ContentArguments(UDS_ContentArguments *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentArguments__6B_;
  *(undefined8 *)&this->StringMap = 0;
  *(undefined8 *)&(this->StringMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringMap).field_0x20 = 0;
  *(undefined4 *)&(this->StringMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringMap).field_0x34 = 0;
  *(undefined4 *)&(this->StringMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringMap).field_0x48 = 0;
  *(undefined8 *)&this->Int32Map = 0;
  *(undefined8 *)&(this->Int32Map).field_0x8 = 0;
  *(undefined8 *)&(this->Int32Map).field_0x20 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x28 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Int32Map).field_0x34 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Int32Map).field_0x40 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x48 = 0;
  *(undefined8 *)&this->UInt32Map = 0;
  *(undefined8 *)&(this->UInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->UInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->UInt32Map).field_0x34 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->UInt32Map).field_0x48 = 0;
  *(undefined8 *)&this->Int64Map = 0;
  *(undefined8 *)&(this->Int64Map).field_0x8 = 0;
  *(undefined8 *)&(this->Int64Map).field_0x20 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x28 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Int64Map).field_0x34 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Int64Map).field_0x40 = 0;
  *(undefined4 *)&(this->Int64Map).field_0x48 = 0;
  *(undefined8 *)&this->UInt64Map = 0;
  *(undefined8 *)&(this->UInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->UInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->UInt64Map).field_0x34 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->UInt64Map).field_0x48 = 0;
  *(undefined8 *)&this->FloatMap = 0;
  *(undefined8 *)&(this->FloatMap).field_0x8 = 0;
  *(undefined8 *)&(this->FloatMap).field_0x20 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x28 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FloatMap).field_0x34 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FloatMap).field_0x40 = 0;
  *(undefined4 *)&(this->FloatMap).field_0x48 = 0;
  *(undefined8 *)&this->BoolMap = 0;
  *(undefined8 *)&(this->BoolMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoolMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoolMap).field_0x34 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoolMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoolMap).field_0x48 = 0;
  *(undefined8 *)&this->ObjectMap = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x48 = 0;
  return this;
}

// ~UDS_ContentArguments @ 14b472b70

void __thiscall UDS_ContentArguments::~UDS_ContentArguments(UDS_ContentArguments *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ContentArguments__6B_;
  *(undefined4 *)&(this->ObjectMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectMap);
  *(undefined4 *)&(this->BoolMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoolMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoolMap);
  *(undefined4 *)&(this->FloatMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FloatMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatMap);
  *(undefined4 *)&(this->UInt64Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UInt64Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UInt64Map);
  *(undefined4 *)&(this->Int64Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Int64Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Int64Map);
  *(undefined4 *)&(this->UInt32Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UInt32Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UInt32Map);
  *(undefined4 *)&(this->Int32Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Int32Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Int32Map);
  *(undefined4 *)&(this->StringMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StringMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b476480

UClass * __cdecl UDS_ContentArguments::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentArguments.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentArguments",
               &Z_Registration_Info_UClass_UDS_ContentArguments.InnerSingleton,
               StaticRegisterNativesUDS_ContentArguments,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentArguments>,
               InternalVTableHelperCtorCaller<UDS_ContentArguments>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentArguments.InnerSingleton;
}

// StaticRegisterNativesUDS_ContentArguments @ 14b476ee0

void __cdecl UDS_ContentArguments::StaticRegisterNativesUDS_ContentArguments(void)

{
  return;
}

// __VTableCtorCaller @ 14b478be0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_ContentArguments::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_ContentArguments__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0xc = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0xc = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0xc = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xc) = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0xc].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0xc = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xe) = 0;
    *(undefined4 *)&pUVar1[0xe].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0xe].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xe].field_0xc = 0;
    *(undefined8 *)&pUVar1[0xe].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xe].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xf) = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0x10) = 0;
    *(undefined4 *)&pUVar1[0x10].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0x10].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0x10].field_0xc = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0x10].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// AddInt32 @ 14b7da310

UDS_ContentArguments * __thiscall
UDS_ContentArguments::AddInt32(UDS_ContentArguments *this,FName *param_1,int *param_2)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  FName *local_28;
  int *local_20;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Int32Map).field_0x8 != *(int *)&(this->Int32Map).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Int32Map).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Int32Map).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->Int32Map).field_0x48 - 1U & FVar1.Number + uVar2) * 4
                    );
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->Int32Map + (longlong)iVar3 * 0x14) == FVar1) {
          return this;
        }
        iVar3 = *(int *)(*(longlong *)&this->Int32Map + 0xc + (longlong)iVar3 * 0x14);
      } while (iVar3 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->Int32Map,(TPairInitializer<FName_const_&,int_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  return this;
}

// AddUInt64 @ 14b7da750

UDS_ContentArguments * __thiscall
UDS_ContentArguments::AddUInt64(UDS_ContentArguments *this,FName *param_1,ulong64 *param_2)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName *local_28;
  ulong64 *local_20;
  
  FVar1 = *param_1;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->UInt64Map).field_0x8 != *(int *)&(this->UInt64Map).field_0x34) {
    puVar5 = *(undefined1 **)&(this->UInt64Map).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->UInt64Map).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->UInt64Map).field_0x48 - 1U & FVar1.Number + uVar3) *
                              4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->UInt64Map).field_0x0;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned___int64_const_&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->UInt64Map,
             (TPairInitializer<FName_const_&,unsigned___int64_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  return this;
}

