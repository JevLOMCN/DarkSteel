// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 3

// StartupModule @ 148d42550

void __thiscall FAudioMixerModuleWasapi::StartupModule(FAudioMixerModuleWasapi *this)

{
  FModuleManager *pFVar1;
  FName *pFVar2;
  FName local_res10 [3];
  
  pFVar1 = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res10,L"AudioMixer");
  FModuleManager::LoadModuleChecked(pFVar1,*pFVar2);
  pFVar1 = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res10,L"AudioMixerCore");
  FModuleManager::LoadModuleChecked(pFVar1,*pFVar2);
  pFVar1 = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res10,L"WindowsMMDeviceEnumeration");
  FModuleManager::LoadModuleChecked(pFVar1,*pFVar2);
  return;
}

// IsAudioMixerModule @ 148d425d0

bool __thiscall FAudioMixerModuleWasapi::IsAudioMixerModule(FAudioMixerModuleWasapi *this)

{
  return true;
}

// CreateAudioMixerPlatformInterface @ 148d425e0

IAudioMixerPlatformInterface * __thiscall
FAudioMixerModuleWasapi::CreateAudioMixerPlatformInterface(FAudioMixerModuleWasapi *this)

{
  FAudioMixerPlatformSwappable *this_00;
  
  this_00 = ::operator_new(0x228);
  if (this_00 != (FAudioMixerPlatformSwappable *)0x0) {
    Audio::FAudioMixerPlatformSwappable::FAudioMixerPlatformSwappable(this_00);
    this_00->_padding_ = (longlong)&Audio::FAudioMixerWasapi::_vftable__for__FRunnable__;
    this_00->_padding_ = (longlong)&Audio::FAudioMixerWasapi::_vftable__for__FSingleThreadRunnable__
    ;
    this_00->_padding_ =
         (longlong)
         &Audio::FAudioMixerWasapi::_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    return (IAudioMixerPlatformInterface *)this_00;
  }
  return (IAudioMixerPlatformInterface *)0x0;
}

