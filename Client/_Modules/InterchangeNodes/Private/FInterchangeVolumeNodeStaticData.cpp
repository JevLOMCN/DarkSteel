// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 2

// GetCustomFrameIndicesInAnimationBaseKey @ 14e491d30

FAttributeKey * __cdecl
UE::Interchange::FInterchangeVolumeNodeStaticData::GetCustomFrameIndicesInAnimationBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__FrameIndexInAnimation__");
      atexit(`UE::Interchange::FInterchangeVolumeNodeStaticData::
             GetCustomFrameIndicesInAnimationBaseKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetCustomGridDependeciesBaseKey @ 14e492470

FAttributeKey * __cdecl
UE::Interchange::FInterchangeVolumeNodeStaticData::GetCustomGridDependeciesBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__GridDependencies__");
      atexit(`UE::Interchange::FInterchangeVolumeNodeStaticData::GetCustomGridDependeciesBaseKey'::
             __l2::_dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

