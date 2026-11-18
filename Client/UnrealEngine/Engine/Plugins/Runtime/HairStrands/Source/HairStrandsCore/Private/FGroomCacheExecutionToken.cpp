// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// Execute @ 14e0e6b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGroomCacheExecutionToken::Execute
          (FGroomCacheExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  UGroomCache *pUVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UGroomComponent *this_00;
  FMovieSceneAnimTypeID FVar6;
  FMovieSceneContext *pFVar7;
  FWeakObjectPtr *pFVar8;
  float fVar9;
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
      pUVar5 = FWeakObjectPtr::Get(&local_40);
      if (((pUVar5 != (UObject *)0x0) &&
          (this_00 = GroomComponentFromObject(pUVar5), this_00 != (UGroomComponent *)0x0)) &&
         ((this_00->field_0x98 & 1) != 0)) {
        pUVar1 = (UGroomCache *)(this->Params)._padding_;
        if ((pUVar1 == (UGroomCache *)0x0) || (pUVar1 == (this_00->GroomCache).field0_0x0.DebugPtr))
        {
          pUVar1 = (this_00->GroomCache).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UGroomCache *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar1);
          }
          (this->Params)._padding_ = (longlong)pUVar1;
        }
        else {
          UGroomComponent::SetGroomCache(this_00,pUVar1);
        }
        local_48 = (IMovieScenePreAnimatedTokenProducer)
                   &___7FPreAnimatedGroomCacheTokenProducer__6B_;
        FVar6.ID = TMovieSceneAnimTypeID<FPreAnimatedGroomCacheTokenProducer,0>::CachedID;
        if (TMovieSceneAnimTypeID<FPreAnimatedGroomCacheTokenProducer,0>::CachedID == 0) {
          FVar6.ID = FMovieSceneAnimTypeID::Initialize
                               (&TMovieSceneAnimTypeID<FPreAnimatedGroomCacheTokenProducer,0>::
                                 CachedID,0);
        }
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&param_4->PreAnimatedState,(UObject *)this_00,FVar6,&local_48);
        local_48 = (IMovieScenePreAnimatedTokenProducer)
                   &___7IMovieScenePreAnimatedTokenProducer__6B_;
        UGroomComponent::SetManualTick(this_00,true);
        local_res18.FrameNumber.Value = *(uint *)((longlong)&param_1->_padding_ + 4);
        FVar2 = (FFrameRate)param_1->_padding_;
        if (local_res18.FrameNumber.Value == 0x80000000) {
          if ((int)param_1->_padding_ == 0) {
            pFVar7 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
            if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            pFVar7 = param_1;
            if (((char)param_1->_padding_ == '\x02') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_res18 = *(FFrameTime *)((longlong)&pFVar7->_padding_ + 4);
        }
        else {
          local_res18.SubFrame = 0.0;
        }
        fVar9 = UGroomComponent::GetGroomCacheDuration(this_00);
        fVar9 = FMovieSceneGroomCacheSectionTemplateParameters::MapTimeToAnimation
                          (&this->Params,fVar9,local_res18,FVar2);
        UGroomComponent::TickAtThisTime
                  (this_00,fVar9,true,(bool)((byte)(this->Params)._padding_ & 1),true);
      }
    }
  }
  return;
}

// GroomComponentFromObject @ 14e0f13c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UGroomComponent * __cdecl FGroomCacheExecutionToken::GroomComponentFromObject(UObject *param_1)

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
  UGroomComponent *pUVar12;
  UObject *pUVar13;
  uint uVar14;
  int iVar15;
  UObject *pUVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  pUVar16 = (UObject *)0x0;
  uVar14 = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_AActor_NoRegister();
    iVar15 = (int)pUVar10->_padding_;
    if ((iVar15 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar13 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
       &pUVar10->_padding_)) goto LAB_14e0f1403;
  }
  pUVar13 = pUVar16;
LAB_14e0f1403:
  if (pUVar13 == (UObject *)0x0) {
    if (param_1 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_UGroomComponent_NoRegister();
      iVar15 = (int)pUVar10->_padding_;
      if ((iVar15 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar10->_padding_)) {
        if (*(longlong *)&param_1[0x24].field_0x8 == 0) {
          return (UGroomComponent *)0x0;
        }
        return (UGroomComponent *)param_1;
      }
    }
  }
  else {
    pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                          *)((longlong)(pUVar13 + 0xe) + 0x18));
    uVar18 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar7 = 1;
    uVar19 = 0;
    puVar1 = &(pTVar11->Elements).field_0x10;
    uVar8 = uVar14;
    if (uVar18 != 0) {
      puVar21 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar8 = *puVar21;
      pUVar13 = pUVar16;
      uVar14 = 0;
      uVar19 = 0;
      while (uVar8 == 0) {
        uVar14 = (int)pUVar16 + 1;
        pUVar16 = (UObject *)(ulonglong)uVar14;
        uVar19 = (int)pUVar13 + 0x20;
        pUVar13 = (UObject *)(ulonglong)uVar19;
        uVar8 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_14e0f14b2;
        uVar8 = puVar21[(int)uVar14];
      }
      uVar7 = ~(uVar8 - 1) & uVar8;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_res10 = (int)lVar4;
      uVar8 = local_res10 + -1 + uVar19;
      if ((int)uVar18 < (int)uVar8) {
        uVar8 = uVar18;
      }
    }
LAB_14e0f14b2:
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar17 = uVar9 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar7,uVar14);
    TStack_50.CurrentBitIndex = uVar8;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar9 >> 5;
    TStack_50._28_4_ = uVar8;
    TStack_50.BaseBitIndex = uVar19;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar9 < 0) || ((int)uVar18 < (int)uVar9)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UGroomComponent *)(*pcVar5)();
      return pUVar12;
    }
    uVar14 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar9 != uVar14) {
      puVar3 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      puVar20 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar20 = puVar3;
      }
      uVar18 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        iVar15 = iVar15 + 1;
        uVar17 = uVar17 + 0x20;
        uVar9 = uVar14;
        if ((int)(((int)(uVar14 - 1) >> 0x1f & 0x1fU) + (uVar14 - 1)) >> 5 < iVar15)
        goto LAB_14e0f15b0;
        uVar18 = *(uint *)(puVar20 + (longlong)iVar15 * 4);
      }
      uVar2 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar9 = (int)lVar4 + -1 + uVar17;
      if ((int)uVar14 < (int)uVar9) {
        uVar9 = uVar14;
      }
    }
LAB_14e0f15b0:
    while( true ) {
      if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
          (int)uStack_30) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_50.CurrentBitIndex == uVar9) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar12 = *(UGroomComponent **)
                 (*(longlong *)&pTVar11->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
      if (pUVar12 != (UGroomComponent *)0x0) {
        pUVar10 = Z_Construct_UClass_UGroomComponent_NoRegister();
        iVar15 = (int)pUVar10->_padding_;
        if ((iVar15 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar10->_padding_)) {
          return pUVar12;
        }
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return (UGroomComponent *)0x0;
}

