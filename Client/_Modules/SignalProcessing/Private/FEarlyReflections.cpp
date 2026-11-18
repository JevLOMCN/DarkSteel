// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// FEarlyReflections @ 1444ee4a0

FEarlyReflections * __thiscall Audio::FEarlyReflections::FEarlyReflections(FEarlyReflections *this)

{
  FDelayAPF *this_00;
  longlong lVar1;
  FDelay *this_01;
  
  (this->Settings).Gain = 1.0;
  (this->Settings).PreDelayMsec = 0.0;
  this_01 = &this->Data[0].PreDelay;
  this->_padding_ = (longlong)&___7FEarlyReflections_Audio__6B_;
  this_00 = this->Data[0].APF + 2;
  (this->Settings).Bandwidth = 0.8;
  (this->Settings).Decay = 0.5;
  (this->Settings).Absorption = 0.7;
  lVar1 = 2;
  do {
    FDelay::FDelay(this_01);
    this_00[-3]._padding_ = 0;
    *(undefined8 *)&this_00[-3].G = 0x3f800000;
    FDelayAPF::FDelayAPF(this_00 + -2);
    FDelayAPF::FDelayAPF(this_00 + -1);
    FDelayAPF::FDelayAPF(this_00);
    FDelayAPF::FDelayAPF(this_00 + 1);
    this_00[2]._padding_ = 0;
    this_01 = (FDelay *)&this_01[6].EaseDelayMsec.TargetValue;
    this_00[2]._padding_ = 0x3f800000;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0x3f800000;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0x3f800000;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0x3f800000;
    this_00 = (FDelayAPF *)&this_00[6]._padding_;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return this;
}

// ~FEarlyReflections @ 1444f3710

void __thiscall Audio::FEarlyReflections::~FEarlyReflections(FEarlyReflections *this)

{
  this->_padding_ = (longlong)&___7FEarlyReflections_Audio__6B_;
  _vector_destructor_iterator_(this->Data[1].APF,0x60,4,FDelayAPF::~FDelayAPF);
  FDelay::~FDelay(&this->Data[1].PreDelay);
  _vector_destructor_iterator_(this->Data[0].APF,0x60,4,FDelayAPF::~FDelayAPF);
  FDelay::~FDelay(&this->Data[0].PreDelay);
  return;
}

// ApplySettings @ 1444f6b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FEarlyReflections::ApplySettings(FEarlyReflections *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FDelay::SetDelayMsec(&this->Data[0].PreDelay,(this->Settings).PreDelayMsec);
  fVar1 = __real_3f800000;
  fVar8 = (this->Settings).Bandwidth;
  this->Data[0].InputLPF.B1 = fVar8;
  this->Data[0].InputLPF.A0 = fVar1 - fVar8;
  FDelay::SetDelayMsec(&this->Data[1].PreDelay,(this->Settings).PreDelayMsec);
  fVar6 = __real_3f7ff972;
  fVar8 = (this->Settings).Bandwidth;
  this->Data[1].InputLPF.B1 = fVar8;
  this->Data[1].InputLPF.A0 = fVar1 - fVar8;
  fVar8 = (this->Settings).Absorption;
  fVar7 = fVar8 - ___real_3d8f5c29;
  fVar2 = fVar8 + __real_3dcccccd;
  if (fVar6 <= fVar8 + __real_3dcccccd) {
    fVar2 = fVar6;
  }
  fVar5 = fVar8 + __real_3da3d70a;
  if (fVar6 <= fVar8 + __real_3da3d70a) {
    fVar5 = fVar6;
  }
  this->Data[0].LPF[0].B1 = fVar2;
  fVar3 = fVar8 - __real_3df5c28f;
  this->Data[0].LPF[0].A0 = fVar1 - fVar2;
  if (fVar6 <= fVar3) {
    fVar3 = fVar6;
  }
  this->Data[0].LPF[1].B1 = fVar3;
  fVar2 = __real_3f7fbe77;
  fVar4 = fVar7;
  if (fVar6 <= fVar7) {
    fVar4 = fVar6;
  }
  if (__real_3f7fbe77 <= fVar7) {
    fVar7 = __real_3f7fbe77;
  }
  this->Data[0].LPF[1].A0 = fVar1 - fVar3;
  this->Data[0].LPF[2].B1 = fVar5;
  fVar6 = fVar8 + ___real_3e2e147b;
  this->Data[0].LPF[2].A0 = fVar1 - fVar5;
  this->Data[0].LPF[3].B1 = fVar4;
  if (fVar2 <= fVar6) {
    fVar6 = fVar2;
  }
  fVar5 = fVar8 + __real_3d4ccccd;
  fVar8 = fVar8 - __real_3de147ae;
  this->Data[0].LPF[3].A0 = fVar1 - fVar4;
  this->Data[1].LPF[0].B1 = fVar6;
  if (fVar2 <= fVar5) {
    fVar5 = fVar2;
  }
  if (fVar2 <= fVar8) {
    fVar8 = fVar2;
  }
  this->Data[1].LPF[0].A0 = fVar1 - fVar6;
  this->Data[1].LPF[1].B1 = fVar7;
  this->Data[1].LPF[1].A0 = fVar1 - fVar7;
  this->Data[1].LPF[2].B1 = fVar5;
  this->Data[1].LPF[2].A0 = fVar1 - fVar5;
  this->Data[1].LPF[3].B1 = fVar8;
  this->Data[1].LPF[3].A0 = fVar1 - fVar8;
  this->MatrixScaleFactor = (fVar1 - (this->Settings).Decay) * __real_3f34fdf4;
  return;
}

