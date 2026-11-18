// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~TStringConversion<TStringConvert<char,wchar_t>,128> @ 142669e90

void __thiscall
TStringConversion<TStringConvert<char,wchar_t>,128>::
~TStringConversion<TStringConvert<char,wchar_t>,128>
          (TStringConversion<TStringConvert<char,wchar_t>,128> *this)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

