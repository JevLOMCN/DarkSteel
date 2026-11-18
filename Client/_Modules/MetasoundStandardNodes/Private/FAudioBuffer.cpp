// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// GetData @ 14b0d60a0

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall Metasound::FAudioBuffer::GetData(FAudioBuffer *this)

{
  if ((1 < (byte)LogMetaSound._0_1_) && (this->InitialNum != (this->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return (float *)(this->Buffer).AllocatorInstance.Data;
  }
  return (float *)(this->Buffer).AllocatorInstance.Data;
}

// GetData @ 14b0d60f0

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall Metasound::FAudioBuffer::GetData(FAudioBuffer *this)

{
  if ((1 < (byte)LogMetaSound._0_1_) && (this->InitialNum != (this->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return (float *)(this->Buffer).AllocatorInstance.Data;
  }
  return (float *)(this->Buffer).AllocatorInstance.Data;
}

