// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 11

// Append<FDefaultSetAllocator> @ 14da4b310

void __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
::Append<FDefaultSetAllocator>
          (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
           *this,TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<64,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
    ::Reserve((TSparseArrayBase<64,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar2 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14da4b41d;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14da4b41d:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14da4b521;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14da4b521:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    Emplace<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_const_&>
              (this,(TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry> *)&stack0x00000020,
               (bool *)((longlong)TStack_70.CurrentBitIndex * 0x40 + *(longlong *)&param_1->Elements
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// Emplace<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_const_&> @ 14da4b8b0

FSetElementId __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
::Emplace<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_const_&>
          (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
           *this,TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry> *param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> *pFVar10;
  int iVar11;
  undefined1 *puVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>_>
                      (0x40,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar6 = TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            ::AddUninitialized((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                                *)this_00,1);
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar9 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar9;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = this_00;
    }
    *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) &
         ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_> *)0x0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar7 = CityHash64(local_38.Pointer,0x10);
  bVar4 = TryReplaceExisting(this,(uint)uVar7,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x3c) = uVar9;
      pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.SecondaryData.Data;
      if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = (ForElementType<FSetElementId> *)&(this->Hash).SecondaryData;
      }
      if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = &this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0x38) =
           *(undefined4 *)(pFVar10->InlineData + uVar8 * 4);
      *(int *)(pFVar10->InlineData + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FGuid_const_&>_> @ 14da4baa0

FSetElementId __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
          (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FGuid_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  FGuid *_Src;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_50;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  puVar9 = &(this->Elements).field_0x8;
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_50,iVar4);
  _Src = (FGuid *)0x0;
  if (local_50.Pointer != (FGuid *)0x0) {
    uVar3 = (*(undefined8 **)param_3)[1];
    *(undefined8 *)local_50.Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_50.Pointer + 8) = uVar3;
    ((FGuid *)((longlong)local_50.Pointer + 0x10))->A = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x10))->B = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x10))->C = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x10))->D = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x20))->A = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x20))->B = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x20))->C = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x20))->D = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x30))->A = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x30))->B = 0;
    ((FGuid *)((longlong)local_50.Pointer + 0x30))->C = 0xffffffff;
    _Src = local_50.Pointer;
  }
  bVar11 = false;
  iVar10 = local_50.Index;
  if (*(int *)puVar9 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar4 = FindIndexByHash<FGuid>(this,(uint)param_2,_Src);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      memmove((void *)((longlong)iVar4 * 0x40 + *(longlong *)&this->Elements),_Src,0x38);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_50.Index,1);
      iVar10 = iVar4;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar9 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      _Src[3].D = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[3].C = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = iVar10;
  return (FSetElementId)param_1;
}

// FindIndexByHash<FGuid> @ 14da4c1d0

int __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  ForElementType<FSetElementId> *pFVar2;
  uint *puVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    pFVar2 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.SecondaryData.Data;
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      pFVar2 = (ForElementType<FSetElementId> *)&(this->Hash).SecondaryData;
    }
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      pFVar2 = &this->Hash;
    }
    uVar1 = *(int *)((longlong)pFVar2->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar3[3] && param_2->C == puVar3[2]) && param_2->B == puVar3[1]) &&
            param_2->A == *puVar3) {
          return uVar1;
        }
        uVar1 = puVar3[0xe];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 14da4c280

int __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[0xe];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_> @ 14da4cc00

TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
* __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
::
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
          (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
           *this,TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
                 *param_1)

