// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 2

// Execute @ 14cd89080

void __thiscall
FGeometryCacheExecutionToken::Execute
          (FGeometryCacheExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  FFrameRate FVar1;
  code *pcVar2;
  UObject *pUVar3;
  UGeometryCacheComponent *this_00;
  UGeometryCache *pUVar4;
  UGeometryCache *pUVar5;
  FMovieSceneAnimTypeID FVar6;
  FMovieSceneContext *pFVar7;
  FWeakObjectPtr *pFVar8;
  bool bVar9;
  float fVar10;
  FFrameTime local_res18;
  IMovieScenePreAnimatedTokenProducer local_48;
  FWeakObjectPtr local_40;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_38;
  
  if ((((param_2->ObjectBindingID).D != 0 || (param_2->ObjectBindingID).C != 0) ||
      (param_2->ObjectBindingID).B != 0) || (param_2->ObjectBindingID).A != 0) {
    IMovieScenePlayer::FindBoundObjects
              (param_4,&local_38,&param_2->ObjectBindingID,&param_2->SequenceID);
    for (pFVar8 = &(local_38.DataPtr)->WeakPtr;
        pFVar8 != &local_38.DataPtr[local_38.ArrayNum].WeakPtr; pFVar8 = pFVar8 + 1) {
      local_40 = *pFVar8;
      pUVar3 = FWeakObjectPtr::Get(&local_40);
      if (((pUVar3 != (UObject *)0x0) &&
          (this_00 = GeometryMeshComponentFromObject(pUVar3),
          this_00 != (UGeometryCacheComponent *)0x0)) && ((this_00->field_0x98 & 1) != 0)) {
        if ((this->Params)._padding_ == 0) {
LAB_14cd8916d:
          pUVar5 = UGeometryCacheComponent::GetGeometryCache(this_00);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar5 != (UGeometryCache *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          (this->Params)._padding_ = (longlong)pUVar5;
        }
        else {
          pUVar4 = UGeometryCacheComponent::GetGeometryCache(this_00);
          pUVar5 = (UGeometryCache *)(this->Params)._padding_;
          if (pUVar5 == (UGeometryCache *)0x0) {
            bVar9 = pUVar4 == (UGeometryCache *)0x0;
          }
          else {
            bVar9 = pUVar5 == pUVar4;
          }
          if (bVar9) goto LAB_14cd8916d;
          UGeometryCacheComponent::SetGeometryCache(this_00,pUVar5);
        }
        local_48 = (IMovieScenePreAnimatedTokenProducer)
                   &___7FPreAnimatedGeometryCacheTokenProducer__6B_;
        FVar6.ID = TMovieSceneAnimTypeID<FPreAnimatedGeometryCacheTokenProducer,0>::CachedID;
        if (TMovieSceneAnimTypeID<FPreAnimatedGeometryCacheTokenProducer,0>::CachedID == 0) {
          FVar6.ID = FMovieSceneAnimTypeID::Initialize
                               (&TMovieSceneAnimTypeID<FPreAnimatedGeometryCacheTokenProducer,0>::
                                 CachedID,0);
        }
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&param_4->PreAnimatedState,(UObject *)this_00,FVar6,&local_48);
        local_48 = (IMovieScenePreAnimatedTokenProducer)
                   &___7IMovieScenePreAnimatedTokenProducer__6B_;
        UGeometryCacheComponent::SetManualTick(this_00,true);
        local_res18.FrameNumber.Value = *(uint *)((longlong)&param_1->_padding_ + 4);
        FVar1 = (FFrameRate)param_1->_padding_;
        if (local_res18.FrameNumber.Value == 0x80000000) {
          if ((int)param_1->_padding_ == 0) {
            pFVar7 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
            if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            pFVar7 = param_1;
            if (((char)param_1->_padding_ == '\x02') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          local_res18 = *(FFrameTime *)((longlong)&pFVar7->_padding_ + 4);
        }
        else {
          local_res18.SubFrame = 0.0;
        }
        fVar10 = UGeometryCacheComponent::GetDuration(this_00);
        fVar10 = FMovieSceneGeometryCacheSectionTemplateParameters::MapTimeToAnimation
                           (&this->Params,fVar10,local_res18,FVar1);
        UGeometryCacheComponent::TickAtThisTime
                  (this_00,fVar10,true,(bool)((byte)(this->Params)._padding_ & 1),true);
      }
    }
  }
  return;
}

// GeometryMeshComponentFromObject @ 14cd89310

/* WARNING: Type propagation algorithm not settling */

UGeometryCacheComponent * __cdecl
FGeometryCacheExecutionToken::GeometryMeshComponentFromObject(UObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UClass *pUVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  UGeometryCacheComponent *pUVar12;
  UGeometryCache *pUVar13;
  UObject *pUVar14;
  uint uVar15;
  int iVar16;
  UObject *pUVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  pUVar17 = (UObject *)0x0;
  uVar15 = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_AActor_NoRegister();
    iVar16 = (int)pUVar10->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar14 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
       &pUVar10->_padding_)) goto LAB_14cd89353;
  }
  pUVar14 = pUVar17;
