// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 24

// Enumerate<TFunctionRef<void___cdecl(int)>_> @ 14333d040

void __thiscall
UE::Geometry::FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
          (FSmallListSet *this,int param_1,TFunctionRef<void___cdecl(int)> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 local_res10 [2];
  
  uVar4 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar4 != 0xffffffff) {
    uVar6 = uVar4 + 1;
    uVar5 = (ulonglong)uVar6;
    iVar1 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
    if (iVar1 < 8) {
      uVar3 = uVar6;
      while ((int)uVar3 <= (int)(uVar4 + iVar1)) {
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar5 >> 9) * 8) +
              (ulonglong)(uVar6 & 0x1ff) * 4);
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
        uVar6 = uVar6 + 1;
      }
    }
    else {
      uVar3 = uVar6;
      while ((int)uVar3 <= (int)(uVar4 + 8)) {
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar5 >> 9) * 8) +
              (ulonglong)(uVar6 & 0x1ff) * 4);
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
        uVar6 = uVar6 + 1;
      }
      uVar4 = *(uint *)(*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar4 + 9 >> 9) * 8) + (ulonglong)(uVar4 + 9 & 0x1ff) * 4);
      if (uVar4 != 0xffffffff) {
        pFVar2 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
        do {
          local_res10[0] =
               *(undefined4 *)
                (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                (ulonglong)(uVar4 & 0x1ff) * 4);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
          pFVar2 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
          uVar4 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                           (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  return;
}

// BaseValueIterator @ 143366410

BaseValueIterator * __thiscall
UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
          (BaseValueIterator *this,FSmallListSet *param_1,int param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  this->ListSet = param_1;
  this->ListIndex = param_2;
  if (param_3) {
    this->block_ptr = -1;
    this->N = 0;
    this->iCur = -1;
    this->cur_ptr = -1;
    return this;
  }
  uVar2 = *(uint *)(*(longlong *)
                     ((param_1->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  this->block_ptr = uVar2;
  if (uVar2 == 0xffffffff) {
    this->block_ptr = -1;
    this->N = 0;
    this->iCur = -1;
    this->cur_ptr = -1;
    return this;
  }
  uVar1 = uVar2 + 1;
  iVar3 = *(int *)(*(longlong *)
                    ((param_1->ListBlocks).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4);
  this->N = iVar3;
  this->iCur = uVar1;
  if (iVar3 < 8) {
    this->cur_ptr = -1;
    iVar4 = uVar2 + iVar3;
    this->iEnd = iVar4;
    uVar5 = 0xffffffff;
    if (iVar3 == 0) {
      this->block_ptr = -1;
      goto LAB_14336658e;
    }
  }
  else {
    iVar4 = uVar2 + 8;
    this->iEnd = iVar4;
    uVar5 = *(uint *)(*(longlong *)
                       ((param_1->ListBlocks).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar2 + 9 >> 9) * 8) + (ulonglong)(uVar2 + 9 & 0x1ff) * 4);
    this->cur_ptr = uVar5;
  }
  if ((int)uVar1 <= iVar4) {
    iVar3 = *(int *)(*(longlong *)
                      ((param_1->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    this->iCur = uVar2 + 2;
    this->cur_value = iVar3;
    return this;
  }
  if (uVar5 != 0xffffffff) {
    this->cur_value =
         *(int *)(*(longlong *)
                   ((param_1->LinkedListElements).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
    this->cur_ptr =
         *(int *)(*(longlong *)
                   ((param_1->LinkedListElements).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar5 + 1 >> 9) * 8) + (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
    return this;
  }
  this->block_ptr = -1;
LAB_14336658e:
  this->N = 0;
  this->iCur = -1;
  this->cur_ptr = -1;
  return this;
}

// ~FSmallListSet @ 14336a730

void __thiscall UE::Geometry::FSmallListSet::~FSmallListSet(FSmallListSet *this)

{
  FScriptContainerElement *pFVar1;
  
  TDynamicVector<int,512>::Empty(&this->LinkedListElements,0);
  pFVar1 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&this->FreeBlocks,0);
  pFVar1 = (this->FreeBlocks).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&this->ListBlocks,0);
  pFVar1 = (this->ListBlocks).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&this->ListHeads,0);
  pFVar1 = (this->ListHeads).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GotoNext @ 1433b3fd0

void __thiscall UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(BaseValueIterator *this)

{
  uint uVar1;
  int iVar2;
  
  if (this->N != 0) {
    uVar1 = this->iCur;
    if ((int)uVar1 <= this->iEnd) {
      iVar2 = *(int *)(*(longlong *)
                        ((this->ListSet->ListBlocks).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
      this->iCur = uVar1 + 1;
      this->cur_value = iVar2;
      return;
    }
    uVar1 = this->cur_ptr;
    if (uVar1 != 0xffffffff) {
      this->cur_value =
           *(int *)(*(longlong *)
                     ((this->ListSet->LinkedListElements).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
      this->cur_ptr =
           *(int *)(*(longlong *)
                     ((this->ListSet->LinkedListElements).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      return;
    }
  }
  this->iCur = -1;
  this->cur_ptr = -1;
  this->N = 0;
  this->block_ptr = -1;
  return;
}

// FSmallListSet @ 1434528d0

FSmallListSet * __thiscall UE::Geometry::FSmallListSet::FSmallListSet(FSmallListSet *this)

{
  TDynamicVector<int,512> *pTVar1;
  
  (this->ListHeads).CurBlock = 0;
  (this->ListHeads).CurBlockUsed = 0;
  (this->ListHeads).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListHeads).Blocks.ArrayNum = 0;
  (this->ListHeads).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&this->ListHeads);
  pTVar1 = &this->ListBlocks;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->ListBlocks).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListBlocks).Blocks.ArrayNum = 0;
  (this->ListBlocks).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar1 = &this->FreeBlocks;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->FreeBlocks).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeBlocks).Blocks.ArrayNum = 0;
  (this->FreeBlocks).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar1 = &this->LinkedListElements;
  this->AllocatedCount = 0;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->LinkedListElements).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedListElements).Blocks.ArrayNum = 0;
  (this->LinkedListElements).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  this->FreeHeadIndex = -1;
  return this;
}

// MappedValueIterator @ 143452950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

MappedValueIterator * __thiscall
UE::Geometry::FSmallListSet::MappedValueIterator::MappedValueIterator
          (MappedValueIterator *this,FSmallListSet *param_1,int param_2,bool param_3,
          TFunction<int___cdecl(int)> *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  BaseValueIterator::BaseValueIterator((BaseValueIterator *)this,param_1,param_2,param_3);
  *(undefined8 *)&this->MapFunc = 0;
  *(undefined8 *)&(this->MapFunc).field_0x28 = 0;
  local_58 = *(longlong *)param_4;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->MapFunc;
  uVar7 = *(undefined8 *)&(this->MapFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->MapFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->MapFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->MapFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->MapFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->MapFunc).field_0x20;
  plVar10 = *(longlong **)&(this->MapFunc).field_0x28;
  *(longlong *)&this->MapFunc = local_58;
  *(undefined8 *)&(this->MapFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->MapFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->MapFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->MapFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->MapFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->MapFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->MapFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->MapFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->MapFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar10 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return this;
}

// GetCount @ 1434bff00

int __thiscall UE::Geometry::FSmallListSet::GetCount(FSmallListSet *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  return *(int *)(*(longlong *)
                   ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
                 + (ulonglong)(uVar1 & 0x1ff) * 4);
}

// Reset @ 143518c60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FSmallListSet::Reset(FSmallListSet *this)

{
  TDynamicVector<int,512>::TruncateBlocks(&this->ListHeads,1,No);
  (this->ListHeads).CurBlock = 0;
  (this->ListHeads).CurBlockUsed = 0;
  if ((this->ListHeads).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->ListHeads);
  }
  TDynamicVector<int,512>::TruncateBlocks(&this->ListBlocks,1,No);
  (this->ListBlocks).CurBlock = 0;
  (this->ListBlocks).CurBlockUsed = 0;
  if ((this->ListBlocks).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->ListBlocks);
  }
  TDynamicVector<int,512>::TruncateBlocks(&this->FreeBlocks,1,No);
  (this->FreeBlocks).CurBlock = 0;
  (this->FreeBlocks).CurBlockUsed = 0;
  if ((this->FreeBlocks).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeBlocks);
  }
  this->AllocatedCount = 0;
  TDynamicVector<int,512>::TruncateBlocks(&this->LinkedListElements,1,No);
  (this->LinkedListElements).CurBlock = 0;
  (this->LinkedListElements).CurBlockUsed = 0;
  if ((this->LinkedListElements).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->LinkedListElements);
  }
  this->FreeHeadIndex = -1;
  return;
}

// begin @ 143557990

MappedValueIterator * __thiscall
UE::Geometry::FSmallListSet::MappedValueEnumerable::begin
          (MappedValueEnumerable *this,MappedValueIterator *__return_storage_ptr__)

{
  int iVar1;
  FSmallListSet *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  TFunction<int___cdecl(int)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->MapFunc;
  pFVar2 = this->ListSet;
  iVar1 = this->ListIndex;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = *(undefined8 **)&(this->MapFunc).field_0x28;
    puVar4 = (undefined8 *)&(this->MapFunc).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    (**(code **)*puVar4)(puVar4,&local_38.field_0x10);
  }
  MappedValueIterator::MappedValueIterator(__return_storage_ptr__,pFVar2,iVar1,false,&local_38);
  return __return_storage_ptr__;
}

// end @ 143557c10

MappedValueIterator * __thiscall
UE::Geometry::FSmallListSet::MappedValueEnumerable::end
          (MappedValueEnumerable *this,MappedValueIterator *__return_storage_ptr__)

{
  int iVar1;
  FSmallListSet *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  TFunction<int___cdecl(int)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->MapFunc;
  pFVar2 = this->ListSet;
  iVar1 = this->ListIndex;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = *(undefined8 **)&(this->MapFunc).field_0x28;
    puVar4 = (undefined8 *)&(this->MapFunc).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    (**(code **)*puVar4)(puVar4,&local_38.field_0x10);
  }
  MappedValueIterator::MappedValueIterator(__return_storage_ptr__,pFVar2,iVar1,true,&local_38);
  return __return_storage_ptr__;
}

// AllocateAt @ 1435f0c70

void __thiscall UE::Geometry::FSmallListSet::AllocateAt(FSmallListSet *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (this->ListHeads).CurBlock * 0x200 + (this->ListHeads).CurBlockUsed;
  if (param_1 < (int)uVar4) {
    if ((*(int *)(*(longlong *)
                   ((this->ListHeads).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) != -1)
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("ListHeads[ListIndex] == NullValue",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Util\\SmallListSet.cpp"
                              ,0x3c,L"FSmallListSet: list at %d is not empty!"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TDynamicVector<int,512>::InsertAt(&this->ListHeads,&NullValue,param_1);
    uVar5 = uVar4;
    if ((int)uVar4 < param_1) {
      do {
        uVar2 = uVar4 >> 9;
        uVar4 = uVar4 + 1;
        *(undefined4 *)
         (*(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
         (ulonglong)(uVar5 & 0x1ff) * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((int)uVar4 < param_1);
      return;
    }
  }
  return;
}

// AllocateBlock @ 1435f0d50

int __thiscall UE::Geometry::FSmallListSet::AllocateBlock(FSmallListSet *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (this->FreeBlocks).CurBlockUsed;
  iVar2 = (this->FreeBlocks).CurBlock * 0x200 + uVar1;
  if (iVar2 < 1) {
    uVar3 = (this->ListBlocks).CurBlock * 0x200 + (this->ListBlocks).CurBlockUsed;
    TDynamicVector<int,512>::InsertAt(&this->ListBlocks,&NullValue,uVar3 + 9);
    *(undefined4 *)
     (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8)
     + (ulonglong)(uVar3 & 0x1ff) * 4) = 0;
    this->AllocatedCount = this->AllocatedCount + 1;
  }
  else {
    uVar3 = iVar2 - 1;
    uVar3 = *(uint *)(*(longlong *)
                       ((this->FreeBlocks).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
    if (((uVar1 == 0) || ((this->FreeBlocks).CurBlockUsed = uVar1 - 1, uVar1 - 1 == 0)) &&
       (uVar1 = (this->FreeBlocks).CurBlock, uVar1 != 0)) {
      (this->FreeBlocks).CurBlockUsed = 0x200;
      (this->FreeBlocks).CurBlock = uVar1 - 1;
      return uVar3;
    }
  }
  return uVar3;
}

// AppendWithElementOffset @ 1435f10d0

void __thiscall
UE::Geometry::FSmallListSet::AppendWithElementOffset
          (FSmallListSet *this,FSmallListSet *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  uVar7 = (this->LinkedListElements).CurBlock * 0x200 + (this->LinkedListElements).CurBlockUsed;
  iVar2 = this->FreeHeadIndex;
  uVar8 = (this->ListHeads).CurBlock * 0x200 + (this->ListHeads).CurBlockUsed;
  uVar15 = (param_1->ListHeads).CurBlock * 0x200 + (param_1->ListHeads).CurBlockUsed;
  uVar9 = (this->ListBlocks).CurBlock * 0x200 + (this->ListBlocks).CurBlockUsed;
  TDynamicVector<int,512>::Resize(&this->ListHeads,uVar15 + uVar8);
  uVar17 = 0;
  uVar14 = 0;
  if (uVar15 != 0) {
    do {
      uVar12 = uVar14 + uVar8;
      uVar11 = uVar14 >> 9;
      uVar10 = uVar14 & 0x1ff;
      uVar14 = uVar14 + 1;
      *(undefined4 *)
       (*(longlong *)
         ((this->ListHeads).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8) +
       (ulonglong)(uVar12 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)
              ((param_1->ListHeads).Blocks.AllocatorInstance.Data + (ulonglong)uVar11 * 8) +
            (ulonglong)uVar10 * 4);
    } while (uVar14 < uVar15);
  }
  uVar14 = (this->ListHeads).CurBlock;
  uVar15 = (this->ListHeads).CurBlockUsed;
  uVar12 = uVar8;
  for (; (int)uVar8 < (int)(uVar14 * 0x200 + uVar15); uVar8 = uVar8 + 1) {
    lVar3 = *(longlong *)
             ((this->ListHeads).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
    iVar16 = *(int *)(lVar3 + (ulonglong)(uVar12 & 0x1ff) * 4);
    if (iVar16 != -1) {
      *(uint *)(lVar3 + (ulonglong)(uVar12 & 0x1ff) * 4) = iVar16 + uVar9;
    }
    uVar12 = uVar12 + 1;
  }
  iVar16 = (this->LinkedListElements).CurBlock * 0x200 + (this->LinkedListElements).CurBlockUsed;
  uVar8 = (param_1->LinkedListElements).CurBlock * 0x200 +
          (param_1->LinkedListElements).CurBlockUsed;
  TDynamicVector<int,512>::Resize(&this->LinkedListElements,iVar16 + uVar8);
  uVar14 = 0;
  if (uVar8 != 0) {
    do {
      uVar15 = uVar14 + iVar16;
      uVar12 = uVar14 >> 9;
      uVar11 = uVar14 & 0x1ff;
      uVar14 = uVar14 + 1;
      *(undefined4 *)
       (*(longlong *)
         ((this->LinkedListElements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8) +
       (ulonglong)(uVar15 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)
              ((param_1->LinkedListElements).Blocks.AllocatorInstance.Data + (ulonglong)uVar12 * 8)
            + (ulonglong)uVar11 * 4);
    } while (uVar14 < uVar8);
  }
  uVar8 = (this->LinkedListElements).CurBlock;
  uVar14 = (this->LinkedListElements).CurBlockUsed;
  for (uVar15 = uVar7; (int)uVar15 < (int)(uVar8 * 0x200 + uVar14); uVar15 = uVar15 + 2) {
    piVar1 = (int *)(*(longlong *)
                      ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    *piVar1 = *piVar1 + param_2;
    uVar13 = (ulonglong)(uVar15 + 1 & 0x1ff);
    lVar3 = *(longlong *)
             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar15 + 1 >> 9) * 8);
    iVar16 = *(int *)(lVar3 + uVar13 * 4);
    if (iVar16 != -1) {
      *(uint *)(lVar3 + uVar13 * 4) = iVar16 + uVar7;
    }
  }
  iVar16 = (this->ListBlocks).CurBlock * 0x200 + (this->ListBlocks).CurBlockUsed;
  uVar8 = (param_1->ListBlocks).CurBlock * 0x200 + (param_1->ListBlocks).CurBlockUsed;
  TDynamicVector<int,512>::Resize(&this->ListBlocks,uVar8 + iVar16);
  if (uVar8 != 0) {
    do {
      uVar14 = uVar17 + iVar16;
      uVar15 = uVar17 >> 9;
      uVar12 = uVar17 & 0x1ff;
      uVar17 = uVar17 + 1;
      *(undefined4 *)
       (*(longlong *)
         ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
       (ulonglong)(uVar14 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)
              ((param_1->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)uVar15 * 8) +
            (ulonglong)uVar12 * 4);
    } while (uVar17 < uVar8);
  }
  uVar8 = (this->ListBlocks).CurBlock;
  uVar14 = (this->ListBlocks).CurBlockUsed;
  for (; (int)uVar9 < (int)(uVar8 * 0x200 + uVar14); uVar9 = uVar9 + 10) {
    uVar15 = *(uint *)(*(longlong *)
                        ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4);
    if (8 < (int)uVar15) {
      uVar15 = 8;
    }
    if (0 < (int)uVar15) {
      uVar13 = (ulonglong)uVar15;
      uVar15 = uVar9;
      do {
        uVar15 = uVar15 + 1;
        piVar1 = (int *)(*(longlong *)
                          ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
        *piVar1 = *piVar1 + param_2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uVar13 = (ulonglong)(uVar9 + 9 & 0x1ff);
    lVar3 = *(longlong *)
             ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 + 9 >> 9) * 8);
    iVar16 = *(int *)(lVar3 + uVar13 * 4);
    if (iVar16 != -1) {
      *(uint *)(lVar3 + uVar13 * 4) = iVar16 + uVar7;
    }
  }
  if (param_1->FreeHeadIndex != -1) {
    iVar16 = param_1->FreeHeadIndex + uVar7;
    this->FreeHeadIndex = iVar16;
    if (iVar2 != -1) {
      pFVar4 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
      iVar6 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(iVar16 + 1U >> 9) * 8) +
                      (ulonglong)(iVar16 + 1U & 0x1ff) * 4);
      while (iVar5 = iVar6, iVar5 != -1) {
        iVar16 = iVar5;
        iVar6 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(iVar5 + 1U >> 9) * 8) +
                        (ulonglong)(iVar5 + 1U & 0x1ff) * 4);
      }
      *(int *)(*(longlong *)(pFVar4 + (ulonglong)(iVar16 + 1U >> 9) * 8) +
              (ulonglong)(iVar16 + 1U & 0x1ff) * 4) = iVar2;
    }
  }
  this->AllocatedCount = this->AllocatedCount + param_1->AllocatedCount;
  return;
}

// Clear @ 1435f3fb0

void __thiscall UE::Geometry::FSmallListSet::Clear(FSmallListSet *this,int param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  
  lVar3 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar4 = (ulonglong)(param_1 & 0x1ff) * 4;
  uVar9 = *(uint *)(lVar4 + *(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + lVar3));
  if (uVar9 != 0xffffffff) {
    pFVar11 = (this->ListBlocks).Blocks.AllocatorInstance.Data;
    lVar5 = (ulonglong)(uVar9 >> 9) * 8;
    lVar6 = (ulonglong)(uVar9 & 0x1ff) * 4;
    if (8 < *(int *)(lVar6 + *(longlong *)(pFVar11 + lVar5))) {
      lVar7 = (ulonglong)(uVar9 + 9 & 0x1ff) * 4;
      lVar8 = (ulonglong)(uVar9 + 9 >> 9) * 8;
      iVar12 = *(int *)(lVar7 + *(longlong *)(pFVar11 + lVar8));
      while (iVar12 != -1) {
        piVar2 = (int *)(*(longlong *)
                          ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                          (ulonglong)(iVar12 + 1U >> 9) * 8) + (ulonglong)(iVar12 + 1U & 0x1ff) * 4)
        ;
        iVar10 = *piVar2;
        *piVar2 = this->FreeHeadIndex;
        this->FreeHeadIndex = iVar12;
        iVar12 = iVar10;
      }
      *(undefined4 *)
       (lVar7 + *(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + lVar8)) =
           0xffffffff;
    }
    *(undefined4 *)(lVar6 + *(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + lVar5))
         = 0;
    uVar13 = (this->FreeBlocks).CurBlockUsed;
    if (uVar13 == 0x200) {
      if ((this->FreeBlocks).CurBlock == (this->FreeBlocks).Blocks.ArrayNum - 1U) {
        TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeBlocks);
      }
      (this->FreeBlocks).CurBlock = (this->FreeBlocks).CurBlock + 1;
      (this->FreeBlocks).CurBlockUsed = 0;
      uVar13 = 0;
    }
    *(uint *)(*(longlong *)
               ((this->FreeBlocks).Blocks.AllocatorInstance.Data +
               (longlong)(int)(this->FreeBlocks).CurBlock * 8) + (longlong)(int)uVar13 * 4) = uVar9;
    puVar1 = &(this->FreeBlocks).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    *(undefined4 *)(lVar4 + *(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + lVar3))
         = 0xffffffff;
  }
  return;
}

// Compact @ 1435f4ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FSmallListSet::Compact(FSmallListSet *this,int param_1)

{
  TDynamicVector<int,512> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TDynamicVector<int,512> local_68;
  TDynamicVector<int,512> local_50;
  ulonglong uVar13;
  
  if (param_1 < (int)((this->ListHeads).CurBlock * 0x200 + (this->ListHeads).CurBlockUsed)) {
    TDynamicVector<int,512>::Resize(&this->ListHeads,param_1);
  }
  uVar9 = 0;
  this->AllocatedCount = 0;
  local_68.CurBlock = 0;
  local_68.CurBlockUsed = 0;
  local_68.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Blocks.ArrayNum = 0;
  local_68.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
  local_50.CurBlock = 0;
  local_50.CurBlockUsed = 0;
  local_50.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Blocks.ArrayNum = 0;
  local_50.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_50);
  iVar10 = (this->ListHeads).CurBlock * 0x200 + (this->ListHeads).CurBlockUsed;
  if (0 < iVar10) {
    uVar11 = 2;
    uVar13 = uVar9;
    do {
      pFVar2 = (this->ListHeads).Blocks.AllocatorInstance.Data + (uVar13 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar9 & 0x1ff) * 4;
      uVar12 = *(uint *)(lVar3 + *(longlong *)pFVar2);
      if (uVar12 != 0xffffffff) {
        this->AllocatedCount = this->AllocatedCount + 1;
        *(uint *)(lVar3 + *(longlong *)pFVar2) = uVar11 - 2;
        uVar4 = uVar11 + 7;
        uVar8 = local_68.CurBlock * 0x200 + local_68.CurBlockUsed;
        if (uVar4 == uVar8) {
          uVar5 = local_68.CurBlock;
          uVar8 = local_68.CurBlockUsed;
          if (local_68.CurBlockUsed == 0x200) {
            if (local_68.CurBlock == local_68.Blocks.ArrayNum - 1U) {
              TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
            }
            uVar5 = local_68.CurBlock + 1;
            uVar8 = 0;
            local_68.CurBlockUsed = 0;
            local_68.CurBlock = uVar5;
          }
LAB_1435f514e:
          *(undefined4 *)
           (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
           (longlong)(int)uVar8 * 4) = 0xffffffff;
          local_68.CurBlockUsed = local_68.CurBlockUsed + 1;
        }
        else {
          if (uVar8 < uVar4) {
            TDynamicVector<int,512>::Resize(&local_68,uVar4);
            uVar5 = local_68.CurBlock;
            uVar8 = local_68.CurBlockUsed;
            if (local_68.CurBlockUsed == 0x200) {
              if (local_68.CurBlock == local_68.Blocks.ArrayNum - 1U) {
                TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
              }
              local_68.CurBlock = local_68.CurBlock + 1;
              local_68.CurBlockUsed = 0;
              uVar5 = local_68.CurBlock;
              uVar8 = 0;
            }
            goto LAB_1435f514e;
          }
          *(undefined4 *)
           (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
           (ulonglong)(uVar4 & 0x1ff) * 4) = 0xffffffff;
        }
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 - 2 >> 9) * 8) +
         (ulonglong)(uVar11 - 2 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8) +
              (ulonglong)(uVar12 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 - 1 >> 9) * 8) +
         (ulonglong)(uVar11 - 1 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 1 >> 9) * 8
                ) + (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) +
         (ulonglong)(uVar11 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 2 >> 9) * 8
                ) + (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 + 1 >> 9) * 8) +
         (ulonglong)(uVar11 + 1 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 3 >> 9) * 8
                ) + (ulonglong)(uVar12 + 3 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 + 2 >> 9) * 8) +
         (ulonglong)(uVar11 + 2 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 4 >> 9) * 8
                ) + (ulonglong)(uVar12 + 4 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 + 3 >> 9) * 8) +
         (ulonglong)(uVar11 + 3 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 5 >> 9) * 8
                ) + (ulonglong)(uVar12 + 5 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 + 4 >> 9) * 8) +
         (ulonglong)(uVar11 + 4 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 6 >> 9) * 8
                ) + (ulonglong)(uVar12 + 6 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 + 5 >> 9) * 8) +
         (ulonglong)(uVar11 + 5 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 7 >> 9) * 8
                ) + (ulonglong)(uVar12 + 7 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 + 6 >> 9) * 8) +
         (ulonglong)(uVar11 + 6 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 + 8 >> 9) * 8
                ) + (ulonglong)(uVar12 + 8 & 0x1ff) * 4);
        uVar12 = *(uint *)(*(longlong *)
                            ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar12 + 9 >> 9) * 8) + (ulonglong)(uVar12 + 9 & 0x1ff) * 4)
        ;
        if (uVar12 == 0xffffffff) {
          *(undefined4 *)
           (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
           (ulonglong)(uVar4 & 0x1ff) * 4) = 0xffffffff;
        }
        else {
          *(uint *)(*(longlong *)
                     (local_68.Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)(uVar4 & 0x1ff) * 4) =
               local_50.CurBlock * 0x200 + local_50.CurBlockUsed;
          uVar4 = local_50.CurBlockUsed;
          while( true ) {
            lVar3 = *(longlong *)
                     ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar12 >> 9) * 8);
            uVar8 = local_50.CurBlock;
            if (uVar4 == 0x200) {
              if (local_50.CurBlock == local_50.Blocks.ArrayNum - 1U) {
                TDynamicVector<int,512>::AddAllocatedBlock(&local_50);
              }
              uVar8 = local_50.CurBlock + 1;
              uVar4 = 0;
              local_50.CurBlockUsed = 0;
              local_50.CurBlock = uVar8;
            }
            *(undefined4 *)
             (*(longlong *)(local_50.Blocks.AllocatorInstance.Data + (longlong)(int)uVar8 * 8) +
             (longlong)(int)uVar4 * 4) = *(undefined4 *)(lVar3 + (ulonglong)(uVar12 & 0x1ff) * 4);
            uVar4 = local_50.CurBlockUsed + 1;
            uVar12 = *(uint *)(*(longlong *)
                                ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar12 + 1 >> 9) * 8) +
                              (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
            local_50.CurBlockUsed = uVar4;
            if (uVar12 == 0xffffffff) break;
            iVar6 = local_50.CurBlock * 0x200;
            if (uVar4 == 0x200) {
              if (local_50.CurBlock == local_50.Blocks.ArrayNum - 1U) {
                TDynamicVector<int,512>::AddAllocatedBlock(&local_50);
              }
              local_50.CurBlock = local_50.CurBlock + 1;
              local_50.CurBlockUsed = 0;
            }
            *(uint *)(*(longlong *)
                       (local_50.Blocks.AllocatorInstance.Data +
                       (longlong)(int)local_50.CurBlock * 8) +
                     (longlong)(int)local_50.CurBlockUsed * 4) = iVar6 + uVar4 + 1;
            uVar4 = local_50.CurBlockUsed + 1;
            local_50.CurBlockUsed = uVar4;
          }
          if (uVar4 == 0x200) {
            if (local_50.CurBlock == local_50.Blocks.ArrayNum - 1U) {
              TDynamicVector<int,512>::AddAllocatedBlock(&local_50);
            }
            local_50.CurBlock = local_50.CurBlock + 1;
            local_50.CurBlockUsed = 0;
          }
          *(undefined4 *)
           (*(longlong *)
             (local_50.Blocks.AllocatorInstance.Data + (longlong)(int)local_50.CurBlock * 8) +
           (longlong)(int)local_50.CurBlockUsed * 4) = 0xffffffff;
          local_50.CurBlockUsed = local_50.CurBlockUsed + 1;
        }
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 + 10;
    } while ((int)uVar12 < iVar10);
  }
  pTVar1 = &this->ListBlocks;
  if (pTVar1 != &local_68) {
    TDynamicVector<int,512>::Empty(pTVar1,0);
    pTVar1->CurBlock = local_68.CurBlock;
    (this->ListBlocks).CurBlockUsed = local_68.CurBlockUsed;
    pTVar7 = &(this->ListBlocks).Blocks;
    if (pTVar7 != &local_68.Blocks) {
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar7->AllocatorInstance).Data = local_68.Blocks.AllocatorInstance.Data;
      (this->ListBlocks).Blocks.ArrayNum = local_68.Blocks.ArrayNum;
      (this->ListBlocks).Blocks.ArrayMax = local_68.Blocks.ArrayMax;
      local_68.Blocks.ArrayNum = 0;
      local_68.Blocks.ArrayMax = 0;
      local_68.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_68.CurBlock = 0;
    local_68.CurBlockUsed = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
  }
  pTVar1 = &this->LinkedListElements;
  if (pTVar1 != &local_50) {
    TDynamicVector<int,512>::Empty(pTVar1,0);
    pTVar1->CurBlock = local_50.CurBlock;
    (this->LinkedListElements).CurBlockUsed = local_50.CurBlockUsed;
    pTVar7 = &(this->LinkedListElements).Blocks;
    if (pTVar7 != &local_50.Blocks) {
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar7->AllocatorInstance).Data = local_50.Blocks.AllocatorInstance.Data;
      (this->LinkedListElements).Blocks.ArrayNum = local_50.Blocks.ArrayNum;
      (this->LinkedListElements).Blocks.ArrayMax = local_50.Blocks.ArrayMax;
      local_50.Blocks.ArrayNum = 0;
      local_50.Blocks.ArrayMax = 0;
      local_50.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_50.CurBlock = 0;
    local_50.CurBlockUsed = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_50);
  }
  this->FreeHeadIndex = -1;
  TDynamicVector<int,512>::TruncateBlocks(&this->FreeBlocks,1,No);
  iVar10 = (this->FreeBlocks).Blocks.ArrayNum;
  (this->FreeBlocks).CurBlock = 0;
  (this->FreeBlocks).CurBlockUsed = 0;
  if (iVar10 == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&this->FreeBlocks);
  }
  TDynamicVector<int,512>::Empty(&local_50,0);
  if (local_50.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_68,0);
  if (local_68.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Blocks.AllocatorInstance.Data);
  }
  return;
}

