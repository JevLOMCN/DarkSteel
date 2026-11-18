// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 26

// AssignSequence @ 146194660

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneEvaluationState::AssignSequence
          (FMovieSceneEvaluationState *this,FMovieSceneSequenceID *param_1,
          UMovieSceneSequence *param_2,IMovieScenePlayer *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar2;
  FMovieSceneObjectCache *this_00;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar2 = IMovieScenePlayer::GetSharedPlaybackState(param_3,&local_18);
  local_28.Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    this_00 = GetObjectCache(this,param_1);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    this_00 = GetObjectCache(this,param_1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneObjectCache::SetSequence(this_00,param_2,param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// AssignSequence @ 146194700

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneEvaluationState::AssignSequence
          (FMovieSceneEvaluationState *this,FMovieSceneSequenceID *param_1,
          UMovieSceneSequence *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  FMovieSceneObjectCache *this_00;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  this_00 = GetObjectCache(this,param_1);
  local_18.Object = param_3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneObjectCache::SetSequence(this_00,param_2,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// ClearObjectCaches @ 146196ce0

void __thiscall
FMovieSceneEvaluationState::ClearObjectCaches
          (FMovieSceneEvaluationState *this,IMovieScenePlayer *param_1)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_1,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ClearObjectCaches(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ClearObjectCaches @ 146196d40

void __thiscall
FMovieSceneEvaluationState::ClearObjectCaches
          (FMovieSceneEvaluationState *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  undefined1 *puVar1;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSharedPlaybackState *this_00;
  code *pcVar7;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *pTVar8;
  bool bVar9;
  IObjectBindingNotifyPlaybackCapability *pIVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FGuid local_a8;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
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
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->ObjectCaches).field_0x10;
  iStack_90 = 0;
  iVar4 = *(int *)&(this->ObjectCaches).field_0x28;
  pTVar2 = &this->ObjectCaches;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->ObjectCaches).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_146196ded;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_146196ded:
  iStack_70 = *(int *)&(this->ObjectCaches).field_0x8 - *(int *)&(this->ObjectCaches).field_0x34;
  uVar14 = *(uint *)&(this->ObjectCaches).field_0x28;
  uStack_80 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->ObjectCaches).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(this->ObjectCaches).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146196ef0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_146196ef0:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    this_00 = param_1->Object;
    lVar11 = *(longlong *)pTVar8 + (longlong)TStack_60.CurrentBitIndex * 0x198;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
             *)(lVar11 + 0x38));
    TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
             *)(lVar11 + 0x88));
    TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
             *)(lVar11 + 0xd8));
    *(int *)(lVar11 + 0x178) = *(int *)(lVar11 + 0x178) + 1;
    pIVar10 = UE::MovieScene::FSharedPlaybackState::
              FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>(this_00);
    if (pIVar10 != (IObjectBindingNotifyPlaybackCapability *)0x0) {
      (**(code **)*pIVar10)(pIVar10);
    }
    local_a8.A = 0;
    local_a8.B = 0;
    local_a8.C = 0;
    local_a8.D = 0;
    TMulticastDelegate<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy> *)
               (lVar11 + 8),&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// FilterObjectBindings @ 1461a61f0

