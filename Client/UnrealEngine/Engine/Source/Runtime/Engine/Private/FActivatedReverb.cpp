// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FActivatedReverb @ 14761b4b0

FActivatedReverb * __thiscall
FActivatedReverb::FActivatedReverb(FActivatedReverb *this,FActivatedReverb *param_1)

{
  UReverbEffect *pUVar1;
  USoundEffectSubmixPreset *pUVar2;
  
  (this->ReverbSettings).bApplyReverb = (param_1->ReverbSettings).bApplyReverb;
  pUVar1 = (param_1->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UReverbEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (USoundEffectSubmixPreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ReverbSettings).Volume = (param_1->ReverbSettings).Volume;
  (this->ReverbSettings).FadeTime = (param_1->ReverbSettings).FadeTime;
  this->Priority = param_1->Priority;
  return this;
}

