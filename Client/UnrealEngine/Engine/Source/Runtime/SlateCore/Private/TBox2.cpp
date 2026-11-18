// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// operator== @ 14254eaf0

bool __thiscall UE::Math::TBox2<float>::operator==(TBox2<float> *this,TBox2<float> *param_1)

{
  if (((((param_1->Min).field0_0x0._s_0.X == (this->Min).field0_0x0._s_0.X) &&
       ((param_1->Min).field0_0x0._s_0.Y == (this->Min).field0_0x0._s_0.Y)) &&
      ((param_1->Max).field0_0x0._s_0.X == (this->Max).field0_0x0._s_0.X)) &&
     ((param_1->Max).field0_0x0._s_0.Y == (this->Max).field0_0x0._s_0.Y)) {
    return true;
  }
  return false;
}

