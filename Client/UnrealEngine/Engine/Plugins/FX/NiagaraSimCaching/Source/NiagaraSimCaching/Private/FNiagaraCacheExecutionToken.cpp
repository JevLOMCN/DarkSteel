// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 2

// Execute @ 14ea234e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraCacheExecutionToken::Execute
          (FNiagaraCacheExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  UNiagaraSimCache *pUVar4;
  FFrameRate FVar5;
  code *pcVar6;
  bool bVar7;
  UNiagaraComponent *this_00;
  UClass *pUVar8;
  UNiagaraSimCache *pUVar9;
  FMovieSceneAnimTypeID FVar10;
  FWeakObjectPtr *pFVar11;
  FFrameTime FVar12;
  float fVar13;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr local_b0;
  IMovieScenePreAnimatedTokenProducer local_a8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_a0;
  FScopedPreAnimatedCaptureSource local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((((param_2->ObjectBindingID).D != 0 || (param_2->ObjectBindingID).C != 0) ||
      (param_2->ObjectBindingID).B != 0) || (param_2->ObjectBindingID).A != 0) {
    IMovieScenePlayer::FindBoundObjects
              (param_4,&local_a0,&param_2->ObjectBindingID,&param_2->SequenceID);
    for (pFVar11 = &(local_a0.DataPtr)->WeakPtr;
        pFVar11 != &local_a0.DataPtr[local_a0.ArrayNum].WeakPtr; pFVar11 = pFVar11 + 1) {
      local_b0 = *pFVar11;
      this_00 = (UNiagaraComponent *)FWeakObjectPtr::Get(&local_b0);
      if (this_00 != (UNiagaraComponent *)0x0) {
        pUVar8 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
        iVar2 = (int)pUVar8->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar8->_padding_)) {
          if ((this->CacheSection).bIsSet != false) {
            if (((this->CacheSection).bIsSet == false) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pUVar9 = UNiagaraComponent::GetSimCache(this_00);
            pUVar4 = (this->CacheSection).TypedValue.Params.SimCache.field0_0x0.DebugPtr;
            if (pUVar4 == (UNiagaraSimCache *)0x0) {
              bVar7 = pUVar9 == (UNiagaraSimCache *)0x0;
            }
            else {
              bVar7 = pUVar4 == pUVar9;
            }
            if (!bVar7) {
              UNiagaraComponent::SetSimCache(this_00,pUVar4,false);
            }
            uVar3 = *(uint *)((longlong)&param_1->_padding_ + 4);
            FVar5 = (FFrameRate)param_1->_padding_;
            if (uVar3 == 0x80000000) {
              if ((int)param_1->_padding_ == 0) {
                param_1 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
              }
              if (((char)param_1->_padding_ == '\x02') &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar12 = *(FFrameTime *)((longlong)&param_1->_padding_ + 4);
            }
            else {
              FVar12.SubFrame = 0.0;
              FVar12.FrameNumber.Value = uVar3;
            }
            fVar13 = MapTimeToAnimation(this,(FMovieSceneBaseCacheParams *)
                                             &(this->CacheSection).TypedValue.Params,
                                        ((this->CacheSection).TypedValue.Params.SimCache.field0_0x0.
                                        DebugPtr)->DurationSeconds,FVar12,FVar5,
                                        &(this->CacheSection).TypedValue);
            fVar1 = ((this->CacheSection).TypedValue.Params.SimCache.field0_0x0.DebugPtr)->
                    StartSeconds;
            FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                      (&local_90,&param_4->PreAnimatedState,&param_3->SectionKey,true);
            local_a8 = (IMovieScenePreAnimatedTokenProducer)
                       &___7FPreAnimatedNiagaraCacheTokenProducer__6B_;
            FVar10.ID = TMovieSceneAnimTypeID<FPreAnimatedNiagaraCacheTokenProducer,0>::CachedID;
            if (TMovieSceneAnimTypeID<FPreAnimatedNiagaraCacheTokenProducer,0>::CachedID == 0) {
              FVar10.ID = FMovieSceneAnimTypeID::Initialize
                                    (&TMovieSceneAnimTypeID<FPreAnimatedNiagaraCacheTokenProducer,0>
                                      ::CachedID,0);
            }
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (&param_4->PreAnimatedState,(UObject *)this_00,FVar10,&local_a8);
            UNiagaraComponent::SetDesiredAge(this_00,fVar13 + fVar1);
            UNiagaraComponent::SetAgeUpdateMode(this_00,DesiredAge);
            if ((this_00->_padding_ & 0x100000) == 0) {
              UNiagaraComponent::ResetSystem(this_00);
            }
            FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_90);
            return;
          }
          if (this->ReplayMode == DisplayCacheOnly) {
            (**(code **)(this_00->_padding_ + 0xaf8))(this_00);
            return;
          }
          if (this->ReplayMode != SimWithoutCache) {
            return;
          }
          UNiagaraComponent::SetSimCache(this_00,(UNiagaraSimCache *)0x0,false);
          return;
        }
      }
    }
  }
  return;
}

