// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// Execute @ 14ea6a890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerSectionPreRollExecutionToken::Execute
          (FMediaPlayerSectionPreRollExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  uchar uVar1;
  int iVar2;
  UMediaPlayer *this_00;
  UMediaSource *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  bool bVar12;
  FSectionData *pFVar13;
  UObject *pUVar14;
  FResolvedPropertyAndFunction *this_01;
  UMediaPlayer **ppUVar15;
  UMediaSource *pUVar16;
  FTimespan FVar17;
  longlong lVar18;
  FWeakObjectPtr *pFVar19;
  undefined1 auVar20 [16];
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  longlong local_170;
  longlong local_168;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_160;
  undefined1 local_148 [120];
  undefined1 local_d0 [32];
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_90;
  undefined4 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar13 = FPersistentEvaluationData::GetSectionData<PropertyTemplate::FSectionData>(param_3);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = __real_41296e6baaaaaaaa;
  auVar20 = roundpd(auVar20,auVar20,1);
  local_168 = (longlong)auVar20._0_8_;
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_160,&param_2->ObjectBindingID,&param_2->SequenceID);
  uVar9 = _UNK_15076cba8;
  uVar7 = ___xmm_ffffffffffffffffffffffff00000000;
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  pFVar19 = &(local_160.DataPtr)->WeakPtr;
  do {
    if (pFVar19 == &local_160.DataPtr[local_160.ArrayNum].WeakPtr) {
      ___xmm_ffffffffffffffffffffffff00000000 = (int)___xmm_ffffffffffffffffffffffff00000000;
      _UNK_15076cba4 = SUB84(___xmm_ffffffffffffffffffffffff00000000,4);
      _UNK_15076cba8 = (int)_UNK_15076cba8;
      _UNK_15076cbac = SUB84(_UNK_15076cba8,4);
      return;
    }
    local_178 = *pFVar19;
    pUVar14 = FWeakObjectPtr::Get(&local_178);
    if (pUVar14 != (UObject *)0x0) {
      if (((pFVar13->PropertyBindings).Object == (FTrackInstancePropertyBindings *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = FTrackInstancePropertyBindings::FindOrAdd
                          ((pFVar13->PropertyBindings).Object,pUVar14);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        ppUVar15 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UMediaPlayer_*>
                             ((FCachedProperty *)this_01);
      }
      else {
        if (uVar1 != '\x01') goto LAB_14ea6abbd;
        ppUVar15 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                             ((FVolatileProperty *)this_01,false);
      }
      if ((ppUVar15 != (UMediaPlayer **)0x0) &&
         (this_00 = *ppUVar15, this_00 != (UMediaPlayer *)0x0)) {
        iVar2 = this_00->PlaylistIndex;
        if (iVar2 != -1) {
          UMediaPlayer::EnsurePlaylist(this_00);
          pUVar3 = this->MediaSource;
          pUVar16 = UMediaPlaylist::Get((this_00->Playlist).field0_0x0.DebugPtr,iVar2);
          if (pUVar16 == pUVar3) {
            UMediaPlayer::GetDuration(this_00);
            if ((local_170 != 0) && ((this->StartTime).Ticks < local_170)) {
              FVar17 = UMediaPlayer::GetTime(this_00);
              lVar18 = *(longlong *)FVar17.Ticks - (this->StartTime).Ticks;
              if (lVar18 < 0) {
                lVar18 = -lVar18;
              }
              if (local_168 <= lVar18) {
                UMediaPlayer::Seek(this_00,&this->StartTime);
              }
              UMediaPlayer::SetRate(this_00,0.0);
            }
            goto LAB_14ea6abbd;
          }
        }
        uVar10 = _UNK_15076cba8;
        uVar8 = ___xmm_ffffffffffffffffffffffff00000000;
        local_148._104_8_ = (this->StartTime).Ticks;
        ___xmm_ffffffffffffffffffffffff00000000 = (int)uVar7;
        _UNK_15076cba4 = SUB84(uVar7,4);
        local_148._0_4_ = ___xmm_ffffffffffffffffffffffff00000000;
        local_148._4_4_ = _UNK_15076cba4;
        _UNK_15076cba8 = (int)uVar9;
        _UNK_15076cbac = SUB84(uVar9,4);
        local_148._8_4_ = _UNK_15076cba8;
        local_148._12_4_ = _UNK_15076cbac;
        local_148[0x72] = (this->bLoop == false) + Enabled;
        local_148._16_4_ = -1;
        local_148._20_4_ = -1;
        local_148._24_4_ = 0;
        local_148._32_8_ = (FScriptContainerElement *)0x0;
        local_148._40_4_ = 0;
        local_148._44_4_ = 0;
        local_148._48_8_ = (FScriptContainerElement *)0x0;
        local_148._56_4_ = 0;
        local_148._60_4_ = 0;
        local_148._64_8_ = (FScriptContainerElement *)0x0;
        local_148._72_4_ = 0;
        local_148._76_4_ = 0;
        local_148._80_8_ = (FScriptContainerElement *)0x0;
        local_148._88_4_ = 0;
        local_148._92_4_ = 0;
        local_148[0x60] = UseTrackOptionIndices;
        local_148[0x70] = RelativeToStartTime;
        local_148[0x71] = Disabled;
        local_d0._0_8_ = (FScriptContainerElement *)0x0;
        local_d0._8_8_ = 0;
        local_b0 = (void *)0x0;
        local_a8 = uVar5;
        uStack_a0 = uVar6;
        local_90 = (void *)0x0;
        local_88 = 0;
        ___xmm_ffffffffffffffffffffffff00000000 = uVar8;
        _UNK_15076cba8 = uVar10;
        UMediaPlayer::OpenSourceWithOptions
                  (this_00,this->MediaSource,(FMediaPlayerOptions *)local_148);
        local_88 = 0;
        if (local_90 != (void *)0x0) {
          FMemory::Free(local_90);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_d0,0,local_d0._8_4_);
        iVar2 = SUB84(local_d0._8_8_,4);
        local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
        }
        uVar11 = local_a8._4_4_;
        uStack_a0 = 0xffffffff;
        local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
        if (0x80 < uVar11) {
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
        if ((FScriptContainerElement *)local_148._80_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._80_8_);
        }
        if ((FScriptContainerElement *)local_148._64_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._64_8_);
        }
        if ((FScriptContainerElement *)local_148._48_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._48_8_);
        }
        if ((FScriptContainerElement *)local_148._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._32_8_);
        }
      }
    }
LAB_14ea6abbd:
    pFVar19 = pFVar19 + 1;
  } while( true );
}

