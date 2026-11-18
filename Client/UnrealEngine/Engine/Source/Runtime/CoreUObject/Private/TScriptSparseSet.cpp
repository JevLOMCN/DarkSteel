// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// Add @ 141f6cc00

void __thiscall
TScriptSparseSet<FDefaultSetAllocator>::Add
          (TScriptSparseSet<FDefaultSetAllocator> *this,void *param_1,
          FScriptSparseSetLayout *param_2,TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
          TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4,
          TFunctionRef<void___cdecl(void_*)> *param_5,TFunctionRef<void___cdecl(void_*)> *param_6)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  TFunctionRef<unsigned_int___cdecl(void_const_*)> *pTVar13;
  TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *pTVar14;
  void *local_res10;
  TFunctionRef<unsigned_int___cdecl(void_const_*)> *local_res20;
  void *local_58;
  code *local_50 [2];
  undefined8 local_40;
  
  local_res10 = param_1;
  local_res20 = param_3;
  uVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res10);
  if ((this->Elements).Data.ArrayNum != (this->Elements).NumFreeIndices) {
    FVar12 = (this->Hash).SecondaryData;
    local_50[0] = *(code **)param_4;
    local_40 = *(undefined8 *)&param_4->field_0x8;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar12 +
                     ((longlong)this->HashSize - 1U & (longlong)(this->HashSize + -1) &
                     (longlong)(int)uVar9) * 4);
    while (iVar10 != -1) {
      pTVar14 = (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)
                ((longlong)(iVar10 * (param_2->SparseArrayLayout).Size) +
                (this->Elements).Data._padding_);
      param_4 = pTVar14;
      local_58 = param_1;
      cVar8 = (*local_50[0])(local_40,&local_58,&param_4);
      if (cVar8 != '\0') goto LAB_141f6ccf3;
      iVar10 = *(int *)(&pTVar14->field_0x0 + param_2->HashNextIdOffset);
    }
    iVar10 = -1;
LAB_141f6ccf3:
    if (iVar10 != -1) {
      pTVar13 = (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)
                ((longlong)(iVar10 * (param_2->SparseArrayLayout).Size) +
                (this->Elements).Data._padding_);
      local_res20 = pTVar13;
      (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,&local_res20);
      local_res20 = pTVar13;
      (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,&local_res20);
      return;
    }
  }
  pcVar4 = *(code **)param_5;
  uVar5 = *(undefined8 *)&param_5->field_0x8;
  uVar6 = *(undefined8 *)local_res20;
  local_40 = *(undefined8 *)&local_res20->field_0x8;
  iVar10 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
           ::AddUninitialized(&this->Elements,&param_2->SparseArrayLayout);
  local_res20 = (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)
                CONCAT44(local_res20._4_4_,iVar10);
  pTVar14 = (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)
            ((longlong)(iVar10 * (param_2->SparseArrayLayout).Size) +
            (this->Elements).Data._padding_);
  param_4 = pTVar14;
  (*pcVar4)(uVar5,&param_4);
  uVar11 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
  if (uVar11 < 4) {
    iVar10 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar7 & 0x1f);
  }
  iVar3 = this->HashSize;
  if ((iVar3 == 0) || (iVar3 < iVar10)) {
    local_50[1] = (code *)local_40;
    local_50[0] = (code *)uVar6;
    Rehash(this,param_2,(TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_50);
  }
  else {
    FVar12 = (this->Hash).SecondaryData;
    uVar9 = iVar3 - 1U & uVar9;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    puVar1 = (undefined4 *)((longlong)FVar12 + ((longlong)iVar3 - 1U & (longlong)(int)uVar9) * 4);
    *(uint *)(&pTVar14->field_0x0 + param_2->HashIndexOffset) = uVar9;
    *(undefined4 *)(&pTVar14->field_0x0 + param_2->HashNextIdOffset) = *puVar1;
    *puVar1 = local_res20._0_4_;
  }
  return;
}

// Rehash @ 141f965f0