void __thiscall
FMovieSceneEvaluationState::FilterObjectBindings
          (FMovieSceneEvaluationState *this,UObject *param_1,IMovieScenePlayer *param_2,
          TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *param_3)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_2,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FilterObjectBindings(this,param_1,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// FilterObjectBindings @ 1461a6270

void __thiscall
FMovieSceneEvaluationState::FilterObjectBindings
          (FMovieSceneEvaluationState *this,UObject *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2,
          TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  UObject *pUVar6;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  UObject *local_res10;
  int local_res18;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_78 [2];
  undefined4 local_4c;
  
  local_res10 = param_1;
  if ((param_3 == (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBindings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationState.cpp"
                         ,0x2b8,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = 0;
  puVar1 = &(this->ObjectCaches).field_0x10;
  iVar4 = *(int *)&(this->ObjectCaches).field_0x28;
  pTVar2 = &this->ObjectCaches;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->ObjectCaches).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1461a634e;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar10 = local_res18 + -1 + iVar16;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_1461a634e:
  uVar13 = *(uint *)&(this->ObjectCaches).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar9,iVar14);
  TStack_a0.CurrentBitIndex = iVar10;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar16;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->ObjectCaches).field_0x8 -
                       *(int *)&(this->ObjectCaches).field_0x34);
  local_res20 = pTVar2;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar7 = local_res20;
  pUVar6 = local_res10;
  uVar9 = *(uint *)&(this->ObjectCaches).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->ObjectCaches).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1461a6451;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_1461a6451:
  while( true ) {
    if (*(int *)&(this->ObjectCaches).field_0x8 - *(int *)&(this->ObjectCaches).field_0x34 !=
        (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar13) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar7))
    break;
    local_78[0].Object = param_2->Object;
    lVar11 = *(longlong *)pTVar2;
    local_78[0].SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_78[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_78[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneObjectCache::FilterObjectBindings
              ((FMovieSceneObjectCache *)((longlong)TStack_a0.CurrentBitIndex * 0x198 + lVar11 + 8),
               pUVar6,local_78,param_3);
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// FindCachedObjectId @ 1461a7ac0

FGuid * __thiscall
FMovieSceneEvaluationState::FindCachedObjectId
          (FMovieSceneEvaluationState *this,FGuid *__return_storage_ptr__,UObject *param_1,
          FMovieSceneSequenceID *param_2,IMovieScenePlayer *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  uint *puVar6;
  FGuid *pFVar7;
  FMovieSceneObjectCache *this_00;
  undefined1 *puVar8;
  FSharedPlaybackState *local_38;
  FSharedReferencer<1> FStack_30;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_28;
  FGuid local_18;
  
  pTVar5 = IMovieScenePlayer::GetSharedPlaybackState(param_3,&local_28);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_38 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ObjectCaches).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_2->Value) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar6 == param_2->Value) {
          this_00 = (FMovieSceneObjectCache *)(puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            this_00 = (FMovieSceneObjectCache *)0x0;
          }
          if (this_00 != (FMovieSceneObjectCache *)0x0) {
            if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
              UNLOCK();
            }
            FStack_30.ReferenceController = pTVar1;
            pFVar7 = FMovieSceneObjectCache::FindCachedObjectId
                               (this_00,&local_18,param_1,
                                (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                                &local_38);
            goto LAB_1461a7b7b;
          }
          break;
        }
        uVar4 = puVar6[100];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_38 = (FSharedPlaybackState *)0x0;
  pFVar7 = (FGuid *)&local_38;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1461a7b7b:
  uVar4 = pFVar7->B;
  uVar2 = pFVar7->C;
  uVar3 = pFVar7->D;
  __return_storage_ptr__->A = pFVar7->A;
  __return_storage_ptr__->B = uVar4;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindCachedObjectId @ 1461a7bf0

FGuid * __thiscall
FMovieSceneEvaluationState::FindCachedObjectId
          (FMovieSceneEvaluationState *this,FGuid *__return_storage_ptr__,UObject *param_1,
          FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  FGuid *pFVar6;
  FMovieSceneObjectCache *this_00;
  undefined1 *puVar7;
  FSharedPlaybackState *local_28;
  FSharedReferencer<1> FStack_20;
  FGuid local_18;
  
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ObjectCaches).field_0x38;
    }
    uVar4 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_2->Value) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar5 == param_2->Value) {
          this_00 = (FMovieSceneObjectCache *)(puVar5 + 2);
          if (puVar5 == (uint *)0x0) {
            this_00 = (FMovieSceneObjectCache *)0x0;
          }
          if (this_00 != (FMovieSceneObjectCache *)0x0) {
            local_28 = param_3->Object;
            FStack_20.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
            if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_20.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar6 = FMovieSceneObjectCache::FindCachedObjectId
                               (this_00,&local_18,param_1,
                                (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                                &local_28);
            goto LAB_1461a7c7b;
          }
          break;
        }
        uVar4 = puVar5[100];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_28 = (FSharedPlaybackState *)0x0;
  pFVar6 = (FGuid *)&local_28;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1461a7c7b:
  uVar4 = pFVar6->B;
  uVar2 = pFVar6->C;
  uVar3 = pFVar6->D;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  __return_storage_ptr__->A = pFVar6->A;
  __return_storage_ptr__->B = uVar4;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// FindObjectId @ 1461a9020

FGuid * __thiscall
FMovieSceneEvaluationState::FindObjectId
          (FMovieSceneEvaluationState *this,FGuid *__return_storage_ptr__,UObject *param_1,
          FMovieSceneSequenceID *param_2,IMovieScenePlayer *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  uint *puVar6;
  FGuid *pFVar7;
  FMovieSceneObjectCache *this_00;
  undefined1 *puVar8;
  FSharedPlaybackState *local_38;
  FSharedReferencer<1> FStack_30;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_28;
  FGuid local_18;
  
  pTVar5 = IMovieScenePlayer::GetSharedPlaybackState(param_3,&local_28);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_38 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ObjectCaches).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_2->Value) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar6 == param_2->Value) {
          this_00 = (FMovieSceneObjectCache *)(puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            this_00 = (FMovieSceneObjectCache *)0x0;
          }
          if (this_00 != (FMovieSceneObjectCache *)0x0) {
            if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
              UNLOCK();
            }
            FStack_30.ReferenceController = pTVar1;
            pFVar7 = FMovieSceneObjectCache::FindObjectId
                               (this_00,&local_18,param_1,
                                (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                                &local_38);
            goto LAB_1461a90db;
          }
          break;
        }
        uVar4 = puVar6[100];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_38 = (FSharedPlaybackState *)0x0;
  pFVar7 = (FGuid *)&local_38;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1461a90db:
  uVar4 = pFVar7->B;
  uVar2 = pFVar7->C;
  uVar3 = pFVar7->D;
  __return_storage_ptr__->A = pFVar7->A;
  __return_storage_ptr__->B = uVar4;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindObjectId @ 1461a9150

