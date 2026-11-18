// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// DestroyObject @ 148d3cc60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FWindowsMMNotificationClient,`Audio::FMixerPlatformXAudio2::RegisterDeviceChangedListener'::__l5::<lambda_1>,1>
::DestroyObject(void *this)

{
  Audio::FWindowsMMNotificationClient::ReleaseClient
            (*(FWindowsMMNotificationClient **)((longlong)this + 0x10));
  return;
}