// Contains @ 1435f7de0

bool __thiscall UE::Geometry::FSmallListSet::Contains(FSmallListSet *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar5 != 0xffffffff) {
    pFVar2 = (this->ListBlocks).Blocks.AllocatorInstance.Data;
    iVar1 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)(uVar5 & 0x1ff) * 4);
    uVar3 = uVar5 + 1;
    uVar4 = (ulonglong)uVar3;
    if (iVar1 < 8) {
      while ((int)uVar3 <= (int)(iVar1 + uVar5)) {
        if (*(int *)(*(longlong *)(pFVar2 + (uVar4 >> 9) * 8) + (ulonglong)((uint)uVar4 & 0x1ff) * 4
                    ) == param_2) {
          return true;
        }
        uVar3 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      }
    }
    else {
      while ((int)uVar3 <= (int)(uVar5 + 8)) {
        if (*(int *)(*(longlong *)(pFVar2 + (uVar4 >> 9) * 8) + (ulonglong)((uint)uVar4 & 0x1ff) * 4
                    ) == param_2) {
          return true;
        }
        uVar3 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      }
      uVar5 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 9 >> 9) * 8) +
                       (ulonglong)(uVar5 + 9 & 0x1ff) * 4);
      if (uVar5 != 0xffffffff) {
        pFVar2 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
        do {
          if (*(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 4) == param_2) {
            return true;
          }
          uVar5 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                           (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
        } while (uVar5 != 0xffffffff);
        return false;
      }
    }
  }
  return false;
}

