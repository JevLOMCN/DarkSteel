// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 1

// Call @ 144526f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::IAudioMixerPlatformInterface::ReadNextBuffer(*(IAudioMixerPlatformInterface **)param_1);
  return;
}

