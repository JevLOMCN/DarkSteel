// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 3

// GetAssemblyPartDependencyBaseKey @ 14e54fa60

FAttributeKey * __cdecl
UE::Interchange::FMeshFactoryNodeStaticData::GetAssemblyPartDependencyBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&SlotMaterialDependency_BaseKey.Key,L"__AssemblyPartDependency__");
      atexit(`UE::Interchange::FMeshFactoryNodeStaticData::GetAssemblyPartDependencyBaseKey'::__l2::
             _dynamic_atexit_destructor_for__SlotMaterialDependency_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &SlotMaterialDependency_BaseKey;
    }
  }
  return &SlotMaterialDependency_BaseKey;
}

// GetLodDependenciesBaseKey @ 14e558310

FAttributeKey * __cdecl UE::Interchange::FMeshFactoryNodeStaticData::GetLodDependenciesBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&LodDependencies_BaseKey.Key,L"Lod_Dependencies");
      atexit(`UE::Interchange::FMeshFactoryNodeStaticData::GetLodDependenciesBaseKey'::__l2::
             _dynamic_atexit_destructor_for__LodDependencies_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &LodDependencies_BaseKey;
    }
  }
  return &LodDependencies_BaseKey;
}

// GetSlotMaterialDependencyBaseKey @ 14e55ce50

FAttributeKey * __cdecl
UE::Interchange::FMeshFactoryNodeStaticData::GetSlotMaterialDependencyBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&SlotMaterialDependency_BaseKey.Key,L"__SlotMaterialDependency__");
      atexit(`UE::Interchange::FMeshFactoryNodeStaticData::GetSlotMaterialDependencyBaseKey'::__l2::
             _dynamic_atexit_destructor_for__SlotMaterialDependency_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &SlotMaterialDependency_BaseKey;
    }
  }
  return &SlotMaterialDependency_BaseKey;
}