// EnumerateEarlyOut @ 1435f9490

bool __thiscall
UE::Geometry::FSmallListSet::EnumerateEarlyOut
          (FSmallListSet *this,int param_1,TFunctionRef<bool___cdecl(int)> *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 local_res10 [2];
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar1 != 0xffffffff) {
    uVar4 = uVar1 + 1;
    uVar5 = (ulonglong)uVar4;
    iVar2 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (iVar2 < 8) {
      while ((int)uVar4 <= (int)(iVar2 + uVar1)) {
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar5 >> 9) * 8) +
              (ulonglong)((uint)uVar5 & 0x1ff) * 4);
        cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
        if (cVar3 == '\0') {
          return false;
        }
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      }
    }
    else {
      while ((int)uVar4 <= (int)(uVar1 + 8)) {
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar5 >> 9) * 8) +
              (ulonglong)((uint)uVar5 & 0x1ff) * 4);
        cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
        if (cVar3 == '\0') {
          return false;
        }
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      }
      for (uVar1 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar1 + 9 >> 9) * 8) + (ulonglong)(uVar1 + 9 & 0x1ff) * 4)
          ; uVar1 != 0xffffffff;
          uVar1 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4))
      {
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)
                ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
        if (cVar3 == '\0') {
          return false;
        }
      }
    }
  }
  return true;
}

