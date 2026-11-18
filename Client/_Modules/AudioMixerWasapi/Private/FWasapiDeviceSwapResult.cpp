// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 2

// FWasapiDeviceSwapResult @ 148d42d20

FWasapiDeviceSwapResult * __thiscall
Audio::FWasapiDeviceSwapResult::FWasapiDeviceSwapResult(FWasapiDeviceSwapResult *this)

{
  this->_padding_ = (longlong)&___7FDeviceSwapResult_Audio__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FAudioPlatformDeviceInfo::Reset((FAudioPlatformDeviceInfo *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FWasapiDeviceSwapResult_Audio__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->NewDeviceManager).Ptr = (IAudioMixerWasapiDeviceManager *)0x0;
  this->bIsAggregateDevice = false;
  return this;
}

// IsNewDeviceReady @ 148d48190

bool __thiscall Audio::FWasapiDeviceSwapResult::IsNewDeviceReady(FWasapiDeviceSwapResult *this)

{
  return (this->NewDeviceManager).Ptr != (IAudioMixerWasapiDeviceManager *)0x0;
}

