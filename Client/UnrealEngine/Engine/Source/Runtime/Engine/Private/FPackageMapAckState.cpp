// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FPackageMapAckState @ 14808a470

FPackageMapAckState * __thiscall FPackageMapAckState::FPackageMapAckState(FPackageMapAckState *this)

{
  *(undefined8 *)&this->NetGUIDAckStatus = 0;
  *(undefined8 *)&(this->NetGUIDAckStatus).field_0x8 = 0;
  *(undefined8 *)&(this->NetGUIDAckStatus).field_0x20 = 0;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x28 = 0;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x34 = 0;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NetGUIDAckStatus).field_0x40 = 0;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x48 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupPathAcked).Elements = 0;
  *(undefined8 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x30 = 0xffffffff;
  (this->NetFieldExportGroupPathAcked).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NetFieldExportGroupPathAcked).HashSize = 0;
  *(undefined8 *)&(this->NetFieldExportAcked).Elements = 0;
  *(undefined8 *)&(this->NetFieldExportAcked).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NetFieldExportAcked).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x30 = 0xffffffff;
  (this->NetFieldExportAcked).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NetFieldExportAcked).HashSize = 0;
  return this;
}

// ~FPackageMapAckState @ 14808ef40

void __thiscall FPackageMapAckState::~FPackageMapAckState(FPackageMapAckState *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->NetFieldExportAcked).HashSize = 0;
  FVar1 = (this->NetFieldExportAcked).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NetFieldExportAcked).Elements);
  (this->NetFieldExportGroupPathAcked).HashSize = 0;
  FVar1 = (this->NetFieldExportGroupPathAcked).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NetFieldExportGroupPathAcked).Elements);
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NetGUIDAckStatus).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 14808feb0

FPackageMapAckState * __thiscall
FPackageMapAckState::operator=(FPackageMapAckState *this,FPackageMapAckState *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_01;
  int iVar3;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->NetGUIDAckStatus).field_0x38,
               (int *)&(this->NetGUIDAckStatus).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->NetGUIDAckStatus).field_0x38,
               *(int *)&(param_1->NetGUIDAckStatus).field_0x48);
    iVar3 = *(int *)&(param_1->NetGUIDAckStatus).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,(ForAnyElementType *)this,(int *)&(this->NetGUIDAckStatus).field_0x8,
               (int *)&(this->NetGUIDAckStatus).field_0xc);
    puVar1 = &(param_1->NetGUIDAckStatus).field_0x10;
    puVar2 = &(this->NetGUIDAckStatus).field_0x10;
    *(undefined4 *)&(this->NetGUIDAckStatus).field_0x30 =
         *(undefined4 *)&(param_1->NetGUIDAckStatus).field_0x30;
    *(undefined4 *)&(this->NetGUIDAckStatus).field_0x34 =
         *(undefined4 *)&(param_1->NetGUIDAckStatus).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)&this->NetGUIDAckStatus,*(void **)&param_1->NetGUIDAckStatus,
             (longlong)iVar3 * 0x18);
    }
  }
  this_00 = &this->NetFieldExportGroupPathAcked;
  if (this_00 != &param_1->NetFieldExportGroupPathAcked) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->NetFieldExportGroupPathAcked).Hash,
               &(this->NetFieldExportGroupPathAcked).HashSize,
               &(param_1->NetFieldExportGroupPathAcked).Hash,
               (param_1->NetFieldExportGroupPathAcked).HashSize);
    iVar3 = *(int *)&(param_1->NetFieldExportGroupPathAcked).Elements.field_0x8;
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,(ForAnyElementType *)this_00,
               (int *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x8,
               (int *)&(this->NetFieldExportGroupPathAcked).Elements.field_0xc);
    puVar1 = &(param_1->NetFieldExportGroupPathAcked).Elements.field_0x10;
    puVar2 = &(this->NetFieldExportGroupPathAcked).Elements.field_0x10;
    *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x30 =
         *(undefined4 *)&(param_1->NetFieldExportGroupPathAcked).Elements.field_0x30;
    *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x34 =
         *(undefined4 *)&(param_1->NetFieldExportGroupPathAcked).Elements.field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)&this_00->Elements,
             *(void **)&(param_1->NetFieldExportGroupPathAcked).Elements,(longlong)iVar3 * 0xc);
    }
  }
  this_01 = &this->NetFieldExportAcked;
  if (this_01 != &param_1->NetFieldExportAcked) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->NetFieldExportAcked).Hash,&(this->NetFieldExportAcked).HashSize,
               &(param_1->NetFieldExportAcked).Hash,(param_1->NetFieldExportAcked).HashSize);
    iVar3 = *(int *)&(param_1->NetFieldExportAcked).Elements.field_0x8;
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_01->Elements,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,(ForAnyElementType *)this_01,
               (int *)&(this->NetFieldExportAcked).Elements.field_0x8,
               (int *)&(this->NetFieldExportAcked).Elements.field_0xc);
    puVar1 = &(param_1->NetFieldExportAcked).Elements.field_0x10;
    puVar2 = &(this->NetFieldExportAcked).Elements.field_0x10;
    *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x30 =
         *(undefined4 *)&(param_1->NetFieldExportAcked).Elements.field_0x30;
    *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x34 =
         *(undefined4 *)&(param_1->NetFieldExportAcked).Elements.field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)&this_01->Elements,*(void **)&(param_1->NetFieldExportAcked).Elements,
             (longlong)iVar3 << 4);
    }
  }
  return this;
}