// Insert @ 14360c3d0

void __thiscall UE::Geometry::FSmallListSet::Insert(FSmallListSet *this,int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar3 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar4 = (ulonglong)(param_1 & 0x1ff) * 4;
  uVar11 = *(uint *)(lVar4 + *(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + lVar3))
  ;
  if (uVar11 == 0xffffffff) {
    uVar9 = (this->FreeBlocks).CurBlockUsed;
    iVar10 = (this->FreeBlocks).CurBlock * 0x200 + uVar9;
    if (iVar10 < 1) {
      uVar11 = (this->ListBlocks).CurBlockUsed + (this->ListBlocks).CurBlock * 0x200;
      TDynamicVector<int,512>::InsertAt(&this->ListBlocks,&NullValue,uVar11 + 9);
      *(undefined4 *)
       (*(longlong *)
         ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) +
       (ulonglong)(uVar11 & 0x1ff) * 4) = 0;
      this->AllocatedCount = this->AllocatedCount + 1;
    }
    else {
      uVar11 = iVar10 - 1;
      uVar11 = *(uint *)(*(longlong *)
                          ((this->FreeBlocks).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
      if (((uVar9 == 0) || ((this->FreeBlocks).CurBlockUsed = uVar9 - 1, uVar9 - 1 == 0)) &&
         (uVar9 = (this->FreeBlocks).CurBlock, uVar9 != 0)) {
        (this->FreeBlocks).CurBlockUsed = 0x200;
        (this->FreeBlocks).CurBlock = uVar9 - 1;
      }
    }
    *(undefined4 *)
     (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8)
     + (ulonglong)(uVar11 & 0x1ff) * 4) = 0;
    *(uint *)(lVar4 + *(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + lVar3)) =
         uVar11;
  }
  pTVar12 = &(this->ListBlocks).Blocks;
  pFVar7 = (pTVar12->AllocatorInstance).Data;
  iVar10 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar11 >> 9) * 8) +
                   (ulonglong)(uVar11 & 0x1ff) * 4);
  if (iVar10 < 8) {
    uVar9 = iVar10 + 1 + uVar11;
    *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4) =
         param_2;
  }
  else {
    uVar13 = (ulonglong)(uVar11 + 9 & 0x1ff);
    uVar14 = (ulonglong)(uVar11 + 9 >> 9);
    uVar5 = *(undefined4 *)(*(longlong *)(pFVar7 + uVar14 * 8) + uVar13 * 4);
    uVar9 = this->FreeHeadIndex;
    if (uVar9 == 0xffffffff) {
      uVar9 = (this->LinkedListElements).CurBlockUsed;
      uVar6 = (this->LinkedListElements).CurBlock;
      iVar10 = uVar6 * 0x200 + uVar9;
      if (uVar9 == 0x200) {
        if (uVar6 == (this->LinkedListElements).Blocks.ArrayNum - 1U) {
          TDynamicVector<int,512>::AddAllocatedBlock(&this->LinkedListElements);
        }
        (this->LinkedListElements).CurBlock = (this->LinkedListElements).CurBlock + 1;
        uVar9 = 0;
        (this->LinkedListElements).CurBlockUsed = 0;
      }
      *(int *)(*(longlong *)
                ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                (longlong)(int)(this->LinkedListElements).CurBlock * 8) + (longlong)(int)uVar9 * 4)
           = param_2;
      puVar1 = &(this->LinkedListElements).CurBlockUsed;
      *puVar1 = *puVar1 + 1;
      uVar9 = (this->LinkedListElements).CurBlockUsed;
      if (uVar9 == 0x200) {
        if ((this->LinkedListElements).CurBlock == (this->LinkedListElements).Blocks.ArrayNum - 1U)
        {
          TDynamicVector<int,512>::AddAllocatedBlock(&this->LinkedListElements);
        }
        (this->LinkedListElements).CurBlock = (this->LinkedListElements).CurBlock + 1;
        uVar9 = 0;
        (this->LinkedListElements).CurBlockUsed = 0;
      }
      *(undefined4 *)
       (*(longlong *)
         ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
         (longlong)(int)(this->LinkedListElements).CurBlock * 8) + (longlong)(int)uVar9 * 4) = uVar5
      ;
      puVar1 = &(this->LinkedListElements).CurBlockUsed;
      *puVar1 = *puVar1 + 1;
      *(int *)(*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + uVar14 * 8) +
              uVar13 * 4) = iVar10;
    }
    else {
      pFVar7 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
      uVar8 = (ulonglong)(uVar9 + 1 >> 9);
      lVar3 = (ulonglong)(uVar9 + 1 & 0x1ff) * 4;
      this->FreeHeadIndex = *(int *)(lVar3 + *(longlong *)(pFVar7 + uVar8 * 8));
      *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4)
           = param_2;
      *(undefined4 *)
       (lVar3 + *(longlong *)((this->LinkedListElements).Blocks.AllocatorInstance.Data + uVar8 * 8))
           = uVar5;
      *(uint *)(*(longlong *)((pTVar12->AllocatorInstance).Data + uVar14 * 8) + uVar13 * 4) = uVar9;
    }
  }
  piVar2 = (int *)(*(longlong *)
                    ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8
                    ) + (ulonglong)(uVar11 & 0x1ff) * 4);
  *piVar2 = *piVar2 + 1;
  return;
}

