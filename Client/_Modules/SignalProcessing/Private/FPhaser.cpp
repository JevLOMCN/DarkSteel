// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// FPhaser @ 1444f1a60

FPhaser * __thiscall Audio::FPhaser::FPhaser(FPhaser *this)

{
  FBiquadFilter *this_00;
  longlong lVar1;
  
  this->ControlRate = 0x100;
  this->ControlSampleCount = 0;
  this_00 = this->APFs[0];
  this->Frequency = 0.2;
  this->WetLevel = 0.4;
  lVar1 = 0xc;
  this->Feedback = 0.2;
  this->LFOType = Sine;
  do {
    FBiquadFilter::FBiquadFilter(this_00);
    this_00 = this_00 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  IOscBase::IOscBase((IOscBase *)&this->LFO);
  (this->LFO).LFOType = Sine;
  (this->LFO).LFOMode = Sync;
  (this->LFO)._padding_ = (longlong)&___7FLFO_Audio__6B_;
  (this->LFO).ModNormalPhase.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LFO).ModNormalPhase.Name.Data.ArrayNum = 0;
  (this->LFO).ModNormalPhase.Name.Data.ArrayMax = 0;
  (this->LFO).ModQuadPhase.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LFO).ModQuadPhase.Name.Data.ArrayNum = 0;
  (this->LFO).ModQuadPhase.Name.Data.ArrayMax = 0;
  (this->LFO).RSHValue = 0.0;
  (this->LFO).LastOutput = 0.0;
  (this->LFO).LoopCount = 0.0;
  (this->LFO).QuadLastOutput = 0.0;
  (this->LFO).PhaseOffset = 0.0;
  (this->LFO).ModNormalPhase.Id = 0xffffffff;
  (this->LFO).ModQuadPhase.Id = 0xffffffff;
  (this->LFO).ExponentialFactor = 3.5;
  (this->LFO).RSHCounter = 0xffffffff;
  (this->LFO).ModScale = 1.0;
  (this->LFO).ModAdd = 0.0;
  (this->LFO).bBipolar = true;
  this->NumChannels = 0;
  this->bIsBiquadPhase = true;
  return this;
}

// ~FPhaser @ 1444f4360

