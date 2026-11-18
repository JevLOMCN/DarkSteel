// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// GetAllEntries @ 14adbc0a0

TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ESharedStateBehaviorType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ESharedStateBehaviorType::SameNode");
      ::Entries[1].Value = SameNodeInComposition;
      ::FName::FName(&::Entries[1].Name,L"ESharedStateBehaviorType::SameNodeInComposition");
      ::Entries[2].Value = SameData;
      ::FName::FName(&::Entries[2].Name,L"ESharedStateBehaviorType::SameData");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 3;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