// Move @ 1436110b0

void __thiscall UE::Geometry::FSmallListSet::Move(FSmallListSet *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->ListHeads).Blocks.AllocatorInstance.Data;
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar2 = (ulonglong)(param_1 & 0x1ff) * 4;
  *(undefined4 *)
   (*(longlong *)(pFVar3 + (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4)
       = *(undefined4 *)(lVar2 + *(longlong *)(pFVar3 + lVar1));
  *(undefined4 *)(lVar2 + *(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + lVar1)) =
       0xffffffff;
  return;
}

// Remove @ 143616c80

bool __thiscall UE::Geometry::FSmallListSet::Remove(FSmallListSet *this,int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar19;
  ulonglong uVar20;
  int iVar18;
  
  pFVar10 = (this->ListBlocks).Blocks.AllocatorInstance.Data;
  uVar6 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar2 = (ulonglong)(uVar6 >> 9) * 8;
  lVar3 = (ulonglong)(uVar6 & 0x1ff) * 4;
  iVar7 = *(int *)(lVar3 + *(longlong *)(pFVar10 + lVar2));
  iVar18 = 8;
  if (iVar7 < 8) {
    iVar18 = iVar7;
  }
  uVar17 = iVar18 + uVar6;
  uVar8 = uVar6 + 1;
  do {
    if ((int)uVar17 < (int)uVar8) {
      if (8 < iVar7) {
        uVar14 = (ulonglong)(uVar6 + 9 & 0x1ff);
        uVar8 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar6 + 9 >> 9) * 8) + uVar14 * 4);
        if (uVar8 != 0xffffffff) {
          pFVar11 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
          uVar17 = 0xffffffff;
          do {
            uVar19 = uVar8;
            uVar20 = (ulonglong)(uVar19 + 1 >> 9);
            uVar16 = (ulonglong)(uVar19 + 1 & 0x1ff);
            if (*(int *)(*(longlong *)(pFVar11 + (ulonglong)(uVar19 >> 9) * 8) +
                        (ulonglong)(uVar19 & 0x1ff) * 4) == param_2) {
              uVar9 = *(undefined4 *)(*(longlong *)(pFVar11 + uVar20 * 8) + uVar16 * 4);
              if (uVar17 == 0xffffffff) {
                *(undefined4 *)
                 (*(longlong *)(pFVar10 + (ulonglong)(uVar6 + 9 >> 9) * 8) + uVar14 * 4) = uVar9;
              }
              else {
                *(undefined4 *)
                 (*(longlong *)(pFVar11 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                 (ulonglong)(uVar17 + 1 & 0x1ff) * 4) = uVar9;
              }
              *(int *)(*(longlong *)
                        ((this->LinkedListElements).Blocks.AllocatorInstance.Data + uVar20 * 8) +
                      uVar16 * 4) = this->FreeHeadIndex;
              this->FreeHeadIndex = uVar19;
              piVar1 = (int *)(*(longlong *)
                                ((this->ListBlocks).Blocks.AllocatorInstance.Data + lVar2) + lVar3);
              *piVar1 = *piVar1 + -1;
              return true;
            }
            uVar8 = *(uint *)(*(longlong *)(pFVar11 + uVar20 * 8) + uVar16 * 4);
            uVar17 = uVar19;
          } while (uVar8 != 0xffffffff);
        }
      }
      return false;
    }
    uVar13 = uVar8 + 1;
    uVar19 = uVar8 >> 9;
    uVar15 = uVar8 & 0x1ff;
    uVar8 = uVar13;
  } while (*(int *)(*(longlong *)(pFVar10 + (ulonglong)uVar19 * 8) + (ulonglong)uVar15 * 4) !=
           param_2);
  for (; (int)uVar13 <= (int)uVar17; uVar13 = uVar13 + 1) {
    pFVar10 = (this->ListBlocks).Blocks.AllocatorInstance.Data;
    *(undefined4 *)
     (*(longlong *)(pFVar10 + (ulonglong)(uVar13 - 1 >> 9) * 8) +
     (ulonglong)(uVar13 - 1 & 0x1ff) * 4) =
         *(undefined4 *)
          (*(longlong *)(pFVar10 + (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
  }
  if (8 < iVar7) {
    uVar14 = (ulonglong)(uVar6 + 9 & 0x1ff);
    lVar12 = *(longlong *)
              ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 + 9 >> 9) * 8);
    uVar6 = *(uint *)(lVar12 + uVar14 * 4);
    lVar4 = (ulonglong)(uVar6 + 1 >> 9) * 8;
    lVar5 = (ulonglong)(uVar6 + 1 & 0x1ff) * 4;
    *(undefined4 *)(lVar12 + uVar14 * 4) =
         *(undefined4 *)
          (lVar5 + *(longlong *)((this->LinkedListElements).Blocks.AllocatorInstance.Data + lVar4));
    *(undefined4 *)
     (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8)
     + (ulonglong)(uVar17 & 0x1ff) * 4) =
         *(undefined4 *)
          (*(longlong *)
            ((this->LinkedListElements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8)
          + (ulonglong)(uVar6 & 0x1ff) * 4);
    *(int *)(lVar5 + *(longlong *)((this->LinkedListElements).Blocks.AllocatorInstance.Data + lVar4)
            ) = this->FreeHeadIndex;
    this->FreeHeadIndex = uVar6;
  }
  piVar1 = (int *)(*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + lVar2) + lVar3);
  *piVar1 = *piVar1 + -1;
  return true;
}

