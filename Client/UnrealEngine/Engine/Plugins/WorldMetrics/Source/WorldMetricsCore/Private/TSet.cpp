// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 11

// Emplace<UObject_*_&> @ 14f131280

FSetElementId __thiscall
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Emplace<UObject_*_&>
          (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,UObject **param_1,bool *param_2)

{
  int iVar1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  int iVar12;
  char *in_R9;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = *(int *)&(this->Elements).field_0x22c;
  if (iVar12 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                      (0x10,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x208,
                       (int *)&(this->Elements).field_0x20c);
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &(this->Elements).field_0x210,false);
  }
  else {
    pTVar2 = *(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               **)&(this->Elements).field_0x200;
    iVar4 = *(int *)&(this->Elements).field_0x228;
    pTVar5 = this;
    if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar5 = pTVar2;
    }
    iVar1 = *(int *)(&(pTVar5->Elements).field_0x4 + (longlong)iVar4 * 0x10);
    iVar12 = iVar12 + -1;
    *(int *)&(this->Elements).field_0x228 = iVar1;
    *(int *)&(this->Elements).field_0x22c = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar8 = *(ulonglong *)local_48.Pointer;
  bVar13 = false;
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar12 = *(int *)&(this->Elements).field_0x208;
  iVar4 = *(int *)&(this->Elements).field_0x22c;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar12 - iVar4 != 1) && (iVar12 != iVar4)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      pTVar2 = *(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x200;
      do {
        pTVar5 = this;
        if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        if (*(ulonglong *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar12 * 0x10) == uVar8) {
          bVar13 = iVar12 != -1;
          if (bVar13) {
            pTVar5 = this;
            if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                           *)0x0) {
              pTVar5 = pTVar2;
            }
            *(ulonglong *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar12 * 0x10) = uVar8;
            TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar12;
          }
          break;
        }
        pTVar5 = this;
        if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        iVar12 = *(int *)(&(pTVar5->Elements).field_0x8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x208 - *(int *)&(this->Elements).field_0x22c;
    uVar7 = 1;
    if (uVar9 >> 1 != 0) {
      uVar7 = uVar9 >> 1;
    }
    uVar8 = (ulonglong)(uVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
    uVar7 = 0x10;
    if ((0xf < uVar11) && (uVar7 = uVar11, uVar9 < 4)) {
      uVar7 = 0x10;
    }
    if (((int)uVar9 < 1) || ((int)uVar7 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 8) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = uVar7;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&>_> @ 14f131530

FSetElementId __thiscall
TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Emplace<TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&>_>
          (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&> *param_1,bool *param_2
          )

{
  int iVar1;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  UObject *pUVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  bool bVar14;
  TObjectPtr<UClass>_u_0 local_res10;
  void *local_48;
  TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension> *local_40;
  
  iVar12 = *(int *)&(this->Elements).field_0x29ac;
  if (iVar12 == 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_>_>
                      (0x298,8,1,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_> *)
                       this,(int *)&(this->Elements).field_0x2988,
                       (int *)&(this->Elements).field_0x298c);
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &(this->Elements).field_0x2990,false);
  }
  else {
    pTVar2 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               **)&(this->Elements).field_0x2980;
    iVar5 = *(int *)&(this->Elements).field_0x29a8;
    pTVar10 = this;
    if (pTVar2 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar10 = pTVar2;
    }
    iVar12 = iVar12 + -1;
    iVar1 = *(int *)(&(pTVar10->Elements).field_0x4 + (longlong)iVar5 * 0x298);
    *(int *)&(this->Elements).field_0x29a8 = iVar1;
    *(int *)&(this->Elements).field_0x29ac = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(&(pTVar10->Elements).field_0x0 + (longlong)iVar1 * 0x298) = 0xffffffff;
    }
  }
  TSparseArrayBase<664,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AllocateIndex((TSparseArrayBase<664,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar5);
  if (local_40 !=
      (TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension> *)0x0) {
    TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&>::
    operator<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>
              ((TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&> *)param_2,local_40);
    *(undefined4 *)(local_40 + 1) = 0xffffffff;
  }
  iVar12 = (int)local_48;
  pUVar3 = *(UObject **)local_40;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar14 = false;
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x2988 - *(int *)&(this->Elements).field_0x29ac != 1) {
    local_res10.DebugPtr = *(UClass **)local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *)local_res10.DebugPtr !=
        (TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    iVar5 = FindIndexByHash<TSubclassOf<UWorldMetricsExtension_const_>_>
                      (this,uVar6,
                       (TSubclassOf<UWorldMetricsExtension_const_> *)&local_res10.ObjectPtr);
    bVar14 = iVar5 != -1;
    if (bVar14) {
      pTVar2 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x2980;
      pTVar10 = this;
      if (pTVar2 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar10 = pTVar2;
      }
      local_48 = &(pTVar10->Elements).field_0x0 + (longlong)iVar5 * 0x298;
      local_res10.DebugPtr = (UClass *)((longlong)local_48 + 0x10);
      *(undefined4 *)((longlong)local_48 + 0x288) = 0;
      if (*(void **)((longlong)local_48 + 0x280) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_48 + 0x280));
      }
      TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                ((TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)local_res10.DebugPtr);
      memmove(local_48,local_40,0x290);
      TSparseArrayBase<664,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<664,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)this,iVar12,1);
      iVar12 = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x2988 - *(int *)&(this->Elements).field_0x29ac;
    uVar7 = 1;
    if (uVar9 >> 1 != 0) {
      uVar7 = uVar9 >> 1;
    }
    uVar8 = (ulonglong)(uVar7 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
    uVar7 = 8;
    if ((7 < uVar13) && (uVar7 = uVar13, uVar9 < 4)) {
      uVar7 = 8;
    }
    if (((int)uVar9 < 1) || ((int)uVar7 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)&local_40[1].field_0x4 = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(local_40 + 1) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = iVar12;
    }
    else {
      this->HashSize = uVar7;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar12;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<TSubclassOf<UWorldMetricsExtension_const_>_> @ 14f131820

int __thiscall
TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::FindIndexByHash<TSubclassOf<UWorldMetricsExtension_const_>_>
          (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,uint param_1,TSubclassOf<UWorldMetricsExtension_const_> *param_2)

{
  int iVar1;
  int iVar2;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar3;
  bool bVar4;
  UClass *pUVar5;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  ForElementType<FSetElementId> FVar9;
  
  if (*(int *)&(this->Elements).field_0x2988 != *(int *)&(this->Elements).field_0x29ac) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(&(pTVar6->Elements).field_0x290 + (longlong)iVar1 * 0x298)) {
      pUVar7 = (param_2->Class).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pTVar3 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x2980;
      pTVar6 = this;
      if (pTVar3 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar6 = pTVar3;
      }
      pUVar8 = *(UClass **)(&(pTVar6->Elements).field_0x0 + (longlong)iVar1 * 0x298);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar8 != (UClass *)0x0) goto LAB_14f1318d5;
LAB_14f131903:
        pUVar8 = (UClass *)0x0;
      }
      else {
        if (pUVar8 == (UClass *)0x0) goto LAB_14f131903;
        UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14f1318d5:
        pUVar5 = UWorldMetricsExtension::StaticClass();
        if (pUVar5 == (UClass *)0x0) goto LAB_14f131903;
        iVar2 = (int)pUVar5->_padding_;
        if (((int)pUVar8->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14f131903;
      }
      if ((pUVar7 == (UClass *)0x0) ||
         (pUVar5 = UWorldMetricsExtension::StaticClass(), pUVar5 == (UClass *)0x0)) {
LAB_14f131938:
        pUVar7 = (UClass *)0x0;
      }
      else {
        iVar2 = (int)pUVar5->_padding_;
        if (((int)pUVar7->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14f131938;
      }
      if (pUVar8 == pUVar7) {
        return iVar1;
      }
      pTVar3 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x2980;
      pTVar6 = this;
      if (pTVar3 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar6 = pTVar3;
      }
    }
  }
  return -1;
}

// RemoveImpl<UObject_const_*> @ 14f132ab0

int __thiscall
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::RemoveImpl<UObject_const_*>
          (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,uint param_1,UObject **param_2)

{
  uint uVar1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint *puVar11;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar12;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar8 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  pTVar2 = *(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             **)&(this->Elements).field_0x200;
  while( true ) {
    pTVar7 = this;
    if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar7 = pTVar2;
    }
    lVar9 = (longlong)(int)uVar8 * 0x10;
    if (*(UObject **)(&(pTVar7->Elements).field_0x0 + lVar9) == *param_2) break;
    uVar8 = *(uint *)(&(pTVar7->Elements).field_0x8 + lVar9);
    if (uVar8 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Elements).field_0x220)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x218;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x210;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_14f132b9c;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14f132b9c:
  pTVar2 = *(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             **)&(this->Elements).field_0x200;
  FVar6 = (this->Hash).SecondaryData;
  pTVar7 = this;
  if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)0x0) {
    pTVar7 = pTVar2;
  }
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar11 = (uint *)((longlong)FVar6 + (longlong)*(int *)(&(pTVar7->Elements).field_0xc + lVar9) * 4
                    );
  while( true ) {
    uVar1 = *puVar11;
    if (uVar1 == 0xffffffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    if (uVar1 == uVar8) break;
    pTVar2 = *(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               **)&(this->Elements).field_0x200;
    pTVar12 = this;
    if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar12 = pTVar2;
    }
    puVar11 = (uint *)(&(pTVar12->Elements).field_0x8 + (longlong)(int)uVar1 * 0x10);
  }
  *puVar11 = *(uint *)(&(pTVar7->Elements).field_0x8 + lVar9);
  TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)this,uVar8,1);
  return 1;
}

