// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 11

// operator= @ 14609a490

FMovieSceneEvaluationTree * __thiscall
FMovieSceneEvaluationTree::operator=
          (FMovieSceneEvaluationTree *this,FMovieSceneEvaluationTree *param_1)

{
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *pTVar1;
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *pTVar2;
  FScriptContainerElement *pFVar3;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  FEvaluationTreeEntryHandle FVar6;
  FEvaluationTreeEntryHandle FVar7;
  TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *pTVar9;
  uint local_res8;
  uint local_res10;
  
  TVar4 = (param_1->RootNode).Range.UpperBound;
  pTVar1 = &param_1->ChildNodes;
  pTVar2 = &this->ChildNodes;
  (this->RootNode).Range.LowerBound = (param_1->RootNode).Range.LowerBound;
  (this->RootNode).Range.UpperBound = TVar4;
  FVar6.EntryIndex = (param_1->RootNode).ChildrenID.EntryIndex;
  FVar7.EntryIndex = (param_1->RootNode).DataID.EntryIndex;
  (this->RootNode).Parent = (param_1->RootNode).Parent;
  (this->RootNode).ChildrenID = (FEvaluationTreeEntryHandle)FVar6.EntryIndex;
  (this->RootNode).DataID = (FEvaluationTreeEntryHandle)FVar7.EntryIndex;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->Entries).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->Entries).AllocatorInstance.Data = (pTVar1->Entries).AllocatorInstance.Data;
    (pTVar1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ChildNodes).Entries.ArrayNum = (param_1->ChildNodes).Entries.ArrayNum;
    (this->ChildNodes).Entries.ArrayMax = (param_1->ChildNodes).Entries.ArrayMax;
    (param_1->ChildNodes).Entries.ArrayNum = 0;
    (param_1->ChildNodes).Entries.ArrayMax = 0;
  }
  pTVar8 = &(param_1->ChildNodes).Items;
  pTVar9 = &(this->ChildNodes).Items;
  if (pTVar9 != pTVar8) {
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar9->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChildNodes).Items.ArrayNum = (param_1->ChildNodes).Items.ArrayNum;
    (this->ChildNodes).Items.ArrayMax = (param_1->ChildNodes).Items.ArrayMax;
    (param_1->ChildNodes).Items.ArrayNum = 0;
    (param_1->ChildNodes).Items.ArrayMax = 0;
  }
  local_res8 = CONCAT31(local_res8._1_3_,2);
  TVar4.Value.Value = 0;
  TVar4._0_4_ = local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  TVar5.Value.Value = 0;
  TVar5._0_4_ = local_res10;
  (param_1->RootNode).Range.LowerBound = TVar4;
  (param_1->RootNode).Range.UpperBound = TVar5;
  (param_1->RootNode).Parent.ChildrenHandle = -1;
  (param_1->RootNode).Parent.Index = -1;
  (param_1->RootNode).ChildrenID = -1;
  (param_1->RootNode).DataID = -1;
  return this;
}

// operator= @ 14609a590

FMovieSceneEvaluationTree * __thiscall
FMovieSceneEvaluationTree::operator=
          (FMovieSceneEvaluationTree *this,FMovieSceneEvaluationTree *param_1)

{
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *pTVar1;
  int *piVar2;
  TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TRangeBound<FFrameNumber> TVar7;
  FEvaluationTreeEntryHandle FVar8;
  FEvaluationTreeEntryHandle FVar9;
  TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *pTVar10;
  
  TVar7 = (param_1->RootNode).Range.UpperBound;
  pTVar1 = &this->ChildNodes;
  (this->RootNode).Range.LowerBound = (param_1->RootNode).Range.LowerBound;
  (this->RootNode).Range.UpperBound = TVar7;
  FVar8.EntryIndex = (param_1->RootNode).ChildrenID.EntryIndex;
  FVar9.EntryIndex = (param_1->RootNode).DataID.EntryIndex;
  (this->RootNode).Parent = (param_1->RootNode).Parent;
  (this->RootNode).ChildrenID = (FEvaluationTreeEntryHandle)FVar8.EntryIndex;
  (this->RootNode).DataID = (FEvaluationTreeEntryHandle)FVar9.EntryIndex;
  if (pTVar1 != &param_1->ChildNodes) {
    iVar4 = (param_1->ChildNodes).Entries.ArrayNum;
    piVar2 = &(this->ChildNodes).Entries.ArrayMax;
    pFVar6 = (param_1->ChildNodes).Entries.AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->ChildNodes).Entries.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,iVar5,(ForAnyElementType *)pTVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->Entries).AllocatorInstance.Data,pFVar6,(longlong)iVar4 * 0xc);
      }
    }
  }
  pTVar3 = &(param_1->ChildNodes).Items;
  pTVar10 = &(this->ChildNodes).Items;
  if (pTVar10 != pTVar3) {
    iVar4 = (param_1->ChildNodes).Items.ArrayNum;
    piVar2 = &(this->ChildNodes).Items.ArrayMax;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    iVar5 = *piVar2;
    (this->ChildNodes).Items.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,iVar4,iVar5,&pTVar10->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar10->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 5);
      }
    }
  }
  return this;
}