{
  undefined1 *_Dst;
  ForElementType<FSetElementId> *_Src;
  int iVar1;
  longlong lVar2;
  FLowLevelMemTracker *pFVar3;
  FPageAllocator *pFVar4;
  ForElementType<FSetElementId> *pFVar5;
  undefined1 *_Src_00;
  uint *puVar6;
  int *piVar7;
  FSetElementId *pFVar8;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData.SecondaryData.Data = (FSetElementId *)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    _Src_00 = &(param_1->Elements).field_0x10;
    if (_Dst != _Src_00) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src_00,0x10);
      }
      lVar2 = *(longlong *)&(this->Elements).field_0x20;
      if (lVar2 != 0) {
        puVar6 = (uint *)(lVar2 + -8);
        MemoryTrace_Free((ulong64)puVar6,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          pFVar3 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            pFVar3 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(pFVar3,Default,puVar6,FMalloc,true);
        }
        piVar7 = (int *)((longlong)puVar6 - (ulonglong)*puVar6);
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          lVar2 = *(longlong *)(piVar7 + 0x10);
          MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar7,0,0);
          if (lVar2 - (longlong)piVar7 == 0x10000) {
            pFVar4 = FPageAllocator::Get();
            FPageAllocator::Free(pFVar4,piVar7);
          }
          else {
            (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
          }
        }
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  pFVar5 = (ForElementType<FSetElementId> *)(param_1->Hash).SecondaryData.SecondaryData.Data;
  _Src = &(param_1->Hash).SecondaryData;
  if (pFVar5 == (ForElementType<FSetElementId> *)0x0) {
    pFVar5 = _Src;
  }
  if (pFVar5 == (ForElementType<FSetElementId> *)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  if ((param_1->Hash).SecondaryData.SecondaryData.Data == (FSetElementId *)0x0) {
    memmove(&(this->Hash).SecondaryData,_Src,0x10);
  }
  pFVar8 = (this->Hash).SecondaryData.SecondaryData.Data;
  if (pFVar8 != (FSetElementId *)0x0) {
    pFVar8 = pFVar8 + -2;
    MemoryTrace_Free((ulong64)pFVar8,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar3 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar3 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar3,Default,pFVar8,FMalloc,true);
    }
    piVar7 = (int *)((longlong)pFVar8 - (ulonglong)(uint)pFVar8->Index);
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar7 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar7,0,0);
      if (lVar2 - (longlong)piVar7 == 0x10000) {
        pFVar4 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar4,piVar7);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar7);
      }
    }
  }
  (this->Hash).SecondaryData.SecondaryData.Data = (param_1->Hash).SecondaryData.SecondaryData.Data;
  (param_1->Hash).SecondaryData.SecondaryData.Data = (FSetElementId *)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// IsValidId @ 14da50d50

bool __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
::IsValidId(TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
            *this,FSetElementId param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if ((-1 < param_1.Index) && (param_1.Index < *(int *)&(this->Elements).field_0x8)) {
    if (*(int *)&(this->Elements).field_0x28 <= param_1.Index) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_1.Index >> 5) * 4) >> (param_1.Index & 0x1fU) &
        1) != 0) {
      return true;
    }
  }
  return false;
}

// Rehash @ 14da52d10

void __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
::Rehash(TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
         *this)