LAB_14cd89353:
  if (pUVar14 == (UObject *)0x0) {
    if (param_1 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
      iVar16 = (int)pUVar10->_padding_;
      if ((iVar16 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
          &pUVar10->_padding_)) {
        pUVar13 = UGeometryCacheComponent::GetGeometryCache((UGeometryCacheComponent *)param_1);
        if (pUVar13 == (UGeometryCache *)0x0) {
          return (UGeometryCacheComponent *)0x0;
        }
        return (UGeometryCacheComponent *)param_1;
      }
    }
  }
  else {
    pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                          *)((longlong)(pUVar14 + 0xe) + 0x18));
    uVar19 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar7 = 1;
    uVar20 = 0;
    puVar1 = &(pTVar11->Elements).field_0x10;
    uVar8 = uVar15;
    if (uVar19 != 0) {
      puVar22 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar8 = *puVar22;
      pUVar14 = pUVar17;
      uVar15 = 0;
      uVar20 = 0;
      while (uVar8 == 0) {
        uVar15 = (int)pUVar17 + 1;
        pUVar17 = (UObject *)(ulonglong)uVar15;
        uVar20 = (int)pUVar14 + 0x20;
        pUVar14 = (UObject *)(ulonglong)uVar20;
        uVar8 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_14cd89402;
        uVar8 = puVar22[(int)uVar15];
      }
      uVar7 = ~(uVar8 - 1) & uVar8;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_res10 = (int)lVar4;
      uVar8 = local_res10 + -1 + uVar20;
      if ((int)uVar19 < (int)uVar8) {
        uVar8 = uVar19;
      }
    }
LAB_14cd89402:
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar9 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar7,uVar15);
    TStack_50.CurrentBitIndex = uVar8;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar9 >> 5;
    TStack_50._28_4_ = uVar8;
    TStack_50.BaseBitIndex = uVar20;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar9 < 0) || ((int)uVar19 < (int)uVar9)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
      return pUVar12;
    }
    uVar15 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar9 != uVar15) {
      puVar3 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      puVar21 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar21 = puVar3;
      }
      uVar19 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
      while (uVar19 == 0) {
        iVar16 = iVar16 + 1;
        uVar18 = uVar18 + 0x20;
        uVar9 = uVar15;
        if ((int)(((int)(uVar15 - 1) >> 0x1f & 0x1fU) + (uVar15 - 1)) >> 5 < iVar16)
        goto LAB_14cd89500;
        uVar19 = *(uint *)(puVar21 + (longlong)iVar16 * 4);
      }
      uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar9 = (int)lVar4 + -1 + uVar18;
      if ((int)uVar15 < (int)uVar9) {
        uVar9 = uVar15;
      }
    }
LAB_14cd89500:
    while( true ) {
      if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
          (int)uStack_30) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_50.CurrentBitIndex == uVar9) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar12 = *(UGeometryCacheComponent **)
                 (*(longlong *)&pTVar11->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
      if (pUVar12 != (UGeometryCacheComponent *)0x0) {
        pUVar10 = Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
        iVar16 = (int)pUVar10->_padding_;
        if ((iVar16 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
            &pUVar10->_padding_)) {
          return pUVar12;
        }
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return (UGeometryCacheComponent *)0x0;
}

