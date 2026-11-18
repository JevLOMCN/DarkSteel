// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 9

// FDynamicGraphIncrementalSorter @ 14ad38db0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDynamicGraphIncrementalSorter * __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FDynamicGraphIncrementalSorter
          (FDynamicGraphIncrementalSorter *this,FGraph *param_1)

{
  this->MaxOrdinal = 0;
  this->MinOrdinal = 0;
  *(undefined8 *)&this->OperatorMap = 0;
  *(undefined8 *)&(this->OperatorMap).field_0x8 = 0;
  *(undefined8 *)&(this->OperatorMap).field_0x20 = 0;
  *(undefined4 *)&(this->OperatorMap).field_0x28 = 0;
  *(undefined4 *)&(this->OperatorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OperatorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OperatorMap).field_0x34 = 0;
  *(undefined8 *)&(this->OperatorMap).field_0x40 = 0;
  *(undefined4 *)&(this->OperatorMap).field_0x48 = 0;
  Init(this,param_1);
  return this;
}

// FDynamicGraphIncrementalSorter @ 14ad38e00

FDynamicGraphIncrementalSorter * __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FDynamicGraphIncrementalSorter
          (FDynamicGraphIncrementalSorter *this)

{
  this->MaxOrdinal = 0;
  this->MinOrdinal = 0;
  *(undefined8 *)&this->OperatorMap = 0;
  *(undefined8 *)&(this->OperatorMap).field_0x8 = 0;
  *(undefined8 *)&(this->OperatorMap).field_0x20 = 0;
  *(undefined4 *)&(this->OperatorMap).field_0x28 = 0;
  *(undefined4 *)&(this->OperatorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OperatorMap).field_0x34 = 0;
  *(undefined4 *)&(this->OperatorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OperatorMap).field_0x40 = 0;
  *(undefined4 *)&(this->OperatorMap).field_0x48 = 0;
  return this;
}

// AddDataEdge @ 14ad43b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::AddDataEdge
          (FDynamicGraphIncrementalSorter *this,ulong64 param_1,ulong64 param_2,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_3)

