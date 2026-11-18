// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 1

// Reset @ 14ec41950

void __thiscall FVoiceCaptureWindowsVars::Reset(FVoiceCaptureWindowsVars *this)

{
  if (this->StopEvent != (HANDLE)0xffffffffffffffff) {
    CloseHandle(this->StopEvent);
    this->StopEvent = (void *)0xffffffffffffffff;
  }
  if (this->VoiceCaptureBuffer8 != (IDirectSoundCaptureBuffer8 *)0x0) {
    (**(code **)((longlong)*this->VoiceCaptureBuffer8 + 0x10))();
    this->VoiceCaptureBuffer8 = (IDirectSoundCaptureBuffer8 *)0x0;
  }
  if (this->VoiceCaptureDev != (IDirectSoundCapture *)0x0) {
    (**(code **)((longlong)*this->VoiceCaptureDev + 0x10))();
    this->VoiceCaptureDev = (IDirectSoundCapture *)0x0;
  }
  this->NextCaptureOffset = 0;
  (this->VoiceCaptureDeviceGuid).Data1 = 0;
  (this->VoiceCaptureDeviceGuid).Data2 = 0;
  (this->VoiceCaptureDeviceGuid).Data3 = 0;
  (this->VoiceCaptureDeviceGuid).Data4[0] = '\0';
  (this->VoiceCaptureDeviceGuid).Data4[1] = '\0';
  (this->VoiceCaptureDeviceGuid).Data4[2] = '\0';
  (this->VoiceCaptureDeviceGuid).Data4[3] = '\0';
  (this->VoiceCaptureDeviceGuid).Data4[4] = '\0';
  (this->VoiceCaptureDeviceGuid).Data4[5] = '\0';
  (this->VoiceCaptureDeviceGuid).Data4[6] = '\0';
  (this->VoiceCaptureDeviceGuid).Data4[7] = '\0';
  (this->VoiceCaptureDevCaps).dwSize = 0;
  (this->VoiceCaptureDevCaps).dwFlags = 0;
  (this->VoiceCaptureDevCaps).dwFormats = 0;
  (this->VoiceCaptureDevCaps).dwChannels = 0;
  (this->WavFormat).wFormatTag = 0;
  (this->WavFormat).nChannels = 0;
  (this->WavFormat).nSamplesPerSec = 0;
  (this->WavFormat).nAvgBytesPerSec = 0;
  (this->WavFormat).nBlockAlign = 0;
  (this->WavFormat).wBitsPerSample = 0;
  (this->WavFormat).cbSize = 0;
  (this->VoiceCaptureBufferDesc).dwSize = 0;
  (this->VoiceCaptureBufferDesc).dwFlags = 0;
  (this->VoiceCaptureBufferDesc).dwBufferBytes = 0;
  (this->VoiceCaptureBufferDesc).dwReserved = 0;
  (this->VoiceCaptureBufferDesc).lpwfxFormat = (tWAVEFORMATEX *)0x0;
  *(undefined8 *)&(this->VoiceCaptureBufferDesc).dwFXCount = 0;
  (this->VoiceCaptureBufferDesc).lpDSCFXDesc = (_DSCEFFECTDESC *)0x0;
  (this->VoiceCaptureBufferCaps8).dwSize = 0;
  (this->VoiceCaptureBufferCaps8).dwFlags = 0;
  (this->VoiceCaptureBufferCaps8).dwBufferBytes = 0;
  (this->VoiceCaptureBufferCaps8).dwReserved = 0;
  return;
}

