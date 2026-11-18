// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// FAlphaBlend @ 146402bd0

FAlphaBlend * __thiscall FAlphaBlend::FAlphaBlend(FAlphaBlend *this,FAlphaBlend *param_1)

{
  UCurveFloat *pUVar1;
  
  pUVar1 = (param_1->CustomCurve).field0_0x0.DebugPtr;
  (this->CustomCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->BlendTime = param_1->BlendTime;
  this->AlphaLerp = param_1->AlphaLerp;
  this->AlphaBlend = param_1->AlphaBlend;
  this->BlendTimeRemaining = param_1->BlendTimeRemaining;
  this->BlendedValue = param_1->BlendedValue;
  this->BeginValue = param_1->BeginValue;
  this->DesiredValue = param_1->DesiredValue;
  this->BlendOption = param_1->BlendOption;
  this->bNeedsToResetAlpha = param_1->bNeedsToResetAlpha;
  this->bNeedsToResetBlendTime = param_1->bNeedsToResetBlendTime;
  this->bNeedsToResetCachedDesiredBlendedValue = param_1->bNeedsToResetCachedDesiredBlendedValue;
  this->CachedDesiredBlendedValue = param_1->CachedDesiredBlendedValue;
  return this;
}

// operator= @ 14640a5d0

FAlphaBlend * __thiscall FAlphaBlend::operator=(FAlphaBlend *this,FAlphaBlend *param_1)

{
  UCurveFloat *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->CustomCurve).field0_0x0.DebugPtr, pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CustomCurve).field0_0x0 = (param_1->CustomCurve).field0_0x0;
  this->BlendTime = param_1->BlendTime;
  this->AlphaLerp = param_1->AlphaLerp;
  this->AlphaBlend = param_1->AlphaBlend;
  this->BlendTimeRemaining = param_1->BlendTimeRemaining;
  this->BlendedValue = param_1->BlendedValue;
  this->BeginValue = param_1->BeginValue;
  this->DesiredValue = param_1->DesiredValue;
  this->BlendOption = param_1->BlendOption;
  this->bNeedsToResetAlpha = param_1->bNeedsToResetAlpha;
  this->bNeedsToResetBlendTime = param_1->bNeedsToResetBlendTime;
  this->bNeedsToResetCachedDesiredBlendedValue = param_1->bNeedsToResetCachedDesiredBlendedValue;
  this->CachedDesiredBlendedValue = param_1->CachedDesiredBlendedValue;
  return this;
}

