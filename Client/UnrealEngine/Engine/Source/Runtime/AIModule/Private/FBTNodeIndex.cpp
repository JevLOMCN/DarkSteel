// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// TakesPriorityOver @ 146f010e0

bool __thiscall FBTNodeIndex::TakesPriorityOver(FBTNodeIndex *this,FBTNodeIndex *param_1)

{
  bool bVar1;
  
  bVar1 = this->InstanceIndex < param_1->InstanceIndex;
  if (this->InstanceIndex == param_1->InstanceIndex) {
    bVar1 = this->ExecutionIndex < param_1->ExecutionIndex;
  }
  return bVar1;
}

