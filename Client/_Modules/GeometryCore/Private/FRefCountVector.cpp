// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 16

// IndexIterator @ 143369260

IndexIterator * __thiscall
UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
          (IndexIterator *this,FRefCountVector *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  *(FRefCountVector **)this = param_1;
  *(int *)&this->field_0x8 = param_2;
  *(int *)&this->field_0xc = param_3;
  if ((param_2 != param_3) &&
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->RefCounts).Blocks.AllocatorInstance.Data +
                                    (ulonglong)((uint)param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    uVar1 = param_2 + 1;
    *(uint *)&this->field_0x8 = uVar1;
    while (((int)uVar1 < param_3 &&
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_1->RefCounts).Blocks.AllocatorInstance.Data +
                                          (ulonglong)(uVar1 >> 9) * 8) +
                                        (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)))) {
      uVar1 = uVar1 + 1;
      *(uint *)&this->field_0x8 = uVar1;
    }
  }
  return this;
}

// IsValid @ 1433bc640

bool __thiscall UE::Geometry::FRefCountVector::IsValid(FRefCountVector *this,int param_1)

{
  if (((-1 < param_1) &&
      (param_1 < (int)((this->RefCounts).CurBlock * 0x200 + (this->RefCounts).CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->RefCounts).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// begin @ 1433e3930

MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator> *
__thiscall
UE::Geometry::FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
          (MappedEnumerable<UE::Math::TVector<double>_> *this,
          MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
          *__return_storage_ptr__)

{
  short sVar1;
  FRefCountVector *pFVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uStack_10;
  
  pFVar2 = (this->enumerable).Vector;
  uStack_10 = 0;
  iVar5 = (pFVar2->RefCounts).CurBlock * 0x200 + (pFVar2->RefCounts).CurBlockUsed;
  if ((iVar5 != 0) &&
     (pFVar3 = (pFVar2->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar4 = 1;
    uStack_10 = 1;
    if (1 < iVar5) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar3 + (uVar4 >> 9) * 8) +
                          (ulonglong)(uStack_10 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uStack_10 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uStack_10;
      } while ((int)uStack_10 < iVar5);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->MapFunction = 0;
  *(undefined8 *)&(__return_storage_ptr__->MapFunction).field_0x28 = 0;
  *(FRefCountVector **)&__return_storage_ptr__->Cur = pFVar2;
  *(ulonglong *)&(__return_storage_ptr__->Cur).field_0x8 = CONCAT44(iVar5,uStack_10);
  TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
            (&__return_storage_ptr__->MapFunction,&this->MapFunc);
  return __return_storage_ptr__;
}

// goto_next @ 1433f82e0

void __thiscall UE::Geometry::FRefCountVector::BaseIterator::goto_next(BaseIterator *this)

{
  uint uVar1;
  
  uVar1 = this->Index + 1;
  this->Index = uVar1;
  if ((int)uVar1 < this->LastIndex) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->Vector->RefCounts).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)
          < 0xfffe) {
        return;
      }
      uVar1 = uVar1 + 1;
      this->Index = uVar1;
    } while ((int)uVar1 < this->LastIndex);
  }
  return;
}

// FRefCountVector @ 143452820

FRefCountVector * __thiscall
UE::Geometry::FRefCountVector::FRefCountVector(FRefCountVector *this,FRefCountVector *param_1)

{
  TDynamicVector<int,512> *this_00;
  uint uVar1;
  
  (this->RefCounts).CurBlock = (param_1->RefCounts).CurBlock;
  uVar1 = (param_1->RefCounts).CurBlockUsed;
  (this->RefCounts).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefCounts).CurBlockUsed = uVar1;
  (this->RefCounts).Blocks.AllocatorInstance.Data =
       (param_1->RefCounts).Blocks.AllocatorInstance.Data;
  (param_1->RefCounts).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefCounts).Blocks.ArrayNum = (param_1->RefCounts).Blocks.ArrayNum;
  (this->RefCounts).Blocks.ArrayMax = (param_1->RefCounts).Blocks.ArrayMax;
  (param_1->RefCounts).Blocks.ArrayNum = 0;
  (param_1->RefCounts).Blocks.ArrayMax = 0;
  (param_1->RefCounts).CurBlock = 0;
  (param_1->RefCounts).CurBlockUsed = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&param_1->RefCounts);
  this_00 = &param_1->FreeIndices;
  (this->FreeIndices).CurBlock = (param_1->FreeIndices).CurBlock;
  uVar1 = (param_1->FreeIndices).CurBlockUsed;
  (this->FreeIndices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).CurBlockUsed = uVar1;
  (this->FreeIndices).Blocks.AllocatorInstance.Data =
       (param_1->FreeIndices).Blocks.AllocatorInstance.Data;
  (param_1->FreeIndices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).Blocks.ArrayNum = (param_1->FreeIndices).Blocks.ArrayNum;
  (this->FreeIndices).Blocks.ArrayMax = (param_1->FreeIndices).Blocks.ArrayMax;
  (param_1->FreeIndices).Blocks.ArrayNum = 0;
  (param_1->FreeIndices).Blocks.ArrayMax = 0;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(this_00);
  this->UsedCount = param_1->UsedCount;
  param_1->UsedCount = 0;
  return this;
}