// RemoveImpl<TSubclassOf<UWorldMetricsExtension_const_>_> @ 14f132c60

int __thiscall
TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::RemoveImpl<TSubclassOf<UWorldMetricsExtension_const_>_>
          (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,uint param_1,TSubclassOf<UWorldMetricsExtension_const_> *param_2)

{
  uint uVar1;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ForElementType<FSetElementId> FVar7;
  UClass *pUVar8;
  uint uVar9;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar10;
  UClass *pUVar11;
  uint *puVar12;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar13;
  undefined1 *puVar14;
  longlong lVar15;
  
  FVar7 = (this->Hash).SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar7 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  do {
    pTVar2 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               **)&(this->Elements).field_0x2980;
    pUVar8 = (param_2->Class).field0_0x0.DebugPtr;
    pTVar10 = this;
    if (pTVar2 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar10 = pTVar2;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    lVar15 = (longlong)(int)uVar9 * 0x298;
    pUVar11 = *(UClass **)(&(pTVar10->Elements).field_0x0 + lVar15);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar11 != (UClass *)0x0) goto LAB_14f132d1a;
LAB_14f132d48:
      pUVar11 = (UClass *)0x0;
    }
    else {
      if (pUVar11 == (UClass *)0x0) goto LAB_14f132d48;
      UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14f132d1a:
      pUVar6 = UWorldMetricsExtension::StaticClass();
      if (pUVar6 == (UClass *)0x0) goto LAB_14f132d48;
      iVar5 = (int)pUVar6->_padding_;
      if (((int)pUVar11->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14f132d48;
    }
    if ((pUVar8 == (UClass *)0x0) ||
       (pUVar6 = UWorldMetricsExtension::StaticClass(), pUVar6 == (UClass *)0x0)) {
LAB_14f132d7d:
      pUVar8 = (UClass *)0x0;
    }
    else {
      iVar5 = (int)pUVar6->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14f132d7d;
    }
    if (pUVar11 == pUVar8) {
      if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x29a0)) {
        puVar14 = *(undefined1 **)&(this->Elements).field_0x2998;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(this->Elements).field_0x2990;
        }
        if ((*(uint *)(puVar14 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
             >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14f132e18;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Elements.IsValidIndex(ElementIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
LAB_14f132e18:
      pTVar2 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x2980;
      FVar7 = (this->Hash).SecondaryData;
      pTVar10 = this;
      if (pTVar2 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar10 = pTVar2;
      }
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      puVar12 = (uint *)((longlong)FVar7 +
                        (longlong)*(int *)(&(pTVar10->Elements).field_0x294 + lVar15) * 4);
      while( true ) {
        uVar1 = *puVar12;
        if ((uVar1 == 0xffffffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar4)) break;
        if (uVar1 == uVar9) {
          *puVar12 = *(uint *)(&(pTVar10->Elements).field_0x290 + lVar15);
          TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          ::DestroyElements(&this->Elements,uVar9,1);
          TSparseArrayBase<664,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<664,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,uVar9,1);
          return 1;
        }
        pTVar2 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   **)&(this->Elements).field_0x2980;
        pTVar13 = this;
        if (pTVar2 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar13 = pTVar2;
        }
        puVar12 = (uint *)(&(pTVar13->Elements).field_0x290 + (longlong)(int)uVar1 * 0x298);
      }
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    uVar9 = *(uint *)(&(pTVar10->Elements).field_0x290 + lVar15);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  } while( true );
}

// TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_> @ 14f133000

TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
* __thiscall
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  *(undefined8 *)&(this->Elements).field_0x200 = 0;
  *(undefined4 *)&(this->Elements).field_0x208 = 0;
  *(undefined4 *)&(this->Elements).field_0x20c = 0x20;
  *(undefined8 *)&(this->Elements).field_0x218 = 0;
  *(undefined4 *)&(this->Elements).field_0x220 = 0;
  *(undefined4 *)&(this->Elements).field_0x224 = 0x20;
  *(undefined4 *)&(this->Elements).field_0x228 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x22c = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    if (*(longlong *)&(param_1->Elements).field_0x200 == 0) {
      memmove(this,param_1,0x200);
    }
    pvVar3 = *(void **)&(this->Elements).field_0x200;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    puVar1 = &(param_1->Elements).field_0x210;
    *(undefined8 *)&(this->Elements).field_0x200 = *(undefined8 *)&(param_1->Elements).field_0x200;
    puVar2 = &(this->Elements).field_0x210;
    *(undefined8 *)&(param_1->Elements).field_0x200 = 0;
    *(undefined4 *)&(this->Elements).field_0x208 = *(undefined4 *)&(param_1->Elements).field_0x208;
    *(undefined4 *)&(this->Elements).field_0x20c = *(undefined4 *)&(param_1->Elements).field_0x20c;
    *(undefined4 *)&(param_1->Elements).field_0x208 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x20c = 0x20;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->Elements).field_0x218 == 0) {
        *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
      }
      pvVar3 = *(void **)&(this->Elements).field_0x218;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Elements).field_0x218 = *(undefined8 *)&(param_1->Elements).field_0x218
      ;
      *(undefined8 *)&(param_1->Elements).field_0x218 = 0;
      *(undefined4 *)&(this->Elements).field_0x220 = *(undefined4 *)&(param_1->Elements).field_0x220
      ;
      *(undefined4 *)&(this->Elements).field_0x224 = *(undefined4 *)&(param_1->Elements).field_0x224
      ;
      *(undefined8 *)&(param_1->Elements).field_0x220 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x228 = *(undefined4 *)&(param_1->Elements).field_0x228;
    *(undefined4 *)&(this->Elements).field_0x22c = *(undefined4 *)&(param_1->Elements).field_0x22c;
    *(undefined4 *)&(param_1->Elements).field_0x228 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x22c = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    memmove(&this->Hash,&param_1->Hash,0x40);
  }
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// Rehash @ 14f137bf0

