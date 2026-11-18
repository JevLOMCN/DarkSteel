// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// FBestPoseCandidates @ 14a8aab10

FBestPoseCandidates * __thiscall
UE::PoseSearch::FSearchContext::FBestPoseCandidates::FBestPoseCandidates
          (FBestPoseCandidates *this,FBestPoseCandidates *param_1)

{
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *pTVar1;
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  pTVar1 = &this->PermanentPoseCandidates;
  (this->TransientPoseCandidates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->PermanentPoseCandidates;
  (this->TransientPoseCandidates).AllocatorInstance.Data =
       (param_1->TransientPoseCandidates).AllocatorInstance.Data;
  (param_1->TransientPoseCandidates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientPoseCandidates).ArrayNum = (param_1->TransientPoseCandidates).ArrayNum;
  (this->TransientPoseCandidates).ArrayMax = (param_1->TransientPoseCandidates).ArrayMax;
  (param_1->TransientPoseCandidates).ArrayNum = 0;
  (param_1->TransientPoseCandidates).ArrayMax = 0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->PermanentPoseCandidates).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PermanentPoseCandidates).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x34 = 0;
  (this->PermanentPoseCandidates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PermanentPoseCandidates).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->PermanentPoseCandidates).Elements.field_0x10;
    *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x8 =
         *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0x8;
    _Src = &(param_1->PermanentPoseCandidates).Elements.field_0x10;
    *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0xc =
         *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0xc;
    *(undefined8 *)&(param_1->PermanentPoseCandidates).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->PermanentPoseCandidates).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->PermanentPoseCandidates).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->PermanentPoseCandidates).Elements.field_0x20 =
           *(undefined8 *)&(param_1->PermanentPoseCandidates).Elements.field_0x20;
      *(undefined8 *)&(param_1->PermanentPoseCandidates).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x28 =
           *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0x28;
      *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x2c =
           *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0x2c;
      *(undefined8 *)&(param_1->PermanentPoseCandidates).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x30 =
         *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0x30;
    *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x34 =
         *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0x34;
    *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PermanentPoseCandidates).Elements.field_0x34 = 0;
  }
  if ((param_1->PermanentPoseCandidates).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->PermanentPoseCandidates).Hash.InlineData =
         *(undefined4 *)(param_1->PermanentPoseCandidates).Hash.InlineData;
  }
  FVar4 = (this->PermanentPoseCandidates).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->PermanentPoseCandidates).Hash.SecondaryData =
       (param_1->PermanentPoseCandidates).Hash.SecondaryData;
  (param_1->PermanentPoseCandidates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PermanentPoseCandidates).HashSize = (param_1->PermanentPoseCandidates).HashSize;
  (param_1->PermanentPoseCandidates).HashSize = 0;
  return this;
}

// FBestPoseCandidates @ 14a8aac60

FBestPoseCandidates * __thiscall
UE::PoseSearch::FSearchContext::FBestPoseCandidates::FBestPoseCandidates(FBestPoseCandidates *this)

