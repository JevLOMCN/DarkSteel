// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 2

// GetLODScreenSizeBaseKey @ 14e5581e0

FAttributeKey * __cdecl UE::Interchange::FStaticMeshNodeStaticData::GetLODScreenSizeBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&LODScreenSize_BaseKey.Key,L"__LODScreenSize__");
      atexit(`UE::Interchange::FStaticMeshNodeStaticData::GetLODScreenSizeBaseKey'::__l2::
             _dynamic_atexit_destructor_for__LODScreenSize_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &LODScreenSize_BaseKey;
    }
  }
  return &LODScreenSize_BaseKey;
}

// GetSocketUidsBaseKey @ 14e55cf60

FAttributeKey * __cdecl UE::Interchange::FStaticMeshNodeStaticData::GetSocketUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&SocketUids_BaseKey.Key,L"SocketUids");
      atexit(`UE::Interchange::FStaticMeshNodeStaticData::GetSocketUidsBaseKey'::__l2::
             _dynamic_atexit_destructor_for__SocketUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &SocketUids_BaseKey;
    }
  }
  return &SocketUids_BaseKey;
}

