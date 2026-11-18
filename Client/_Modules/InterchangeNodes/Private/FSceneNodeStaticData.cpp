// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 12

// GetComponentUidsKey @ 14e4902b0

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetComponentUidsKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ComponentsUidsKey,L"__ComponentUids__Key");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetComponentUidsKey'::__l2::
             _dynamic_atexit_destructor_for__ComponentsUidsKey__);
      _Init_thread_footer(&::_TSS0);
      return &ComponentsUidsKey;
    }
  }
  return &ComponentsUidsKey;
}

// GetCurveAnimationTypesKey @ 14e490340

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetCurveAnimationTypesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&CurveAnimationTypesKey,L"__CurveAnimationTypes__Key");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetCurveAnimationTypesKey'::__l2::
             _dynamic_atexit_destructor_for__CurveAnimationTypesKey__);
      _Init_thread_footer(&::_TSS0);
      return &CurveAnimationTypesKey;
    }
  }
  return &CurveAnimationTypesKey;
}

// GetJointSpecializeTypeString @ 14e4960a0

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&JointSpecializeTypeString,L"Joint");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString'::__l2::
             _dynamic_atexit_destructor_for__JointSpecializeTypeString__);
      _Init_thread_footer(&::_TSS0);
      return &JointSpecializeTypeString;
    }
  }
  return &JointSpecializeTypeString;
}

// GetLayerNamesKey @ 14e4966d0

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetLayerNamesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&LayerNamesKey,L"__LayerNames__Key");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetLayerNamesKey'::__l2::
             _dynamic_atexit_destructor_for__LayerNamesKey__);
      _Init_thread_footer(&::_TSS0);
      return &LayerNamesKey;
    }
  }
  return &LayerNamesKey;
}

// GetLodGroupSpecializeTypeString @ 14e496760

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&LodGroupSpecializeTypeString,L"LodGroup");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString'::__l2::
             _dynamic_atexit_destructor_for__LodGroupSpecializeTypeString__);
      _Init_thread_footer(&::_TSS0);
      return &LodGroupSpecializeTypeString;
    }
  }
  return &LodGroupSpecializeTypeString;
}

// GetMaterialDependencyUidsBaseKey @ 14e4967f0

FAttributeKey * __cdecl
UE::Interchange::FSceneNodeStaticData::GetMaterialDependencyUidsBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&MaterialDependencyUids_BaseKey.Key,L"__MaterialDependencyUidsBaseKey__")
      ;
      atexit(`UE::Interchange::FSceneNodeStaticData::GetMaterialDependencyUidsBaseKey'::__l2::
             _dynamic_atexit_destructor_for__MaterialDependencyUids_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &MaterialDependencyUids_BaseKey;
    }
  }
  return &MaterialDependencyUids_BaseKey;
}

// GetMeshToGlobalBindPoseReferencesString @ 14e496890

FString * __cdecl
UE::Interchange::FSceneNodeStaticData::GetMeshToGlobalBindPoseReferencesString(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&MeshToGlobalBindPoseReferncesString,L"__MeshToGlobalBindPoseReferences__")
      ;
      atexit(`UE::Interchange::FSceneNodeStaticData::GetMeshToGlobalBindPoseReferencesString'::__l2
             ::_dynamic_atexit_destructor_for__MeshToGlobalBindPoseReferncesString__);
      _Init_thread_footer(&::_TSS0);
      return &MeshToGlobalBindPoseReferncesString;
    }
  }
  return &MeshToGlobalBindPoseReferncesString;
}

// GetMorphTargetCurveWeightsKey @ 14e4969a0

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetMorphTargetCurveWeightsKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&MorphTargetCurvesKey,L"__MorphTargetCurveWeights__Key");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetMorphTargetCurveWeightsKey'::__l2::
             _dynamic_atexit_destructor_for__MorphTargetCurvesKey__);
      _Init_thread_footer(&::_TSS0);
      return &MorphTargetCurvesKey;
    }
  }
  return &MorphTargetCurvesKey;
}

// GetNodeSpecializeTypeBaseKey @ 14e496cf0

FAttributeKey * __cdecl UE::Interchange::FSceneNodeStaticData::GetNodeSpecializeTypeBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&SceneNodeSpecializeType_BaseKey.Key,L"SceneNodeSpecializeType");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetNodeSpecializeTypeBaseKey'::__l2::
             _dynamic_atexit_destructor_for__SceneNodeSpecializeType_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &SceneNodeSpecializeType_BaseKey;
    }
  }
  return &SceneNodeSpecializeType_BaseKey;
}

// GetSlotMaterialDependenciesString @ 14e49a260

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetSlotMaterialDependenciesString(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&SlotMaterialDependenciesString,L"__SlotMaterialDependencies__");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetSlotMaterialDependenciesString'::__l2::
             _dynamic_atexit_destructor_for__SlotMaterialDependenciesString__);
      _Init_thread_footer(&::_TSS0);
      return &SlotMaterialDependenciesString;
    }
  }
  return &SlotMaterialDependenciesString;
}

// GetTagsKey @ 14e49a400

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetTagsKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&TagsKey,L"__Tags__Key");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetTagsKey'::__l2::
             _dynamic_atexit_destructor_for__TagsKey__);
      _Init_thread_footer(&::_TSS0);
      return &TagsKey;
    }
  }
  return &TagsKey;
}

// GetTransformSpecializeTypeString @ 14e49a4e0

FString * __cdecl UE::Interchange::FSceneNodeStaticData::GetTransformSpecializeTypeString(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&TransformSpecializeTypeString,L"Transform");
      atexit(`UE::Interchange::FSceneNodeStaticData::GetTransformSpecializeTypeString'::__l2::
             _dynamic_atexit_destructor_for__TransformSpecializeTypeString__);
      _Init_thread_footer(&::_TSS0);
      return &TransformSpecializeTypeString;
    }
  }
  return &TransformSpecializeTypeString;
}

