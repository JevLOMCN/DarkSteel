// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 1

// CreateNewAudioCaptureStream @ 14d0bd180

TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_> __thiscall
Audio::FAudioCaptureWasapiFactory::CreateNewAudioCaptureStream(FAudioCaptureWasapiFactory *this)

{
  IAudioCaptureStream IVar1;
  IAudioCaptureStream *in_RDX;
  
  IVar1 = (IAudioCaptureStream)::operator_new(0xa0);
  if (IVar1 != (IAudioCaptureStream)0x0) {
    *(undefined8 *)((longlong)IVar1 + 0x40) = 0xffffffffffffffff;
    *(undefined ***)IVar1 = &___7FAudioCaptureWasapiStream_Audio__6B_;
    *(undefined8 *)((longlong)IVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x38) = 0;
    FWasapiStreamManager::FWasapiStreamManager((FWasapiStreamManager *)((longlong)IVar1 + 0x48));
    *in_RDX = IVar1;
    return (TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_>)
           in_RDX;
  }
  *in_RDX = (IAudioCaptureStream)0x0;
  return (TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_>)in_RDX;
}

