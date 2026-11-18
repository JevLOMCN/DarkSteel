// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 8

// StaticStruct @ 14ea62be0

UScriptStruct * __cdecl FMovieSceneMediaSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaCompositing();
    Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate,(UObject *)pUVar1
                         ,L"MovieSceneMediaSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.OuterSingleton;
}

// Evaluate @ 14ea62c20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMovieSceneMediaSectionTemplate::Evaluate
          (FMovieSceneMediaSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  UMediaSource *pUVar3;
  UMovieSceneMediaSection *pUVar4;
  code *pcVar5;
  FFrameRate FVar6;
  FFrameRate FVar7;
  undefined8 uVar8;
  bool bVar9;
  TEnumAsByte<ERangeBoundTypes::Type> TVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FMovieSceneMediaPlaybackParams *pFVar15;
  FFrameTime FVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  FTimespan *pFVar19;
  FTimespan *pFVar20;
  uchar uVar21;
  ulonglong uVar22;
  Type TVar23;
  int iVar24;
  FMovieSceneContext *pFVar25;
  longlong lVar26;
  float fVar27;
  char local_res8 [8];
  undefined1 local_268 [16];
  TRangeBound<FTimespan> TStack_258;
  TRangeBound<FTimespan> TStack_248;
  long64 lStack_238;
  FMediaSourceCacheSettings local_230;
  int local_228;
  uint local_220;
  undefined4 uStack_21c;
  uint local_218;
  undefined4 uStack_214;
  uint local_210;
  undefined4 uStack_20c;
  FMediaSourceCacheSettings local_208;
  uint local_200;
  Type local_1f8 [2];
  FTimespan local_1f0;
  int local_1e8 [2];
  FTimespan local_1e0;
  undefined1 local_1d8;
  FTimespan local_1d0;
  undefined1 local_1c8;
  FTimespan local_1c0;
  undefined1 local_1b8;
  uint7 uStack_1b7;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  uint7 uStack_1a7;
  undefined8 uStack_1a0;
  FMediaSectionPostRollExecutionToken local_198 [3];
  FMediaSectionExecutionToken local_180;
  FMediaSectionPreRollExecutionToken local_108;
  FMovieSceneMediaPlaybackParams local_98;
  FMovieSceneMediaPlaybackParams local_68;
  
  pUVar3 = (this->Params).MediaSource.field0_0x0.DebugPtr;
  if ((pUVar3 == (UMediaSource *)0x0) &&
     ((((this->Params).MediaSourceProxy.Guid.D == 0 && (this->Params).MediaSourceProxy.Guid.C == 0)
      && (this->Params).MediaSourceProxy.Guid.B == 0) && (this->Params).MediaSourceProxy.Guid.A == 0
     )) {
    return;
  }
  pUVar4 = (this->MediaSection).field0_0x0.DebugPtr;
  local_res8[0] = '\x01';
  pcVar5 = *(code **)((pUVar4->ChannelCanPlayerBeOpen)._padding_ + 0xa0);
  uVar12 = *(uint *)((longlong)&param_2->_padding_ + 4);
  if (uVar12 == 0x80000000) {
    if ((int)param_2->_padding_ == 0) {
      pFVar25 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
      if ((*(char *)((longlong)&param_2->_padding_ + 4) == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar25 = param_2;
      if (((char)param_2->_padding_ == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar22 = *(ulonglong *)((longlong)&pFVar25->_padding_ + 4);
  }
  else {
    uStack_21c = 0;
    uVar22 = (ulonglong)uVar12;
    local_220 = uVar12;
  }
  (*pcVar5)(&pUVar4->ChannelCanPlayerBeOpen,uVar22,local_res8);
  UE::MediaSectionBaseMediaUtils::GetAlignedFrameRate
            ((FMovieSceneContext *)local_268,(UMovieSceneMediaSection *)param_2,
             (FPersistentEvaluationData *)(this->MediaSection).field0_0x0.DebugPtr);
  if (((bool)param_2->bSectionPreRoll || (bool)param_2->bHasPreRollEndTime) &&
     (local_res8[0] != '\0')) {
    uVar12 = (this->Params).StartFrameOffset.Value;
    if (param_2->bHasPreRollEndTime) {
      uVar12 = ((param_2->PrePostRollStartEndTime).Value - (this->Params).SectionStartFrame.Value) +
               uVar12;
    }
    lVar14 = 0;
    TVar23 = Stopped;
    if (((int)param_2->_padding_ != 0) && (local_268._4_4_ != 0)) {
      uStack_214 = 0;
      FVar6.Denominator = 0;
      FVar6.Numerator = uVar12;
      local_218 = uVar12;
      ConvertFrameTime((FFrameTime)local_1f8,FVar6,(FFrameRate)param_2->_padding_);
      TVar23 = local_1f8[0];
    }
    lVar26 = lVar14;
    if (local_268._0_4_ != 0) {
      lVar26 = (longlong)(int)local_268._0_4_;
      lVar14 = ((longlong)(int)(TVar23 + Playing) * (longlong)(int)local_268._4_4_ * 10000000 + -1 +
               lVar26) / lVar26;
      lVar26 = ((longlong)(int)local_268._4_4_ * (longlong)(int)TVar23 * 10000000 + -1 + lVar26) /
               lVar26;
    }
    local_200 = local_200 & 0xffffff00;
    lVar14 = (lVar14 - lVar26) + -1;
    local_1f0.Ticks = 1;
    if (1 < lVar14) {
      local_1f0.Ticks = lVar14;
    }
    local_208 = (this->Params).CacheSettings;
    pFVar15 = UE::MediaSectionBaseMediaUtils::MakePlaybackParams
                        (&local_98,param_2,&this->Params,(this->MediaSection).field0_0x0.DebugPtr,
                         &local_1f0);
    local_108._padding_._0_4_ = (this->Params).MediaSourceProxyIndex;
    local_108._padding_._0_4_ = (this->Params).MediaSourceProxy.Guid.A;
    local_108._padding_._4_4_ = (this->Params).MediaSourceProxy.Guid.B;
    local_108._padding_._0_4_ = (this->Params).MediaSourceProxy.Guid.C;
    local_108._padding_._4_4_ = (this->Params).MediaSourceProxy.Guid.D;
    local_108._padding_._0_4_ = (this->Params).MediaSourceProxy.SequenceID;
    local_108._padding_._4_4_ = (this->Params).MediaSourceProxy.ResolveParentIndex;
    local_108._padding_._4_4_ = local_200;
    local_108._44_8_ = local_208;
    local_108._padding_ = *(longlong *)pFVar15;
    local_108._padding_ = *(longlong *)&(pFVar15->SectionTimeRange).LowerBound;
    local_108._padding_ = (pFVar15->SectionTimeRange).LowerBound.Value.Ticks;
    local_108._padding_ = *(longlong *)&(pFVar15->SectionTimeRange).UpperBound;
    local_108._padding_ = (pFVar15->SectionTimeRange).UpperBound.Value.Ticks;
    local_108._padding_ = (pFVar15->FrameDuration).Ticks;
    local_108._padding_ = (longlong)&___7FMediaSectionPreRollExecutionToken__6B_;
    local_108._padding_ = (longlong)pUVar3;
    local_108.StartTime.Ticks = lVar26;
    FMovieSceneExecutionTokens::Add<FMediaSectionPreRollExecutionToken>(param_4,&local_108);
    return;
  }
  if ((bool)param_2->bSectionPostRoll || (bool)param_2->bHasPostRollStartTime) {
    if (local_res8[0] == '\0') {
      return;
    }
    FMovieSceneExecutionTokens::Add<FMediaSectionPostRollExecutionToken>(param_4,local_198);
    return;
  }
  iVar13 = *(int *)((longlong)&param_2->_padding_ + 4);
  iVar2 = (this->Params).SectionEndFrame.Value;
  if (iVar13 == -0x80000000) {
    if ((int)param_2->_padding_ == 0) {
      pFVar25 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
      if ((*(char *)((longlong)&param_2->_padding_ + 4) == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar25 = param_2;
      if (((char)param_2->_padding_ == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar13 = *(int *)((longlong)&pFVar25->_padding_ + 4);
  }
  if (iVar2 <= iVar13) {
    return;
  }
  iVar13 = (this->Params).StartFrameOffset.Value;
  iVar2 = (this->Params).SectionStartFrame.Value;
  FVar16 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2);
  iVar24 = 0;
  lVar14 = 0;
  uVar12 = (iVar13 - iVar2) + *(int *)FVar16;
  if (((int)param_2->_padding_ != 0) && (local_268._4_4_ != 0)) {
    uStack_20c = 0;
    FVar7.Denominator = 0;
    FVar7.Numerator = uVar12;
    local_210 = uVar12;
    ConvertFrameTime((FFrameTime)local_1e8,FVar7,(FFrameRate)param_2->_padding_);
    iVar24 = local_1e8[0];
  }
  lVar26 = lVar14;
  if (local_268._0_4_ != 0) {
    lVar26 = (longlong)(int)local_268._0_4_;
    lVar14 = ((longlong)(iVar24 + 1) * (longlong)(int)local_268._4_4_ * 10000000 + -1 + lVar26) /
             lVar26;
    lVar26 = ((longlong)iVar24 * (longlong)(int)local_268._4_4_ * 10000000 + -1 + lVar26) / lVar26;
  }
  pUVar4 = (this->MediaSection).field0_0x0.DebugPtr;
  lVar14 = (lVar14 - lVar26) + -1;
  local_1e0.Ticks = 1;
  if (1 < lVar14) {
    local_1e0.Ticks = lVar14;
  }
  FVar16 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2);
  fVar27 = UMovieSceneSection::EvaluateEasing((UMovieSceneSection *)pUVar4,*(FFrameTime *)FVar16);
  pUVar4 = (this->MediaSection).field0_0x0.DebugPtr;
  pUVar17 = UMovieSceneMediaTrack::StaticClass();
  pUVar18 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar4,pUVar17);
  local_230 = (this->Params).CacheSettings;
  if (pUVar18 == (UObject *)0x0) {
    local_228 = (uint)local_228._1_3_ << 8;
  }
  else {
    local_228 = CONCAT31(local_228._1_3_,pUVar18[7].field_0x8);
  }
  pFVar15 = UE::MediaSectionBaseMediaUtils::MakePlaybackParams
                      (&local_68,param_2,&this->Params,(this->MediaSection).field0_0x0.DebugPtr,
                       &local_1e0);
  local_268._8_8_ = *(undefined8 *)pFVar15;
  TStack_258._0_8_ = *(undefined8 *)&(pFVar15->SectionTimeRange).LowerBound;
  TStack_248._0_8_ = *(undefined8 *)&(pFVar15->SectionTimeRange).UpperBound;
  TStack_258.Value.Ticks = (pFVar15->SectionTimeRange).LowerBound.Value.Ticks;
  uVar8 = TStack_248._0_8_;
  TStack_248.Value.Ticks = (pFVar15->SectionTimeRange).UpperBound.Value.Ticks;
  lStack_238 = (pFVar15->FrameDuration).Ticks;
  if ((param_2->Status != Scrubbing) && ((param_2->Status & ~Stepping) != Stopped))
  goto LAB_14ea63260;
  TVar11.Value = TStack_248.Type.Value;
  TVar10.Value = TStack_258.Type.Value;
  if ((TStack_258.Type.Value != '\x02') && (TStack_248.Type.Value != '\x02')) {
    TVar10.Value = TStack_248.Type.Value;
    TStack_248._0_8_ = uVar8;
    if (TStack_258.Type.Value == '\x02') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TVar10.Value = TStack_248.Type.Value;
    }
    if ((TVar10.Value == '\x02') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (TStack_248.Value.Ticks < TStack_258.Value.Ticks) goto LAB_14ea63260;
    pFVar19 = TRangeBound<FTimespan>::GetValue(&TStack_258);
    pFVar20 = TRangeBound<FTimespan>::GetValue(&TStack_248);
    TVar11.Value = TStack_248.Type.Value;
    TVar10.Value = TStack_258.Type.Value;
    uVar8 = TStack_248._0_8_;
    if ((pFVar19->Ticks == pFVar20->Ticks) &&
       ((TStack_258.Type.Value == '\0' || (TVar11.Value == '\0')))) goto LAB_14ea63260;
  }
  TStack_248._0_8_ = uVar8;
  local_1d8 = 1;
  local_1d0.Ticks = lVar26;
  if (TVar10.Value == '\x02') {
    uVar21 = '\x02';
    pFVar19 = &TStack_258.Value;
LAB_14ea631e4:
    bVar9 = uVar21 == TVar10.Value;
    TVar10.Value = uVar21;
    if (bVar9) goto LAB_14ea631e8;
  }
  else {
    if (lVar26 <= TStack_258.Value.Ticks) {
      if ((lVar26 < TStack_258.Value.Ticks) || (TVar10.Value != '\x01')) {
        pFVar19 = &local_1d0;
        uVar21 = '\x01';
      }
      else {
        uVar21 = '\x01';
        pFVar19 = &TStack_258.Value;
      }
      goto LAB_14ea631e4;
    }
    pFVar19 = &TStack_258.Value;
LAB_14ea631e8:
    if ((TVar10.Value == '\x02') || (pFVar19->Ticks == TStack_258.Value.Ticks)) {
      local_1c8 = 1;
      local_1c0.Ticks = lVar26;
      uVar21 = TVar11.Value;
      if (TVar11.Value == '\x02') {
        pFVar19 = &TStack_248.Value;
LAB_14ea63232:
        bVar9 = uVar21 != TVar11.Value;
        TVar11.Value = uVar21;
        if (bVar9) goto LAB_14ea63240;
      }
      else {
        if (TStack_248.Value.Ticks <= lVar26) {
          if ((TStack_248.Value.Ticks < lVar26) || (TVar11.Value != '\x01')) {
            pFVar19 = &local_1c0;
            uVar21 = '\x01';
          }
          else {
            pFVar19 = &TStack_248.Value;
          }
          goto LAB_14ea63232;
        }
        pFVar19 = &TStack_248.Value;
      }
      if ((TVar11.Value == '\x02') || (pFVar19->Ticks == TStack_248.Value.Ticks))
      goto LAB_14ea63260;
    }
  }
LAB_14ea63240:
  local_1a8 = 0;
  uStack_1a0 = 0;
  TStack_248._0_8_ = (ulonglong)uStack_1a7 << 8;
  local_1b8 = 0;
  uStack_1b0 = 0;
  TStack_258._0_8_ = (ulonglong)uStack_1b7 << 8;
  TStack_248.Value.Ticks = 0;
  TStack_258.Value.Ticks = 0;
LAB_14ea63260:
  local_180._padding_._0_4_ = (this->Params).MediaSourceProxyIndex;
  local_180._padding_._0_4_ = (this->Params).MediaSourceProxy.Guid.A;
  local_180._padding_._4_4_ = (this->Params).MediaSourceProxy.Guid.B;
  local_180._padding_._0_4_ = (this->Params).MediaSourceProxy.Guid.C;
  local_180._padding_._4_4_ = (this->Params).MediaSourceProxy.Guid.D;
  local_180._padding_._0_4_ = (this->Params).MediaSourceProxy.SequenceID;
  local_180._padding_._4_4_ = (this->Params).MediaSourceProxy.ResolveParentIndex;
  local_180._44_8_ = local_230;
  local_180._padding_._4_4_ = local_228;
  local_180._padding_ = (longlong)&___7FMediaSectionExecutionToken__6B_;
  local_180._padding_ = local_268._8_8_;
  local_180._padding_ = TStack_258._0_8_;
  local_180._padding_ = TStack_248.Value.Ticks;
  local_180._padding_ = lStack_238;
  local_180.bCanPlayerBeOpen = (bool)local_res8[0];
  local_180._padding_ = TStack_258.Value.Ticks;
  local_180._padding_ = TStack_248._0_8_;
  local_180._padding_ = (longlong)pUVar3;
  local_180.CurrentTime.Ticks = lVar26;
  local_180.ProxyTextureBlend = fVar27;
  FMovieSceneExecutionTokens::Add<FMediaSectionExecutionToken>(param_4,&local_180);
  return;
}

// GetScriptStructImpl @ 14ea63320

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UScriptStruct * __thiscall
FMovieSceneMediaSectionTemplate::GetScriptStructImpl(FMovieSceneMediaSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaCompositing();
    Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate,(UObject *)pUVar1
                         ,L"MovieSceneMediaSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.OuterSingleton;
}

// Initialize @ 14ea63360

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMovieSceneMediaSectionTemplate::Initialize
          (FMovieSceneMediaSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,IMovieScenePlayer *param_4)

{
  TMap<FObjectKey,FMovieSceneMediaPlayerPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>_>
  *this_00;
  undefined1 *puVar1;
  UMovieSceneMediaSection *pUVar2;
  UMediaPlayer *pUVar3;
  UMediaSoundComponent *this_01;
  TReferenceControllerBase<1> *pTVar4;
  FMovieSceneMediaPlayerStore *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FMovieSceneMediaData *this_02;
  FMovieSceneMediaPlayerStoreContainer *pFVar10;
  FFrameRate FVar11;
  FMovieSceneMediaPlaybackParams *pFVar12;
  UObject *pUVar13;
  FFrameTime FVar14;
  UMediaTexture *pUVar15;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  *pTVar16;
  UMediaPlayer *pUVar17;
  FName FVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar26;
  FSharedReferencer<1> FVar27;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  FMovieSceneMediaData *local_208;
  UObject *local_200;
  FWeakObjectPtr local_1f8;
  int local_1f0;
  int local_1ec;
  TSharedPtr<FMovieSceneMediaPlayerStore,1> local_1e8;
  TOptional<FMovieSceneMediaPlayerPriority> local_1d8;
  TOptional<FMovieSceneMediaPlayerPriority> local_1c8;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *local_1b8;
  FSharedReferencer<1> FStack_1b0;
  longlong *local_1a8;
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  longlong local_188;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  *pTStack_180;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  *local_178;
  undefined2 local_170;
  undefined4 local_168;
  undefined1 local_164 [20];
  undefined8 local_150;
  FSharedReferencer<1> FStack_148;
  undefined8 local_140;
  FSharedReferencer<1> local_138;
  FMovieSceneEvaluationKey *local_130;
  FMovieSceneMediaData **local_128;
  FWeakObjectPtr *local_120;
  int *local_118;
  undefined1 local_110 [32];
  TReferenceControllerBase<1> *pTStack_f0;
  FMovieSceneMediaPlaybackParams local_e8;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_88;
  FMovieSceneMediaPlaybackParams local_78;
  
  this_02 = FPersistentEvaluationData::Find<FMovieSceneMediaData>(param_3,&param_3->SectionKey);
  iVar19 = 0;
  if (this_02 == (FMovieSceneMediaData *)0x0) {
    pUVar2 = (this->MediaSection).field0_0x0.DebugPtr;
    iVar23 = 0;
    if (pUVar2 != (UMovieSceneMediaSection *)0x0) {
      iVar19 = pUVar2->TextureIndex;
      iVar23 = (int)pUVar2->_padding_;
    }
    local_200 = (UObject *)0x0;
    if ((this->Params).MediaPlayer.field0_0x0.DebugPtr == (UMediaPlayer *)0x0) {
      local_200 = UE::MediaSectionBaseMediaUtils::FindMediaPlayerProxyInterfaceObject
                            (param_1,param_4);
    }
    if ((param_3->EntityData ==
         (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
          *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                           ,300,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = ::operator_new(0xa8);
    if (this_02 == (FMovieSceneMediaData *)0x0) {
      this_02 = (FMovieSceneMediaData *)0x0;
    }
    else {
      PropertyTemplate::FSectionData::FSectionData((FSectionData *)this_02);
      this_02->bIsAspectRatioSet = false;
      this_02->bHasBeenExecuted = false;
      this_02->bOverrideMediaPlayer = false;
      this_02->_padding_ = (longlong)&___7FMovieSceneMediaData__6B_;
      (this_02->SeekOnOpenTime).Ticks = -0x8000000000000000;
      this_02->MediaPlayer = (UMediaPlayer *)0x0;
      (this_02->PlayerProxy).WeakPtr = (FWeakObjectPtr)0x0;
      (this_02->ProxyMediaTexture).WeakPtr = (FWeakObjectPtr)0x0;
      this_02->ProxyLayerIndex = 0;
      this_02->ProxyTextureIndex = 0;
      (this_02->SampleQueue).Object =
           (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
      (this_02->SampleQueue).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (this_02->MediaPlayerStoreWeak).Object = (FMovieSceneMediaPlayerStore *)0x0;
      (this_02->MediaPlayerStoreWeak).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (this_02->MediaSection).ObjectIndex = 0;
      (this_02->MediaSection).ObjectSerialNumber = 0;
      (this_02->PlaybackParams).bIsLooping = false;
      (this_02->PlaybackParams).SectionTimeRange.LowerBound.Type.Value = '\x02';
      (this_02->PlaybackParams).SectionTimeRange.LowerBound.Value.Ticks = 0;
      (this_02->PlaybackParams).SectionTimeRange.UpperBound.Type.Value = '\x02';
      (this_02->PlaybackParams).SectionTimeRange.UpperBound.Value.Ticks = 0;
      (this_02->PlaybackParams).FrameDuration.Ticks = 0;
    }
    local_128 = &local_208;
    local_208 = this_02;
    local_130 = &param_3->SectionKey;
    TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
              ((TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
                *)param_3->EntityData,
               (TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
                *)&stack0x00000020,(bool *)&local_130);
    iVar21 = 1;
    if (local_208 != (FMovieSceneMediaData *)0x0) {
      (**(code **)local_208->_padding_)(local_208,1);
    }
    pFVar10 = FMovieSceneMediaPlayerStoreContainer::GetOrAdd(param_3);
    local_1e8.Object = (pFVar10->MediaPlayerStore).Object;
    local_1e8.SharedReferenceCount.ReferenceController =
         (pFVar10->MediaPlayerStore).SharedReferenceCount.ReferenceController;
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar11 = UE::MediaSectionBaseMediaUtils::GetAlignedFrameRate
                       ((FMovieSceneContext *)local_110,(UMovieSceneMediaSection *)param_2,
                        (FPersistentEvaluationData *)(this->MediaSection).field0_0x0.DebugPtr);
    if (*(int *)FVar11 == 0) {
      local_164._4_8_ = 1;
    }
    else {
      auVar24._0_8_ = (double)*(int *)FVar11;
      auVar24._8_8_ = 0;
      auVar25._0_8_ =
           ((double)*(int *)((longlong)FVar11 + 4) / auVar24._0_8_) * __real_416312d000000000 +
           __real_3fe0000000000000;
      auVar25._8_8_ = 0;
      auVar24 = roundpd(auVar24,auVar25,1);
      local_164._4_8_ = (undefined8)auVar24._0_8_;
    }
    pFVar12 = UE::MediaSectionBaseMediaUtils::MakePlaybackParams
                        (&local_78,param_2,&this->Params,(this->MediaSection).field0_0x0.DebugPtr,
                         (FTimespan *)(local_164 + 4));
    local_e8.bIsLooping = pFVar12->bIsLooping;
    local_e8._1_7_ = *(undefined7 *)&pFVar12->field_0x1;
    local_e8.SectionTimeRange.LowerBound.Type.Value =
         (pFVar12->SectionTimeRange).LowerBound.Type.Value;
    local_e8.SectionTimeRange.LowerBound._1_7_ =
         *(undefined7 *)&(pFVar12->SectionTimeRange).LowerBound.field_0x1;
    local_e8.SectionTimeRange.LowerBound.Value.Ticks =
         (pFVar12->SectionTimeRange).LowerBound.Value.Ticks;
    local_e8.SectionTimeRange.UpperBound.Type.Value =
         (pFVar12->SectionTimeRange).UpperBound.Type.Value;
    local_e8.SectionTimeRange.UpperBound._1_7_ =
         *(undefined7 *)&(pFVar12->SectionTimeRange).UpperBound.field_0x1;
    local_e8.SectionTimeRange.UpperBound.Value.Ticks =
         (pFVar12->SectionTimeRange).UpperBound.Value.Ticks;
    local_e8.FrameDuration.Ticks = (pFVar12->FrameDuration).Ticks;
    FMovieSceneMediaData::Setup
              (this_02,&local_1e8,(UObject *)(this->MediaSection).field0_0x0.DebugPtr,
               (this->Params).MediaPlayer.field0_0x0.DebugPtr,local_200,iVar23,iVar19,&local_e8);
    pFVar5 = local_1e8.Object;
    if ((local_1e8.Object != (FMovieSceneMediaPlayerStore *)0x0) &&
       (this_02->MediaPlayer != (UMediaPlayer *)0x0)) {
      local_1ec = (this->Params).SectionStartFrame.Value;
      local_1f0 = iVar23;
      if ((local_1e8.Object == (FMovieSceneMediaPlayerStore *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar3 = this_02->MediaPlayer;
      this_00 = &pFVar5->MediaPlayerPriorities;
      TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_b8,
                 (TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
                  *)this_00);
      local_170 = 0;
      stack0xfffffffffffffe68 = local_b8._16_16_;
      local_1a8 = (longlong *)local_b8._0_8_;
      auStack_1a0._0_8_ = local_b8._8_8_;
      local_188 = local_98;
      pTStack_180 = pTStack_90;
      uVar20 = local_b8._24_8_ >> 0x20;
      local_178 = (TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
                   *)this_00;
      if (local_b8._28_4_ < *(int *)(local_b8._16_8_ + 0x18)) {
        do {
          iVar19 = (int)uVar20;
          local_1f8.ObjectIndex = *(int *)(*local_1a8 + (longlong)iVar19 * 0x18);
          local_1f8.ObjectSerialNumber = *(int *)(*local_1a8 + 4 + (longlong)iVar19 * 0x18);
          pUVar13 = FWeakObjectPtr::Get(&local_1f8);
          if (pUVar13 == (UObject *)0x0) {
            TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_180,iVar19);
            local_170 = CONCAT11(local_170._1_1_,1);
          }
          uStack_190 = uStack_190 & ~auStack_1a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1a0);
          uVar20 = (ulonglong)uStack_18c;
        } while ((int)uStack_18c < *(int *)(auStack_1a0._8_8_ + 0x18));
        if (((char)local_170 != '\0') && (local_170._1_1_ != '\0')) {
          uVar22 = *(int *)&(local_178->Elements).field_0x8 -
                   *(int *)&(local_178->Elements).field_0x34;
          if (3 < uVar22) {
            uVar20 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
            lVar6 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            local_168 = (undefined4)lVar6;
            iVar21 = 1 << ((byte)lVar6 & 0x1f);
          }
          if (((0 < (int)uVar22) && (local_178->HashSize < iVar21)) ||
             (iVar21 < local_178->HashSize)) {
            local_178->HashSize = iVar21;
            TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
            ::Rehash(local_178);
          }
        }
      }
      local_210.ObjectIndex = 0;
      local_210.ObjectSerialNumber = 0;
      if (pUVar3 != (UMediaPlayer *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        local_218.ObjectIndex = 0;
        local_218.ObjectSerialNumber = 0;
        local_164._12_8_ = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FWeakObjectPtr::operator=(&local_218,(FObjectPtr)((longlong)local_164 + 0xc));
        local_210 = local_218;
      }
      local_120 = &local_210;
      local_118 = &local_1f0;
      TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FObjectKey_&&,FMovieSceneMediaPlayerPriority_const_&>_>
                ((TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<FObjectKey_&&,FMovieSceneMediaPlayerPriority_const_&> *)local_164
                 ,(bool *)&local_120);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
    if (this_02 == (FMovieSceneMediaData *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8231987589440076906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaCompositing\\Source\\MediaCompositing\\Private\\MovieScene\\MovieSceneMediaTemplate.cpp"
                         ,0x396,"SectionData != nullptr");
      if (!bVar8) {
        return;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar8 = FWeakObjectPtr::IsStale(&(this_02->PlayerProxy).WeakPtr,true,false);
  if ((bVar8) &&
     (pUVar13 = UE::MediaSectionBaseMediaUtils::FindMediaPlayerProxyInterfaceObject(param_1,param_4)
     , pUVar13 != (UObject *)0x0)) {
    FMovieSceneMediaData::UpdatePlayerProxy(this_02,pUVar13);
  }
  pUVar3 = this_02->MediaPlayer;
  if (pUVar3 == (UMediaPlayer *)0x0) {
    return;
  }
  if ((((bool)param_2->bSectionPreRoll || (bool)param_2->bHasPreRollEndTime) ||
      ((bool)param_2->bSectionPostRoll || (bool)param_2->bHasPostRollStartTime)) ||
     (iVar19 = (this->Params).SectionEndFrame.Value,
     FVar14 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2),
     iVar19 <= *(int *)FVar14)) {
    bVar8 = false;
    FMovieSceneMediaData::StopUsingProxyMediaTexture(this_02);
  }
  else {
    bVar8 = true;
    pUVar15 = FMovieSceneMediaData::GetProxyMediaTexture(this_02);
    if (pUVar15 != (UMediaTexture *)0x0) {
      pTVar16 = FMovieSceneMediaData::TransferSampleQueue(this_02,&local_88);
      UMediaTexture::SetMediaPlayer(pUVar15,this_02->MediaPlayer,pTVar16);
    }
  }
  this_01 = (this->Params).MediaSoundComponent.field0_0x0.DebugPtr;
  if (this_01 == (UMediaSoundComponent *)0x0) {
LAB_14ea638f1:
    pTVar26 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
    FVar27.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1b8 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0
    ;
    FStack_1b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (bVar8) {
LAB_14ea638fd:
      FStack_1b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar26 = (this_02->SampleQueue).Object;
      local_138.ReferenceController =
           (this_02->SampleQueue).SharedReferenceCount.ReferenceController;
      if (local_138.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_138.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_138.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_150 = 0;
      FStack_148.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this_02->SampleQueue !=
          (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
           *)&local_150) {
        (this_02->SampleQueue).Object =
             (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this_02->SampleQueue).SharedReferenceCount,&FStack_148);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_148.ReferenceController);
      local_140 = 0;
      local_1b8 = pTVar26;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1b0,&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.ReferenceController);
      pTVar26 = local_1b8;
      FVar27.ReferenceController = FStack_1b0.ReferenceController;
    }
  }
  else {
    if (bVar8) {
      UMediaSoundComponent::SetMediaPlayer(this_01,pUVar3);
      goto LAB_14ea638fd;
    }
    pUVar17 = UMediaSoundComponent::GetMediaPlayer(this_01);
    if (pUVar17 != pUVar3) goto LAB_14ea638f1;
    UMediaSoundComponent::SetMediaPlayer
              ((this->Params).MediaSoundComponent.field0_0x0.DebugPtr,(UMediaPlayer *)0x0);
    pTVar26 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
    FVar27.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  pUVar15 = (this->Params).MediaTexture.field0_0x0.DebugPtr;
  if (pUVar15 != (UMediaTexture *)0x0) {
    if (bVar8) {
      pFVar10 = FMovieSceneMediaPlayerStoreContainer::GetOrAdd(param_3);
      pTVar4 = (pFVar10->MediaPlayerStore).SharedReferenceCount.ReferenceController;
      pFVar5 = (pFVar10->MediaPlayerStore).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar5 != (FMovieSceneMediaPlayerStore *)0x0) {
        pUVar17 = UMediaTexture::GetMediaPlayer((this->Params).MediaTexture.field0_0x0.DebugPtr);
        FMovieSceneMediaPlayerStore::GetMediaPlayerPriority(pFVar5,&local_1d8,pUVar17);
        FMovieSceneMediaPlayerStore::GetMediaPlayerPriority(pFVar5,&local_1c8,pUVar3);
        if ((local_1d8.bIsSet != false) && (local_1c8.bIsSet != false)) {
          bVar8 = SBORROW4(local_1c8.TypedValue.Priority,local_1d8.TypedValue.Priority);
          iVar19 = local_1c8.TypedValue.Priority - local_1d8.TypedValue.Priority;
          if (local_1c8.TypedValue.Priority == local_1d8.TypedValue.Priority) {
            bVar8 = SBORROW4(local_1c8.TypedValue.SectionStartFrame.Value,
                             local_1d8.TypedValue.SectionStartFrame.Value);
            iVar19 = local_1c8.TypedValue.SectionStartFrame.Value -
                     local_1d8.TypedValue.SectionStartFrame.Value;
          }
          if ((local_1c8.TypedValue.Priority != local_1d8.TypedValue.Priority ||
              local_1c8.TypedValue.SectionStartFrame.Value !=
              local_1d8.TypedValue.SectionStartFrame.Value) && bVar8 == iVar19 < 0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            goto LAB_14ea63a33;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pUVar15 = (this->Params).MediaTexture.field0_0x0.DebugPtr;
      if (FVar27.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar27.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar27.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_110._24_8_ = pTVar26;
      pTStack_f0 = FVar27.ReferenceController;
      UMediaTexture::SetMediaPlayer
                (pUVar15,pUVar3,
                 (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
                  *)(local_110 + 0x18));
    }
    else {
      pUVar17 = UMediaTexture::GetMediaPlayer(pUVar15);
      if (pUVar17 == pUVar3) {
        UMediaTexture::SetMediaPlayer
                  ((this->Params).MediaTexture.field0_0x0.DebugPtr,(UMediaPlayer *)0x0);
      }
    }
  }
LAB_14ea63a33:
  FVar18 = UMediaPlayer::GetPlayerName(pUVar3);
  if ((*(longlong *)FVar18 != 0) && (bVar8 = UMediaPlayer::IsClosed(pUVar3), !bVar8)) {
    bVar8 = (this->Params).bLooping;
    bVar9 = UMediaPlayer::IsLooping(pUVar3);
    if (bVar9 != bVar8) {
      UMediaPlayer::SetLooping(pUVar3,bVar8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar27.ReferenceController);
  return;
}

// SetupOverrides @ 14ea63aa0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMovieSceneMediaSectionTemplate::SetupOverrides(FMovieSceneMediaSectionTemplate *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 6;
  return;
}

// TearDown @ 14ea63ab0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMovieSceneMediaSectionTemplate::TearDown
          (FMovieSceneMediaSectionTemplate *this,FPersistentEvaluationData *param_1,
          IMovieScenePlayer *param_2)

{
  UMediaPlayer *pUVar1;
  UMediaSoundComponent *this_00;
  UMediaTexture *this_01;
  code *pcVar2;
  bool bVar3;
  FMovieSceneMediaData *this_02;
  UMediaPlayer *pUVar4;
  UObject *this_03;
  UClass *pUVar5;
  longlong *plVar6;
  
  this_02 = FPersistentEvaluationData::Find<FMovieSceneMediaData>(param_1,&param_1->SectionKey);
  if (this_02 == (FMovieSceneMediaData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8231987589440076794>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaCompositing\\Source\\MediaCompositing\\Private\\MovieScene\\MovieSceneMediaTemplate.cpp"
                       ,0x406,"SectionData != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar1 = this_02->MediaPlayer;
    if (pUVar1 != (UMediaPlayer *)0x0) {
      this_00 = (this->Params).MediaSoundComponent.field0_0x0.DebugPtr;
      if ((this_00 != (UMediaSoundComponent *)0x0) &&
         (pUVar4 = UMediaSoundComponent::GetMediaPlayer(this_00), pUVar4 == pUVar1)) {
        UMediaSoundComponent::SetMediaPlayer
                  ((this->Params).MediaSoundComponent.field0_0x0.DebugPtr,(UMediaPlayer *)0x0);
      }
      this_01 = (this->Params).MediaTexture.field0_0x0.DebugPtr;
      if ((this_01 != (UMediaTexture *)0x0) &&
         (pUVar4 = UMediaTexture::GetMediaPlayer(this_01), pUVar4 == pUVar1)) {
        UMediaTexture::SetMediaPlayer
                  ((this->Params).MediaTexture.field0_0x0.DebugPtr,(UMediaPlayer *)0x0);
      }
      this_03 = FWeakObjectPtr::Get(&(this_02->PlayerProxy).WeakPtr);
      if (this_03 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
        plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_03,pUVar5);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x50))
                    (plVar6,this_02->ProxyLayerIndex,this_02->ProxyTextureIndex,0);
        }
      }
      FMovieSceneMediaData::StopUsingProxyMediaTexture(this_02);
    }
  }
  return;
}

// FMovieSceneMediaSectionTemplate @ 14ea673d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMovieSceneMediaSectionTemplate * __thiscall
FMovieSceneMediaSectionTemplate::FMovieSceneMediaSectionTemplate
          (FMovieSceneMediaSectionTemplate *this,UMovieSceneMediaSection *param_1,
          UMovieSceneMediaTrack *param_2)

{
  UMediaSource *pUVar1;
  UMediaSoundComponent *pUVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  FMovieSceneMediaSectionTemplate *pFVar10;
  UMediaTexture *pUVar11;
  UMediaPlayer *pUVar12;
  int iStack_c;
  
  pUVar11 = (UMediaTexture *)0x0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneMediaSectionTemplate__6B_;
  (this->Params).MediaSoundComponent.field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->Params).MediaSource.field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->Params).MediaSourceProxy.Guid.A = 0;
  (this->Params).MediaSourceProxy.Guid.B = 0;
  (this->Params).MediaSourceProxy.Guid.C = 0;
  (this->Params).MediaSourceProxy.Guid.D = 0;
  (this->Params).MediaSourceProxy.SequenceID = 0;
  (this->Params).MediaSourceProxyIndex = 0;
  (this->Params).MediaTexture.field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->Params).MediaPlayer.field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->Params).SectionStartFrame = 0;
  (this->Params).SectionEndFrame = 0;
  (this->Params).bLooping = false;
  (this->Params).StartFrameOffset.Value = 0;
  (this->Params).MediaSourceProxy.ResolveParentIndex = -1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&(this->Params).ProxyTextureBlend);
  (this->Params).CacheSettings.bOverride = false;
  (this->Params).CacheSettings.TimeToLookAhead = 0.2;
  (this->MediaSection).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneMediaSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar1 = (param_1->MediaSource).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Params).MediaSource.field0_0x0.DebugPtr = pUVar1;
  uVar6 = (param_1->MediaSourceProxyBindingID).Guid.B;
  uVar7 = (param_1->MediaSourceProxyBindingID).Guid.C;
  uVar8 = (param_1->MediaSourceProxyBindingID).Guid.D;
  (this->Params).MediaSourceProxy.Guid.A = (param_1->MediaSourceProxyBindingID).Guid.A;
  (this->Params).MediaSourceProxy.Guid.B = uVar6;
  (this->Params).MediaSourceProxy.Guid.C = uVar7;
  (this->Params).MediaSourceProxy.Guid.D = uVar8;
  iVar5 = (param_1->MediaSourceProxyBindingID).ResolveParentIndex;
  (this->Params).MediaSourceProxy.SequenceID = (param_1->MediaSourceProxyBindingID).SequenceID;
  (this->Params).MediaSourceProxy.ResolveParentIndex = iVar5;
  (this->Params).MediaSourceProxyIndex = param_1->MediaSourceProxyIndex;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->MediaSoundComponent).field0_0x0.DebugPtr,
     pUVar2 != (UMediaSoundComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Params).MediaSoundComponent.field0_0x0 = (param_1->MediaSoundComponent).field0_0x0;
  (this->Params).bLooping = param_1->bLooping;
  (this->Params).StartFrameOffset.Value = (param_1->StartFrameOffset).Value;
  (this->Params).CacheSettings = param_1->CacheSettings;
  if (param_1->bUseExternalMediaPlayer == false) {
    pUVar12 = (UMediaPlayer *)0x0;
LAB_14ea6751a:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
  }
  else {
    pUVar12 = (param_1->ExternalMediaPlayer).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar12 != (UMediaPlayer *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      goto LAB_14ea6751a;
    }
  }
  (this->Params).MediaPlayer.field0_0x0.DebugPtr = pUVar12;
  if (param_1->bUseExternalMediaPlayer == false) {
    pUVar11 = (param_1->MediaTexture).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14ea6756e;
    if (pUVar11 != (UMediaTexture *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UMediaTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
LAB_14ea6756e:
  (this->Params).MediaTexture.field0_0x0.DebugPtr = pUVar11;
  if ((char)param_1->_padding_ != '\x02') {
    iVar5 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((char)param_1->_padding_ == '\x02') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FMovieSceneMediaSectionTemplate *)(*pcVar3)();
        return pFVar10;
      }
    }
    (this->Params).SectionStartFrame.Value = iVar5;
  }
  if ((char)param_1->_padding_ != '\x02') {
    lVar4 = param_1->_padding_;
    if ((char)param_1->_padding_ == '\x02') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FMovieSceneMediaSectionTemplate *)(*pcVar3)();
        return pFVar10;
      }
    }
    iStack_c = (int)((ulonglong)lVar4 >> 0x20);
    (this->Params).SectionEndFrame.Value = iStack_c;
  }
  return this;
}

// FMovieSceneMediaSectionTemplate @ 14ea67630

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMovieSceneMediaSectionTemplate * __thiscall
FMovieSceneMediaSectionTemplate::FMovieSceneMediaSectionTemplate
          (FMovieSceneMediaSectionTemplate *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneMediaSectionTemplate__6B_;
  (this->Params).MediaSoundComponent.field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->Params).MediaSource.field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->Params).MediaSourceProxy.Guid.A = 0;
  (this->Params).MediaSourceProxy.Guid.B = 0;
  (this->Params).MediaSourceProxy.Guid.C = 0;
  (this->Params).MediaSourceProxy.Guid.D = 0;
  (this->Params).MediaSourceProxy.SequenceID = 0;
  (this->Params).MediaSourceProxyIndex = 0;
  (this->Params).MediaTexture.field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->Params).MediaPlayer.field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->Params).SectionStartFrame = 0;
  (this->Params).SectionEndFrame = 0;
  (this->Params).bLooping = false;
  (this->Params).StartFrameOffset.Value = 0;
  (this->Params).MediaSourceProxy.ResolveParentIndex = -1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&(this->Params).ProxyTextureBlend);
  (this->Params).CacheSettings.bOverride = false;
  (this->Params).CacheSettings.TimeToLookAhead = 0.2;
  (this->MediaSection).field0_0x0.DebugPtr = (UMovieSceneMediaSection *)0x0;
  return this;
}

