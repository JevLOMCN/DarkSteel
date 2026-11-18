// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// FSearchFilters @ 14a8ac450

FSearchFilters * __thiscall
UE::PoseSearch::FSearchFilters::FSearchFilters
          (FSearchFilters *this,UPoseSearchSchema *param_1,TArrayView<int_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,bool param_4)

{
  FSelectableAssetIdxFilter *pFVar1;
  FBlockTransitionFilter *pFVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *pTVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FSearchFilters *pFVar11;
  TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *pTVar12;
  TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int *piVar16;
  FBlockTransitionFilter *local_78;
  FSearchFilters *local_70;
  FSelectableAssetIdxFilter *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int *local_48;
  undefined8 uStack_40;
  int *local_38;
  undefined8 uStack_30;
  
  pFVar1 = &this->SelectableAssetIdxFilter;
  (this->NonSelectableIdxFilter)._padding_ =
       (longlong)&___7FNonSelectableIdxFilter_FSearchFilters_PoseSearch_UE__6B_;
  (this->NonSelectableIdxFilter).NonSelectableIdx.DataPtr = (int *)0x0;
  pTVar6 = &this->Filters;
  pFVar1->_padding_ = (longlong)&___7FSelectableAssetIdxFilter_FSearchFilters_PoseSearch_UE__6B_;
  pFVar2 = &this->BlockTransitionFilter;
  (this->NonSelectableIdxFilter).NonSelectableIdx.ArrayNum = 0;
  (this->SelectableAssetIdxFilter).SelectableAssetIdxFilter.DataPtr = (int *)0x0;
  piVar4 = &(this->Filters).ArrayMax;
  *pFVar2 = (FBlockTransitionFilter)&___7FBlockTransitionFilter_FSearchFilters_PoseSearch_UE__6B_;
  (this->SelectableAssetIdxFilter).SelectableAssetIdxFilter.ArrayNum = 0;
  (this->Filters).AllocatorInstance.SecondaryData.Data = (IPoseSearchFilter **)0x0;
  (this->Filters).ArrayNum = 0;
  *piVar4 = 0x40;
  if (param_4) {
    local_78 = pFVar2;
    if (((pTVar6 <= &local_78) && (&local_78 < &(this->Filters).AllocatorInstance.SecondaryData)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FSearchFilters *)(*pcVar7)();
      return pFVar11;
    }
    iVar10 = (this->Filters).ArrayNum;
    if (iVar10 == *piVar4) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>_>
                         (0x808,&pTVar6->AllocatorInstance,piVar4);
    }
    (this->Filters).ArrayNum = iVar10 + 1;
    pTVar13 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
               *)(this->Filters).AllocatorInstance.SecondaryData.Data;
    if (pTVar13 ==
        (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *)
        0x0) {
      pTVar13 = pTVar6;
    }
    *(FBlockTransitionFilter **)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 8) =
         local_78;
  }
  local_58 = param_2->DataPtr;
  uStack_50 = *(undefined8 *)&param_2->ArrayNum;
  iVar10 = (int)*(undefined8 *)&param_2->ArrayNum;
  local_48 = local_58;
  uStack_40 = uStack_50;
  if ((iVar10 != 0) && (iVar10 = iVar10 + -1, iVar10 != 0)) {
    piVar16 = local_58;
    iVar15 = *local_58;
    do {
      piVar3 = piVar16 + 1;
      piVar16 = piVar16 + 1;
      if (*piVar3 < iVar15) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(InNonSelectableIdx)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                           ,0xda,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FSearchFilters *)(*pcVar7)();
          return pFVar11;
        }
        break;
      }
      iVar10 = iVar10 + -1;
      iVar15 = *piVar3;
    } while (iVar10 != 0);
  }
  *(undefined4 *)&(this->NonSelectableIdxFilter).NonSelectableIdx.DataPtr = (undefined4)local_58;
  *(undefined4 *)((longlong)&(this->NonSelectableIdxFilter).NonSelectableIdx.DataPtr + 4) =
       local_58._4_4_;
  (this->NonSelectableIdxFilter).NonSelectableIdx.ArrayNum = (int)uStack_50;
  *(undefined4 *)&(this->NonSelectableIdxFilter).NonSelectableIdx.field_0xc = uStack_50._4_4_;
  cVar9 = (**(code **)((this->NonSelectableIdxFilter)._padding_ + 8))(this);
  if (cVar9 != '\0') {
    pTVar13 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
               *)(this->Filters).AllocatorInstance.SecondaryData.Data;
    if (pTVar13 ==
        (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *)
        0x0) {
      pTVar13 = pTVar6;
    }
    local_70 = this;
    if (((pTVar13 <= &local_70) &&
        (&local_70 < (pTVar13->AllocatorInstance).InlineData + (longlong)*piVar4 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FSearchFilters *)(*pcVar7)();
      return pFVar11;
    }
    iVar10 = (this->Filters).ArrayNum;
    if (iVar10 == *piVar4) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>_>
                         (0x808,&pTVar6->AllocatorInstance,piVar4);
    }
    (this->Filters).ArrayNum = iVar10 + 1;
    pTVar13 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
               *)(this->Filters).AllocatorInstance.SecondaryData.Data;
    if (pTVar13 ==
        (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *)
        0x0) {
      pTVar13 = pTVar6;
    }
    *(FSearchFilters **)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 8) = local_70;
  }
  local_58 = param_3->DataPtr;
  uStack_50 = *(undefined8 *)&param_3->ArrayNum;
  iVar10 = (int)*(undefined8 *)&param_3->ArrayNum;
  local_38 = local_58;
  uStack_30 = uStack_50;
  if ((iVar10 != 0) && (iVar10 = iVar10 + -1, iVar10 != 0)) {
    piVar16 = local_58;
    iVar15 = *local_58;
    do {
      piVar3 = piVar16 + 1;
      piVar16 = piVar16 + 1;
      if (*piVar3 < iVar15) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(InSelectableAssetIdxFilter)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                           ,0xf0,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FSearchFilters *)(*pcVar7)();
          return pFVar11;
        }
        break;
      }
      iVar10 = iVar10 + -1;
      iVar15 = *piVar3;
    } while (iVar10 != 0);
  }
  *(undefined4 *)&(this->SelectableAssetIdxFilter).SelectableAssetIdxFilter.DataPtr =
       (undefined4)local_58;
  *(undefined4 *)((longlong)&(this->SelectableAssetIdxFilter).SelectableAssetIdxFilter.DataPtr + 4)
       = local_58._4_4_;
  (this->SelectableAssetIdxFilter).SelectableAssetIdxFilter.ArrayNum = (int)uStack_50;
  *(undefined4 *)&(this->SelectableAssetIdxFilter).SelectableAssetIdxFilter.field_0xc =
       uStack_50._4_4_;
  cVar9 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
  if (cVar9 != '\0') {
    pTVar13 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
               *)(this->Filters).AllocatorInstance.SecondaryData.Data;
    if (pTVar13 ==
        (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *)
        0x0) {
      pTVar13 = pTVar6;
    }
    local_68 = pFVar1;
    if (((pTVar13 <= &local_68) &&
        (&local_68 < (pTVar13->AllocatorInstance).InlineData + (longlong)*piVar4 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FSearchFilters *)(*pcVar7)();
      return pFVar11;
    }
    iVar10 = (this->Filters).ArrayNum;
    if (iVar10 == *piVar4) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>_>
                         (0x808,&pTVar6->AllocatorInstance,piVar4);
    }
    (this->Filters).ArrayNum = iVar10 + 1;
    pTVar13 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
               *)(this->Filters).AllocatorInstance.SecondaryData.Data;
    if (pTVar13 ==
        (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *)
        0x0) {
      pTVar13 = pTVar6;
    }
    *(FSelectableAssetIdxFilter **)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 8)
         = local_68;
  }
  iVar10 = (param_1->FinalizedChannels).ArrayNum;
  pFVar14 = (param_1->FinalizedChannels).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FSearchFilters *)(*pcVar7)();
    return pFVar11;
  }
  pFVar5 = pFVar14 + (longlong)iVar10 * 8;
  if (pFVar14 != pFVar5) {
    do {
      local_60 = (longlong *)(*(longlong *)pFVar14 + 0x30);
      if (*(longlong *)pFVar14 == 0) {
        local_60 = (longlong *)0x0;
      }
      cVar9 = (**(code **)(*local_60 + 8))();
      if (cVar9 != '\0') {
        pTVar13 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
                   *)(this->Filters).AllocatorInstance.SecondaryData.Data;
        pTVar12 = pTVar6;
        if (pTVar13 !=
            (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
             *)0x0) {
          pTVar12 = pTVar13;
        }
        if (pTVar12 <= &local_60) {
          if (pTVar13 ==
              (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
               *)0x0) {
            pTVar13 = pTVar6;
          }
          if ((&local_60 < (pTVar13->AllocatorInstance).InlineData + (longlong)*piVar4 * 8) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            pFVar11 = (FSearchFilters *)(*pcVar7)();
            return pFVar11;
          }
        }
        iVar10 = (this->Filters).ArrayNum;
        if (iVar10 == *piVar4) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>_>
                             (0x808,&pTVar6->AllocatorInstance,piVar4);
        }
        (this->Filters).ArrayNum = iVar10 + 1;
        pTVar13 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
                   *)(this->Filters).AllocatorInstance.SecondaryData.Data;
        pTVar12 = pTVar6;
        if (pTVar13 !=
            (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
             *)0x0) {
          pTVar12 = pTVar13;
        }
        *(longlong **)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar10 * 8) = local_60;
      }
      pFVar14 = pFVar14 + 8;
    } while (pFVar14 != pFVar5);
  }
  return this;
}

