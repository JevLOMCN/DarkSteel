// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 78

// GetDataTypeName @ 14b2c4db0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeName(TDataReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                  *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2c4dc0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeId(TDataReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14b2c4dd0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetRaw(TDataReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2c8270

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FWaveAsset>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FWaveAsset>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveAsset>_>::TypeName)
      ;
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2c82a0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FWaveAsset>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FWaveAsset>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveAsset>_>::TypePtr;
}

// GetRaw @ 14b2c82b0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FWaveAsset>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FWaveAsset>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2c8ab0

FName * __thiscall
Metasound::TDataReference<Metasound::FWaveTableBankAsset>::GetDataTypeName
          (TDataReference<Metasound::FWaveTableBankAsset> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::FWaveTableBankAsset>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2c8ac0

void * __thiscall
Metasound::TDataReference<Metasound::FWaveTableBankAsset>::GetDataTypeId
          (TDataReference<Metasound::FWaveTableBankAsset> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FWaveTableBankAsset>::TypePtr;
}

// GetRaw @ 14b2c8ad0

void * __thiscall
Metasound::TDataReference<Metasound::FWaveTableBankAsset>::GetRaw
          (TDataReference<Metasound::FWaveTableBankAsset> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2ca3b0

FName * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2ca3c0

void * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          ::TypePtr;
}

// GetRaw @ 14b2ca3d0

void * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b2cbcc0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2cbd10

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::TypePtr;
}

// GetRaw @ 14b2cbd80

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2ce4d0

