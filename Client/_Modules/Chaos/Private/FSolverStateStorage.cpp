// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FSolverStateStorage @ 1436f6f10

FSolverStateStorage * __thiscall FSolverStateStorage::FSolverStateStorage(FSolverStateStorage *this)

{
  this->Solver = (FPBDRigidsSolver *)0x0;
  (this->ActiveProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveProxies).ArrayNum = 0;
  (this->ActiveProxies).ArrayMax = 0;
  (this->ActiveProxies_GameThread).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveProxies_GameThread).ArrayNum = 0;
  (this->ActiveProxies_GameThread).ArrayMax = 0;
  return this;
}

