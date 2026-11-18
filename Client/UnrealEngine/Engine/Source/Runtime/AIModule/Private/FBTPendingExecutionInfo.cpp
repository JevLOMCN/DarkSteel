// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// operator= @ 146e82160

FBTPendingExecutionInfo * __thiscall
FBTPendingExecutionInfo::operator=(FBTPendingExecutionInfo *this,FBTPendingExecutionInfo *param_1)

{
  UBTTaskNode *pUVar1;
  uint uVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->NextTask).field0_0x0.DebugPtr, pUVar1 != (UBTTaskNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->NextTask).field0_0x0 = (param_1->NextTask).field0_0x0;
  uVar2 = (this->bOutOfNodes ^ param_1->bOutOfNodes) & 1 ^ *(uint *)&this->field_0x8;
  *(uint *)&this->field_0x8 = uVar2;
  *(uint *)&this->field_0x8 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 2 ^ uVar2;
  return this;
}

