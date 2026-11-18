// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// FOrientedBox @ 14e4009e0

FOrientedBox * __thiscall FOrientedBox::FOrientedBox(FOrientedBox *this)

{
  (this->Center).field0_0x0._s_0.X = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  (this->AxisX).field0_0x0._s_0.Y = 0.0;
  (this->AxisX).field0_0x0._s_0.Z = 0.0;
  (this->AxisY).field0_0x0._s_0.X = 0.0;
  (this->AxisY).field0_0x0._s_0.Z = 0.0;
  (this->AxisZ).field0_0x0._s_0.X = 0.0;
  (this->AxisZ).field0_0x0._s_0.Y = 0.0;
  (this->AxisX).field0_0x0._s_0.X = 1.0;
  (this->AxisY).field0_0x0._s_0.Y = 1.0;
  (this->AxisZ).field0_0x0._s_0.Z = 1.0;
  this->ExtentX = 1.0;
  this->ExtentY = 1.0;
  this->ExtentZ = 1.0;
  return this;
}

