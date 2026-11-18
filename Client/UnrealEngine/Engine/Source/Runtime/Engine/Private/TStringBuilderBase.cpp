// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AppendChar<wchar_t,0> @ 1480793b0

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::AppendChar<wchar_t,0>
          (TStringBuilderBase<wchar_t> *this,wchar_t param_1)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = param_1;
  this->CurPos = this->CurPos + 1;
  return this;
}