void __thiscall
TScriptSparseSet<FDefaultSetAllocator>::Rehash
          (TScriptSparseSet<FDefaultSetAllocator> *this,FScriptSparseSetLayout *param_1,
          TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong local_res20;
  
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar6 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
  uVar10 = 1;
  piVar1 = &this->HashSize;
  iVar13 = 1;
  if (uVar6 < 4) {
    *piVar1 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar12 & 0x1f);
    *piVar1 = iVar13;
    if (iVar13 == 0) {
      return;
    }
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ResizeAllocation(&this->Hash,0,iVar13,4);
  iVar13 = *piVar1;
  iVar9 = 0;
  iVar14 = 0;
  if (0 < iVar13) {
    do {
      FVar2 = (this->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar2;
      }
      uVar7 = (ulonglong)iVar14;
      iVar14 = iVar14 + 1;
      *(undefined4 *)((longlong)FVar8 + ((longlong)iVar13 - 1U & uVar7) * 4) = 0xffffffff;
      iVar13 = *piVar1;
    } while (iVar14 < iVar13);
  }
  iVar13 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
  do {
    if (iVar13 == 0) {
      return;
    }
    if ((-1 < iVar9) && (iVar9 < (this->Elements).AllocationFlags.NumBits)) {
      if (((this->Elements).AllocationFlags.NumBits <= iVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)&(this->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar3;
      }
      iVar14 = iVar9;
      if (iVar9 < 0) {
        iVar14 = iVar9 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar11 + (longlong)(iVar14 >> 5) * 4) & uVar10) != 0) {
        lVar12 = (longlong)(iVar9 * (param_1->SparseArrayLayout).Size) +
                 (this->Elements).Data._padding_;
        local_res20 = lVar12;
        uVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)(param_1->HashIndexOffset + lVar12) = uVar6;
        FVar2 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar2;
        }
        *(undefined4 *)(param_1->HashNextIdOffset + lVar12) =
             *(undefined4 *)((longlong)FVar8 + ((longlong)*piVar1 - 1U & (longlong)(int)uVar6) * 4);
        FVar2 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar2;
        }
        iVar13 = iVar13 + -1;
        *(int *)((longlong)FVar8 + ((longlong)*piVar1 - 1U & (longlong)(int)uVar6) * 4) = iVar9;
      }
    }
    iVar9 = iVar9 + 1;
    uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
  } while( true );
}

// Add @ 1420f0c50

void __thiscall
TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
::Add(TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
      *this,void *param_1,FScriptSparseSetLayout *param_2,
     TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
     TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4,
     TFunctionRef<void___cdecl(void_*)> *param_5,TFunctionRef<void___cdecl(void_*)> *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *pTVar13;
  void *local_res8;
  undefined8 local_res10;
  TFunctionRef<bool___cdecl(void_const_*,void_const_*)> local_48;
  
  local_res8 = param_1;
  uVar7 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res8);
  if ((this->Elements).Data.ArrayNum != (this->Elements).NumFreeIndices) {
    local_48._0_8_ = *(undefined8 *)param_4;
    local_48._8_8_ = *(undefined8 *)&param_4->field_0x8;
    iVar8 = FindIndexImpl(this,param_1,param_2,uVar7,&local_48);
    if (iVar8 != -1) {
      uVar11 = (this->Elements).Data._padding_;
      if ((uVar11 & 1) != 0) {
        uVar11 = (longlong)&(this->Elements).Data._padding_ + ((longlong)uVar11 >> 0x18);
      }
      pTVar13 = (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)
                ((longlong)(iVar8 * (param_2->SparseArrayLayout).Size) + uVar11);
      param_4 = pTVar13;
      (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,&param_4);
      param_4 = pTVar13;
      (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,&param_4);
      return;
    }
  }
  uVar3 = *(undefined8 *)param_3;
  pcVar4 = *(code **)param_5;
  local_res10 = *(undefined8 *)&param_5->field_0x8;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  iVar8 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
          ::AddUninitialized(&this->Elements,&param_2->SparseArrayLayout);
  uVar11 = (this->Elements).Data._padding_;
  if ((uVar11 & 1) != 0) {
    uVar11 = (longlong)&(this->Elements).Data._padding_ + ((longlong)uVar11 >> 0x18);
  }
  pTVar13 = (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)
            ((longlong)(iVar8 * (param_2->SparseArrayLayout).Size) + uVar11);
  param_4 = pTVar13;
  (*pcVar4)(local_res10,&param_4);
  uVar9 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
  if (uVar9 < 4) {
    iVar10 = 1;
  }
  else {
    uVar11 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar6 & 0x1f);
  }
  iVar2 = this->HashSize;
  if ((iVar2 == 0) || (iVar2 < iVar10)) {
    local_48._0_8_ = uVar3;
    local_48._8_8_ = uVar5;
    Rehash(this,param_2,(TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_48);
  }
  else {
    FVar12 = this->Hash;
    uVar7 = iVar2 - 1U & uVar7;
    if (((ulonglong)FVar12 & 1) != 0) {
      FVar12 = (ForElementType<FSetElementId>)
               ((longlong)&(this->Hash).field_0x0 + ((longlong)FVar12 >> 0x18));
    }
    piVar1 = (int *)((longlong)FVar12 + ((longlong)iVar2 - 1U & (longlong)(int)uVar7) * 4);
    *(uint *)(&pTVar13->field_0x0 + param_2->HashIndexOffset) = uVar7;
    *(int *)(&pTVar13->field_0x0 + param_2->HashNextIdOffset) = *piVar1;
    *piVar1 = iVar8;
  }
  return;
}