{
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *this_00;
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FIncrementalSortOperatorInfo *pFVar6;
  FIncrementalSortOperatorInfo *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  ulong64 local_res10;
  ulong64 local_res18 [2];
  
  this_00 = &this->OperatorMap;
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar6 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
           ::Find((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                   *)this_00,param_1);
  if (pFVar6 == (FIncrementalSortOperatorInfo *)0x0) {
    if ((byte)LogMetaSound._0_1_ < 2) {
      return;
    }
    pFVar8 = &::LOG_Static;
  }
  else {
    pFVar7 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
             ::Find((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                     *)this_00,param_2);
    if (pFVar7 != (FIncrementalSortOperatorInfo *)0x0) {
      pFVar10 = (pFVar6->Outputs).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 <
           pFVar10 + (longlong)(pFVar6->Outputs).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (pFVar6->Outputs).ArrayNum;
      piVar1 = &(pFVar6->Outputs).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pFVar6->Outputs).AllocatorInstance,piVar1);
      }
      (pFVar6->Outputs).ArrayNum = iVar5 + 1;
      *(ulong64 *)((pFVar6->Outputs).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res18[0];
      pFVar10 = (pFVar7->Inputs).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar10 + (longlong)(pFVar7->Inputs).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (pFVar7->Inputs).ArrayNum;
      piVar1 = &(pFVar7->Inputs).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pFVar7->Inputs).AllocatorInstance,piVar1);
      }
      (pFVar7->Inputs).ArrayNum = iVar5 + 1;
      *(ulong64 *)((pFVar7->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10;
      if (pFVar6->Ordinal <= pFVar7->Ordinal) {
        return;
      }
      IncrementalTopologicalSortForNewEdge
                (this,local_res10,pFVar6->Ordinal,local_res18[0],pFVar7->Ordinal,param_3);
      iVar5 = param_3->ArrayNum;
      pFVar10 = (param_3->AllocatorInstance).Data;
      pFVar9 = pFVar10 + (longlong)iVar5 * 0x10;
      while( true ) {
        if (param_3->ArrayNum != iVar5) {
          `TCheckedPointerIterator<Metasound::DynamicGraph::FOrdinalSwap,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar9) break;
        iVar2 = *(int *)(pFVar10 + 0xc);
        pFVar6 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                 ::FindChecked((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                                *)this_00,*(ulong64 *)pFVar10);
        pFVar10 = pFVar10 + 0x10;
        pFVar6->Ordinal = iVar2;
      }
      return;
    }
    if ((byte)LogMetaSound._0_1_ < 2) {
      return;
    }
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogMetaSound);
  return;
}

// GenerateOrdinals @ 14ad54b60

void __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::GenerateOrdinals
          (FDynamicGraphIncrementalSorter *this,
          TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
          *param_1)

{
  undefined1 *puVar1;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong local_a0;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->OperatorMap).field_0x28;
  puVar1 = &(this->OperatorMap).field_0x10;
  iStack_90 = 0;
  pTVar2 = &this->OperatorMap;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->OperatorMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14ad54c0d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14ad54c0d:
  iStack_70 = *(int *)&(this->OperatorMap).field_0x8 - *(int *)&(this->OperatorMap).field_0x34;
  uVar12 = *(uint *)&(this->OperatorMap).field_0x28;
  uStack_80 = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->OperatorMap).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->OperatorMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ad54d10;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ad54d10:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    local_a8 = *(longlong *)pTVar7 + (longlong)TStack_60.CurrentBitIndex * 0x38;
    local_a0 = local_a8 + 8;
    TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,int_const_&>_>
              ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<unsigned___int64_const_&,int_const_&> *)&stack0x00000020
               ,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IncrementalTopologicalSortForNewEdge @ 14ad57760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::IncrementalTopologicalSortForNewEdge
          (FDynamicGraphIncrementalSorter *this,ulong64 param_1,int param_2,ulong64 param_3,
          int param_4,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong lVar1;
  ulong64 uVar2;
  code *pcVar3;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FIncrementalSortOperatorInfo *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  ulonglong uVar16;
  ulong64 local_res20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78;
  undefined1 local_77 [3];
  int local_74;
  ForAnyElementType local_70;
  uint local_68;
  uint local_64;
  undefined1 local_60 [4];
  uint local_5c;
  ulong64 local_58;
  int iStack_50;
  int iStack_4c;
  ulong64 local_48;
  int iStack_40;
  int iStack_3c;
  
  pTVar4 = param_5;
  local_res20 = param_3;
  if ((2 < (byte)LogMetaSound._0_1_) && (param_2 < param_4)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_88.AllocatorInstance,&local_88.ArrayMax);
  piVar15 = &pTVar4->ArrayNum;
  *(ulong64 *)(local_88.AllocatorInstance.Data + (longlong)iVar6 * 8) = param_1;
  local_88.ArrayNum = iVar6 + 1;
joined_r0x00014ad577f2:
  do {
    if (local_88.ArrayNum == 0) {
      uVar10 = *piVar15;
      local_5c = uVar10;
      AlgoImpl::
      IntroSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>_>
                ((FOrdinalSwap *)(pTVar4->AllocatorInstance).Data,uVar10,param_5._0_1_,
                 (TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
                  )0x14ad5b660);
      if (((local_88.AllocatorInstance.Data <= (FScriptContainerElement *)&local_res20) &&
          ((FScriptContainerElement *)&local_res20 <
           local_88.AllocatorInstance.Data + (longlong)local_88.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_88.ArrayNum;
      if (local_88.ArrayNum == local_88.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_88.AllocatorInstance,&local_88.ArrayMax);
      }
      local_88.ArrayNum = iVar6 + 1;
      *(ulong64 *)(local_88.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res20;
      iVar6 = iVar6 + 1;
      do {
        if (iVar6 == 0) {
          piVar15 = &pTVar4->ArrayNum;
          uVar16 = 0;
          iVar6 = *piVar15 - uVar10;
          uVar9 = 0;
          if ((int)uVar10 < *piVar15) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar13 = (pTVar4->AllocatorInstance).Data;
          if ((iVar6 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          AlgoImpl::
          IntroSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
                    ((FOrdinalSwap *)(pFVar13 + (longlong)(int)uVar10 * 0x10),iVar6,param_5._0_1_,
                     FOrdinalSwap::OriginalOrdinalLessThan);
          iVar6 = *piVar15;
          pFVar13 = (pTVar4->AllocatorInstance).Data;
          pFVar14 = pFVar13 + (longlong)iVar6 * 0x10;
          local_70.Data = (FScriptContainerElement *)0x0;
          local_68 = 0;
          local_64 = 0;
          uVar12 = uVar16;
          while( true ) {
            uVar10 = (uint)uVar12;
            if (*piVar15 != iVar6) {
              local_77[0] = 0;
              `TCheckedPointerIterator<Metasound::DynamicGraph::FOrdinalSwap_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_77);
              uVar10 = local_68;
            }
            if (pFVar13 == pFVar14) break;
            local_74 = *(int *)(pFVar13 + 8);
            if (((local_70.Data <= (FScriptContainerElement *)&local_74) &&
                ((FScriptContainerElement *)&local_74 < local_70.Data + (longlong)(int)local_64 * 4)
                ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), uVar10 = local_68, bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar10 == local_64) {
              uVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_70,(int *)&local_64);
            }
            local_68 = uVar10 + 1;
            pFVar13 = pFVar13 + 0x10;
            *(int *)(local_70.Data + (longlong)(int)uVar10 * 4) = local_74;
            uVar12 = (ulonglong)local_68;
          }
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                    ((int *)local_70.Data,uVar10,param_5._0_1_,(TLess<void> *)local_60);
          iVar6 = pTVar4->ArrayNum;
          if (0 < (longlong)iVar6) {
            pFVar13 = (pTVar4->AllocatorInstance).Data + 0xc;
            do {
              lVar1 = uVar16 * 4;
              uVar16 = uVar16 + 1;
              *(undefined4 *)pFVar13 = *(undefined4 *)(local_70.Data + lVar1);
              pFVar13 = pFVar13 + 0x10;
            } while ((longlong)uVar16 < (longlong)iVar6);
          }
          AlgoImpl::
          IntroSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>_>
                    ((FOrdinalSwap *)(pTVar4->AllocatorInstance).Data,pTVar4->ArrayNum,param_5._0_1_
                     ,(TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
                       )0x14ad5b660);
          if (local_70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data);
          }
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
          return;
        }
        if (iVar6 < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = local_88.ArrayNum;
        }
        iVar7 = iVar6 + -1;
        uVar2 = *(ulong64 *)(local_88.AllocatorInstance.Data + (longlong)iVar7 * 8);
        iVar8 = (iVar6 - iVar7) + -1;
        if (iVar8 != 0) {
          memmove(local_88.AllocatorInstance.Data + (longlong)iVar7 * 8,
                  local_88.AllocatorInstance.Data + (longlong)iVar7 * 8 + 8,(longlong)iVar8 << 3);
          iVar6 = local_88.ArrayNum;
        }
        local_88.ArrayNum = iVar6 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_88.AllocatorInstance,iVar6 + -1,&local_88.ArrayMax);
        pFVar13 = (pTVar4->AllocatorInstance).Data;
        pFVar14 = pFVar13 + (longlong)*piVar15 * 0x10;
        for (; pFVar13 != pFVar14; pFVar13 = pFVar13 + 0x10) {
          if (*(ulong64 *)pFVar13 == uVar2) goto LAB_14ad57c49;
        }
        pFVar11 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                  ::FindChecked((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                                 *)&this->OperatorMap,uVar2);
        iVar6 = pFVar11->Ordinal;
        if (iVar6 < param_2) {
          pFVar13 = (pTVar4->AllocatorInstance).Data;
          local_48 = uVar2;
          iStack_40 = iVar6;
          iStack_3c = iVar6;
          if (((pFVar13 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < pFVar13 + (longlong)pTVar4->ArrayMax * 0x10))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = *piVar15;
          if (iVar6 == pTVar4->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
            *piVar15 = iVar6;
          }
          *piVar15 = iVar6 + 1;
          pFVar13 = (pTVar4->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          *(ulong64 *)pFVar13 = local_48;
          *(ulong64 *)(pFVar13 + 8) = CONCAT44(iStack_3c,iStack_40);
          pFVar14 = (pFVar11->Outputs).AllocatorInstance.Data;
          iVar6 = (pFVar11->Outputs).ArrayNum;
          pFVar13 = pFVar14 + (longlong)iVar6 * 8;
          while( true ) {
            if ((pFVar11->Outputs).ArrayNum != iVar6) {
              local_78 = 0;
              `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_78);
            }
            if (pFVar14 == pFVar13) break;
            TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<unsigned___int64_const_&>(&local_88,(ulong64 *)pFVar14);
            pFVar14 = pFVar14 + 8;
          }
        }
LAB_14ad57c49:
        uVar10 = local_5c;
        iVar6 = local_88.ArrayNum;
      } while( true );
    }
    if ((local_88.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = local_88.ArrayNum + -1;
    uVar2 = *(ulong64 *)(local_88.AllocatorInstance.Data + (longlong)iVar6 * 8);
    iVar7 = (local_88.ArrayNum - iVar6) + -1;
    if (iVar7 != 0) {
      memmove(local_88.AllocatorInstance.Data + (longlong)iVar6 * 8,
              local_88.AllocatorInstance.Data + (longlong)iVar6 * 8 + 8,(longlong)iVar7 << 3);
    }
    local_88.ArrayNum = local_88.ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&local_88.AllocatorInstance,local_88.ArrayNum,&local_88.ArrayMax);
    pFVar13 = (pTVar4->AllocatorInstance).Data;
    pFVar14 = pFVar13 + (longlong)*piVar15 * 0x10;
    for (; pFVar13 != pFVar14; pFVar13 = pFVar13 + 0x10) {
      if (*(ulong64 *)pFVar13 == uVar2) goto joined_r0x00014ad577f2;
    }
    pFVar11 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
              ::FindChecked((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                             *)&this->OperatorMap,uVar2);
    iVar6 = pFVar11->Ordinal;
    if (param_4 < iVar6) {
      pFVar13 = (pTVar4->AllocatorInstance).Data;
      local_58 = uVar2;
      iStack_50 = iVar6;
      iStack_4c = iVar6;
      if (((pFVar13 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar13 + (longlong)pTVar4->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *piVar15;
      if (iVar6 == pTVar4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
      }
      *piVar15 = iVar6 + 1;
      pFVar13 = (pTVar4->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(ulong64 *)pFVar13 = local_58;
      *(ulong64 *)(pFVar13 + 8) = CONCAT44(iStack_4c,iStack_50);
      pFVar14 = (pFVar11->Inputs).AllocatorInstance.Data;
      iVar6 = (pFVar11->Inputs).ArrayNum;
      pFVar13 = pFVar14 + (longlong)iVar6 * 8;
      while( true ) {
        if ((pFVar11->Inputs).ArrayNum != iVar6) {
          param_5._0_1_ = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&param_5);
        }
        if (pFVar14 == pFVar13) break;
        TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<unsigned___int64_const_&>(&local_88,(ulong64 *)pFVar14);
        pFVar14 = pFVar14 + 8;
      }
    }
  } while( true );
}

// Init @ 14ad57e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::Init
          (FDynamicGraphIncrementalSorter *this,FGraph *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDirectedGraphAlgoAdapter *pFVar6;
  longlong *plVar7;
  FIncrementalSortOperatorInfo *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  ulong64 *puVar13;
  longlong lVar14;
  ulong64 *puVar15;
  undefined1 auStack_358 [32];
  ulong64 *local_338;
  FScriptContainerElement *local_330;
  longlong local_328;
  longlong local_320;
  undefined8 local_318;
  undefined1 local_308;
  undefined1 local_307 [7];
  ulong64 local_300;
  ulong64 local_2f8;
  TArray<TTuple<FGuid,Metasound::INode_const_*>,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> local_2e0;
  FGraph *local_2d0;
  ulong64 local_2c8;
  FIncrementalSortOperatorInfo local_2c0;
  FDirectedGraphAlgoAdapter local_298;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.ArrayNum = 0;
  local_2e0.ArrayMax = 0;
  local_2d0 = param_1;
  pFVar6 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_298,(IGraph *)param_1);
  bVar4 = DirectedGraphAlgo::DepthFirstTopologicalSort(pFVar6,&local_2e0);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_298);
  if ((!bVar4) && (1 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  FVar12.Data = local_2e0.AllocatorInstance.Data;
  iVar5 = local_2e0.ArrayNum;
  lVar14 = (longlong)local_2e0.ArrayNum;
  uVar11 = 0;
  uVar10 = uVar11;
  if (0 < local_2e0.ArrayNum) {
    do {
      local_2c0.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c0.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8 = *(ulong64 *)(FVar12.Data + uVar11 * 8);
      local_2c0.Inputs.ArrayNum = 0;
      local_2c0.Inputs.ArrayMax = 0;
      local_2c0.Outputs.ArrayNum = 0;
      local_2c0.Outputs.ArrayMax = 0;
      local_2c0.Ordinal = (int)uVar10;
      TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
      ::
      Emplace<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>
                ((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                  *)&this->OperatorMap,&local_2c8,&local_2c0);
      if (local_2c0.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Outputs.AllocatorInstance.Data);
      }
      if (local_2c0.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Inputs.AllocatorInstance.Data);
      }
      uVar11 = uVar11 + 1;
      uVar10 = (ulonglong)((int)uVar10 + 1);
    } while ((longlong)uVar11 < lVar14);
  }
  this->MaxOrdinal = iVar5;
  plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x58))(param_1);
  lVar14 = plVar7[1];
  puVar13 = (ulong64 *)*plVar7;
  puVar15 = puVar13 + (longlong)(int)lVar14 * 0xd;
  while( true ) {
    if ((int)plVar7[1] != (int)lVar14) {
      local_308 = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_308);
    }
    if (puVar13 == puVar15) break;
    local_2f8 = *puVar13;
    local_300 = puVar13[5];
    pFVar8 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
             ::FindChecked((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                            *)&this->OperatorMap,local_2f8);
    pFVar2 = (pFVar8->Outputs).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_300) &&
       (lVar9 = (longlong)(pFVar8->Outputs).ArrayMax,
       (FScriptContainerElement *)&local_300 < pFVar2 + lVar9 * 8)) {
      local_320 = (longlong)(pFVar8->Outputs).ArrayNum;
      local_318 = 8;
      local_338 = &local_300;
      local_330 = pFVar2;
      local_328 = lVar9;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (pFVar8->Outputs).ArrayNum;
    piVar1 = &(pFVar8->Outputs).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar8->Outputs).AllocatorInstance,piVar1);
    }
    (pFVar8->Outputs).ArrayNum = iVar5 + 1;
    *(ulong64 *)((pFVar8->Outputs).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_300;
    pFVar8 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
             ::FindChecked((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                            *)&this->OperatorMap,local_300);
    pFVar2 = (pFVar8->Inputs).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_2f8) &&
       (lVar9 = (longlong)(pFVar8->Inputs).ArrayMax,
       (FScriptContainerElement *)&local_2f8 < pFVar2 + lVar9 * 8)) {
      local_320 = (longlong)(pFVar8->Inputs).ArrayNum;
      local_318 = 8;
      local_338 = &local_2f8;
      local_330 = pFVar2;
      local_328 = lVar9;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (pFVar8->Inputs).ArrayNum;
    piVar1 = &(pFVar8->Inputs).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar8->Inputs).AllocatorInstance,piVar1);
    }
    (pFVar8->Inputs).ArrayNum = iVar5 + 1;
    puVar13 = puVar13 + 0xd;
    *(ulong64 *)((pFVar8->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_2f8;
  }
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  iVar5 = FGraph::FindUnconnectedNodes(local_2d0,&local_2f0);
  if (0 < iVar5) {
    iVar5 = local_2f0.ArrayNum;
    uVar10 = (ulonglong)local_2f0.ArrayNum;
    pFVar2 = local_2f0.AllocatorInstance.Data + uVar10 * 0x18;
    FVar12.Data = local_2f0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar5) {
        `TCheckedPointerIterator<TTuple<FGuid,Metasound::INode_const_*>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_307);
      }
      if (FVar12.Data == pFVar2) break;
      InsertOperator(this,*(ulong64 *)(FVar12.Data + 0x10),Last);
      uVar10 = local_2f0._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x18;
    }
  }
  if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.AllocatorInstance.Data);
  }
  if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.AllocatorInstance.Data);
  }
  return;
}