// Init @ 144505120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FEarlyReflections::Init(FEarlyReflections *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  
  fVar3 = __real_3e4ccccd;
  fVar1 = __real_3f800000;
  pfVar7 = this->Data[0].DelayLineOuputs;
  lVar5 = 2;
  fVar8 = (float)param_1;
  FReverbSettingsInternal::SampleRateRatio = fVar8 * ___real_380ceed2;
  FReverbSettingsInternal::SampleRate = param_1;
  do {
    FDelay::Init((FDelay *)(pfVar7 + -0x8e),fVar8,fVar1);
    lVar4 = 0;
    lVar6 = 4;
    do {
      FDelay::Init((FDelay *)(lVar4 + -0x1d0 + (longlong)pfVar7),fVar8,fVar3);
      lVar4 = lVar4 + 0x60;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    pfVar7[-4] = 0.0;
    pfVar7[-3] = 0.0;
    pfVar7[-2] = 0.0;
    pfVar7[-1] = 0.0;
    pfVar7[0] = 0.0;
    pfVar7[1] = 0.0;
    pfVar7[2] = 0.0;
    fVar2 = __real_447a0000;
    pfVar7[3] = 0.0;
    pfVar7 = pfVar7 + 0x92;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FDelay::SetDelayMsec
            ((FDelay *)this->Data[0].APF,
             (FReverbSettingsInternal::SampleRateRatio * ___real_44318000 * __real_447a0000) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::SetDelayMsec
            ((FDelay *)(this->Data[0].APF + 1),
             (FReverbSettingsInternal::SampleRateRatio * ___real_4405c000 * fVar2) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::SetDelayMsec
            ((FDelay *)(this->Data[0].APF + 2),
             (FReverbSettingsInternal::SampleRateRatio * ___real_44ece000 * fVar2) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::SetDelayMsec
            ((FDelay *)(this->Data[0].APF + 3),
             (FReverbSettingsInternal::SampleRateRatio * ___real_44ad2000 * fVar2) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::SetDelayMsec
            ((FDelay *)this->Data[1].APF,
             (FReverbSettingsInternal::SampleRateRatio * ___real_44ae6000 * fVar2) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::SetDelayMsec
            ((FDelay *)(this->Data[1].APF + 1),
             (FReverbSettingsInternal::SampleRateRatio * ___real_442b4000 * fVar2) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::SetDelayMsec
            ((FDelay *)(this->Data[1].APF + 2),
             (FReverbSettingsInternal::SampleRateRatio * ___real_44852000 * fVar2) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::SetDelayMsec
            ((FDelay *)(this->Data[1].APF + 3),
             (FReverbSettingsInternal::SampleRateRatio * ___real_44cc6000 * fVar2) /
             (float)FReverbSettingsInternal::SampleRate);
  ApplySettings(this);
  return;
}

// ProcessAudioFrame @ 144510e90

void __thiscall
Audio::FEarlyReflections::ProcessAudioFrame
          (FEarlyReflections *this,float *param_1,int param_2,float *param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  FFDNDelayData *pFVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = __real_3e800000;
  fVar2 = __real_3f800000;
  if ((param_2 == 2) || (param_4 == 2)) {
    lVar5 = (longlong)param_1 - (longlong)param_3;
    pfVar4 = &this->Data[0].InputLPF.B1;
    pFVar6 = this->Data;
    lVar7 = 2;
    do {
      fVar8 = (float)(**(code **)(*(longlong *)(pfVar4 + -0x17) + 8))
                               (pFVar6,*(undefined4 *)((longlong)param_3 + lVar5));
      fVar8 = fVar8 * (this->Settings).Bandwidth * pfVar4[1] + pfVar4[2] * *pfVar4;
      pfVar4[2] = fVar8;
      fVar8 = fVar8 * fVar3;
      pfVar4[0x73] = (pfVar4[0x79] - pfVar4[0x78]) * this->MatrixScaleFactor + fVar8;
      pfVar4[0x74] = (pfVar4[0x7a] + pfVar4[0x77]) * this->MatrixScaleFactor + fVar8;
      pfVar4[0x75] = (pfVar4[0x77] - pfVar4[0x7a]) * this->MatrixScaleFactor + fVar8;
      pfVar4[0x76] = fVar8 - (pfVar4[0x79] + pfVar4[0x78]) * this->MatrixScaleFactor;
      lVar1 = *(longlong *)(pfVar4 + 3);
      *param_3 = 0.0;
      fVar8 = (float)(**(code **)(lVar1 + 8))(pfVar4 + 3,pfVar4[0x73]);
      lVar1 = *(longlong *)(pfVar4 + 0x1b);
      fVar8 = fVar8 * pfVar4[0x65] + pfVar4[100] * pfVar4[0x66];
      pfVar4[0x66] = fVar8;
      pfVar4[0x77] = fVar8;
      *param_3 = fVar8 + *param_3;
      fVar8 = (float)(**(code **)(lVar1 + 8))(pfVar4 + 0x1b,pfVar4[0x74]);
      lVar1 = *(longlong *)(pfVar4 + 0x33);
      fVar8 = fVar8 * pfVar4[0x69] + pfVar4[0x68] * pfVar4[0x6a];
      pfVar4[0x6a] = fVar8;
      pfVar4[0x78] = fVar8;
      *param_3 = fVar8 + *param_3;
      fVar8 = (float)(**(code **)(lVar1 + 8))(pfVar4 + 0x33,pfVar4[0x75]);
      lVar1 = *(longlong *)(pfVar4 + 0x4b);
      fVar8 = fVar8 * pfVar4[0x6d] + pfVar4[0x6c] * pfVar4[0x6e];
      pfVar4[0x6e] = fVar8;
      pfVar4[0x79] = fVar8;
      *param_3 = fVar8 + *param_3;
      fVar8 = (float)(**(code **)(lVar1 + 8))(pfVar4 + 0x4b,pfVar4[0x76]);
      fVar9 = fVar8 * pfVar4[0x71] + pfVar4[0x70] * pfVar4[0x72];
      pfVar4[0x72] = fVar9;
      pfVar4[0x7a] = fVar9;
      fVar8 = *param_3;
      pFVar6 = pFVar6 + 1;
      pfVar4 = pfVar4 + 0x92;
      *param_3 = fVar9 + fVar8;
      *param_3 = (fVar2 - (this->Settings).Gain) * *(float *)((longlong)param_3 + lVar5) +
                 (fVar9 + fVar8) * (this->Settings).Gain;
      param_3 = param_3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// ProcessDelayLine @ 144513c20

float __thiscall
Audio::FEarlyReflections::ProcessDelayLine
          (FEarlyReflections *this,float param_1,FDelayAPF *param_2,FOnePoleLPF *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(param_2->_padding_ + 8))(param_2);
  fVar1 = param_3->B1 * param_3->Z1 + fVar1 * param_3->A0;
  param_3->Z1 = fVar1;
  return fVar1;
}

// SetSettings @ 14451c8a0

void __thiscall
Audio::FEarlyReflections::SetSettings(FEarlyReflections *this,FEarlyReflectionsSettings *param_1)

{
  float fVar1;
  
  fVar1 = param_1->Gain;
  if (__real_3f7ff972 <= param_1->Gain) {
    fVar1 = __real_3f7ff972;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (this->Settings).Gain = fVar1;
  fVar1 = param_1->PreDelayMsec;
  if (__real_447a0000 <= param_1->PreDelayMsec) {
    fVar1 = __real_447a0000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (this->Settings).PreDelayMsec = fVar1;
  fVar1 = param_1->Bandwidth;
  if (__real_3f7fff58 <= param_1->Bandwidth) {
    fVar1 = __real_3f7fff58;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (this->Settings).Bandwidth = fVar1;
  fVar1 = param_1->Decay;
  if (__real_3f800000 <= param_1->Decay) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  (this->Settings).Decay = fVar1;
  fVar1 = param_1->Absorption;
  if (__real_3f7fff58 <= param_1->Absorption) {
    fVar1 = __real_3f7fff58;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (this->Settings).Absorption = fVar1;
  ApplySettings(this);
  return;
}