// Empty @ 1420f6750

void __thiscall
TScriptSparseSet<FDefaultSetAllocator>::Empty
          (TScriptSparseSet<FDefaultSetAllocator> *this,int param_1,FScriptSparseSetLayout *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (param_2->SparseArrayLayout).Alignment;
  iVar5 = 0;
  iVar6 = (param_2->SparseArrayLayout).Size;
  (this->Elements).Data.ArrayNum = 0;
  if (param_1 != (this->Elements).Data.ArrayMax) {
    TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
              ((TScriptArray<TSizedDefaultAllocator<32>_> *)this,param_1,iVar6,uVar3);
  }
  (this->Elements).FirstFreeIndex = -1;
  (this->Elements).NumFreeIndices = 0;
  uVar3 = param_1 + 0x1fU & 0xffffffe0;
  (this->Elements).AllocationFlags.NumBits = 0;
  if ((this->Elements).AllocationFlags.MaxBits != uVar3) {
    (this->Elements).AllocationFlags.MaxBits = uVar3;
    TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc(&(this->Elements).AllocationFlags,0);
  }
  iVar6 = 1;
  if (3 < (uint)param_1) {
    uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((param_1 != 0) && ((this->HashSize == 0 || (this->HashSize != iVar6)))) {
    this->HashSize = iVar6;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
    ResizeAllocation(&this->Hash,0,iVar6,4);
  }
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  if (0 < this->HashSize) {
    do {
      *(undefined4 *)FVar4 = 0xffffffff;
      FVar4 = (ForElementType<FSetElementId>)((longlong)FVar4 + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < this->HashSize);
  }
  return;
}

// FindIndexImpl @ 1420f7230

int __thiscall
TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
::FindIndexImpl(TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                *this,void *param_1,FScriptSparseSetLayout *param_2,uint param_3,
               TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  longlong local_res8;
  void *local_28 [2];
  
  FVar5 = this->Hash;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForElementType<FSetElementId>)
            ((longlong)&(this->Hash).field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  iVar1 = *(int *)((longlong)FVar5 +
                  ((longlong)this->HashSize - 1U & (longlong)(int)(this->HashSize - 1U & param_3)) *
                  4);
  while( true ) {
    if (iVar1 == -1) {
      return -1;
    }
    uVar3 = (this->Elements).Data._padding_;
    if ((uVar3 & 1) != 0) {
      uVar3 = (longlong)&(this->Elements).Data._padding_ + ((longlong)uVar3 >> 0x18);
    }
    lVar4 = (longlong)(iVar1 * (param_2->SparseArrayLayout).Size) + uVar3;
    local_res8 = lVar4;
    local_28[0] = param_1;
    cVar2 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_28,&local_res8);
    if (cVar2 != '\0') break;
    iVar1 = *(int *)(param_2->HashNextIdOffset + lVar4);
  }
  return iVar1;
}

// FindIndexImpl @ 1420f7300

int __thiscall
TScriptSparseSet<FDefaultSetAllocator>::FindIndexImpl
          (TScriptSparseSet<FDefaultSetAllocator> *this,void *param_1,
          FScriptSparseSetLayout *param_2,uint param_3,
          TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  longlong local_res8;
  void *local_28 [2];
  
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  iVar1 = *(int *)((longlong)FVar4 +
                  ((longlong)this->HashSize - 1U & (longlong)(this->HashSize + -1) &
                  (longlong)(int)param_3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return -1;
    }
    lVar3 = (longlong)(iVar1 * (param_2->SparseArrayLayout).Size) + (this->Elements).Data._padding_;
    local_res8 = lVar3;
    local_28[0] = param_1;
    cVar2 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_28,&local_res8);
    if (cVar2 != '\0') break;
    iVar1 = *(int *)(param_2->HashNextIdOffset + lVar3);
  }
  return iVar1;
}