void __thiscall
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Rehash(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_40;
  
  this_00 = &this->Hash;
  piVar1 = &this->HashSize;
  uVar6 = *piVar1;
  uVar12 = (ulonglong)uVar6;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  if ((uVar6 != 0) &&
     (TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar6,4), 0 < (int)uVar6)) {
    uVar8 = uVar10;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar3;
      }
      uVar5 = uVar8 & (longlong)(int)uVar6 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
         &(this->Elements).field_0x210;
    local_68 = 0;
    uVar6 = *(uint *)&(this->Elements).field_0x220;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar6 != 0) {
      puVar14 = *(uint **)&(this->Elements).field_0x218;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_40.Array;
      }
      uVar2 = *puVar14;
      uVar12 = uVar10;
      while (uVar2 == 0) {
        iVar9 = (int)uVar10;
        uStack_50 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_50;
        local_68 = iVar9 + 1;
        uVar10 = (ulonglong)local_68;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14f137d3b;
        uVar2 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar12 = (ulonglong)uStack_64 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uStack_54 = (int)lVar13 + -1 + uStack_50;
      uVar10 = (ulonglong)uStack_54;
      if ((int)uVar6 < (int)uStack_54) {
LAB_14f137d3b:
        uVar10 = (ulonglong)uVar6;
        uStack_54 = uVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar10 < (int)uVar6) {
      do {
        pTVar4 = *(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   **)&(this->Elements).field_0x200;
        lVar13 = (longlong)(int)uVar10;
        pTVar11 = this;
        if (pTVar4 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar11 = pTVar4;
        }
        uVar12 = *(ulonglong *)(&(pTVar11->Elements).field_0x0 + lVar13 * 0x10);
        uVar6 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)(&(pTVar11->Elements).field_0xc + lVar13 * 0x10) = uVar6;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar12 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(&(pTVar11->Elements).field_0x8 + lVar13 * 0x10) =
             *(undefined4 *)((longlong)FVar7 + uVar12 * 4);
        *(int *)((longlong)FVar7 + uVar12 * 4) = (int)uVar10;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&local_40);
        uVar10 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14f137e20

void __thiscall
TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Rehash(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar4;
  UObject *pUVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_40;
  
  this_00 = &this->Hash;
  piVar1 = &this->HashSize;
  uVar8 = *piVar1;
  uVar15 = (ulonglong)uVar8;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar14 = 0;
  if ((uVar8 != 0) &&
     (TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar8,4), 0 < (int)uVar8)) {
    uVar10 = uVar14;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar3;
      }
      uVar7 = uVar10 & (longlong)(int)uVar8 - 1U;
      uVar10 = uVar10 + 1;
      *(undefined4 *)((longlong)FVar9 + uVar7 * 4) = 0xffffffff;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
         &(this->Elements).field_0x2990;
    local_68 = 0;
    uVar8 = *(uint *)&(this->Elements).field_0x29a0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar8 != 0) {
      puVar16 = *(uint **)&(this->Elements).field_0x2998;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)local_40.Array;
      }
      uVar2 = *puVar16;
      uVar15 = uVar14;
      while (uVar2 == 0) {
        iVar13 = (int)uVar14;
        uStack_50 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_50;
        local_68 = iVar13 + 1;
        uVar14 = (ulonglong)local_68;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14f137f6b;
        uVar2 = puVar16[(longlong)iVar13 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar15 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uStack_54 = (int)lVar6 + -1 + uStack_50;
      uVar14 = (ulonglong)uStack_54;
      if ((int)uVar8 < (int)uStack_54) {
LAB_14f137f6b:
        uVar14 = (ulonglong)uVar8;
        uStack_54 = uVar8;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar14 < (int)uVar8) {
      do {
        pTVar4 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   **)&(this->Elements).field_0x2980;
        pTVar11 = this;
        if (pTVar4 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar11 = pTVar4;
        }
        puVar12 = (undefined8 *)(&(pTVar11->Elements).field_0x0 + (longlong)(int)uVar14 * 0x298);
        pUVar5 = (UObject *)*puVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        uVar8 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar12 + 0x294) = uVar8;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar15 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar12 + 0x52) = *(undefined4 *)((longlong)FVar9 + uVar15 * 4);
        *(int *)((longlong)FVar9 + uVar15 * 4) = (int)uVar14;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&local_40);
        uVar14 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Remove @ 14f138300

