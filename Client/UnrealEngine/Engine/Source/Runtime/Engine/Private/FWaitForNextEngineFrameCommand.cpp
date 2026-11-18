// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 1488603c0

bool __thiscall FWaitForNextEngineFrameCommand::Update(FWaitForNextEngineFrameCommand *this)

{
  ulong64 uVar1;
  
  uVar1 = this->LastFrame;
  if (this->LastFrame == 0) {
    this->LastFrame = GFrameCounter;
    uVar1 = GFrameCounter;
  }
  return uVar1 != GFrameCounter;
}

