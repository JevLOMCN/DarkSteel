// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 10

// GetAssemblyPartDependenciesKey @ 14e4901d0

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::GetAssemblyPartDependenciesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&Dependencies_BaseKey.Key,L"__AssemblyPartDependencies__");
      atexit(`UE::Interchange::FMeshNodeStaticData::GetAssemblyPartDependenciesKey'::__l2::
             _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &Dependencies_BaseKey;
    }
  }
  return &Dependencies_BaseKey;
}

// GetMorphTargetDependenciesKey @ 14e496a70

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::GetMorphTargetDependenciesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&Dependencies_BaseKey.Key,L"__MeshMorphTargetDependencies__");
      atexit(`UE::Interchange::FMeshNodeStaticData::GetMorphTargetDependenciesKey'::__l2::
             _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &Dependencies_BaseKey;
    }
  }
  return &Dependencies_BaseKey;
}

// GetSceneInstancesUidsKey @ 14e499e90

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::GetSceneInstancesUidsKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&SceneInstanceUids_BaseKey.Key,L"__MeshSceneInstancesUids__");
      atexit(`UE::Interchange::FMeshNodeStaticData::GetSceneInstancesUidsKey'::__l2::
             _dynamic_atexit_destructor_for__SceneInstanceUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &SceneInstanceUids_BaseKey;
    }
  }
  return &SceneInstanceUids_BaseKey;
}

// GetSkeletonDependenciesKey @ 14e49a020

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::GetSkeletonDependenciesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&Dependencies_BaseKey.Key,L"__MeshSkeletonDependencies__");
      atexit(`UE::Interchange::FMeshNodeStaticData::GetSkeletonDependenciesKey'::__l2::
             _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &Dependencies_BaseKey;
    }
  }
  return &Dependencies_BaseKey;
}

// GetSlotMaterialDependenciesKey @ 14e49a1d0

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::GetSlotMaterialDependenciesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&Dependencies_BaseKey.Key,L"__SlotMaterialDependencies__");
      atexit(`UE::Interchange::FMeshNodeStaticData::GetSlotMaterialDependenciesKey'::__l2::
             _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &Dependencies_BaseKey;
    }
  }
  return &Dependencies_BaseKey;
}

// IsMorphTargetKey @ 14e49c480

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__IsMorphTargetKey__");
      atexit(`UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// IsSkinnedMeshKey @ 14e49c730

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__IsSkinnedMeshKey__");
      atexit(`UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// MorphTargetNameKey @ 14e49d790

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__MorphTargetNameKey__");
      atexit(`UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// PayLoadKey @ 14e49d820

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::PayLoadKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__PayloadKey__");
      atexit(`UE::Interchange::FMeshNodeStaticData::PayLoadKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// PayLoadTypeKey @ 14e49d8b0

FAttributeKey * __cdecl UE::Interchange::FMeshNodeStaticData::PayLoadTypeKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__PayloadTypeKey__");
      atexit(`UE::Interchange::FMeshNodeStaticData::PayLoadTypeKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

