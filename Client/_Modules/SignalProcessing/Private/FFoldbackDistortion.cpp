// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FFoldbackDistortion @ 1444ee680

FFoldbackDistortion * __thiscall
Audio::FFoldbackDistortion::FFoldbackDistortion(FFoldbackDistortion *this)

{
  this->Threshold = 0.5;
  this->Threshold2 = 1.0;
  this->Threshold4 = 2.0;
  this->OutputGain = 1.0;
  this->NumChannels = 0;
  return this;
}

// ~FFoldbackDistortion @ 1444f37d0

void __thiscall Audio::FFoldbackDistortion::~FFoldbackDistortion(FFoldbackDistortion *this)

{
  return;
}

// Init @ 1445053b0

void __thiscall
Audio::FFoldbackDistortion::Init(FFoldbackDistortion *this,float param_1,int param_2)

{
  this->NumChannels = param_2;
  return;
}

// ProcessAudio @ 14450cdd0

void __thiscall
Audio::FFoldbackDistortion::ProcessAudio
          (FFoldbackDistortion *this,float *param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = __xmm_80000000800000008000000080000000;
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (0 < param_2) {
    iVar6 = 0;
    do {
      iVar3 = this->NumChannels;
      iVar4 = 0;
      if (0 < iVar3) {
        pfVar5 = param_3 + iVar6;
        do {
          fVar8 = *(float *)((longlong)pfVar5 + ((longlong)param_1 - (longlong)param_3)) *
                  this->InputGain;
          fVar7 = this->Threshold;
          if ((fVar7 < fVar8) || (fVar8 < (float)((uint)fVar7 ^ uVar2))) {
            fVar7 = FGenericPlatformMath::Fmod(fVar8 - fVar7,this->Threshold4);
            fVar8 = (float)((uint)((float)((uint)fVar7 & uVar1) - this->Threshold2) & uVar1) -
                    this->Threshold;
          }
          iVar4 = iVar4 + 1;
          *pfVar5 = fVar8 * this->OutputGain;
          pfVar5 = pfVar5 + 1;
          iVar3 = this->NumChannels;
        } while (iVar4 < iVar3);
      }
      iVar6 = iVar6 + iVar3;
    } while (iVar6 < param_2);
  }
  return;
}

// ProcessAudioFrame @ 144511140

void __thiscall
Audio::FFoldbackDistortion::ProcessAudioFrame
          (FFoldbackDistortion *this,float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = __xmm_80000000800000008000000080000000;
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar4 = 0;
  if (0 < this->NumChannels) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      fVar6 = *(float *)((longlong)param_2 + lVar3) * this->InputGain;
      fVar5 = this->Threshold;
      if ((fVar5 < fVar6) || (fVar6 < (float)((uint)fVar5 ^ uVar2))) {
        fVar5 = FGenericPlatformMath::Fmod(fVar6 - fVar5,this->Threshold4);
        fVar6 = (float)((uint)((float)((uint)fVar5 & uVar1) - this->Threshold2) & uVar1) -
                this->Threshold;
      }
      iVar4 = iVar4 + 1;
      *param_2 = fVar6 * this->OutputGain;
      param_2 = param_2 + 1;
    } while (iVar4 < this->NumChannels);
  }
  return;
}

// ProcessAudioSample @ 144513310

float __thiscall
Audio::FFoldbackDistortion::ProcessAudioSample(FFoldbackDistortion *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 * this->InputGain;
  fVar1 = this->Threshold;
  if ((fVar1 < fVar2) || (fVar2 < (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000))) {
    fVar1 = FGenericPlatformMath::Fmod(fVar2 - fVar1,this->Threshold4);
    fVar2 = (float)((uint)((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
                          this->Threshold2) & __xmm_7fffffff7fffffff7fffffff7fffffff) -
            this->Threshold;
  }
  return fVar2 * this->OutputGain;
}

// SetInputGainDb @ 14451b3b0

void __thiscall Audio::FFoldbackDistortion::SetInputGainDb(FFoldbackDistortion *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->InputGain = fVar1;
  return;
}

// SetOutputGainDb @ 14451c160

void __thiscall Audio::FFoldbackDistortion::SetOutputGainDb(FFoldbackDistortion *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->OutputGain = fVar1;
  return;
}

// SetThresholdDb @ 14451cfd0

void __thiscall Audio::FFoldbackDistortion::SetThresholdDb(FFoldbackDistortion *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->Threshold = fVar1;
  this->Threshold4 = fVar1 * __real_40800000;
  this->Threshold2 = fVar1 + fVar1;
  return;
}