// RemoveFromLinkedList @ 1436173f0

bool __thiscall
UE::Geometry::FSmallListSet::RemoveFromLinkedList(FSmallListSet *this,int param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar1 = (uint *)(*(longlong *)
                     ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                     (ulonglong)(param_1 + 9U >> 9) * 8) + (ulonglong)(param_1 + 9U & 0x1ff) * 4);
  uVar3 = *puVar1;
  if (uVar3 != 0xffffffff) {
    pFVar4 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
    uVar7 = 0xffffffff;
    do {
      uVar5 = uVar3;
      uVar6 = (ulonglong)(uVar5 + 1 & 0x1ff);
      lVar2 = (ulonglong)(uVar5 + 1 >> 9) * 8;
      if (*(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar5 >> 9) * 8) +
                  (ulonglong)(uVar5 & 0x1ff) * 4) == param_2) {
        uVar3 = *(uint *)(*(longlong *)(pFVar4 + lVar2) + uVar6 * 4);
        if (uVar7 == 0xffffffff) {
          *puVar1 = uVar3;
        }
        else {
          *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                   (ulonglong)(uVar7 + 1 & 0x1ff) * 4) = uVar3;
        }
        *(int *)(*(longlong *)((this->LinkedListElements).Blocks.AllocatorInstance.Data + lVar2) +
                uVar6 * 4) = this->FreeHeadIndex;
        this->FreeHeadIndex = uVar5;
        return true;
      }
      uVar3 = *(uint *)(*(longlong *)(pFVar4 + lVar2) + uVar6 * 4);
      uVar7 = uVar5;
    } while (uVar3 != 0xffffffff);
  }
  return false;
}

