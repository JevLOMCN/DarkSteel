// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// FAssetPackageData @ 142ad4e10

FAssetPackageData * __thiscall
FAssetPackageData::FAssetPackageData(FAssetPackageData *this,FAssetPackageData *param_1)

{
  TMap<FIoChunkId,FIoHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>_>
  *pTVar1;
  TMap<FIoChunkId,FIoHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  undefined8 uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  int iVar12;
  undefined4 uVar13;
  
  uVar5 = (param_1->CookedHash).Bytes[0];
  uVar6 = (param_1->CookedHash).Bytes[1];
  uVar7 = (param_1->CookedHash).Bytes[2];
  uVar8 = (param_1->CookedHash).Bytes[3];
  uVar9 = (param_1->CookedHash).Bytes[4];
  uVar10 = (param_1->CookedHash).Bytes[5];
  uVar11 = (param_1->CookedHash).Bytes[6];
  uVar4 = *(undefined8 *)((param_1->CookedHash).Bytes + 7);
  pTVar1 = &this->ChunkHashes;
  pTVar2 = &param_1->ChunkHashes;
  (this->CookedHash).bIsValid = (param_1->CookedHash).bIsValid;
  (this->CookedHash).Bytes[0] = uVar5;
  (this->CookedHash).Bytes[1] = uVar6;
  (this->CookedHash).Bytes[2] = uVar7;
  (this->CookedHash).Bytes[3] = uVar8;
  (this->CookedHash).Bytes[4] = uVar9;
  (this->CookedHash).Bytes[5] = uVar10;
  (this->CookedHash).Bytes[6] = uVar11;
  *(undefined8 *)((this->CookedHash).Bytes + 7) = uVar4;
  (this->CookedHash).Bytes[0xf] = (param_1->CookedHash).Bytes[0xf];
  this->Extension = param_1->Extension;
  this->Flags = param_1->Flags;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkHashes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->ChunkHashes).field_0x10;
    *(undefined4 *)&(this->ChunkHashes).field_0x8 = *(undefined4 *)&(param_1->ChunkHashes).field_0x8
    ;
    _Src = &(param_1->ChunkHashes).field_0x10;
    *(undefined4 *)&(this->ChunkHashes).field_0xc = *(undefined4 *)&(param_1->ChunkHashes).field_0xc
    ;
    *(undefined8 *)&(param_1->ChunkHashes).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ChunkHashes).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->ChunkHashes).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->ChunkHashes).field_0x20 =
           *(undefined8 *)&(param_1->ChunkHashes).field_0x20;
      *(undefined8 *)&(param_1->ChunkHashes).field_0x20 = 0;
      *(undefined4 *)&(this->ChunkHashes).field_0x28 =
           *(undefined4 *)&(param_1->ChunkHashes).field_0x28;
      *(undefined4 *)&(this->ChunkHashes).field_0x2c =
           *(undefined4 *)&(param_1->ChunkHashes).field_0x2c;
      *(undefined8 *)&(param_1->ChunkHashes).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ChunkHashes).field_0x30 =
         *(undefined4 *)&(param_1->ChunkHashes).field_0x30;
    *(undefined4 *)&(this->ChunkHashes).field_0x34 =
         *(undefined4 *)&(param_1->ChunkHashes).field_0x34;
    *(undefined4 *)&(param_1->ChunkHashes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ChunkHashes).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->ChunkHashes).field_0x40 == 0) {
    *(undefined4 *)&(this->ChunkHashes).field_0x38 =
         *(undefined4 *)&(param_1->ChunkHashes).field_0x38;
  }
  pvVar3 = *(void **)&(this->ChunkHashes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->ChunkHashes).field_0x40 = *(undefined8 *)&(param_1->ChunkHashes).field_0x40
  ;
  *(undefined8 *)&(param_1->ChunkHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = *(undefined4 *)&(param_1->ChunkHashes).field_0x48
  ;
  *(undefined4 *)&(param_1->ChunkHashes).field_0x48 = 0;
  (this->ImportedClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedClasses).AllocatorInstance.Data = (param_1->ImportedClasses).AllocatorInstance.Data
  ;
  (param_1->ImportedClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedClasses).ArrayNum = (param_1->ImportedClasses).ArrayNum;
  (this->ImportedClasses).ArrayMax = (param_1->ImportedClasses).ArrayMax;
  (param_1->ImportedClasses).ArrayNum = 0;
  (param_1->ImportedClasses).ArrayMax = 0;
  this->DiskSize = param_1->DiskSize;
  this->FileVersionUE = param_1->FileVersionUE;
  this->FileVersionLicenseeUE = param_1->FileVersionLicenseeUE;
  iVar12 = (param_1->CustomVersions).Ptr.ArrayNum;
  uVar13 = *(undefined4 *)&(param_1->CustomVersions).Ptr.field_0xc;
  (this->CustomVersions).Ptr.DataPtr = (param_1->CustomVersions).Ptr.DataPtr;
  (this->CustomVersions).Ptr.ArrayNum = iVar12;
  *(undefined4 *)&(this->CustomVersions).Ptr.field_0xc = uVar13;
  return this;
}

