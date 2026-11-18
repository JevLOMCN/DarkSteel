// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetPlaybackCapabilityID @ 1461b29a0

TPlaybackCapabilityID<UE::MovieScene::IStaticBindingOverridesPlaybackCapability> __cdecl
UE::MovieScene::IStaticBindingOverridesPlaybackCapability::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::IStaticBindingOverridesPlaybackCapability> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>
                   )FPlaybackCapabilityID::Register(L"IStaticBindingOverridesPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// ~IStaticBindingOverridesPlaybackCapability @ 1461ff990

void __thiscall
UE::MovieScene::IStaticBindingOverridesPlaybackCapability::
~IStaticBindingOverridesPlaybackCapability(IStaticBindingOverridesPlaybackCapability *this)

{
  *this = (IStaticBindingOverridesPlaybackCapability)
          &___7IStaticBindingOverridesPlaybackCapability_MovieScene_UE__6B_;
  return;
}