// Resize @ 143618fa0

void __thiscall UE::Geometry::FSmallListSet::Resize(FSmallListSet *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (this->ListHeads).CurBlock * 0x200 + (this->ListHeads).CurBlockUsed;
  if ((int)uVar3 < param_1) {
    TDynamicVector<int,512>::Resize(&this->ListHeads,param_1);
    uVar4 = uVar3;
    do {
      uVar2 = uVar4 & 0x1ff;
      uVar1 = uVar3 >> 9;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 1;
      *(undefined4 *)
       (*(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
       (ulonglong)uVar2 * 4) = 0xffffffff;
    } while ((int)uVar3 < param_1);
  }
  return;
}

// ResizeAndAllocateBlocks @ 143619140

void __thiscall
UE::Geometry::FSmallListSet::ResizeAndAllocateBlocks(FSmallListSet *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  Reset(this);
  Resize(this,param_1);
  TDynamicVector<int,512>::Resize(&this->ListBlocks,param_1 * 10);
  uVar6 = 0;
  if (0 < param_1) {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar7 & 0x1ff;
      uVar1 = uVar6 >> 9;
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 1;
      uVar4 = (uint)uVar5;
      uVar3 = uVar5 >> 9;
      *(uint *)(*(longlong *)
                 ((this->ListHeads).Blocks.AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
               (ulonglong)uVar2 * 4) = uVar4;
      uVar5 = (ulonglong)(uVar4 + 10);
      *(undefined4 *)
       (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + uVar3 * 8) +
       (ulonglong)(uVar4 & 0x1ff) * 4) = 0;
      *(undefined4 *)
       (*(longlong *)
         ((this->ListBlocks).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 + 9 >> 9) * 8) +
       (ulonglong)(uVar4 + 9 & 0x1ff) * 4) = 0xffffffff;
    } while ((int)uVar6 < param_1);
  }
  this->AllocatedCount = param_1;
  return;
}

