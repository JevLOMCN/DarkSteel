// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator!= @ 14547ca70

bool __thiscall
RenderingSpatialHash::TLocation<__int64>::operator!=
          (TLocation<__int64> *this,TLocation<__int64> *param_1)

{
  if ((((this->Level == param_1->Level) &&
       ((this->Coord).field0_0x0._s_0.X == (param_1->Coord).field0_0x0._s_0.X)) &&
      ((this->Coord).field0_0x0._s_0.Y == (param_1->Coord).field0_0x0._s_0.Y)) &&
     ((this->Coord).field0_0x0._s_0.Z == (param_1->Coord).field0_0x0._s_0.Z)) {
    return false;
  }
  return true;
}

