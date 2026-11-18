// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// operator= @ 14ca6be80

FGeometrySelection * __thiscall
UE::Geometry::FGeometrySelection::operator=(FGeometrySelection *this,FGeometrySelection *param_1)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  pTVar1 = &param_1->Selection;
  pTVar2 = &this->Selection;
  this->ElementType = param_1->ElementType;
  this->TopologyType = param_1->TopologyType;
  if (pTVar2 != pTVar1) {
    if (*(void **)&pTVar2->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar2->Elements);
    }
    _Src = &(param_1->Selection).Elements.field_0x10;
    *(undefined8 *)&pTVar2->Elements = *(undefined8 *)&pTVar1->Elements;
    _Dst = &(this->Selection).Elements.field_0x10;
    *(undefined8 *)&pTVar1->Elements = 0;
    *(undefined4 *)&(this->Selection).Elements.field_0x8 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x8;
    *(undefined4 *)&(this->Selection).Elements.field_0xc =
         *(undefined4 *)&(param_1->Selection).Elements.field_0xc;
    *(undefined8 *)&(param_1->Selection).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Selection).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->Selection).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Selection).Elements.field_0x20 =
           *(undefined8 *)&(param_1->Selection).Elements.field_0x20;
      *(undefined8 *)&(param_1->Selection).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->Selection).Elements.field_0x28 =
           *(undefined4 *)&(param_1->Selection).Elements.field_0x28;
      *(undefined4 *)&(this->Selection).Elements.field_0x2c =
           *(undefined4 *)&(param_1->Selection).Elements.field_0x2c;
      *(undefined8 *)&(param_1->Selection).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->Selection).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x30;
    *(undefined4 *)&(this->Selection).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x34;
    *(undefined4 *)&(param_1->Selection).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Selection).Elements.field_0x34 = 0;
    if ((param_1->Selection).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->Selection).Hash.InlineData =
           *(undefined4 *)(param_1->Selection).Hash.InlineData;
    }
    FVar4 = (this->Selection).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (this->Selection).Hash.SecondaryData = (param_1->Selection).Hash.SecondaryData;
    (param_1->Selection).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->Selection).HashSize = (param_1->Selection).HashSize;
    (param_1->Selection).HashSize = 0;
  }
  return this;
}

// operator= @ 14ca6bfa0

FGeometrySelection * __thiscall
UE::Geometry::FGeometrySelection::operator=(FGeometrySelection *this,FGeometrySelection *param_1)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int iVar2;
  
  this_00 = &this->Selection;
  this->ElementType = param_1->ElementType;
  this->TopologyType = param_1->TopologyType;
  if (this_00 != &param_1->Selection) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->Selection).Hash,&(this->Selection).HashSize,&(param_1->Selection).Hash,
               (param_1->Selection).HashSize);
    iVar2 = *(int *)&(param_1->Selection).Elements.field_0x8;
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,iVar2);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,(ForAnyElementType *)this_00,
               (int *)&(this->Selection).Elements.field_0x8,
               (int *)&(this->Selection).Elements.field_0xc);
    puVar1 = &(param_1->Selection).Elements.field_0x10;
    this_01 = &(this->Selection).Elements.field_0x10;
    *(undefined4 *)&(this->Selection).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x30;
    *(undefined4 *)&(this->Selection).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x34;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this_00->Elements,*(void **)&(param_1->Selection).Elements,
             (longlong)iVar2 << 4);
    }
    return this;
  }
  return this;
}

