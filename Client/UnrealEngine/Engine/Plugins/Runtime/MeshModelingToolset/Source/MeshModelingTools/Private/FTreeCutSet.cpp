// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// FTreeCutSet @ 14ccba710

FTreeCutSet * __thiscall
UE::Geometry::FDynamicMeshOctree3::FTreeCutSet::FTreeCutSet(FTreeCutSet *this,FTreeCutSet *param_1)

{
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  pTVar1 = &this->CutCellIDs;
  (this->CutCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->CutCellIDs;
  (this->CutCells).AllocatorInstance.Data = (param_1->CutCells).AllocatorInstance.Data;
  (param_1->CutCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CutCells).ArrayNum = (param_1->CutCells).ArrayNum;
  (this->CutCells).ArrayMax = (param_1->CutCells).ArrayMax;
  (param_1->CutCells).ArrayNum = 0;
  (param_1->CutCells).ArrayMax = 0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->CutCellIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CutCellIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CutCellIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CutCellIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CutCellIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CutCellIDs).Elements.field_0x34 = 0;
  (this->CutCellIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CutCellIDs).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->CutCellIDs).Elements.field_0x10;
    *(undefined4 *)&(this->CutCellIDs).Elements.field_0x8 =
         *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0x8;
    _Src = &(param_1->CutCellIDs).Elements.field_0x10;
    *(undefined4 *)&(this->CutCellIDs).Elements.field_0xc =
         *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0xc;
    *(undefined8 *)&(param_1->CutCellIDs).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->CutCellIDs).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->CutCellIDs).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->CutCellIDs).Elements.field_0x20 =
           *(undefined8 *)&(param_1->CutCellIDs).Elements.field_0x20;
      *(undefined8 *)&(param_1->CutCellIDs).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->CutCellIDs).Elements.field_0x28 =
           *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0x28;
      *(undefined4 *)&(this->CutCellIDs).Elements.field_0x2c =
           *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0x2c;
      *(undefined8 *)&(param_1->CutCellIDs).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->CutCellIDs).Elements.field_0x30 =
         *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0x30;
    *(undefined4 *)&(this->CutCellIDs).Elements.field_0x34 =
         *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0x34;
    *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CutCellIDs).Elements.field_0x34 = 0;
  }
  if ((param_1->CutCellIDs).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->CutCellIDs).Hash.InlineData =
         *(undefined4 *)(param_1->CutCellIDs).Hash.InlineData;
  }
  FVar4 = (this->CutCellIDs).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->CutCellIDs).Hash.SecondaryData = (param_1->CutCellIDs).Hash.SecondaryData;
  (param_1->CutCellIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CutCellIDs).HashSize = (param_1->CutCellIDs).HashSize;
  (param_1->CutCellIDs).HashSize = 0;
  this->FixedCutLevel = param_1->FixedCutLevel;
  return this;
}

