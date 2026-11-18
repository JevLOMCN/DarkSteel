// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FPlateReverb @ 1444f1c60

FPlateReverb * __thiscall Audio::FPlateReverb::FPlateReverb(FPlateReverb *this)

{
  FDelayAPF *this_00;
  longlong lVar1;
  FDelay *this_01;
  
  (this->Settings).EarlyReflections.Gain = 1.0;
  (this->Settings).EarlyReflections.PreDelayMsec = 0.0;
  (this->Settings).LateGain = 0.0;
  this_01 = &(this->EarlyReflections).Data[0].PreDelay;
  (this->EarlyReflections)._padding_ = (longlong)&___7FEarlyReflections_Audio__6B_;
  this_00 = (this->EarlyReflections).Data[0].APF + 2;
  (this->Settings).EarlyReflections.Bandwidth = 0.8;
  (this->Settings).EarlyReflections.Decay = 0.5;
  *(undefined8 *)&(this->Settings).EarlyReflections.Absorption = 0x3f333333;
  lVar1 = 2;
  (this->Settings).Bandwidth = 0.5;
  (this->Settings).Diffusion = 0.5;
  (this->Settings).Dampening = 0.5;
  (this->Settings).Decay = 0.5;
  (this->Settings).Density = 0.5;
  (this->Settings).Wetness = 0.5;
  (this->EarlyReflections).Settings.Gain = 1.0;
  (this->EarlyReflections).Settings.PreDelayMsec = 0.0;
  (this->EarlyReflections).Settings.Bandwidth = 0.8;
  (this->EarlyReflections).Settings.Decay = 0.5;
  (this->EarlyReflections).Settings.Absorption = 0.7;
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
  FDelay::FDelay(&this->PreDelay);
  (this->InputLPF).CutoffFrequency = 0.0;
  (this->InputLPF).B1 = 0.0;
  (this->InputLPF).A0 = 1.0;
  (this->InputLPF).Z1 = 0.0;
  FDelayAPF::FDelayAPF(&this->APF1);
  FDelayAPF::FDelayAPF(&this->APF2);
  FDelayAPF::FDelayAPF(&this->APF3);
  FDelayAPF::FDelayAPF(&this->APF4);
  (this->LFO).Object = (FWaveTableOsc *)0x0;
  (this->LFO).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FPlate::FPlate(&this->LeftPlate);
  FPlate::FPlate(&this->RightPlate);
  this->bEnableLateReflections = true;
  this->bEnableEarlyReflections = true;
  this->LeftTaps[0] = 0.0;
  this->LeftTaps[1] = 0.0;
  this->LeftTaps[2] = 0.0;
  this->LeftTaps[3] = 0.0;
  this->LeftTaps[4] = 0.0;
  this->LeftTaps[5] = 0.0;
  this->LeftTaps[6] = 0.0;
  this->RightTaps[0] = 0.0;
  this->RightTaps[1] = 0.0;
  this->RightTaps[2] = 0.0;
  this->RightTaps[3] = 0.0;
  this->RightTaps[4] = 0.0;
  this->RightTaps[5] = 0.0;
  this->RightTaps[6] = 0.0;
  return this;
}

// ~FPlateReverb @ 1444f43f0

void __thiscall Audio::FPlateReverb::~FPlateReverb(FPlateReverb *this)

{
  FDelay::~FDelay(&(this->RightPlate).Delay2);
  FDelayAPF::~FDelayAPF(&(this->RightPlate).APF);
  FDelay::~FDelay(&(this->RightPlate).Delay1);
  FDelayAPF::~FDelayAPF(&(this->RightPlate).ModulatedAPF);
  FDelay::~FDelay(&(this->LeftPlate).Delay2);
  FDelayAPF::~FDelayAPF(&(this->LeftPlate).APF);
  FDelay::~FDelay(&(this->LeftPlate).Delay1);
  FDelayAPF::~FDelayAPF(&(this->LeftPlate).ModulatedAPF);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LFO).SharedReferenceCount.ReferenceController);
  FDelayAPF::~FDelayAPF(&this->APF4);
  FDelayAPF::~FDelayAPF(&this->APF3);
  FDelayAPF::~FDelayAPF(&this->APF2);
  FDelayAPF::~FDelayAPF(&this->APF1);
  FDelay::~FDelay(&this->PreDelay);
  FEarlyReflections::~FEarlyReflections(&this->EarlyReflections);
  return;
}

