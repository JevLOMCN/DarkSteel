// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 5

// GetBoxCollisionMeshUidsBaseKey @ 14e54ff50

FAttributeKey * __cdecl
UE::Interchange::FStaticMeshNodeLodDataStaticData::GetBoxCollisionMeshUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__BoxCollisionMeshUids__Key");
      atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetBoxCollisionMeshUidsBaseKey'::
             __l2::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &CollisionMeshUids_BaseKey;
    }
  }
  return &CollisionMeshUids_BaseKey;
}

// GetCapsuleCollisionMeshUidsBaseKey @ 14e5500d0

FAttributeKey * __cdecl
UE::Interchange::FStaticMeshNodeLodDataStaticData::GetCapsuleCollisionMeshUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__CapsuleCollisionMeshUids__Key");
      atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetCapsuleCollisionMeshUidsBaseKey'
             ::__l2::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &CollisionMeshUids_BaseKey;
    }
  }
  return &CollisionMeshUids_BaseKey;
}

// GetConvexCollisionMeshUidsBaseKey @ 14e550550

FAttributeKey * __cdecl
UE::Interchange::FStaticMeshNodeLodDataStaticData::GetConvexCollisionMeshUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__ConvexCollisionMeshUids__Key");
      atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetConvexCollisionMeshUidsBaseKey'
             ::__l2::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &CollisionMeshUids_BaseKey;
    }
  }
  return &CollisionMeshUids_BaseKey;
}

// GetMeshUidsBaseKey @ 14e558520

FAttributeKey * __cdecl UE::Interchange::FStaticMeshNodeLodDataStaticData::GetMeshUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&MeshUids_BaseKey.Key,L"__MeshUids__Key");
      atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetMeshUidsBaseKey'::__l2::
             _dynamic_atexit_destructor_for__MeshUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &MeshUids_BaseKey;
    }
  }
  return &MeshUids_BaseKey;
}

// GetSphereCollisionMeshUidsBaseKey @ 14e55d270

FAttributeKey * __cdecl
UE::Interchange::FStaticMeshNodeLodDataStaticData::GetSphereCollisionMeshUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__SphereCollisionMeshUids__Key");
      atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetSphereCollisionMeshUidsBaseKey'
             ::__l2::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &CollisionMeshUids_BaseKey;
    }
  }
  return &CollisionMeshUids_BaseKey;
}

