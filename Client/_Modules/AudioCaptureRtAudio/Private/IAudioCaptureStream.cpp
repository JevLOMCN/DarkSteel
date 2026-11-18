// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 1

// ~<lambda_1> @ 14d0c3650

void __thiscall
`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x28);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

