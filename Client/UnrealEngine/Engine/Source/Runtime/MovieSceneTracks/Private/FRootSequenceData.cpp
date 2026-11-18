// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// FRootSequenceData @ 14689c4a0

/* WARNING: Enum "Type": Some values do not have unique names */

FRootSequenceData * __thiscall
UE::MovieScene::FRootSequenceData::FRootSequenceData
          (FRootSequenceData *this,FRootSequenceData *param_1)

{
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar1;
  
  this->InstanceRegistry = param_1->InstanceRegistry;
  this->RootHierarchy = param_1->RootHierarchy;
  (this->SequenceIDs).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0;
  if ((param_1->SequenceIDs).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    memmove(&this->SequenceIDs,&param_1->SequenceIDs,0x180);
  }
  FVar1 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->SequenceIDs).AllocatorInstance.SecondaryData =
       (param_1->SequenceIDs).AllocatorInstance.SecondaryData;
  (param_1->SequenceIDs).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0;
  (this->SequenceIDs).ArrayNum = (param_1->SequenceIDs).ArrayNum;
  (this->SequenceIDs).ArrayMax = (param_1->SequenceIDs).ArrayMax;
  (param_1->SequenceIDs).ArrayNum = 0;
  (param_1->SequenceIDs).ArrayMax = 0x20;
  this->RootInstanceHandle = param_1->RootInstanceHandle;
  return this;
}

// Add @ 1468a51e0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FRootSequenceData::Add
          (FRootSequenceData *this,FMovieSceneSequenceID param_1,
          EHierarchicalSequenceChannelFlags param_2)

{
  TArray<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar10;
  uint uVar11;
  uint local_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  EHierarchicalSequenceChannelFlags local_20;
  
  pTVar1 = &this->SequenceIDs;
  FVar10 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  uVar4 = (this->SequenceIDs).ArrayNum;
  if (FVar10 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FVar10 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)pTVar1;
  }
  iVar8 = 0;
  uVar11 = uVar4;
  if (0 < (int)uVar4) {
    do {
      iVar9 = (uVar11 >> 1) + iVar8;
      if (*(uint *)((longlong)FVar10 + (longlong)iVar9 * 0xc) < param_1.Value) {
        iVar8 = iVar9 + (uVar11 & 1);
      }
      uVar6 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar6 != 0);
  }
  if ((-1 < iVar8) && (iVar8 < (int)uVar4)) {
    if ((iVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    FVar10 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
      FVar10 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)pTVar1;
    }
    if ((*(uint *)((longlong)FVar10 + (longlong)iVar8 * 0xc) == param_1.Value) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SequenceIDs.IsValidIndex(Index) || SequenceIDs[Index].SequenceID != SequenceID"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                           ,0x8c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  FVar10 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  uStack_24 = 0xffff;
  if (FVar10 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FVar10 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)pTVar1;
  }
  local_28 = param_1.Value;
  local_20 = param_2;
  if ((((ulonglong)FVar10 <= &local_28) &&
      (&local_28 < (uint *)((longlong)FVar10 + (longlong)(this->SequenceIDs).ArrayMax * 0xc))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  iVar9 = (this->SequenceIDs).ArrayNum;
  piVar2 = &(this->SequenceIDs).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>_>
                      (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->SequenceIDs).ArrayNum = iVar9 + 1;
  FVar10 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  lVar3 = (longlong)iVar8 * 0xc;
  if (FVar10 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FVar10 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)pTVar1;
  }
  memmove((void *)((longlong)FVar10 + lVar3 + 0xc),(void *)((longlong)FVar10 + lVar3),
          (longlong)(iVar9 - iVar8) * 0xc);
  FVar10 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FVar10 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar10 + lVar3) = CONCAT26(uStack_22,CONCAT24(uStack_24,local_28));
  *(EHierarchicalSequenceChannelFlags *)((uchar *)((longlong)FVar10 + 8) + lVar3) = local_20;
  return iVar8;
}

