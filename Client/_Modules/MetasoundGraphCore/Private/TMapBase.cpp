// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 7

// Emplace<unsigned___int64_const_&,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo> @ 14ad2c8b0

FIncrementalSortOperatorInfo * __thiscall
TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
::
Emplace<unsigned___int64_const_&,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>
          (TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
           *this,ulong64 *param_1,FIncrementalSortOperatorInfo *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>
  *pTVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>
       *)0x0) {
    *(ulong64 *)local_28.Pointer = *param_1;
    iVar1 = param_2->Ordinal;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(int *)((longlong)local_28.Pointer + 8) = iVar1;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 0x10) =
         (param_2->Inputs).AllocatorInstance.Data;
    (param_2->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x18) = (param_2->Inputs).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x1c) = (param_2->Inputs).ArrayMax;
    (param_2->Inputs).ArrayNum = 0;
    (param_2->Inputs).ArrayMax = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 0x20) =
         (param_2->Outputs).AllocatorInstance.Data;
    (param_2->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x28) = (param_2->Outputs).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x2c) = (param_2->Outputs).ArrayMax;
    (param_2->Outputs).ArrayNum = 0;
    (param_2->Outputs).ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
    pTVar5 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)pTVar5 >> 0x20) * 0x17 + (int)*(undefined8 *)pTVar5;
  bVar3 = TSet<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar5,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar5,local_res8[0]);
  }
  return (FIncrementalSortOperatorInfo *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 8);
}

// Emplace<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo> @ 14ad2dca0

FIncrementalSortOperatorInfo * __thiscall
TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
::
Emplace<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>
          (TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
           *this,ulong64 *param_1,FIncrementalSortOperatorInfo *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>
  *pTVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>
       *)0x0) {
    *(ulong64 *)local_28.Pointer = *param_1;
    iVar1 = param_2->Ordinal;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(int *)((longlong)local_28.Pointer + 8) = iVar1;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 0x10) =
         (param_2->Inputs).AllocatorInstance.Data;
    (param_2->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x18) = (param_2->Inputs).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x1c) = (param_2->Inputs).ArrayMax;
    (param_2->Inputs).ArrayNum = 0;
    (param_2->Inputs).ArrayMax = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 0x20) =
         (param_2->Outputs).AllocatorInstance.Data;
    (param_2->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x28) = (param_2->Outputs).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x2c) = (param_2->Outputs).ArrayMax;
    (param_2->Outputs).ArrayNum = 0;
    (param_2->Outputs).ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
    pTVar5 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)pTVar5 >> 0x20) * 0x17 + (int)*(undefined8 *)pTVar5;
  bVar3 = TSet<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar5,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar5,local_res8[0]);
  }
  return (FIncrementalSortOperatorInfo *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14ad2f970

void __thiscall
TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
           *this,TArray<Metasound::FPolyTypeInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_1->ArrayMax;
  iVar12 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar13,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar13 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar15;
    while (uVar5 == 0) {
      lVar11 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ad2fa52;
      uVar5 = puVar15[lVar11 + 1];
    }
    uVar13 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar11 + -1 + iVar14;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14ad2fa52:
  TStack_40._padding_ = CONCAT44(uVar13,iVar12);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 9 + 2) * 4);
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x14)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar12 + 1;
      uVar9 = *(undefined8 *)(pFVar2 + 8);
      pFVar7 = (param_1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar12 * 0x14;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar6 + 8) = uVar9;
      *(undefined4 *)(pFVar7 + (longlong)iVar12 * 0x14 + 0x10) = *(undefined4 *)(pFVar2 + 0x10);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14ad50610

FPolyTypeInfo * __thiscall
TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
::Find(TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FPolyTypeInfo *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x24;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x24) == param_1) {
          pFVar5 = (FPolyTypeInfo *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FPolyTypeInfo *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x1c);
      } while (iVar4 != -1);
    }
  }
  return (FPolyTypeInfo *)0x0;
}

// Find @ 14ad506b0

FAnyDataReference * __thiscall
TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
::Find(TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FAnyDataReference *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FAnyDataReference *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FAnyDataReference *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FAnyDataReference *)0x0;
}

// Find @ 14ad50750

FIncrementalSortOperatorInfo * __thiscall
TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
::Find(TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FIncrementalSortOperatorInfo *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FIncrementalSortOperatorInfo *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FIncrementalSortOperatorInfo *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[6];
      } while (iVar1 != -1);
    }
  }
  return (FIncrementalSortOperatorInfo *)0x0;
}

// FindChecked @ 14ad50c00

FIncrementalSortOperatorInfo * __thiscall
TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
::FindChecked(TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FIncrementalSortOperatorInfo *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FIncrementalSortOperatorInfo *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FIncrementalSortOperatorInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FIncrementalSortOperatorInfo *)(*pcVar1)();
  return pFVar4;
}