// operator= @ 143456020

FRefCountVector * __thiscall
UE::Geometry::FRefCountVector::operator=(FRefCountVector *this,FRefCountVector *param_1)

{
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    TDynamicVector<unsigned_short,512>::Empty(&this->RefCounts,0);
    pTVar1 = &(param_1->RefCounts).Blocks;
    pTVar2 = &(this->RefCounts).Blocks;
    (this->RefCounts).CurBlock = (param_1->RefCounts).CurBlock;
    (this->RefCounts).CurBlockUsed = (param_1->RefCounts).CurBlockUsed;
    if (pTVar2 != pTVar1) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->RefCounts).Blocks.ArrayNum = (param_1->RefCounts).Blocks.ArrayNum;
      (this->RefCounts).Blocks.ArrayMax = (param_1->RefCounts).Blocks.ArrayMax;
      (param_1->RefCounts).Blocks.ArrayNum = 0;
      (param_1->RefCounts).Blocks.ArrayMax = 0;
    }
    (param_1->RefCounts).CurBlock = 0;
    (param_1->RefCounts).CurBlockUsed = 0;
    TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&param_1->RefCounts);
  }
  TDynamicVector<int,512>::operator=(&this->FreeIndices,&param_1->FreeIndices);
  this->UsedCount = param_1->UsedCount;
  param_1->UsedCount = 0;
  return this;
}

// Allocate @ 143466450

