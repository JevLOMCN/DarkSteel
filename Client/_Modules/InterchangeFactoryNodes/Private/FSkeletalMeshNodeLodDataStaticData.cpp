// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 1

// GetMeshUidsBaseKey @ 14e558490

FAttributeKey * __cdecl
UE::Interchange::FSkeletalMeshNodeLodDataStaticData::GetMeshUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&MeshUids_BaseKey.Key,L"__MeshUids__Key");
      atexit(`UE::Interchange::FSkeletalMeshNodeLodDataStaticData::GetMeshUidsBaseKey'::__l2::
             _dynamic_atexit_destructor_for__MeshUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &MeshUids_BaseKey;
    }
  }
  return &MeshUids_BaseKey;
}