{
  ForElementType<FSetElementId> *pFVar1;
  int *piVar2;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar3;
  uint uVar4;
  ForElementType<FSetElementId> *pFVar5;
  ForElementType<FSetElementId> *pFVar6;
  longlong lVar7;
  ForElementType<FSetElementId> *pFVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  ForElementType<FSetElementId> *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_40;
  
  uVar16 = this->HashSize;
  uVar17 = (ulonglong)uVar16;
  pFVar1 = &(this->Hash).SecondaryData;
  piVar2 = &this->HashSize;
  this_00 = &this->Hash;
  pFVar5 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.SecondaryData.Data;
  pFVar8 = pFVar5;
  if (pFVar5 == (ForElementType<FSetElementId> *)0x0) {
    pFVar8 = pFVar1;
  }
  uVar14 = 0;
  if ((pFVar8 != (ForElementType<FSetElementId> *)0x0) &&
     (pFVar5 != (ForElementType<FSetElementId> *)0x0)) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
    (this->Hash).SecondaryData.SecondaryData.Data = (FSetElementId *)0x0;
  }
  if ((uVar16 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
      ::ForElementType<FSetElementId>::ResizeAllocation(this_00,0,uVar16,4), 0 < (int)uVar16)) {
    uVar12 = uVar14;
    do {
      pFVar6 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.SecondaryData.Data;
      pFVar11 = (ForElementType<FSetElementId> *)pFVar1;
      if (pFVar6 != (ForElementType<FSetElementId> *)0x0) {
        pFVar11 = pFVar6;
      }
      if (pFVar11 == (ForElementType<FSetElementId> *)0x0) {
        pFVar11 = this_00;
      }
      uVar9 = uVar12 & (longlong)(int)uVar16 - 1U;
      uVar12 = uVar12 + 1;
      puVar3 = pFVar11->InlineData + uVar9 * 4;
      puVar3[0] = 0xff;
      puVar3[1] = 0xff;
      puVar3[2] = 0xff;
      puVar3[3] = 0xff;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (*piVar2 != 0) {
    uVar16 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar16 != 0) {
      puVar18 = *(uint **)&(this->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_40.Array;
      }
      uVar4 = *puVar18;
      uVar17 = uVar14;
      while (uVar4 == 0) {
        iVar13 = (int)uVar14;
        uStack_50 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_50;
        local_68 = iVar13 + 1;
        uVar14 = (ulonglong)local_68;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14da52e5b;
        uVar4 = puVar18[(longlong)iVar13 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar17 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_54 = (int)lVar7 + -1 + uStack_50;
      uVar14 = (ulonglong)uStack_54;
      if ((int)uVar16 < (int)uStack_54) {
LAB_14da52e5b:
        uVar14 = (ulonglong)uVar16;
        uStack_54 = uVar16;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar14 < (int)uVar16) {
      do {
        pcVar15 = (char *)(*(longlong *)&this->Elements + (longlong)(int)uVar14 * 0x40);
        uVar10 = CityHash64(pcVar15,0x10);
        uVar16 = *piVar2 - 1U & (uint)uVar10;
        *(uint *)(pcVar15 + 0x3c) = uVar16;
        pFVar6 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.SecondaryData.Data;
        pFVar11 = (ForElementType<FSetElementId> *)pFVar1;
        if (pFVar6 != (ForElementType<FSetElementId> *)0x0) {
          pFVar11 = pFVar6;
        }
        uVar17 = (longlong)*piVar2 - 1U & (longlong)(int)uVar16;
        if (pFVar11 == (ForElementType<FSetElementId> *)0x0) {
          pFVar11 = this_00;
        }
        *(undefined4 *)(pcVar15 + 0x38) = *(undefined4 *)(pFVar11->InlineData + uVar17 * 4);
        *(int *)(pFVar11->InlineData + uVar17 * 4) = (int)uVar14;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::FindFirstSetBit(&local_40);
        uVar14 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14da52f20

void __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14da52ff7;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14da52ff7:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x40);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x3c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x38) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Remove @ 14da53210

void __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
::Remove(TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
         *this,FSetElementId param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1.Index) && (param_1.Index < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1.Index >> 5) * 4) >> (param_1.Index & 0x1fU) &
        1) != 0) goto LAB_14da53282;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14da53282:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1.Index * 0x40 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x3c) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1.Index) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x38 + (longlong)iVar1 * 0x40);
  }
  *piVar7 = *(int *)(lVar5 + 0x38);
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1.Index,1);
  return;
}

// TryReplaceExisting @ 14da53b90

bool __thiscall
TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
::TryReplaceExisting
          (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
           *this,uint param_1,
          TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  bool bVar13;
  
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FGuid>(this,param_1,(FGuid *)param_2);
    bVar13 = iVar9 != -1;
    if (bVar13) {
      memmove((void *)((longlong)iVar9 * 0x40 + *(longlong *)&this->Elements),param_2,0x38);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if (((*(uint *)(puVar11 + lVar2) & uVar12) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x40 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0x40 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0x40 + 4 + lVar4) = uVar10;
      puVar11 = &(this->Elements).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar12;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

