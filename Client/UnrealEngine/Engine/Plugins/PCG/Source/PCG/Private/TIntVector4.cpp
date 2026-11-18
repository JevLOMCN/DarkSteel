// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator*= @ 1497e7ab0

TIntVector4<int> * __thiscall
UE::Math::TIntVector4<int>::operator*=(TIntVector4<int> *this,int param_1)

{
  longlong lVar1;
  TIntVector4<int>_u_0 TVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  auVar3._4_4_ = param_1;
  auVar3._0_4_ = param_1;
  auVar3._8_4_ = param_1;
  auVar3._12_4_ = param_1;
  if (1 < __isa_available) {
    TVar2._s_0 = (TIntVector4<int>_u_0_s_0)pmulld(this->field0_0x0,auVar3);
    this->field0_0x0 = TVar2;
    return this;
  }
  do {
    (this->field0_0x0).XYZW[lVar1] = param_1 * (this->field0_0x0).XYZW[lVar1];
    lVar1 = lVar1 + 1;
  } while (lVar1 < 4);
  return this;
}

