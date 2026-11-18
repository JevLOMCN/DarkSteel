// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticStruct @ 14b4ab800

UScriptStruct * __cdecl FDS_HistoryData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_HistoryData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_HistoryData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_HistoryData,(UObject *)pUVar1,
                         L"DS_HistoryData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_HistoryData.OuterSingleton;
}

// FDS_HistoryData @ 14b4b15a0

FDS_HistoryData * __thiscall FDS_HistoryData::FDS_HistoryData(FDS_HistoryData *this)

{
  this->DataType = None;
  *(undefined8 *)&this->HistoryObjectMap = 0;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x48 = 0;
  *(undefined8 *)&this->HistoryStringMap = 0;
  *(undefined8 *)&(this->HistoryStringMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryStringMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryStringMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryStringMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryStringMap).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryStringMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryStringMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryStringMap).field_0x48 = 0;
  *(undefined8 *)&this->HistoryInt32Map = 0;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x48 = 0;
  *(undefined8 *)&this->HistoryUInt32Map = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x48 = 0;
  *(undefined8 *)&this->HistoryInt64Map = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x48 = 0;
  *(undefined8 *)&this->HistoryUInt64Map = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x48 = 0;
  *(undefined8 *)&this->HistoryFloatMap = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x48 = 0;
  *(undefined8 *)&this->HistoryBoolMap = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x48 = 0;
  return this;
}

// ~FDS_HistoryData @ 14b4b3170

void __thiscall FDS_HistoryData::~FDS_HistoryData(FDS_HistoryData *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->HistoryBoolMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryBoolMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryBoolMap);
  *(undefined4 *)&(this->HistoryFloatMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryFloatMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryFloatMap);
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryUInt64Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryUInt64Map);
  *(undefined4 *)&(this->HistoryInt64Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryInt64Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryInt64Map);
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryUInt32Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryUInt32Map);
  *(undefined4 *)&(this->HistoryInt32Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryInt32Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryInt32Map);
  *(undefined4 *)&(this->HistoryStringMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryStringMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryStringMap);
  *(undefined4 *)&(this->HistoryObjectMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryObjectMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryObjectMap);
  return;
}

// operator= @ 14b4b3d90

FDS_HistoryData * __thiscall
FDS_HistoryData::operator=(FDS_HistoryData *this,FDS_HistoryData *param_1)

