// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FBitCrusher @ 1444a25e0

FBitCrusher * __thiscall Audio::FBitCrusher::FBitCrusher(FBitCrusher *this)

{
  this->BitDepth = 16.0;
  this->SampleRate = 0.0;
  this->Phase = 1.0;
  this->PhaseDelta = 1.0;
  this->LastOutput[0] = 0.0;
  this->LastOutput[1] = 0.0;
  this->BitDelta = 1.5258789e-05;
  return this;
}

// ~FBitCrusher @ 1444a6060

void __thiscall Audio::FBitCrusher::~FBitCrusher(FBitCrusher *this)

{
  return;
}

// GetMaxBitDepth @ 1444bfdd0

float __cdecl Audio::FBitCrusher::GetMaxBitDepth(void)

{
  return __real_42000000;
}

// Init @ 1444c1c60

void __thiscall Audio::FBitCrusher::Init(FBitCrusher *this,float param_1,int param_2)

{
  this->SampleRate = param_1;
  this->Phase = 1.0;
  this->NumChannels = param_2;
  return;
}

// ProcessAudio @ 1444d6a60

void __thiscall
Audio::FBitCrusher::ProcessAudio(FBitCrusher *this,float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  fVar2 = __real_3f000000;
  fVar1 = __real_3f800000;
  if (0 < param_2) {
    iVar6 = this->NumChannels;
    iVar5 = 0;
    do {
      fVar8 = this->Phase + this->PhaseDelta;
      lVar7 = (longlong)iVar5;
      this->Phase = fVar8;
      if (fVar1 <= fVar8) {
        fVar8 = fVar8 - fVar1;
        auVar9 = ZEXT416((uint)fVar8);
        iVar4 = 0;
        this->Phase = fVar8;
        if (0 < iVar6) {
          pfVar3 = this->LastOutput;
          do {
            iVar4 = iVar4 + 1;
            auVar9 = roundps(auVar9,ZEXT416((uint)(*(float *)(((lVar7 * 4 + -0x18) - (longlong)this)
                                                              + (longlong)param_1 + (longlong)pfVar3
                                                             ) * this->ReciprocalBitDelta + fVar2)),
                             1);
            auVar9._0_4_ = auVar9._0_4_ * this->BitDelta;
            *pfVar3 = auVar9._0_4_;
            pfVar3 = pfVar3 + 1;
            iVar6 = this->NumChannels;
          } while (iVar4 < iVar6);
        }
      }
      iVar4 = 0;
      if (0 < iVar6) {
        pfVar3 = param_3 + lVar7;
        do {
          iVar4 = iVar4 + 1;
          *pfVar3 = *(float *)((longlong)pfVar3 +
                              ((6 - lVar7) * 4 - (longlong)param_3) + (longlong)this);
          pfVar3 = pfVar3 + 1;
          iVar6 = this->NumChannels;
        } while (iVar4 < iVar6);
      }
      iVar5 = iVar5 + iVar6;
    } while (iVar5 < param_2);
  }
  return;
}

// ProcessAudioFrame @ 1444de100

void __thiscall
Audio::FBitCrusher::ProcessAudioFrame(FBitCrusher *this,float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar2 = __real_3f800000;
  iVar5 = 0;
  fVar6 = this->PhaseDelta + this->Phase;
  bVar1 = __real_3f800000 <= fVar6;
  this->Phase = fVar6;
  if (bVar1) {
    auVar7 = ZEXT416((uint)(fVar6 - fVar2));
    iVar3 = 0;
    this->Phase = fVar6 - fVar2;
    fVar2 = __real_3f000000;
    if (0 < this->NumChannels) {
      pfVar4 = param_1;
      do {
        iVar3 = iVar3 + 1;
        auVar7 = roundps(auVar7,ZEXT416((uint)(this->ReciprocalBitDelta * *pfVar4 + fVar2)),1);
        auVar7._0_4_ = auVar7._0_4_ * this->BitDelta;
        *(float *)((longlong)pfVar4 + (longlong)this + (0x18 - (longlong)param_1)) = auVar7._0_4_;
        pfVar4 = pfVar4 + 1;
      } while (iVar3 < this->NumChannels);
    }
  }
  if (0 < this->NumChannels) {
    pfVar4 = param_2;
    do {
      iVar5 = iVar5 + 1;
      *pfVar4 = *(float *)((longlong)pfVar4 + (longlong)this + (0x18 - (longlong)param_2));
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < this->NumChannels);
  }
  return;
}

// SetBitDepthCrush @ 1444e30a0

void __thiscall Audio::FBitCrusher::SetBitDepthCrush(FBitCrusher *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __real_40000000;
  fVar1 = __real_3f800000;
  if (__real_42000000 <= param_1) {
    param_1 = __real_42000000;
  }
  if (param_1 <= __real_3f800000) {
    param_1 = __real_3f800000;
  }
  this->BitDepth = param_1;
  fVar2 = powf(fVar2,(float)((uint)param_1 ^ __xmm_80000000800000008000000080000000));
  this->BitDelta = fVar2;
  this->ReciprocalBitDelta = fVar1 / fVar2;
  return;
}

// SetSampleRateCrush @ 1444e5990

void __thiscall Audio::FBitCrusher::SetSampleRateCrush(FBitCrusher *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->SampleRate;
  fVar2 = fVar1;
  if (param_1 <= fVar1) {
    fVar2 = param_1;
  }
  if (fVar2 <= __real_3f800000) {
    fVar2 = __real_3f800000;
  }
  this->PhaseDelta = fVar2 / fVar1;
  return;
}