// CountBytes @ 14809c2b0

void __thiscall FPackageMapAckState::CountBytes(FPackageMapAckState *this,FArchive *param_1)

{
  longlong lVar1;
  
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x8 *
                     0xc,
             (longlong)*(int *)&(this->NetFieldExportGroupPathAcked).Elements.field_0xc * 0xc);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)
                     (*(int *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x28 + 0x1fU >> 5
                     ) << 2,
             (ulonglong)
             (*(int *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x2c + 0x1fU >> 5) << 2);
  lVar1 = (longlong)(this->NetFieldExportGroupPathAcked).HashSize << 2;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar1,lVar1);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::CountBytes
            (&this->NetFieldExportAcked,param_1);
  return;
}

// Reset @ 1480cc1d0

void __thiscall FPackageMapAckState::Reset(FPackageMapAckState *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  
  bVar3 = 1 < *(int *)&(this->NetGUIDAckStatus).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar1 = &(this->NetGUIDAckStatus).field_0xc;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x34 = 0;
  iVar2 = *(int *)&(this->NetGUIDAckStatus).field_0x2c;
  *(undefined4 *)&(this->NetGUIDAckStatus).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NetGUIDAckStatus).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NetGUIDAckStatus).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->NetGUIDAckStatus).field_0x48 = 1;
    TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar3 = 1 < (this->NetFieldExportGroupPathAcked).HashSize;
  if (!bVar3) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
              (&this->NetFieldExportGroupPathAcked);
  }
  puVar1 = &(this->NetFieldExportGroupPathAcked).Elements.field_0xc;
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->NetFieldExportGroupPathAcked,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x2c;
  *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NetFieldExportGroupPathAcked).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->NetFieldExportGroupPathAcked).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->NetFieldExportGroupPathAcked).HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
              (&this->NetFieldExportGroupPathAcked);
  }
  this_00 = &this->NetFieldExportAcked;
  bVar3 = 1 < (this->NetFieldExportAcked).HashSize;
  if (!bVar3) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::UnhashElements
              (this_00);
  }
  puVar1 = &(this->NetFieldExportAcked).Elements.field_0xc;
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->NetFieldExportAcked).Elements.field_0x2c;
  *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NetFieldExportAcked).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->NetFieldExportAcked).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->NetFieldExportAcked).HashSize = 1;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash(this_00)
    ;
  }
  return;
}

