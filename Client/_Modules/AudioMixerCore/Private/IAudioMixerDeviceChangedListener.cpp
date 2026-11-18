// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 11

// ~IAudioMixerDeviceChangedListener @ 144526690

void __thiscall
Audio::IAudioMixerDeviceChangedListener::~IAudioMixerDeviceChangedListener
          (IAudioMixerDeviceChangedListener *this)

{
  return;
}

// GetDeviceId @ 1445276e0

FString * __thiscall
Audio::IAudioMixerDeviceChangedListener::GetDeviceId
          (IAudioMixerDeviceChangedListener *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnDefaultCaptureDeviceChanged @ 144528a30

void __thiscall
Audio::IAudioMixerDeviceChangedListener::OnDefaultCaptureDeviceChanged
          (IAudioMixerDeviceChangedListener *this,EAudioDeviceRole param_1,FString *param_2)

{
  return;
}

// OnDefaultRenderDeviceChanged @ 144528a40

void __thiscall
Audio::IAudioMixerDeviceChangedListener::OnDefaultRenderDeviceChanged
          (IAudioMixerDeviceChangedListener *this,EAudioDeviceRole param_1,FString *param_2)

{
  return;
}

// OnDeviceAdded @ 144528a50

void __thiscall
Audio::IAudioMixerDeviceChangedListener::OnDeviceAdded
          (IAudioMixerDeviceChangedListener *this,FString *param_1,bool param_2)

{
  return;
}

// OnDeviceRemoved @ 144528a60

void __thiscall
Audio::IAudioMixerDeviceChangedListener::OnDeviceRemoved
          (IAudioMixerDeviceChangedListener *this,FString *param_1,bool param_2)

{
  return;
}

// OnDeviceStateChanged @ 144528a70

void __thiscall
Audio::IAudioMixerDeviceChangedListener::OnDeviceStateChanged
          (IAudioMixerDeviceChangedListener *this,FString *param_1,EAudioDeviceState param_2,
          bool param_3)

{
  return;
}

// OnFormatChanged @ 144528a80

void __thiscall
Audio::IAudioMixerDeviceChangedListener::OnFormatChanged
          (IAudioMixerDeviceChangedListener *this,FString *param_1,FFormatChangedData *param_2)

{
  return;
}

// OnSessionDisconnect @ 144528aa0

void __thiscall
Audio::IAudioMixerDeviceChangedListener::OnSessionDisconnect
          (IAudioMixerDeviceChangedListener *this,EDisconnectReason param_1)

{
  return;
}

// RegisterDeviceChangedListener @ 144528f70

void __thiscall
Audio::IAudioMixerDeviceChangedListener::RegisterDeviceChangedListener
          (IAudioMixerDeviceChangedListener *this)

{
  return;
}

// UnregisterDeviceChangedListener @ 14452a1f0

void __thiscall
Audio::IAudioMixerDeviceChangedListener::UnregisterDeviceChangedListener
          (IAudioMixerDeviceChangedListener *this)

{
  return;
}

