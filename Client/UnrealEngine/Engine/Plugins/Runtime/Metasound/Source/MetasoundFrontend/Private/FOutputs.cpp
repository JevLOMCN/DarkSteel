// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// GetValue @ 14adc3860

FAnalyzerOutput * __cdecl Metasound::Frontend::FVertexAnalyzerAudioBuffer::FOutputs::GetValue(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Value.Name,"AudioBuffer");
      pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
      ::Value.DataType = *pFVar1;
      _Init_thread_footer(&::_TSS0);
      return &::Value;
    }
  }
  return &::Value;
}

// GetValue @ 14adc38f0

FAnalyzerOutput * __cdecl
Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FOutputs::GetValue(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Value.Name,"EnvelopeValue");
      pFVar1 = GetMetasoundDataTypeName<float>();
      ::Value.DataType = *pFVar1;
      _Init_thread_footer(&::_TSS0);
      return &::Value;
    }
  }
  return &::Value;
}

// GetValue @ 14adc3980

FAnalyzerOutput * __cdecl
Metasound::Frontend::FVertexAnalyzerTriggerDensity::FOutputs::GetValue(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Value.Name,"TriggerDensity");
      pFVar1 = GetMetasoundDataTypeName<float>();
      ::Value.DataType = *pFVar1;
      _Init_thread_footer(&::_TSS0);
      return &::Value;
    }
  }
  return &::Value;
}

// GetValue @ 14adc3a10

FAnalyzerOutput * __cdecl
Metasound::Frontend::FVertexAnalyzerTriggerToTime::FOutputs::GetValue(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Value.Name,"LastTriggerTime");
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
      ::Value.DataType = *pFVar1;
      _Init_thread_footer(&::_TSS0);
      return &::Value;
    }
  }
  return &::Value;
}