// FAssetPackageData @ 142ad4fc0

FAssetPackageData * __thiscall FAssetPackageData::FAssetPackageData(FAssetPackageData *this)

{
  (this->CookedHash).bIsValid = false;
  *(undefined8 *)&this->ChunkHashes = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x20 = 0;
  this->Flags = 0;
  this->Extension = Unspecified;
  *(undefined4 *)&(this->ChunkHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkHashes).field_0x34 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChunkHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  (this->ImportedClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedClasses).ArrayNum = 0;
  (this->ImportedClasses).ArrayMax = 0;
  this->DiskSize = 0;
  (this->FileVersionUE).FileVersionUE4 = 0;
  (this->FileVersionUE).FileVersionUE5 = 0;
  (this->CustomVersions).Ptr.DataPtr = (FPackageCustomVersion *)0x0;
  (this->CustomVersions).Ptr.ArrayNum = 0;
  this->FileVersionLicenseeUE = -1;
  return this;
}

// ~FAssetPackageData @ 142ada220

void __thiscall FAssetPackageData::~FAssetPackageData(FAssetPackageData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ImportedClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkHashes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkHashes);
  return;
}

// operator= @ 142adbaf0

FAssetPackageData * __thiscall
FAssetPackageData::operator=(FAssetPackageData *this,FAssetPackageData *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  undefined4 uVar13;
  
  uVar6 = (param_1->CookedHash).Bytes[0];
  uVar7 = (param_1->CookedHash).Bytes[1];
  uVar8 = (param_1->CookedHash).Bytes[2];
  uVar9 = (param_1->CookedHash).Bytes[3];
  uVar10 = (param_1->CookedHash).Bytes[4];
  uVar11 = (param_1->CookedHash).Bytes[5];
  uVar12 = (param_1->CookedHash).Bytes[6];
  uVar5 = *(undefined8 *)((param_1->CookedHash).Bytes + 7);
  (this->CookedHash).bIsValid = (param_1->CookedHash).bIsValid;
  (this->CookedHash).Bytes[0] = uVar6;
  (this->CookedHash).Bytes[1] = uVar7;
  (this->CookedHash).Bytes[2] = uVar8;
  (this->CookedHash).Bytes[3] = uVar9;
  (this->CookedHash).Bytes[4] = uVar10;
  (this->CookedHash).Bytes[5] = uVar11;
  (this->CookedHash).Bytes[6] = uVar12;
  *(undefined8 *)((this->CookedHash).Bytes + 7) = uVar5;
  (this->CookedHash).Bytes[0xf] = (param_1->CookedHash).Bytes[0xf];
  this->Extension = param_1->Extension;
  this->Flags = param_1->Flags;
  TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
               *)&this->ChunkHashes,
              (TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
               *)&param_1->ChunkHashes);
  pTVar1 = &this->ImportedClasses;
  if (pTVar1 != &param_1->ImportedClasses) {
    iVar3 = (this->ImportedClasses).ArrayMax;
    piVar2 = &(this->ImportedClasses).ArrayMax;
    _Src = (param_1->ImportedClasses).AllocatorInstance.Data;
    iVar4 = (param_1->ImportedClasses).ArrayNum;
    (this->ImportedClasses).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  this->DiskSize = param_1->DiskSize;
  this->FileVersionUE = param_1->FileVersionUE;
  this->FileVersionLicenseeUE = param_1->FileVersionLicenseeUE;
  iVar3 = (param_1->CustomVersions).Ptr.ArrayNum;
  uVar13 = *(undefined4 *)&(param_1->CustomVersions).Ptr.field_0xc;
  (this->CustomVersions).Ptr.DataPtr = (param_1->CustomVersions).Ptr.DataPtr;
  (this->CustomVersions).Ptr.ArrayNum = iVar3;
  *(undefined4 *)&(this->CustomVersions).Ptr.field_0xc = uVar13;
  return this;
}

