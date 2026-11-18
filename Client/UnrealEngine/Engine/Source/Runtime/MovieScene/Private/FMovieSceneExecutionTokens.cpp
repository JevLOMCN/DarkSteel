// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// ~FMovieSceneExecutionTokens @ 146185250

void __thiscall
FMovieSceneExecutionTokens::~FMovieSceneExecutionTokens(FMovieSceneExecutionTokens *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->Context).RootToSequenceWarpCounter._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieSceneBlendingAccumulator::~FMovieSceneBlendingAccumulator(&this->BlendingAccumulator);
  *(undefined4 *)&(this->SharedTokens).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SharedTokens).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SharedTokens);
  DestructItems<FMovieSceneExecutionTokens::FEntry,int>
            ((FEntry *)(this->OrderedTokens).AllocatorInstance.Data,(this->OrderedTokens).ArrayNum);
  pFVar1 = (this->OrderedTokens).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Apply @ 146193a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Apply
          (FMovieSceneExecutionTokens *this,FMovieSceneContext *param_1,IMovieScenePlayer *param_2)

{
  TMap<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  uint uVar6;
  FEntry *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  IMovieScenePlayer *pIVar11;
  bool bVar12;
  FMovieSceneEvaluationState *pFVar13;
  UObject *pUVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  int iVar23;
  undefined1 *puVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_1b8 [32];
  FIdentityFunctor local_168;
  undefined1 local_167 [7];
  ForAnyElementType local_160;
  int local_158;
  int iStack_154;
  uint local_150;
  IMovieScenePlayer *local_148;
  FPersistentEvaluationData local_140;
  FMovieSceneExecutionTokens *local_110;
  TMap<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>_>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  int local_d4;
  UObject *local_d0;
  undefined4 local_c8;
  FMovieSceneContext *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  FRootInstanceHandle FStack_ac;
  TMap<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  FRootInstanceHandle FStack_6c;
  undefined1 local_68;
  FRootInstanceHandle local_60;
  FWeakObjectPtr local_5c;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_140.EntityData =
       (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0;
  local_140.SharedData =
       (TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0;
  local_140.TrackKey.SequenceID.Value = 0xffffffff;
  local_140.TrackKey.TrackIdentifier.Value = 0xffffffff;
  local_140.TrackKey.SectionIndex = 0xffffffff;
  local_140.SectionKey.SequenceID.Value = 0xffffffff;
  local_140.SectionKey.TrackIdentifier.Value = 0xffffffff;
  local_140.SectionKey.SectionIndex = 0xffffffff;
  local_148 = param_2;
  local_140.Player = param_2;
  local_110 = this;
  local_c0 = param_1;
  pFVar13 = IMovieScenePlayer::GetEvaluationState(param_2);
  if (pFVar13 != (FMovieSceneEvaluationState *)0x0) {
    local_140.EntityData = &pFVar13->PersistentEntityData;
    local_140.SharedData = &pFVar13->PersistentSharedData;
  }
  pTVar1 = &this->SharedTokens;
  uVar22 = *(int *)&(this->SharedTokens).field_0x8 - *(int *)&(this->SharedTokens).field_0x34;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  iStack_154 = 0;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  iVar23 = 0;
  if (0 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar22,&local_160,0,&iStack_154);
  }
  iVar5 = *(int *)&(this->SharedTokens).field_0x28;
  puVar2 = &(this->SharedTokens).field_0x10;
  uStack_fc = 1;
  local_e8 = 0;
  iStack_ec = local_e8;
  if (iVar5 != 0) {
    puVar25 = *(uint **)&(this->SharedTokens).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar2;
    }
    uVar22 = *puVar25;
    local_e8 = 0;
    iVar23 = 0;
    while (uVar22 == 0) {
      lVar15 = (longlong)iVar23;
      local_e8 = local_e8 + 0x20;
      iVar23 = iVar23 + 1;
      iStack_ec = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_146193b5d;
      uVar22 = puVar25[lVar15 + 1];
    }
    uStack_fc = -uVar22 & uVar22;
    uVar19 = (ulonglong)uStack_fc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_d8 = (int)lVar15;
    iStack_ec = local_e8 + -1 + local_d8;
    if (iVar5 < iStack_ec) {
      iStack_ec = iVar5;
    }
  }
LAB_146193b5d:
  uVar22 = *(uint *)&(this->SharedTokens).field_0x28;
  iStack_e0 = *(int *)&(this->SharedTokens).field_0x8 - *(int *)&(this->SharedTokens).field_0x34;
  uVar20 = uVar22 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uStack_fc,iVar23);
  uStack_f0 = 0xffffffff;
  TStack_a0.CurrentBitIndex = iStack_ec;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar22 >> 5;
  TStack_a0._28_4_ = iStack_ec;
  TStack_a0.BaseBitIndex = local_e8;
  uStack_80 = CONCAT44(uStack_dc,iStack_e0);
  local_108 = pTVar1;
  iStack_100 = iVar23;
  local_f8 = puVar2;
  iStack_e4 = iStack_ec;
  local_a8 = pTVar1;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar22 < 0) || (iVar5 < (int)uVar22)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->SharedTokens).field_0x28;
  if (uVar22 != uVar6) {
    puVar24 = *(undefined1 **)&(this->SharedTokens).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar2;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar17 * 4);
    while (uVar22 == 0) {
      lVar15 = (longlong)iVar17;
      uVar20 = uVar20 + 0x20;
      iVar17 = iVar17 + 1;
      uVar22 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_146193c5d;
      uVar22 = *(uint *)(puVar24 + lVar15 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_d4 = (int)lVar15;
    uVar22 = local_d4 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar22) {
      uVar22 = uVar6;
    }
  }