int __thiscall UE::Geometry::FRefCountVector::Allocate(FRefCountVector *this)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  this->UsedCount = this->UsedCount + 1;
  uVar5 = (this->FreeIndices).CurBlock;
  if ((uVar5 == 0) && ((this->FreeIndices).CurBlockUsed == 0)) {
    uVar5 = (this->RefCounts).CurBlockUsed;
    if (uVar5 == 0x200) {
      if ((this->RefCounts).CurBlock == (this->RefCounts).Blocks.ArrayNum - 1U) {
        TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
      }
      (this->RefCounts).CurBlock = (this->RefCounts).CurBlock + 1;
      uVar5 = 0;
      (this->RefCounts).CurBlockUsed = 0;
    }
    *(undefined2 *)
     (*(longlong *)
       ((this->RefCounts).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->RefCounts).CurBlock * 8) + (longlong)(int)uVar5 * 2) = 1;
    puVar2 = &(this->RefCounts).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return (this->RefCounts).CurBlock * 0x200 + ((this->RefCounts).CurBlockUsed - 1);
  }
  uVar6 = 0xffffffff;
  do {
    if ((uVar5 == 0) && ((this->FreeIndices).CurBlockUsed == 0)) {
      if (uVar6 == 0xffffffff) {
        uVar5 = (this->RefCounts).CurBlockUsed;
        if (uVar5 == 0x200) {
          if ((this->RefCounts).CurBlock == (this->RefCounts).Blocks.ArrayNum - 1U) {
            TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
          }
          (this->RefCounts).CurBlock = (this->RefCounts).CurBlock + 1;
          uVar5 = 0;
          (this->RefCounts).CurBlockUsed = 0;
        }
        *(undefined2 *)
         (*(longlong *)
           ((this->RefCounts).Blocks.AllocatorInstance.Data +
           (longlong)(int)(this->RefCounts).CurBlock * 8) + (longlong)(int)uVar5 * 2) = 1;
        puVar2 = &(this->RefCounts).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
        return (this->RefCounts).CurBlock * 0x200 + ((this->RefCounts).CurBlockUsed - 1);
      }
      break;
    }
    uVar3 = (this->FreeIndices).CurBlockUsed;
    uVar1 = uVar3 - 1;
    uVar6 = *(uint *)(*(longlong *)
                       ((this->FreeIndices).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8
                       ) + (longlong)(int)uVar1 * 4);
    uVar4 = uVar5;
    if (uVar3 == 0) {
LAB_1434664fa:
      if (uVar5 != 0) {
        (this->FreeIndices).CurBlockUsed = 0x200;
        (this->FreeIndices).CurBlock = uVar5 - 1;
        uVar4 = uVar5 - 1;
      }
    }
    else {
      (this->FreeIndices).CurBlockUsed = uVar1;
      uVar4 = (this->FreeIndices).CurBlock;
      if (uVar1 == 0) goto LAB_1434664fa;
    }
    uVar5 = uVar4;
  } while (uVar6 == 0xffffffff);
  *(undefined2 *)
   (*(longlong *)((this->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
   (ulonglong)(uVar6 & 0x1ff) * 2) = 1;
  return uVar6;
}

// AllocateAt @ 1434665b0

bool __thiscall UE::Geometry::FRefCountVector::AllocateAt(FRefCountVector *this,int param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (this->RefCounts).CurBlock * 0x200 + (this->RefCounts).CurBlockUsed;
  if (iVar4 <= param_1) {
    for (; iVar4 < param_1; iVar4 = iVar4 + 1) {
      uVar3 = (this->RefCounts).CurBlockUsed;
      if (uVar3 == 0x200) {
        if ((this->RefCounts).CurBlock == (this->RefCounts).Blocks.ArrayNum - 1U) {
          TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
        }
        (this->RefCounts).CurBlock = (this->RefCounts).CurBlock + 1;
        uVar3 = 0;
        (this->RefCounts).CurBlockUsed = 0;
      }
      *(undefined2 *)
       (*(longlong *)
         ((this->RefCounts).Blocks.AllocatorInstance.Data +
         (longlong)(int)(this->RefCounts).CurBlock * 8) + (longlong)(int)uVar3 * 2) = 0xffff;
      puVar1 = &(this->RefCounts).CurBlockUsed;
      *puVar1 = *puVar1 + 1;
      uVar3 = (this->FreeIndices).CurBlockUsed;
      if (uVar3 == 0x200) {
        if ((this->FreeIndices).CurBlock == (this->FreeIndices).Blocks.ArrayNum - 1U) {
          TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeIndices);
        }
        (this->FreeIndices).CurBlock = (this->FreeIndices).CurBlock + 1;
        uVar3 = 0;
        (this->FreeIndices).CurBlockUsed = 0;
      }
      *(int *)(*(longlong *)
                ((this->FreeIndices).Blocks.AllocatorInstance.Data +
                (longlong)(int)(this->FreeIndices).CurBlock * 8) + (longlong)(int)uVar3 * 4) = iVar4
      ;
      puVar1 = &(this->FreeIndices).CurBlockUsed;
      *puVar1 = *puVar1 + 1;
    }
    uVar3 = (this->RefCounts).CurBlockUsed;
    if (uVar3 == 0x200) {
      if ((this->RefCounts).CurBlock == (this->RefCounts).Blocks.ArrayNum - 1U) {
        TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
      }
      (this->RefCounts).CurBlock = (this->RefCounts).CurBlock + 1;
      uVar3 = 0;
      (this->RefCounts).CurBlockUsed = 0;
    }
    *(undefined2 *)
     (*(longlong *)
       ((this->RefCounts).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->RefCounts).CurBlock * 8) + (longlong)(int)uVar3 * 2) = 1;
    puVar1 = &(this->RefCounts).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    this->UsedCount = this->UsedCount + 1;
    return true;
  }
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->RefCounts).Blocks.AllocatorInstance.Data +
                                    (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    uVar3 = 0;
    iVar4 = (this->FreeIndices).CurBlock * 0x200 + (this->FreeIndices).CurBlockUsed;
    if (0 < iVar4) {
      do {
        lVar2 = *(longlong *)
                 ((this->FreeIndices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
        if (*(int *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 4) == param_1) {
          *(undefined4 *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)
                  ((this->FreeIndices).Blocks.AllocatorInstance.Data +
                  (longlong)(int)(this->FreeIndices).CurBlock * 8) +
                (longlong)(int)((this->FreeIndices).CurBlockUsed - 1) * 4);
          uVar3 = (this->FreeIndices).CurBlockUsed;
          if (((uVar3 == 0) ||
              (uVar3 = uVar3 - 1, (this->FreeIndices).CurBlockUsed = uVar3, uVar3 == 0)) &&
             (uVar3 = (this->FreeIndices).CurBlock, uVar3 != 0)) {
            (this->FreeIndices).CurBlockUsed = 0x200;
            (this->FreeIndices).CurBlock = uVar3 - 1;
          }
          *(undefined2 *)
           (*(longlong *)
             ((this->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
           + (ulonglong)(param_1 & 0x1ff) * 2) = 1;
          this->UsedCount = this->UsedCount + 1;
          return true;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar4);
    }
  }
  return false;
}

// AllocateAtUnsafe @ 1434667b0

bool __thiscall UE::Geometry::FRefCountVector::AllocateAtUnsafe(FRefCountVector *this,int param_1)

{
  short *psVar1;
  int iVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = (this->RefCounts).CurBlockUsed;
  puVar4 = &(this->RefCounts).CurBlockUsed;
  iVar2 = (this->RefCounts).CurBlock * 0x200 + uVar5;
  if (iVar2 <= param_1) {
    if (iVar2 < param_1) {
      uVar3 = (ulonglong)(uint)(param_1 - iVar2);
      do {
        if (uVar5 == 0x200) {
          if ((this->RefCounts).CurBlock == (this->RefCounts).Blocks.ArrayNum - 1U) {
            TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
          }
          (this->RefCounts).CurBlock = (this->RefCounts).CurBlock + 1;
          uVar5 = 0;
          *puVar4 = 0;
        }
        *(undefined2 *)
         (*(longlong *)
           ((this->RefCounts).Blocks.AllocatorInstance.Data +
           (longlong)(int)(this->RefCounts).CurBlock * 8) + (longlong)(int)uVar5 * 2) = 0xffff;
        uVar5 = *puVar4 + 1;
        *puVar4 = uVar5;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (uVar5 == 0x200) {
      if ((this->RefCounts).CurBlock == (this->RefCounts).Blocks.ArrayNum - 1U) {
        TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
      }
      (this->RefCounts).CurBlock = (this->RefCounts).CurBlock + 1;
      (this->RefCounts).CurBlockUsed = 0;
      uVar5 = 0;
    }
    puVar4 = &(this->RefCounts).CurBlockUsed;
    *(undefined2 *)
     (*(longlong *)
       ((this->RefCounts).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->RefCounts).CurBlock * 8) + (longlong)(int)uVar5 * 2) = 1;
    *puVar4 = *puVar4 + 1;
    this->UsedCount = this->UsedCount + 1;
    return true;
  }
  psVar1 = (short *)(*(longlong *)
                      ((this->RefCounts).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2);
  if (0xfffd < (ushort)(*psVar1 - 1U)) {
    *psVar1 = 1;
    this->UsedCount = this->UsedCount + 1;
    return true;
  }
  return false;
}

// Append @ 14346a060

void __thiscall
UE::Geometry::FRefCountVector::Append(FRefCountVector *this,FRefCountVector *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = (this->RefCounts).CurBlock * 0x200 + (this->RefCounts).CurBlockUsed;
  uVar5 = (param_1->RefCounts).CurBlock * 0x200 + (param_1->RefCounts).CurBlockUsed;
  uVar4 = (ulonglong)((this->FreeIndices).CurBlock * 0x200 + (this->FreeIndices).CurBlockUsed);
  TDynamicVector<unsigned_short,512>::Resize(&this->RefCounts,iVar6 + uVar5);
  uVar8 = 0;
  if (uVar5 != 0) {
    do {
      uVar1 = iVar6 + uVar8;
      uVar3 = uVar8 >> 9;
      uVar7 = uVar8 & 0x1ff;
      uVar8 = uVar8 + 1;
      *(undefined2 *)
       (*(longlong *)((this->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
       + (ulonglong)(uVar1 & 0x1ff) * 2) =
           *(undefined2 *)
            (*(longlong *)
              ((param_1->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)uVar3 * 8) +
            (ulonglong)uVar7 * 2);
    } while (uVar8 < uVar5);
  }
  TDynamicVector<int,512>::Add<512>(&this->FreeIndices,&param_1->FreeIndices);
  uVar5 = (this->FreeIndices).CurBlock;
  uVar8 = (this->FreeIndices).CurBlockUsed;
  for (; uVar4 < uVar5 * 0x200 + uVar8; uVar4 = uVar4 + 1) {
    piVar2 = (int *)(*(longlong *)
                      ((this->FreeIndices).Blocks.AllocatorInstance.Data +
                      ((uVar4 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar4 & 0x1ff) * 4);
    *piVar2 = *piVar2 + iVar6;
  }
  this->UsedCount = this->UsedCount + param_1->UsedCount;
  return;
}

// Clear @ 1434839a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FRefCountVector::Clear(FRefCountVector *this)

{
  TDynamicVector<int,512>::TruncateBlocks(&this->FreeIndices,1,No);
  (this->FreeIndices).CurBlock = 0;
  (this->FreeIndices).CurBlockUsed = 0;
  if ((this->FreeIndices).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeIndices);
  }
  TDynamicVector<unsigned_short,512>::TruncateBlocks(&this->RefCounts,1,No);
  (this->RefCounts).CurBlock = 0;
  (this->RefCounts).CurBlockUsed = 0;
  if ((this->RefCounts).Blocks.ArrayNum == 0) {
    TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this->RefCounts);
  }
  this->UsedCount = 0;
  return;
}

// Decrement @ 1434b0510

void __thiscall
UE::Geometry::FRefCountVector::Decrement(FRefCountVector *this,int param_1,ushort param_2)

{
  uint *puVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar3 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar4 = (ulonglong)(param_1 & 0x1ff) * 2;
  psVar2 = (short *)(*(longlong *)((this->RefCounts).Blocks.AllocatorInstance.Data + lVar3) + lVar4)
  ;
  *psVar2 = *psVar2 - param_2;
  if (*(short *)(lVar4 + *(longlong *)((this->RefCounts).Blocks.AllocatorInstance.Data + lVar3)) ==
      0) {
    uVar5 = (this->FreeIndices).CurBlockUsed;
    if (uVar5 == 0x200) {
      if ((this->FreeIndices).CurBlock == (this->FreeIndices).Blocks.ArrayNum - 1U) {
        TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeIndices);
      }
      (this->FreeIndices).CurBlock = (this->FreeIndices).CurBlock + 1;
      uVar5 = 0;
      (this->FreeIndices).CurBlockUsed = 0;
    }
    *(int *)(*(longlong *)
              ((this->FreeIndices).Blocks.AllocatorInstance.Data +
              (longlong)(int)(this->FreeIndices).CurBlock * 8) + (longlong)(int)uVar5 * 4) = param_1
    ;
    puVar1 = &(this->FreeIndices).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    *(undefined2 *)(lVar4 + *(longlong *)((this->RefCounts).Blocks.AllocatorInstance.Data + lVar3))
         = 0xffff;
    this->UsedCount = this->UsedCount + -1;
  }
  return;
}

// RebuildFreeList @ 143514d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FRefCountVector::RebuildFreeList(FRefCountVector *this)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  TDynamicVector<int,512>::TruncateBlocks(&this->FreeIndices,1,No);
  uVar2 = 0;
  (this->FreeIndices).CurBlock = 0;
  (this->FreeIndices).CurBlockUsed = 0;
  if ((this->FreeIndices).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeIndices);
  }
  this->UsedCount = 0;
  iVar5 = (this->RefCounts).CurBlock * 0x200 + (this->RefCounts).CurBlockUsed;
  uVar4 = uVar2;
  if (0 < iVar5) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->RefCounts).Blocks.AllocatorInstance.Data + (uVar4 >> 9) * 8)
                             + (ulonglong)((uint)uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
        this->UsedCount = this->UsedCount + 1;
      }
      else {
        uVar3 = (this->FreeIndices).CurBlockUsed;
        if (uVar3 == 0x200) {
          if ((this->FreeIndices).CurBlock == (this->FreeIndices).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeIndices);
          }
          (this->FreeIndices).CurBlock = (this->FreeIndices).CurBlock + 1;
          (this->FreeIndices).CurBlockUsed = 0;
          uVar3 = 0;
        }
        *(int *)(*(longlong *)
                  ((this->FreeIndices).Blocks.AllocatorInstance.Data +
                  (longlong)(int)(this->FreeIndices).CurBlock * 8) + (longlong)(int)uVar3 * 4) =
             (int)uVar4;
        puVar1 = &(this->FreeIndices).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar5);
  }
  return;
}

