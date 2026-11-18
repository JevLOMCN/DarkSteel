// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// FromAudioBusKey @ 146554830

FAudioRenderStepId __cdecl Audio::FAudioRenderStepId::FromAudioBusKey(FAudioBusKey param_1)

{
  undefined4 in_EDX;
  int in_register_00000014;
  
  *(ulonglong *)param_1 = CONCAT44(in_register_00000014 + 1,in_EDX);
  return (FAudioRenderStepId)param_1;
}

// FromTransmitterID @ 146554850

FAudioRenderStepId __cdecl Audio::FAudioRenderStepId::FromTransmitterID(ulong64 param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  return (FAudioRenderStepId)param_1;
}

