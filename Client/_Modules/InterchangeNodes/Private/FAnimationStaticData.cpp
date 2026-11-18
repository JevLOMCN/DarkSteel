// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 4

// AnimationPayLoadTypeKey @ 14e48dea0

FAttributeKey * __cdecl UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__AnimationPayloadTypeKey__");
      atexit(`UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// AnimationPayLoadUidKey @ 14e48df30

FAttributeKey * __cdecl UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__AnimationPayloadUidKey__");
      atexit(`UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// MorphTargetAnimationPayLoadTypeKey @ 14e49d670

FAttributeKey * __cdecl
UE::Interchange::FAnimationStaticData::MorphTargetAnimationPayLoadTypeKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__MorphTargetAnimationPayloadTypeKey__");
      atexit(`UE::Interchange::FAnimationStaticData::MorphTargetAnimationPayLoadTypeKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// MorphTargetAnimationPayLoadUidKey @ 14e49d700

FAttributeKey * __cdecl
UE::Interchange::FAnimationStaticData::MorphTargetAnimationPayLoadUidKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__MorphTargetAnimationPayloadUidKey__");
      atexit(`UE::Interchange::FAnimationStaticData::MorphTargetAnimationPayLoadUidKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

