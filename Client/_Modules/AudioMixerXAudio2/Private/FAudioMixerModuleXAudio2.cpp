// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 3

// StartupModule @ 148d398d0

void __thiscall FAudioMixerModuleXAudio2::StartupModule(FAudioMixerModuleXAudio2 *this)

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
  return;
}

// IsAudioMixerModule @ 148d39930

bool __thiscall FAudioMixerModuleXAudio2::IsAudioMixerModule(FAudioMixerModuleXAudio2 *this)

{
  return true;
}

// CreateAudioMixerPlatformInterface @ 148d39940

IAudioMixerPlatformInterface * __thiscall
FAudioMixerModuleXAudio2::CreateAudioMixerPlatformInterface(FAudioMixerModuleXAudio2 *this)

{
  FAudioMixerPlatformSwappable *this_00;
  
  this_00 = ::operator_new(0x260);
  if (this_00 != (FAudioMixerPlatformSwappable *)0x0) {
    Audio::FAudioMixerPlatformSwappable::FAudioMixerPlatformSwappable(this_00);
    *(uint *)&this_00[1]._padding_ = (uint)this_00[1]._padding_ & 0xfffffffc;
    this_00->_padding_ = (longlong)&Audio::FMixerPlatformXAudio2::_vftable__for__FRunnable__;
    this_00->_padding_ =
         (longlong)&Audio::FMixerPlatformXAudio2::_vftable__for__FSingleThreadRunnable__;
    this_00->_padding_ =
         (longlong)
         &Audio::FMixerPlatformXAudio2::_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
    this_00[1]._padding_ = (longlong)&___7FMixerPlatformXAudio2_Audio__6B_;
    this_00[1]._padding_ = (longlong)&___7FXAudio2VoiceCallback_Audio__6B_;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1]._padding_ + 4) = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    FWindowsPlatformMisc::CoInitialize(Singlethreaded);
    return (IAudioMixerPlatformInterface *)this_00;
  }
  return (IAudioMixerPlatformInterface *)0x0;
}