// AreFiltersValid @ 14a8b1610

bool __thiscall
UE::PoseSearch::FSearchFilters::AreFiltersValid
          (FSearchFilters *this,FSearchIndex *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float_const_,int> *param_4,int param_5,
          float param_6,float param_7,FSearchContext *param_8,UPoseSearchDatabase *param_9)

{
  int iVar1;
  FSearchFilters *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  ForElementType<IPoseSearchFilter_const_*> *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  TArrayView<float_const_,int> *pTVar10;
  TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *pTVar11;
  EPoseCandidateFlags EVar12;
  undefined1 local_res8 [8];
  FSearchIndex *local_res10;
  TArrayView<float_const_,int> *local_res18;
  TArrayView<float_const_,int> *local_res20;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  
  pTVar11 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
             *)(this->Filters).AllocatorInstance.SecondaryData.Data;
  iVar1 = (this->Filters).ArrayNum;
  if (pTVar11 ==
      (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *)0x0)
  {
    pTVar11 = &this->Filters;
  }
  pFVar5 = &pTVar11->AllocatorInstance;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    if ((this->Filters).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IPoseSearchFilter_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pTVar11 ==
        (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_> *)
        (pFVar5->InlineData + (longlong)iVar1 * 8)) {
      return true;
    }
    pFVar2 = *(FSearchFilters **)(pTVar11->AllocatorInstance).InlineData;
    pcVar3 = *(code **)((pFVar2->NonSelectableIdxFilter)._padding_ + 0x10);
    uVar9 = 0;
    if (param_5 < (int)local_res10->_padding_) {
      uVar9 = (uint)~param_5 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    local_98 = *(undefined4 *)&local_res20->DataPtr;
    uStack_94 = *(undefined4 *)((longlong)&local_res20->DataPtr + 4);
    iStack_90 = local_res20->ArrayNum;
    uStack_8c = *(undefined4 *)&local_res20->field_0xc;
    local_88 = *(undefined4 *)&local_res18->DataPtr;
    uStack_84 = *(undefined4 *)((longlong)&local_res18->DataPtr + 4);
    iStack_80 = local_res18->ArrayNum;
    uStack_7c = *(undefined4 *)&local_res18->field_0xc;
    cVar8 = (*pcVar3)(pFVar2,&local_88,&local_98,param_5,
                      local_res10->_padding_ + (longlong)param_5 * 0xc);
    if (cVar8 == '\0') {
      if (pFVar2 != this) {
        if (pFVar2 == (FSearchFilters *)&this->SelectableAssetIdxFilter) {
          EVar12 = DiscardedBy_AssetIdxFilter;
          local_78.DataPtr = param_4->DataPtr;
          local_78.ArrayNum = param_4->ArrayNum;
          local_78._12_4_ = *(undefined4 *)&param_4->field_0xc;
          pTVar10 = &local_78;
        }
        else {
          uVar4._0_4_ = param_4->ArrayNum;
          uVar4._4_4_ = *(undefined4 *)&param_4->field_0xc;
          if (pFVar2 == (FSearchFilters *)&this->BlockTransitionFilter) {
            pTVar10 = &local_68;
            EVar12 = DiscardedBy_BlockTransition;
            local_68.DataPtr = param_4->DataPtr;
            local_68._8_8_ = uVar4;
          }
          else {
            pTVar10 = &local_58;
            EVar12 = DiscardedBy_PoseFilter;
            local_58.DataPtr = param_4->DataPtr;
            local_58._8_8_ = uVar4;
          }
        }
        FSearchContext::Track(param_8,param_9,param_5,EVar12,pTVar10,param_6,param_7);
      }
      return false;
    }
    pTVar11 = (TArray<IPoseSearchFilter_const_*,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>_>
               *)((pTVar11->AllocatorInstance).InlineData + 8);
  }
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return (bool)uVar7;
}