// GetNode @ 1460ce120

FMovieSceneEvaluationTreeNode * __thiscall
FMovieSceneEvaluationTree::GetNode
          (FMovieSceneEvaluationTree *this,FMovieSceneEvaluationTreeNodeHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar3;
  FMovieSceneEvaluationTreeNode *pFVar4;
  uint uVar5;
  FEvaluationTreeEntryHandle FVar6;
  uint uVar7;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_18;
  
  FVar6 = param_1.ChildrenHandle.EntryIndex;
  uVar7 = param_1.Index;
  if (FVar6.EntryIndex == -1) {
    bVar2 = uVar7 == 0;
  }
  else {
    pTVar3 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                       (&this->ChildNodes,&local_28,FVar6);
    if (((longlong)param_1 < 0) || (pTVar3->ArrayNum <= (int)uVar7)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Handle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                         ,0x18d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMovieSceneEvaluationTreeNode *)(*pcVar1)();
    return pFVar4;
  }
  if (FVar6.EntryIndex != -1) {
    pTVar3 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                       (&this->ChildNodes,&local_18,FVar6);
    uVar5 = 0;
    if ((int)uVar7 < pTVar3->ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvaluationTreeNode *)(*pcVar1)();
      return pFVar4;
    }
    this = (FMovieSceneEvaluationTree *)(pTVar3->DataPtr + (int)uVar7);
  }
  return &this->RootNode;
}

// AddTimeRange @ 146190c60

void __thiscall
FMovieSceneEvaluationTree::AddTimeRange
          (FMovieSceneEvaluationTree *this,TRange<FFrameNumber> *param_1,
          IMovieSceneEvaluationTreeNodeOperator *param_2,FMovieSceneEvaluationTreeNodeHandle param_3
          ,TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *param_4)

