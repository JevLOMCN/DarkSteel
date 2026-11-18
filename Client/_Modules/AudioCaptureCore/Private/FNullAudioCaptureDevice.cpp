// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureCore
// Functions: 12

// AbortStream @ 14d0bc4b0

bool __thiscall Audio::FNullAudioCaptureDevice::AbortStream(FNullAudioCaptureDevice *this)

{
  return false;
}

// CloseStream @ 14d0bc600

bool __thiscall Audio::FNullAudioCaptureDevice::CloseStream(FNullAudioCaptureDevice *this)

{
  return false;
}

// GetCaptureDeviceInfo @ 14d0bc790

bool __thiscall
Audio::FNullAudioCaptureDevice::GetCaptureDeviceInfo
          (FNullAudioCaptureDevice *this,FCaptureDeviceInfo *param_1,int param_2)

{
  return false;
}

// GetInputDevicesAvailable @ 14d0bc820

bool __thiscall
Audio::FNullAudioCaptureDevice::GetInputDevicesAvailable
          (FNullAudioCaptureDevice *this,
          TArray<Audio::FCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetSampleRate @ 14d0bc8a0

int __thiscall Audio::FNullAudioCaptureDevice::GetSampleRate(FNullAudioCaptureDevice *this)

{
  return 0;
}

// GetStreamTime @ 14d0bc8d0

bool __thiscall
Audio::FNullAudioCaptureDevice::GetStreamTime(FNullAudioCaptureDevice *this,double *param_1)

{
  return false;
}

// IsCapturing @ 14d0bc940

bool __thiscall Audio::FNullAudioCaptureDevice::IsCapturing(FNullAudioCaptureDevice *this)

{
  return false;
}

// IsStreamOpen @ 14d0bc990

bool __thiscall Audio::FNullAudioCaptureDevice::IsStreamOpen(FNullAudioCaptureDevice *this)

{
  return false;
}

// OnAudioCapture @ 14d0bc9a0

void __thiscall
Audio::FNullAudioCaptureDevice::OnAudioCapture
          (FNullAudioCaptureDevice *this,void *param_1,uint param_2,double param_3,bool param_4)

{
  return;
}

// OpenAudioCaptureStream @ 14d0bca70

bool __thiscall
Audio::FNullAudioCaptureDevice::OpenAudioCaptureStream
          (FNullAudioCaptureDevice *this,FAudioCaptureDeviceParams *param_1,
          TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *param_2,uint param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return false;
}

// StartStream @ 14d0bd000

bool __thiscall Audio::FNullAudioCaptureDevice::StartStream(FNullAudioCaptureDevice *this)

{
  return false;
}

// StopStream @ 14d0bd0f0

bool __thiscall Audio::FNullAudioCaptureDevice::StopStream(FNullAudioCaptureDevice *this)

{
  return false;
}