// MapTimeToAnimation @ 14ea23e80

float __thiscall
FNiagaraCacheExecutionToken::MapTimeToAnimation
          (FNiagaraCacheExecutionToken *this,FMovieSceneBaseCacheParams *param_1,float param_2,
          FFrameTime param_3,FFrameRate param_4,FMovieSceneNiagaraSectionTemplateParameter *param_5)

{
  uint uVar1;
  TRangeBound<FFrameNumber> TVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  FMovieSceneNiagaraSectionTemplateParameter *pFVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  bool bVar12;
  FFrameTime FVar13;
  FFrameTime FVar14;
  FFrameNumber FVar15;
  int iVar16;
  FFrameNumber FVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined1 auVar23 [16];
  double dVar22;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  undefined1 in_XMM3 [16];
  undefined1 auVar29 [16];
  float fVar30;
  double dVar31;
  float fVar32;
  
  pFVar10 = param_5;
  TVar2 = (param_5->SectionRange).Value.LowerBound;
  FVar17 = TVar2.Value.Value;
  TVar11 = TVar2.Type.Value;
  if (TVar11.Value != '\x01') {
    if ((TVar11.Value == '\x02') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      fVar19 = (float)(*pcVar3)();
      return fVar19;
    }
    FVar17.Value = FVar17.Value + 1;
  }
  TVar2 = (param_5->SectionRange).Value.UpperBound;
  TVar11 = TVar2.Type.Value;
  FVar15 = TVar2.Value.Value;
  if (TVar11.Value == '\x01') {
    FVar15.Value = FVar15.Value + 1;
  }
  else if ((TVar11.Value == '\x02') &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    fVar19 = (float)(*pcVar3)();
    return fVar19;
  }
  iVar9 = param_4.Denominator;
  lVar18 = (longlong)param_4.Denominator;
  fVar19 = param_2;
  if ((param_5->Params).SectionStretchMode == TimeDilate) {
    fVar19 = ((float)param_4.Denominator * 0.0 + (float)((FVar15.Value - FVar17.Value) * lVar18)) /
             (float)param_4.Numerator;
  }
  dVar5 = (double)param_4.Numerator;
  dVar6 = (double)param_4.Denominator;
  dVar25 = ((double)fVar19 * dVar5) / dVar6;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = dVar25;
  auVar29 = roundpd(in_XMM3,auVar29,1);
  dVar28 = auVar29._0_8_;
  auVar26._0_8_ = dVar25 - dVar28;
  auVar26._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar28) {
    dVar28 = __real_41dfffffffc00000;
  }
  if (dVar28 <= __real_c1e0000000000000) {
    dVar28 = __real_c1e0000000000000;
  }
  fVar30 = (float)auVar26._0_8_ - (float)(int)auVar26._0_8_;
  if ((0.0 < fVar30) && (::FFrameTime::MaxSubframe <= fVar30)) {
    fVar30 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar30) {
    fVar30 = ::FFrameTime::MaxSubframe;
  }
  iVar16 = (param_1->EndFrameOffset).Value + (param_1->StartFrameOffset).Value;
  uVar1 = FVar15.Value - 1;
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  bVar12 = false;
  FVar13.SubFrame = 0.0;
  FVar13.FrameNumber.Value = uVar1;
  if ((param_3.FrameNumber.Value.Value < (int)uVar1) ||
     ((bVar8 = bVar12, param_3.FrameNumber.Value.Value == uVar1 &&
      (param_4.Denominator = (int)param_3.SubFrame, (float)param_4.Denominator < 0.0)))) {
    bVar8 = true;
  }
  FVar14.SubFrame = 0.0;
  FVar14.FrameNumber.Value = FVar17.Value;
  if (bVar8) {
    FVar13 = param_3;
  }
  if ((FVar17.Value < FVar13.FrameNumber.Value.Value) ||
     ((FVar17.Value == FVar13.FrameNumber.Value.Value &&
      (param_5._4_4_ = FVar13.SubFrame, 0.0 < param_5._4_4_)))) {
    bVar12 = true;
  }
  if (bVar12) {
    FVar14 = FVar13;
  }
  fVar20 = param_1->PlayRate;
  if ((float)((uint)param_1->PlayRate & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    fVar20 = __real_3f800000;
  }
  param_4.Denominator = (int)FVar14.SubFrame;
  dVar25 = __real_3ff0000000000000 / dVar5;
  dVar4 = (double)iVar9;
  fVar32 = fVar19 - (float)(((double)(iVar16 * lVar18) + dVar4 * 0.0) * dVar25);
  auVar29 = roundps(auVar26,ZEXT416((uint)((float)param_4.Denominator - 0.0)),1);
  fVar27 = ((float)param_4.Denominator - 0.0) - auVar29._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar27) {
    fVar27 = ::FFrameTime::MaxSubframe;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  dVar31 = ((double)((int)auVar29._0_4_ + (FVar14.FrameNumber.Value.Value - FVar17.Value)) +
           (double)fVar27) * (double)fVar20;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar31;
  auVar29 = roundpd(auVar29,auVar23,1);
  dVar21 = auVar29._0_8_;
  dVar22 = dVar21;
  if (__real_41dfffffffc00000 <= dVar21) {
    dVar22 = __real_41dfffffffc00000;
  }
  if (dVar22 <= __real_c1e0000000000000) {
    dVar22 = __real_c1e0000000000000;
  }
  fVar20 = (float)(dVar31 - dVar21);
  if (::FFrameTime::MaxSubframe <= fVar20) {
    fVar20 = ::FFrameTime::MaxSubframe;
  }
  auVar24 = ZEXT416((uint)fVar20);
  if (fVar20 <= 0.0) {
    auVar24 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar24._0_4_) {
    auVar24._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar24._0_4_ <= 0.0) {
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar24._4_12_;
    auVar24 = auVar7 << 0x20;
  }
  fVar20 = (float)(((double)((longlong)(int)dVar22 * (longlong)iVar9) +
                   (double)auVar24._0_4_ * dVar6) / dVar5) +
           (float)(((double)((param_1->FirstLoopStartFrameOffset).Value * lVar18) + dVar4 * 0.0) *
                  dVar25);
  if ((0.0 < fVar32) &&
     (((int)(fVar30 + __real_3f000000) + (int)dVar28 + 1 + (int)auVar26._0_8_ <
       iVar16 + (FVar15.Value - FVar17.Value) ||
      (__real_38d1b717 < (float)((uint)(fVar20 - fVar32) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
     )) {
    fVar20 = FGenericPlatformMath::Fmod(fVar20,fVar32);
  }
  fVar20 = fVar20 + (float)((dVar4 * 0.0 + (double)((param_1->StartFrameOffset).Value * lVar18)) *
                           dVar25);
  if (param_1->bReverse != 0) {
    fVar20 = fVar19 - fVar20;
  }
  if ((pFVar10->Params).SectionStretchMode == TimeDilate) {
    fVar20 = (fVar20 / fVar19) * param_2;
  }
  return fVar20;
}

