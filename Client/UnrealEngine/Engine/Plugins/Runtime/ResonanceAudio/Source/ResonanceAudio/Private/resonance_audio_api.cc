// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// CreateResonanceAudioApi @ 14f06e760

ResonanceAudioApi * __cdecl CreateResonanceAudioApi(ulong64 param_1,ulong64 param_2,int param_3)

{
  ResonanceAudioApiImpl *pRVar1;
  
  pRVar1 = operator_new(0x1a0);
  if (pRVar1 != (ResonanceAudioApiImpl *)0x0) {
    pRVar1 = vraudio::ResonanceAudioApiImpl::ResonanceAudioApiImpl(pRVar1,param_1,param_2,param_3);
    return (ResonanceAudioApi *)pRVar1;
  }
  return (ResonanceAudioApi *)0x0;
}

