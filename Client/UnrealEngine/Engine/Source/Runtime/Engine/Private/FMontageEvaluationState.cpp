// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMontageEvaluationState @ 147433d10

FMontageEvaluationState * __thiscall
FMontageEvaluationState::FMontageEvaluationState
          (FMontageEvaluationState *this,FMontageEvaluationState *param_1)

{
  UCurveFloat *pUVar1;
  float fVar2;
  undefined3 uVar3;
  
  (this->Montage).WeakPtr = (param_1->Montage).WeakPtr;
  pUVar1 = (param_1->BlendInfo).CustomCurve.field0_0x0.DebugPtr;
  (this->BlendInfo).CustomCurve.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->BlendInfo).BlendTime = (param_1->BlendInfo).BlendTime;
  (this->BlendInfo).AlphaLerp = (param_1->BlendInfo).AlphaLerp;
  (this->BlendInfo).AlphaBlend = (param_1->BlendInfo).AlphaBlend;
  (this->BlendInfo).BlendTimeRemaining = (param_1->BlendInfo).BlendTimeRemaining;
  (this->BlendInfo).BlendedValue = (param_1->BlendInfo).BlendedValue;
  (this->BlendInfo).BeginValue = (param_1->BlendInfo).BeginValue;
  (this->BlendInfo).DesiredValue = (param_1->BlendInfo).DesiredValue;
  (this->BlendInfo).BlendOption = (param_1->BlendInfo).BlendOption;
  (this->BlendInfo).bNeedsToResetAlpha = (param_1->BlendInfo).bNeedsToResetAlpha;
  (this->BlendInfo).bNeedsToResetBlendTime = (param_1->BlendInfo).bNeedsToResetBlendTime;
  (this->BlendInfo).bNeedsToResetCachedDesiredBlendedValue =
       (param_1->BlendInfo).bNeedsToResetCachedDesiredBlendedValue;
  (this->BlendInfo).CachedDesiredBlendedValue = (param_1->BlendInfo).CachedDesiredBlendedValue;
  this->ActiveBlendProfile = param_1->ActiveBlendProfile;
  this->MontagePosition = param_1->MontagePosition;
  fVar2 = (param_1->DeltaTimeRecord).Previous;
  (this->DeltaTimeRecord).Delta = (param_1->DeltaTimeRecord).Delta;
  (this->DeltaTimeRecord).Previous = fVar2;
  uVar3 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
  (this->DeltaTimeRecord).bPreviousIsValid = (param_1->DeltaTimeRecord).bPreviousIsValid;
  *(undefined3 *)&(this->DeltaTimeRecord).field_0x9 = uVar3;
  this->BlendStartAlpha = param_1->BlendStartAlpha;
  this->bIsPlaying = param_1->bIsPlaying;
  this->bIsActive = param_1->bIsActive;
  return this;
}

