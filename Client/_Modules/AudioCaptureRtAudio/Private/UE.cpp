// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 1

// DeleterFunc<RtAudio> @ 14d0c2400

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<RtAudio>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  ::operator_delete(param_1,0x20);
  return;
}

