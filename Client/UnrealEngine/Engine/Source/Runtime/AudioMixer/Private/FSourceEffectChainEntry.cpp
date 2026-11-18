// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FSourceEffectChainEntry @ 1464d9990

FSourceEffectChainEntry * __thiscall
FSourceEffectChainEntry::FSourceEffectChainEntry
          (FSourceEffectChainEntry *this,FSourceEffectChainEntry *param_1)

{
  USoundEffectSourcePreset *pUVar1;
  
  pUVar1 = (param_1->Preset).field0_0x0.DebugPtr;
  (this->Preset).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USoundEffectSourcePreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 ^ (this->bBypass ^ param_1->bBypass) & 1;
  return this;
}

