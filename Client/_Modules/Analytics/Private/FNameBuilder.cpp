// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 1

// FNameBuilder @ 143133560

FNameBuilder * __thiscall FNameBuilder::FNameBuilder(FNameBuilder *this,FName param_1)

{
  FName local_res10 [3];
  
  *(undefined2 *)&this->field_0x18 = 0;
  *(undefined1 **)this = &this->field_0x20;
  *(undefined1 **)&this->field_0x8 = &this->field_0x20;
  *(undefined1 **)&this->field_0x10 = &this->field_0x836;
  local_res10[0] = param_1;
  ::FName::AppendString(local_res10,(TStringBuilderBase<wchar_t> *)this);
  return this;
}

