// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Execute @ 14d5a3660

void __thiscall
UE::Cameras::FDebugTextNewLineCommand::Execute
          (FDebugTextNewLineCommand *this,TVector2<float> *param_1)

{
  (param_1->field0_0x0)._s_0.X = this->LeftMargin;
  (param_1->field0_0x0)._s_0.Y = this->LineSpacing + (param_1->field0_0x0)._s_0.Y;
  return;
}