// FAssetPackageData @ 142b790c0

FAssetPackageData * __thiscall
FAssetPackageData::FAssetPackageData(FAssetPackageData *this,FAssetPackageData *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  undefined4 uVar12;
  
  uVar5 = (param_1->CookedHash).Bytes[0];
  uVar6 = (param_1->CookedHash).Bytes[1];
  uVar7 = (param_1->CookedHash).Bytes[2];
  uVar8 = (param_1->CookedHash).Bytes[3];
  uVar9 = (param_1->CookedHash).Bytes[4];
  uVar10 = (param_1->CookedHash).Bytes[5];
  uVar11 = (param_1->CookedHash).Bytes[6];
  uVar4 = *(undefined8 *)((param_1->CookedHash).Bytes + 7);
  (this->CookedHash).bIsValid = (param_1->CookedHash).bIsValid;
  (this->CookedHash).Bytes[0] = uVar5;
  (this->CookedHash).Bytes[1] = uVar6;
  (this->CookedHash).Bytes[2] = uVar7;
  (this->CookedHash).Bytes[3] = uVar8;
  (this->CookedHash).Bytes[4] = uVar9;
  (this->CookedHash).Bytes[5] = uVar10;
  (this->CookedHash).Bytes[6] = uVar11;
  *(undefined8 *)((this->CookedHash).Bytes + 7) = uVar4;
  (this->CookedHash).Bytes[0xf] = (param_1->CookedHash).Bytes[0xf];
  this->Extension = param_1->Extension;
  this->Flags = param_1->Flags;
  *(undefined8 *)&(this->ChunkHashes).field_0x0 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkHashes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
               *)&this->ChunkHashes,
              (TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
               *)&param_1->ChunkHashes);
  pTVar1 = &this->ImportedClasses;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ImportedClasses).ArrayMax;
  iVar3 = (param_1->ImportedClasses).ArrayNum;
  _Src = (param_1->ImportedClasses).AllocatorInstance.Data;
  (this->ImportedClasses).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->DiskSize = param_1->DiskSize;
  this->FileVersionUE = param_1->FileVersionUE;
  this->FileVersionLicenseeUE = param_1->FileVersionLicenseeUE;
  iVar3 = (param_1->CustomVersions).Ptr.ArrayNum;
  uVar12 = *(undefined4 *)&(param_1->CustomVersions).Ptr.field_0xc;
  (this->CustomVersions).Ptr.DataPtr = (param_1->CustomVersions).Ptr.DataPtr;
  (this->CustomVersions).Ptr.ArrayNum = iVar3;
  *(undefined4 *)&(this->CustomVersions).Ptr.field_0xc = uVar12;
  return this;
}