{
  TMap<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_01;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *this_02;
  TMap<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_> *this_03;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *this_04;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_05;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this_06;
  int iVar3;
  
  this_00 = &this->HistoryObjectMap;
  this->DataType = param_1->DataType;
  if (this_00 != &param_1->HistoryObjectMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->HistoryObjectMap).field_0x38,
               (int *)&(this->HistoryObjectMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->HistoryObjectMap).field_0x38,
               *(int *)&(param_1->HistoryObjectMap).field_0x48);
    iVar3 = *(int *)&(param_1->HistoryObjectMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar3,(ForAnyElementType *)this_00,(int *)&(this->HistoryObjectMap).field_0x8,
               (int *)&(this->HistoryObjectMap).field_0xc);
    puVar1 = &(param_1->HistoryObjectMap).field_0x10;
    puVar2 = &(this->HistoryObjectMap).field_0x10;
    *(undefined4 *)&(this->HistoryObjectMap).field_0x30 =
         *(undefined4 *)&(param_1->HistoryObjectMap).field_0x30;
    *(undefined4 *)&(this->HistoryObjectMap).field_0x34 =
         *(undefined4 *)&(param_1->HistoryObjectMap).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->HistoryObjectMap,(longlong)iVar3 * 0x18);
    }
  }
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->HistoryStringMap,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->HistoryStringMap);
  this_01 = &this->HistoryInt32Map;
  if (this_01 != &param_1->HistoryInt32Map) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->HistoryInt32Map).field_0x38,
               (int *)&(this->HistoryInt32Map).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->HistoryInt32Map).field_0x38,
               *(int *)&(param_1->HistoryInt32Map).field_0x48);
    iVar3 = *(int *)&(param_1->HistoryInt32Map).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,(ForAnyElementType *)this_01,(int *)&(this->HistoryInt32Map).field_0x8,
               (int *)&(this->HistoryInt32Map).field_0xc);
    puVar1 = &(param_1->HistoryInt32Map).field_0x10;
    puVar2 = &(this->HistoryInt32Map).field_0x10;
    *(undefined4 *)&(this->HistoryInt32Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryInt32Map).field_0x30;
    *(undefined4 *)&(this->HistoryInt32Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryInt32Map).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->HistoryInt32Map,(longlong)iVar3 * 0x14);
    }
  }
  this_02 = &this->HistoryUInt32Map;
  if (this_02 != &param_1->HistoryUInt32Map) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->HistoryUInt32Map).field_0x38,
               (int *)&(this->HistoryUInt32Map).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->HistoryUInt32Map).field_0x38,
               *(int *)&(param_1->HistoryUInt32Map).field_0x48);
    iVar3 = *(int *)&(param_1->HistoryUInt32Map).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_02,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,(ForAnyElementType *)this_02,(int *)&(this->HistoryUInt32Map).field_0x8,
               (int *)&(this->HistoryUInt32Map).field_0xc);
    puVar1 = &(param_1->HistoryUInt32Map).field_0x10;
    puVar2 = &(this->HistoryUInt32Map).field_0x10;
    *(undefined4 *)&(this->HistoryUInt32Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x30;
    *(undefined4 *)&(this->HistoryUInt32Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_02,*(void **)&param_1->HistoryUInt32Map,(longlong)iVar3 * 0x14);
    }
  }
  this_03 = &this->HistoryInt64Map;
  if (this_03 != &param_1->HistoryInt64Map) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->HistoryInt64Map).field_0x38,
               (int *)&(this->HistoryInt64Map).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->HistoryInt64Map).field_0x38,
               *(int *)&(param_1->HistoryInt64Map).field_0x48);
    iVar3 = *(int *)&(param_1->HistoryInt64Map).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_03,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,(ForAnyElementType *)this_03,(int *)&(this->HistoryInt64Map).field_0x8,
               (int *)&(this->HistoryInt64Map).field_0xc);
    puVar1 = &(param_1->HistoryInt64Map).field_0x10;
    puVar2 = &(this->HistoryInt64Map).field_0x10;
    *(undefined4 *)&(this->HistoryInt64Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryInt64Map).field_0x30;
    *(undefined4 *)&(this->HistoryInt64Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryInt64Map).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_03,*(void **)&param_1->HistoryInt64Map,(longlong)iVar3 * 0x18);
    }
  }
  this_04 = &this->HistoryUInt64Map;
  if (this_04 != &param_1->HistoryUInt64Map) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->HistoryUInt64Map).field_0x38,
               (int *)&(this->HistoryUInt64Map).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->HistoryUInt64Map).field_0x38,
               *(int *)&(param_1->HistoryUInt64Map).field_0x48);
    iVar3 = *(int *)&(param_1->HistoryUInt64Map).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_04,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,(ForAnyElementType *)this_04,(int *)&(this->HistoryUInt64Map).field_0x8,
               (int *)&(this->HistoryUInt64Map).field_0xc);
    puVar1 = &(param_1->HistoryUInt64Map).field_0x10;
    puVar2 = &(this->HistoryUInt64Map).field_0x10;
    *(undefined4 *)&(this->HistoryUInt64Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x30;
    *(undefined4 *)&(this->HistoryUInt64Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_04,*(void **)&param_1->HistoryUInt64Map,(longlong)iVar3 * 0x18);
    }
  }
  this_05 = &this->HistoryFloatMap;
  if (this_05 != &param_1->HistoryFloatMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->HistoryFloatMap).field_0x38,
               (int *)&(this->HistoryFloatMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->HistoryFloatMap).field_0x38,
               *(int *)&(param_1->HistoryFloatMap).field_0x48);
    iVar3 = *(int *)&(param_1->HistoryFloatMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_05,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,(ForAnyElementType *)this_05,(int *)&(this->HistoryFloatMap).field_0x8,
               (int *)&(this->HistoryFloatMap).field_0xc);
    puVar1 = &(param_1->HistoryFloatMap).field_0x10;
    puVar2 = &(this->HistoryFloatMap).field_0x10;
    *(undefined4 *)&(this->HistoryFloatMap).field_0x30 =
         *(undefined4 *)&(param_1->HistoryFloatMap).field_0x30;
    *(undefined4 *)&(this->HistoryFloatMap).field_0x34 =
         *(undefined4 *)&(param_1->HistoryFloatMap).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_05,*(void **)&param_1->HistoryFloatMap,(longlong)iVar3 * 0x14);
    }
  }
  this_06 = &this->HistoryBoolMap;
  if (this_06 != &param_1->HistoryBoolMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->HistoryBoolMap).field_0x38,
               (int *)&(this->HistoryBoolMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->HistoryBoolMap).field_0x38,
               *(int *)&(param_1->HistoryBoolMap).field_0x48);
    iVar3 = *(int *)&(param_1->HistoryBoolMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_06,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,(ForAnyElementType *)this_06,(int *)&(this->HistoryBoolMap).field_0x8,
               (int *)&(this->HistoryBoolMap).field_0xc);
    puVar1 = &(param_1->HistoryBoolMap).field_0x10;
    puVar2 = &(this->HistoryBoolMap).field_0x10;
    *(undefined4 *)&(this->HistoryBoolMap).field_0x30 =
         *(undefined4 *)&(param_1->HistoryBoolMap).field_0x30;
    *(undefined4 *)&(this->HistoryBoolMap).field_0x34 =
         *(undefined4 *)&(param_1->HistoryBoolMap).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_06,*(void **)&param_1->HistoryBoolMap,(longlong)iVar3 * 0x14);
    }
  }
  return this;
}

