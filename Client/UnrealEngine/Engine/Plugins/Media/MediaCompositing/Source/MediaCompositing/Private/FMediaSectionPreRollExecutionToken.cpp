// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// Execute @ 14ea6b170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaSectionPreRollExecutionToken::Execute
          (FMediaSectionPreRollExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  UMediaPlayer *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneMediaData *pFVar4;
  UObject *this_01;
  UClass *pUVar5;
  IMediaPlayerProxyInterface *pIVar6;
  UMediaSource *pUVar7;
  undefined8 *puVar8;
  FString *pFVar9;
  float fVar10;
  undefined1 auStackY_198 [32];
  uint7 uStack_167;
  uint7 uStack_157;
  void *local_148 [2];
  TRange<FTimespan> local_138;
  undefined1 local_118 [184];
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar4 = FPersistentEvaluationData::Find<FMovieSceneMediaData>(param_3,&param_3->SectionKey);
  if (pFVar4 == (FMovieSceneMediaData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                       ,0x146,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = pFVar4->MediaPlayer;
  this_01 = FWeakObjectPtr::Get(&(pFVar4->PlayerProxy).WeakPtr);
  if (this_01 == (UObject *)0x0) {
    pIVar6 = (IMediaPlayerProxyInterface *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
    pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar5);
  }
  pUVar7 = UMovieSceneMediaSection::GetMediaSourceOrProxy
                     (param_4,(FMovieSceneSequenceID)(param_2->SequenceID).Value,
                      (UMediaSource *)this->_padding_,(FMovieSceneObjectBindingID *)&this->_padding_
                      ,(int)this->_padding_);
  if ((this_00 != (UMediaPlayer *)0x0) && (pUVar7 != (UMediaSource *)0x0)) {
    puVar8 = (undefined8 *)(**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,local_148);
    pFVar9 = UMediaPlayer::GetUrl(this_00);
    iVar3 = (pFVar9->Data).ArrayNum;
    if (iVar3 == *(int *)(puVar8 + 1)) {
      if (iVar3 < 2) {
        bVar2 = false;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,(wchar_t *)*puVar8);
        bVar2 = iVar3 != 0;
      }
    }
    else {
      bVar2 = *(int *)(puVar8 + 1) + iVar3 != 1;
    }
    if (local_148[0] != (void *)0x0) {
      FMemory::Free(local_148[0]);
    }
    if (bVar2) {
      (pFVar4->SeekOnOpenTime).Ticks = (this->StartTime).Ticks;
      FMediaSectionBaseExecutionToken::MakeMediaPlayerOptions
                ((FMediaSectionBaseExecutionToken *)this,(FMediaPlayerOptions *)local_118,pIVar6,
                 pFVar4);
      UMediaPlayer::OpenSourceWithOptions(this_00,pUVar7,(FMediaPlayerOptions *)local_118);
      local_58 = 0;
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_118 + 0x78));
      if ((FScriptContainerElement *)local_118._80_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._80_8_);
      }
      if ((FScriptContainerElement *)local_118._64_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._64_8_);
      }
      if ((FScriptContainerElement *)local_118._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._48_8_);
      }
      if ((FScriptContainerElement *)local_118._32_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._32_8_);
      }
    }
    else if ((param_1->Status != Playing) || (param_1->bHasJumped)) {
      fVar10 = UMediaPlayer::GetRate(this_00);
      if (fVar10 != 0.0) {
        UMediaPlayer::SetRate(this_00,0.0);
      }
      UMediaPlayer::Seek(this_00,&this->StartTime);
      local_138.UpperBound._0_8_ = (ulonglong)uStack_157 << 8;
      local_138.LowerBound._0_8_ = (ulonglong)uStack_167 << 8;
      local_138.UpperBound.Value.Ticks = 0;
      local_138.LowerBound.Value.Ticks = 0;
      UMediaPlayer::SetBlockOnTimeRange(this_00,&local_138);
    }
  }
  return;
}