// ApplySettings @ 1444f6e80

void __thiscall Audio::FPlateReverb::ApplySettings(FPlateReverb *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FDelay::SetDelayMsec(&this->PreDelay,(this->Settings).LateDelayMsec);
  FDelay::SetOutputAttenuationDB(&this->PreDelay,(this->Settings).LateGain);
  fVar4 = __real_3f800000;
  fVar3 = (this->Settings).Bandwidth;
  (this->InputLPF).A0 = fVar3;
  (this->InputLPF).B1 = fVar4 - fVar3;
  fVar3 = (this->Settings).Diffusion;
  (this->APF1).G = fVar3;
  (this->APF2).G = fVar3;
  fVar3 = fVar3 - __real_3e000000;
  (this->APF3).G = fVar3;
  (this->APF4).G = fVar3;
  fVar3 = (this->Settings).Density;
  fVar2 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
  fVar3 = fVar3 - __real_3e19999a;
  (this->LeftPlate).ModulatedAPF.G = fVar2;
  fVar1 = (this->Settings).Dampening;
  fVar4 = fVar4 - fVar1;
  (this->LeftPlate).LPF.B1 = fVar1;
  (this->RightPlate).ModulatedAPF.G = fVar2;
  (this->LeftPlate).APF.G = fVar3;
  (this->RightPlate).LPF.B1 = fVar1;
  (this->RightPlate).APF.G = fVar3;
  (this->LeftPlate).LPF.A0 = fVar4;
  (this->RightPlate).LPF.A0 = fVar4;
  return;
}

// EnableEarlyReflections @ 1444fa330

void __thiscall Audio::FPlateReverb::EnableEarlyReflections(FPlateReverb *this,bool param_1)

{
  this->bEnableEarlyReflections = param_1;
  return;
}

// EnableLateReflections @ 1444fa340

void __thiscall Audio::FPlateReverb::EnableLateReflections(FPlateReverb *this,bool param_1)

{
  this->bEnableLateReflections = param_1;
  return;
}

// Init @ 1445071a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FPlateReverb::Init(FPlateReverb *this,int param_1)

