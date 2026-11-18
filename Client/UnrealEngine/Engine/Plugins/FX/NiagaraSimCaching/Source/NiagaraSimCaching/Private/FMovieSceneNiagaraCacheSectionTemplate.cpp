// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 5

// StaticStruct @ 14ea1fed0

UScriptStruct * __cdecl FMovieSceneNiagaraCacheSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.OuterSingleton;
}

// SetupOverrides @ 14ea1ff10

void __thiscall
FMovieSceneNiagaraCacheSectionTemplate::SetupOverrides(FMovieSceneNiagaraCacheSectionTemplate *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  return;
}

// GetScriptStructImpl @ 14ea1ff20

UScriptStruct * __thiscall
FMovieSceneNiagaraCacheSectionTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraCacheSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.OuterSingleton;
}

// Evaluate @ 14ea1ff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FMovieSceneNiagaraCacheSectionTemplate::Evaluate
          (FMovieSceneNiagaraCacheSectionTemplate *this,FMovieSceneEvaluationTrack *param_1,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_2,
          FMovieSceneEvaluationOperand *param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,FMovieSceneExecutionTokens *param_6)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  char *pcVar5;
  undefined1 uVar6;
  uchar uVar7;
  FMovieSceneNestedSequenceTransform *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  FFrameNumber FVar11;
  FMovieSceneSharedDataId FVar12;
  FMovieSceneEvaluationOperand *pFVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  ulong64 uVar20;
  ulonglong uVar21;
  byte bVar22;
  TRangeBound<FFrameNumber> *pTVar23;
  ForElementType<FSetElementId> FVar24;
  TSparseSetElement<FGuid> *pTVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  TSparseSetElement<FGuid> *pTVar30;
  FFrameNumber *pFVar31;
  uint uVar32;
  TRangeBound<FFrameNumber> *pTVar33;
  undefined8 *puVar34;
  uint uVar35;
  ForElementType<unsigned_int> FVar36;
  ENiagaraSimCacheSectionPlayMode EVar37;
  FMovieSceneContext *pFVar38;
  TRangeBound<FFrameNumber> *pTVar39;
  undefined1 auStackY_398 [32];
  undefined1 local_358 [4];
  int local_354;
  uint local_350;
  uint local_348;
  uint uStack_344;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_340;
  undefined4 local_338;
  undefined8 uStack_334;
  undefined4 uStack_32c;
  TRangeBound<FFrameNumber> local_328;
  TRangeBound<FFrameNumber> local_320;
  FMovieSceneNiagaraCacheSectionTemplate *local_318;
  FMovieSceneEvaluationOperand *local_310;
  longlong *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_300;
  FGuid local_2e0;
  TRangeBound<FFrameNumber> *local_2d0;
  FSparseArrayAllocationInfo local_2c8;
  FNiagaraCacheResetToken local_2b8 [2];
  TRangeBound<FFrameNumber> local_2a8;
  TRangeBound<FFrameNumber> TStack_2a0;
  FMovieSceneNiagaraCacheParams local_298;
  char local_210;
  FNiagaraCacheExecutionToken local_208;
  FNiagaraCacheExecutionToken local_158;
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  uchar auStack_80 [8];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  ForElementType<FSetElementId> local_60;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_318 = this;
  local_310 = param_3;
  pUVar18 = FWeakObjectPtr::Get(&(param_1->SourceTrack).WeakPtr);
  if (pUVar18 == (UObject *)0x0) {
    return;
  }
  pUVar19 = UMovieSceneNiagaraCacheTrack::StaticClass();
  iVar16 = (int)pUVar19->_padding_;
  if (*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar16) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
      &pUVar19->_padding_) {
    return;
  }
  if (pUVar18[7].field_0x10 != '\0') {
    return;
  }
  lVar26 = param_4->_padding_;
  pTVar3 = &(param_6->Context).RootToSequenceTransform.NestedTransforms;
  (param_6->Context)._padding_ = param_4->_padding_;
  (param_6->Context)._padding_ = lVar26;
  lVar26 = param_4->_padding_;
  pTVar1 = &(param_4->RootToSequenceTransform).NestedTransforms;
  (param_6->Context)._padding_ = param_4->_padding_;
  (param_6->Context)._padding_ = lVar26;
  (param_6->Context)._padding_ = param_4->_padding_;
  FVar11.Value = (param_4->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (param_6->Context).RootToSequenceTransform.LinearTransform.TimeScale =
       (param_4->RootToSequenceTransform).LinearTransform.TimeScale;
  (param_6->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
       (FFrameNumber)FVar11.Value;
  (param_6->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
       (param_4->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  if (pTVar3 != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)(pTVar3->AllocatorInstance).Data,
               (param_6->Context).RootToSequenceTransform.NestedTransforms.ArrayNum);
    iVar16 = (param_4->RootToSequenceTransform).NestedTransforms.ArrayNum;
    piVar2 = &(param_6->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
    pFVar8 = (FMovieSceneNestedSequenceTransform *)(pTVar1->AllocatorInstance).Data;
    iVar17 = *piVar2;
    (param_6->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar16;
    if ((iVar16 == 0) && (iVar17 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar16,iVar17,&pTVar3->AllocatorInstance,iVar16,piVar2);
      ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                ((pTVar3->AllocatorInstance).Data,pFVar8,iVar16);
    }
  }
  FMovieSceneWarpCounter::operator=
            (&(param_6->Context).RootToSequenceWarpCounter,&param_4->RootToSequenceWarpCounter);
  bVar15 = false;
  (param_6->Context).Status = param_4->Status;
  EVar37 = DisplayCacheOnly;
  (param_6->Context).PrePostRollStartEndTime.Value = (param_4->PrePostRollStartEndTime).Value;
  (param_6->Context).HierarchicalBias = param_4->HierarchicalBias;
  uVar6 = (param_6->Context).field_0x7c;
  local_210 = '\0';
  bVar22 = ((param_6->Context).bHasJumped ^ param_4->bHasJumped) & 1U ^ uVar6;
  (param_6->Context).field_0x7c = bVar22;
  bVar22 = (bVar22 ^ param_4->field_0x7c) & 2 ^ bVar22;
  (param_6->Context).field_0x7c = bVar22;
  bVar22 = (bVar22 ^ param_4->field_0x7c) & 4 ^ bVar22;
  (param_6->Context).field_0x7c = bVar22;
  bVar22 = (bVar22 ^ param_4->field_0x7c) & 8 ^ bVar22;
  (param_6->Context).field_0x7c = bVar22;
  bVar22 = (bVar22 ^ param_4->field_0x7c) & 0x10 ^ bVar22;
  (param_6->Context).field_0x7c = bVar22;
  bVar22 = (bVar22 ^ param_4->field_0x7c) & 0x20 ^ bVar22;
  (param_6->Context).field_0x7c = bVar22;
  (param_6->Context).field_0x7c = (bVar22 ^ param_4->field_0x7c) & 0x40 ^ bVar22;
  local_350 = (local_318->CacheSections).ArrayNum;
  uVar28 = (ulonglong)(int)local_350;
  pTVar33 = (TRangeBound<FFrameNumber> *)(local_318->CacheSections).AllocatorInstance.Data;
  pFVar31 = &pTVar33[1].Value;
  pTVar39 = pTVar33 + uVar28 * 0x13;
  local_2d0 = pTVar39;
  do {
    if ((local_318->CacheSections).ArrayNum != (int)uVar28) {
      local_358[0] = 0;
      `TCheckedPointerIterator<FMovieSceneNiagaraSectionTemplateParameter_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_358);
    }
    if (pTVar33 == pTVar39) goto LAB_14ea20334;
    if ((*(longlong *)(pFVar31 + 0x1f) == 0) ||
       (*(longlong *)(*(longlong *)(pFVar31 + 0x1f) + 0x40) == 0)) {
      bVar22 = 0;
    }
    else {
      bVar22 = 1;
    }
    EVar37 = *(ENiagaraSimCacheSectionPlayMode *)((longlong)(pFVar31 + 0x21) + 3);
    bVar15 = (bool)(bVar15 | bVar22);
    uVar35 = *(uint *)((longlong)&param_4->_padding_ + 4);
    if (uVar35 == 0x80000000) {
      if ((int)param_4->_padding_ == 0) {
        pFVar38 = (FMovieSceneContext *)((longlong)&param_4->_padding_ + 4);
        if ((*(char *)((longlong)&param_4->_padding_ + 4) == '\x02') &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else {
        pFVar38 = param_4;
        if (((char)param_4->_padding_ == '\x02') &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar28 = *(ulonglong *)((longlong)&pFVar38->_padding_ + 4);
      uVar35 = (uint)uVar28;
      local_2e0.B = (int)uVar28;
      local_2e0.C = (int)(uVar28 >> 0x20);
      pTVar39 = local_2d0;
    }
    else {
      uVar28 = (ulonglong)uVar35;
    }
    uVar7 = (pTVar33->Type).Value;
    local_328.Type.Value = '\x01';
    local_328.Value.Value = uVar35;
    pTVar23 = pTVar33;
    if ((uVar7 == '\x02') || (iVar16 = pFVar31[-2].Value, iVar16 < (int)uVar28)) {
LAB_14ea20291:
      if (((pTVar23->Type).Value == '\x02') || ((pTVar23->Value).Value == pFVar31[-2].Value)) {
        uVar7 = (((TRangeBound<FFrameNumber> *)(pFVar31 + -1))->Type).Value;
        pTVar23 = (TRangeBound<FFrameNumber> *)(pFVar31 + -1);
        local_320.Type.Value = '\x01';
        local_320.Value.Value = uVar35;
        if ((uVar7 != '\x02') && (pFVar31->Value <= (int)uVar35)) {
          if (pFVar31->Value < (int)uVar35) {
            pTVar23 = &local_320;
          }
          if (uVar7 != '\x01') goto LAB_14ea202d6;
        }
        if ((((pTVar23->Type).Value == '\x02') || ((pTVar23->Value).Value == pFVar31->Value)) &&
           (*(longlong *)(pFVar31 + 0x1f) != 0)) break;
      }
    }
    else {
      if ((int)uVar35 < iVar16) {
        pTVar23 = &local_328;
      }
      if (uVar7 == '\x01') goto LAB_14ea20291;
    }
LAB_14ea202d6:
    pTVar33 = pTVar33 + 0x13;
    uVar28 = (ulonglong)local_350;
    pFVar31 = pFVar31 + 0x26;
  } while( true );
  if (pTVar33 != &local_2a8) {
    if (local_210 != '\0') {
      FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams(&local_298);
    }
    local_2a8 = *pTVar33;
    TStack_2a0 = pTVar33[1];
    FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
              (&local_298,(FMovieSceneNiagaraCacheParams *)(pTVar33 + 2));
    local_210 = '\x01';
  }
LAB_14ea20334:
  pFVar13 = local_310;
  FVar12.UniqueId = UMovieSceneNiagaraSystemTrack::SharedDataId.UniqueId;
  if (!bVar15) {
    FMovieSceneExecutionTokens::Add<FNiagaraCacheResetToken>(param_6,local_2b8);
    goto LAB_14ea209ba;
  }
  if (*(int *)&(param_6->SharedTokens).field_0x8 != *(int *)&(param_6->SharedTokens).field_0x34) {
    puVar29 = *(undefined1 **)&(param_6->SharedTokens).field_0x40;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = &(param_6->SharedTokens).field_0x38;
    }
    iVar16 = *(int *)(puVar29 +
                     (ulonglong)
                     (*(int *)&(param_6->SharedTokens).field_0x48 - 1U &
                     UMovieSceneNiagaraSystemTrack::SharedDataId.UniqueId) * 4);
    if (iVar16 != -1) {
      lVar26 = *(longlong *)&param_6->SharedTokens;
      do {
        if (*(uint *)((longlong)iVar16 * 0x38 + lVar26) ==
            UMovieSceneNiagaraSystemTrack::SharedDataId.UniqueId) {
          if (((iVar16 != -1) && (lVar26 = (longlong)iVar16 * 0x38 + lVar26, lVar26 != 0)) &&
             ((puVar34 = (undefined8 *)(lVar26 + 8), puVar34 != (undefined8 *)0x0 &&
              ((*(byte *)(lVar26 + 0x28) & 1) != 0)))) {
            if ((*(byte *)(lVar26 + 0x28) & 2) == 0) {
              puVar34 = (undefined8 *)*puVar34;
            }
            goto LAB_14ea203a1;
          }
          break;
        }
        iVar16 = *(int *)((longlong)iVar16 * 0x38 + 0x30 + lVar26);
      } while (iVar16 != -1);
    }
  }
  puVar34 = (undefined8 *)0x0;
LAB_14ea203a1:
  pTVar25 = (TSparseSetElement<FGuid> *)0x0;
  if (puVar34 != (undefined8 *)0x0) {
    uVar20 = CityHash64((char *)local_310,0x10);
    iVar16 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                       ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(puVar34 + 2),
                        (uint)uVar20,&pFVar13->ObjectBindingID);
    if (iVar16 == -1) {
      local_158._padding_ = (longlong)&___7FNiagaraCacheExecutionToken__6B_;
      local_158.CacheSection.bIsSet = (bool)local_210;
      if (local_210 != '\0') {
        local_158.CacheSection.TypedValue.SectionRange.Value.LowerBound = local_2a8;
        local_158.CacheSection.TypedValue.SectionRange.Value.UpperBound = TStack_2a0;
        FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
                  (&local_158.CacheSection.TypedValue.Params,&local_298);
      }
      local_158.ReplayMode = EVar37;
      FMovieSceneExecutionTokens::Add<FNiagaraCacheExecutionToken>(param_6,&local_158);
      if (local_158.CacheSection.bIsSet != false) {
        FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams
                  (&local_158.CacheSection.TypedValue.Params);
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(puVar34 + 2),
                 &local_2e0,(bool *)pFVar13);
    }
    goto LAB_14ea209ba;
  }
  local_208._padding_ = (longlong)&___7FNiagaraCacheExecutionToken__6B_;
  local_208.CacheSection.bIsSet = (bool)local_210;
  if (local_210 != '\0') {
    local_208.CacheSection.TypedValue.SectionRange.Value.LowerBound = local_2a8;
    local_208.CacheSection.TypedValue.SectionRange.Value.UpperBound = TStack_2a0;
    FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
              (&local_208.CacheSection.TypedValue.Params,&local_298);
  }
  local_208.ReplayMode = EVar37;
  FMovieSceneExecutionTokens::Add<FNiagaraCacheExecutionToken>(param_6,&local_208);
  if (local_208.CacheSection.bIsSet != false) {
    FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams
              (&local_208.CacheSection.TypedValue.Params);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_60.InlineData[0] = '\0';
  local_60.InlineData[1] = '\0';
  local_60.InlineData[2] = '\0';
  local_60.InlineData[3] = '\0';
  local_60._padding_ = 0;
  local_50 = 0;
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  auStack_80[0] = '\0';
  auStack_80[1] = '\0';
  auStack_80[2] = '\0';
  auStack_80[3] = '\0';
  auStack_80[4] = '\0';
  auStack_80[5] = '\0';
  auStack_80[6] = '\0';
  auStack_80[7] = '\0';
  local_a8._0_8_ = &___7FNiagaraSharedMarkerToken__6B_;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  uVar35 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                      (int *)(local_98 + 0xc));
  iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                     ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
  FVar36 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FVar36 = local_78;
  }
  uVar27 = iVar17 >> 0x1f & 0x1f;
  iVar17 = iVar17 + uVar27;
  puVar4 = (uint *)((longlong)FVar36 + (longlong)(iVar17 >> 5) * 4);
  *puVar4 = *puVar4 & ~(1 << (((byte)iVar17 & 0x1f) - (char)uVar27 & 0x1f));
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_2c8,iVar16);
  pTVar30 = pTVar25;
  if (local_2c8.Pointer != (TSparseSetElement<FGuid> *)0x0) {
    uVar10 = *(undefined8 *)&(local_310->ObjectBindingID).C;
    *(undefined8 *)local_2c8.Pointer = *(undefined8 *)&local_310->ObjectBindingID;
    *(undefined8 *)((longlong)local_2c8.Pointer + 8) = uVar10;
    *(undefined4 *)((longlong)local_2c8.Pointer + 0x10) = 0xffffffff;
    pTVar30 = local_2c8.Pointer;
  }
  local_354 = local_2c8.Index;
  uVar20 = CityHash64((char *)pTVar30,0x10);
  bVar15 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::TryReplaceExisting
                     ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_98,
                      (uint)uVar20,pTVar30,&local_354,(bool *)0x0);
  if (!bVar15) {
    uVar32 = 1;
    uVar27 = local_98._8_4_ - local_64;
    if (3 < uVar27) {
      uVar28 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar32 = 1 << ((byte)lVar26 & 0x1f);
    }
    if (((int)uVar27 < 1) || ((int)uVar32 <= (int)local_50)) {
      uVar35 = (int)local_50 - 1U & (uint)uVar20;
      *(uint *)&pTVar30->field_0x14 = uVar35;
      FVar24 = (ForElementType<FSetElementId>)&local_60;
      if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar24 = local_60.SecondaryData;
      }
      lVar26 = (longlong)(int)((int)local_50 - 1U & uVar35);
      *(undefined4 *)&pTVar30->field_0x10 = *(undefined4 *)((longlong)FVar24 + lVar26 * 4);
      *(int *)((longlong)FVar24 + lVar26 * 4) = local_354;
    }
    else {
      local_50 = CONCAT44(local_50._4_4_,uVar32);
      if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60.SecondaryData,0,0,4);
      }
      if (uVar32 != 0) {
        uVar27 = uVar32;
        if (uVar32 < 2) {
          if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar27 = 0;
            goto LAB_14ea2062b;
          }
        }
        else {
LAB_14ea2062b:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_60.SecondaryData,0,uVar27,4);
        }
        if (0 < (int)uVar32) {
          uVar28 = (ulonglong)uVar32;
          pTVar30 = pTVar25;
          do {
            FVar24 = (ForElementType<FSetElementId>)&local_60;
            if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar24 = local_60.SecondaryData;
            }
            uVar21 = (ulonglong)pTVar30 & (longlong)(int)uVar32 - 1U;
            pTVar30 = (TSparseSetElement<FGuid> *)&pTVar30->field_0x1;
            *(undefined4 *)((longlong)FVar24 + uVar21 * 4) = 0xffffffff;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
      }
      if ((int)local_50 != 0) {
        pTStack_340 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_348 = 0;
        uStack_344 = 1;
        uStack_334 = 0;
        if (local_70 != 0) {
          FVar36 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar36 = local_78;
          }
          uVar27 = *(uint *)FVar36;
          pTVar30 = pTVar25;
          while (uVar27 == 0) {
            uVar35 = (int)pTVar30 + 0x20;
            pTVar30 = (TSparseSetElement<FGuid> *)(ulonglong)uVar35;
            iVar16 = (int)pTVar25;
            local_348 = iVar16 + 1;
            pTVar25 = (TSparseSetElement<FGuid> *)(ulonglong)local_348;
            uStack_334 = (ulonglong)uVar35 << 0x20;
            if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_348) {
              uStack_334 = CONCAT44(uVar35,local_70);
              goto LAB_14ea20752;
            }
            uVar27 = ((uint *)((longlong)FVar36 + 4))[iVar16];
          }
          uStack_344 = -uVar27 & uVar27;
          uVar28 = (ulonglong)uStack_344 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar16 = (uVar35 - 1) + (int)lVar26;
          if (local_70 < iVar16) {
            iVar16 = local_70;
          }
          uStack_334._4_4_ = (int)((ulonglong)uStack_334 >> 0x20);
          uStack_334 = CONCAT44(uStack_334._4_4_,iVar16);
        }
LAB_14ea20752:
        local_338 = 0xffffffff;
        local_308 = (longlong *)local_98;
        local_300._padding_ = CONCAT44(uStack_344,local_348);
        local_300.Array = pTStack_340;
        local_300.UnvisitedBitMask = 0xffffffff;
        local_300.CurrentBitIndex = (int)uStack_334;
        local_300.BaseBitIndex = uStack_334._4_4_;
        local_300._28_4_ = uStack_32c;
        if ((int)uStack_334 < local_70) {
          do {
            iVar16 = local_300.CurrentBitIndex;
            pcVar5 = (char *)(*local_308 + (longlong)local_300.CurrentBitIndex * 0x18);
            uVar20 = CityHash64(pcVar5,0x10);
            uVar35 = (int)local_50 - 1U & (uint)uVar20;
            *(uint *)(pcVar5 + 0x14) = uVar35;
            FVar24 = (ForElementType<FSetElementId>)&local_60;
            if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar24 = local_60.SecondaryData;
            }
            lVar26 = (longlong)(int)((int)local_50 - 1U & uVar35);
            *(undefined4 *)(pcVar5 + 0x10) = *(undefined4 *)((longlong)FVar24 + lVar26 * 4);
            *(int *)((longlong)FVar24 + lVar26 * 4) = iVar16;
            local_300.UnvisitedBitMask = local_300.UnvisitedBitMask & ~local_300._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_300);
          } while (local_300.CurrentBitIndex < (local_300.Array)->NumBits);
        }
      }
    }
  }
  FMovieSceneExecutionTokens::AddShared<FNiagaraSharedMarkerToken_&>
            (param_6,FVar12,(FNiagaraSharedMarkerToken *)local_a8);
  local_50 = local_50 & 0xffffffff00000000;
  if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  bVar15 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
LAB_14ea209ba:
  if (local_210 != '\0') {
    FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams(&local_298);
  }
  return;
}

// FMovieSceneNiagaraCacheSectionTemplate @ 14ea22790

FMovieSceneNiagaraCacheSectionTemplate * __thiscall
FMovieSceneNiagaraCacheSectionTemplate::FMovieSceneNiagaraCacheSectionTemplate
          (FMovieSceneNiagaraCacheSectionTemplate *this,
          TArray<FMovieSceneNiagaraSectionTemplateParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FMovieSceneNiagaraSectionTemplateParameter,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMovieSceneNiagaraSectionTemplateParameter *pFVar4;
  FScriptContainerElement *pFVar5;
  
  *(undefined1 *)&this->_padding_ = 0;
  pTVar1 = &this->CacheSections;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraCacheSectionTemplate__6B_;
  piVar2 = &(this->CacheSections).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (FMovieSceneNiagaraSectionTemplateParameter *)(param_1->AllocatorInstance).Data;
  (this->CacheSections).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FMovieSceneNiagaraSectionTemplateParameter,FMovieSceneNiagaraSectionTemplateParameter,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
            ((FMovieSceneNiagaraSectionTemplateParameter *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this;
}

