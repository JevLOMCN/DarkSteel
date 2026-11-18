// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CleanUpIORequest @ 1473f1730

void __thiscall FLoadedAnimationChunk::CleanUpIORequest(FLoadedAnimationChunk *this)

{
  IBulkDataIORequest *pIVar1;
  
  pIVar1 = this->IORequest;
  if (pIVar1 != (IBulkDataIORequest *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,0);
    pIVar1 = this->IORequest;
    if (pIVar1 != (IBulkDataIORequest *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    this->IORequest = (IBulkDataIORequest *)0x0;
  }
  return;
}