// InsertOperator @ 14ad59c20

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::InsertOperator
          (FDynamicGraphIncrementalSorter *this,ulong64 param_1,EInsertLocation param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FIncrementalSortOperatorInfo *pFVar4;
  ulong64 local_res10;
  FIncrementalSortOperatorInfo local_38;
  
  iVar3 = 0x7fffffff;
  local_res10 = param_1;
  if (param_2 == First) {
    this->MinOrdinal = this->MinOrdinal + -1;
    iVar3 = this->MinOrdinal;
LAB_14ad59c5e:
    if (iVar3 != 0x7fffffff) goto LAB_14ad59c91;
  }
  else if (param_2 == Last) {
    this->MaxOrdinal = this->MaxOrdinal + 1;
    iVar3 = this->MaxOrdinal;
    goto LAB_14ad59c5e;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewOrdinal != ORDINAL_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
                     ,0x137,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
LAB_14ad59c91:
  pFVar4 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
           ::Find((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                   *)&this->OperatorMap,local_res10);
  if (pFVar4 == (FIncrementalSortOperatorInfo *)0x0) {
    local_38.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Inputs.ArrayNum = 0;
    local_38.Inputs.ArrayMax = 0;
    local_38.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Outputs.ArrayNum = 0;
    local_38.Outputs.ArrayMax = 0;
    local_38.Ordinal = iVar3;
    TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
    ::
    Emplace<unsigned___int64_const_&,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>
              ((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                *)&this->OperatorMap,&local_res10,&local_38);
    if (local_38.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Outputs.AllocatorInstance.Data);
    }
    if (local_38.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Inputs.AllocatorInstance.Data);
    }
  }
  else {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pFVar4->Ordinal = iVar3;
  }
  return iVar3;
}