LAB_146193c5d:
  while( true ) {
    pTVar1 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_167[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
    }
    if (((TStack_a0.CurrentBitIndex == uVar22) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar1 == &this->SharedTokens)) break;
    pTVar18 = (TInlineValue<IMovieSceneSharedExecutionToken,32,8> *)
              (*(longlong *)pTVar1 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x38);
    if (((local_160.Data <= pTVar18) &&
        (pTVar18 < (TInlineValue<IMovieSceneSharedExecutionToken,32,8> *)
                   (local_160.Data + (longlong)iStack_154 * 0x28))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_158 == iStack_154) {
      local_158 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_160,&iStack_154);
    }
    lVar15 = (longlong)local_158;
    local_158 = local_158 + 1;
    pFVar21 = local_160.Data + lVar15 * 0x28;
    FVar4 = local_160.Data[lVar15 * 0x28 + 0x20];
    pFVar21[0x20] = (FScriptContainerElement)((byte)FVar4 & 0xfe | 2);
    if (pTVar18->bIsValid) {
      pFVar21[0x20] = (FScriptContainerElement)((byte)FVar4 & 0xfe | 3);
      pTVar18->bIsValid = false;
      pFVar21[0x20] =
           (FScriptContainerElement)
           ((byte)pFVar21[0x20] ^ (pTVar18->field_0x20 ^ (byte)pFVar21[0x20]) & 2);
      uVar9 = *(undefined8 *)((pTVar18->Data).Pad + 8);
      *(undefined8 *)&pFVar21->field_0x0 = *(undefined8 *)(pTVar18->Data).Pad;
      *(undefined8 *)(pFVar21 + 8) = uVar9;
      uVar9 = *(undefined8 *)((pTVar18->Data).Pad + 0x18);
      *(undefined8 *)(pFVar21 + 0x10) = *(undefined8 *)((pTVar18->Data).Pad + 0x10);
      *(undefined8 *)(pFVar21 + 0x18) = uVar9;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  AlgoImpl::
  IntroSortInternal<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int,FIdentityFunctor,bool_(__cdecl*)(TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&)>
            ((TInlineValue<IMovieSceneSharedExecutionToken,32,8> *)local_160.Data,local_158,
             local_168,SortTokens);
  uVar20 = 0;
  local_150 = 0;
  uVar22 = local_150;
  if (0 < local_158) {
    lVar15 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar20 < local_158) {
        uVar22 = ~uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar21 = local_160.Data + lVar15;
      if ((((byte)pFVar21[0x20] & 1) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsValid",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                              ,0x97,
                              L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((byte)pFVar21[0x20] & 2) == 0) {
        pFVar21 = *(FScriptContainerElement **)pFVar21;
      }
      uVar22 = uVar20;
      if (0 < *(int *)(pFVar21 + 8)) break;
      (**(code **)(*(longlong *)pFVar21 + 8))(pFVar21,&local_140);
      uVar20 = uVar20 + 1;
      lVar15 = lVar15 + 0x28;
      uVar22 = uVar20;
    } while ((int)uVar20 < local_158);
  }
  local_150 = uVar22;
  uVar10 = _tls_index;
  pFVar27 = (this->OrderedTokens).AllocatorInstance.Data;
  iVar23 = (this->OrderedTokens).ArrayNum;
  pFVar21 = pFVar27 + 0x14;
  pFVar26 = pFVar27 + (longlong)iVar23 * 0xf0;
  while( true ) {
    if ((this->OrderedTokens).ArrayNum != iVar23) {
      local_168 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FMovieSceneExecutionTokens::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_168);
    }
    if (pFVar27 == pFVar26) break;
    local_c8 = *(undefined4 *)(pFVar21 + 8);
    local_140.TrackKey._0_8_ = *(undefined8 *)pFVar21;
    local_140.TrackKey.SectionIndex = 0xffffffff;
    local_140.SectionKey.SequenceID.Value = (uint)*(undefined8 *)pFVar21;
    local_140.SectionKey.TrackIdentifier.Value = (uint)((ulonglong)*(undefined8 *)pFVar21 >> 0x20);
    local_140.SectionKey.SectionIndex = *(uint *)(pFVar21 + 8);
    uStack_b0 = *(undefined4 *)(pFVar21 + 8);
    local_b8 = *(undefined4 *)pFVar21;
    uStack_b4 = *(undefined4 *)(pFVar21 + 4);
    FVar4 = pFVar21[0xc];
    FStack_ac = (local_148->PreAnimatedState).InstanceHandle;
    local_68 = 0;
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    FStack_6c = FStack_ac;
    local_60 = FStack_ac;
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_148->PreAnimatedState);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    local_5c.ObjectIndex = 0;
    local_5c.ObjectSerialNumber = 0;
    local_d0 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FWeakObjectPtr::operator=(&local_5c,(FObjectPtr)&local_d0);
    local_48 = FVar4 == (FScriptContainerElement)0x1;
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar10 * 8);
    local_50 = *(undefined8 *)(lVar15 + 0xee8);
    *(undefined4 **)(lVar15 + 0xee8) = &local_78;
    if ((((byte)pFVar21[0xd4] & 1) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("bIsValid",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                            ,0x97,
                            L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = pFVar21 + 0x94;
    if (((byte)pFVar21[0xd4] & 2) == 0) {
      pFVar16 = *(FScriptContainerElement **)pFVar16;
    }
    (**(code **)(*(longlong *)pFVar16 + 8))(pFVar16,pFVar21 + 0x14,pFVar27,&local_140);
    pFVar27 = pFVar27 + 0xf0;
    pFVar21 = pFVar21 + 0xf0;
    *(undefined8 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar10 * 8) + 0xee8) = local_50
    ;
    this = local_110;
  }
  piVar3 = &(this->OrderedTokens).ArrayMax;
  pFVar7 = (FEntry *)(this->OrderedTokens).AllocatorInstance.Data;
  iVar23 = (this->OrderedTokens).ArrayNum;
  if ((this->OrderedTokens).ArrayMax < 0) {
    DestructItems<FMovieSceneExecutionTokens::FEntry,int>(pFVar7,iVar23);
    (this->OrderedTokens).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,0,(ForAnyElementType *)this,0,piVar3);
    }
  }
  else {
    DestructItems<FMovieSceneExecutionTokens::FEntry,int>(pFVar7,iVar23);
    (this->OrderedTokens).ArrayNum = 0;
  }
  pIVar11 = local_148;
  uVar19 = (ulonglong)(int)local_150;
  local_140.SectionKey.SequenceID.Value = 0xffffffff;
  local_140.SectionKey.TrackIdentifier.Value = 0xffffffff;
  local_140.SectionKey.SectionIndex = 0xffffffff;
  local_140.TrackKey.SequenceID.Value = 0xffffffff;
  local_140.TrackKey.TrackIdentifier.Value = 0xffffffff;
  local_140.TrackKey.SectionIndex = 0xffffffff;
  if ((int)local_150 < local_158) {
    lVar15 = uVar19 * 0x28;
    do {
      uVar20 = (uint)uVar19;
      uVar22 = 0;
      if ((int)uVar20 < local_158) {
        uVar22 = ~uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = (ulonglong)(uVar20 + 1);
      pFVar21 = local_160.Data + lVar15;
      lVar15 = lVar15 + 0x28;
      if ((((byte)pFVar21[0x20] & 1) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsValid",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                              ,0x97,
                              L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((byte)pFVar21[0x20] & 2) == 0) {
        pFVar21 = *(FScriptContainerElement **)pFVar21;
      }
      (**(code **)(*(longlong *)pFVar21 + 8))(pFVar21,&local_140,pIVar11);
      this = local_110;
    } while ((int)(uVar20 + 1) < local_158);
  }
  TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
           *)&this->SharedTokens);
  FMovieSceneBlendingAccumulator::Apply(&this->BlendingAccumulator,local_c0,&local_140,local_148);
  DestructItems<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int>
            ((TInlineValue<IMovieSceneSharedExecutionToken,32,8> *)local_160.Data,local_158);
  if ((TInlineValue<IMovieSceneSharedExecutionToken,32,8> *)local_160.Data !=
      (TInlineValue<IMovieSceneSharedExecutionToken,32,8> *)0x0) {
    FMemory::Free(local_160.Data);
  }
  return;
}

