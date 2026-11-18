// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// WaitFor @ 14889f8f0

bool __thiscall UE::FManualResetEvent::WaitFor(FManualResetEvent *this,FMonotonicTimeSpan param_1)

{
  bool bVar1;
  FMonotonicTimePoint FVar2;
  
  if (param_1.Time == 0.0) {
    return (bool)((byte)this->State & 1);
  }
  FVar2 = FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
  bVar1 = WaitUntil(this,(FMonotonicTimePoint)(param_1.Time + *FVar2.Time));
  return bVar1;
}

