// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NonRealtimeAudioRenderer
// Functions: 4

// IsAudioMixerModule @ 1464c6bf0

bool __thiscall IAudioDeviceModule::IsAudioMixerModule(IAudioDeviceModule *this)

{
  return false;
}

// IsAudioDeviceClassMulticlient @ 1464c6c00

bool __thiscall IAudioDeviceModule::IsAudioDeviceClassMulticlient(IAudioDeviceModule *this)

{
  return true;
}

// CreateAudioDevice @ 1464c6c10

FAudioDevice * __thiscall IAudioDeviceModule::CreateAudioDevice(IAudioDeviceModule *this)

{
  return (FAudioDevice *)0x0;
}

// CreateAudioMixerPlatformInterface @ 1464c6c20

IAudioMixerPlatformInterface * __thiscall
IAudioDeviceModule::CreateAudioMixerPlatformInterface(IAudioDeviceModule *this)

{
  return (IAudioMixerPlatformInterface *)0x0;
}

