// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 8

// GetAnimatedAttributeCurveNamesKey @ 14e54f650

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedAttributeCurveNamesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__AnimatedAttributeCurveNames__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedAttributeCurveNamesKey'::__l2
             ::_dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetAnimatedAttributeStepCurveNamesKey @ 14e54f740

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedAttributeStepCurveNamesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__AnimatedAttributeStepCurveNames__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedAttributeStepCurveNamesKey'::
             __l2::_dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetAnimatedMaterialCurveSuffixesKey @ 14e54f830

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedMaterialCurveSuffixesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__AnimatedMaterialCurveSuffixes__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedMaterialCurveSuffixesKey'::
             __l2::_dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetAnimatedMorphTargetDependenciesKey @ 14e54f8c0

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedMorphTargetDependenciesKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__AnimatedMeshMorphTargetDependencies__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedMorphTargetDependenciesKey'::
             __l2::_dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetMorphTargetNodePayloadKeyTypeMapKey @ 14e5589c0

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetMorphTargetNodePayloadKeyTypeMapKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__MorphTargetNodePayloadKeyTypeMap__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetMorphTargetNodePayloadKeyTypeMapKey'
             ::__l2::_dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetMorphTargetNodePayloadKeyUidMapKey @ 14e558a50

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetMorphTargetNodePayloadKeyUidMapKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__MorphTargetNodePayloadKeyUidMap__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetMorphTargetNodePayloadKeyUidMapKey'::
             __l2::_dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetSceneNodeAnimationPayloadKeyTypeMapKey @ 14e55c2b0

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetSceneNodeAnimationPayloadKeyTypeMapKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__SceneNodeAnimationPayloadKeyTypeMap__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::
             GetSceneNodeAnimationPayloadKeyTypeMapKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// GetSceneNodeAnimationPayloadKeyUidMapKey @ 14e55c340

FAttributeKey * __cdecl
UE::Interchange::FAnimSequenceNodeStaticData::GetSceneNodeAnimationPayloadKeyUidMapKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__SceneNodeAnimationPayloadKeyUidMap__");
      atexit(`UE::Interchange::FAnimSequenceNodeStaticData::
             GetSceneNodeAnimationPayloadKeyUidMapKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

