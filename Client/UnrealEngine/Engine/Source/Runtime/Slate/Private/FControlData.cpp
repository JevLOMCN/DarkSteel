// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Reset @ 14298a130

void __thiscall SVirtualJoystick::FControlData::Reset(FControlData *this)

{
  double dVar1;
  
  dVar1 = (this->CorrectedCenter).field0_0x0._s_0.Y;
  (this->VisualCenter).field0_0x0._s_0.X = (this->CorrectedCenter).field0_0x0._s_0.X;
  (this->VisualCenter).field0_0x0._s_0.Y = dVar1;
  return;
}