// Rehash @ 1421080c0

void __thiscall
TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
::Rehash(TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
         *this,FScriptSparseSetLayout *param_1,
        TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_2)

{
  ForElementType<FSetElementId> *this_00;
  uint uVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong uVar3;
  ForElementType<unsigned_int> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong local_res20;
  
  this_00 = &this->Hash;
  iVar5 = 0;
  FMemoryImageAllocatorBase::ResizeAllocation((FMemoryImageAllocatorBase *)this_00,0,0,4,0);
  uVar6 = 1;
  uVar1 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
  iVar7 = 1;
  if (uVar1 < 4) {
    this->HashSize = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar1 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar9 & 0x1f);
    this->HashSize = iVar7;
    if (iVar7 == 0) {
      return;
    }
  }
  FMemoryImageAllocatorBase::ResizeAllocation((FMemoryImageAllocatorBase *)this_00,0,iVar7,4,0);
  iVar7 = this->HashSize;
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      FVar2 = *this_00;
      if (((ulonglong)FVar2 & 1) != 0) {
        FVar2 = (ForElementType<FSetElementId>)
                ((longlong)&this_00->field_0x0 + ((longlong)FVar2 >> 0x18));
      }
      uVar3 = (ulonglong)iVar8;
      iVar8 = iVar8 + 1;
      *(undefined4 *)((longlong)FVar2 + ((longlong)iVar7 - 1U & uVar3) * 4) = 0xffffffff;
      iVar7 = this->HashSize;
    } while (iVar8 < iVar7);
  }
  iVar7 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
  while (iVar7 != 0) {
    if ((-1 < iVar5) && (iVar5 < (this->Elements).AllocationFlags.NumBits)) {
      FVar4 = (this->Elements).AllocationFlags.AllocatorInstance;
      if (((ulonglong)FVar4 & 1) != 0) {
        FVar4 = (ForElementType<unsigned_int>)
                ((longlong)&(this->Elements).AllocationFlags.AllocatorInstance.field_0x0 +
                ((longlong)FVar4 >> 0x18));
      }
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = iVar5 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar4 + (longlong)(iVar8 >> 5) * 4) & uVar6) != 0) {
        uVar3 = (this->Elements).Data._padding_;
        if ((uVar3 & 1) != 0) {
          uVar3 = (longlong)&(this->Elements).Data._padding_ + ((longlong)uVar3 >> 0x18);
        }
        lVar9 = (longlong)(iVar5 * (param_1->SparseArrayLayout).Size) + uVar3;
        local_res20 = lVar9;
        uVar1 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20);
        uVar1 = this->HashSize - 1U & uVar1;
        *(uint *)(param_1->HashIndexOffset + lVar9) = uVar1;
        FVar2 = *this_00;
        if (((ulonglong)FVar2 & 1) != 0) {
          FVar2 = (ForElementType<FSetElementId>)
                  ((longlong)&this_00->field_0x0 + ((longlong)FVar2 >> 0x18));
        }
        *(undefined4 *)(param_1->HashNextIdOffset + lVar9) =
             *(undefined4 *)
              ((longlong)FVar2 + ((longlong)this->HashSize - 1U & (longlong)(int)uVar1) * 4);
        FVar2 = *this_00;
        if (((ulonglong)FVar2 & 1) != 0) {
          FVar2 = (ForElementType<FSetElementId>)
                  ((longlong)&this_00->field_0x0 + ((longlong)FVar2 >> 0x18));
        }
        iVar7 = iVar7 + -1;
        *(int *)((longlong)FVar2 + ((longlong)this->HashSize - 1U & (longlong)(int)uVar1) * 4) =
             iVar5;
      }
    }
    iVar5 = iVar5 + 1;
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  }
  return;
}

