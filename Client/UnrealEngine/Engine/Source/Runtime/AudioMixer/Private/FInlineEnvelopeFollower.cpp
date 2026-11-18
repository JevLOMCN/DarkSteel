// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FInlineEnvelopeFollower @ 1464d7da0

FInlineEnvelopeFollower * __thiscall
Audio::FInlineEnvelopeFollower::FInlineEnvelopeFollower
          (FInlineEnvelopeFollower *this,FInlineEnvelopeFollowerInitParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInlineEnvelopeFollower *pFVar3;
  float fVar4;
  float fVar5;
  
  FAttackRelease::FAttackRelease
            ((FAttackRelease *)this,param_1->SampleRate,param_1->AttackTimeMsec,
             param_1->ReleaseTimeMsec,param_1->bIsAnalog);
  this->Value = 0.0;
  this->Mode = param_1->Mode;
  this->AnalysisValue = 0.0;
  this->AnalysisWindowMsec = 5.0;
  this->AnalysisFilterAlpha = 0.0;
  this->AnalysisFilterBeta = 1.0;
  fVar4 = param_1->AnalysisWindowMsec;
  if (0.0 < fVar4) {
    this->AnalysisWindowMsec = fVar4;
    if (0.0 < *(float *)&this->_padding_) {
      fVar4 = expf(__real_c47a0000 / (*(float *)&this->_padding_ * fVar4));
      fVar5 = __real_3f800000 - fVar4;
      this->AnalysisFilterAlpha = fVar4;
      this->AnalysisFilterBeta = fVar5;
      return this;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5241047625217605135>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                       ,0x1f1,"(InSampleRate > 0.f) && (InWinMsec > 0.f)");
    if (!bVar2) {
      return this;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5241047625217605269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                       ,0x16b,"InAnalysisWindowMsec > 0.f");
    if (!bVar2) {
      return this;
    }
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FInlineEnvelopeFollower *)(*pcVar1)();
  return pFVar3;
}