// FDS_HistoryData @ 14b8b1600

FDS_HistoryData * __thiscall
FDS_HistoryData::FDS_HistoryData(FDS_HistoryData *this,FDS_HistoryData *param_1)

{
  this->DataType = param_1->DataType;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x48 = 0;
  TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)&this->HistoryObjectMap,
              (TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)&param_1->HistoryObjectMap);
  *(undefined8 *)&(this->HistoryStringMap).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryStringMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryStringMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryStringMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryStringMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryStringMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryStringMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryStringMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryStringMap).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->HistoryStringMap,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->HistoryStringMap);
  *(undefined8 *)&(this->HistoryInt32Map).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x48 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->HistoryInt32Map,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&param_1->HistoryInt32Map);
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x48 = 0;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
               *)&this->HistoryUInt32Map,
              (TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
               *)&param_1->HistoryUInt32Map);
  *(undefined8 *)&(this->HistoryInt64Map).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x48 = 0;
  TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
             *)&this->HistoryInt64Map,
            (TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
             *)&param_1->HistoryInt64Map);
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x48 = 0;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&this->HistoryUInt64Map,
              (TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
               *)&param_1->HistoryUInt64Map);
  *(undefined8 *)&(this->HistoryFloatMap).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)&this->HistoryFloatMap,
            (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)&param_1->HistoryFloatMap);
  *(undefined8 *)&(this->HistoryBoolMap).field_0x0 = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x48 = 0;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
              *)&this->HistoryBoolMap,
             (TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
              *)&param_1->HistoryBoolMap);
  return this;
}

// FDS_HistoryData @ 14baec8c0

FDS_HistoryData * __thiscall
FDS_HistoryData::FDS_HistoryData(FDS_HistoryData *this,FDS_HistoryData *param_1)

