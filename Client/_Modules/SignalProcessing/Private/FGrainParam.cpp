// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// GetValue @ 144504c50

float __thiscall Audio::FGranularSynth::FGrainParam::GetValue(FGrainParam *this)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  
  dVar1 = (this->Range).field0_0x0._s_0.Y;
  dVar2 = (this->Range).field0_0x0._s_0.X;
  uVar3 = rand();
  return (float)((double)this->Base +
                (double)((float)(uVar3 & 0x7fff) * __real_38000100) * (dVar1 - dVar2) + dVar2);
}

