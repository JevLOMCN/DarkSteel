// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 48

// GetTypeDisplayText @ 14b3c0ed0

FText * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<WaveTable::FWaveTable>_>::GetTypeDisplayText
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTable_Variable",
                 L"WaveTable:Variable");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::TVariable<WaveTable::FWaveTable>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c0f70

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<WaveTable::FWaveTable,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTable_Array_Variable",
                 L"WaveTable:Array:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<TArray<WaveTable::FWaveTable,TSizedDefaultAllocator<32>_>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1010

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",
                 L"Enum:WaveTableInterpolation_Array_Variable",
                 L"Enum:WaveTableInterpolation:Array:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,TSizedDefaultAllocator<32>_>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c10b0

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",
                 L"Enum:WaveTableEnvelopeMode_Array_Variable",
                 L"Enum:WaveTableEnvelopeMode:Array:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,TSizedDefaultAllocator<32>_>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1150

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"AudioBusAsset_Array_Variable",
                 L"AudioBusAsset:Array:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c11f0

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveAsset_Array_Variable",
                 L"WaveAsset:Array:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1290

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTableBankAsset_Array_Variable",
                 L"WaveTableBankAsset:Array:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1330

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",
                 L"Enum:WaveTableInterpolation_Variable",L"Enum:WaveTableInterpolation:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c13d0

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",
                 L"Enum:WaveTableEnvelopeMode_Variable",L"Enum:WaveTableEnvelopeMode:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1470

FText * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"AudioBusAsset_Variable",
                 L"AudioBusAsset:Variable");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1510

FText * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveAsset>_>::GetTypeDisplayText
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveAsset_Variable",
                 L"WaveAsset:Variable");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveAsset>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c15b0

FText * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTableBankAsset_Variable",
                 L"WaveTableBankAsset:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1650

FText * __cdecl Metasound::TDataReferenceTypeInfo<WaveTable::FWaveTable>::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTable",L"WaveTable");
      atexit(`Metasound::TDataReferenceTypeInfo<WaveTable::FWaveTable>::GetTypeDisplayText'::__l2::
             _dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c16f0

FText * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<WaveTable::FWaveTable,TSizedDefaultAllocator<32>_>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTable_Array",L"WaveTable:Array"
                );
      atexit(`Metasound::
             TDataReferenceTypeInfo<TArray<WaveTable::FWaveTable,TSizedDefaultAllocator<32>_>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1790

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,TSizedDefaultAllocator<32>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:WaveTableInterpolation_Array",
                 L"Enum:WaveTableInterpolation:Array");
      atexit(`Metasound::
             TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,TSizedDefaultAllocator<32>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1830

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,TSizedDefaultAllocator<32>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:WaveTableEnvelopeMode_Array",
                 L"Enum:WaveTableEnvelopeMode:Array");
      atexit(`Metasound::
             TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,TSizedDefaultAllocator<32>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c18d0

FText * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"AudioBusAsset_Array",
                 L"AudioBusAsset:Array");
      atexit(`Metasound::
             TDataReferenceTypeInfo<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1970

FText * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveAsset_Array",L"WaveAsset:Array"
                );
      atexit(`Metasound::
             TDataReferenceTypeInfo<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1a10

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTableBankAsset_Array",
                 L"WaveTableBankAsset:Array");
      atexit(`Metasound::
             TDataReferenceTypeInfo<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1ab0

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:WaveTableInterpolation",
                 L"Enum:WaveTableInterpolation");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1b50

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:WaveTableEnvelopeMode",
                 L"Enum:WaveTableEnvelopeMode");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1bf0

FText * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::FAudioBusAsset>::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"AudioBusAsset",L"AudioBusAsset");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::FAudioBusAsset>::GetTypeDisplayText'::
             __l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1c90

FText * __cdecl Metasound::TDataReferenceTypeInfo<Metasound::FWaveAsset>::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveAsset",L"WaveAsset");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::FWaveAsset>::GetTypeDisplayText'::__l2::
             _dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14b3c1d30

FText * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::FWaveTableBankAsset>::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"WaveTableBankAsset",
                 L"WaveTableBankAsset");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::FWaveTableBankAsset>::GetTypeDisplayText'
             ::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeId @ 14b3c1dd0

void * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<WaveTable::FWaveTable>_>::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1de0

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<WaveTable::FWaveTable,TSizedDefaultAllocator<32>_>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1df0

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,TSizedDefaultAllocator<32>_>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e00

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,TSizedDefaultAllocator<32>_>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e10

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e20

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e30

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e40

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e50

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e60

void * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBusAsset>_>::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e70

void * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveAsset>_>::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e80

void * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::GetTypeId
          (void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1e90

void * __cdecl Metasound::TDataReferenceTypeInfo<WaveTable::FWaveTable>::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1ea0

void * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<WaveTable::FWaveTable,TSizedDefaultAllocator<32>_>_>::
GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1eb0

void * __cdecl
Metasound::
TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,TSizedDefaultAllocator<32>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1ec0

void * __cdecl
Metasound::
TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,TSizedDefaultAllocator<32>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1ed0

void * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1ee0

void * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1ef0

void * __cdecl
Metasound::
TDataReferenceTypeInfo<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1f00

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1f10

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1f20

void * __cdecl Metasound::TDataReferenceTypeInfo<Metasound::FAudioBusAsset>::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1f30

void * __cdecl Metasound::TDataReferenceTypeInfo<Metasound::FWaveAsset>::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14b3c1f40

void * __cdecl Metasound::TDataReferenceTypeInfo<Metasound::FWaveTableBankAsset>::GetTypeId(void)

{
  return &TypePtr;
}