void __thiscall Audio::FPhaser::~FPhaser(FPhaser *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FBiquadFilter *this_00;
  
  (this->LFO)._padding_ = (longlong)&___7FLFO_Audio__6B_;
  pFVar1 = (this->LFO).ModQuadPhase.Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LFO).ModNormalPhase.Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IOscBase::~IOscBase((IOscBase *)&this->LFO);
  this_00 = (FBiquadFilter *)this->APFFrequencyRanges;
  lVar2 = 0xc;
  do {
    this_00 = this_00 + -1;
    FBiquadFilter::~FBiquadFilter(this_00);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// ComputeNewCoefficients @ 1444f83a0

void __thiscall Audio::FPhaser::ComputeNewCoefficients(FPhaser *this,int param_1,float param_2)

{
  TVector2<double> *pTVar1;
  longlong lVar2;
  FBiquadFilter *this_00;
  
  pTVar1 = this->APFFrequencyRanges;
  lVar2 = 6;
  this_00 = this->APFs[param_1];
  do {
    FBiquadFilter::SetFrequency
              (this_00,(float)(((pTVar1->field0_0x0)._s_0.Y - (pTVar1->field0_0x0)._s_0.X) *
                               (double)param_2 + (pTVar1->field0_0x0)._s_0.X));
    this_00 = this_00 + 1;
    pTVar1 = pTVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// Init @ 144506ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FPhaser::Init(FPhaser *this,float param_1,int param_2)

{
  FLFO *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBiquadFilter *this_00;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((2 < this->NumChannels) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels <= MaxNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Phaser.cpp"
                         ,0x1a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = 0;
  this->NumChannels = param_2;
  fVar7 = __real_469c4000;
  fVar6 = __real_40000000;
  if (0 < param_2) {
    do {
      lVar5 = 6;
      this_00 = this->APFs[iVar4];
      do {
        FBiquadFilter::Init(this_00,param_1,1,AllPass,fVar7,fVar6,0.0);
        this_00 = this_00 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < this->NumChannels);
  }
  pFVar1 = &this->LFO;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1 / (float)this->ControlRate,0,0,1);
  if (this->Frequency != *(float *)&(this->LFO)._padding_) {
    *(float *)&(this->LFO)._padding_ = this->Frequency;
    *(undefined1 *)((longlong)&(this->LFO)._padding_ + 1) = 1;
  }
  (this->LFO).LFOType = this->LFOType;
  (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1);
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  fVar6 = param_1 * ___real_39aec33e;
  this->FeedbackFrame[0] = 0.0;
  this->FeedbackFrame[1] = 0.0;
  fVar7 = param_1 * ___real_3d088888;
  fVar8 = param_1 * ___real_3a343958;
  this->APFFrequencyRanges[0].field0_0x0._s_0.X = (double)fVar6;
  fVar6 = param_1 * ___real_3d8ccccd;
  this->APFFrequencyRanges[0].field0_0x0._s_0.Y = (double)fVar7;
  fVar9 = param_1 * __real_3a83126e;
  this->APFFrequencyRanges[1].field0_0x0._s_0.X = (double)fVar8;
  fVar7 = param_1 * __real_3dcccccd;
  this->APFFrequencyRanges[1].field0_0x0._s_0.Y = (double)fVar6;
  fVar8 = param_1 * ___real_3b05cd7b;
  this->APFFrequencyRanges[2].field0_0x0._s_0.X = (double)fVar9;
  fVar6 = param_1 * ___real_3e511111;
  this->APFFrequencyRanges[2].field0_0x0._s_0.Y = (double)fVar7;
  fVar9 = param_1 * __real_3b5a740e;
  this->APFFrequencyRanges[3].field0_0x0._s_0.X = (double)fVar8;
  fVar7 = param_1 * __real_3eaaaaab;
  this->APFFrequencyRanges[3].field0_0x0._s_0.Y = (double)fVar6;
  fVar8 = param_1 * ___real_3eeaaaab;
  fVar6 = param_1 * ___real_3b962fc9;
  this->APFFrequencyRanges[4].field0_0x0._s_0.X = (double)fVar9;
  this->APFFrequencyRanges[4].field0_0x0._s_0.Y = (double)fVar7;
  this->APFFrequencyRanges[5].field0_0x0._s_0.X = (double)fVar6;
  this->APFFrequencyRanges[5].field0_0x0._s_0.Y = (double)fVar8;
  return;
}

// ProcessAudio @ 14450e060

void __thiscall
Audio::FPhaser::ProcessAudio(FPhaser *this,float *param_1,int param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FBiquadFilter *this_00;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float local_88;
  float local_84 [19];
  
  fVar3 = __real_3f000000;
  fVar2 = __real_3f800000;
  if (0 < param_2) {
    iVar7 = 0;
    do {
      this->ControlSampleCount = this->ControlSampleCount & this->ControlRate - 1U;
      if (this->ControlSampleCount == 0) {
        local_88 = 0.0;
        fVar9 = (float)(**(code **)((this->LFO)._padding_ + 0x20))();
        fVar9 = (fVar9 + fVar2) * fVar3;
        if (fVar2 <= fVar9) {
          fVar9 = fVar2;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        ComputeNewCoefficients(this,0,fVar9);
        if (this->bIsBiquadPhase != false) {
          fVar9 = (local_88 + fVar2) * fVar3;
        }
        ComputeNewCoefficients(this,1,fVar9);
      }
      this->ControlSampleCount = this->ControlSampleCount + 1;
      iVar8 = 0;
      iVar4 = this->NumChannels;
      if (0 < iVar4) {
        pfVar5 = this->FeedbackFrame;
        lVar1 = (longlong)iVar7 * 4 - (longlong)this;
        do {
          lVar6 = 6;
          local_88 = 0.0;
          local_84[0] = *pfVar5 * this->Feedback +
                        *(float *)((longlong)param_1 + lVar1 + -0x2b8 + (longlong)pfVar5);
          this_00 = this->APFs[iVar8];
          do {
            FBiquadFilter::ProcessAudioFrame(this_00,local_84,&local_88);
            this_00 = this_00 + 1;
            local_84[0] = local_88;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          *pfVar5 = local_88;
          iVar8 = iVar8 + 1;
          *(float *)((((longlong)iVar7 * 4 + -0x2b8) - (longlong)this) + (longlong)param_3 +
                    (longlong)pfVar5) =
               (fVar2 - this->WetLevel) *
               *(float *)((longlong)param_1 + lVar1 + -0x2b8 + (longlong)pfVar5) +
               this->WetLevel * local_88;
          pfVar5 = pfVar5 + 1;
          iVar4 = this->NumChannels;
        } while (iVar8 < iVar4);
      }
      iVar7 = iVar7 + iVar4;
    } while (iVar7 < param_2);
  }
  return;
}

// ProcessAudioFrame @ 1445117e0

void __thiscall Audio::FPhaser::ProcessAudioFrame(FPhaser *this,float *param_1,float *param_2)

{
  float fVar1;
  FBiquadFilter *this_00;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float local_res8 [2];
  float local_res20 [2];
  
  this->ControlSampleCount = this->ControlSampleCount & this->ControlRate - 1U;
  fVar1 = __real_3f800000;
  if (this->ControlSampleCount == 0) {
    local_res8[0] = 0.0;
    fVar5 = (float)(**(code **)((this->LFO)._padding_ + 0x20))();
    fVar5 = (fVar5 + fVar1) * __real_3f000000;
    if (fVar1 <= fVar5) {
      fVar5 = fVar1;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    ComputeNewCoefficients(this,0,fVar5);
    if (this->bIsBiquadPhase != false) {
      fVar5 = (local_res8[0] + fVar1) * __real_3f000000;
    }
    ComputeNewCoefficients(this,1,fVar5);
  }
  this->ControlSampleCount = this->ControlSampleCount + 1;
  iVar4 = 0;
  if (0 < this->NumChannels) {
    pfVar2 = this->FeedbackFrame;
    do {
      lVar3 = 6;
      local_res8[0] = 0.0;
      local_res20[0] =
           *pfVar2 * this->Feedback +
           *(float *)((longlong)param_1 + (-0x2b8 - (longlong)this) + (longlong)pfVar2);
      this_00 = this->APFs[iVar4];
      do {
        FBiquadFilter::ProcessAudioFrame(this_00,local_res20,local_res8);
        this_00 = this_00 + 1;
        local_res20[0] = local_res8[0];
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *pfVar2 = local_res8[0];
      iVar4 = iVar4 + 1;
      *(float *)((longlong)param_2 + (-0x2b8 - (longlong)this) + (longlong)pfVar2) =
           (fVar1 - this->WetLevel) *
           *(float *)((longlong)param_1 + (-0x2b8 - (longlong)this) + (longlong)pfVar2) +
           this->WetLevel * local_res8[0];
      pfVar2 = pfVar2 + 1;
    } while (iVar4 < this->NumChannels);
  }
  return;
}

// SetFeedback @ 144519f00

void __thiscall Audio::FPhaser::SetFeedback(FPhaser *this,float param_1)

{
  if (param_1 != this->Feedback) {
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->Feedback = param_1;
  }
  return;
}

// SetFrequency @ 14451a1d0

void __thiscall Audio::FPhaser::SetFrequency(FPhaser *this,float param_1)

{
  if (param_1 != this->Frequency) {
    if (param_1 <= __real_322bcc77) {
      param_1 = __real_322bcc77;
    }
    this->Frequency = param_1;
    if (param_1 != *(float *)&(this->LFO)._padding_) {
      *(float *)&(this->LFO)._padding_ = param_1;
      *(undefined1 *)((longlong)&(this->LFO)._padding_ + 1) = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014451a209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->LFO)._padding_ + 0x28))(&this->LFO);
    return;
  }
  return;
}

// SetLFOType @ 14451b3e0

void __thiscall Audio::FPhaser::SetLFOType(FPhaser *this,Type param_1)

{
  if (param_1 != this->LFOType) {
    this->LFOType = param_1;
    (this->LFO).LFOType = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014451b3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->LFO)._padding_ + 0x28))();
    return;
  }
  return;
}

// SetQuadPhase @ 14451c710

void __thiscall Audio::FPhaser::SetQuadPhase(FPhaser *this,bool param_1)

{
  this->bIsBiquadPhase = param_1;
  return;
}

// SetWetLevel @ 14451d050

void __thiscall Audio::FPhaser::SetWetLevel(FPhaser *this,float param_1)

{
  if (param_1 != this->WetLevel) {
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->WetLevel = param_1;
  }
  return;
}

