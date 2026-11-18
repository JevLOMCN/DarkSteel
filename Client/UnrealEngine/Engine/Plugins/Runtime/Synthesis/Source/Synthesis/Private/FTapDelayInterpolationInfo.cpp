// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 5

// GetGainValue @ 14f0d92e0

float __thiscall FTapDelayInterpolationInfo::GetGainValue(FTapDelayInterpolationInfo *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = (this->GainParam).DurationTicks;
  iVar2 = (this->GainParam).CurrentTick;
  if (iVar1 <= iVar2) {
    return (this->GainParam).CurrentValue;
  }
  (this->GainParam).CurrentTick = iVar2 + 1;
  fVar3 = ((float)iVar2 * (this->GainParam).DeltaValue) / (float)iVar1 +
          (this->GainParam).StartValue;
  (this->GainParam).CurrentValue = fVar3;
  return fVar3;
}

// GetLengthValue @ 14f0d9ae0

float __thiscall FTapDelayInterpolationInfo::GetLengthValue(FTapDelayInterpolationInfo *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = (this->LengthParam).DurationTicks;
  iVar2 = (this->LengthParam).CurrentTick;
  if (iVar1 <= iVar2) {
    return (this->LengthParam).CurrentValue;
  }
  (this->LengthParam).CurrentTick = iVar2 + 1;
  fVar3 = ((float)iVar2 * (this->LengthParam).DeltaValue) / (float)iVar1 +
          (this->LengthParam).StartValue;
  (this->LengthParam).CurrentValue = fVar3;
  return fVar3;
}

// Init @ 14f0e54c0

void __thiscall FTapDelayInterpolationInfo::Init(FTapDelayInterpolationInfo *this,float param_1)

{
  (this->LengthParam).SampleRate = param_1;
  (this->GainParam).SampleRate = param_1;
  (this->LengthParam).bIsInit = true;
  (this->GainParam).bIsInit = true;
  return;
}

// SetGainValue @ 14f0fc4a0

void __thiscall
FTapDelayInterpolationInfo::SetGainValue
          (FTapDelayInterpolationInfo *this,float param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  if ((this->GainParam).bIsInit != false) {
    (this->GainParam).bIsInit = false;
    (this->GainParam).DurationTicks = 0;
    (this->GainParam).CurrentTick = 0;
    (this->GainParam).CurrentValue = param_1;
    return;
  }
  iVar3 = (int)(param_2 * (this->GainParam).SampleRate);
  (this->GainParam).DurationTicks = iVar3;
  (this->GainParam).CurrentTick = 0;
  pfVar1 = &(this->GainParam).CurrentValue;
  if (iVar3 == 0) {
    *pfVar1 = param_1;
    return;
  }
  fVar2 = *pfVar1;
  (this->GainParam).StartValue = fVar2;
  (this->GainParam).DeltaValue = param_1 - fVar2;
  return;
}

// SetLengthValue @ 14f0fdac0

void __thiscall
FTapDelayInterpolationInfo::SetLengthValue
          (FTapDelayInterpolationInfo *this,float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if ((this->LengthParam).bIsInit != false) {
    (this->LengthParam).bIsInit = false;
    (this->LengthParam).DurationTicks = 0;
    (this->LengthParam).CurrentValue = param_1;
    (this->LengthParam).CurrentTick = 0;
    return;
  }
  iVar2 = (int)(param_2 * (this->LengthParam).SampleRate);
  (this->LengthParam).DurationTicks = iVar2;
  (this->LengthParam).CurrentTick = 0;
  if (iVar2 == 0) {
    (this->LengthParam).CurrentValue = param_1;
    return;
  }
  fVar1 = (this->LengthParam).CurrentValue;
  (this->LengthParam).StartValue = fVar1;
  (this->LengthParam).DeltaValue = param_1 - fVar1;
  return;
}