{
  TSharedPtr<Audio::FWaveTableOsc,1> *pTVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  TSharedPtr<Audio::FWaveTableOsc,1> *pTVar6;
  float fVar7;
  TSharedPtr<Audio::FWaveTableOsc,1> local_48 [4];
  
  FReverbSettingsInternal::SampleRateRatio = (float)param_1 * ___real_380ceed2;
  FReverbSettingsInternal::SampleRate = param_1;
  FEarlyReflections::Init(&this->EarlyReflections,param_1);
  fVar7 = (float)FReverbSettingsInternal::SampleRate;
  FDelay::Init(&this->PreDelay,fVar7,__real_40000000);
  fVar4 = __real_3e4ccccd;
  FDelay::Init((FDelay *)&this->APF1,fVar7,__real_3e4ccccd);
  fVar3 = __real_447a0000;
  FDelay::SetDelayMsec
            ((FDelay *)&this->APF1,
             (FReverbSettingsInternal::SampleRateRatio * ___real_430e0000 * __real_447a0000) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init((FDelay *)&this->APF2,fVar7,fVar4);
  FDelay::SetDelayMsec
            ((FDelay *)&this->APF2,
             (FReverbSettingsInternal::SampleRateRatio * ___real_42d60000 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init((FDelay *)&this->APF3,fVar7,fVar4);
  FDelay::SetDelayMsec
            ((FDelay *)&this->APF3,
             (FReverbSettingsInternal::SampleRateRatio * ___real_43bd8000 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init((FDelay *)&this->APF4,fVar7,fVar4);
  FDelay::SetDelayMsec
            ((FDelay *)&this->APF4,
             (FReverbSettingsInternal::SampleRateRatio * ___real_438a8000 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  pTVar1 = &this->LFO;
  if (pTVar1->Object == (FWaveTableOsc *)0x0) {
    pTVar6 = FWaveTableOsc::CreateWaveTable(local_48,SineWaveTable,0x400);
    if (pTVar1 != pTVar6) {
      pTVar1->Object = pTVar6->Object;
      pTVar6->Object = (FWaveTableOsc *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LFO).SharedReferenceCount,&pTVar6->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
    if (pTVar1->Object == (FWaveTableOsc *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FWaveTableOsc::Init(pTVar1->Object,fVar7,__real_3f800000);
  if (pTVar1->Object == (FWaveTableOsc *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FWaveTableOsc::SetScaleAdd(pTVar1->Object,__real_3f000000,__real_3f000000);
  FDelay::Init((FDelay *)&this->LeftPlate,fVar7,fVar4);
  (this->LeftPlate).ModulatedBaseDelayMsec =
       (FReverbSettingsInternal::SampleRateRatio * ___real_44630000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  (this->LeftPlate).ModulatedDeltaDelayMsec =
       (FReverbSettingsInternal::SampleRateRatio * __real_41800000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  FDelay::Init(&(this->LeftPlate).Delay1,fVar7,fVar4);
  FDelay::SetDelayMsec
            (&(this->LeftPlate).Delay1,
             (FReverbSettingsInternal::SampleRateRatio * ___real_4583c800 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init((FDelay *)&(this->LeftPlate).APF,fVar7,fVar4);
  FDelay::SetDelayMsec
            ((FDelay *)&(this->LeftPlate).APF,
             (FReverbSettingsInternal::SampleRateRatio * ___real_45260000 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init(&(this->LeftPlate).Delay2,fVar7,fVar4);
  FDelay::SetDelayMsec
            (&(this->LeftPlate).Delay2,
             (FReverbSettingsInternal::SampleRateRatio * ___real_45440000 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init((FDelay *)&this->RightPlate,fVar7,fVar4);
  (this->RightPlate).ModulatedBaseDelayMsec =
       (FReverbSettingsInternal::SampleRateRatio * ___real_44280000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  (this->RightPlate).ModulatedDeltaDelayMsec =
       (FReverbSettingsInternal::SampleRateRatio * __real_41800000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  FDelay::Init(&(this->RightPlate).Delay1,fVar7,fVar4);
  FDelay::SetDelayMsec
            (&(this->RightPlate).Delay1,
             (FReverbSettingsInternal::SampleRateRatio * ___real_458b2800 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init((FDelay *)&(this->RightPlate).APF,fVar7,fVar4);
  FDelay::SetDelayMsec
            ((FDelay *)&(this->RightPlate).APF,
             (FReverbSettingsInternal::SampleRateRatio * __real_44e10000 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  FDelay::Init(&(this->RightPlate).Delay2,fVar7,fVar4);
  FDelay::SetDelayMsec
            (&(this->RightPlate).Delay2,
             (FReverbSettingsInternal::SampleRateRatio * ___real_45688000 * fVar3) /
             (float)FReverbSettingsInternal::SampleRate);
  this->LeftTaps[0] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_43850000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->LeftTaps[1] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_4539e000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->LeftTaps[2] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_44ef2000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->LeftTaps[3] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_44f98000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->LeftTaps[4] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_44f8c000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->LeftTaps[5] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_433b0000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->LeftTaps[6] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_44854000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->RightTaps[0] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_43b08000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->RightTaps[1] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_4562b000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->RightTaps[2] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_44998000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->RightTaps[3] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_45271000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->RightTaps[4] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_4503f000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->RightTaps[5] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_43a78000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  this->RightTaps[6] =
       (FReverbSettingsInternal::SampleRateRatio * ___real_42f20000 * fVar3) /
       (float)FReverbSettingsInternal::SampleRate;
  ApplySettings(this);
  return;
}

// ProcessAudioFrame @ 1445119c0

void __thiscall
Audio::FPlateReverb::ProcessAudioFrame
          (FPlateReverb *this,float *param_1,int param_2,float *param_3,int param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res18 [2];
  float local_68 [2];
  float local_60;
  float local_5c;
  
  if ((param_2 == 1) && (param_4 == 1)) {
    return;
  }
  if (this->bEnableLateReflections == false) {
    if (this->bEnableEarlyReflections == false) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      return;
    }
  }
  else if (this->bEnableEarlyReflections == false) {
    local_60 = *param_1;
    local_5c = param_1[1];
    goto LAB_144511a4f;
  }
  FEarlyReflections::ProcessAudioFrame(&this->EarlyReflections,param_1,param_2,&local_60,param_4);
LAB_144511a4f:
  if (this->bEnableLateReflections == false) {
    *param_3 = local_60 * (this->Settings).Wetness;
    param_3[1] = local_5c * (this->Settings).Wetness;
    return;
  }
  fVar4 = (float)(**(code **)((this->PreDelay)._padding_ + 8))
                           (&this->PreDelay,(local_5c + local_60) * __real_3f000000);
  lVar1 = (this->APF1)._padding_;
  fVar4 = fVar4 * (this->Settings).Bandwidth * (this->InputLPF).A0 +
          (this->InputLPF).B1 * (this->InputLPF).Z1;
  (this->InputLPF).Z1 = fVar4;
  uVar5 = (**(code **)(lVar1 + 8))(&this->APF1,fVar4);
  uVar5 = (**(code **)((this->APF2)._padding_ + 8))(&this->APF2,uVar5);
  uVar5 = (**(code **)((this->APF3)._padding_ + 8))(&this->APF3,uVar5);
  fVar4 = (float)(**(code **)((this->APF4)._padding_ + 8))(&this->APF4,uVar5);
  local_68[0] = 0.0;
  local_res18[0] = 0.0;
  if (((this->LFO).Object == (FWaveTableOsc *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FWaveTableOsc::Generate((this->LFO).Object,local_68,local_res18);
  fVar18 = local_res18[0] * (this->RightPlate).ModulatedDeltaDelayMsec;
  fVar6 = (this->RightPlate).ModulatedBaseDelayMsec;
  FDelay::SetDelayMsec
            ((FDelay *)&this->LeftPlate,
             local_68[0] * (this->LeftPlate).ModulatedDeltaDelayMsec +
             (this->LeftPlate).ModulatedBaseDelayMsec);
  FDelay::SetDelayMsec((FDelay *)&this->RightPlate,fVar18 + fVar6);
  uVar5 = (**(code **)((this->RightPlate).ModulatedAPF._padding_ + 8))
                    (&this->RightPlate,fVar4 + (this->LeftPlate).PreviousSample);
  fVar18 = (float)(**(code **)((this->RightPlate).Delay1._padding_ + 8))
                            (&(this->RightPlate).Delay1,uVar5);
  fVar6 = __real_3f800000;
  lVar1 = (this->RightPlate).APF._padding_;
  fVar18 = (__real_3f800000 - (this->Settings).Dampening) * fVar18 * (this->RightPlate).LPF.A0 +
           (this->RightPlate).LPF.B1 * (this->RightPlate).LPF.Z1;
  (this->RightPlate).LPF.Z1 = fVar18;
  uVar5 = (**(code **)(lVar1 + 8))
                    (&(this->RightPlate).APF,(fVar6 - (this->Settings).Decay) * fVar18);
  fVar18 = (float)(**(code **)((this->RightPlate).Delay2._padding_ + 8))
                            (&(this->RightPlate).Delay2,uVar5);
  lVar1 = (this->LeftPlate).ModulatedAPF._padding_;
  fVar18 = (fVar6 - (this->Settings).Decay) * fVar18;
  (this->RightPlate).PreviousSample = fVar18;
  uVar5 = (**(code **)(lVar1 + 8))(&this->LeftPlate,fVar18 + fVar4);
  fVar4 = (float)(**(code **)((this->LeftPlate).Delay1._padding_ + 8))
                           (&(this->LeftPlate).Delay1,uVar5);
  lVar1 = (this->LeftPlate).APF._padding_;
  fVar4 = (fVar6 - (this->Settings).Dampening) * fVar4 * (this->LeftPlate).LPF.A0 +
          (this->LeftPlate).LPF.B1 * (this->LeftPlate).LPF.Z1;
  (this->LeftPlate).LPF.Z1 = fVar4;
  uVar5 = (**(code **)(lVar1 + 8))(&(this->LeftPlate).APF,(fVar6 - (this->Settings).Decay) * fVar4);
  fVar4 = (float)(**(code **)((this->LeftPlate).Delay2._padding_ + 8))
                           (&(this->LeftPlate).Delay2,uVar5);
  (this->LeftPlate).PreviousSample = (fVar6 - (this->Settings).Decay) * fVar4;
  fVar4 = FDelay::ReadDelayAt(&(this->RightPlate).Delay1,this->LeftTaps[1]);
  fVar6 = FDelay::ReadDelayAt(&(this->RightPlate).Delay1,this->LeftTaps[0]);
  fVar18 = FDelay::ReadDelayAt((FDelay *)&(this->RightPlate).APF,this->LeftTaps[2]);
  fVar7 = FDelay::ReadDelayAt(&(this->RightPlate).Delay2,this->LeftTaps[3]);
  fVar8 = FDelay::ReadDelayAt(&(this->LeftPlate).Delay1,this->LeftTaps[4]);
  fVar9 = FDelay::ReadDelayAt((FDelay *)&(this->LeftPlate).APF,this->LeftTaps[5]);
  fVar10 = FDelay::ReadDelayAt(&(this->LeftPlate).Delay2,this->LeftTaps[6]);
  fVar11 = FDelay::ReadDelayAt(&(this->LeftPlate).Delay1,this->RightTaps[1]);
  fVar12 = FDelay::ReadDelayAt(&(this->LeftPlate).Delay1,this->RightTaps[0]);
  fVar13 = FDelay::ReadDelayAt((FDelay *)&(this->LeftPlate).APF,this->RightTaps[2]);
  fVar14 = FDelay::ReadDelayAt(&(this->LeftPlate).Delay2,this->RightTaps[3]);
  fVar15 = FDelay::ReadDelayAt(&(this->RightPlate).Delay1,this->RightTaps[4]);
  fVar16 = FDelay::ReadDelayAt((FDelay *)&(this->RightPlate).APF,this->RightTaps[5]);
  fVar17 = FDelay::ReadDelayAt(&(this->RightPlate).Delay2,this->RightTaps[6]);
  *param_3 = ((((fVar7 + ((fVar6 + fVar4) - fVar18)) - fVar8) - fVar9) - fVar10) *
             (this->Settings).Wetness;
  param_3[1] = ((((fVar14 + ((fVar12 + fVar11) - fVar13)) - fVar15) - fVar16) - fVar17) *
               (this->Settings).Wetness;
  return;
}

// SetSettings @ 14451c9e0

void __thiscall Audio::FPlateReverb::SetSettings(FPlateReverb *this,FPlateReverbSettings *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  fVar2 = (param_1->EarlyReflections).Gain;
  if (__real_3f7ff972 <= fVar2) {
    fVar2 = __real_3f7ff972;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->EarlyReflections).Settings.Gain = fVar2;
  fVar2 = (param_1->EarlyReflections).PreDelayMsec;
  if (__real_447a0000 <= fVar2) {
    fVar2 = __real_447a0000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->EarlyReflections).Settings.PreDelayMsec = fVar2;
  fVar2 = (param_1->EarlyReflections).Bandwidth;
  if (__real_3f7fff58 <= fVar2) {
    fVar2 = __real_3f7fff58;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->EarlyReflections).Settings.Bandwidth = fVar2;
  fVar2 = (param_1->EarlyReflections).Decay;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  if (fVar2 <= __real_38d1b717) {
    fVar2 = __real_38d1b717;
  }
  (this->EarlyReflections).Settings.Decay = fVar2;
  fVar2 = (param_1->EarlyReflections).Absorption;
  if (__real_3f7fff58 <= fVar2) {
    fVar2 = __real_3f7fff58;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->EarlyReflections).Settings.Absorption = fVar2;
  FEarlyReflections::ApplySettings(&this->EarlyReflections);
  fVar2 = param_1->LateDelayMsec;
  if (__real_44fa0000 <= param_1->LateDelayMsec) {
    fVar2 = __real_44fa0000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).LateDelayMsec = fVar2;
  fVar2 = param_1->LateGain;
  if (0.0 <= fVar2) {
    fVar2 = 0.0;
  }
  (this->Settings).LateGain = fVar2;
  fVar2 = param_1->Bandwidth;
  if (__real_3f7fff58 <= param_1->Bandwidth) {
    fVar2 = __real_3f7fff58;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).Bandwidth = fVar2;
  fVar2 = param_1->Dampening;
  if (__real_3f7fffef <= param_1->Dampening) {
    fVar2 = __real_3f7fffef;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).Dampening = fVar2;
  fVar2 = param_1->Diffusion;
  if (fVar1 <= param_1->Diffusion) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).Diffusion = fVar2;
  fVar2 = param_1->Decay;
  if (fVar1 <= param_1->Decay) {
    fVar2 = fVar1;
  }
  if (fVar2 <= __real_38d1b717) {
    fVar2 = __real_38d1b717;
  }
  (this->Settings).Decay = fVar2;
  fVar2 = param_1->Density;
  if (fVar1 <= param_1->Density) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).Density = fVar2;
  fVar2 = param_1->Wetness;
  if (__real_41200000 <= param_1->Wetness) {
    fVar2 = __real_41200000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).Wetness = fVar2;
  ApplySettings(this);
  return;
}