{
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *this_00;
  int *piVar1;
  int *piVar2;
  ForElementType<FSetElementId> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar8 = 0;
  this_00 = &this->PermanentPoseCandidates;
  (this->TransientPoseCandidates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TransientPoseCandidates).ArrayMax;
  (this->TransientPoseCandidates).ArrayNum = 0;
  piVar2 = &(this->PermanentPoseCandidates).HashSize;
  *piVar1 = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->PermanentPoseCandidates).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PermanentPoseCandidates).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PermanentPoseCandidates).Elements.field_0x34 = 0;
  (this->PermanentPoseCandidates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *piVar2 = 0;
  if (*piVar1 < 0x100) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x100,(ForAnyElementType *)this,(this->TransientPoseCandidates).ArrayNum,piVar1
              );
  }
  if (0xf < (uint)(*(int *)&(this->PermanentPoseCandidates).Elements.field_0x8 -
                  *(int *)&(this->PermanentPoseCandidates).Elements.field_0x34)) {
    return this;
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0x10);
  for (lVar5 = 0x3f; 0x1fUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  uVar11 = 1 << ((byte)lVar5 & 0x1f);
  if ((*piVar2 != 0) && ((int)uVar11 <= *piVar2)) {
    return this;
  }
  pFVar3 = &(this->PermanentPoseCandidates).Hash;
  *piVar2 = uVar11;
  if ((this->PermanentPoseCandidates).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->PermanentPoseCandidates).Hash.SecondaryData,0,0,4);
  }
  if (uVar11 == 0) goto LAB_14a8aadb4;
  uVar12 = uVar11;
  if (uVar11 < 2) {
    if ((this->PermanentPoseCandidates).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      uVar12 = 0;
      goto LAB_14a8aad6c;
    }
  }
  else {
LAB_14a8aad6c:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->PermanentPoseCandidates).Hash.SecondaryData,0,uVar12,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    uVar9 = uVar8;
    do {
      FVar4 = (this->PermanentPoseCandidates).Hash.SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)pFVar3;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar4;
      }
      uVar6 = uVar9 & (longlong)(int)uVar11 - 1U;
      uVar9 = uVar9 + 1;
      *(undefined4 *)((longlong)FVar7 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_14a8aadb4:
  if (*piVar2 != 0) {
    uVar11 = *(uint *)&(this->PermanentPoseCandidates).Elements.field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->PermanentPoseCandidates).Elements.field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar14 = *(uint **)&(this->PermanentPoseCandidates).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar8;
      while (uVar12 == 0) {
        iVar10 = (int)uVar8;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar8 = (ulonglong)local_78;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14a8aae5b;
        uVar12 = puVar14[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar8 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar8 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_14a8aae5b:
        uVar8 = (ulonglong)uVar11;
        uStack_64 = uVar11;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar8 < (int)uVar11) {
      do {
        iVar10 = (int)uVar8;
        uVar11 = *piVar2 - 1U & *(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar10 * 0x14)
        ;
        lVar5 = *(longlong *)&this_00->Elements + (longlong)iVar10 * 0x14;
        *(uint *)(lVar5 + 0x10) = uVar11;
        FVar4 = (this->PermanentPoseCandidates).Hash.SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)pFVar3;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar4;
        }
        uVar8 = (longlong)*piVar2 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)((longlong)FVar7 + uVar8 * 4);
        *(int *)((longlong)FVar7 + uVar8 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar8 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// Add @ 14a8b06f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FSearchContext::FBestPoseCandidates::Add
          (FBestPoseCandidates *this,int param_1,EPoseCandidateFlags param_2,
          FPoseSearchCost *param_3)

{
  float fVar1;
  FPoseCandidate *pFVar2;
  FPoseCandidateHeapCompare local_res18 [8];
  FPoseCandidate local_28;
  FPoseCandidate local_18;
  
  local_28.PoseIdx = param_1;
  local_28.PoseCandidateFlags = param_2;
  if ((param_2 & (Valid_CurrentPose|Valid_ContinuingPose)) == None) {
    if ((this->TransientPoseCandidates).ArrayNum < 0x100) {
      local_28.Cost = (FPoseSearchCost)param_3->TotalCost;
    }
    else {
      fVar1 = *(float *)((this->TransientPoseCandidates).AllocatorInstance.Data + 4);
      if (fVar1 < param_3->TotalCost || fVar1 == param_3->TotalCost) {
        return;
      }
      TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_>::
      HeapPop<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare>
                (&this->TransientPoseCandidates,&local_18,local_res18,No);
      local_28.Cost = (FPoseSearchCost)param_3->TotalCost;
    }
    TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_>::
    HeapPush<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare>
              (&this->TransientPoseCandidates,&local_28,local_res18);
  }
  else {
    local_28.Cost = (FPoseSearchCost)param_3->TotalCost;
    local_res18[0] = (FPoseCandidateHeapCompare)0x0;
    pFVar2 = TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
             ::FindOrAddByHash<UE::PoseSearch::FSearchContext::FPoseCandidate_const_&>
                       (&this->PermanentPoseCandidates,param_1,&local_28,(bool *)local_res18);
    if (local_res18[0] != (FPoseCandidateHeapCompare)0x0) {
      fVar1 = (pFVar2->Cost).TotalCost;
      if (param_3->TotalCost <= fVar1 && fVar1 != param_3->TotalCost) {
        (pFVar2->Cost).TotalCost = param_3->TotalCost;
      }
      pFVar2->PoseCandidateFlags = pFVar2->PoseCandidateFlags | param_2;
    }
  }
  return;
}

// GetUnsortedCandidate @ 14a8bf400

FPoseCandidate * __thiscall
UE::PoseSearch::FSearchContext::FBestPoseCandidates::GetUnsortedCandidate
          (FBestPoseCandidates *this,FPoseCandidate *__return_storage_ptr__,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  EPoseCandidateFlags EVar8;
  FPoseCandidate *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  
  uVar11 = (ulonglong)(uint)param_1;
  puVar1 = &(this->PermanentPoseCandidates).Elements.field_0x34;
  if (((param_1 < 0) ||
      ((*(int *)&(this->PermanentPoseCandidates).Elements.field_0x8 - *(int *)puVar1) +
       (this->TransientPoseCandidates).ArrayNum <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x34f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FPoseCandidate *)(*pcVar5)();
    return pFVar9;
  }
  iStack_58 = 0;
  iVar7 = *(int *)&(this->PermanentPoseCandidates).Elements.field_0x8 - *(int *)puVar1;
  if (param_1 < iVar7) {
    iVar7 = *(int *)&(this->PermanentPoseCandidates).Elements.field_0x28;
    TStack_80.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->PermanentPoseCandidates).Elements.field_0x10;
    uStack_54 = 1;
    local_40 = 0;
    iStack_44 = 0;
    if (iVar7 != 0) {
      puVar14 = *(uint **)&(this->PermanentPoseCandidates).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_80.Array;
      }
      uVar13 = *puVar14;
      while (uVar13 == 0) {
        lVar10 = (longlong)iStack_58;
        local_40 = local_40 + 0x20;
        iStack_58 = iStack_58 + 1;
        iStack_44 = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_14a8bf501;
        uVar13 = puVar14[lVar10 + 1];
      }
      uStack_54 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_54 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_44 = local_40 + -1 + (int)lVar10;
      if (iVar7 < iStack_44) {
        iStack_44 = iVar7;
      }
    }
LAB_14a8bf501:
    uStack_48 = 0xffffffff;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80._28_4_ = local_8c;
    TStack_80.BaseBitIndex = local_40;
    local_60 = &this->PermanentPoseCandidates;
    local_50 = (undefined1 *)TStack_80.Array;
    TStack_80.CurrentBitIndex = iStack_44;
    TStack_80._padding_._0_4_ = iStack_58;
    TStack_80._padding_._4_4_ = uStack_54;
    if (0 < param_1) {
      do {
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        if (((TStack_80.Array)->NumBits <= TStack_80.CurrentBitIndex) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ConstIterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                               ,0x358,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FPoseCandidate *)(*pcVar5)();
          return pFVar9;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    lVar10 = *(longlong *)&(this->PermanentPoseCandidates).Elements;
    uVar3 = *(undefined8 *)(lVar10 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    uVar15 = (undefined4)uVar3;
    uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
    EVar8 = *(EPoseCandidateFlags *)(lVar10 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x14);
  }
  else {
    uVar12 = param_1 - iVar7;
    uVar13 = 0;
    if ((int)uVar12 < (this->TransientPoseCandidates).ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FPoseCandidate *)(*pcVar5)();
      return pFVar9;
    }
    pFVar4 = (this->TransientPoseCandidates).AllocatorInstance.Data;
    uVar3 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar12 * 0xc);
    uVar15 = (undefined4)uVar3;
    uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
    EVar8 = *(EPoseCandidateFlags *)(pFVar4 + (longlong)(int)uVar12 * 0xc + 8);
  }
  __return_storage_ptr__->PoseIdx = uVar15;
  __return_storage_ptr__->Cost = (FPoseSearchCost)uVar16;
  __return_storage_ptr__->PoseCandidateFlags = EVar8;
  return __return_storage_ptr__;
}

// IterateOverBestPoseCandidates @ 14a8c1060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::PoseSearch::FSearchContext::FBestPoseCandidates::IterateOverBestPoseCandidates
          (FBestPoseCandidates *this,
          TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchContext::FPoseCandidate_const_&)>
          *param_1)

{
  undefined1 *puVar1;
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *pTVar2;
  uchar *puVar3;
  undefined4 *puVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> this_00;
  undefined4 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *pTVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  FBestPoseCandidates *pFVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  ForElementType<unsigned_int> FVar28;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  uint local_154;
  undefined1 local_150 [12];
  uint uStack_144;
  ForElementType<unsigned_int> FStack_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  FSparseArrayAllocationInfo local_128;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  FBestPoseCandidates *local_108;
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  int local_d8;
  undefined4 uStack_d4;
  TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar17 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar21 = ((this->TransientPoseCandidates).ArrayNum -
           *(int *)&(this->PermanentPoseCandidates).Elements.field_0x34) +
           *(int *)&(this->PermanentPoseCandidates).Elements.field_0x8;
  local_108 = this;
  if (uVar21 == 0) goto LAB_14a8c12ef;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar21);
  if (uVar21 < 4) {
    uVar21 = 1;
  }
  else {
    uVar25 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar20 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar21 <= (int)local_50)) goto LAB_14a8c12ef;
  local_50 = uVar21;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar21 != 0) {
    uVar19 = uVar21;
    if (uVar21 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14a8c1143;
      }
    }
    else {
LAB_14a8c1143:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar19,4);
    }
    if (0 < (int)uVar21) {
      uVar26 = (ulonglong)uVar21;
      uVar25 = uVar17;
      do {
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar14 = uVar25 & (longlong)(int)uVar21 - 1U;
        uVar25 = uVar25 + 1;
        *(undefined4 *)(FVar18.Data + uVar14 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_50 != 0) {
    local_128.Index = 0;
    local_128._4_4_ = 1;
    uStack_114 = 0;
    uStack_110 = 0;
    if (local_70 != 0) {
      FVar27 = this_00;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_78;
      }
      uVar21 = *(uint *)FVar27;
      uVar25 = uVar17;
      while (uVar21 == 0) {
        uStack_110 = (int)uVar25 + 0x20;
        uVar25 = (ulonglong)uStack_110;
        iVar16 = (int)uVar17;
        local_128.Index = iVar16 + 1;
        uVar17 = (ulonglong)(uint)local_128.Index;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_128.Index)
        goto LAB_14a8c124f;
        uVar21 = *(uint *)((uchar *)((longlong)FVar27 + 4) + (longlong)iVar16 * 4);
      }
      local_128._4_4_ = -uVar21 & uVar21;
      uVar17 = (ulonglong)(uint)local_128._4_4_ * 2 + 1;
      lVar20 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uStack_114 = (uStack_110 - 1) + (int)lVar20;
      uVar17 = (ulonglong)uStack_114;
      if ((int)local_70 < (int)uStack_114) {
LAB_14a8c124f:
        uVar17 = (ulonglong)local_70;
        uStack_114 = local_70;
      }
    }
    local_118 = 0xffffffff;
    local_150._0_8_ = local_98;
    local_150._8_4_ = local_128.Index;
    uStack_144 = local_128._4_4_;
    uStack_130 = CONCAT44(uStack_10c,uStack_110);
    uStack_138 = 0xffffffff;
    uStack_134 = uStack_114;
    local_128.Pointer = (void *)this_00;
    FStack_140 = this_00;
    if ((int)uVar17 < (int)local_70) {
      do {
        iVar16 = (int)uVar17;
        uVar21 = local_50 - 1 & *(uint *)(*(longlong *)local_150._0_8_ + (longlong)iVar16 * 0xc);
        lVar20 = *(longlong *)local_150._0_8_ + (longlong)iVar16 * 0xc;
        *(uint *)(lVar20 + 8) = uVar21;
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(lVar20 + 4) = *(undefined4 *)(FVar18.Data + uVar17 * 4);
        *(int *)(FVar18.Data + uVar17 * 4) = iVar16;
        uStack_138 = uStack_138 & ~uStack_144;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_150 + 8));
        uVar17 = (ulonglong)uStack_134;
      } while ((int)uStack_134 < *(int *)((longlong)FStack_140 + 0x18));
    }
  }