{
  TMap<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *pTVar1;
  TMap<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *pTVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar5;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar6;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *pTVar7;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *pTVar8;
  TMap<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_> *pTVar9;
  TMap<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_> *pTVar10;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *pTVar11;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *pTVar12;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar13;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar14;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *pTVar15;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *pTVar16;
  void *pvVar17;
  
  pTVar1 = &this->HistoryObjectMap;
  this->DataType = param_1->DataType;
  *(undefined8 *)pTVar1 = 0;
  pTVar2 = &param_1->HistoryObjectMap;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    puVar3 = &(param_1->HistoryObjectMap).field_0x10;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    puVar4 = &(this->HistoryObjectMap).field_0x10;
    *(undefined8 *)pTVar2 = 0;
    *(undefined4 *)&(this->HistoryObjectMap).field_0x8 =
         *(undefined4 *)&(param_1->HistoryObjectMap).field_0x8;
    *(undefined4 *)&(this->HistoryObjectMap).field_0xc =
         *(undefined4 *)&(param_1->HistoryObjectMap).field_0xc;
    *(undefined8 *)&(param_1->HistoryObjectMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->HistoryObjectMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar17 = *(void **)&(this->HistoryObjectMap).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->HistoryObjectMap).field_0x20 =
           *(undefined8 *)&(param_1->HistoryObjectMap).field_0x20;
      *(undefined8 *)&(param_1->HistoryObjectMap).field_0x20 = 0;
      *(undefined4 *)&(this->HistoryObjectMap).field_0x28 =
           *(undefined4 *)&(param_1->HistoryObjectMap).field_0x28;
      *(undefined4 *)&(this->HistoryObjectMap).field_0x2c =
           *(undefined4 *)&(param_1->HistoryObjectMap).field_0x2c;
      *(undefined8 *)&(param_1->HistoryObjectMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HistoryObjectMap).field_0x30 =
         *(undefined4 *)&(param_1->HistoryObjectMap).field_0x30;
    *(undefined4 *)&(this->HistoryObjectMap).field_0x34 =
         *(undefined4 *)&(param_1->HistoryObjectMap).field_0x34;
    *(undefined4 *)&(param_1->HistoryObjectMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HistoryObjectMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->HistoryObjectMap).field_0x40 == 0) {
    *(undefined4 *)&(this->HistoryObjectMap).field_0x38 =
         *(undefined4 *)&(param_1->HistoryObjectMap).field_0x38;
  }
  pvVar17 = *(void **)&(this->HistoryObjectMap).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->HistoryObjectMap).field_0x40 =
       *(undefined8 *)&(param_1->HistoryObjectMap).field_0x40;
  *(undefined8 *)&(param_1->HistoryObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryObjectMap).field_0x48 =
       *(undefined4 *)&(param_1->HistoryObjectMap).field_0x48;
  *(undefined4 *)&(param_1->HistoryObjectMap).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->HistoryStringMap,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&param_1->HistoryStringMap);
  pTVar5 = &this->HistoryInt32Map;
  *(undefined8 *)pTVar5 = 0;
  pTVar6 = &param_1->HistoryInt32Map;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x48 = 0;
  if (pTVar5 != pTVar6) {
    puVar3 = &(param_1->HistoryInt32Map).field_0x10;
    *(undefined8 *)pTVar5 = *(undefined8 *)pTVar6;
    puVar4 = &(this->HistoryInt32Map).field_0x10;
    *(undefined8 *)pTVar6 = 0;
    *(undefined4 *)&(this->HistoryInt32Map).field_0x8 =
         *(undefined4 *)&(param_1->HistoryInt32Map).field_0x8;
    *(undefined4 *)&(this->HistoryInt32Map).field_0xc =
         *(undefined4 *)&(param_1->HistoryInt32Map).field_0xc;
    *(undefined8 *)&(param_1->HistoryInt32Map).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->HistoryInt32Map).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar17 = *(void **)&(this->HistoryInt32Map).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->HistoryInt32Map).field_0x20 =
           *(undefined8 *)&(param_1->HistoryInt32Map).field_0x20;
      *(undefined8 *)&(param_1->HistoryInt32Map).field_0x20 = 0;
      *(undefined4 *)&(this->HistoryInt32Map).field_0x28 =
           *(undefined4 *)&(param_1->HistoryInt32Map).field_0x28;
      *(undefined4 *)&(this->HistoryInt32Map).field_0x2c =
           *(undefined4 *)&(param_1->HistoryInt32Map).field_0x2c;
      *(undefined8 *)&(param_1->HistoryInt32Map).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HistoryInt32Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryInt32Map).field_0x30;
    *(undefined4 *)&(this->HistoryInt32Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryInt32Map).field_0x34;
    *(undefined4 *)&(param_1->HistoryInt32Map).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HistoryInt32Map).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->HistoryInt32Map).field_0x40 == 0) {
    *(undefined4 *)&(this->HistoryInt32Map).field_0x38 =
         *(undefined4 *)&(param_1->HistoryInt32Map).field_0x38;
  }
  pvVar17 = *(void **)&(this->HistoryInt32Map).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->HistoryInt32Map).field_0x40 =
       *(undefined8 *)&(param_1->HistoryInt32Map).field_0x40;
  *(undefined8 *)&(param_1->HistoryInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt32Map).field_0x48 =
       *(undefined4 *)&(param_1->HistoryInt32Map).field_0x48;
  pTVar7 = &this->HistoryUInt32Map;
  *(undefined4 *)&(param_1->HistoryInt32Map).field_0x48 = 0;
  pTVar8 = &param_1->HistoryUInt32Map;
  *(undefined8 *)pTVar7 = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x48 = 0;
  if (pTVar7 != pTVar8) {
    puVar3 = &(param_1->HistoryUInt32Map).field_0x10;
    *(undefined8 *)pTVar7 = *(undefined8 *)pTVar8;
    puVar4 = &(this->HistoryUInt32Map).field_0x10;
    *(undefined8 *)pTVar8 = 0;
    *(undefined4 *)&(this->HistoryUInt32Map).field_0x8 =
         *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x8;
    *(undefined4 *)&(this->HistoryUInt32Map).field_0xc =
         *(undefined4 *)&(param_1->HistoryUInt32Map).field_0xc;
    *(undefined8 *)&(param_1->HistoryUInt32Map).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->HistoryUInt32Map).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar17 = *(void **)&(this->HistoryUInt32Map).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->HistoryUInt32Map).field_0x20 =
           *(undefined8 *)&(param_1->HistoryUInt32Map).field_0x20;
      *(undefined8 *)&(param_1->HistoryUInt32Map).field_0x20 = 0;
      *(undefined4 *)&(this->HistoryUInt32Map).field_0x28 =
           *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x28;
      *(undefined4 *)&(this->HistoryUInt32Map).field_0x2c =
           *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x2c;
      *(undefined8 *)&(param_1->HistoryUInt32Map).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HistoryUInt32Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x30;
    *(undefined4 *)&(this->HistoryUInt32Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x34;
    *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->HistoryUInt32Map).field_0x40 == 0) {
    *(undefined4 *)&(this->HistoryUInt32Map).field_0x38 =
         *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x38;
  }
  pvVar17 = *(void **)&(this->HistoryUInt32Map).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->HistoryUInt32Map).field_0x40 =
       *(undefined8 *)&(param_1->HistoryUInt32Map).field_0x40;
  *(undefined8 *)&(param_1->HistoryUInt32Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt32Map).field_0x48 =
       *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x48;
  pTVar9 = &this->HistoryInt64Map;
  *(undefined4 *)&(param_1->HistoryUInt32Map).field_0x48 = 0;
  pTVar10 = &param_1->HistoryInt64Map;
  *(undefined8 *)pTVar9 = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x48 = 0;
  if (pTVar9 != pTVar10) {
    puVar3 = &(param_1->HistoryInt64Map).field_0x10;
    *(undefined8 *)pTVar9 = *(undefined8 *)pTVar10;
    puVar4 = &(this->HistoryInt64Map).field_0x10;
    *(undefined8 *)pTVar10 = 0;
    *(undefined4 *)&(this->HistoryInt64Map).field_0x8 =
         *(undefined4 *)&(param_1->HistoryInt64Map).field_0x8;
    *(undefined4 *)&(this->HistoryInt64Map).field_0xc =
         *(undefined4 *)&(param_1->HistoryInt64Map).field_0xc;
    *(undefined8 *)&(param_1->HistoryInt64Map).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->HistoryInt64Map).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar17 = *(void **)&(this->HistoryInt64Map).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->HistoryInt64Map).field_0x20 =
           *(undefined8 *)&(param_1->HistoryInt64Map).field_0x20;
      *(undefined8 *)&(param_1->HistoryInt64Map).field_0x20 = 0;
      *(undefined4 *)&(this->HistoryInt64Map).field_0x28 =
           *(undefined4 *)&(param_1->HistoryInt64Map).field_0x28;
      *(undefined4 *)&(this->HistoryInt64Map).field_0x2c =
           *(undefined4 *)&(param_1->HistoryInt64Map).field_0x2c;
      *(undefined8 *)&(param_1->HistoryInt64Map).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HistoryInt64Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryInt64Map).field_0x30;
    *(undefined4 *)&(this->HistoryInt64Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryInt64Map).field_0x34;
    *(undefined4 *)&(param_1->HistoryInt64Map).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HistoryInt64Map).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->HistoryInt64Map).field_0x40 == 0) {
    *(undefined4 *)&(this->HistoryInt64Map).field_0x38 =
         *(undefined4 *)&(param_1->HistoryInt64Map).field_0x38;
  }
  pvVar17 = *(void **)&(this->HistoryInt64Map).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->HistoryInt64Map).field_0x40 =
       *(undefined8 *)&(param_1->HistoryInt64Map).field_0x40;
  *(undefined8 *)&(param_1->HistoryInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryInt64Map).field_0x48 =
       *(undefined4 *)&(param_1->HistoryInt64Map).field_0x48;
  pTVar11 = &this->HistoryUInt64Map;
  *(undefined4 *)&(param_1->HistoryInt64Map).field_0x48 = 0;
  pTVar12 = &param_1->HistoryUInt64Map;
  *(undefined8 *)pTVar11 = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x48 = 0;
  if (pTVar11 != pTVar12) {
    puVar3 = &(param_1->HistoryUInt64Map).field_0x10;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar12;
    puVar4 = &(this->HistoryUInt64Map).field_0x10;
    *(undefined8 *)pTVar12 = 0;
    *(undefined4 *)&(this->HistoryUInt64Map).field_0x8 =
         *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x8;
    *(undefined4 *)&(this->HistoryUInt64Map).field_0xc =
         *(undefined4 *)&(param_1->HistoryUInt64Map).field_0xc;
    *(undefined8 *)&(param_1->HistoryUInt64Map).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->HistoryUInt64Map).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar17 = *(void **)&(this->HistoryUInt64Map).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->HistoryUInt64Map).field_0x20 =
           *(undefined8 *)&(param_1->HistoryUInt64Map).field_0x20;
      *(undefined8 *)&(param_1->HistoryUInt64Map).field_0x20 = 0;
      *(undefined4 *)&(this->HistoryUInt64Map).field_0x28 =
           *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x28;
      *(undefined4 *)&(this->HistoryUInt64Map).field_0x2c =
           *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x2c;
      *(undefined8 *)&(param_1->HistoryUInt64Map).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HistoryUInt64Map).field_0x30 =
         *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x30;
    *(undefined4 *)&(this->HistoryUInt64Map).field_0x34 =
         *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x34;
    *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->HistoryUInt64Map).field_0x40 == 0) {
    *(undefined4 *)&(this->HistoryUInt64Map).field_0x38 =
         *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x38;
  }
  pvVar17 = *(void **)&(this->HistoryUInt64Map).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->HistoryUInt64Map).field_0x40 =
       *(undefined8 *)&(param_1->HistoryUInt64Map).field_0x40;
  *(undefined8 *)&(param_1->HistoryUInt64Map).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryUInt64Map).field_0x48 =
       *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x48;
  pTVar13 = &this->HistoryFloatMap;
  *(undefined4 *)&(param_1->HistoryUInt64Map).field_0x48 = 0;
  pTVar14 = &param_1->HistoryFloatMap;
  *(undefined8 *)pTVar13 = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryFloatMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x48 = 0;
  if (pTVar13 != pTVar14) {
    puVar3 = &(param_1->HistoryFloatMap).field_0x10;
    *(undefined8 *)pTVar13 = *(undefined8 *)pTVar14;
    puVar4 = &(this->HistoryFloatMap).field_0x10;
    *(undefined8 *)pTVar14 = 0;
    *(undefined4 *)&(this->HistoryFloatMap).field_0x8 =
         *(undefined4 *)&(param_1->HistoryFloatMap).field_0x8;
    *(undefined4 *)&(this->HistoryFloatMap).field_0xc =
         *(undefined4 *)&(param_1->HistoryFloatMap).field_0xc;
    *(undefined8 *)&(param_1->HistoryFloatMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->HistoryFloatMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar17 = *(void **)&(this->HistoryFloatMap).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->HistoryFloatMap).field_0x20 =
           *(undefined8 *)&(param_1->HistoryFloatMap).field_0x20;
      *(undefined8 *)&(param_1->HistoryFloatMap).field_0x20 = 0;
      *(undefined4 *)&(this->HistoryFloatMap).field_0x28 =
           *(undefined4 *)&(param_1->HistoryFloatMap).field_0x28;
      *(undefined4 *)&(this->HistoryFloatMap).field_0x2c =
           *(undefined4 *)&(param_1->HistoryFloatMap).field_0x2c;
      *(undefined8 *)&(param_1->HistoryFloatMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HistoryFloatMap).field_0x30 =
         *(undefined4 *)&(param_1->HistoryFloatMap).field_0x30;
    *(undefined4 *)&(this->HistoryFloatMap).field_0x34 =
         *(undefined4 *)&(param_1->HistoryFloatMap).field_0x34;
    *(undefined4 *)&(param_1->HistoryFloatMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HistoryFloatMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->HistoryFloatMap).field_0x40 == 0) {
    *(undefined4 *)&(this->HistoryFloatMap).field_0x38 =
         *(undefined4 *)&(param_1->HistoryFloatMap).field_0x38;
  }
  pvVar17 = *(void **)&(this->HistoryFloatMap).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->HistoryFloatMap).field_0x40 =
       *(undefined8 *)&(param_1->HistoryFloatMap).field_0x40;
  *(undefined8 *)&(param_1->HistoryFloatMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryFloatMap).field_0x48 =
       *(undefined4 *)&(param_1->HistoryFloatMap).field_0x48;
  pTVar15 = &this->HistoryBoolMap;
  *(undefined4 *)&(param_1->HistoryFloatMap).field_0x48 = 0;
  pTVar16 = &param_1->HistoryBoolMap;
  *(undefined8 *)pTVar15 = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryBoolMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x48 = 0;
  if (pTVar15 != pTVar16) {
    puVar3 = &(param_1->HistoryBoolMap).field_0x10;
    *(undefined8 *)pTVar15 = *(undefined8 *)pTVar16;
    puVar4 = &(this->HistoryBoolMap).field_0x10;
    *(undefined8 *)pTVar16 = 0;
    *(undefined4 *)&(this->HistoryBoolMap).field_0x8 =
         *(undefined4 *)&(param_1->HistoryBoolMap).field_0x8;
    *(undefined4 *)&(this->HistoryBoolMap).field_0xc =
         *(undefined4 *)&(param_1->HistoryBoolMap).field_0xc;
    *(undefined8 *)&(param_1->HistoryBoolMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->HistoryBoolMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar17 = *(void **)&(this->HistoryBoolMap).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->HistoryBoolMap).field_0x20 =
           *(undefined8 *)&(param_1->HistoryBoolMap).field_0x20;
      *(undefined8 *)&(param_1->HistoryBoolMap).field_0x20 = 0;
      *(undefined4 *)&(this->HistoryBoolMap).field_0x28 =
           *(undefined4 *)&(param_1->HistoryBoolMap).field_0x28;
      *(undefined4 *)&(this->HistoryBoolMap).field_0x2c =
           *(undefined4 *)&(param_1->HistoryBoolMap).field_0x2c;
      *(undefined8 *)&(param_1->HistoryBoolMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HistoryBoolMap).field_0x30 =
         *(undefined4 *)&(param_1->HistoryBoolMap).field_0x30;
    *(undefined4 *)&(this->HistoryBoolMap).field_0x34 =
         *(undefined4 *)&(param_1->HistoryBoolMap).field_0x34;
    *(undefined4 *)&(param_1->HistoryBoolMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HistoryBoolMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->HistoryBoolMap).field_0x40 == 0) {
    *(undefined4 *)&(this->HistoryBoolMap).field_0x38 =
         *(undefined4 *)&(param_1->HistoryBoolMap).field_0x38;
  }
  pvVar17 = *(void **)&(this->HistoryBoolMap).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->HistoryBoolMap).field_0x40 =
       *(undefined8 *)&(param_1->HistoryBoolMap).field_0x40;
  *(undefined8 *)&(param_1->HistoryBoolMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryBoolMap).field_0x48 =
       *(undefined4 *)&(param_1->HistoryBoolMap).field_0x48;
  *(undefined4 *)&(param_1->HistoryBoolMap).field_0x48 = 0;
  return this;
}

