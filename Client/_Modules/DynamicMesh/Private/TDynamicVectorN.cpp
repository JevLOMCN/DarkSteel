// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// InsertAt @ 14c8ff790

void __thiscall
UE::Geometry::TDynamicVectorN<double,3>::InsertAt
          (TDynamicVectorN<double,3> *this,ElementVectorN *param_1,uint param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar9;
  
  uVar8 = (this->Data).CurBlockUsed;
  uVar1 = param_2 * 3;
  uVar3 = (this->Data).CurBlock;
  uVar7 = uVar3 * 0x200 + uVar8;
  uVar4 = uVar1 + 2;
  if (uVar4 == uVar7) {
    if (uVar8 == 0x200) {
      if (uVar3 == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar8 = 0;
      uVar3 = (this->Data).CurBlock;
      (this->Data).CurBlockUsed = 0;
    }
    *(double *)
     (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
     (longlong)(int)uVar8 * 8) = param_1->Data[2];
    puVar6 = &(this->Data).CurBlockUsed;
    *puVar6 = *puVar6 + 1;
  }
  else if (uVar7 < uVar4) {
    TDynamicVector<double,512>::Resize(&this->Data,uVar4);
    uVar4 = (this->Data).CurBlockUsed;
    if (uVar4 == 0x200) {
      if ((this->Data).CurBlock == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar4 = 0;
      (this->Data).CurBlockUsed = 0;
    }
    *(double *)
     (*(longlong *)
       ((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)(this->Data).CurBlock * 8) +
     (longlong)(int)uVar4 * 8) = param_1->Data[2];
    puVar6 = &(this->Data).CurBlockUsed;
    *puVar6 = *puVar6 + 1;
  }
  else {
    *(double *)
     (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
     (ulonglong)(uVar4 & 0x1ff) * 8) = param_1->Data[2];
  }
  pTVar9 = &(this->Data).Blocks;
  uVar8 = (this->Data).CurBlock;
  uVar4 = uVar1 + 1;
  uVar3 = (this->Data).CurBlockUsed;
  puVar6 = &(this->Data).CurBlockUsed;
  uVar7 = uVar8 * 0x200 + uVar3;
  if (uVar4 == uVar7) {
    if (uVar3 == 0x200) {
      if (uVar8 == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar8 = (this->Data).CurBlock;
      uVar3 = 0;
      (this->Data).CurBlockUsed = 0;
    }
    *(double *)
     (*(longlong *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) +
     (longlong)(int)uVar3 * 8) = param_1->Data[1];
    *puVar6 = (this->Data).CurBlockUsed + 1;
  }
  else if (uVar7 < uVar4) {
    TDynamicVector<double,512>::Resize(&this->Data,uVar4);
    uVar4 = *puVar6;
    if (uVar4 == 0x200) {
      if ((this->Data).CurBlock == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar4 = 0;
      *puVar6 = 0;
    }
    *(double *)
     (*(longlong *)((pTVar9->AllocatorInstance).Data + (longlong)(int)(this->Data).CurBlock * 8) +
     (longlong)(int)uVar4 * 8) = param_1->Data[1];
    *puVar6 = *puVar6 + 1;
  }
  else {
    *(double *)
     (*(longlong *)((pTVar9->AllocatorInstance).Data + (ulonglong)(uVar4 >> 9) * 8) +
     (ulonglong)(uVar4 & 0x1ff) * 8) = param_1->Data[1];
  }
  puVar6 = &(this->Data).CurBlockUsed;
  pTVar9 = &(this->Data).Blocks;
  piVar5 = &(this->Data).Blocks.ArrayNum;
  uVar4 = (this->Data).CurBlock;
  uVar3 = param_2 * 3;
  uVar8 = *puVar6;
  uVar7 = uVar4 * 0x200 + uVar8;
  if (uVar1 == uVar7) {
    if (uVar8 == 0x200) {
      if (uVar4 == *piVar5 - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar8 = 0;
      *puVar6 = 0;
    }
    pFVar2 = (this->Data).Blocks.AllocatorInstance.Data;
  }
  else {
    if (uVar1 <= uVar7) {
      *(double *)
       (*(longlong *)((pTVar9->AllocatorInstance).Data + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar3 & 0x1ff) * 8) = param_1->Data[0];
      return;
    }
    TDynamicVector<double,512>::Resize(&this->Data,uVar3);
    uVar8 = *puVar6;
    if (uVar8 == 0x200) {
      if ((this->Data).CurBlock == *piVar5 - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar8 = 0;
      *puVar6 = 0;
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
  }
  *(double *)
   (*(longlong *)(pFVar2 + (longlong)(int)(this->Data).CurBlock * 8) + (longlong)(int)uVar8 * 8) =
       param_1->Data[0];
  *puVar6 = *puVar6 + 1;
  return;
}