// AddImplicitChild @ 1468a6430

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FRootSequenceData::AddImplicitChild
          (FRootSequenceData *this,FMovieSceneSequenceID param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMovieSceneSequenceHierarchy *pFVar7;
  FMovieSceneSequenceHierarchyNode *pFVar8;
  longlong lVar9;
  FMovieSceneSequenceID local_res10 [2];
  
  local_res10[0].Value = param_1.Value;
  iVar6 = IndexOf(this,param_1);
  if (iVar6 != -1) {
    return true;
  }
  if (this->RootHierarchy == (FMovieSceneSequenceHierarchy *)0x0) {
    lVar9 = (ulonglong)*(ushort *)&this->RootInstanceHandle * 0x140;
    lVar1 = *(longlong *)&this->InstanceRegistry->Instances;
    pTVar2 = *(TReferenceControllerBase<1> **)(lVar9 + 0x120 + lVar1);
    this_00 = *(FSharedPlaybackState **)(lVar9 + 0x118 + lVar1);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FSharedPlaybackState::GetHierarchy(this_00);
    this->RootHierarchy = pFVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if (this->RootHierarchy == (FMovieSceneSequenceHierarchy *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5842741950335156385>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                       ,0xa1,"RootHierarchy");
    if (bVar4) {
code_r0x0001468a6521:
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    pFVar8 = FMovieSceneSequenceHierarchy::FindNode(this->RootHierarchy,local_res10);
    if (pFVar8 == (FMovieSceneSequenceHierarchyNode *)0x0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5842741950335156389>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                         ,0xa5,"Node");
      if (bVar4) goto code_r0x0001468a6521;
    }
    else if (((pFVar8->ParentID).Value != 0xffffffff) &&
            (bVar4 = AddImplicitChild(this,(FMovieSceneSequenceID)(pFVar8->ParentID).Value), bVar4))
    {
      Add(this,param_1,SharedWithParent);
      return true;
    }
  }
  return false;
}

// IndexOf @ 1468bb300

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FRootSequenceData::IndexOf(FRootSequenceData *this,FMovieSceneSequenceID param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  FVar6 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  uVar1 = (this->SequenceIDs).ArrayNum;
  if (FVar6 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FVar6 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
            &this->SequenceIDs;
  }
  uVar7 = 0;
  uVar8 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar9 = uVar8 >> 1;
      iVar5 = uVar9 + (int)uVar7;
      if (*(uint *)((longlong)FVar6 + (longlong)iVar5 * 0xc) < param_1.Value) {
        uVar7 = (ulonglong)(iVar5 + (uVar8 & 1));
      }
      uVar8 = uVar9;
    } while (uVar9 != 0);
    if ((int)uVar7 < 0) {
      return -1;
    }
  }
  if ((int)uVar1 <= (int)uVar7) {
    return -1;
  }
  if (((int)uVar7 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar6 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FVar6 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
            &this->SequenceIDs;
  }
  uVar4 = 0xffffffff;
  if (*(uint *)((longlong)FVar6 + uVar7 * 0xc) == param_1.Value) {
    uVar4 = uVar7;
  }
  return (int)uVar4;
}

// ProduceChannelForIndex @ 1468c6f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