FName * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetDataTypeName(TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2ce4e0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetDataTypeId
          (TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
          TypePtr;
}

// GetRaw @ 14b2ce4f0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2d3c80

FName * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetDataTypeName(TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2d3c90

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetDataTypeId(TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *this)

{
  return &TDataReferenceTypeInfo<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          ::TypePtr;
}

// GetRaw @ 14b2d3ca0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetRaw(TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2d69c0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2d69d0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBusAsset>_>::TypePtr;
}

// GetRaw @ 14b2d6b90

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2d7390

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2d73a0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b2d73b0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b2d9340

FName * __thiscall
Metasound::TDataReference<Metasound::FAudioBusAsset>::GetDataTypeName
          (TDataReference<Metasound::FAudioBusAsset> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FAudioBusAsset>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2d9350

void * __thiscall
Metasound::TDataReference<Metasound::FAudioBusAsset>::GetDataTypeId
          (TDataReference<Metasound::FAudioBusAsset> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FAudioBusAsset>::TypePtr;
}

// GetRaw @ 14b2d9360

void * __thiscall
Metasound::TDataReference<Metasound::FAudioBusAsset>::GetRaw
          (TDataReference<Metasound::FAudioBusAsset> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2dbb20

FName * __thiscall
Metasound::TDataReference<Metasound::FWaveAsset>::GetDataTypeName
          (TDataReference<Metasound::FWaveAsset> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FWaveAsset>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2dbb30

void * __thiscall
Metasound::TDataReference<Metasound::FWaveAsset>::GetDataTypeId
          (TDataReference<Metasound::FWaveAsset> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FWaveAsset>::TypePtr;
}

// GetRaw @ 14b2dbb40

void * __thiscall
Metasound::TDataReference<Metasound::FWaveAsset>::GetRaw
          (TDataReference<Metasound::FWaveAsset> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2de830

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeName(TDataReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2de840

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeId(TDataReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
              *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14b2de850

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>::
GetRaw(TDataReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
       *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2df5b0

FName * __thiscall
Metasound::TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetDataTypeName(TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this
               )

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2df5c0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetDataTypeId(TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
          TypePtr;
}

// GetRaw @ 14b2df5d0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2ed600

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2ed610

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          ::TypePtr;
}

// GetRaw @ 14b2ed620

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b2f3220

FName * __thiscall
Metasound::TDataReference<WaveTable::FWaveTable>::GetDataTypeName
          (TDataReference<WaveTable::FWaveTable> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<WaveTable::FWaveTable>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2f3230

void * __thiscall
Metasound::TDataReference<WaveTable::FWaveTable>::GetDataTypeId
          (TDataReference<WaveTable::FWaveTable> *this)

{
  return &TDataReferenceTypeInfo<WaveTable::FWaveTable>::TypePtr;
}

// GetRaw @ 14b2f3240

void * __thiscall
Metasound::TDataReference<WaveTable::FWaveTable>::GetRaw
          (TDataReference<WaveTable::FWaveTable> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2f6330

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2f6340

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          ::TypePtr;
}

// GetRaw @ 14b2f63d0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b2fa580

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<WaveTable::FWaveTable>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<WaveTable::FWaveTable>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<WaveTable::FWaveTable>_>::TypeName)
      ;
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2fa6c0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<WaveTable::FWaveTable>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<WaveTable::FWaveTable>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<WaveTable::FWaveTable>_>::TypePtr;
}

// GetRaw @ 14b2fa6d0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<WaveTable::FWaveTable>_>::GetRaw
          (TDataReference<Metasound::TVariable<WaveTable::FWaveTable>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14b2fd790

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeName(TDataReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                  *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b2fd7a0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeId(TDataReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14b2fd7b0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetRaw(TDataReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  return (this->ObjectReference).Object;
}

// TDataReference<WaveTable::FWaveTable><> @ 14b301210

TDataReference<WaveTable::FWaveTable> * __thiscall
Metasound::TDataReference<WaveTable::FWaveTable>::TDataReference<WaveTable::FWaveTable><>
          (TDataReference<WaveTable::FWaveTable> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<WaveTable::FWaveTable> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FWaveTable *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFWaveTable_WaveTable___0A__SharedPointerInternals__6B_
    ;
    pTVar3[2]._padding_ = 0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (FWaveTable *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((FWaveTable *)(pTVar3 + 1) == (FWaveTable *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<WaveTable::FWaveTable> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><> @ 14b3012c0

TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><> @ 14b301370

TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><> @ 14b301420

TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this
          ,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><> @ 14b3014d0

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(puVar3 + 2,Linear);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><> @ 14b301590

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(puVar3 + 2,Zero);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FAudioBusAsset><> @ 14b301650

TDataReference<Metasound::FAudioBusAsset> * __thiscall
Metasound::TDataReference<Metasound::FAudioBusAsset>::TDataReference<Metasound::FAudioBusAsset><>
          (TDataReference<Metasound::FAudioBusAsset> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FAudioBusAsset> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAudioBusAsset *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBusAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = 1;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (FAudioBusAsset *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FWaveAsset><> @ 14b301700

TDataReference<Metasound::FWaveAsset> * __thiscall
Metasound::TDataReference<Metasound::FWaveAsset>::TDataReference<Metasound::FWaveAsset><>
          (TDataReference<Metasound::FWaveAsset> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FWaveAsset> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FWaveAsset *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = 1;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (FWaveAsset *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FWaveAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FWaveTableBankAsset><> @ 14b3017b0

TDataReference<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TDataReference<Metasound::FWaveTableBankAsset>::
TDataReference<Metasound::FWaveTableBankAsset><>
          (TDataReference<Metasound::FWaveTableBankAsset> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FWaveTableBankAsset> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FWaveTableBankAsset *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveTableBankAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    pTVar3->WeakReferenceCount = 1;
    (this->ObjectReference).Object = (FWaveTableBankAsset *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int_const_&> @ 14b3030e0

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int_const_&> @ 14b3031b0

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><float_const_&> @ 14b303280

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><float_const_&> @ 14b303350

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<WaveTable::FWaveTable><TArray<float,TSizedDefaultAllocator<32>_>_const_&> @ 14b303420

TDataReference<WaveTable::FWaveTable> * __thiscall
Metasound::TDataReference<WaveTable::FWaveTable>::
TDataReference<WaveTable::FWaveTable><TArray<float,TSizedDefaultAllocator<32>_>_const_&>
          (TDataReference<WaveTable::FWaveTable> *this,EDataRefShouldConstruct param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<WaveTable::FWaveTable> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FWaveTable *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFWaveTable_WaveTable___0A__SharedPointerInternals__6B_
    ;
    WaveTable::FWaveTable::FWaveTable((FWaveTable *)(pTVar3 + 1),param_2,0.0);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FWaveTable *)(pTVar3 + 1);
    if ((FWaveTable *)(pTVar3 + 1) == (FWaveTable *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<WaveTable::FWaveTable> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FAudioBusAsset><TSharedPtr<Audio::IProxyData,1>_const_&> @ 14b3034f0

TDataReference<Metasound::FAudioBusAsset> * __thiscall
Metasound::TDataReference<Metasound::FAudioBusAsset>::
TDataReference<Metasound::FAudioBusAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
          (TDataReference<Metasound::FAudioBusAsset> *this,EDataRefShouldConstruct param_1,
          TSharedPtr<Audio::IProxyData,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FAudioBusAsset> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAudioBusAsset *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBusAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    FAudioBusAsset::FAudioBusAsset((FAudioBusAsset *)(pTVar3 + 1),param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FAudioBusAsset *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FWaveAsset><TSharedPtr<Audio::IProxyData,1>_const_&> @ 14b3035c0

TDataReference<Metasound::FWaveAsset> * __thiscall
Metasound::TDataReference<Metasound::FWaveAsset>::
TDataReference<Metasound::FWaveAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
          (TDataReference<Metasound::FWaveAsset> *this,EDataRefShouldConstruct param_1,
          TSharedPtr<Audio::IProxyData,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FWaveAsset> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FWaveAsset *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    FWaveAsset::FWaveAsset((FWaveAsset *)(pTVar3 + 1),param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FWaveAsset *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FWaveAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FWaveTableBankAsset><TSharedPtr<Audio::IProxyData,1>_const_&> @ 14b303690

TDataReference<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TDataReference<Metasound::FWaveTableBankAsset>::
TDataReference<Metasound::FWaveTableBankAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
          (TDataReference<Metasound::FWaveTableBankAsset> *this,EDataRefShouldConstruct param_1,
          TSharedPtr<Audio::IProxyData,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FWaveTableBankAsset> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FWaveTableBankAsset *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveTableBankAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    FWaveTableBankAsset::FWaveTableBankAsset((FWaveTableBankAsset *)(pTVar3 + 1),param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FWaveTableBankAsset *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><FString_const_&> @ 14b303760

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><FString_const_&> @ 14b303850

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><bool_const_&> @ 14b303940

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><bool_const_&> @ 14b303a10

TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::
TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b303e90

TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,
          TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b304090

TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,
          TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b304290

TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this
          ,EDataRefShouldConstruct param_1,
          TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

