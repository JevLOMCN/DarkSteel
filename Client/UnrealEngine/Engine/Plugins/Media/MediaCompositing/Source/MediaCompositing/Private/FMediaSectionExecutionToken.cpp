// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 2

// Execute @ 14ea6ac10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaSectionExecutionToken::Execute
          (FMediaSectionExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  UMediaPlayer *this_00;
  code *pcVar1;
  bool bVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FMovieSceneMediaData *pFVar7;
  UObject *this_01;
  UClass *pUVar8;
  IMediaPlayerProxyInterface *pIVar9;
  char *pcVar10;
  FString *pFVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStackY_1d8 [32];
  FTimespan local_1a8;
  FMediaSourceCacheSettings local_1a0;
  UMediaSource *local_198;
  longlong local_190;
  undefined1 local_188;
  uint7 uStack_187;
  undefined8 uStack_180;
  undefined1 local_178;
  uint7 uStack_177;
  undefined8 uStack_170;
  void *local_168 [2];
  TRange<FTimespan> local_158;
  TRange<FTimespan> local_138;
  FMediaPlayerOptions local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar7 = FPersistentEvaluationData::Find<FMovieSceneMediaData>(param_3,&param_3->SectionKey);
  if ((pFVar7 == (FMovieSceneMediaData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                         ,0x146,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = pFVar7->MediaPlayer;
  this_01 = FWeakObjectPtr::Get(&(pFVar7->PlayerProxy).WeakPtr);
  local_198 = UMovieSceneMediaSection::GetMediaSourceOrProxy
                        (param_4,(FMovieSceneSequenceID)(param_2->SequenceID).Value,
                         (UMediaSource *)this->_padding_,
                         (FMovieSceneObjectBindingID *)&this->_padding_,(int)this->_padding_);
  if (this_00 == (UMediaPlayer *)0x0) {
    return;
  }
  if (local_198 == (UMediaSource *)0x0) {
    return;
  }
  if (this_01 == (UObject *)0x0) {
    pIVar9 = (IMediaPlayerProxyInterface *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
    pIVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar8);
    if (pIVar9 != (IMediaPlayerProxyInterface *)0x0) {
      (**(code **)((longlong)*pIVar9 + 0x50))
                (pIVar9,pFVar7->ProxyLayerIndex,pFVar7->ProxyTextureIndex,this->ProxyTextureBlend);
      cVar5 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9);
      if (cVar5 == '\0') {
        return;
      }
      if ((pFVar7->bIsAspectRatioSet == false) &&
         (cVar5 = (**(code **)((longlong)*pIVar9 + 0x48))(pIVar9,this_00), cVar5 != '\0')) {
        pFVar7->bIsAspectRatioSet = true;
      }
    }
  }
  if (this->bCanPlayerBeOpen == false) {
    bVar4 = UE::MediaSectionBaseMediaUtils::IsPlayerClosed(this_00);
    if (bVar4) {
      return;
    }
    UMediaPlayer::Close(this_00);
    return;
  }
  local_1a0 = UE::MediaSectionBaseMediaUtils::GetCurrentCacheSettingsFromPlayer(this_00);
  bVar4 = local_1a0.bOverride;
  if ((pIVar9 == (IMediaPlayerProxyInterface *)0x0) ||
     ((pcVar10 = (char *)(**(code **)((longlong)*pIVar9 + 0x28))(pIVar9), (bool)*pcVar10 == bVar4 &&
      ((float)((uint)(*(float *)(pcVar10 + 4) - local_1a0.TimeToLookAhead) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((param_1->Status == Scrubbing) || (param_1->Status == Stopped)) &&
     (*(char *)((longlong)&this->_padding_ + 4) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_1a0 = (FMediaSourceCacheSettings)
              (**(code **)(local_198->_padding_ + 0x2b0))(local_198,local_168);
  pFVar11 = UMediaPlayer::GetUrl(this_00);
  iVar6 = (pFVar11->Data).ArrayNum;
  if (iVar6 == *(int *)((longlong)local_1a0 + 8)) {
    if (1 < iVar6) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,*(wchar_t **)local_1a0);
      bVar12 = iVar6 == 0;
      goto LAB_14ea6ae02;
    }
LAB_14ea6ae09:
    bVar12 = false;
    if (bVar4) goto LAB_14ea6ae0d;
  }
  else {
    bVar12 = *(int *)((longlong)local_1a0 + 8) + iVar6 == 1;
LAB_14ea6ae02:
    if (bVar12) goto LAB_14ea6ae09;
LAB_14ea6ae0d:
    bVar12 = true;
  }
  if (local_168[0] != (void *)0x0) {
    FMemory::Free(local_168[0]);
  }
  if (bVar12) {
    (pFVar7->SeekOnOpenTime).Ticks = (this->CurrentTime).Ticks;
    FMediaSectionBaseExecutionToken::MakeMediaPlayerOptions
              ((FMediaSectionBaseExecutionToken *)this,&local_118,pIVar9,pFVar7);
    if (bVar2) {
      UE::MediaSectionBaseMediaUtils::SetPlayerBlockOnTimeRange
                (this_00,&this->CurrentTime,(FMovieSceneMediaPlaybackParams *)&this->_padding_);
    }
    UMediaPlayer::OpenSourceWithOptions(this_00,local_198,&local_118);
    FMediaPlayerOptions::~FMediaPlayerOptions(&local_118);
    return;
  }
  bVar4 = UMediaPlayer::IsPreparing(this_00);
  if (bVar4) {
    (pFVar7->SeekOnOpenTime).Ticks = (this->CurrentTime).Ticks;
    if (!bVar2) {
      return;
    }
    UE::MediaSectionBaseMediaUtils::SetPlayerBlockOnTimeRange
              (this_00,&this->CurrentTime,(FMovieSceneMediaPlaybackParams *)&this->_padding_);
    return;
  }
  UMediaPlayer::GetDuration(this_00);
  if (local_190 == 0) {
    return;
  }
  UE::MovieSceneMediaPlayerUtils::AdjustPlaybackTimeRange
            (&local_138,(TRange<FTimespan> *)&this->_padding_,this_00,(FTimespan *)&this->_padding_)
  ;
  UE::MovieSceneMediaPlayerUtils::SetPlayerPlaybackTimeRange(this_00,&local_138);
  local_1a8.Ticks = (this->CurrentTime).Ticks;
  if (param_1->Status == Playing) {
    bVar4 = UMediaPlayer::IsPlaying(this_00);
    pTVar3 = CVarAvoidSeekOnJump.Ref;
    if (!bVar4) {
      bVar4 = UE::MediaSectionBaseMediaUtils::ShouldSeekForTime(this_00,&local_1a8);
      if (bVar4) {
        SeekPlayer(this,param_1,this_00,&local_1a8);
      }
      if ((int)param_1->_padding_ == 0) {
        UMediaPlayer::SetRate(this_00,__real_3f800000);
      }
      else {
        UMediaPlayer::SetRate(this_00,__real_bf800000);
      }
      goto LAB_14ea6b050;
    }
    if ((param_1->bHasJumped) || (pFVar7->bHasBeenExecuted == false)) {
      bVar4 = IsInParallelGameThread();
      if ((!bVar4) &&
         ((bVar4 = IsInGameThread(), !bVar4 &&
          (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar4)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((pTVar3->ShadowedValue[0] == false) ||
         (bVar4 = UE::MediaSectionBaseMediaUtils::ShouldSeekForTime(this_00,&local_1a8), bVar4)) {
        SeekPlayer(this,param_1,this_00,&local_1a8);
      }
    }
    fVar13 = UMediaPlayer::GetRate(this_00);
    iVar6 = (int)param_1->_padding_;
    if (iVar6 == 0) {
      fVar14 = __real_3f800000;
      if (0.0 <= fVar13) goto LAB_14ea6b050;
    }
    else if ((iVar6 != 1) || (fVar14 = __real_bf800000, fVar13 <= 0.0)) goto LAB_14ea6b050;
    bVar4 = UMediaPlayer::SetRate(this_00,fVar14);
    if (bVar4) goto LAB_14ea6b050;
  }
  else {
    bVar4 = UMediaPlayer::IsPlaying(this_00);
    if ((bVar4) && (fVar13 = UMediaPlayer::GetRate(this_00), fVar13 != 0.0)) {
      UMediaPlayer::SetRate(this_00,0.0);
    }
  }
  SeekPlayer(this,param_1,this_00,&local_1a8);
LAB_14ea6b050:
  if (bVar2) {
    UE::MediaSectionBaseMediaUtils::SetPlayerBlockOnTimeRange
              (this_00,&this->CurrentTime,(FMovieSceneMediaPlaybackParams *)&this->_padding_);
  }
  else {
    local_178 = 0;
    uStack_170 = 0;
    local_158.UpperBound._0_8_ = (ulonglong)uStack_177 << 8;
    local_188 = 0;
    uStack_180 = 0;
    local_158.LowerBound._0_8_ = (ulonglong)uStack_187 << 8;
    local_158.UpperBound.Value.Ticks = 0;
    local_158.LowerBound.Value.Ticks = 0;
    UMediaPlayer::SetBlockOnTimeRange(this_00,&local_158);
  }
  pFVar7->bHasBeenExecuted = true;
  return;
}

// SeekPlayer @ 14ea6ef60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaSectionExecutionToken::SeekPlayer
          (FMediaSectionExecutionToken *this,FMovieSceneContext *param_1,UMediaPlayer *param_2,
          FTimespan *param_3)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<ERangeBoundTypes::Type> TVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10;
  FTimespan local_88;
  undefined1 local_80;
  uint7 uStack_7f;
  undefined8 uStack_78;
  uchar local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  TRange<FTimespan> local_60;
  TRange<FTimespan> local_40;
  
  if ((param_1->Status == Scrubbing) || (param_1->Status == Stopped)) {
    bVar2 = TRange<FTimespan>::IsEmpty((TRange<FTimespan> *)&this->_padding_);
    if ((!bVar2) &&
       (TVar3.Value = TRange<FTimespan>::Contains((TRange<FTimespan> *)&this->_padding_,param_3),
       !(bool)TVar3.Value)) {
      uStack_68 = 0;
      local_40.UpperBound._1_7_ = uStack_6f;
      local_40.UpperBound.Type.Value = TVar3.Value;
      local_80 = 0;
      uStack_78 = 0;
      local_40.LowerBound._0_8_ = (ulonglong)uStack_7f << 8;
      local_40.UpperBound.Value.Ticks = 0;
      local_40.LowerBound.Value.Ticks = 0;
      local_70 = TVar3.Value;
      UE::MovieSceneMediaPlayerUtils::SetPlayerPlaybackTimeRange(param_2,&local_40);
    }
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      UMediaPlayer::Scrub(param_2,param_3);
      return;
    }
  }
  else {
    UMediaPlayer::GetDuration(param_2);
    lVar4 = param_3->Ticks;
    local_88.Ticks = lVar4;
    if (local_res10 != 0) {
      if ((char)this->_padding_ != '\0') {
        lVar4 = lVar4 % local_res10;
      }
      lVar5 = (longlong)((double)this->_padding_ * __real_3fe0000000000000);
      bVar2 = TRange<FTimespan>::IsEmpty((TRange<FTimespan> *)&this->_padding_);
      if ((bVar2) || (bVar2 = UMediaPlayer::SupportsPlaybackTimeRange(param_2), !bVar2)) {
        lVar5 = local_res10 - lVar5;
        if (lVar4 < lVar5) {
          lVar5 = lVar4;
        }
        local_88.Ticks = 0;
        if (0 < lVar5) {
          local_88.Ticks = lVar5;
        }
      }
      else {
        UE::MovieSceneMediaPlayerUtils::AdjustPlaybackTimeRange
                  (&local_60,(TRange<FTimespan> *)&this->_padding_,param_2,
                   (FTimespan *)&this->_padding_);
        if ((local_60.UpperBound.Type.Value == '\x02') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar5 = local_60.UpperBound.Value.Ticks - lVar5;
        if ((local_60.LowerBound.Type.Value == '\x02') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (lVar4 < lVar5) {
          lVar5 = lVar4;
        }
        local_88.Ticks = local_60.LowerBound.Value.Ticks;
        if (local_60.LowerBound.Value.Ticks < lVar5) {
          local_88.Ticks = lVar5;
        }
      }
    }
    param_3 = &local_88;
  }
  UMediaPlayer::Seek(param_2,param_3);
  return;
}