int __thiscall
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Remove(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
         *this,UObject *param_1)

{
  int iVar1;
  uint uVar2;
  UObject *local_res10 [3];
  
  if (*(int *)&(this->Elements).field_0x208 != *(int *)&(this->Elements).field_0x22c) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res10[0] = param_1;
    iVar1 = RemoveImpl<UObject_const_*>(this,uVar2 >> 0x10 ^ uVar2,local_res10);
    return iVar1;
  }
  return 0;
}

// Reset @ 14f138fb0

void __thiscall
TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Reset(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        *this)

{
  undefined1 *puVar1;
  
  if (*(int *)&(this->Elements).field_0x2988 != *(int *)&(this->Elements).field_0x29ac) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x2988);
    puVar1 = &(this->Elements).field_0x298c;
    *(undefined4 *)&(this->Elements).field_0x2988 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_>_>
                (0x298,8,0,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_> *)this,0
                 ,(int *)puVar1);
    }
    *(undefined4 *)&(this->Elements).field_0x29ac = 0;
    *(undefined4 *)&(this->Elements).field_0x29a0 = 0;
    *(undefined4 *)&(this->Elements).field_0x29a8 = 0xffffffff;
  }
  return;
}

// UnhashElements @ 14f139730

void __thiscall
TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::UnhashElements(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar5;
  code *pcVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  longlong lVar9;
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x2988 - *(int *)&(this->Elements).field_0x29ac;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  puVar1 = &(this->Elements).field_0x2990;
  iVar3 = *(int *)&(this->Elements).field_0x29a0;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x2998;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14f13983b;
      uVar11 = puVar14[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14f13983b:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->Elements).field_0x29a0;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar12 = (int)uVar11 >> 5;
  uVar15 = uVar11 & 0xffffffe0;
  local_60.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar7 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x29a0;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Elements).field_0x2998;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14f139930;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14f139930:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x2988 - *(int *)&(this->Elements).field_0x29ac != local_40)
    {
      `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array ==
        (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) break;
    pTVar5 = *(TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               **)&(this->Elements).field_0x2980;
    pTVar10 = this;
    if (pTVar5 != (TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar10 = pTVar5;
    }
    *(undefined4 *)
     ((longlong)FVar7 +
     (longlong)
     *(int *)(&(pTVar10->Elements).field_0x294 + (longlong)local_60.CurrentBitIndex * 0x298) * 4) =
         0xffffffff;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&local_60);
  }
  return;
}

