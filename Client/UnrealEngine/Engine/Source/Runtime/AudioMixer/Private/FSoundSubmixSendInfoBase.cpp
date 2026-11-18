// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FSoundSubmixSendInfoBase @ 14653dc60

FSoundSubmixSendInfoBase * __thiscall
FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase
          (FSoundSubmixSendInfoBase *this,FSoundSubmixSendInfoBase *param_1)

{
  USoundSubmixBase *pUVar1;
  UCurveFloat *pUVar2;
  
  this->SendLevelControlMethod = param_1->SendLevelControlMethod;
  pUVar1 = (param_1->SoundSubmix).field0_0x0.DebugPtr;
  (this->SoundSubmix).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USoundSubmixBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->SendLevel = param_1->SendLevel;
  this->DisableManualSendClamp = param_1->DisableManualSendClamp;
  this->MinSendLevel = param_1->MinSendLevel;
  this->MaxSendLevel = param_1->MaxSendLevel;
  this->MinSendDistance = param_1->MinSendDistance;
  this->MaxSendDistance = param_1->MaxSendDistance;
  FRichCurve::FRichCurve
            (&(this->CustomSendLevelCurve).EditorCurveData,
             &(param_1->CustomSendLevelCurve).EditorCurveData);
  pUVar2 = (param_1->CustomSendLevelCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomSendLevelCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

