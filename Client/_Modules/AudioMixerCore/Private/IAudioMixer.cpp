// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 3

// ShouldRecycleThreads @ 1445299a0

bool __cdecl Audio::IAudioMixer::ShouldRecycleThreads(void)

{
  return bRecycleThreadsCVar != 0;
}

// ShouldUseDeviceInfoCache @ 1445299c0

bool __cdecl Audio::IAudioMixer::ShouldUseDeviceInfoCache(void)

{
  return bUseAudioDeviceInfoCacheCVar != 0;
}

// ShouldUseThreadedDeviceSwap @ 1445299f0

bool __cdecl Audio::IAudioMixer::ShouldUseThreadedDeviceSwap(void)

{
  return bUseThreadedDeviceSwapCVar != 0;
}

