// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> @ 142669f60

void __thiscall
TUniquePtr<char_[0],TDefaultDelete<char_[0]>_>::~TUniquePtr<char_[0],TDefaultDelete<char_[0]>_>
          (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *this)

{
  operator_delete__(this->Ptr);
  return;
}

