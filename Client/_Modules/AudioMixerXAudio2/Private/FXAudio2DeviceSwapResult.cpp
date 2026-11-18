// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 2

// FXAudio2DeviceSwapResult @ 148d3b6f0

FXAudio2DeviceSwapResult * __thiscall
Audio::FXAudio2DeviceSwapResult::FXAudio2DeviceSwapResult(FXAudio2DeviceSwapResult *this)

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
  this->_padding_ = (longlong)&___7FXAudio2DeviceSwapResult_Audio__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->NewSystem = (IXAudio2 *)0x0;
  this->NewMasteringVoice = (IXAudio2MasteringVoice *)0x0;
  this->NewSourceVoice = (IXAudio2SourceVoice *)0x0;
  return this;
}

// IsNewDeviceReady @ 148d3f080

bool __thiscall Audio::FXAudio2DeviceSwapResult::IsNewDeviceReady(FXAudio2DeviceSwapResult *this)

{
  if (((this->NewSystem != (IXAudio2 *)0x0) &&
      (this->NewMasteringVoice != (IXAudio2MasteringVoice *)0x0)) &&
     (this->NewSourceVoice != (IXAudio2SourceVoice *)0x0)) {
    return true;
  }
  return false;
}