ushort __thiscall
UE::MovieScene::FRootSequenceData::ProduceChannelForIndex
          (FRootSequenceData *this,int param_1,FSequenceInstance *param_2,
          TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *param_3,
          FHierarchicalEasingChannelBuffer *param_4)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *this_00;
  code *pcVar3;
  TSparseArrayBase<2,2,FDefaultSparseArrayAllocator> *this_01;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FSparseArrayAllocationInfo *pFVar9;
  FMovieSceneSequenceHierarchy *pFVar10;
  uint *puVar11;
  uint *puVar12;
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  FMovieSceneSequenceHierarchy *pFVar19;
  longlong lVar20;
  uint uVar21;
  ushort local_res8 [4];
  int local_res10;
  FSequenceInstance *local_res18;
  TSparseArrayBase<2,2,FDefaultSparseArrayAllocator> *local_res20;
  FHierarchicalEasingChannelData local_a8;
  FHierarchicalEasingChannelData local_90;
  FSparseArrayAllocationInfo local_78;
  FSparseArrayAllocationInfo local_68;
  FSparseArrayAllocationInfo local_58;
  
  puVar17 = (uint *)0x0;
  lVar18 = (longlong)param_1;
  uVar16 = 0;
  uVar21 = (uint)~param_1 >> 0x1f;
  uVar6 = uVar16;
  if (param_1 < (this->SequenceIDs).ArrayNum) {
    uVar6 = uVar21;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = (TSparseArrayBase<2,2,FDefaultSparseArrayAllocator> *)param_3;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  FVar13 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
    FVar13 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
             &this->SequenceIDs;
  }
  uVar5 = *(ushort *)((uchar *)((longlong)FVar13 + 4) + lVar18 * 0xc);
  if (uVar5 == 0xffff) {
    uVar6 = uVar16;
    if (param_1 < (this->SequenceIDs).ArrayNum) {
      uVar6 = uVar21;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    FVar13 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
      FVar13 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
               &this->SequenceIDs;
    }
    local_a8.FinalResult = *(double *)((longlong)FVar13 + lVar18 * 0xc);
    uVar6 = *(uint *)((uchar *)((longlong)FVar13 + 8) + lVar18 * 0xc);
    uVar8 = local_a8.FinalResult._0_4_;
    bVar4 = local_a8.FinalResult._0_4_ != 0;
    if (local_a8.FinalResult._0_4_ == 0) {
      local_a8.FinalResult = ___xmm_3ff00000000000003ff0000000000000;
      local_a8.UnaccumulatedResult = _UNK_150689688;
      local_a8.ParentChannel = 0xffff;
      local_a8.ResultChannel = 0xffff;
      local_a8.HBias = 0;
      local_a8.BlendMode = AccumulateParentToChild;
      uVar5 = FHierarchicalEasingChannelBuffer::AddBaseChannel(param_4,&local_a8);
      pFVar9 = TSparseArrayBase<2,2,FDefaultSparseArrayAllocator>::InsertUninitialized
                         (local_res20,&local_78,(uint)*(ushort *)&this->RootInstanceHandle);
      if (pFVar9->Pointer != (ushort *)0x0) {
        *(ushort *)pFVar9->Pointer = uVar5;
      }
      if (param_1 < (this->SequenceIDs).ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      FVar13 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
        FVar13 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
                 &this->SequenceIDs;
      }
      *(ushort *)((longlong)FVar13 + 4 + lVar18 * 0xc) = uVar5;
    }
    else {
      if (this->RootHierarchy == (FMovieSceneSequenceHierarchy *)0x0) {
        lVar20 = (ulonglong)*(ushort *)&this->RootInstanceHandle * 0x140;
        lVar1 = *(longlong *)&this->InstanceRegistry->Instances;
        pTVar2 = *(TReferenceControllerBase<1> **)(lVar20 + 0x120 + lVar1);
        this_00 = *(FSharedPlaybackState **)(lVar20 + 0x118 + lVar1);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar10 = FSharedPlaybackState::GetHierarchy(this_00);
        this->RootHierarchy = pFVar10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      pFVar10 = this->RootHierarchy;
      if (pFVar10 != (FMovieSceneSequenceHierarchy *)0x0) {
        pFVar19 = pFVar10;
        if (bVar4) {
          puVar11 = puVar17;
          if (*(int *)&(pFVar10->Hierarchy).field_0x8 != *(int *)&(pFVar10->Hierarchy).field_0x34) {
            puVar14 = *(undefined1 **)&(pFVar10->Hierarchy).field_0x40;
            if (puVar14 == (undefined1 *)0x0) {
              puVar14 = &(pFVar10->Hierarchy).field_0x38;
            }
            uVar16 = *(uint *)(puVar14 +
                              (ulonglong)(*(int *)&(pFVar10->Hierarchy).field_0x48 - 1U & uVar8) * 4
                              );
            if (uVar16 != 0xffffffff) {
              do {
                puVar11 = (uint *)(*(longlong *)&pFVar10->Hierarchy + (longlong)(int)uVar16 * 0x28);
                if (*(uint *)(*(longlong *)&pFVar10->Hierarchy + (longlong)(int)uVar16 * 0x28) ==
                    uVar8) break;
                uVar16 = puVar11[8];
                puVar11 = puVar17;
              } while (uVar16 != 0xffffffff);
            }
          }
          pFVar19 = (FMovieSceneSequenceHierarchy *)(puVar11 + 2);
          if (puVar11 == (uint *)0x0) {
            pFVar19 = (FMovieSceneSequenceHierarchy *)0x0;
          }
        }
        puVar11 = puVar17;
        if (bVar4) {
          puVar12 = puVar17;
          if (*(int *)&(pFVar10->SubSequences).field_0x8 !=
              *(int *)&(pFVar10->SubSequences).field_0x34) {
            puVar14 = *(undefined1 **)&(pFVar10->SubSequences).field_0x40;
            if (puVar14 == (undefined1 *)0x0) {
              puVar14 = &(pFVar10->SubSequences).field_0x38;
            }
            uVar16 = *(uint *)(puVar14 +
                              (ulonglong)(*(int *)&(pFVar10->SubSequences).field_0x48 - 1U & uVar8)
                              * 4);
            if (uVar16 != 0xffffffff) {
              do {
                puVar12 = (uint *)((longlong)(int)uVar16 * 0x120 +
                                  *(longlong *)&pFVar10->SubSequences);
                if (*puVar12 == uVar8) break;
                uVar16 = puVar12[0x46];
                puVar12 = puVar17;
              } while (uVar16 != 0xffffffff);
            }
          }
          puVar11 = puVar12 + 2;
          if (puVar12 == (uint *)0x0) {
            puVar11 = (uint *)0x0;
          }
        }
        if ((pFVar19 != (FMovieSceneSequenceHierarchy *)0x0) && (puVar11 != (uint *)0x0)) {
          uVar5 = 0xffff;
          do {
            iVar7 = IndexOf(this,(FMovieSceneSequenceID)(pFVar19->RootNode).ParentID.Value);
            this_01 = local_res20;
            if (iVar7 != -1) {
              uVar5 = ProduceChannelForIndex
                                (this,iVar7,local_res18,
                                 (TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *)
                                 local_res20,param_4);
              break;
            }
            uVar16 = (pFVar19->RootNode).ParentID.Value;
            pFVar19 = this->RootHierarchy;
            if (uVar16 != 0) {
              puVar12 = puVar17;
              if (*(int *)&(pFVar19->Hierarchy).field_0x8 !=
                  *(int *)&(pFVar19->Hierarchy).field_0x34) {
                puVar14 = *(undefined1 **)&(pFVar19->Hierarchy).field_0x40;
                puVar15 = &(pFVar19->Hierarchy).field_0x38;
                if (puVar14 != (undefined1 *)0x0) {
                  puVar15 = puVar14;
                }
                uVar8 = *(uint *)(puVar15 +
                                 (ulonglong)(*(int *)&(pFVar19->Hierarchy).field_0x48 - 1U & uVar16)
                                 * 4);
                if (uVar8 != 0xffffffff) {
                  do {
                    puVar12 = (uint *)(*(longlong *)&pFVar19->Hierarchy +
                                      (longlong)(int)uVar8 * 0x28);
                    if (*(uint *)(*(longlong *)&pFVar19->Hierarchy + (longlong)(int)uVar8 * 0x28) ==
                        uVar16) break;
                    uVar8 = puVar12[8];
                    puVar12 = puVar17;
                  } while (uVar8 != 0xffffffff);
                }
              }
              pFVar19 = (FMovieSceneSequenceHierarchy *)(puVar12 + 2);
              if (puVar12 == (uint *)0x0) {
                pFVar19 = (FMovieSceneSequenceHierarchy *)0x0;
              }
            }
          } while (pFVar19 != (FMovieSceneSequenceHierarchy *)0x0);
          FSequenceInstance::FindSubInstance(local_res18,(FMovieSceneSequenceID)(uint)local_res8);
          if (local_res8[0] == 0xffff) {
            return uVar5;
          }
          if ((uVar6 & 1) != 0) {
            pFVar9 = TSparseArrayBase<2,2,FDefaultSparseArrayAllocator>::InsertUninitialized
                               (this_01,&local_68,(uint)local_res8[0]);
            if (pFVar9->Pointer != (ushort *)0x0) {
              *(ushort *)pFVar9->Pointer = uVar5;
            }
            uVar6 = 0;
            if (local_res10 < (this->SequenceIDs).ArrayNum) {
              uVar6 = uVar21;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return uVar5;
            }
            FVar13 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
            if (FVar13 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
                          0x0) {
              FVar13 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
                       &this->SequenceIDs;
            }
            *(ushort *)((longlong)FVar13 + 4 + lVar18 * 0xc) = uVar5;
            return uVar5;
          }
          local_90.ResultChannel = 0xffff;
          local_90.HBias = (short)puVar11[0x2b];
          local_90.FinalResult = ___xmm_3ff00000000000003ff0000000000000;
          local_90.UnaccumulatedResult = _UNK_150689688;
          local_90.BlendMode = AccumulateParentToChild;
          local_90.ParentChannel = uVar5;
          uVar5 = FHierarchicalEasingChannelBuffer::AddBaseChannel(param_4,&local_90);
          pFVar9 = TSparseArrayBase<2,2,FDefaultSparseArrayAllocator>::InsertUninitialized
                             (this_01,&local_58,(uint)local_res8[0]);
          if (pFVar9->Pointer != (ushort *)0x0) {
            *(ushort *)pFVar9->Pointer = uVar5;
          }
          uVar6 = 0;
          if (local_res10 < (this->SequenceIDs).ArrayNum) {
            uVar6 = uVar21;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
          FVar13 = (this->SequenceIDs).AllocatorInstance.SecondaryData;
          if (FVar13 == (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
                        0x0) {
            FVar13 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
                     &this->SequenceIDs;
          }
          *(ushort *)((longlong)FVar13 + 4 + lVar18 * 0xc) = uVar5;
          return uVar5;
        }
      }
      uVar5 = 0xffff;
    }
  }
  return uVar5;
}

