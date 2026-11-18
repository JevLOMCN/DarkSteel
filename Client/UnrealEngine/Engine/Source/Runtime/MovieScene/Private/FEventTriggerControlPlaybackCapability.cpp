// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetPlaybackCapabilityID @ 1461b2720

TPlaybackCapabilityID<UE::MovieScene::FEventTriggerControlPlaybackCapability> __cdecl
UE::MovieScene::FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::FEventTriggerControlPlaybackCapability> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::FEventTriggerControlPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"FEventTriggerControlPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// IsDisablingEventTriggers @ 1461bbb70

bool __thiscall
UE::MovieScene::FEventTriggerControlPlaybackCapability::IsDisablingEventTriggers
          (FEventTriggerControlPlaybackCapability *this,FFrameTime *param_1)

{
  if ((this->DisableEventTriggersUntilTime).bIsSet != false) {
    *param_1 = (this->DisableEventTriggersUntilTime).TypedValue;
    return true;
  }
  return false;
}

