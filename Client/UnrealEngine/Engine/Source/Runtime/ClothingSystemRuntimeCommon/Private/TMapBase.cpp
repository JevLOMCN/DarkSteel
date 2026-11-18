// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 7

// Emplace<unsigned_int> @ 148c0df90

FPointWeightMap * __thiscall
TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
::Emplace<unsigned_int>
          (TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
           *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_> *)0x0) {
    *(uint *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  uVar3 = *(uint *)pTVar6;
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,pTVar6,local_res8[0]);
  }
  return (FPointWeightMap *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<unsigned_int> @ 148c0e650

FPointWeightMap * __thiscall
TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
::EmplaceByHash<unsigned_int>
          (TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
           *this,uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_> *)0x0) {
    *(uint *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FPointWeightMap *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 148c0ea30

void __thiscall
TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_148c0eb03;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_148c0eb03:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x60 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 148c28130

float * __thiscall
TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FindChecked
          (TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (float *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}

// FindChecked @ 148c281d0

TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> * __thiscall
TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
::FindChecked(TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *
                   )(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
           &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
           (*pcVar1)();
  return pTVar4;
}

// FindChecked @ 148c28270

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 148c28310

FPointWeightMap * __thiscall
TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
::FindChecked(TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPointWeightMap *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FPointWeightMap *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FPointWeightMap *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FPointWeightMap *)(*pcVar1)();
  return pFVar4;
}

