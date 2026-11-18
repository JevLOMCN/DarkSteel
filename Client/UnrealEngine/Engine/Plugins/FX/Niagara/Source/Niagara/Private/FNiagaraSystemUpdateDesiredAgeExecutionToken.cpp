// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Execute @ 148faaf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FNiagaraSystemUpdateDesiredAgeExecutionToken::Execute
          (FNiagaraSystemUpdateDesiredAgeExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  uint uVar1;
  ENiagaraExecutionState EVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  UNiagaraComponent *this_00;
  UClass *pUVar9;
  FMovieSceneRootEvaluationTemplateInstance *this_01;
  UMovieSceneSequence *pUVar10;
  longlong lVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  FNiagaraSystemInstanceController *this_02;
  FMovieSceneContext *pFVar14;
  int iVar15;
  ulonglong uVar16;
  FWeakObjectPtr *pFVar17;
  FMovieSceneSequenceID *pFVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 unaff_XMM6 [16];
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  FNiagaraSystemInstanceController *local_1e0;
  FSharedReferencer<1> local_1d8;
  undefined8 local_1d0;
  FWeakObjectPtr *local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  IMovieScenePreAnimatedTokenProducer local_1a8;
  int local_1a0;
  float fStack_19c;
  uint local_198;
  undefined4 uStack_194;
  int local_190;
  float fStack_18c;
  int local_188;
  float fStack_184;
  FWeakObjectPtr local_180;
  FPersistentEvaluationData *local_178;
  FNiagaraSystemUpdateDesiredAgeExecutionToken *local_170;
  undefined8 local_168;
  FWeakObjectPtr *local_160;
  IMovieScenePlayer *local_158;
  FMovieSceneSequenceID *local_150;
  undefined8 local_148;
  FSharedReferencer<1> local_140;
  undefined8 local_138;
  FSharedReferencer<1> local_130;
  TRange<FFrameTime> local_128;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_110;
  TRange<FFrameTime> local_100;
  FScopedPreAnimatedCaptureSource local_e8;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_208;
  pFVar18 = &param_2->SequenceID;
  local_158 = param_4;
  local_178 = param_3;
  local_170 = this;
  local_150 = pFVar18;
  IMovieScenePlayer::FindBoundObjects(param_4,&local_110,&param_2->ObjectBindingID,pFVar18);
  fVar7 = __real_3e800000;
  fVar6 = __real_3f000000;
  fVar5 = __real_461c4000;
  fVar4 = __real_38d1b717;
  local_160 = &local_110.DataPtr[local_110.ArrayNum].WeakPtr;
  pFVar17 = &(local_110.DataPtr)->WeakPtr;
  if (&(local_110.DataPtr)->WeakPtr != local_160) {
    while( true ) {
      local_180 = *pFVar17;
      local_1c8 = pFVar17;
      this_00 = (UNiagaraComponent *)FWeakObjectPtr::Get(&local_180);
      if (this_00 == (UNiagaraComponent *)0x0) break;
      pUVar9 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
      iVar15 = (int)pUVar9->_padding_;
      if (*(int *)(this_00->_padding_ + 0x38) < iVar15) {
        return;
      }
      if ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar9->_padding_) {
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_virtual_void___cdecl_FNiagaraSystemUpdateDesiredAgeExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
           ::__l10::_thread_safe_static_guard_1__) &&
         (_Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraSystemUpdateDesiredAgeExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
                               ::__l10::_thread_safe_static_guard_1__),
         `public:_virtual_void___cdecl_FNiagaraSystemUpdateDesiredAgeExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
         ::__l10::_thread_safe_static_guard_1__ == -1)) {
        uVar12 = TMovieSceneAnimTypeID<FNiagaraSystemUpdateDesiredAgeExecutionToken,0>::CachedID;
        if (TMovieSceneAnimTypeID<FNiagaraSystemUpdateDesiredAgeExecutionToken,0>::CachedID == 0) {
          uVar12 = FMovieSceneAnimTypeID::Initialize
                             (&TMovieSceneAnimTypeID<FNiagaraSystemUpdateDesiredAgeExecutionToken,0>
                               ::CachedID,0);
        }
        `public:_virtual_void___cdecl_FNiagaraSystemUpdateDesiredAgeExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
        ::__l10::TypeID.ID = uVar12;
        _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraSystemUpdateDesiredAgeExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
                             ::__l10::_thread_safe_static_guard_1__);
      }
      FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                (&local_e8,&param_4->PreAnimatedState,&local_178->TrackKey,true);
      local_1a8 = (IMovieScenePreAnimatedTokenProducer)
                  &___7FPreAnimatedNiagaraComponentTokenProducer__6B_;
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (&param_4->PreAnimatedState,(UObject *)this_00,
                 `public:_virtual_void___cdecl_FNiagaraSystemUpdateDesiredAgeExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
                 ::__l10::TypeID,&local_1a8);
      local_1a8 = (IMovieScenePreAnimatedTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_
      ;
      FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_e8);
      UNiagaraComponent::SetForceSolo(this_00,true);
      UNiagaraComponent::SetAgeUpdateMode(this_00,this->AgeUpdateMode);
      UNiagaraComponent::SetAllowScalability(this_00,this->bAllowScalability);
      this_01 = (FMovieSceneRootEvaluationTemplateInstance *)
                (**(code **)(param_4->_padding_ + 0x18))(param_4);
      pUVar10 = FMovieSceneRootEvaluationTemplateInstance::GetSequence(this_01,pFVar18);
      if ((pUVar10 != (UMovieSceneSequence *)0x0) &&
         (lVar11 = (**(code **)(pUVar10->_padding_ + 0x2f8))(pUVar10), lVar11 != 0)) {
        UNiagaraComponent::SetSeekDelta
                  (this_00,(float)(int)((ulonglong)*(undefined8 *)(lVar11 + 0x140) >> 0x20) /
                           (float)*(int *)(lVar11 + 0x140));
        UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta
                  (this_00,*(char *)(lVar11 + 0x148) == '\0');
      }
      local_1d8.ReferenceController =
           (this_00->SystemInstanceController).SharedReferenceCount.ReferenceController;
      this_02 = (this_00->SystemInstanceController).Object;
      if (local_1d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1d8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1d8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
      iVar15 = (this->SpawnSectionStartFrame).Value;
      fStack_19c = 0.0;
      local_1e0 = this_02;
      local_1a0 = iVar15;
      if (uVar1 == 0x80000000) {
        if ((int)param_1->_padding_ == 0) {
          pFVar14 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
          if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar14 = param_1;
          if (((char)param_1->_padding_ == '\x02') &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_1c0 = *(ulonglong *)((longlong)&pFVar14->_padding_ + 4);
      }
      else {
        local_1c0 = (ulonglong)uVar1;
      }
      local_1d0 = CONCAT44(fStack_19c,local_1a0);
      uVar16 = local_1c0 & 0xffffffff;
      local_1e8 = local_1c0;
      if (((int)local_1c0 < iVar15) ||
         (((int)local_1c0 == iVar15 &&
          (local_1e8._4_4_ = (float)(local_1c0 >> 0x20), local_1e8._4_4_ < fStack_19c)))) {
        bVar8 = this->SpawnSectionStartBehavior == Activate;
        uVar13 = local_1c0;
LAB_148fab52e:
        if ((((bVar8) && ((this_00->_padding_ & 0x100000) != 0)) &&
            ((**(code **)(this_00->_padding_ + 0xaf8))(this_00,uVar13,uVar16),
            this_02 != (FNiagaraSystemInstanceController *)0x0)) &&
           ((this_02->SystemInstance).Object != (FNiagaraSystemInstance *)0x0)) {
          FNiagaraSystemInstanceController::Reset<enum_FNiagaraSystemInstance::EResetMode>
                    (this_02,ResetAll);
        }
      }
      else {
        local_198 = (this->SpawnSectionStartFrame).Value;
        local_100.LowerBound._0_8_ = param_1->_padding_;
        local_100._8_8_ = param_1->_padding_;
        local_100.UpperBound.Value = (FFrameTime)param_1->_padding_;
        uStack_194 = 0;
        local_128.LowerBound.Value.SubFrame = 0.0;
        local_128.LowerBound.Value.FrameNumber.Value = local_198;
        local_128.LowerBound.Type.Value = '\x01';
        local_128.UpperBound.Type.Value = '\x01';
        local_128.UpperBound.Value = local_128.LowerBound.Value;
        bVar8 = TRange<FFrameTime>::Overlaps(&local_100,&local_128);
        if (bVar8) {
          if (this->SpawnSectionStartBehavior == Activate) {
            if ((((this_00->_padding_ & 0x100000) != 0) &&
                ((**(code **)(this_00->_padding_ + 0xaf8))(this_00),
                this_02 != (FNiagaraSystemInstanceController *)0x0)) &&
               ((this_02->SystemInstance).Object != (FNiagaraSystemInstance *)0x0)) {
              FNiagaraSystemInstanceController::Reset<enum_FNiagaraSystemInstance::EResetMode>
                        (this_02,ResetAll);
            }
            (**(code **)(this_00->_padding_ + 0x2b8))(this_00,0);
            local_140.ReferenceController =
                 (this_00->SystemInstanceController).SharedReferenceCount.ReferenceController;
            local_1e0 = (this_00->SystemInstanceController).Object;
            if (local_140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_140.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_140.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_148 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1d8,&local_140);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_140.ReferenceController);
            this_02 = local_1e0;
          }
        }
        else {
          uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
          iVar15 = (this->SpawnSectionEndFrame).Value;
          fStack_18c = 0.0;
          local_190 = iVar15;
          if (uVar1 == 0x80000000) {
            if ((int)param_1->_padding_ == 0) {
              pFVar14 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
              if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              pFVar14 = param_1;
              if (((char)param_1->_padding_ == '\x02') &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            local_1b8 = *(ulonglong *)((longlong)&pFVar14->_padding_ + 4);
          }
          else {
            local_1b8 = (ulonglong)uVar1;
          }
          local_1e8 = CONCAT44(fStack_18c,local_190);
          uVar16 = local_1b8 & 0xffffffff;
          local_1d0 = local_1b8;
          if (((int)local_1b8 < iVar15) ||
             (((int)local_1b8 == iVar15 &&
              (local_1d0._4_4_ = (float)(local_1b8 >> 0x20), local_1d0._4_4_ < fStack_18c)))) {
            if (this->SpawnSectionEvaluateBehavior == ActivateIfInactive) {
              if ((this_00->_padding_ & 0x100000) == 0) {
                (**(code **)(this_00->_padding_ + 0x2b8))(this_00,0,uVar16);
                local_130.ReferenceController =
                     (this_00->SystemInstanceController).SharedReferenceCount.ReferenceController;
                local_1e0 = (this_00->SystemInstanceController).Object;
                if (local_130.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_130.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(local_130.ReferenceController)->SharedReferenceCount + 1)
                  ;
                  UNLOCK();
                }
                local_138 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1d8,&local_130);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_130.ReferenceController);
                this_02 = local_1e0;
              }
              if ((this_02 != (FNiagaraSystemInstanceController *)0x0) &&
                 ((this_02->SystemInstance).Object != (FNiagaraSystemInstance *)0x0)) {
                FNiagaraSystemInstanceController::
                SetRequestedExecutionState_Deferred<enum_ENiagaraExecutionState>(this_02,Active);
              }
            }
          }
          else {
            if (this->SpawnSectionEndBehavior != SetSystemInactive) {
              bVar8 = this->SpawnSectionEndBehavior == Deactivate;
              uVar13 = local_1b8;
              goto LAB_148fab52e;
            }
            if ((this_02 != (FNiagaraSystemInstanceController *)0x0) &&
               ((this_02->SystemInstance).Object != (FNiagaraSystemInstance *)0x0)) {
              FNiagaraSystemInstanceController::
              SetRequestedExecutionState_Deferred<enum_ENiagaraExecutionState>(this_02,Inactive);
            }
          }
        }
      }
      UNiagaraComponent::SetRenderingEnabled
                (this_00,!param_1->bSectionPreRoll && !param_1->bHasPreRollEndTime);
      if ((((this_02 != (FNiagaraSystemInstanceController *)0x0) &&
           ((this_02->SystemInstance).Object != (FNiagaraSystemInstance *)0x0)) &&
          (EVar2 = ((this_02->SystemInstance).Object)->ActualExecutionState, EVar2 != Complete)) &&
         (EVar2 != Disabled)) {
        local_168 = param_1->_padding_;
        iVar15 = (this->SpawnSectionStartFrame).Value;
        uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
        local_1e8 = CONCAT44(local_1e8._4_4_,iVar15);
        fStack_184 = 0.0;
        uVar16 = local_168 >> 0x20;
        local_188 = iVar15;
        if (uVar1 == 0x80000000) {
          uVar13 = local_168 & 0xffffffff;
          if ((int)param_1->_padding_ == 0) {
            pFVar14 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
            if (*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L"");
              if (bVar8) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar15 = (int)local_1e8;
            }
          }
          else {
            pFVar14 = param_1;
            if ((char)param_1->_padding_ == '\x02') {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L"");
              if (bVar8) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar15 = (int)local_1e8;
            }
          }
          local_1b0 = *(ulonglong *)((longlong)&pFVar14->_padding_ + 4);
          pFVar17 = local_1c8;
          this = local_170;
        }
        else {
          local_1b0 = (ulonglong)uVar1;
          uVar13 = local_168;
        }
        local_1c8 = (FWeakObjectPtr *)CONCAT44(fStack_184,local_188);
        local_1d0._4_4_ = (float)(local_1b0 >> 0x20);
        auVar19 = roundps(in_XMM2,ZEXT416((uint)(local_1d0._4_4_ - fStack_184)),1);
        fVar20 = (local_1d0._4_4_ - fStack_184) - auVar19._0_4_;
        if (::FFrameTime::MaxSubframe <= fVar20) {
          fVar20 = ::FFrameTime::MaxSubframe;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        in_XMM2 = ZEXT416((uint)((((float)((longlong)
                                           ((int)auVar19._0_4_ + ((int)local_1b0 - iVar15)) *
                                          (longlong)local_168._4_4_) + fVar20 * (float)(int)uVar16)
                                 / (float)(int)uVar13) * fVar5 + fVar6));
        auVar19 = roundps(unaff_XMM6,in_XMM2,1);
        unaff_XMM6._4_12_ = auVar19._4_12_;
        unaff_XMM6._0_4_ = auVar19._0_4_ * fVar4;
        local_1d0 = local_1b0;
        if (0.0 <= unaff_XMM6._0_4_) {
          bVar8 = UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta(this_00);
          if (bVar8) {
            fVar20 = UNiagaraComponent::GetSeekDelta(this_00);
            fVar20 = fVar20 * fVar7;
          }
          else {
            fVar20 = 0.0;
          }
          UNiagaraComponent::SetDesiredAge(this_00,fVar20 + unaff_XMM6._0_4_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.ReferenceController);
      pFVar17 = pFVar17 + 1;
      param_4 = local_158;
      pFVar18 = local_150;
      if (pFVar17 == local_160) {
        return;
      }
    }
  }
  return;
}

