// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// operator() @ 14609bc40

bool __thiscall
`UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustomPerRow'::__l2::<lambda_1>::operator()
          (void *this,FMovieSceneEvaluationTreeNodeHandle param_1)

{
  FMovieSceneTrackEvaluationData *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_78;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_60;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_48;
  FWeakObjectPtr local_30;
  FWeakObjectPtr FStack_28;
  undefined8 local_20;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_18;
  
  if (**(char **)((longlong)this + 0x10) == '\0') {
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
              (&local_48,*(TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> **)this,param_1
              );
    local_78.DataIndex = local_48.DataIndex;
    local_78._20_4_ = local_48._20_4_;
    local_78.Tree = local_48.Tree;
    local_78.CurrentNode = local_48.CurrentNode;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
              (&local_60,local_48.Tree,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
    while( true ) {
      iVar3 = local_78.DataIndex;
      lVar9 = (longlong)local_78.DataIndex;
      if (((local_78.Tree == local_60.Tree) && (local_78.CurrentNode == local_60.CurrentNode)) &&
         (local_78.DataIndex == local_60.DataIndex)) goto LAB_14609bd6b;
      pTVar6 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                         (local_78.Tree,&local_18,local_78.CurrentNode);
      uVar8 = 0;
      if (iVar3 < pTVar6->ArrayNum) {
        uVar8 = (uint)~iVar3 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pFVar1 = pTVar6->DataPtr + lVar9;
      local_30 = (pFVar1->Track).WeakPtr;
      FStack_28 = (pFVar1->Section).WeakPtr;
      pFVar1 = pTVar6->DataPtr + lVar9;
      local_20._0_4_ = pFVar1->ForcedTime;
      local_20._4_2_ = pFVar1->SortOrder;
      local_20._6_1_ = pFVar1->Flags;
      local_20._7_1_ = pFVar1->field_0x17;
      pUVar7 = FWeakObjectPtr::Get(&FStack_28);
      if (*(int *)&pUVar7[5].field_0x8 == **(int **)((longlong)this + 8)) break;
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::operator++(&local_78);
    }
    bVar4 = false;
  }
  else {
LAB_14609bd6b:
    bVar4 = true;
  }
  return bVar4;
}

// Blended @ 1460ae380

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::Blended
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2)

{
  UMovieSceneSection **ppUVar1;
  int iVar2;
  UMovieSceneSection *pUVar3;
  code *pcVar4;
  bool bVar5;
  FFrameNumber *pFVar6;
  FMovieSceneTrackEvaluationData *pFVar7;
  UMovieSceneSection **ppUVar8;
  TRangeBound<FFrameNumber> local_88;
  TRangeBound<FFrameNumber> TStack_80;
  TRange<FFrameNumber> local_78;
  FMovieSceneTrackEvaluationData local_68;
  IMovieSceneEvaluationTreeNodeOperator local_50;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_48;
  FWeakObjectPtr local_40;
  FWeakObjectPtr FStack_38;
  int local_30;
  undefined4 uStack_2c;
  
  ppUVar8 = param_1->DataPtr;
  ppUVar1 = ppUVar8 + param_1->ArrayNum;
  do {
    if (ppUVar8 == ppUVar1) {
      return;
    }
    pUVar3 = *ppUVar8;
    if ((pUVar3 != (UMovieSceneSection *)0x0) && (pUVar3->bIsActive != 0)) {
      local_88.Type.Value = (pUVar3->SectionRange).Value.LowerBound.Type.Value;
      local_88._1_3_ = *(undefined3 *)&(pUVar3->SectionRange).Value.LowerBound.field_0x1;
      local_88.Value.Value = (pUVar3->SectionRange).Value.LowerBound.Value.Value;
      TStack_80.Type.Value = (pUVar3->SectionRange).Value.UpperBound.Type.Value;
      TStack_80._1_3_ = *(undefined3 *)&(pUVar3->SectionRange).Value.UpperBound.field_0x1;
      iVar2 = (pUVar3->SectionRange).Value.UpperBound.Value.Value;
      TStack_80.Value.Value = iVar2;
      if ((local_88.Type.Value == '\x02') || (TStack_80.Type.Value == '\x02')) {
LAB_1460ae476:
        pFVar7 = FMovieSceneTrackEvaluationData::FromSection(&local_68,pUVar3);
        local_50 = (IMovieSceneEvaluationTreeNodeOperator)
                   &
                   ___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
        ;
        local_40 = (pFVar7->Track).WeakPtr;
        FStack_38 = (pFVar7->Section).WeakPtr;
        local_30 = (pFVar7->ForcedTime).Value;
        uStack_2c._0_2_ = pFVar7->SortOrder;
        uStack_2c._2_1_ = pFVar7->Flags;
        uStack_2c._3_1_ = pFVar7->field_0x17;
        local_78.LowerBound.Value.Value = local_88.Value.Value;
        local_78.LowerBound.Type.Value = local_88.Type.Value;
        local_78.LowerBound._1_3_ = local_88._1_3_;
        local_78.UpperBound.Value.Value = TStack_80.Value.Value;
        local_78.UpperBound.Type.Value = TStack_80.Type.Value;
        local_78.UpperBound._1_3_ = TStack_80._1_3_;
        local_48 = param_2;
        FMovieSceneEvaluationTree::AddTimeRange
                  ((FMovieSceneEvaluationTree *)param_2,&local_78,&local_50,
                   (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                   (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
        local_50 = (IMovieSceneEvaluationTreeNodeOperator)
                   &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
      }
      else {
        if ((local_88.Type.Value == '\x02') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_88.Value.Value <= iVar2) {
          pFVar6 = TRangeBound<FFrameNumber>::GetValue(&TStack_80);
          iVar2 = pFVar6->Value;
          pFVar6 = TRangeBound<FFrameNumber>::GetValue(&local_88);
          if ((pFVar6->Value != iVar2) ||
             ((local_88.Type.Value != '\0' && (TStack_80.Type.Value != '\0')))) goto LAB_1460ae476;
        }
      }
    }
    ppUVar8 = ppUVar8 + 1;
  } while( true );
}

// Blended @ 1460ae520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::Blended
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2,
          TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
          *param_3)

{
  uint uVar1;
  UMovieSceneSection *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FMovieSceneTrackEvaluationData *pFVar7;
  ulonglong uVar8;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar9;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar10;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [8];
  TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
  local_1c0;
  IMovieSceneEvaluationTreeNodeOperator local_1b0;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr FStack_198;
  undefined8 local_190;
  TArrayView<UMovieSceneSection_*_const,int> local_188;
  TRange<FFrameNumber> local_178;
  FMovieSceneTrackEvaluationData local_168;
  TArray<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1c0._0_8_ = *(undefined8 *)param_3;
  local_188.DataPtr = param_1->DataPtr;
  local_188.ArrayNum = param_1->ArrayNum;
  local_188._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_1c0._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_150.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0x10;
  SortSections(&local_188,&local_150,&local_1c0);
  iVar4 = local_150.ArrayNum;
  uVar8 = (ulonglong)local_150.ArrayNum;
  FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)&local_150
  ;
  if (local_150.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
    FVar9 = local_150.AllocatorInstance.SecondaryData;
  }
  FVar10 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
           (uVar8 * 0x10 + (longlong)FVar9);
  while( true ) {
    if ((uint)uVar8 != iVar4) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_1c8);
    }
    if (FVar9 == FVar10) break;
    uVar1 = *(uint *)((longlong)FVar9 + 8);
    uVar6 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar2 = param_1->DataPtr[(int)uVar1];
    pFVar7 = FMovieSceneTrackEvaluationData::FromSection(&local_168,pUVar2);
    local_1b0 = (IMovieSceneEvaluationTreeNodeOperator)
                &___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
    ;
    local_1a0 = (pFVar7->Track).WeakPtr;
    FStack_198 = (pFVar7->Section).WeakPtr;
    local_190._0_4_ = pFVar7->ForcedTime;
    local_190._4_2_ = pFVar7->SortOrder;
    local_190._6_1_ = pFVar7->Flags;
    local_190._7_1_ = pFVar7->field_0x17;
    local_178.LowerBound = (pUVar2->SectionRange).Value.LowerBound;
    local_178.UpperBound = (pUVar2->SectionRange).Value.UpperBound;
    local_1a8 = param_2;
    FMovieSceneEvaluationTree::AddTimeRange
              ((FMovieSceneEvaluationTree *)param_2,&local_178,&local_1b0,
               (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
               (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
    uVar8 = (ulonglong)(uint)local_150.ArrayNum;
    local_1b0 = (IMovieSceneEvaluationTreeNodeOperator)
                &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
    FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
            ((longlong)FVar9 + 0x10);
  }
  if (local_150.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
    FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
  }
  return;
}

// HighPass @ 1460d1690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::HighPass
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2)

{
  uint uVar1;
  UMovieSceneSection *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FMovieSceneTrackEvaluationData *pFVar7;
  ulonglong uVar8;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar9;
  int iVar10;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar11;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  code *local_1f0;
  code *local_1e8;
  UMovieSceneSection **local_1d8;
  undefined8 uStack_1d0;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1c8;
  undefined1 *local_1c0;
  code *local_1b8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> **local_1b0;
  IMovieSceneEvaluationTreeNodeOperator local_1a8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1a0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr FStack_190;
  undefined8 local_188;
  TArrayView<UMovieSceneSection_*_const,int> local_178;
  TRange<FFrameNumber> local_168;
  FMovieSceneTrackEvaluationData local_158;
  TArray<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_140;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1d8 = param_1->DataPtr;
  uStack_1d0._0_4_ = param_1->ArrayNum;
  uStack_1d0._4_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar10 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (iVar10 != 0) {
    local_1f0 = Core::Private::Function::
                TFunctionRefCaller<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&),bool,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&>
                ::Call;
    local_1e8 = FSortedSection::SortByOverlapPriorityAndRow;
    local_140.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0x10;
    local_178.DataPtr = local_1d8;
    local_178._8_8_ = uStack_1d0;
    SortSections(&local_178,&local_140,
                 (TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
                  *)&local_1f0);
    iVar4 = local_140.ArrayNum;
    local_1c0 = &local_1f8;
    uVar8 = (ulonglong)local_140.ArrayNum;
    local_1f8 = 0;
    FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
            &local_140;
    if (local_140.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
      FVar9 = local_140.AllocatorInstance.SecondaryData;
    }
    FVar11 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
             (uVar8 * 0x10 + (longlong)FVar9);
    local_1c8 = param_2;
    while( true ) {
      if ((uint)uVar8 != iVar4) {
        local_1f7[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1f7);
      }
      if (FVar9 == FVar11) break;
      uVar1 = *(uint *)((longlong)FVar9 + 8);
      uVar6 = 0;
      if ((int)uVar1 < iVar10) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = local_1d8[(int)uVar1];
      local_1f8 = (pUVar2->BlendType).bIsValid;
      local_1b0 = &local_1c8;
      local_1b8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustom'::__l2::<lambda_1>,bool,FMovieSceneEvaluationTreeNodeHandle>
                  ::Call;
      pFVar7 = FMovieSceneTrackEvaluationData::FromSection(&local_158,pUVar2);
      local_1a8 = (IMovieSceneEvaluationTreeNodeOperator)
                  &
                  ___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
      ;
      local_198 = (pFVar7->Track).WeakPtr;
      FStack_190 = (pFVar7->Section).WeakPtr;
      local_188._0_4_ = pFVar7->ForcedTime;
      local_188._4_2_ = pFVar7->SortOrder;
      local_188._6_1_ = pFVar7->Flags;
      local_188._7_1_ = pFVar7->field_0x17;
      local_168.LowerBound = (pUVar2->SectionRange).Value.LowerBound;
      local_168.UpperBound = (pUVar2->SectionRange).Value.UpperBound;
      local_1a0 = param_2;
      FMovieSceneEvaluationTree::AddTimeRange
                ((FMovieSceneEvaluationTree *)param_2,&local_168,&local_1a8,
                 (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                 (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)&local_1b8);
      uVar8 = (ulonglong)(uint)local_140.ArrayNum;
      local_1a8 = (IMovieSceneEvaluationTreeNodeOperator)
                  &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
      FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
              ((longlong)FVar9 + 0x10);
    }
    if (local_140.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
      FMemory::Free((void *)local_140.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// HighPassCustom @ 1460d18d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustom
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2,
          TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
          *param_3)

{
  int iVar1;
  uint uVar2;
  UMovieSceneSection *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FMovieSceneTrackEvaluationData *pFVar8;
  ulonglong uVar9;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar10;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar11;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1f0;
  TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
  local_1e8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1d8;
  undefined1 *local_1d0;
  code *local_1c8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> **local_1c0;
  IMovieSceneEvaluationTreeNodeOperator local_1b8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1b0;
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr FStack_1a0;
  undefined8 local_198;
  TArrayView<UMovieSceneSection_*_const,int> local_188;
  TRange<FFrameNumber> local_178;
  FMovieSceneTrackEvaluationData local_168;
  TArray<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    local_188.DataPtr = param_1->DataPtr;
    local_188.ArrayNum = param_1->ArrayNum;
    local_188._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_150.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0;
    local_150.ArrayNum = 0;
    local_1e8._0_8_ = *(undefined8 *)param_3;
    local_1e8._8_8_ = *(undefined8 *)&param_3->field_0x8;
    local_150.ArrayMax = 0x10;
    local_1f0 = param_2;
    SortSections(&local_188,&local_150,&local_1e8);
    iVar5 = local_150.ArrayNum;
    local_1d0 = &local_1f8;
    uVar9 = (ulonglong)local_150.ArrayNum;
    local_1f8 = 0;
    FVar11 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
             &local_150;
    if (local_150.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
      FVar11 = local_150.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
             (uVar9 * 0x10 + (longlong)FVar11);
    local_1d8 = param_2;
    while( true ) {
      if ((uint)uVar9 != iVar5) {
        local_1f7[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1f7);
      }
      if (FVar11 == FVar10) break;
      uVar2 = *(uint *)((longlong)FVar11 + 8);
      uVar7 = 0;
      if ((int)uVar2 < iVar1) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = param_1->DataPtr[(int)uVar2];
      local_1f8 = (pUVar3->BlendType).bIsValid;
      local_1c0 = &local_1d8;
      local_1c8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustom'::__l2::<lambda_1>,bool,FMovieSceneEvaluationTreeNodeHandle>
                  ::Call;
      pFVar8 = FMovieSceneTrackEvaluationData::FromSection(&local_168,pUVar3);
      local_1b8 = (IMovieSceneEvaluationTreeNodeOperator)
                  &
                  ___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
      ;
      local_1b0 = local_1f0;
      local_1a8 = (pFVar8->Track).WeakPtr;
      FStack_1a0 = (pFVar8->Section).WeakPtr;
      local_198._0_4_ = pFVar8->ForcedTime;
      local_198._4_2_ = pFVar8->SortOrder;
      local_198._6_1_ = pFVar8->Flags;
      local_198._7_1_ = pFVar8->field_0x17;
      local_178.LowerBound = (pUVar3->SectionRange).Value.LowerBound;
      local_178.UpperBound = (pUVar3->SectionRange).Value.UpperBound;
      FMovieSceneEvaluationTree::AddTimeRange
                ((FMovieSceneEvaluationTree *)local_1f0,&local_178,&local_1b8,
                 (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                 (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)&local_1c8);
      uVar9 = (ulonglong)(uint)local_150.ArrayNum;
      local_1b8 = (IMovieSceneEvaluationTreeNodeOperator)
                  &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
      FVar11 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
               ((longlong)FVar11 + 0x10);
    }
    if (local_150.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
      FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// HighPassCustomPerRow @ 1460d1b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustomPerRow
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2,
          TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
          *param_3)

{
  int iVar1;
  uint uVar2;
  UMovieSceneSection *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar8;
  FMovieSceneTrackEvaluationData *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar12;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [3];
  undefined4 local_1f4;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1f0;
  TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
  local_1e8;
  code *local_1d8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> **local_1d0;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1c8;
  undefined4 *local_1c0;
  undefined1 *local_1b8;
  IMovieSceneEvaluationTreeNodeOperator local_1b0;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr FStack_198;
  undefined8 local_190;
  TArrayView<UMovieSceneSection_*_const,int> local_188;
  TRange<FFrameNumber> local_178;
  FMovieSceneTrackEvaluationData local_168;
  TArray<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    local_188.DataPtr = param_1->DataPtr;
    local_188.ArrayNum = param_1->ArrayNum;
    local_188._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_150.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0;
    local_150.ArrayNum = 0;
    local_1e8._0_8_ = *(undefined8 *)param_3;
    local_1e8._8_8_ = *(undefined8 *)&param_3->field_0x8;
    local_150.ArrayMax = 0x10;
    local_1f0 = param_2;
    SortSections(&local_188,&local_150,&local_1e8);
    iVar5 = local_150.ArrayNum;
    local_1c0 = &local_1f4;
    uVar10 = (ulonglong)local_150.ArrayNum;
    local_1b8 = &local_1f8;
    local_1f4 = 0;
    FVar12 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
             &local_150;
    if (local_150.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
      FVar12 = local_150.AllocatorInstance.SecondaryData;
    }
    local_1f8 = 0;
    FVar8 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
            &local_150;
    if (local_150.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
      FVar8 = local_150.AllocatorInstance.SecondaryData;
    }
    lVar11 = uVar10 * 0x10;
    local_1c8 = param_2;
    while( true ) {
      if ((uint)uVar10 != iVar5) {
        local_1f7[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1f7);
      }
      if (FVar12 == (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
                    (lVar11 + (longlong)FVar8)) break;
      uVar2 = *(uint *)((longlong)FVar12 + 8);
      uVar7 = 0;
      if ((int)uVar2 < iVar1) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
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
      pUVar3 = param_1->DataPtr[(int)uVar2];
      local_1f4 = *(undefined4 *)(*(longlong *)FVar12 + 0xd0);
      local_1f8 = (pUVar3->BlendType).bIsValid;
      local_1d0 = &local_1c8;
      local_1d8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustomPerRow'::__l2::<lambda_1>,bool,FMovieSceneEvaluationTreeNodeHandle>
                  ::Call;
      pFVar9 = FMovieSceneTrackEvaluationData::FromSection(&local_168,pUVar3);
      local_1b0 = (IMovieSceneEvaluationTreeNodeOperator)
                  &
                  ___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
      ;
      local_1a8 = local_1f0;
      local_1a0 = (pFVar9->Track).WeakPtr;
      FStack_198 = (pFVar9->Section).WeakPtr;
      local_190._0_4_ = pFVar9->ForcedTime;
      local_190._4_2_ = pFVar9->SortOrder;
      local_190._6_1_ = pFVar9->Flags;
      local_190._7_1_ = pFVar9->field_0x17;
      local_178.LowerBound = (pUVar3->SectionRange).Value.LowerBound;
      local_178.UpperBound = (pUVar3->SectionRange).Value.UpperBound;
      FMovieSceneEvaluationTree::AddTimeRange
                ((FMovieSceneEvaluationTree *)local_1f0,&local_178,&local_1b0,
                 (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                 (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)&local_1d8);
      uVar10 = (ulonglong)(uint)local_150.ArrayNum;
      local_1b0 = (IMovieSceneEvaluationTreeNodeOperator)
                  &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
      FVar12 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
               ((longlong)FVar12 + 0x10);
    }
    if (local_150.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0) {
      FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// HighPassPerRow @ 1460d1d70

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::HighPassPerRow
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2)

{
  code *local_28;
  code *local_20;
  TArrayView<UMovieSceneSection_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_20 = FSortedSection::SortByOverlapPriorityAndRow;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&),bool,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&>
             ::Call;
  HighPassCustomPerRow
            (&local_18,param_2,
             (TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
              *)&local_28);
  return;
}

// PopulateNearestSection @ 1460dfd20

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::PopulateNearestSection
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2)

{
  TRangeBound<FFrameNumber> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined2 uVar3;
  undefined1 uVar5;
  undefined1 uVar7;
  FMovieSceneEvaluationTreeNodeHandle FVar8;
  code *pcVar9;
  FMovieSceneTrackEvaluationData *pFVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar16;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  FEvaluationTreeEntryHandle FVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  FFrameNumber FVar25;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar26;
  undefined1 local_res18 [8];
  uchar local_res20;
  undefined1 uStackX_21;
  undefined1 uStackX_22;
  undefined1 uStackX_23;
  FFrameNumber FStackX_24;
  ForAnyElementType local_228;
  undefined8 local_220;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_218;
  FMovieSceneEvaluationTreeRangeIterator local_200;
  uchar local_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  FFrameNumber FStack_1dc;
  FMovieSceneEvaluationTreeNodeHandle local_1d8;
  TRangeBound<FFrameNumber> local_1d0;
  TRangeBound<FFrameNumber> TStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  FMovieSceneEvaluationTreeRangeIterator local_188;
  uchar local_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  uchar uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  FMovieSceneEvaluationTreeNodeHandle local_158;
  FMovieSceneEvaluationTree *pFStack_150;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_148;
  FMovieSceneEvaluationTreeRangeIterator local_130;
  uchar local_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  uchar uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  TRange<FFrameNumber> local_f8 [2];
  undefined8 local_d8;
  IMovieSceneEvaluationTreeNodeOperator local_d0;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_c8;
  TRangeBound<FFrameNumber> local_c0;
  TRangeBound<FFrameNumber> TStack_b8;
  TRangeBound<FFrameNumber> local_b0;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_a8;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_98;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_88;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_78;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_68;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_58;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_48;
  undefined4 uVar4;
  undefined2 uVar6;
  
  pTVar16 = FMovieSceneEvaluationTree::GetChildren
                      ((FMovieSceneEvaluationTree *)param_2,&local_a8,
                       (FMovieSceneEvaluationTreeNode *)param_2);
  if ((pTVar16->ArrayNum != 0) ||
     (pTVar17 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                          (param_2,&local_98,(FMovieSceneEvaluationTreeNode *)param_2),
     pTVar17->ArrayNum != 0)) {
    local_228.Data = (FScriptContainerElement *)0x0;
    local_220 = 0;
    FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
              (&local_200,(FMovieSceneEvaluationTree *)param_2);
    while( true ) {
      FVar8.Index = local_200.CurrentNodeHandle.Index;
      FVar8.ChildrenHandle.EntryIndex = local_200.CurrentNodeHandle.ChildrenHandle.EntryIndex;
      if ((local_200.CurrentNodeHandle.ChildrenHandle.EntryIndex == -1) &&
         (local_200.CurrentNodeHandle.Index != 0)) break;
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
                (&local_148,param_2,FVar8);
      if (((local_148.CurrentNode == (FMovieSceneEvaluationTreeNode *)0x0) ||
          (pTVar17 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                               (local_148.Tree,&local_88,local_148.CurrentNode),
          local_148.DataIndex < 0)) || (pTVar17->ArrayNum <= local_148.DataIndex)) {
        local_188.CurrentNodeHandle.Index = local_200.CurrentNodeHandle.Index;
        local_188.CurrentNodeHandle.ChildrenHandle.EntryIndex =
             local_200.CurrentNodeHandle.ChildrenHandle.EntryIndex;
        local_188.CurrentRange.LowerBound = local_200.CurrentRange.LowerBound;
        local_188.CurrentRange.UpperBound = local_200.CurrentRange.UpperBound;
        local_188.Tree = local_200.Tree;
        FMovieSceneEvaluationTreeRangeIterator::Iter(&local_188,true);
        TVar11.Value = local_188.CurrentRange.LowerBound.Type.Value;
        local_168 = local_188.CurrentRange.LowerBound.Type.Value;
        uStack_167 = local_188.CurrentRange.LowerBound._1_1_;
        uStack_166 = local_188.CurrentRange.LowerBound._2_1_;
        uStack_165 = local_188.CurrentRange.LowerBound._3_1_;
        uStack_164 = (undefined1)local_188.CurrentRange.LowerBound.Value.Value;
        uStack_163 = local_188.CurrentRange.LowerBound.Value.Value._1_1_;
        uStack_162 = local_188.CurrentRange.LowerBound.Value.Value._2_1_;
        uStack_161 = local_188.CurrentRange.LowerBound.Value.Value._3_1_;
        uStack_160 = local_188.CurrentRange.UpperBound.Type.Value;
        uStack_15f = local_188.CurrentRange.UpperBound._1_1_;
        uStack_15e = local_188.CurrentRange.UpperBound._2_1_;
        uStack_15d = local_188.CurrentRange.UpperBound._3_1_;
        uStack_15c = (undefined1)local_188.CurrentRange.UpperBound.Value.Value;
        uStack_15b = local_188.CurrentRange.UpperBound.Value.Value._1_1_;
        uStack_15a = local_188.CurrentRange.UpperBound.Value.Value._2_1_;
        uStack_159 = local_188.CurrentRange.UpperBound.Value.Value._3_1_;
        local_158 = local_188.CurrentNodeHandle;
        pFStack_150 = local_188.Tree;
        if ((local_188.CurrentNodeHandle.ChildrenHandle.EntryIndex.EntryIndex == -1) &&
           (local_188.CurrentNodeHandle.Index != 0)) {
          local_130.CurrentNodeHandle.Index = local_200.CurrentNodeHandle.Index;
          local_130.CurrentNodeHandle.ChildrenHandle.EntryIndex =
               local_200.CurrentNodeHandle.ChildrenHandle.EntryIndex;
          local_130.CurrentRange.LowerBound = local_200.CurrentRange.LowerBound;
          local_130.CurrentRange.UpperBound = local_200.CurrentRange.UpperBound;
          local_130.Tree = local_200.Tree;
          FMovieSceneEvaluationTreeRangeIterator::Iter(&local_130,false);
          TVar11.Value = local_130.CurrentRange.UpperBound.Type.Value;
          local_168 = local_130.CurrentRange.LowerBound.Type.Value;
          uStack_167 = local_130.CurrentRange.LowerBound._1_1_;
          uStack_166 = local_130.CurrentRange.LowerBound._2_1_;
          uStack_165 = local_130.CurrentRange.LowerBound._3_1_;
          uStack_164 = (undefined1)local_130.CurrentRange.LowerBound.Value.Value;
          uStack_163 = local_130.CurrentRange.LowerBound.Value.Value._1_1_;
          uStack_162 = local_130.CurrentRange.LowerBound.Value.Value._2_1_;
          uStack_161 = local_130.CurrentRange.LowerBound.Value.Value._3_1_;
          uStack_160 = local_130.CurrentRange.UpperBound.Type.Value;
          uStack_15f = local_130.CurrentRange.UpperBound._1_1_;
          uStack_15e = local_130.CurrentRange.UpperBound._2_1_;
          uStack_15d = local_130.CurrentRange.UpperBound._3_1_;
          uStack_15c = (undefined1)local_130.CurrentRange.UpperBound.Value.Value;
          uStack_15b = local_130.CurrentRange.UpperBound.Value.Value._1_1_;
          uStack_15a = local_130.CurrentRange.UpperBound.Value.Value._2_1_;
          uStack_159 = local_130.CurrentRange.UpperBound.Value.Value._3_1_;
          local_res20 = local_130.CurrentRange.UpperBound.Type.Value;
          uStackX_21 = local_130.CurrentRange.UpperBound._1_1_;
          uStackX_22 = local_130.CurrentRange.UpperBound._2_1_;
          uStackX_23 = local_130.CurrentRange.UpperBound._3_1_;
          FStackX_24 = local_130.CurrentRange.UpperBound.Value.Value;
          local_158 = local_130.CurrentNodeHandle;
          pFStack_150 = local_130.Tree;
          if ((local_130.CurrentRange.UpperBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InUpperBound.IsOpen()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                  ,0x44,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar23 = 0;
          if (TVar11.Value == '\x01') {
            lVar23 = 4;
          }
          iVar21 = *(int *)((longlong)
                            &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                             ::__l2::Offsets + lVar23);
          FVar25.Value = FStackX_24.Value;
          if ((TVar11.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), FVar25.Value = FStackX_24.Value, bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else {
          local_1e0 = local_188.CurrentRange.LowerBound.Type.Value;
          uStack_1df = local_188.CurrentRange.LowerBound._1_1_;
          uStack_1de = local_188.CurrentRange.LowerBound._2_1_;
          uStack_1dd = local_188.CurrentRange.LowerBound._3_1_;
          FStack_1dc = local_188.CurrentRange.LowerBound.Value.Value;
          local_110 = local_188.CurrentRange.LowerBound.Type.Value;
          uStack_10f = local_188.CurrentRange.LowerBound._1_1_;
          uStack_10e = local_188.CurrentRange.LowerBound._2_1_;
          uStack_10d = local_188.CurrentRange.LowerBound._3_1_;
          uStack_10c = (undefined1)local_188.CurrentRange.LowerBound.Value.Value;
          uStack_10b = local_188.CurrentRange.LowerBound.Value.Value._1_1_;
          uStack_10a = local_188.CurrentRange.LowerBound.Value.Value._2_1_;
          uStack_109 = local_188.CurrentRange.LowerBound.Value.Value._3_1_;
          uStack_108 = local_188.CurrentRange.UpperBound.Type.Value;
          uStack_107 = local_188.CurrentRange.UpperBound._1_1_;
          uStack_106 = local_188.CurrentRange.UpperBound._2_1_;
          uStack_105 = local_188.CurrentRange.UpperBound._3_1_;
          uStack_104 = (undefined1)local_188.CurrentRange.UpperBound.Value.Value;
          uStack_103 = local_188.CurrentRange.UpperBound.Value.Value._1_1_;
          uStack_102 = local_188.CurrentRange.UpperBound.Value.Value._2_1_;
          uStack_101 = local_188.CurrentRange.UpperBound.Value.Value._3_1_;
          if ((local_188.CurrentRange.LowerBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InLowerBound.IsOpen()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                  ,0x2c,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar23 = 0;
          if (TVar11.Value == '\0') {
            lVar23 = 4;
          }
          iVar21 = *(int *)((longlong)
                            &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                             ::__l2::Offsets + lVar23);
          FVar25.Value = FStack_1dc.Value;
          if ((TVar11.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), FVar25.Value = FStack_1dc.Value, bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if ((local_158.ChildrenHandle.EntryIndex.EntryIndex != -1) || (local_158.Index == 0)) {
          TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
          TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
                    (&local_218,param_2,local_158);
          pTVar26 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                    local_218.CurrentNode;
LAB_1460dffb0:
          pTVar12 = local_218.Tree;
          if (pTVar26 != (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) {
            pTVar17 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::
                      GetDataForSingleNode
                                (local_218.Tree,&local_78,(FMovieSceneEvaluationTreeNode *)pTVar26);
            iVar14 = local_218.DataIndex;
            lVar23 = (longlong)local_218.DataIndex;
            if ((local_218.DataIndex < 0) || (pTVar17->ArrayNum <= local_218.DataIndex))
            goto LAB_1460e03a8;
            pTVar17 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::
                      GetDataForSingleNode
                                (pTVar12,&local_68,(FMovieSceneEvaluationTreeNode *)pTVar26);
            uVar18 = 0;
            if (iVar14 < pTVar17->ArrayNum) {
              uVar18 = (uint)~iVar14 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar10 = pTVar17->DataPtr + lVar23;
            uVar3 = pFVar10->SortOrder;
            uVar5 = pFVar10->Flags;
            uVar7 = pFVar10->field_0x17;
            uVar6 = CONCAT11(uVar7,uVar5);
            uVar4 = CONCAT22(uVar6,uVar3);
            pFVar10 = pTVar17->DataPtr + lVar23;
            local_1c0 = (pFVar10->Track).WeakPtr;
            uStack_1b8 = (pFVar10->Section).WeakPtr;
            local_d8 = CONCAT44(uVar4,FVar25.Value + iVar21);
            local_1d0 = local_200.CurrentRange.LowerBound;
            TStack_1c8 = local_200.CurrentRange.UpperBound;
            local_1b0 = local_d8;
            if (((local_228.Data <= &local_1d0) &&
                (&local_1d0 <
                 (TRangeBound<FFrameNumber> *)(local_228.Data + (longlong)local_220._4_4_ * 0x28)))
               && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar14 = (int)local_220;
            if ((int)local_220 == local_220._4_4_) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x428,&local_228,(int *)((longlong)&local_220 + 4));
            }
            local_218.DataIndex = local_218.DataIndex + 1;
            local_220 = CONCAT44(local_220._4_4_,iVar14 + 1);
            lVar23 = (longlong)iVar14;
            *(TRangeBound<FFrameNumber> *)(local_228.Data + lVar23 * 0x28) = local_1d0;
            ((TRangeBound<FFrameNumber> *)(local_228.Data + lVar23 * 0x28))[1] = TStack_1c8;
            pFVar2 = local_228.Data + lVar23 * 0x28 + 0x10;
            pFVar2->field_0x0 = (undefined1)local_1c0;
            pFVar2[1] = local_1c0._1_1_;
            pFVar2[2] = local_1c0._2_1_;
            pFVar2[3] = local_1c0._3_1_;
            pFVar2[4] = local_1c0._4_1_;
            pFVar2[5] = local_1c0._5_1_;
            pFVar2[6] = local_1c0._6_1_;
            pFVar2[7] = local_1c0._7_1_;
            pFVar2[8].field_0x0 = (undefined1)uStack_1b8;
            pFVar2[9] = uStack_1b8._1_1_;
            pFVar2[10] = uStack_1b8._2_1_;
            pFVar2[0xb] = uStack_1b8._3_1_;
            pFVar2[0xc] = uStack_1b8._4_1_;
            pFVar2[0xd] = uStack_1b8._5_1_;
            pFVar2[0xe] = uStack_1b8._6_1_;
            pFVar2[0xf] = uStack_1b8._7_1_;
            *(undefined8 *)(local_228.Data + lVar23 * 0x28 + 0x20) = local_1b0;
            if (pTVar26 == (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0)
            goto LAB_1460e03a8;
            do {
              pTVar12 = local_218.Tree;
              uVar18 = ((FEvaluationTreeEntryHandle *)&pTVar26->_padding_)[1].EntryIndex;
              uVar19 = 0;
              if (uVar18 == 0xffffffff) {
                local_198 = 0;
                uStack_190 = 0;
                iVar14 = 0;
              }
              else {
                uVar15 = uVar19;
                if ((int)uVar18 < ((local_218.Tree)->Data).Entries.ArrayNum) {
                  uVar15 = ~uVar18 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar2 = (pTVar12->Data).Entries.AllocatorInstance.Data;
                uVar15 = *(uint *)(pFVar2 + (longlong)(int)uVar18 * 0xc);
                iVar14 = *(int *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 4);
                uVar18 = uVar19;
                if ((int)uVar15 < (pTVar12->Data).Items.ArrayNum) {
                  uVar18 = ~uVar15 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                local_1a8 = (pTVar12->Data).Items.AllocatorInstance.Data +
                            (longlong)(int)uVar15 * 0x18;
                iStack_1a0 = iVar14;
                if ((iVar14 < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), iVar14 = iStack_1a0, bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              pTVar12 = local_218.Tree;
              if ((-1 < local_218.DataIndex) && (local_218.DataIndex < iVar14)) break;
              if (((((FMovieSceneEvaluationTreeNodeHandle *)&pTVar26->_padding_)->ChildrenHandle).
                   EntryIndex == -1) &&
                 (((FMovieSceneEvaluationTreeNodeHandle *)&pTVar26->_padding_)->Index != 0)) {
                local_218.CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
                pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                          local_218.CurrentNode;
              }
              else {
                FVar8 = *(FMovieSceneEvaluationTreeNodeHandle *)&pTVar26->_padding_;
                FVar22 = FVar8.ChildrenHandle.EntryIndex;
                local_1d8 = FVar8;
                if (FVar22.EntryIndex == -1) {
                  bVar13 = FVar8.Index == 0;
                }
                else {
                  pTVar16 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                      ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>
                                        *)&(local_218.Tree)->_padding_,&local_58,FVar22);
                  if (((longlong)FVar8 < 0) || (pTVar16->ArrayNum <= FVar8.Index)) {
                    bVar13 = false;
                  }
                  else {
                    bVar13 = true;
                  }
                }
                if ((!bVar13) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid(Handle)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                                        ,0x18d,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (FVar22.EntryIndex != -1) {
                  pTVar16 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                      ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>
                                        *)&pTVar12->_padding_,&local_48,FVar22);
                  lVar23 = (longlong)local_1d8.Index;
                  if (local_1d8.Index < pTVar16->ArrayNum) {
                    uVar19 = (uint)~local_1d8.Index >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                            (pTVar16->DataPtr + lVar23);
                }
              }
              local_218.CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar12;
              local_218.DataIndex = 0;
              pTVar26 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                        local_218.CurrentNode;
            } while ((TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                     local_218.CurrentNode !=
                     (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0);
            goto LAB_1460dffb0;
          }
        }
      }
LAB_1460e03a8:
      FMovieSceneEvaluationTreeRangeIterator::Iter(&local_200,true);
    }
    iVar21 = (int)local_220;
    uVar20 = (ulonglong)(int)local_220;
    pTVar1 = (TRangeBound<FFrameNumber> *)(local_228.Data + uVar20 * 0x28);
    FVar24.Data = local_228.Data;
    while( true ) {
      if ((int)uVar20 != iVar21) {
        `TCheckedPointerIterator<TTuple<TRange<FFrameNumber>,FMovieSceneTrackEvaluationData>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TRangeBound<FFrameNumber> *)FVar24.Data == pTVar1) break;
      local_c0 = *(TRangeBound<FFrameNumber> *)((longlong)FVar24.Data + 0x10);
      TStack_b8 = *(TRangeBound<FFrameNumber> *)((longlong)FVar24.Data + 0x18);
      local_b0 = *(TRangeBound<FFrameNumber> *)((longlong)FVar24.Data + 0x20);
      local_d0 = (IMovieSceneEvaluationTreeNodeOperator)
                 &
                 ___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
      ;
      local_f8[0].LowerBound = *(TRangeBound<FFrameNumber> *)FVar24.Data;
      local_f8[0].UpperBound = *(TRangeBound<FFrameNumber> *)((longlong)FVar24.Data + 8);
      local_c8 = param_2;
      FMovieSceneEvaluationTree::AddTimeRange
                ((FMovieSceneEvaluationTree *)param_2,local_f8,&local_d0,
                 (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                 (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
      uVar20 = local_220 & 0xffffffff;
      FVar24.Data = FVar24.Data + 0x28;
    }
    if ((TRangeBound<FFrameNumber> *)local_228.Data != (TRangeBound<FFrameNumber> *)0x0) {
      FMemory::Free(local_228.Data);
    }
  }
  return;
}

