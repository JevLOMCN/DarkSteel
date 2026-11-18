// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// TStringBuilderWithBuffer<wchar_t,4096> @ 1421fdb90

TStringBuilderWithBuffer<wchar_t,4096> * __thiscall
TStringBuilderWithBuffer<wchar_t,4096>::TStringBuilderWithBuffer<wchar_t,4096>
          (TStringBuilderWithBuffer<wchar_t,4096> *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)this->StringBuffer;
  this->_padding_ = (longlong)this->StringBuffer;
  this->_padding_ = (longlong)(this + 1);
  return this;
}

// ~TStringBuilderWithBuffer<wchar_t,4096> @ 142200b20

void __thiscall
TStringBuilderWithBuffer<wchar_t,4096>::~TStringBuilderWithBuffer<wchar_t,4096>
          (TStringBuilderWithBuffer<wchar_t,4096> *this)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>((TStringBuilderBase<wchar_t> *)this);
  return;
}