FGuid * __thiscall
FMovieSceneEvaluationState::FindObjectId
          (FMovieSceneEvaluationState *this,FGuid *__return_storage_ptr__,UObject *param_1,
          FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  FGuid *pFVar6;
  FMovieSceneObjectCache *this_00;
  undefined1 *puVar7;
  FSharedPlaybackState *local_28;
  FSharedReferencer<1> FStack_20;
  FGuid local_18;
  
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ObjectCaches).field_0x38;
    }
    uVar4 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_2->Value) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar5 == param_2->Value) {
          this_00 = (FMovieSceneObjectCache *)(puVar5 + 2);
          if (puVar5 == (uint *)0x0) {
            this_00 = (FMovieSceneObjectCache *)0x0;
          }
          if (this_00 != (FMovieSceneObjectCache *)0x0) {
            local_28 = param_3->Object;
            FStack_20.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
            if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_20.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar6 = FMovieSceneObjectCache::FindObjectId
                               (this_00,&local_18,param_1,
                                (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                                &local_28);
            goto LAB_1461a91db;
          }
          break;
        }
        uVar4 = puVar5[100];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_28 = (FSharedPlaybackState *)0x0;
  pFVar6 = (FGuid *)&local_28;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1461a91db:
  uVar4 = pFVar6->B;
  uVar2 = pFVar6->C;
  uVar3 = pFVar6->D;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  __return_storage_ptr__->A = pFVar6->A;
  __return_storage_ptr__->B = uVar4;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// FindSequence @ 1461a9630

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
FMovieSceneEvaluationState::FindSequence
          (FMovieSceneEvaluationState *this,FMovieSceneSequenceID *param_1)

{
  uint uVar1;
  uint *puVar2;
  UMovieSceneSequence *pUVar3;
  uint *puVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ObjectCaches).field_0x38;
    }
    uVar1 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_1->Value) * 4)
    ;
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar2 == param_1->Value) {
          puVar4 = puVar2 + 2;
          if (puVar2 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 == (uint *)0x0) {
            return (UMovieSceneSequence *)0x0;
          }
          pUVar3 = (UMovieSceneSequence *)FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar4 + 8));
          return pUVar3;
        }
        uVar1 = puVar2[100];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (UMovieSceneSequence *)0x0;
}

// FindSequenceId @ 1461a96c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSequenceID __thiscall
FMovieSceneEvaluationState::FindSequenceId
          (FMovieSceneEvaluationState *this,UMovieSceneSequence *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  UObject *in_R8;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar15 = 0;
  puVar1 = &(this->ObjectCaches).field_0x10;
  iVar3 = *(int *)&(this->ObjectCaches).field_0x28;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ObjectCaches).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1461a976d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1461a976d:
  uVar12 = *(uint *)&(this->ObjectCaches).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar7,iVar15);
  uVar7 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ObjectCaches).field_0x8 -
                       *(int *)&(this->ObjectCaches).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (FMovieSceneSequenceID)uVar7;
  }
  uVar4 = *(uint *)&(this->ObjectCaches).field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(this->ObjectCaches).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar7 = uVar7 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1461a9870;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar7;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_1461a9870:
  do {
    if (*(int *)&(this->ObjectCaches).field_0x8 - *(int *)&(this->ObjectCaches).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      *(undefined4 *)&param_1->_padding_ = 0xffffffff;
      goto LAB_1461a98da;
    }
    puVar11 = (undefined4 *)
              (*(longlong *)&this->ObjectCaches + (longlong)TStack_60.CurrentBitIndex * 0x198);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar11 + 10));
    if (pUVar9 == in_R8) {
      *(undefined4 *)&param_1->_padding_ = *puVar11;
LAB_1461a98da:
      return (FMovieSceneSequenceID)(uint)param_1;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// FindSequenceId @ 1461a9900

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSequenceID __thiscall
FMovieSceneEvaluationState::FindSequenceId
          (FMovieSceneEvaluationState *this,UMovieSceneSequence *param_1)

{
  FindSequenceId(this,param_1);
  return (FMovieSceneSequenceID)(uint)param_1;
}

// GetBindingActivation @ 1461b0490

bool __thiscall
FMovieSceneEvaluationState::GetBindingActivation
          (FMovieSceneEvaluationState *this,FGuid *param_1,FMovieSceneSequenceID *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulong64 uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ObjectCaches).field_0x38;
    }
    uVar1 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_2->Value) * 4)
    ;
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar3 == param_2->Value) {
          puVar5 = puVar3 + 2;
          if (puVar3 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 == (uint *)0x0) {
            return true;
          }
          uVar4 = CityHash64((char *)param_1,0x10);
          iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                             (puVar5 + 0x48),(uint)uVar4,param_1);
          return iVar2 == -1;
        }
        uVar1 = puVar3[100];
      } while (uVar1 != 0xffffffff);
    }
  }
  return true;
}