// FindBool @ 14bb08550

bool __thiscall FDS_HistoryData::FindBool(FDS_HistoryData *this,FName *param_1)

{
  TTuple<FName,bool> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                 *)&this->HistoryBoolMap,*param_1);
  if (pTVar1 != (TTuple<FName,bool> *)0x0) {
    return (bool)pTVar1->field_0x8;
  }
  return false;
}

// FindFloat @ 14bb094c0

float __thiscall FDS_HistoryData::FindFloat(FDS_HistoryData *this,FName *param_1)

{
  TTuple<FName,float> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)&this->HistoryFloatMap,*param_1);
  if (pTVar1 != (TTuple<FName,float> *)0x0) {
    return *(float *)&pTVar1->field_0x8;
  }
  return 0.0;
}

// FindInt32 @ 14bb094f0

int __thiscall FDS_HistoryData::FindInt32(FDS_HistoryData *this,FName *param_1)

{
  TTuple<FName,int> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->HistoryInt32Map,*param_1);
  if (pTVar1 != (TTuple<FName,int> *)0x0) {
    return *(int *)&pTVar1->field_0x8;
  }
  return 0;
}

// FindInt64 @ 14bb09520

long64 __thiscall FDS_HistoryData::FindInt64(FDS_HistoryData *this,FName *param_1)

