// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// Execute @ 14ea6b0d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaSectionPostRollExecutionToken::Execute
          (FMediaSectionPostRollExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  UMediaPlayer *this_00;
  code *pcVar1;
  bool bVar2;
  FMovieSceneMediaData *pFVar3;
  FName FVar4;
  float fVar5;
  
  pFVar3 = FPersistentEvaluationData::Find<FMovieSceneMediaData>(param_3,&param_3->SectionKey);
  if (pFVar3 == (FMovieSceneMediaData *)0x0) {
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
  this_00 = pFVar3->MediaPlayer;
  if (this_00 != (UMediaPlayer *)0x0) {
    FVar4 = UMediaPlayer::GetPlayerName(this_00);
    if (*(longlong *)FVar4 != 0) {
      bVar2 = UMediaPlayer::IsClosed(this_00);
      if (!bVar2) {
        fVar5 = UMediaPlayer::GetRate(this_00);
        if (fVar5 != 0.0) {
          UMediaPlayer::SetRate(this_00,0.0);
          return;
        }
      }
    }
  }
  return;
}