// FindOrAdd @ 14213a2f0

int __thiscall
TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
::FindOrAdd(TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
            *this,void *param_1,FScriptSparseSetLayout *param_2,
           TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
           TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4,
           TFunctionRef<void___cdecl(void_*)> *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *pTVar13;
  void *local_res8;
  undefined8 local_res10;
  TFunctionRef<bool___cdecl(void_const_*,void_const_*)> local_48;
  
  local_res8 = param_1;
  uVar7 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res8);
  if ((this->Elements).Data.ArrayNum != (this->Elements).NumFreeIndices) {
    local_48._0_8_ = *(undefined8 *)param_4;
    local_48._8_8_ = *(undefined8 *)&param_4->field_0x8;
    iVar8 = FindIndexImpl(this,param_1,param_2,uVar7,&local_48);
    if (iVar8 != -1) {
      return iVar8;
    }
  }
  uVar3 = *(undefined8 *)param_3;
  pcVar4 = *(code **)param_5;
  local_res10 = *(undefined8 *)&param_5->field_0x8;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  iVar8 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
          ::AddUninitialized(&this->Elements,&param_2->SparseArrayLayout);
  uVar11 = (this->Elements).Data._padding_;
  if ((uVar11 & 1) != 0) {
    uVar11 = (longlong)&(this->Elements).Data._padding_ + ((longlong)uVar11 >> 0x18);
  }
  pTVar13 = (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)
            ((longlong)(iVar8 * (param_2->SparseArrayLayout).Size) + uVar11);
  param_4 = pTVar13;
  (*pcVar4)(local_res10,&param_4);
  uVar9 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
  if (uVar9 < 4) {
    iVar10 = 1;
  }
  else {
    uVar11 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar6 & 0x1f);
  }
  iVar2 = this->HashSize;
  if ((iVar2 == 0) || (iVar2 < iVar10)) {
    local_48._0_8_ = uVar3;
    local_48._8_8_ = uVar5;
    Rehash(this,param_2,(TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_48);
  }
  else {
    FVar12 = this->Hash;
    uVar7 = iVar2 - 1U & uVar7;
    if (((ulonglong)FVar12 & 1) != 0) {
      FVar12 = (ForElementType<FSetElementId>)
               ((longlong)&(this->Hash).field_0x0 + ((longlong)FVar12 >> 0x18));
    }
    piVar1 = (int *)((longlong)FVar12 + ((longlong)iVar2 - 1U & (longlong)(int)uVar7) * 4);
    *(uint *)(&pTVar13->field_0x0 + param_2->HashIndexOffset) = uVar7;
    *(int *)(&pTVar13->field_0x0 + param_2->HashNextIdOffset) = *piVar1;
    *piVar1 = iVar8;
  }
  return iVar8;
}

// RemoveAt @ 142149f40

void __thiscall
TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
::RemoveAt(TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
           *this,int param_1,FScriptSparseSetLayout *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  ulonglong uVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  int *piVar11;
  
  if ((-1 < param_1) && (param_1 < (this->Elements).AllocationFlags.NumBits)) {
    FVar6 = (this->Elements).AllocationFlags.AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForElementType<unsigned_int>)
              ((longlong)&(this->Elements).AllocationFlags.AllocatorInstance.field_0x0 +
              ((longlong)FVar6 >> 0x18));
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1)
        != 0) goto LAB_142149fb3;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptSparseSet.h"
                     ,0x95,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_142149fb3:
  uVar3 = (this->Elements).Data._padding_;
  uVar7 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar7 = (longlong)&(this->Elements).Data._padding_ + ((longlong)uVar3 >> 0x18);
  }
  iVar1 = (param_2->SparseArrayLayout).Size;
  FVar9 = this->Hash;
  lVar10 = (longlong)(iVar1 * param_1) + uVar7;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForElementType<FSetElementId>)
            ((longlong)&(this->Hash).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  lVar8 = (longlong)(int)(this->HashSize - 1U & *(uint *)(param_2->HashIndexOffset + lVar10));
  piVar11 = (int *)((longlong)FVar9 + lVar8 * 4);
  iVar2 = *(int *)((longlong)FVar9 + lVar8 * 4);
  do {
    if (iVar2 == -1) {
LAB_14214a047:
      TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
      ::RemoveAtUninitialized(&this->Elements,&param_2->SparseArrayLayout,param_1,1);
      return;
    }
    if (iVar2 == param_1) {
      *piVar11 = *(int *)(param_2->HashNextIdOffset + lVar10);
      goto LAB_14214a047;
    }
    uVar7 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar7 = (longlong)&(this->Elements).Data._padding_ + ((longlong)uVar3 >> 0x18);
    }
    piVar11 = (int *)((longlong)param_2->HashNextIdOffset + (longlong)(iVar1 * iVar2) + uVar7);
    iVar2 = *piVar11;
  } while( true );
}