{
  TTuple<FName,__int64> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
                   *)&this->HistoryInt64Map,*param_1);
  if (pTVar1 != (TTuple<FName,__int64> *)0x0) {
    return *(long64 *)&pTVar1->field_0x8;
  }
  return 0;
}

// FindObject @ 14bb09550

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
FDS_HistoryData::FindObject(FDS_HistoryData *this,FName *param_1)

{
  undefined4 uVar1;
  TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *pTVar2;
  FName *in_R8;
  
  pTVar2 = TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)&this->HistoryObjectMap,*in_R8);
  if (pTVar2 != (TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)0x0) {
    uVar1 = *(undefined4 *)&pTVar2->field_0xc;
    param_1->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar2->field_0x8;
    param_1->Number = uVar1;
    return (TWeakObjectPtr<UObject,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// FindString @ 14bb09590

FString * __thiscall
FDS_HistoryData::FindString(FDS_HistoryData *this,FString *__return_storage_ptr__,FName *param_1)

{
  TTuple<FName,FString> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)&this->HistoryStringMap,*param_1);
  if (pTVar1 != (TTuple<FName,FString> *)0x0) {
    ::FString::FString(__return_storage_ptr__,(FString *)&pTVar1->field_0x8);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindUInt32 @ 14bb095e0

int __thiscall FDS_HistoryData::FindUInt32(FDS_HistoryData *this,FName *param_1)

{
  TTuple<FName,unsigned_int> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                   *)&this->HistoryUInt32Map,*param_1);
  if (pTVar1 != (TTuple<FName,unsigned_int> *)0x0) {
    return *(int *)&pTVar1->field_0x8;
  }
  return 0;
}

// FindUInt64 @ 14bb09610

long64 __thiscall FDS_HistoryData::FindUInt64(FDS_HistoryData *this,FName *param_1)

{
  TTuple<FName,unsigned___int64> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                   *)&this->HistoryUInt64Map,*param_1);
  if (pTVar1 != (TTuple<FName,unsigned___int64> *)0x0) {
    return *(long64 *)&pTVar1->field_0x8;
  }
  return 0;
}

