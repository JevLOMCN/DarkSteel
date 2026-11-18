// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// WasSynchronizedCounter @ 147502cd0

bool __thiscall
FGraphTraversalCounter::WasSynchronizedCounter
          (FGraphTraversalCounter *this,FGraphTraversalCounter *param_1)

{
  short sVar1;
  short sVar2;
  
  if (((this->Counter == -1) || (this->LastSyncronizedFrame == 0xffffffffffffffff)) ||
     (this->Counter != param_1->Counter)) {
    sVar1 = this->Counter + 1;
    sVar2 = 0;
    if (sVar1 != -1) {
      sVar2 = sVar1;
    }
    if (((sVar2 == -1) || (GFrameCounter == 0xffffffffffffffff)) || (sVar2 != param_1->Counter)) {
      return false;
    }
  }
  return true;
}