// RemoveAt @ 14214a080

void __thiscall
TScriptSparseSet<FDefaultSetAllocator>::RemoveAt
          (TScriptSparseSet<FDefaultSetAllocator> *this,int param_1,FScriptSparseSetLayout *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  undefined4 *puVar12;
  uint uVar13;
  TScriptBitArray<FDefaultBitArrayAllocator,void> *pTVar14;
  int *piVar15;
  longlong lVar16;
  
  if ((param_1 < 0) || ((this->Elements).AllocationFlags.NumBits <= param_1)) {
    uVar7 = (int)((param_1 >> 0x1f & 0x1fU) + param_1) >> 5;
  }
  else {
    FVar9 = (this->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    uVar7 = (uint)param_1 >> 5;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&(this->Elements).AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar9 + (ulonglong)uVar7 * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14214a110;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptSparseSet.h"
                     ,0x95,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14214a110:
  pTVar14 = &(this->Elements).AllocationFlags;
  FVar11 = (this->Hash).SecondaryData;
  iVar8 = (param_2->SparseArrayLayout).Size;
  lVar3 = (this->Elements).Data._padding_;
  lVar16 = iVar8 * param_1 + lVar3;
  lVar10 = (longlong)(int)(*(uint *)(param_2->HashIndexOffset + lVar16) & this->HashSize - 1U);
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar15 = (int *)((longlong)FVar11 + lVar10 * 4);
  iVar2 = *(int *)((longlong)FVar11 + lVar10 * 4);
  do {
    if (iVar2 == -1) {
LAB_14214a177:
      bVar5 = (byte)param_1 & 0x1f;
      uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if (((param_1 < 0) || ((this->Elements).AllocationFlags.NumBits <= param_1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9 = (this->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar14;
      }
      if (((*(uint *)((longlong)FVar9 + (longlong)(int)uVar7 * 4) & uVar13) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0x649,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->Elements).NumFreeIndices != 0) {
        *(int *)((longlong)((this->Elements).FirstFreeIndex * (param_2->SparseArrayLayout).Size) +
                (this->Elements).Data._padding_) = param_1;
      }
      iVar8 = -1;
      puVar12 = (undefined4 *)
                ((longlong)(param_1 * (param_2->SparseArrayLayout).Size) +
                (this->Elements).Data._padding_);
      *puVar12 = 0xffffffff;
      if (0 < (this->Elements).NumFreeIndices) {
        iVar8 = (this->Elements).FirstFreeIndex;
      }
      puVar12[1] = iVar8;
      piVar15 = &(this->Elements).NumFreeIndices;
      *piVar15 = *piVar15 + 1;
      (this->Elements).FirstFreeIndex = param_1;
      if (((param_1 < 0) || ((this->Elements).AllocationFlags.NumBits <= param_1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9 = (this->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar14;
      }
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(int)uVar7 * 4);
      *puVar1 = *puVar1 & ~uVar13;
      return;
    }
    if (iVar2 == param_1) {
      *piVar15 = *(int *)(param_2->HashNextIdOffset + lVar16);
      goto LAB_14214a177;
    }
    piVar15 = (int *)(iVar8 * iVar2 + lVar3 + (longlong)param_2->HashNextIdOffset);
    iVar2 = *piVar15;
  } while( true );
}