// GetObjectCache @ 1461b1570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMovieSceneObjectCache * __thiscall
FMovieSceneEvaluationState::GetObjectCache
          (FMovieSceneEvaluationState *this,FMovieSceneSequenceID *param_1)

{
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *this_00;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FMovieSceneObjectCache *pFVar5;
  FMovieSceneObjectCache *pFVar6;
  undefined1 *puVar7;
  FMovieSceneObjectCache *pFVar8;
  undefined1 auStackY_1e8 [32];
  TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneEvaluationState::FVersionedObjectCache_&&>
  local_1b8;
  FMRSWRecursiveAccessDetector *local_1a8;
  FMRSWRecursiveAccessDetector local_1a0;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170 [24];
  undefined8 uStack_158;
  void *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  void *local_130;
  ulonglong local_128;
  undefined1 local_120 [24];
  undefined8 uStack_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  void *local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *local_90;
  ulonglong local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  undefined8 local_48;
  void *local_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = &this->ObjectCaches;
  pFVar8 = (FMovieSceneObjectCache *)0x0;
  pFVar5 = pFVar8;
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ObjectCaches).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_1->Value) * 4);
    if (iVar4 != -1) {
      do {
        pFVar5 = (FMovieSceneObjectCache *)
                 ((longlong)iVar4 * 0x198 + *(longlong *)&this_00->field_0x0);
        if (*(uint *)&pFVar5->OnBindingInvalidated == param_1->Value) break;
        iVar4 = *(int *)&pFVar5[1].OnBindingInvalidated.field_0x18;
        pFVar5 = pFVar8;
      } while (iVar4 != -1);
    }
  }
  pFVar6 = (FMovieSceneObjectCache *)&(pFVar5->OnBindingInvalidated).field_0x8;
  if (pFVar5 == (FMovieSceneObjectCache *)0x0) {
    pFVar6 = pFVar8;
  }
  if (pFVar6 == (FMovieSceneObjectCache *)0x0) {
    local_174 = 0;
    local_170._16_8_ = 0;
    uStack_158 = 0;
    local_138 = 0;
    local_120._16_8_ = 0;
    uStack_108 = 0;
    local_128 = 0;
    local_d0._16_8_ = 0;
    uStack_b8 = 0;
    local_e8 = 0;
    local_70.AllocatorInstance.InlineData[0] = '\0';
    local_70.AllocatorInstance.InlineData[1] = '\0';
    local_70.AllocatorInstance.InlineData[2] = '\0';
    local_70.AllocatorInstance.InlineData[3] = '\0';
    local_70.AllocatorInstance.InlineData[4] = '\0';
    local_70.AllocatorInstance.InlineData[5] = '\0';
    local_70.AllocatorInstance.InlineData[6] = '\0';
    local_70.AllocatorInstance.InlineData[7] = '\0';
    local_70.AllocatorInstance.InlineData[8] = '\0';
    local_70.AllocatorInstance.InlineData[9] = '\0';
    local_70.AllocatorInstance.InlineData[10] = '\0';
    local_70.AllocatorInstance.InlineData[0xb] = '\0';
    local_70.AllocatorInstance.InlineData[0xc] = '\0';
    local_70.AllocatorInstance.InlineData[0xd] = '\0';
    local_70.AllocatorInstance.InlineData[0xe] = '\0';
    local_70.AllocatorInstance.InlineData[0xf] = '\0';
    local_d8 = 0;
    local_190 = ___xmm_00000000000000020000000000000000;
    uStack_188 = _UNK_150631d48;
    local_98 = 0;
    local_88 = 0;
    local_48 = 0;
    local_38 = 0;
    local_2b = 0;
    local_29 = 0;
    local_20 = 0;
    local_2c = 0;
    local_1a8 = &local_1a0;
    local_148 = ___xmm_00000000ffffffff0000008000000000;
    uStack_140 = _UNK_150631d98;
    local_1a0.State = (atomic<unsigned___int64>)0x0;
    local_f8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_f0 = _UNK_150631d98;
    local_198 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
    local_a8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_a0 = _UNK_150631d98;
    local_180 = 0;
    local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_50 = _UNK_150631d98;
    local_178 = 0xffffffff;
    local_170._0_8_ = (FScriptContainerElement *)0x0;
    local_170._8_8_ = 0;
    local_150 = (void *)0x0;
    local_130 = (void *)0x0;
    local_120._0_8_ = (FScriptContainerElement *)0x0;
    local_120._8_8_ = 0;
    local_100 = (void *)0x0;
    local_e0 = (void *)0x0;
    local_d0._0_8_ = (FScriptContainerElement *)0x0;
    local_d0._8_8_ = 0;
    local_b0 = (void *)0x0;
    local_90 = (void *)0x0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_40 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    local_1b8.Value = (FVersionedObjectCache *)param_1;
    TSet<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneEvaluationState::FVersionedObjectCache_&&>_>
              ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>,FDefaultSetAllocator>
                *)this_00,&local_1b8,(bool *)&local_1b8.Value);
    lVar1 = *(longlong *)&this_00->field_0x0;
    local_38 = local_38 & 0xffffffff00000000;
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    uVar2 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar4 = local_70.MaxBits;
    uStack_50 = 0xffffffff;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    if (0x80 < (uint)iVar4) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    local_88 = local_88 & 0xffffffff00000000;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d0,0,local_d0._8_4_);
    iVar4 = SUB84(local_d0._8_8_,4);
    local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
    }
    uVar3 = local_a8._4_4_;
    uStack_a0 = 0xffffffff;
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_a8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    local_d8 = local_d8 & 0xffffffff00000000;
    if (local_e0 != (void *)0x0) {
      FMemory::Free(local_e0);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_120,0,local_120._8_4_);
    iVar4 = SUB84(local_120._8_8_,4);
    local_120._8_8_ = local_120._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)local_120,0,(int *)(local_120 + 0xc));
    }
    uVar3 = local_f8._4_4_;
    uStack_f0 = 0xffffffff;
    local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_f8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_120 + 0x10),0);
    }
    if (local_100 != (void *)0x0) {
      FMemory::Free(local_100);
    }
    if ((FScriptContainerElement *)local_120._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_120._0_8_);
    }
    local_128 = local_128 & 0xffffffff00000000;
    if (local_130 != (void *)0x0) {
      FMemory::Free(local_130);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_170,0,local_170._8_4_);
    iVar4 = SUB84(local_170._8_8_,4);
    local_170._8_8_ = local_170._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_170,0,(int *)(local_170 + 0xc));
    }
    uVar3 = local_148._4_4_;
    uStack_140 = 0xffffffff;
    local_148 = (ulonglong)local_148._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_148 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_170 + 0x10),0);
    }
    if (local_150 != (void *)0x0) {
      FMemory::Free(local_150);
    }
    if ((FScriptContainerElement *)local_170._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_170._0_8_);
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_198,(int)local_190)
    ;
    if (local_198 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(local_198);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0);
    pFVar6 = (FMovieSceneObjectCache *)(lVar1 + (longlong)(int)local_1b8.Key * 0x198 + 8);
  }
  return pFVar6;
}