LAB_14a8c12ef:
  puVar1 = &(this->PermanentPoseCandidates).Elements.field_0x10;
  pTVar2 = &this->PermanentPoseCandidates;
  local_150._0_8_ = 0x100000000;
  FStack_140._0_4_ = 0xffffffff;
  FStack_140._4_4_ = 0;
  uStack_138 = 0;
  unique0x10000d8b = (ForElementType<unsigned_int>)puVar1;
  if (*(int *)&(this->PermanentPoseCandidates).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_150);
  }
  TStack_f8.CurrentBitIndex = FStack_140._4_4_;
  TStack_f8.UnvisitedBitMask = FStack_140._0_4_;
  TStack_f8._28_4_ = uStack_134;
  TStack_f8.BaseBitIndex = uStack_138;
  local_d8 = *(int *)&(this->PermanentPoseCandidates).Elements.field_0x8 -
             *(int *)&(this->PermanentPoseCandidates).Elements.field_0x34;
  TStack_f8._padding_ = local_150._0_8_;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)stack0xfffffffffffffeb8;
  TStack_c8._padding_ = local_150._0_8_;
  uStack_a8 = CONCAT44(uStack_d4,local_d8);
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)stack0xfffffffffffffeb8;
  local_100 = pTVar2;
  local_d0 = pTVar2;
  TStack_c8._16_8_ = TStack_f8._16_8_;
  TStack_c8._24_8_ = TStack_f8._24_8_;
  pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_150,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->PermanentPoseCandidates).Elements.field_0x28);
  TStack_f8._padding_ = pTVar15->_padding_;
  FVar27 = (ForElementType<unsigned_int>)pTVar15->Array;
  uVar7._0_4_ = pTVar15->UnvisitedBitMask;
  uVar7._4_4_ = pTVar15->CurrentBitIndex;
  TStack_f8.BaseBitIndex = pTVar15->BaseBitIndex;
  TStack_f8._28_4_ = *(undefined4 *)&pTVar15->field_0x1c;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar27;
  TStack_f8._16_8_ = uVar7;
  while( true ) {
    pTVar9 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_c8.CurrentBitIndex == uVar7._4_4_) &&
        ((ForElementType<unsigned_int>)TStack_c8.Array == FVar27)) && (pTVar9 == pTVar2)) {
      iVar16 = (local_108->TransientPoseCandidates).ArrayNum;
      pFVar24 = (local_108->TransientPoseCandidates).AllocatorInstance.Data;
      pFVar5 = pFVar24 + (longlong)iVar16 * 0xc;
      pFVar23 = local_108;
      goto LAB_14a8c1725;
    }
    puVar4 = (undefined4 *)
             (*(longlong *)&pTVar9->Elements + (longlong)TStack_c8.CurrentBitIndex * 0x14);
    cVar10 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,puVar4);
    if (cVar10 != '\0') break;
    uVar6 = *puVar4;
    if (local_64 == 0) {
      iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                          (int *)(local_98 + 0xc));
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,false);
      iVar16 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar16 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
      iVar12 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar16 * 0xc) = 0xffffffff;
      }
    }
    local_68 = iVar16;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_128,iVar12);
    pvVar8 = local_128.Pointer;
    if ((ForElementType<unsigned_int>)local_128.Pointer != (ForElementType<unsigned_int>)0x0) {
      *(undefined4 *)local_128.Pointer = uVar6;
      puVar3 = (uchar *)((longlong)local_128.Pointer + 4);
      puVar3[0] = 0xff;
      puVar3[1] = 0xff;
      puVar3[2] = 0xff;
      puVar3[3] = 0xff;
    }
    uVar21 = *(uint *)local_128.Pointer;
    local_154 = local_128.Index;
    bVar11 = TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
             TryReplaceExisting((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                                 *)local_98,uVar21,local_128.Pointer,(int *)&local_154,(bool *)0x0);
    if (!bVar11) {
      uVar22 = 1;
      uVar19 = local_98._8_4_ - local_64;
      if (3 < uVar19) {
        uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar22 = 1 << ((byte)lVar20 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar22 <= (int)local_50)) {
        uVar21 = local_50 - 1 & uVar21;
        *(uint *)((longlong)pvVar8 + 8) = uVar21;
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)((longlong)pvVar8 + 4) = *(undefined4 *)(FVar18.Data + uVar17 * 4);
        *(uint *)(FVar18.Data + uVar17 * 4) = local_154;
      }
      else {
        local_50 = uVar22;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar22 != 0) {
          uVar21 = uVar22;
          if (uVar22 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar21 = 0;
              goto LAB_14a8c1522;
            }
          }
          else {
LAB_14a8c1522:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar21,4);
          }
          if (0 < (int)uVar22) {
            uVar25 = (ulonglong)uVar22;
            uVar17 = 0;
            do {
              FVar18.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_58.Data;
              }
              uVar26 = uVar17 & (longlong)(int)uVar22 - 1U;
              uVar17 = uVar17 + 1;
              *(undefined4 *)(FVar18.Data + uVar26 * 4) = 0xffffffff;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
        }
        if (local_50 != 0) {
          iVar16 = 0;
          local_150._0_8_ = 0x100000000;
          FStack_140._4_4_ = 0;
          uStack_138 = 0;
          if (local_70 != 0) {
            FVar28 = this_00;
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar28 = local_78;
            }
            uVar21 = *(uint *)FVar28;
            uStack_138 = 0;
            while (uVar21 == 0) {
              uStack_138 = uStack_138 + 0x20;
              lVar20 = (longlong)iVar16;
              iVar16 = iVar16 + 1;
              local_150._4_4_ = (undefined4)((ulonglong)local_150._0_8_ >> 0x20);
              local_150._0_4_ = iVar16;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
              goto LAB_14a8c162f;
              uVar21 = *(uint *)((uchar *)((longlong)FVar28 + 4) + lVar20 * 4);
            }
            local_150._4_4_ = -uVar21 & uVar21;
            uVar17 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            FStack_140._4_4_ = uStack_138 + -1 + (int)lVar20;
            if ((int)local_70 < (int)FStack_140._4_4_) {
LAB_14a8c162f:
              FStack_140._4_4_ = local_70;
            }
          }
          FStack_140._0_4_ = 0xffffffff;
          local_100 = (TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
                       *)local_98;
          TStack_f8.CurrentBitIndex = FStack_140._4_4_;
          TStack_f8.UnvisitedBitMask = 0xffffffff;
          TStack_f8._28_4_ = uStack_134;
          TStack_f8.BaseBitIndex = uStack_138;
          TStack_f8._padding_ = local_150._0_8_;
          unique0x10000d7b = this_00;
          TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
          uVar21 = FStack_140._4_4_;
          if ((int)FStack_140._4_4_ < (int)local_70) {
            do {
              uVar19 = local_50 - 1 &
                       *(uint *)(*(longlong *)&local_100->Elements + (longlong)(int)uVar21 * 0xc);
              lVar20 = *(longlong *)&local_100->Elements + (longlong)(int)uVar21 * 0xc;
              *(uint *)(lVar20 + 8) = uVar19;
              FVar18.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_58.Data;
              }
              uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
              *(undefined4 *)(lVar20 + 4) = *(undefined4 *)(FVar18.Data + uVar17 * 4);
              *(uint *)(FVar18.Data + uVar17 * 4) = uVar21;
              TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
              uVar21 = TStack_f8.CurrentBitIndex;
            } while (TStack_f8.CurrentBitIndex < *(int *)((longlong)TStack_f8.Array + 0x18));
          }
        }
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
LAB_14a8c18ea:
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return true;
LAB_14a8c1725:
  if ((pFVar23->TransientPoseCandidates).ArrayNum != iVar16) {
    `TCheckedPointerIterator<UE::PoseSearch::FSearchContext::FPoseCandidate_const_,int,0>::
    operator!='::__l2::<lambda_1>::operator()(local_158);
  }
  if (pFVar24 == pFVar5) {
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    return false;
  }
  uVar21 = *(uint *)pFVar24;
  if (local_98._8_4_ != local_64) {
    FVar18.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar18.Data = local_58.Data;
    }
    for (iVar12 = *(int *)(FVar18.Data + (ulonglong)(local_50 - 1 & uVar21) * 4); iVar12 != -1;
        iVar12 = *(int *)(local_98._0_8_ + (longlong)iVar12 * 0xc + 4)) {
      if (*(uint *)(local_98._0_8_ + (longlong)iVar12 * 0xc) == uVar21) {
        bVar11 = iVar12 != -1;
        if (!bVar11) goto LAB_14a8c178e;
        goto LAB_14a8c18a9;
      }
    }
  }
  bVar11 = false;
LAB_14a8c178e:
  if (local_64 == 0) {
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                        (int *)(local_98 + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add((TBitArray<FDefaultBitArrayAllocator> *)this_00,false)
    ;
    iVar12 = local_68;
  }
  else {
    iVar12 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
    local_64 = local_64 + -1;
    iVar13 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar12 * 0xc) = 0xffffffff;
    }
  }
  local_68 = iVar12;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_128,iVar13);
  if ((ForElementType<unsigned_int>)local_128.Pointer != (ForElementType<unsigned_int>)0x0) {
    *(uint *)local_128.Pointer = uVar21;
    puVar3 = (uchar *)((longlong)local_128.Pointer + 4);
    puVar3[0] = 0xff;
    puVar3[1] = 0xff;
    puVar3[2] = 0xff;
    puVar3[3] = 0xff;
  }
  uVar19 = local_98._8_4_ - local_64;
  if (uVar19 < 4) {
    uVar22 = 1;
  }
  else {
    uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar20 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar22 <= (int)local_50)) {
    uVar21 = local_50 - 1 & uVar21;
    *(uint *)((longlong)local_128.Pointer + 8) = uVar21;
    FVar18.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar18.Data = local_58.Data;
    }
    uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
    *(undefined4 *)((longlong)local_128.Pointer + 4) = *(undefined4 *)(FVar18.Data + uVar17 * 4);
    *(int *)(FVar18.Data + uVar17 * 4) = local_128.Index;
    pFVar23 = local_108;
  }
  else {
    local_50 = uVar22;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_98);
    pFVar23 = local_108;
  }
LAB_14a8c18a9:
  if ((!bVar11) &&
     (cVar10 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar24), cVar10 != '\0'))
  goto LAB_14a8c18ea;
  pFVar24 = pFVar24 + 0xc;
  goto LAB_14a8c1725;
}

// Num @ 14a8c1ce0

int __thiscall UE::PoseSearch::FSearchContext::FBestPoseCandidates::Num(FBestPoseCandidates *this)

{
  return (*(int *)&(this->PermanentPoseCandidates).Elements.field_0x8 -
         *(int *)&(this->PermanentPoseCandidates).Elements.field_0x34) +
         (this->TransientPoseCandidates).ArrayNum;
}

