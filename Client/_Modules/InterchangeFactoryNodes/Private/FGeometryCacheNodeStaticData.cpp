// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 1

// GetSceneNodeAnimationPayloadKeyUidMapKey @ 14e55c3d0

FAttributeKey * __cdecl
UE::Interchange::FGeometryCacheNodeStaticData::GetSceneNodeAnimationPayloadKeyUidMapKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__SceneNodeAnimationPayloadKeyUidMap__");
      atexit(`UE::Interchange::FGeometryCacheNodeStaticData::
             GetSceneNodeAnimationPayloadKeyUidMapKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

