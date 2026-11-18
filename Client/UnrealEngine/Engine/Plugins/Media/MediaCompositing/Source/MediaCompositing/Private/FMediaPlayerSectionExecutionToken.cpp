// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// Execute @ 14ea6a3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerSectionExecutionToken::Execute
          (FMediaPlayerSectionExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  uchar uVar1;
  int iVar2;
  UMediaPlayer *this_00;
  UMediaSource *pUVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  IMovieScenePlayer *pIVar12;
  uint uVar13;
  bool bVar14;
  FSectionData *pFVar15;
  UObject *pUVar16;
  FResolvedPropertyAndFunction *this_01;
  UMediaPlayer **ppUVar17;
  FMovieSceneAnimTypeID FVar18;
  UMediaSource *pUVar19;
  longlong lVar20;
  longlong lVar21;
  FWeakObjectPtr *pFVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStackY_208 [32];
  longlong local_1c8;
  IMovieScenePreAnimatedTokenProducer local_1c0;
  FWeakObjectPtr local_1b8;
  IMovieScenePlayer *local_1b0;
  longlong local_1a8;
  FWeakObjectPtr *local_1a0;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_198;
  undefined1 local_188 [120];
  undefined1 local_110 [32];
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d0;
  undefined4 local_c8;
  FScopedPreAnimatedCaptureSource local_b8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b0 = param_4;
  pFVar15 = FPersistentEvaluationData::GetSectionData<PropertyTemplate::FSectionData>(param_3);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = __real_41296e6baaaaaaaa;
  auVar24 = roundpd(auVar24,auVar24,1);
  lVar21 = (longlong)auVar24._0_8_;
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_198,&param_2->ObjectBindingID,&param_2->SequenceID);
  uVar10 = _UNK_15076cba8;
  uVar8 = ___xmm_ffffffffffffffffffffffff00000000;
  uVar7 = _UNK_150631d98;
  uVar6 = ___xmm_00000000ffffffff0000008000000000;
  fVar5 = __real_3f800000;
  local_1a0 = &local_198.DataPtr[local_198.ArrayNum].WeakPtr;
  pFVar22 = &(local_198.DataPtr)->WeakPtr;
  if (&(local_198.DataPtr)->WeakPtr != local_1a0) {
    do {
      local_1b8 = *pFVar22;
      pUVar16 = FWeakObjectPtr::Get(&local_1b8);
      if (pUVar16 != (UObject *)0x0) {
        if (((pFVar15->PropertyBindings).Object == (FTrackInstancePropertyBindings *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = FTrackInstancePropertyBindings::FindOrAdd
                            ((pFVar15->PropertyBindings).Object,pUVar16);
        uVar1 = (this_01->ResolvedProperty).TypeIndex;
        if (uVar1 == '\0') {
          ppUVar17 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UMediaPlayer_*>
                               ((FCachedProperty *)this_01);
        }
        else {
          if (uVar1 != '\x01') goto LAB_14ea6a831;
          ppUVar17 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                               ((FVolatileProperty *)this_01,false);
        }
        pIVar12 = local_1b0;
        if ((ppUVar17 != (UMediaPlayer **)0x0) &&
           (this_00 = *ppUVar17, this_00 != (UMediaPlayer *)0x0)) {
          FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                    (&local_b8,&local_1b0->PreAnimatedState,&param_3->SectionKey,true);
          local_1c0 = (IMovieScenePreAnimatedTokenProducer)
                      &___7__TStatelessPreAnimatedTokenProducer_UFMediaPlayerPreAnimatedState____6B_
          ;
          FVar18.ID = TMovieSceneAnimTypeID<FMediaPlayerSectionExecutionToken,0>::CachedID;
          if (TMovieSceneAnimTypeID<FMediaPlayerSectionExecutionToken,0>::CachedID == 0) {
            FVar18.ID = FMovieSceneAnimTypeID::Initialize
                                  (&TMovieSceneAnimTypeID<FMediaPlayerSectionExecutionToken,0>::
                                    CachedID,0);
          }
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (&pIVar12->PreAnimatedState,(UObject *)this_00,FVar18,&local_1c0);
          local_1c0 = (IMovieScenePreAnimatedTokenProducer)
                      &___7IMovieScenePreAnimatedTokenProducer__6B_;
          FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_b8);
          iVar2 = this_00->PlaylistIndex;
          if ((iVar2 == -1) ||
             (UMediaPlayer::EnsurePlaylist(this_00),
             (this_00->Playlist).field0_0x0.DebugPtr == (UMediaPlaylist *)0x0)) {
LAB_14ea6a5df:
            uVar11 = _UNK_15076cba8;
            uVar9 = ___xmm_ffffffffffffffffffffffff00000000;
            local_188._104_8_ = (this->CurrentTime).Ticks;
            ___xmm_ffffffffffffffffffffffff00000000 = (int)uVar8;
            _UNK_15076cba4 = SUB84(uVar8,4);
            local_188._0_4_ = ___xmm_ffffffffffffffffffffffff00000000;
            local_188._4_4_ = _UNK_15076cba4;
            _UNK_15076cba8 = (int)uVar10;
            _UNK_15076cbac = SUB84(uVar10,4);
            local_188._8_4_ = _UNK_15076cba8;
            local_188._12_4_ = _UNK_15076cbac;
            local_188[0x71] = (param_1->Status != Playing) + Enabled;
            local_188._16_4_ = -1;
            local_188._20_4_ = -1;
            local_188._24_4_ = 0;
            local_188[0x72] = (this->bLoop == false) + Enabled;
            local_188._32_8_ = (FScriptContainerElement *)0x0;
            local_188._40_4_ = 0;
            local_188._44_4_ = 0;
            local_188._48_8_ = (FScriptContainerElement *)0x0;
            local_188._56_4_ = 0;
            local_188._60_4_ = 0;
            local_188._64_8_ = (FScriptContainerElement *)0x0;
            local_188._72_4_ = 0;
            local_188._76_4_ = 0;
            local_188._80_8_ = (FScriptContainerElement *)0x0;
            local_188._88_4_ = 0;
            local_188._92_4_ = 0;
            local_188[0x60] = UseTrackOptionIndices;
            local_188[0x70] = RelativeToStartTime;
            local_110._0_8_ = (FScriptContainerElement *)0x0;
            local_110._8_8_ = 0;
            local_f0 = (void *)0x0;
            local_e8 = uVar6;
            uStack_e0 = uVar7;
            local_d0 = (void *)0x0;
            local_c8 = 0;
            ___xmm_ffffffffffffffffffffffff00000000 = uVar9;
            _UNK_15076cba8 = uVar11;
            UMediaPlayer::OpenSourceWithOptions
                      (this_00,this->MediaSource,(FMediaPlayerOptions *)local_188);
            local_c8 = 0;
            if (local_d0 != (void *)0x0) {
              FMemory::Free(local_d0);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_110,0,local_110._8_4_);
            iVar2 = SUB84(local_110._8_8_,4);
            local_110._8_8_ = local_110._8_8_ & 0xffffffff00000000;
            if (iVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,(ForAnyElementType *)local_110,0,(int *)(local_110 + 0xc));
            }
            uVar13 = local_e8._4_4_;
            uStack_e0 = 0xffffffff;
            local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
            if (0x80 < uVar13) {
              local_e8 = 0x8000000000;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_110 + 0x10),0);
            }
            if (local_f0 != (void *)0x0) {
              FMemory::Free(local_f0);
            }
            if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_110._0_8_);
            }
            if ((FScriptContainerElement *)local_188._80_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_188._80_8_);
            }
            if ((FScriptContainerElement *)local_188._64_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_188._64_8_);
            }
            if ((FScriptContainerElement *)local_188._48_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_188._48_8_);
            }
            if ((FScriptContainerElement *)local_188._32_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_188._32_8_);
            }
          }
          else {
            UMediaPlayer::EnsurePlaylist(this_00);
            pUVar3 = this->MediaSource;
            pUVar19 = UMediaPlaylist::Get((this_00->Playlist).field0_0x0.DebugPtr,iVar2);
            if (pUVar19 != pUVar3) goto LAB_14ea6a5df;
          }
          UMediaPlayer::GetDuration(this_00);
          if (local_1a8 != 0) {
            lVar20 = (this->CurrentTime).Ticks;
            if (this->bLoop == false) {
              if (lVar20 <= local_1a8) goto LAB_14ea6a764;
            }
            else {
              (this->CurrentTime).Ticks = lVar20 % local_1a8;
LAB_14ea6a764:
              UMediaPlayer::GetTime(this_00);
              if (param_1->Status == Playing) {
                bVar14 = UMediaPlayer::IsPlaying(this_00);
                if (bVar14) {
                  if (param_1->bHasJumped) {
                    lVar20 = local_1c8 - (this->CurrentTime).Ticks;
                    if (lVar20 < 0) {
                      lVar20 = -lVar20;
                    }
                    if (lVar21 <= lVar20) {
                      UMediaPlayer::Seek(this_00,&this->CurrentTime);
                    }
                  }
                }
                else {
                  lVar20 = local_1c8 - (this->CurrentTime).Ticks;
                  if (lVar20 < 0) {
                    lVar20 = -lVar20;
                  }
                  if (lVar21 <= lVar20) {
                    UMediaPlayer::Seek(this_00,&this->CurrentTime);
                  }
                  fVar23 = UMediaPlayer::GetRate(this_00);
                  if (fVar23 != fVar5) {
                    UMediaPlayer::SetRate(this_00,fVar5);
                  }
                }
                goto LAB_14ea6a831;
              }
              lVar20 = local_1c8 - (this->CurrentTime).Ticks;
              if (lVar20 < 0) {
                lVar20 = -lVar20;
              }
              if (lVar21 <= lVar20) {
                UMediaPlayer::Seek(this_00,&this->CurrentTime);
              }
            }
            UMediaPlayer::Pause(this_00);
          }
        }
      }
LAB_14ea6a831:
      pFVar22 = pFVar22 + 1;
    } while (pFVar22 != local_1a0);
  }
  return;
}

