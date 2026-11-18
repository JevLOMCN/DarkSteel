// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetPlaybackCapabilityID @ 1461b28a0

TPlaybackCapabilityID<UE::MovieScene::IEventContextsPlaybackCapability> __cdecl
UE::MovieScene::IEventContextsPlaybackCapability::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::IEventContextsPlaybackCapability> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::IEventContextsPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"IEventContextsPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

