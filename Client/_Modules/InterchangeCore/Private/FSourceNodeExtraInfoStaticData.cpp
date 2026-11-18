// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 3

// GetApplicationNameExtraInfoKey @ 14e438660

FString * __cdecl
UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationNameExtraInfoKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ApplicationNameExtraInfoKey,L"Application Name");
      atexit(`UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationNameExtraInfoKey'::__l2
             ::_dynamic_atexit_destructor_for__ApplicationNameExtraInfoKey__);
      _Init_thread_footer(&::_TSS0);
      return &ApplicationNameExtraInfoKey;
    }
  }
  return &ApplicationNameExtraInfoKey;
}

// GetApplicationVendorExtraInfoKey @ 14e4386f0

FString * __cdecl
UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationVendorExtraInfoKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ApplicationVendorExtraInfoKey,L"Application Vendor");
      atexit(`UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationVendorExtraInfoKey'::
             __l2::_dynamic_atexit_destructor_for__ApplicationVendorExtraInfoKey__);
      _Init_thread_footer(&::_TSS0);
      return &ApplicationVendorExtraInfoKey;
    }
  }
  return &ApplicationVendorExtraInfoKey;
}

// GetApplicationVersionExtraInfoKey @ 14e438780

FString * __cdecl
UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationVersionExtraInfoKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ApplicationVersionExtraInfoKey,L"Application Version");
      atexit(`UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationVersionExtraInfoKey'::
             __l2::_dynamic_atexit_destructor_for__ApplicationVersionExtraInfoKey__);
      _Init_thread_footer(&::_TSS0);
      return &ApplicationVersionExtraInfoKey;
    }
  }
  return &ApplicationVersionExtraInfoKey;
}