// Serialize @ 14361a150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FSmallListSet::Serialize
          (FSmallListSet *this,FArchive *param_1,bool param_2,bool param_3)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool local_res20;
  TDynamicVector<int,512> local_a8;
  uint local_90;
  uint local_8c;
  ulonglong local_88;
  void *local_80;
  longlong local_78;
  BaseValueIterator local_70;
  ulonglong uVar15;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar6 < 0x38)) {
    TDynamicVector<int,512>::Serialize<0,0>(&this->ListHeads,param_1);
    TDynamicVector<int,512>::Serialize<0,0>(&this->ListBlocks,param_1);
    TDynamicVector<int,512>::Serialize<0,0>(&this->FreeBlocks,param_1);
    ::operator<<(param_1,&this->AllocatedCount);
    TDynamicVector<int,512>::Serialize<0,0>(&this->LinkedListElements,param_1);
    ::operator<<(param_1,&this->FreeHeadIndex);
    return;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_90 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_90 = (uint)param_2;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_90);
    if (1 < local_90) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar13 = local_90;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14361a289;
  }
  else {
    uVar13 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  param_2 = uVar13 != 0;
LAB_14361a289:
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  piVar2 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar2) {
    local_8c = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_8c = (uint)param_3;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_8c);
    if (1 < local_8c) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    local_res20 = param_3;
    if ((param_1->field_0x28 & 1) != 0) {
      local_res20 = local_8c != 0;
    }
  }
  else {
    local_res20 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar2;
  }
  if ((param_2 == false) && (local_res20 == false)) {
    TDynamicVector<int,512>::Serialize<1,0>(&this->ListHeads,param_1);
    TDynamicVector<int,512>::Serialize<1,0>(&this->ListBlocks,param_1);
    TDynamicVector<int,512>::Serialize<1,0>(&this->FreeBlocks,param_1);
    TDynamicVector<int,512>::Serialize<1,0>(&this->LinkedListElements,param_1);
    ::operator<<(param_1,&this->AllocatedCount);
    ::operator<<(param_1,&this->FreeHeadIndex);
  }
  else {
    local_a8.CurBlock = 0;
    local_a8.CurBlockUsed = 0;
    local_a8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Blocks.ArrayNum = 0;
    local_a8.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_a8);
    if ((param_1->field_0x28 & 1) == 0) {
      iVar6 = (this->ListHeads).CurBlock * 0x200 + (this->ListHeads).CurBlockUsed;
      uVar12 = 1;
      local_88 = CONCAT44(local_88._4_4_,iVar6);
      TDynamicVector<int,512>::Resize(&local_a8,1);
      uVar17 = 0;
      uVar13 = 1;
      **(int **)local_a8.Blocks.AllocatorInstance.Data = iVar6;
      if (0 < iVar6) {
        local_78 = 0;
        do {
          iVar14 = (int)uVar17;
          uVar7 = *(uint *)(*(longlong *)
                             ((this->ListHeads).Blocks.AllocatorInstance.Data + (uVar17 >> 9) * 8) +
                           (ulonglong)((uint)local_78 & 0x1ff) * 4);
          if (uVar7 == 0xffffffff) {
            iVar16 = 0;
          }
          else {
            iVar16 = *(int *)(*(longlong *)
                               ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
          }
          uVar12 = uVar12 + iVar16 + 1;
          if (local_a8.CurBlock * 0x200 + local_a8.CurBlockUsed != uVar12) {
            uVar7 = uVar12;
            if ((int)uVar12 < 0) {
              uVar7 = uVar12 + 0x1ff;
            }
            iVar9 = (uint)((uVar12 & 0x1ff) != 0) + ((int)uVar7 >> 9);
            if (iVar9 < 1) {
              iVar9 = 1;
            }
            if (local_a8.Blocks.ArrayNum < iVar9) {
              uVar17 = (ulonglong)(uint)(iVar9 - local_a8.Blocks.ArrayNum);
              do {
                local_80 = ::operator_new(0x800);
                if (((local_a8.Blocks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80
                     ) && ((FScriptContainerElement *)&local_80 <
                           local_a8.Blocks.AllocatorInstance.Data +
                           (longlong)local_a8.Blocks.ArrayMax * 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (local_a8.Blocks.ArrayNum == local_a8.Blocks.ArrayMax) {
                  local_a8.Blocks.ArrayNum =
                       Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_a8.Blocks.AllocatorInstance,&local_a8.Blocks.ArrayMax
                                 );
                }
                lVar11 = (longlong)local_a8.Blocks.ArrayNum;
                local_a8.Blocks.ArrayNum = local_a8.Blocks.ArrayNum + 1;
                *(void **)(local_a8.Blocks.AllocatorInstance.Data + lVar11 * 8) = local_80;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
              iVar6 = (int)local_88;
            }
            else if (iVar9 < local_a8.Blocks.ArrayNum) {
              TDynamicVector<int,512>::TruncateBlocks(&local_a8,iVar9,No);
            }
            if (uVar12 == 0) {
              local_a8.CurBlock = 0;
              local_a8.CurBlockUsed = 0;
            }
            else {
              local_a8.CurBlockUsed = (uVar12 - 1 & 0x1ff) + 1;
              local_a8.CurBlock = uVar12 - 1 >> 9;
            }
          }
          uVar10 = uVar13 & 0x1ff;
          uVar7 = uVar13 >> 9;
          uVar13 = uVar13 + 1;
          *(int *)(*(longlong *)(local_a8.Blocks.AllocatorInstance.Data + (ulonglong)uVar7 * 8) +
                  (ulonglong)uVar10 * 4) = iVar16;
          if (0 < iVar16) {
            BaseValueIterator::BaseValueIterator(&local_70,this,iVar14,false);
            while (((local_70.ListSet != this || (local_70.ListIndex != iVar14)) ||
                   ((local_70.iCur != -1 || (local_70.cur_ptr != -1))))) {
              uVar10 = uVar13 & 0x1ff;
              uVar7 = uVar13 >> 9;
              uVar13 = uVar13 + 1;
              *(int *)(*(longlong *)(local_a8.Blocks.AllocatorInstance.Data + (ulonglong)uVar7 * 8)
                      + (ulonglong)uVar10 * 4) = local_70.cur_value;
              BaseValueIterator::GotoNext(&local_70);
            }
          }
          uVar17 = (ulonglong)(iVar14 + 1U);
          local_78 = local_78 + 1;
        } while ((int)(iVar14 + 1U) < iVar6);
      }
      if (local_res20 == false) {
        TDynamicVector<int,512>::Serialize<1,0>(&local_a8,param_1);
      }
      else {
        TDynamicVector<int,512>::Serialize<1,1>(&local_a8,param_1);
      }
    }
    else {
      Reset(this);
      if (local_res20 == false) {
        TDynamicVector<int,512>::Serialize<1,0>(&local_a8,param_1);
      }
      else {
        TDynamicVector<int,512>::Serialize<1,1>(&local_a8,param_1);
      }
      uVar17 = 1;
      uVar13 = local_a8.CurBlock * 0x200 + local_a8.CurBlockUsed;
      uVar15 = (ulonglong)uVar13;
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(uint **)local_a8.Blocks.AllocatorInstance.Data;
      }
      uVar12 = (this->ListHeads).CurBlock * 0x200 + (this->ListHeads).CurBlockUsed;
      if ((int)uVar12 < (int)uVar13) {
        TDynamicVector<int,512>::Resize(&this->ListHeads,uVar13);
        uVar7 = uVar12;
        do {
          uVar8 = uVar7 & 0x1ff;
          uVar10 = uVar12 >> 9;
          uVar12 = uVar12 + 1;
          uVar7 = uVar7 + 1;
          *(undefined4 *)
           (*(longlong *)((this->ListHeads).Blocks.AllocatorInstance.Data + (ulonglong)uVar10 * 8) +
           (ulonglong)uVar8 * 4) = 0xffffffff;
        } while ((int)uVar12 < (int)uVar13);
      }
      iVar6 = 0;
      uVar18 = uVar17;
      if (0 < (int)uVar13) {
        do {
          uVar18 = uVar17 + 1;
          local_88 = uVar18;
          if (uVar17 < uVar15) {
            uVar12 = *(uint *)(*(longlong *)
                                (local_a8.Blocks.AllocatorInstance.Data +
                                ((uVar17 & 0xffffffff) >> 9) * 8) +
                              (ulonglong)((uint)uVar17 & 0x1ff) * 4);
            if (0 < (int)uVar12) {
              AllocateAt(this,iVar6);
              uVar7 = uVar12;
              if (8 < (int)uVar12) {
                uVar7 = 8;
              }
              uVar17 = uVar18;
              if (0 < (int)uVar7) {
                uVar19 = (ulonglong)uVar7;
                do {
                  if (uVar18 < uVar15) {
                    iVar14 = *(int *)(*(longlong *)
                                       (local_a8.Blocks.AllocatorInstance.Data +
                                       ((uVar18 & 0xffffffff) >> 9) * 8) +
                                     (ulonglong)((uint)uVar18 & 0x1ff) * 4);
                  }
                  else {
                    iVar14 = 0;
                  }
                  Insert(this,iVar6,iVar14);
                  uVar18 = uVar18 + 1;
                  uVar19 = uVar19 - 1;
                  uVar17 = local_88;
                } while (uVar19 != 0);
              }
              if (7 < (int)(uVar12 - 1)) {
                uVar18 = (longlong)(int)(uVar12 - 1) + uVar17;
                uVar19 = (ulonglong)(uVar12 - 8);
                do {
                  if (uVar18 < uVar15) {
                    iVar14 = *(int *)(*(longlong *)
                                       (local_a8.Blocks.AllocatorInstance.Data +
                                       ((uVar18 & 0xffffffff) >> 9) * 8) +
                                     (ulonglong)((uint)uVar18 & 0x1ff) * 4);
                  }
                  else {
                    iVar14 = 0;
                  }
                  Insert(this,iVar6,iVar14);
                  uVar18 = uVar18 - 1;
                  uVar19 = uVar19 - 1;
                  uVar17 = local_88;
                } while (uVar19 != 0);
              }
              uVar18 = uVar17 + (longlong)(int)uVar12;
            }
          }
          iVar6 = iVar6 + 1;
          uVar17 = uVar18;
        } while (iVar6 < (int)uVar13);
      }
      if (uVar15 < uVar18) {
        if (2 < (byte)LogGeometry._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
        }
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    TDynamicVector<int,512>::Empty(&local_a8,0);
    if (local_a8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Blocks.AllocatorInstance.Data);
    }
  }
  return;
}