// RemoveDataEdge @ 14ad5f130

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::RemoveDataEdge
          (FDynamicGraphIncrementalSorter *this,ulong64 param_1,ulong64 param_2)

{
  FIncrementalSortOperatorInfo *pFVar1;
  ulong64 local_res10;
  ulong64 local_res18;
  
  local_res10 = param_1;
  local_res18 = param_2;
  pFVar1 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
           ::Find((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                   *)&this->OperatorMap,param_1);
  if (pFVar1 == (FIncrementalSortOperatorInfo *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
  }
  else {
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&pFVar1->Outputs,&local_res18,Default);
  }
  pFVar1 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
           ::Find((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                   *)&this->OperatorMap,param_2);
  if (pFVar1 != (FIncrementalSortOperatorInfo *)0x0) {
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&pFVar1->Inputs,&local_res10,Default);
    return;
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  return;
}

// RemoveOperator @ 14ad615a0

int __thiscall
Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::RemoveOperator
          (FDynamicGraphIncrementalSorter *this,ulong64 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FIncrementalSortOperatorInfo *pFVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong *puVar18;
  FScriptContainerElement *pFVar19;
  ulong64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulong64 local_58 [3];
  
  local_res10 = param_1;
  pFVar9 = TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
           ::Find((TMapBase<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
                   *)&this->OperatorMap,param_1);
  if (pFVar9 == (FIncrementalSortOperatorInfo *)0x0) {
    return 0x7fffffff;
  }
  uVar1 = (pFVar9->Inputs).ArrayNum;
  uVar11 = (ulonglong)(int)uVar1;
  iVar7 = pFVar9->Ordinal;
  pFVar19 = (pFVar9->Inputs).AllocatorInstance.Data;
  pFVar12 = pFVar19 + uVar11 * 8;
  while( true ) {
    puVar16 = (ulonglong *)0x0;
    if ((pFVar9->Inputs).ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar19 == pFVar12) break;
    uVar11 = *(ulonglong *)pFVar19;
    if (*(int *)&(this->OperatorMap).field_0x8 == *(int *)&(this->OperatorMap).field_0x34) {
LAB_14ad618a5:
      uVar11 = (ulonglong)uVar1;
      pFVar19 = pFVar19 + 8;
    }
    else {
      puVar2 = *(undefined1 **)&(this->OperatorMap).field_0x40;
      puVar13 = &(this->OperatorMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      iVar6 = *(int *)(puVar13 +
                      ((ulonglong)(*(int *)&(this->OperatorMap).field_0x48 - 1) &
                      (uVar11 >> 0x20) * 0x17 + uVar11) * 4);
      if (iVar6 == -1) goto LAB_14ad618a5;
      do {
        puVar10 = (ulonglong *)((longlong)iVar6 * 0x38 + *(longlong *)&this->OperatorMap);
        if (*puVar10 == uVar11) {
          puVar18 = puVar10 + 1;
          if (puVar10 == (ulonglong *)0x0) {
            puVar18 = puVar16;
          }
          if (puVar18 != (ulonglong *)0x0) {
            if ((((ulong64 *)puVar18[3] <= &local_res10) &&
                (&local_res10 < (ulong64 *)puVar18[3] + *(int *)((longlong)puVar18 + 0x24))) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            iVar6 = (int)puVar18[4];
            bVar4 = false;
            if (0 < iVar6) {
              lVar17 = 0;
              do {
                uVar14 = (uint)puVar16;
                uVar15 = 0;
                if ((int)uVar14 < iVar6) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                uVar15 = uVar14;
                if (*(ulong64 *)(puVar18[3] + lVar17) == local_res10) {
                  lVar17 = lVar17 + -8;
                  uVar15 = uVar14 - 1;
                  bVar4 = true;
                  uVar8 = 0;
                  if ((int)uVar14 < (int)puVar18[4]) {
                    uVar8 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                  iVar6 = ~uVar14 + (int)puVar18[4];
                  if (1 < iVar6) {
                    iVar6 = 1;
                  }
                  if (iVar6 != 0) {
                    memmove((void *)(puVar18[3] + (longlong)(int)uVar14 * 8),
                            (void *)(puVar18[3] + (longlong)((int)puVar18[4] - iVar6) * 8),
                            (longlong)iVar6 << 3);
                  }
                  *(int *)(puVar18 + 4) = (int)puVar18[4] + -1;
                }
                iVar6 = (int)puVar18[4];
                puVar16 = (ulonglong *)(ulonglong)(uVar15 + 1);
                lVar17 = lVar17 + 8;
              } while ((int)(uVar15 + 1) < iVar6);
              if (bVar4) {
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(ForAnyElementType *)(puVar18 + 3),iVar6,
                           (int *)((longlong)puVar18 + 0x24));
              }
            }
          }
          goto LAB_14ad618a5;
        }
        iVar6 = (int)puVar10[6];
      } while (iVar6 != -1);
      uVar11 = (ulonglong)uVar1;
      pFVar19 = pFVar19 + 8;
    }
  }
  uVar1 = (pFVar9->Outputs).ArrayNum;
  uVar11 = (ulonglong)(int)uVar1;
  pFVar12 = (pFVar9->Outputs).AllocatorInstance.Data;
  pFVar19 = pFVar12 + uVar11 * 8;
  do {
    while( true ) {
      puVar16 = (ulonglong *)0x0;
      if ((pFVar9->Outputs).ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      iVar6 = *(int *)&(this->OperatorMap).field_0x8;
      if (pFVar12 == pFVar19) {
        local_58[0] = local_res10;
        if (iVar6 != *(int *)&(this->OperatorMap).field_0x34) {
          TSet<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned___int64>
                    ((TSet<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>,FDefaultSetAllocator>
                      *)&this->OperatorMap,(int)(local_res10 >> 0x20) * 0x17 + (int)local_res10,
                     local_58);
        }
        return iVar7;
      }
      uVar11 = *(ulonglong *)pFVar12;
      if (iVar6 != *(int *)&(this->OperatorMap).field_0x34) break;
LAB_14ad61b54:
      uVar11 = (ulonglong)uVar1;
      pFVar12 = pFVar12 + 8;
    }
    puVar2 = *(undefined1 **)&(this->OperatorMap).field_0x40;
    puVar13 = &(this->OperatorMap).field_0x38;
    if (puVar2 != (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    iVar6 = *(int *)(puVar13 +
                    ((uVar11 >> 0x20) * 0x17 + uVar11 &
                    (ulonglong)(*(int *)&(this->OperatorMap).field_0x48 - 1)) * 4);
    if (iVar6 == -1) goto LAB_14ad61b54;
    do {
      puVar10 = (ulonglong *)((longlong)iVar6 * 0x38 + *(longlong *)&(this->OperatorMap).field_0x0);
      if (*puVar10 == uVar11) {
        puVar18 = puVar10 + 1;
        if (puVar10 == (ulonglong *)0x0) {
          puVar18 = puVar16;
        }
        if (puVar18 != (ulonglong *)0x0) {
          if ((((ulong64 *)puVar18[1] <= &local_res10) &&
              (&local_res10 < (ulong64 *)puVar18[1] + *(int *)((longlong)puVar18 + 0x14))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
          iVar6 = (int)puVar18[2];
          bVar4 = false;
          puVar10 = puVar16;
          if (0 < iVar6) {
            do {
              uVar14 = (uint)puVar16;
              uVar15 = 0;
              if ((int)uVar14 < iVar6) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              uVar15 = uVar14;
              if (*(ulong64 *)(puVar18[1] + (longlong)puVar10) == local_res10) {
                uVar15 = uVar14 - 1;
                puVar10 = puVar10 + -1;
                bVar4 = true;
                uVar8 = 0;
                if ((int)uVar14 < (int)puVar18[2]) {
                  uVar8 = ~uVar14 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                iVar6 = ~uVar14 + (int)puVar18[2];
                if (1 < iVar6) {
                  iVar6 = 1;
                }
                if (iVar6 != 0) {
                  memmove((void *)(puVar18[1] + (longlong)(int)uVar14 * 8),
                          (void *)(puVar18[1] + (longlong)((int)puVar18[2] - iVar6) * 8),
                          (longlong)iVar6 << 3);
                }
                *(int *)(puVar18 + 2) = (int)puVar18[2] + -1;
              }
              iVar6 = (int)puVar18[2];
              puVar16 = (ulonglong *)(ulonglong)(uVar15 + 1);
              puVar10 = puVar10 + 1;
            } while ((int)(uVar15 + 1) < iVar6);
            if (bVar4) {
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(ForAnyElementType *)(puVar18 + 1),iVar6,
                         (int *)((longlong)puVar18 + 0x14));
            }
          }
        }
        goto LAB_14ad61b54;
      }
      iVar6 = (int)puVar10[6];
    } while (iVar6 != -1);
    uVar11 = (ulonglong)uVar1;
    pFVar12 = pFVar12 + 8;
  } while( true );
}

