// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 1

// ~TStringBuilderWithBuffer<wchar_t,1035> @ 143133930

void __thiscall
TStringBuilderWithBuffer<wchar_t,1035>::~TStringBuilderWithBuffer<wchar_t,1035>
          (TStringBuilderWithBuffer<wchar_t,1035> *this)

{
  if ((char)this->_padding_ != '\0') {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

