// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// GetPlaybackCapabilityID @ 1461b2920

TPlaybackCapabilityID<UE::MovieScene::IObjectBindingNotifyPlaybackCapability> __cdecl
UE::MovieScene::IObjectBindingNotifyPlaybackCapability::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::IObjectBindingNotifyPlaybackCapability> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"IObjectBindingNotifyPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// NotifyBindingUpdate @ 146225700

void __thiscall
UE::MovieScene::IObjectBindingNotifyPlaybackCapability::NotifyBindingUpdate
          (IObjectBindingNotifyPlaybackCapability *this,FGuid *param_1,
          FMovieSceneSequenceID *param_2,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *param_3)

{
  return;
}

// NotifyBindingsChanged @ 146225720

void __thiscall
UE::MovieScene::IObjectBindingNotifyPlaybackCapability::NotifyBindingsChanged
          (IObjectBindingNotifyPlaybackCapability *this)

{
  return;
}

