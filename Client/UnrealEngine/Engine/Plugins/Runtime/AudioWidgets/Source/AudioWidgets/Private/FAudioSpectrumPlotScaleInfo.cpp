// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// FAudioSpectrumPlotScaleInfo @ 14d8b4080

FAudioSpectrumPlotScaleInfo * __thiscall
FAudioSpectrumPlotScaleInfo::FAudioSpectrumPlotScaleInfo
          (FAudioSpectrumPlotScaleInfo *this,TVector2<float> param_1,
          EAudioSpectrumPlotFrequencyAxisScale param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  float fVar1;
  float local_res10;
  float fStackX_14;
  
  (this->WidgetSize).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  this->FrequencyAxisScale = param_2;
  if (param_2 == Logarithmic) {
    param_3 = logf(param_3);
    this->TransformedViewMinFrequency = param_3;
    param_4 = logf(param_4);
  }
  else {
    this->TransformedViewMinFrequency = param_3;
  }
  this->TransformedViewMaxFrequency = param_4;
  fVar1 = param_4 - param_3;
  this->TransformedViewFrequencyRange = fVar1;
  if (fVar1 <= 0.0) {
    local_res10 = 0.0;
  }
  else {
    local_res10 = param_1.field0_0x0._0_4_;
    local_res10 = local_res10 / fVar1;
  }
  this->PixelsPerTransformedHz = local_res10;
  this->ViewMaxSoundLevel = param_6;
  fVar1 = param_6 - param_5;
  this->ViewMinSoundLevel = param_5;
  this->ViewSoundLevelRange = fVar1;
  if (0.0 < fVar1) {
    fStackX_14 = param_1.field0_0x0._4_4_;
    this->PixelsPerDecibel = fStackX_14 / fVar1;
    return this;
  }
  this->PixelsPerDecibel = 0.0;
  return this;
}

// FrequencyToLocalX @ 14d925790

float __thiscall
FAudioSpectrumPlotScaleInfo::FrequencyToLocalX(FAudioSpectrumPlotScaleInfo *this,float param_1)

{
  if (this->FrequencyAxisScale == Logarithmic) {
    param_1 = logf(param_1);
  }
  return (param_1 - this->TransformedViewMinFrequency) * this->PixelsPerTransformedHz;
}

// LocalXToFrequency @ 14d93fb00

float __thiscall
FAudioSpectrumPlotScaleInfo::LocalXToFrequency(FAudioSpectrumPlotScaleInfo *this,float param_1)

{
  float fVar1;
  
  if (this->PixelsPerTransformedHz == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 / this->PixelsPerTransformedHz + this->TransformedViewMinFrequency;
  }
  if (this->FrequencyAxisScale != Logarithmic) {
    return fVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018ffb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = expf(fVar1);
  return fVar1;
}

// LocalYToSoundLevel @ 14d93fb30

float __thiscall
FAudioSpectrumPlotScaleInfo::LocalYToSoundLevel(FAudioSpectrumPlotScaleInfo *this,float param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (this->PixelsPerDecibel != 0.0) {
    fVar1 = this->ViewMaxSoundLevel - param_1 / this->PixelsPerDecibel;
  }
  return fVar1;
}

// SoundLevelToLocalY @ 14d970330

float __thiscall
FAudioSpectrumPlotScaleInfo::SoundLevelToLocalY(FAudioSpectrumPlotScaleInfo *this,float param_1)

{
  return (this->ViewMaxSoundLevel - param_1) * this->PixelsPerDecibel;
}

// ToLocalPos @ 14d976590

TVector2<float> __thiscall
FAudioSpectrumPlotScaleInfo::ToLocalPos(FAudioSpectrumPlotScaleInfo *this,TVector2<float> *param_1)

{
  float *in_R8;
  float _X;
  
  _X = *in_R8;
  if (this->FrequencyAxisScale == Logarithmic) {
    _X = logf(_X);
  }
  (param_1->field0_0x0)._s_0.X =
       (_X - this->TransformedViewMinFrequency) * this->PixelsPerTransformedHz;
  (param_1->field0_0x0)._s_0.Y = (this->ViewMaxSoundLevel - in_R8[1]) * this->PixelsPerDecibel;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

