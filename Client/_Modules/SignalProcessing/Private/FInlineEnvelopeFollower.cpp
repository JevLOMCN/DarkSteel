// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// Init @ 1444c3560

void __thiscall
Audio::FInlineEnvelopeFollower::Init
          (FInlineEnvelopeFollower *this,FInlineEnvelopeFollowerInitParams *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = __real_c58fe95d;
  fVar7 = __real_c47a992f;
  fVar6 = 0.0;
  fVar5 = param_1->SampleRate;
  if (0.0 < fVar5) {
    fVar4 = *(float *)&this->_padding_;
    *(float *)&this->_padding_ = fVar5;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    else if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      fVar4 = expf(fVar2 / (fVar4 * fVar5));
    }
    else {
      fVar4 = expf(fVar7 / (fVar4 * fVar5));
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar4;
    if (*(float *)&this->_padding_ <= 0.0) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    }
    else {
      fVar4 = fVar2;
      if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
        fVar4 = fVar7;
      }
      fVar5 = expf(fVar4 / (*(float *)&this->_padding_ * fVar5));
      *(float *)((longlong)&this->_padding_ + 4) = fVar5;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901101>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0x2d,"InSampleRate > 0.f");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar5 = param_1->AttackTimeMsec;
  *(float *)&this->_padding_ = fVar5;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar4 = fVar2;
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      fVar4 = fVar7;
    }
    fVar5 = expf(fVar4 / (fVar5 * *(float *)&this->_padding_));
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  fVar5 = param_1->ReleaseTimeMsec;
  *(float *)&this->_padding_ = fVar5;
  if (0.0 < fVar5) {
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      fVar7 = fVar2;
    }
    fVar6 = expf(fVar7 / (fVar5 * *(float *)&this->_padding_));
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar6;
  this->Mode = param_1->Mode;
  FAttackRelease::SetAnalog((FAttackRelease *)this,param_1->bIsAnalog);
  SetAnalysisWindow(this,param_1->AnalysisWindowMsec);
  return;
}

// NormalizeSamples @ 1444c7a70

void __thiscall
Audio::FInlineEnvelopeFollower::NormalizeSamples
          (FInlineEnvelopeFollower *this,float *param_1,int param_2,float *param_3)

{
  Type TVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  lVar8 = (longlong)param_2;
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar1 = this->Mode;
  if (TVar1 == MeanSquared) {
    local_38._12_4_ = uStack_9c;
    local_38.ArrayNum = param_2;
    local_28[0]._12_4_ = uStack_8c;
    local_28[0].ArrayNum = param_2;
    local_38.DataPtr = param_3;
    local_28[0].DataPtr = param_1;
    ArraySquare(local_28,&local_38);
    lVar5 = 0;
    if (3 < lVar8) {
      pfVar6 = param_3 + 2;
      lVar7 = (lVar8 - 4U >> 2) + 1;
      lVar5 = lVar7 * 4;
      do {
        fVar9 = this->AnalysisFilterBeta * pfVar6[-2] +
                this->AnalysisFilterAlpha * this->AnalysisValue;
        this->AnalysisValue = fVar9;
        pfVar6[-2] = fVar9;
        fVar9 = pfVar6[-1] * this->AnalysisFilterBeta +
                this->AnalysisFilterAlpha * this->AnalysisValue;
        this->AnalysisValue = fVar9;
        pfVar6[-1] = fVar9;
        fVar9 = *pfVar6 * this->AnalysisFilterBeta + this->AnalysisFilterAlpha * this->AnalysisValue
        ;
        this->AnalysisValue = fVar9;
        *pfVar6 = fVar9;
        fVar9 = this->AnalysisFilterBeta * pfVar6[1] +
                this->AnalysisFilterAlpha * this->AnalysisValue;
        this->AnalysisValue = fVar9;
        pfVar6[1] = fVar9;
        pfVar6 = pfVar6 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    for (; lVar5 < lVar8; lVar5 = lVar5 + 1) {
      fVar9 = this->AnalysisFilterBeta * param_3[lVar5] +
              this->AnalysisFilterAlpha * this->AnalysisValue;
      this->AnalysisValue = fVar9;
      param_3[lVar5] = fVar9;
    }
  }
  else if (TVar1 == RootMeanSquared) {
    local_58._12_4_ = uStack_8c;
    local_58.ArrayNum = param_2;
    uVar3._4_4_ = uStack_9c;
    uVar3._0_4_ = param_2;
    local_68.DataPtr = param_3;
    local_68._8_8_ = uVar3;
    local_58.DataPtr = param_1;
    ArraySquare(&local_58,&local_68);
    lVar5 = 0;
    if (3 < lVar8) {
      pfVar6 = param_3 + 2;
      lVar7 = (lVar8 - 4U >> 2) + 1;
      lVar5 = lVar7 * 4;
      do {
        fVar9 = pfVar6[-2] * this->AnalysisFilterBeta +
                this->AnalysisFilterAlpha * this->AnalysisValue;
        this->AnalysisValue = fVar9;
        pfVar6[-2] = fVar9;
        fVar9 = this->AnalysisFilterBeta * pfVar6[-1] +
                this->AnalysisFilterAlpha * this->AnalysisValue;
        this->AnalysisValue = fVar9;
        pfVar6[-1] = fVar9;
        fVar9 = *pfVar6 * this->AnalysisFilterBeta + this->AnalysisFilterAlpha * this->AnalysisValue
        ;
        this->AnalysisValue = fVar9;
        *pfVar6 = fVar9;
        fVar9 = pfVar6[1] * this->AnalysisFilterBeta +
                this->AnalysisFilterAlpha * this->AnalysisValue;
        this->AnalysisValue = fVar9;
        pfVar6[1] = fVar9;
        pfVar6 = pfVar6 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    for (; lVar5 < lVar8; lVar5 = lVar5 + 1) {
      fVar9 = param_3[lVar5] * this->AnalysisFilterBeta +
              this->AnalysisFilterAlpha * this->AnalysisValue;
      this->AnalysisValue = fVar9;
      param_3[lVar5] = fVar9;
    }
    local_48.DataPtr = param_3;
    local_48._8_8_ = uVar3;
    ArraySqrtInPlace(&local_48);
  }
  else if (TVar1 == Peak) {
    local_88._12_4_ = uStack_9c;
    local_88.ArrayNum = param_2;
    local_78._12_4_ = uStack_8c;
    local_78.ArrayNum = param_2;
    local_88.DataPtr = param_3;
    local_78.DataPtr = param_1;
    ArrayAbs(&local_78,&local_88);
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                       ,0x1ea,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetAnalysisWindow @ 1444e25e0

void __thiscall
Audio::FInlineEnvelopeFollower::SetAnalysisWindow(FInlineEnvelopeFollower *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < param_1) {
    this->AnalysisWindowMsec = param_1;
    if (0.0 < *(float *)&this->_padding_) {
      fVar3 = expf(__real_c47a0000 / (*(float *)&this->_padding_ * param_1));
      fVar4 = __real_3f800000 - fVar3;
      this->AnalysisFilterAlpha = fVar3;
      this->AnalysisFilterBeta = fVar4;
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5241047625217605135>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                       ,0x1f1,"(InSampleRate > 0.f) && (InWinMsec > 0.f)");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5241047625217605269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                       ,0x16b,"InAnalysisWindowMsec > 0.f");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

