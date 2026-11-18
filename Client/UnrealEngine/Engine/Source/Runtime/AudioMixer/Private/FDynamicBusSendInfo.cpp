// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FDynamicBusSendInfo @ 1464d7a90

FDynamicBusSendInfo * __thiscall
Audio::FMixerSource::FDynamicBusSendInfo::FDynamicBusSendInfo
          (FDynamicBusSendInfo *this,FDynamicBusSendInfo *param_1)

{
  UCurveFloat *pUVar1;
  
  this->SendLevel = param_1->SendLevel;
  this->BusId = param_1->BusId;
  ::FString::FString(&this->BusName,&param_1->BusName);
  this->BusSendLevelControlMethod = param_1->BusSendLevelControlMethod;
  this->BusSendType = param_1->BusSendType;
  this->MinSendLevel = param_1->MinSendLevel;
  this->MaxSendLevel = param_1->MaxSendLevel;
  this->MinSendDistance = param_1->MinSendDistance;
  this->MaxSendDistance = param_1->MaxSendDistance;
  FRichCurve::FRichCurve
            (&(this->CustomSendLevelCurve).EditorCurveData,
             &(param_1->CustomSendLevelCurve).EditorCurveData);
  pUVar1 = (param_1->CustomSendLevelCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomSendLevelCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bIsInit = param_1->bIsInit;
  return this;
}

