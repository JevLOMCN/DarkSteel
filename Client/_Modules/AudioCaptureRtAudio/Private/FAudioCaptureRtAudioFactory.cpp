// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 1

// CreateNewAudioCaptureStream @ 14d0c2180

TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_> __thiscall
Audio::FAudioCaptureRtAudioFactory::CreateNewAudioCaptureStream(FAudioCaptureRtAudioFactory *this)

{
  IAudioCaptureStream IVar1;
  IAudioCaptureStream *in_RDX;
  IAudioCaptureStream IVar2;
  
  IVar2 = (IAudioCaptureStream)0x0;
  IVar1 = (IAudioCaptureStream)::operator_new(0x50);
  if (IVar1 != (IAudioCaptureStream)0x0) {
    *(undefined ***)IVar1 = &___7FAudioCaptureRtAudioStream_Audio__6B_;
    *(undefined8 *)((longlong)IVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x38) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x40) = 0;
    RtAudio::RtAudio((RtAudio *)((longlong)IVar1 + 0x48),UNSPECIFIED);
    IVar2 = IVar1;
  }
  *in_RDX = IVar2;
  return (TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_>)in_RDX;
}