// Serialize @ 14352ad00

void __thiscall
UE::Geometry::FRefCountVector::Serialize
          (FRefCountVector *this,FArchive *param_1,bool param_2,bool param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint local_res10 [2];
  uint local_38 [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar8 < 0x38)) {
    TDynamicVector<unsigned_short,512>::Serialize<0,0>(&this->RefCounts,param_1);
    TDynamicVector<int,512>::Serialize<0,0>(&this->FreeIndices,param_1);
    ::operator<<(param_1,&this->UsedCount);
    return;
  }
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = (uint)param_2;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar14 = local_res10[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_14352ae0e;
  }
  else {
    uVar14 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
LAB_14352ae0e:
    param_2 = uVar14 != 0;
  }
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_38[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_38[0] = (uint)param_3;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38);
    if (1 < local_38[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar14 = local_38[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14352ae85;
  }
  else {
    uVar14 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  param_3 = uVar14 != 0;
LAB_14352ae85:
  puVar3 = *(undefined8 **)&param_1->field_0x8;
  piVar4 = (int *)*puVar3;
  if ((int *)puVar3[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->UsedCount);
    }
  }
  else {
    this->UsedCount = *piVar4;
    plVar5 = *(longlong **)&param_1->field_0x8;
    *plVar5 = *plVar5 + 4;
  }
  if (param_3 == false) {
    TDynamicVector<unsigned_short,512>::Serialize<1,0>(&this->RefCounts,param_1);
  }
  else {
    TDynamicVector<unsigned_short,512>::Serialize<1,1>(&this->RefCounts,param_1);
  }
  uVar10 = (ulonglong)((this->RefCounts).CurBlock * 0x200 + (this->RefCounts).CurBlockUsed);
  if ((longlong)this->UsedCount == uVar10) {
    if (((param_1->field_0x28 & 1) != 0) &&
       (((this->FreeIndices).CurBlock != 0 || ((this->FreeIndices).CurBlockUsed != 0)))) {
      TDynamicVector<int,512>::Clear(&this->FreeIndices);
    }
  }
  else if ((param_2 == false) && (param_3 == false)) {
    TDynamicVector<int,512>::Serialize<1,0>(&this->FreeIndices,param_1);
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    uVar10 = uVar10 - (longlong)this->UsedCount;
    TDynamicVector<int,512>::Resize(&this->FreeIndices,(uint)uVar10);
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = (this->RefCounts).CurBlock * 0x200 + (this->RefCounts).CurBlockUsed;
    if (uVar10 != 0 && uVar14 != 0) {
      do {
        if (*(short *)(*(longlong *)
                        ((this->RefCounts).Blocks.AllocatorInstance.Data +
                        ((uVar13 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar13 & 0x1ff) * 2)
            == -1) {
          uVar11 = (uint)uVar12;
          uVar9 = uVar12 & 0xffffffff;
          uVar12 = uVar12 + 1;
          *(uint *)(*(longlong *)
                     ((this->FreeIndices).Blocks.AllocatorInstance.Data + (uVar9 >> 9) * 8) +
                   (ulonglong)(uVar11 & 0x1ff) * 4) = (uint)uVar13;
        }
        uVar13 = uVar13 + 1;
      } while (uVar12 < uVar10 && uVar13 < uVar14);
    }
    if ((uVar12 != uVar10) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4451184765613113963>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\RefCountVector.h"
                           ,0x26b,"Index == NumFree"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// Trim @ 143553570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FRefCountVector::Trim(FRefCountVector *this,int param_1)

{
  TDynamicVector<int,512>::TruncateBlocks(&this->FreeIndices,1,No);
  (this->FreeIndices).CurBlock = 0;
  (this->FreeIndices).CurBlockUsed = 0;
  if ((this->FreeIndices).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeIndices);
  }
  TDynamicVector<unsigned_short,512>::Resize(&this->RefCounts,param_1);
  this->UsedCount = param_1;
  return;
}

// begin @ 1435cdcc0

FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> * __thiscall
UE::Geometry::FRefCountVector::FilteredEnumerable::begin
          (FilteredEnumerable *this,
          FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *__return_storage_ptr__
          )

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  FRefCountVector *local_28;
  uint local_20;
  int iStack_1c;
  FRefCountVector *local_18;
  int local_10;
  int local_c;
  
  local_28 = (this->enumerable).Vector;
  local_20 = 0;
  iStack_1c = (local_28->RefCounts).CurBlockUsed + (local_28->RefCounts).CurBlock * 0x200;
  if ((iStack_1c != 0) &&
     (pFVar2 = (local_28->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar3 = 1;
    local_20 = 1;
    if (1 < iStack_1c) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar2 + (uVar3 >> 9) * 8) +
                          (ulonglong)(local_20 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        local_20 = (int)uVar3 + 1;
        uVar3 = (ulonglong)local_20;
      } while ((int)local_20 < iStack_1c);
    }
  }
  local_18 = local_28;
  local_10 = iStack_1c;
  local_c = iStack_1c;
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
            (__return_storage_ptr__,(IndexIterator *)&local_28,(IndexIterator *)&local_18,
             &this->FilterFunc);
  return __return_storage_ptr__;
}

