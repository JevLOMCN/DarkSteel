// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetPlaybackCapabilityID @ 1462af430

TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability> __cdecl
UE::MovieScene::Tests::FTestInvalidatableCapability::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability>)
                   FPlaybackCapabilityID::Register(L"FTestInvalidatableCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// InvalidateCachedData @ 1462b36d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::Tests::FTestInvalidatableCapability::InvalidateCachedData
          (FTestInvalidatableCapability *this,UMovieSceneEntitySystemLinker *param_1)

{
  this->TimesInvalidated = this->TimesInvalidated + 1;
  return;
}