{
  uchar uVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  FFrameNumber FVar6;
  bool bVar7;
  char cVar8;
  TEnumAsByte<ERangeBoundTypes::Type> TVar9;
  FMovieSceneEvaluationTreeNode *pFVar10;
  TArrayView<FMovieSceneEvaluationTreeNode,int> *pTVar11;
  FMovieSceneEvaluationTree *pFVar12;
  FFrameNumber *pFVar13;
  TRangeBound<FFrameNumber> *pTVar14;
  TRange<FFrameNumber> *pTVar15;
  TRangeBound<FFrameNumber> TVar16;
  TRangeBound<FFrameNumber> *pTVar17;
  TRangeBound<FFrameNumber> TVar18;
  FMovieSceneEvaluationTreeNodeHandle FVar19;
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this_00;
  int local_198;
  TRange<FFrameNumber> local_190;
  TRangeBound<FFrameNumber> local_180;
  TRangeBound<FFrameNumber> local_178;
  TRangeBound<FFrameNumber> local_168;
  TRangeBound<FFrameNumber> TStack_160;
  TRangeBound<FFrameNumber> local_158;
  TRangeBound<FFrameNumber> TStack_150;
  FMovieSceneEvaluationTreeNodeHandle local_148;
  undefined8 uStack_140;
  TRange<FFrameNumber> local_138;
  FEvaluationTreeEntryHandle FStack_128;
  int iStack_124;
  undefined8 uStack_120;
  TRangeBound<FFrameNumber> local_118;
  uint local_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *local_f0;
  FMovieSceneEvaluationTreeNodeHandle local_e8;
  TRange<FFrameNumber> local_e0;
  TRange<FFrameNumber> local_c8;
  TRange<FFrameNumber> local_b8;
  TRange<FFrameNumber> local_a8;
  TRange<FFrameNumber> local_98;
  TRange<FFrameNumber> local_88;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_78;
  TRange<FFrameNumber> local_68;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_58;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_48;
  
  pFVar10 = GetNode(this,param_3);
  TVar18 = (pFVar10->Range).LowerBound;
  TVar16 = (pFVar10->Range).UpperBound;
  local_138.LowerBound._0_4_ = TVar18._0_4_;
  local_138.LowerBound.Value = TVar18.Value.Value;
  local_138.UpperBound._0_4_ = TVar16._0_4_;
  local_138.UpperBound.Value = TVar16.Value.Value;
  uStack_120._0_4_ = (pFVar10->ChildrenID).EntryIndex;
  uStack_120._4_4_ = pFVar10->DataID;
  FStack_128 = (pFVar10->Parent).ChildrenHandle;
  iStack_124 = (pFVar10->Parent).Index;
  bVar7 = TRange<FFrameNumber>::Overlaps(&local_138,param_1);
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7983133902954823902>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTree.cpp"
                       ,0xde,"ThisNode.Range.Overlaps(InTimeRange)");
    if (!bVar7) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_4 != (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0) &&
     (local_e8 = param_3, cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_e8)
     , cVar8 == '\0')) {
    return;
  }
  uVar1 = (param_1->LowerBound).Type.Value;
  TVar18.Value.Value = local_138.LowerBound.Value.Value;
  TVar18.Type.Value = local_138.LowerBound.Type.Value;
  TVar18._1_3_ = local_138.LowerBound._1_3_;
  if (uVar1 == '\x02') {
LAB_146190d67:
    uVar1 = (param_1->UpperBound).Type.Value;
    pTVar14 = &param_1->UpperBound;
    if (uVar1 != '\x02') {
      TVar9.Value = local_138.UpperBound.Type.Value;
      if ((TVar9.Value == '\x02') ||
         ((iVar2 = (param_1->UpperBound).Value.Value, iVar2 <= local_138.UpperBound.Value.Value &&
          ((iVar2 < local_138.UpperBound.Value.Value || (uVar1 != '\x01')))))) {
        pTVar14 = &local_138.UpperBound;
        if (TVar9.Value != uVar1) goto LAB_146190daf;
        if (TVar9.Value == '\x02') goto LAB_14619140f;
      }
      if ((pTVar14->Value).Value != (param_1->UpperBound).Value.Value) goto LAB_146190daf;
    }
LAB_14619140f:
    pcVar4 = *(code **)((longlong)*param_2 + 8);
    pFVar10 = GetNode(this,param_3);
    (*pcVar4)(param_2,pFVar10);
  }
  else {
    TVar9.Value = local_138.LowerBound.Type.Value;
    if ((TVar9.Value == '\x02') ||
       ((iVar2 = (param_1->LowerBound).Value.Value, pTVar15 = param_1,
        local_138.LowerBound.Value.Value <= iVar2 &&
        ((local_138.LowerBound.Value.Value < iVar2 || (uVar1 != '\x01')))))) {
      if (TVar9.Value == uVar1) {
        pTVar15 = &local_138;
        if (TVar9.Value == '\x02') goto LAB_146190d67;
        goto LAB_146190d5e;
      }
    }
    else {
LAB_146190d5e:
      if ((pTVar15->LowerBound).Value.Value == (param_1->LowerBound).Value.Value)
      goto LAB_146190d67;
    }
LAB_146190daf:
    if (uStack_120._0_4_ == -1) {
      TRange<FFrameNumber>::Intersection(&local_b8,&local_138,param_1);
      local_a8.LowerBound = local_b8.LowerBound;
      local_a8.UpperBound = local_b8.UpperBound;
      InsertNewChild(this,&local_a8,param_2,0,param_3);
    }
    else {
      this_00 = &this->ChildNodes;
      local_198 = 0;
      local_f0 = this_00;
      pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          (this_00,&local_78,uStack_120._0_4_);
      if (0 < pTVar11->ArrayNum) {
        do {
          pFVar12 = this;
          if (uStack_120._0_4_ != -1) {
            pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                (this_00,&local_58,uStack_120._0_4_);
            pFVar12 = (FMovieSceneEvaluationTree *)
                      TArrayView<FMovieSceneEvaluationTreeNode,int>::operator[](pTVar11,local_198);
          }
          local_158 = (pFVar12->RootNode).Range.LowerBound;
          TStack_150 = (pFVar12->RootNode).Range.UpperBound;
          local_148 = (pFVar12->RootNode).Parent;
          uStack_140._0_4_ = (pFVar12->RootNode).ChildrenID;
          uStack_140._4_4_ = (pFVar12->RootNode).DataID;
          TVar9 = local_158.Type.Value;
          if (TVar9.Value != '\x02') {
            if (TVar9.Value == '\0') {
              local_180.Type.Value = 1;
              local_180.Value.Value = local_158.Value.Value.Value;
              TVar16 = local_180;
            }
            else {
              TVar16 = local_158;
              if (TVar9.Value == '\x01') {
                local_180._0_4_ = local_180._1_4_ << 8;
                local_180.Value.Value = local_158.Value.Value.Value;
                TVar16 = local_180;
              }
            }
            local_180 = TVar16;
            local_190.LowerBound._0_4_ = TVar18._0_4_;
            local_190.LowerBound.Value = TVar18.Value.Value;
            local_190.UpperBound._0_4_ = local_180._0_4_;
            local_190.UpperBound.Value = local_180.Value.Value;
            local_118 = local_180;
            if ((TVar18.Type.Value.Value == '\x02') || (local_180.Type.Value.Value == '\x02')) {
LAB_146190f33:
              bVar7 = TRange<FFrameNumber>::IsEmpty(param_1);
              if (bVar7) {
                local_f8 = local_f8 & 0xffffff00;
                uStack_f4 = 0;
                TVar16.Value.Value = 0;
                TVar16._0_4_ = local_f8;
                local_100 = local_100 & 0xffffff00;
                uStack_fc = 0;
                local_168.Value.Value = 0;
                local_168._0_4_ = local_100;
              }
              else {
                pTVar14 = &param_1->UpperBound;
                pTVar17 = pTVar14;
                if (local_190.UpperBound.Type.Value != '\x02') {
                  if ((pTVar14->Type).Value == '\x02') {
                    pTVar17 = &local_190.UpperBound;
                  }
                  else {
                    iVar2 = (param_1->UpperBound).Value.Value;
                    if (local_190.UpperBound.Value.Value < iVar2) {
                      pTVar17 = &local_190.UpperBound;
                    }
                    else if ((local_190.UpperBound.Value.Value <= iVar2) &&
                            (pTVar17 = &local_190.UpperBound,
                            local_190.UpperBound.Type.Value != '\0')) {
                      pTVar17 = pTVar14;
                    }
                  }
                }
                pTVar15 = param_1;
                if (local_190.LowerBound.Type.Value != '\x02') {
                  if ((param_1->LowerBound).Type.Value == '\x02') {
                    pTVar15 = &local_190;
                  }
                  else {
                    iVar2 = (param_1->LowerBound).Value.Value;
                    if (iVar2 < local_190.LowerBound.Value.Value) {
                      pTVar15 = &local_190;
                    }
                    else if ((iVar2 <= local_190.LowerBound.Value.Value) &&
                            (pTVar15 = &local_190, local_190.LowerBound.Type.Value != '\0')) {
                      pTVar15 = param_1;
                    }
                  }
                }
                local_168 = pTVar15->LowerBound;
                TVar16 = *pTVar17;
              }
            }
            else {
              if ((TVar18.Type.Value.Value == '\x02') &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_190.LowerBound.Value.Value <= local_118.Value.Value) {
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_190.UpperBound);
                iVar2 = pFVar13->Value;
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_190.LowerBound);
                if ((pFVar13->Value != iVar2) ||
                   ((local_190.LowerBound.Type.Value != '\0' &&
                    (local_190.UpperBound.Type.Value != '\0')))) goto LAB_146190f33;
              }
              local_108 = local_108 & 0xffffff00;
              uStack_104 = 0;
              TVar16.Value.Value = 0;
              TVar16._0_4_ = local_108;
              local_110 = local_110 & 0xffffff00;
              uStack_10c = 0;
              local_168.Value.Value = 0;
              local_168._0_4_ = local_110;
            }
            TStack_160 = TVar16;
            if ((local_168.Type.Value.Value == '\x02') || (TVar16.Type.Value.Value == '\x02')) {
LAB_14619104c:
              local_98.LowerBound = local_168;
              local_98.UpperBound = TStack_160;
              InsertNewChild(this,&local_98,param_2,local_198,param_3);
              local_198 = local_198 + 1;
            }
            else {
              if ((local_168.Type.Value.Value == '\x02') &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_168.Value.Value <= TVar16.Value.Value.Value) {
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(&TStack_160);
                iVar2 = pFVar13->Value;
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_168);
                if ((pFVar13->Value != iVar2) ||
                   ((local_168.Type.Value != '\0' && (TStack_160.Type.Value != '\0'))))
                goto LAB_14619104c;
              }
            }
          }
          if ((local_158.Type.Value.Value == '\x02') || (TStack_150.Type.Value == '\x02')) {
LAB_1461910eb:
            if (((param_1->LowerBound).Type.Value == '\x02') ||
               ((param_1->UpperBound).Type.Value == '\x02')) {
LAB_146191132:
              if ((TStack_150.Type.Value == '\x02') || ((param_1->LowerBound).Type.Value == '\x02'))
              {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              if ((local_158.Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
              {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              bVar3 = true;
              if (!bVar7) {
                if (((param_1->LowerBound).Type.Value == '\x02') &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar2 = (param_1->LowerBound).Value.Value;
                if ((TStack_150.Type.Value == '\x02') &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                bVar3 = iVar2 < TStack_150.Value.Value;
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(&param_1->LowerBound);
                iVar2 = pFVar13->Value;
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(&TStack_150);
                if ((TStack_150.Type.Value == '\x01') &&
                   ((param_1->LowerBound).Type.Value == '\x01')) {
                  bVar7 = true;
                }
                else {
                  bVar7 = false;
                }
                if (bVar7) {
                  bVar3 = iVar2 <= pFVar13->Value;
                }
              }
              pTVar14 = &param_1->UpperBound;
              bVar7 = true;
              if (!bVar5) {
                if (((pTVar14->Type).Value == '\x02') &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar2 = (param_1->UpperBound).Value.Value;
                if ((local_158.Type.Value == '\x02') &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                bVar7 = local_158.Value.Value < iVar2;
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(pTVar14);
                iVar2 = pFVar13->Value;
                pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_158);
                if ((local_158.Type.Value == '\x01') && ((pTVar14->Type).Value == '\x01')) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if (bVar5) {
                  bVar7 = pFVar13->Value <= iVar2;
                }
              }
              this_00 = local_f0;
              if ((bVar3) && (bVar7)) {
                local_88.LowerBound = param_1->LowerBound;
                local_88.UpperBound = param_1->UpperBound;
                FVar19.Index = local_198;
                FVar19.ChildrenHandle.EntryIndex = uStack_120._0_4_;
                AddTimeRange(this,&local_88,param_2,FVar19,param_4);
                this_00 = &this->ChildNodes;
              }
            }
            else if ((param_1->LowerBound).Value.Value <= (param_1->UpperBound).Value.Value) {
              pFVar13 = TRangeBound<FFrameNumber>::GetValue(&param_1->UpperBound);
              iVar2 = pFVar13->Value;
              pFVar13 = TRangeBound<FFrameNumber>::GetValue(&param_1->LowerBound);
              if ((pFVar13->Value != iVar2) ||
                 (((param_1->LowerBound).Type.Value != '\0' &&
                  ((param_1->UpperBound).Type.Value != '\0')))) goto LAB_146191132;
            }
          }
          else {
            FVar6.Value = TStack_150.Value.Value;
            if ((local_158.Type.Value.Value == '\x02') &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_158.Value.Value <= FVar6.Value) {
              pFVar13 = TRangeBound<FFrameNumber>::GetValue(&TStack_150);
              iVar2 = pFVar13->Value;
              pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_158);
              if ((pFVar13->Value != iVar2) ||
                 ((local_158.Type.Value != '\0' && (TStack_150.Type.Value != '\0'))))
              goto LAB_1461910eb;
            }
          }
          if (TStack_150.Type.Value.Value == '\0') {
            local_178.Type.Value = 1;
            local_178.Value.Value = TStack_150.Value.Value.Value;
          }
          else if (TStack_150.Type.Value.Value == '\x01') {
            local_178._0_4_ = local_178._1_4_ << 8;
            local_178.Value.Value = TStack_150.Value.Value.Value;
          }
          else {
            local_178 = TStack_150;
          }
          TVar18 = local_178;
          local_198 = local_198 + 1;
          pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                              (this_00,&local_78,uStack_120._0_4_);
        } while (local_198 < pTVar11->ArrayNum);
      }
      if (TVar18.Type.Value.Value != '\x02') {
        local_e0.UpperBound.Value.Value = local_138.UpperBound.Value.Value;
        local_e0.UpperBound.Type.Value = local_138.UpperBound.Type.Value;
        local_e0.UpperBound._1_3_ = local_138.UpperBound._1_3_;
        local_e0.LowerBound = TVar18;
        TRange<FFrameNumber>::Intersection(&local_c8,&local_e0,param_1);
        bVar7 = TRange<FFrameNumber>::IsEmpty(&local_c8);
        if (!bVar7) {
          pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                              (&this->ChildNodes,&local_48,uStack_120._0_4_);
          local_68.LowerBound = local_c8.LowerBound;
          local_68.UpperBound = local_c8.UpperBound;
          InsertNewChild(this,&local_68,param_2,pTVar11->ArrayNum,param_3);
        }
      }
    }
  }
  return;
}

// AddTimeRange @ 146191440

void __thiscall
FMovieSceneEvaluationTree::AddTimeRange
          (FMovieSceneEvaluationTree *this,TRange<FFrameNumber> *param_1)

{
  IMovieSceneEvaluationTreeNodeOperator local_res10 [3];
  TRange<FFrameNumber> local_18;
  
  local_18.LowerBound = param_1->LowerBound;
  local_18.UpperBound = param_1->UpperBound;
  local_res10[0] =
       (IMovieSceneEvaluationTreeNodeOperator)
       &`FMovieSceneEvaluationTree::AddTimeRange'::`2'::FNullOp::_vftable_;
  AddTimeRange(this,&local_18,local_res10,(FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
               (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return;
}

// GetChildren @ 1461b0740

TArrayView<FMovieSceneEvaluationTreeNode,int> * __thiscall
FMovieSceneEvaluationTree::GetChildren
          (FMovieSceneEvaluationTree *this,
          TArrayView<FMovieSceneEvaluationTreeNode,int> *__return_storage_ptr__,
          FMovieSceneEvaluationTreeNode *param_1)

{
  int iVar1;
  undefined4 uVar2;
  TArrayView<FMovieSceneEvaluationTreeNode,int> *pTVar3;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_18;
  
  if ((param_1->ChildrenID).EntryIndex != -1) {
    pTVar3 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                       (&this->ChildNodes,&local_18,
                        (FEvaluationTreeEntryHandle)(param_1->ChildrenID).EntryIndex);
    iVar1 = pTVar3->ArrayNum;
    uVar2 = *(undefined4 *)&pTVar3->field_0xc;
    __return_storage_ptr__->DataPtr = pTVar3->DataPtr;
    __return_storage_ptr__->ArrayNum = iVar1;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FMovieSceneEvaluationTreeNode *)0x0;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = (ulonglong)(uint)local_18._12_4_ << 0x20;
  return __return_storage_ptr__;
}

// GetChildren @ 1461b07a0

TArrayView<FMovieSceneEvaluationTreeNode_const_,int> * __thiscall
FMovieSceneEvaluationTree::GetChildren
          (FMovieSceneEvaluationTree *this,
          TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *__return_storage_ptr__,
          FMovieSceneEvaluationTreeNode *param_1)

{
  int iVar1;
  undefined4 uVar2;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar3;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_18;
  
  if ((param_1->ChildrenID).EntryIndex != -1) {
    pTVar3 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                       (&this->ChildNodes,&local_18,
                        (FEvaluationTreeEntryHandle)(param_1->ChildrenID).EntryIndex);
    iVar1 = pTVar3->ArrayNum;
    uVar2 = *(undefined4 *)&pTVar3->field_0xc;
    __return_storage_ptr__->DataPtr = pTVar3->DataPtr;
    __return_storage_ptr__->ArrayNum = iVar1;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FMovieSceneEvaluationTreeNode *)0x0;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = (ulonglong)(uint)local_18._12_4_ << 0x20;
  return __return_storage_ptr__;
}

// GetNode @ 1461b14b0

FMovieSceneEvaluationTreeNode * __thiscall
FMovieSceneEvaluationTree::GetNode
          (FMovieSceneEvaluationTree *this,FMovieSceneEvaluationTreeNodeHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar3;
  FMovieSceneEvaluationTreeNode *pFVar4;
  TArrayView<FMovieSceneEvaluationTreeNode,int> *this_00;
  FEvaluationTreeEntryHandle FVar5;
  int iVar6;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_18;
  
  FVar5 = param_1.ChildrenHandle.EntryIndex;
  iVar6 = param_1.Index;
  if (FVar5.EntryIndex == -1) {
    bVar2 = iVar6 == 0;
  }
  else {
    pTVar3 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                       (&this->ChildNodes,&local_28,FVar5);
    if (((longlong)param_1 < 0) || (pTVar3->ArrayNum <= iVar6)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Handle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                         ,0x183,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMovieSceneEvaluationTreeNode *)(*pcVar1)();
    return pFVar4;
  }
  if (FVar5.EntryIndex != -1) {
    this_00 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                        (&this->ChildNodes,&local_18,FVar5);
    this = (FMovieSceneEvaluationTree *)
           TArrayView<FMovieSceneEvaluationTreeNode,int>::operator[](this_00,iVar6);
  }
  return &this->RootNode;
}

// InsertNewChild @ 1461b6f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneEvaluationTree::InsertNewChild
          (FMovieSceneEvaluationTree *this,TRange<FFrameNumber> *param_1,
          IMovieSceneEvaluationTreeNodeOperator *param_2,int param_3,
          FMovieSceneEvaluationTreeNodeHandle param_4)

{
  uint uVar1;
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this_00;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FMovieSceneEvaluationTreeNodeHandle FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FMovieSceneEvaluationTreeNode *pFVar9;
  TArrayView<FMovieSceneEvaluationTreeNode,int> *pTVar10;
  uint uVar11;
  longlong lVar12;
  FMovieSceneEvaluationTreeNode *pFVar13;
  FEvaluationTreeEntryHandle FVar14;
  undefined1 auStack_128 [32];
  int *local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  int local_d8;
  FEvaluationTreeEntryHandle local_d0;
  uint uStack_cc;
  TRange<FFrameNumber> *local_c8;
  IMovieSceneEvaluationTreeNodeOperator *local_c0;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_b8;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_a8;
  FMovieSceneEvaluationTreeNode local_98;
  TArrayView<FMovieSceneEvaluationTreeNode,int> local_78;
  FMovieSceneEvaluationTreeNode *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d8 = param_3;
  local_c8 = param_1;
  local_c0 = param_2;
  pFVar9 = GetNode(this,param_4);
  this_00 = &this->ChildNodes;
  FVar14.EntryIndex = (pFVar9->ChildrenID).EntryIndex;
  if (FVar14.EntryIndex == -1) {
    local_58 = (this->ChildNodes).Items.ArrayNum;
    pFVar3 = (this_00->Entries).AllocatorInstance.Data;
    FVar14.EntryIndex = (this->ChildNodes).Entries.ArrayNum;
    uStack_54 = 0;
    local_50 = 1;
    if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
       (lVar12 = (longlong)(this->ChildNodes).Entries.ArrayMax,
       (FScriptContainerElement *)&local_58 < pFVar3 + lVar12 * 0xc)) {
      local_e8 = 0xc;
      local_108 = &local_58;
      local_100 = pFVar3;
      local_f8 = lVar12;
      local_f0 = (longlong)FVar14.EntryIndex;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->ChildNodes).Entries.ArrayNum;
    piVar2 = &(this->ChildNodes).Entries.ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)this_00,piVar2);
    }
    (this->ChildNodes).Entries.ArrayNum = iVar7 + 1;
    pFVar3 = (this_00->Entries).AllocatorInstance.Data;
    *(ulonglong *)(pFVar3 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_54,local_58);
    *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = local_50;
    TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->ChildNodes).Items,(this->ChildNodes).Items.ArrayNum + 1,Default);
    pFVar9 = GetNode(this,param_4);
    (pFVar9->ChildrenID).EntryIndex = FVar14.EntryIndex;
  }
  else {
    TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get(this_00,&local_b8,FVar14);
    if (param_3 < local_b8.ArrayNum) {
      lVar12 = (longlong)param_3 << 5;
      uVar11 = param_3;
      local_d0.EntryIndex = FVar14.EntryIndex;
      do {
        uVar1 = uVar11 + 1;
        uVar8 = 0;
        if ((int)uVar11 < local_b8.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        uStack_cc = uVar1;
        if (uVar8 == 0) {
          local_108 = (int *)(longlong)(int)uVar11;
          local_100 = (FScriptContainerElement *)(longlong)local_b8.ArrayNum;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (*(int *)((longlong)&((local_b8.DataPtr)->ChildrenID).EntryIndex + lVar12) == -1) {
          local_a8.DataPtr = (FMovieSceneEvaluationTreeNode *)0x0;
          pTVar10 = &local_a8;
          local_a8.ArrayNum = 0;
        }
        else {
          pTVar10 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                              (this_00,&local_78,
                               (FEvaluationTreeEntryHandle)
                               *(int *)((longlong)&((local_b8.DataPtr)->ChildrenID).EntryIndex +
                                       lVar12));
        }
        pFVar9 = pTVar10->DataPtr;
        pFVar13 = pFVar9 + (int)*(undefined8 *)&pTVar10->ArrayNum;
        local_68 = pFVar9;
        uStack_60 = *(undefined8 *)&pTVar10->ArrayNum;
        if (pFVar9 != pFVar13) {
          FVar5.Index = uStack_cc;
          FVar5.ChildrenHandle.EntryIndex = local_d0.EntryIndex;
          do {
            pFVar9->Parent = FVar5;
            pFVar9 = pFVar9 + 1;
          } while (pFVar9 != pFVar13);
        }
        lVar12 = lVar12 + 0x20;
        uVar11 = uVar1;
        param_3 = local_d8;
      } while ((int)uVar1 < local_b8.ArrayNum);
    }
  }
  local_98.Parent = param_4;
  local_98.ChildrenID.EntryIndex = -1;
  local_98.DataID.EntryIndex = -1;
  local_98.Range.LowerBound.Type.Value = (local_c8->LowerBound).Type.Value;
  local_98.Range.LowerBound._1_3_ = *(undefined3 *)&(local_c8->LowerBound).field_0x1;
  local_98.Range.LowerBound.Value.Value = (local_c8->LowerBound).Value.Value;
  local_98.Range.UpperBound.Type.Value = (local_c8->UpperBound).Type.Value;
  local_98.Range.UpperBound._1_3_ = *(undefined3 *)&(local_c8->UpperBound).field_0x1;
  local_98.Range.UpperBound.Value.Value = (local_c8->UpperBound).Value.Value;
  (**(code **)((longlong)*local_c0 + 8))(local_c0,&local_98);
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Insert
            (this_00,FVar14,param_3,&local_98);
  return;
}

// IterateFromLowerBound @ 1461bc2f0

FMovieSceneEvaluationTreeRangeIterator * __thiscall
FMovieSceneEvaluationTree::IterateFromLowerBound
          (FMovieSceneEvaluationTree *this,
          FMovieSceneEvaluationTreeRangeIterator *__return_storage_ptr__,
          TRangeBound<FFrameNumber> param_1)

{
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// IterateFromTime @ 1461bc320

FMovieSceneEvaluationTreeRangeIterator * __thiscall
FMovieSceneEvaluationTree::IterateFromTime
          (FMovieSceneEvaluationTree *this,
          FMovieSceneEvaluationTreeRangeIterator *__return_storage_ptr__,FFrameNumber param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  undefined4 local_res10;
  
  local_res10 = CONCAT31(local_res10._1_3_,1);
  TVar1.Value.Value = param_1.Value;
  TVar1._0_4_ = local_res10;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (__return_storage_ptr__,this,TVar1);
  return __return_storage_ptr__;
}