// GetPlaybackCapabilityID @ 1461b27a0

TPlaybackCapabilityID<FMovieSceneEvaluationState> __cdecl
FMovieSceneEvaluationState::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<FMovieSceneEvaluationState> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<FMovieSceneEvaluationState>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FMovieSceneEvaluationState");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// GetSerialNumber @ 1461b3dd0

uint __thiscall FMovieSceneEvaluationState::GetSerialNumber(FMovieSceneEvaluationState *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->ObjectCaches).field_0x10;
  iVar3 = *(int *)&(this->ObjectCaches).field_0x28;
  bVar5 = false;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ObjectCaches).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1461b3e7e;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1461b3e7e:
  uVar11 = *(uint *)&(this->ObjectCaches).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ObjectCaches).field_0x8 -
                       *(int *)&(this->ObjectCaches).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar7 = *(uint *)&(this->ObjectCaches).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ObjectCaches).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1461b3fa0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1461b3fa0:
  while( true ) {
    if (*(int *)&(this->ObjectCaches).field_0x8 - *(int *)&(this->ObjectCaches).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = (longlong)TStack_60.CurrentBitIndex * 0x198;
    lVar9 = *(longlong *)&this->ObjectCaches;
    iVar3 = *(int *)(lVar10 + 0x178 + lVar9);
    if ((bVar5) || (iVar3 != *(int *)(lVar9 + 0x188 + lVar10))) {
      bVar5 = true;
    }
    *(int *)(lVar9 + 0x188 + lVar10) = iVar3;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (bVar5) {
    this->SerialNumber = this->SerialNumber + 1;
  }
  return this->SerialNumber;
}

// Initialize @ 1461b59f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEvaluationState::Initialize
          (FMovieSceneEvaluationState *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  UMovieSceneEntitySystemLinker *pUVar1;
  
  pUVar1 = (UMovieSceneEntitySystemLinker *)
           FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  RegisterObjectCacheEvents
            (this,pUVar1,(FInstanceHandle *)&param_1->Object->RootInstanceHandle,
             (FMovieSceneSequenceID)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Invalidate @ 1461b9e40

void __thiscall
FMovieSceneEvaluationState::Invalidate
          (FMovieSceneEvaluationState *this,FGuid *param_1,FMovieSceneSequenceID *param_2)

{
  undefined1 *puVar1;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  ulong64 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined1 local_res8 [8];
  FGuid *local_res10;
  FMovieSceneSequenceID *local_res18;
  undefined1 local_res20 [8];
  FMovieSceneObjectBindingID local_d8;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  TMap<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FGuid local_58;
  
  puVar1 = &(this->ObjectCaches).field_0x10;
  iVar8 = *(int *)&(this->ObjectCaches).field_0x28;
  pTVar2 = &this->ObjectCaches;
  iStack_b8 = 0;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar8 != 0) {
    puVar18 = *(uint **)&(this->ObjectCaches).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_a0 = 0;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_1461b9efe;
      uVar16 = puVar18[lVar10 + 1];
    }
    uStack_b4 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_90 = (int)lVar10;
    iStack_a4 = local_90 + -1 + local_a0;
    if (iVar8 < iStack_a4) {
      iStack_a4 = iVar8;
    }
  }
LAB_1461b9efe:
  uVar16 = *(uint *)&(this->ObjectCaches).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  iStack_98 = *(int *)&(this->ObjectCaches).field_0x8 - *(int *)&(this->ObjectCaches).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_80.CurrentBitIndex = iStack_a4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_80._28_4_ = iStack_a4;
  TStack_80.BaseBitIndex = local_a0;
  uStack_60 = CONCAT44(uStack_94,iStack_98);
  local_res10 = param_1;
  local_res18 = param_2;
  local_c0 = pTVar2;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar8 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->ObjectCaches).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->ObjectCaches).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1461ba000;
      uVar16 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_1461ba000:
  while( true ) {
    pTVar6 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    lVar10 = (longlong)TStack_80.CurrentBitIndex * 0x198 + *(longlong *)pTVar6;
    if (local_res18->Value == *(uint *)(lVar10 + 0x30)) {
      FMovieSceneObjectCache::InvalidateInternal((FMovieSceneObjectCache *)(lVar10 + 8),param_1);
      *(int *)(lVar10 + 0x178) = *(int *)(lVar10 + 0x178) + 1;
    }
    else {
      local_d8.Guid.A = param_1->A;
      local_d8.Guid.B = param_1->B;
      local_d8.Guid.C = param_1->C;
      local_d8.Guid.D = param_1->D;
      local_d8.ResolveParentIndex = -1;
      local_d8.SequenceID = local_res18->Value;
      uVar9 = CityHash64((char *)&local_d8,0x10);
      iVar8 = TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMovieSceneObjectBindingID>
                        ((TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                          *)(lVar10 + 0xd8),(uint)uVar9 ^ local_d8.SequenceID,&local_d8);
      if (iVar8 != -1) {
        lVar11 = (longlong)iVar8 * 0x70 + *(longlong *)(lVar10 + 0xd8);
        puVar13 = (undefined8 *)(lVar11 + 0x18);
        if (lVar11 == 0) {
          puVar13 = (undefined8 *)0x0;
        }
        if (puVar13 != (undefined8 *)0x0) {
          piVar15 = (int *)(lVar11 + 0x60);
          if ((undefined8 *)puVar13[8] != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)puVar13[8];
          }
          if (lVar11 == 0) {
            piVar15 = (int *)&DAT_00000048;
          }
          iVar8 = *piVar15;
          puVar19 = puVar13 + (longlong)iVar8 * 2;
          while( true ) {
            if (*piVar15 != iVar8) {
              `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            if (puVar13 == puVar19) break;
            local_58._0_8_ = *puVar13;
            local_58._8_8_ = puVar13[1];
            FMovieSceneObjectCache::InvalidateInternal
                      ((FMovieSceneObjectCache *)(lVar10 + 8),&local_58);
            *(int *)(lVar10 + 0x178) = *(int *)(lVar10 + 0x178) + 1;
            puVar13 = puVar13 + 2;
          }
          param_1 = local_res10;
          if (*(int *)(lVar10 + 0xe0) != *(int *)(lVar10 + 0x10c)) {
            uVar9 = CityHash64((char *)&local_d8,0x10);
            TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FMovieSceneObjectBindingID>
                      ((TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                        *)(lVar10 + 0xd8),(uint)uVar9 ^ local_d8.SequenceID,&local_d8);
            param_1 = local_res10;
          }
        }
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return;
}

// InvalidateExpiredObjects @ 1461ba4d0

void __thiscall
FMovieSceneEvaluationState::InvalidateExpiredObjects(FMovieSceneEvaluationState *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar11 = 0;
  puVar1 = &(this->ObjectCaches).field_0x10;
  iVar3 = *(int *)&(this->ObjectCaches).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ObjectCaches).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1461ba57d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1461ba57d:
  uVar10 = *(uint *)&(this->ObjectCaches).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ObjectCaches).field_0x8 -
                       *(int *)&(this->ObjectCaches).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ObjectCaches).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ObjectCaches).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1461ba680;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1461ba680:
  while( true ) {
    if (*(int *)&(this->ObjectCaches).field_0x8 - *(int *)&(this->ObjectCaches).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FMovieSceneObjectCache::InvalidateExpiredObjects
              ((FMovieSceneObjectCache *)
               ((longlong)TStack_50.CurrentBitIndex * 0x198 + *(longlong *)&this->ObjectCaches + 8))
    ;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// OnSubInstanceCreated @ 1461c1060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEvaluationState::OnSubInstanceCreated
          (FMovieSceneEvaluationState *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,FInstanceHandle param_2
          )

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  FInstanceHandle local_res18 [2];
  
  local_res18[0] = param_2;
  pUVar3 = (UMovieSceneEntitySystemLinker *)
           FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if ((pUVar3->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  RegisterObjectCacheEvents
            (this,pUVar3,local_res18,
             (FMovieSceneSequenceID)
             *(uint *)((ulonglong)((uint)param_2 & 0xffff) * 0x140 + 0x128 +
                      *(longlong *)&((pUVar3->InstanceRegistry).Ptr)->Instances));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterObjectCacheEvents @ 1461c5220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEvaluationState::RegisterObjectCacheEvents
          (FMovieSceneEvaluationState *this,UMovieSceneEntitySystemLinker *param_1,
          FInstanceHandle *param_2,FMovieSceneSequenceID param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneObjectCache *this_00;
  FDelegateHandle FVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  FMovieSceneSequenceID local_res20 [2];
  
  local_res20[0].Value = param_3.Value;
  this_00 = GetObjectCache(this,local_res20);
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ObjectCaches).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & local_res20[0].Value
                               ) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar5 == local_res20[0].Value) {
          if (puVar5 == (uint *)0x0) goto LAB_1461c52ae;
          goto LAB_1461c52d4;
        }
        uVar4 = puVar5[100];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar5 = (uint *)0x0;
LAB_1461c52ae:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1461c52d4:
  FVar3 = TMulticastDelegateRegistration<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy>::
          AddUObject<UMovieSceneEntitySystemLinker,UE::MovieScene::FInstanceHandle_const_&>
                    ((TMulticastDelegateRegistration<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy>
                      *)this_00,(UMovieSceneEntitySystemLinker *)&stack0x00000008,
                     (pmf_16bb65d0)param_1,
                     (FInstanceHandle *)UMovieSceneEntitySystemLinker::InvalidateObjectBinding);
  *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)FVar3.ID;
  return;
}

// SetBindingActivation @ 1461d1a70

void __thiscall
FMovieSceneEvaluationState::SetBindingActivation
          (FMovieSceneEvaluationState *this,FGuid *param_1,FMovieSceneSequenceID *param_2,
          bool param_3)

{
  FMovieSceneObjectCache *this_00;
  ulong64 uVar1;
  
  this_00 = GetObjectCache(this,param_2);
  if (param_3) {
    if (*(int *)&(this_00->InactiveBindingIds).Elements.field_0x8 !=
        *(int *)&(this_00->InactiveBindingIds).Elements.field_0x34) {
      uVar1 = CityHash64((char *)param_1,0x10);
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                (&this_00->InactiveBindingIds,(uint)uVar1,param_1);
    }
  }
  else {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (&this_00->InactiveBindingIds,(FGuid *)&stack0x00000020,(bool *)param_1);
  }
  FMovieSceneObjectCache::InvalidateInternal(this_00,param_1);
  return;
}

// FMovieSceneEvaluationState @ 1461fc6c0

FMovieSceneEvaluationState * __thiscall
FMovieSceneEvaluationState::FMovieSceneEvaluationState(FMovieSceneEvaluationState *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneEvaluationState__6B_;
  *(undefined8 *)&this->PersistentEntityData = 0;
  *(undefined8 *)&(this->PersistentEntityData).field_0x8 = 0;
  *(undefined8 *)&(this->PersistentEntityData).field_0x20 = 0;
  *(undefined4 *)&(this->PersistentEntityData).field_0x28 = 0;
  *(undefined4 *)&(this->PersistentEntityData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PersistentEntityData).field_0x34 = 0;
  *(undefined4 *)&(this->PersistentEntityData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PersistentEntityData).field_0x40 = 0;
  *(undefined4 *)&(this->PersistentEntityData).field_0x48 = 0;
  *(undefined8 *)&this->PersistentSharedData = 0;
  *(undefined8 *)&(this->PersistentSharedData).field_0x8 = 0;
  *(undefined8 *)&(this->PersistentSharedData).field_0x20 = 0;
  *(undefined4 *)&(this->PersistentSharedData).field_0x28 = 0;
  *(undefined4 *)&(this->PersistentSharedData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PersistentSharedData).field_0x34 = 0;
  *(undefined4 *)&(this->PersistentSharedData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PersistentSharedData).field_0x40 = 0;
  *(undefined4 *)&(this->PersistentSharedData).field_0x48 = 0;
  *(undefined8 *)&this->ObjectCaches = 0;
  *(undefined8 *)&(this->ObjectCaches).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectCaches).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectCaches).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectCaches).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectCaches).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectCaches).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectCaches).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectCaches).field_0x48 = 0;
  this->SerialNumber = 0;
  return this;
}

// ~FMovieSceneEvaluationState @ 1461ff550

void __thiscall
FMovieSceneEvaluationState::~FMovieSceneEvaluationState(FMovieSceneEvaluationState *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ObjectCaches).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectCaches).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectCaches);
  *(undefined4 *)&(this->PersistentSharedData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PersistentSharedData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PersistentSharedData);
  *(undefined4 *)&(this->PersistentEntityData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PersistentEntityData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PersistentEntityData);
  this->_padding_ = (longlong)&___7IPlaybackCapability_MovieScene_UE__6B_;
  return;
}

// FindBoundObjects @ 1462113f0

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
FMovieSceneEvaluationState::FindBoundObjects
          (FMovieSceneEvaluationState *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FGuid *param_1,FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  uint uVar1;
  uint *puVar2;
  FMovieSceneObjectCache *this_00;
  undefined1 *puVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  if (*(int *)&(this->ObjectCaches).field_0x8 != *(int *)&(this->ObjectCaches).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ObjectCaches).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ObjectCaches).field_0x38;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)
                               (*(int *)&(this->ObjectCaches).field_0x48 - 1U & param_2->Value) * 4)
    ;
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x198 + *(longlong *)&this->ObjectCaches);
        if (*puVar2 == param_2->Value) {
          this_00 = (FMovieSceneObjectCache *)(puVar2 + 2);
          if (puVar2 == (uint *)0x0) {
            this_00 = (FMovieSceneObjectCache *)0x0;
          }
          if (this_00 != (FMovieSceneObjectCache *)0x0) {
            local_18.Object = param_3->Object;
            local_18.SharedReferenceCount.ReferenceController =
                 (param_3->SharedReferenceCount).ReferenceController;
            if (local_18.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            FMovieSceneObjectCache::FindBoundObjects
                      (this_00,__return_storage_ptr__,param_1,&local_18);
            goto LAB_146211473;
          }
          break;
        }
        uVar1 = puVar2[100];
      } while (uVar1 != 0xffffffff);
    }
  }
  __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
LAB_146211473:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

