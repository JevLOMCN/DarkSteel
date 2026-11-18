// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// Add @ 14ccde120

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::Add
          (TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this,
          FSparsePointOctreeCell *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = this->CurBlockUsed;
  if (uVar9 == 0x200) {
    if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
      AddAllocatedBlock(this);
    }
    this->CurBlock = this->CurBlock + 1;
    uVar9 = 0;
    this->CurBlockUsed = 0;
  }
  uVar4 = *(undefined8 *)&(param_1->Index).field0_0x0;
  uVar2 = (param_1->Children).Elements[7];
  uVar5 = *(undefined8 *)((longlong)&(param_1->Index).field0_0x0 + 8);
  uVar6 = *(undefined8 *)((param_1->Children).Elements + 1);
  uVar7 = *(undefined8 *)((param_1->Children).Elements + 3);
  uVar8 = *(undefined8 *)((param_1->Children).Elements + 5);
  lVar10 = (longlong)(int)uVar9 * 0x34;
  lVar3 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
  *(undefined8 *)(lVar3 + lVar10) = *(undefined8 *)param_1;
  ((undefined8 *)(lVar3 + lVar10))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar10);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar10);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  *(uint *)(lVar3 + 0x30 + lVar10) = uVar2;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// InsertAt @ 14cd073b0

void __thiscall
UE::Geometry::TDynamicVector<unsigned_int,512>::InsertAt
          (TDynamicVector<unsigned_int,512> *this,uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  uVar1 = this->CurBlock;
  uVar2 = uVar1 * 0x200 + uVar3;
  if (param_2 == uVar2) {
    if (uVar3 == 0x200) {
      if (uVar1 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar1 = this->CurBlock;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
             (longlong)(int)uVar3 * 4) = *param_1;
    this->CurBlockUsed = this->CurBlockUsed + 1;
  }
  else if (uVar2 < param_2) {
    Resize(this,param_2);
    uVar3 = this->CurBlockUsed;
    if (uVar3 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    *(uint *)(*(longlong *)
               ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
             (longlong)(int)uVar3 * 4) = *param_1;
    this->CurBlockUsed = this->CurBlockUsed + 1;
  }
  else {
    *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)(param_2 & 0x1ff) * 4) = *param_1;
  }
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
             (ulonglong)(uVar2 & 0x1ff) * 4) = *param_3;
  }
  return;
}

// InsertAt @ 14cd074e0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::InsertAt
          (TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this,
          FSparsePointOctreeCell *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = this->CurBlock * 0x200 + this->CurBlockUsed;
  if (param_2 != uVar8) {
    if (param_2 <= uVar8) {
      uVar3 = *(undefined8 *)&(param_1->Index).field0_0x0;
      uVar8 = (param_1->Children).Elements[7];
      uVar4 = *(undefined8 *)((longlong)&(param_1->Index).field0_0x0 + 8);
      uVar5 = *(undefined8 *)((param_1->Children).Elements + 1);
      uVar6 = *(undefined8 *)((param_1->Children).Elements + 3);
      uVar7 = *(undefined8 *)((param_1->Children).Elements + 5);
      lVar9 = (ulonglong)(param_2 & 0x1ff) * 0x34;
      lVar2 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8);
      *(undefined8 *)(lVar2 + lVar9) = *(undefined8 *)param_1;
      ((undefined8 *)(lVar2 + lVar9))[1] = uVar3;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar9);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(uint *)(lVar2 + 0x30 + lVar9) = uVar8;
      return;
    }
    Resize(this,param_2);
  }
  Add(this,param_1);
  return;
}

