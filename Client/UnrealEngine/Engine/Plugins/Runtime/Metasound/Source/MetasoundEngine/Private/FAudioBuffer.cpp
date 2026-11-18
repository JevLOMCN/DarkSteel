// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// Num @ 14b3c9860

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Metasound::FAudioBuffer::Num(FAudioBuffer *this)

{
  int iVar1;
  
  iVar1 = (this->Buffer).ArrayNum;
  if ((1 < (byte)LogMetaSound._0_1_) && (this->InitialNum != iVar1)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    iVar1 = (this->Buffer).ArrayNum;
  }
  return iVar1;
}

