// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// TIntRect<int> @ 14e400340

TIntRect<int> * __thiscall
UE::Math::TIntRect<int>::TIntRect<int>
          (TIntRect<int> *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)((longlong)&this->field0_0x0 + 0xc) = param_4;
  *(int *)&this->field0_0x0 = param_1;
  *(int *)((longlong)&this->field0_0x0 + 4) = param_2;
  *(int *)((longlong)&this->field0_0x0 + 8) = param_3;
  return this;
}

