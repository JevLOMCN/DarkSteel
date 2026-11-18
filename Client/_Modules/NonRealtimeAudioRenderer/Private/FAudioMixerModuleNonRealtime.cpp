// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NonRealtimeAudioRenderer
// Functions: 2

// IsAudioMixerModule @ 1464c6ae0

bool __thiscall FAudioMixerModuleNonRealtime::IsAudioMixerModule(FAudioMixerModuleNonRealtime *this)

{
  return true;
}

// CreateAudioDevice @ 1464c6af0

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioDevice * __thiscall
FAudioMixerModuleNonRealtime::CreateAudioDevice(FAudioMixerModuleNonRealtime *this)

{
  FAudioPlatformDeviceInfo *pFVar1;
  FMixerDevice *pFVar2;
  IAudioMixerPlatformInterface *this_00;
  
  pFVar2 = ::operator_new(0xec0);
  if (pFVar2 == (FMixerDevice *)0x0) {
    return (FAudioDevice *)0x0;
  }
  this_00 = ::operator_new(0x210);
  if (this_00 != (IAudioMixerPlatformInterface *)0x0) {
    Audio::IAudioMixerPlatformInterface::IAudioMixerPlatformInterface(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0x473b8000;
    this_00->_padding_ = (longlong)&Audio::FMixerPlatformNonRealtime::_vftable__for__FRunnable__;
    this_00->_padding_ =
         (longlong)&Audio::FMixerPlatformNonRealtime::_vftable__for__FSingleThreadRunnable__;
    this_00->_padding_ =
         (longlong)
         &Audio::FMixerPlatformNonRealtime::_vftable__for__Audio__IAudioMixerDeviceChangedListener__
    ;
    pFVar1 = &this_00[1].AudioStreamInfo.DeviceInfo;
    *(uint *)&(pFVar1->Name).Data.AllocatorInstance.Data =
         *(uint *)&(pFVar1->Name).Data.AllocatorInstance.Data & 0xfffffffc;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined8 *)&this_00[1].AudioStreamInfo = 0;
    this_00[1].AudioStreamInfo.DeviceInfo.Name.Data.ArrayNum = 0;
    this_00[1].AudioStreamInfo.DeviceInfo.Name.Data.ArrayMax = 0;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = 2;
  }
  pFVar2 = Audio::FMixerDevice::FMixerDevice(pFVar2,this_00);
  return (FAudioDevice *)pFVar2;
}

