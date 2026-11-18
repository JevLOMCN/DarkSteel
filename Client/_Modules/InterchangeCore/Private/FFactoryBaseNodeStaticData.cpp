// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 5

// AttributesAppliedThroughDelegatesBaseKey @ 14e416980

FString * __cdecl
UE::Interchange::FFactoryBaseNodeStaticData::AttributesAppliedThroughDelegatesBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&AttributesAppliedThroughDelegates_BaseKey,
                         L"__AttributeAppliedThroughDelegate__");
      atexit(`UE::Interchange::FFactoryBaseNodeStaticData::AttributesAppliedThroughDelegatesBaseKey'
             ::__l2::_dynamic_atexit_destructor_for__AttributesAppliedThroughDelegates_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &AttributesAppliedThroughDelegates_BaseKey;
    }
  }
  return &AttributesAppliedThroughDelegates_BaseKey;
}

// FactoryDependenciesBaseKey @ 14e435340

FString * __cdecl UE::Interchange::FFactoryBaseNodeStaticData::FactoryDependenciesBaseKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&BaseNodeFactoryDependencies_BaseKey,L"__BaseNodeFactoryDependencies__");
      atexit(`UE::Interchange::FFactoryBaseNodeStaticData::FactoryDependenciesBaseKey'::__l2::
             _dynamic_atexit_destructor_for__BaseNodeFactoryDependencies_BaseKey__);
      _Init_thread_footer(&::_TSS0);
      return &BaseNodeFactoryDependencies_BaseKey;
    }
  }
  return &BaseNodeFactoryDependencies_BaseKey;
}

// ForceNodeReimportKey @ 14e436310

FAttributeKey * __cdecl UE::Interchange::FFactoryBaseNodeStaticData::ForceNodeReimportKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__Internal_Task_Force_Node_Reimport__");
      atexit(`UE::Interchange::FFactoryBaseNodeStaticData::ForceNodeReimportKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// ReimportStrategyFlagsKey @ 14e451b10

FAttributeKey * __cdecl UE::Interchange::FFactoryBaseNodeStaticData::ReimportStrategyFlagsKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__Reimport_Strategy_Flags_Key__");
      atexit(`UE::Interchange::FFactoryBaseNodeStaticData::ReimportStrategyFlagsKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

// SkipNodeImportKey @ 14e45fde0

FAttributeKey * __cdecl UE::Interchange::FFactoryBaseNodeStaticData::SkipNodeImportKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::operator=(&::AttributeKey.Key,L"__Internal_Task_Skip_Node__");
      atexit(`UE::Interchange::FFactoryBaseNodeStaticData::SkipNodeImportKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
      return &::AttributeKey;
    }
  }
  return &::AttributeKey;
}

