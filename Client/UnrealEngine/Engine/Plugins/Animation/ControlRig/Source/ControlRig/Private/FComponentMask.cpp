// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Contains @ 14a3f5650

bool __thiscall
UE::MovieScene::FComponentMask::Contains(FComponentMask *this,FComponentTypeID param_1)

{
  if (((param_1.Value != 0xffff) && ((int)(uint)param_1.Value < (this->Bits).NumBits)) &&
     ((*(uint *)(this->Bits).AllocatorInstance.InlineData[param_1.Value >> 5].Pad >>
       (param_1.Value & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