// SortSections @ 1460f9f00

void __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::SortSections
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TArray<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>
                   *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FFrameNumber *pFVar8;
  ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection> FVar9;
  uint uVar10;
  longlong lVar11;
  FIdentityFunctor local_res8;
  TRangeBound<FFrameNumber> local_48;
  TRangeBound<FFrameNumber> TStack_40;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  uVar10 = 0;
  iVar7 = param_1->ArrayNum;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)(lVar11 + (longlong)param_1->DataPtr);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd8) & 1) != 0)) {
        local_48._0_4_ = *(undefined4 *)(lVar2 + 0xb0);
        local_48.Value.Value = *(int *)(lVar2 + 0xb4);
        TStack_40._0_4_ = *(undefined4 *)(lVar2 + 0xb8);
        iVar7 = *(int *)(lVar2 + 0xbc);
        TStack_40.Value.Value = iVar7;
        if ((local_48.Type.Value == '\x02') || (TStack_40.Type.Value == '\x02')) {
LAB_1460fa030:
          FVar3 = (param_2->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
                  param_2;
          if (FVar3 != (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>
                        )0x0) {
            FVar9 = FVar3;
          }
          local_38 = lVar2;
          uStack_30 = uVar10;
          if ((ulonglong)FVar9 <= &local_38) {
            FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
                    param_2;
            if (FVar3 != (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>
                          )0x0) {
              FVar9 = FVar3;
            }
            if ((&local_38 < (undefined8 *)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar9))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar7 = param_2->ArrayNum;
          if (iVar7 == param_2->ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>_>
                              (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar7 + 1;
          FVar3 = (param_2->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)
                  param_2;
          if (FVar3 != (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>
                        )0x0) {
            FVar9 = FVar3;
          }
          puVar1 = (undefined4 *)((longlong)FVar9 + (longlong)iVar7 * 0x10);
          *puVar1 = (undefined4)local_38;
          puVar1[1] = local_38._4_4_;
          puVar1[2] = uStack_30;
          puVar1[3] = uStack_2c;
        }
        else {
          if ((local_48.Type.Value == '\x02') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_48.Value.Value <= iVar7) {
            pFVar8 = TRangeBound<FFrameNumber>::GetValue(&TStack_40);
            iVar7 = pFVar8->Value;
            pFVar8 = TRangeBound<FFrameNumber>::GetValue(&local_48);
            if ((pFVar8->Value != iVar7) ||
               ((local_48.Type.Value != '\0' && (TStack_40.Type.Value != '\0'))))
            goto LAB_1460fa030;
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < iVar7);
  }
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  FVar9 = (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)param_2;
  if (FVar3 != (ForElementType<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection>)0x0)
  {
    FVar9 = FVar3;
  }
  AlgoImpl::
  IntroSortInternal<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>_>
            ((FSortedSection *)FVar9,param_2->ArrayNum,local_res8,
             (TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>
              )param_3);
  return;
}

