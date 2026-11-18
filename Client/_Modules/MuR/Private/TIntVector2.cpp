// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// operator!= @ 14a9792d0

bool __thiscall
UE::Math::TIntVector2<unsigned_short>::operator!=
          (TIntVector2<unsigned_short> *this,TIntVector2<unsigned_short> *param_1)

{
  if (((this->field0_0x0)._s_0.X == (param_1->field0_0x0)._s_0.X) &&
     ((this->field0_0x0)._s_0.Y == (param_1->field0_0x0)._s_0.Y)) {
    return false;
  }
  return true;
}

