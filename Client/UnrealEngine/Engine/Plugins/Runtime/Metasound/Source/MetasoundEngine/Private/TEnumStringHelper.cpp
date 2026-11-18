// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// GetAllEntries @ 14b3ac1f0

TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode>_const_,int> *
__cdecl Metasound::TEnumStringHelper<enum_WaveTable::FWaveTableSampler::EInterpolationMode>::
        GetAllEntries(TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode>_const_,int>
                      *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"WaveTable::FWaveTableSampler::EInterpolationMode::None");
      ::Entries[1].Value = Linear;
      ::FName::FName(&::Entries[1].Name,L"WaveTable::FWaveTableSampler::EInterpolationMode::Linear")
      ;
      ::Entries[2].Value = Cubic;
      ::FName::FName(&::Entries[2].Name,L"WaveTable::FWaveTableSampler::EInterpolationMode::Cubic");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 3;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b3ac2b0

TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode>_const_,int> *
__cdecl Metasound::TEnumStringHelper<enum_WaveTable::FWaveTableSampler::ESingleSampleMode>::
        GetAllEntries(TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode>_const_,int>
                      *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"WaveTable::FWaveTableSampler::ESingleSampleMode::Loop");
      ::Entries[1].Value = Hold;
      ::FName::FName(&::Entries[1].Name,L"WaveTable::FWaveTableSampler::ESingleSampleMode::Hold");
      ::Entries[2].Value = Unit;
      ::FName::FName(&::Entries[2].Name,L"WaveTable::FWaveTableSampler::ESingleSampleMode::Unit");
      ::Entries[3].Value = Zero;
      ::FName::FName(&::Entries[3].Name,L"WaveTable::FWaveTableSampler::ESingleSampleMode::Zero");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 4;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

