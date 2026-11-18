// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// operator= @ 146e820e0

FBTNodeExecutionInfo * __thiscall
FBTNodeExecutionInfo::operator=(FBTNodeExecutionInfo *this,FBTNodeExecutionInfo *param_1)

{
  undefined1 uVar1;
  UBTCompositeNode *pUVar2;
  byte bVar3;
  
  this->SearchStart = param_1->SearchStart;
  this->SearchEnd = param_1->SearchEnd;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->ExecuteNode).field0_0x0.DebugPtr, pUVar2 != (UBTCompositeNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ExecuteNode).field0_0x0 = (param_1->ExecuteNode).field0_0x0;
  this->ExecuteInstanceIdx = param_1->ExecuteInstanceIdx;
  (this->ContinueWithResult).Value = (param_1->ContinueWithResult).Value;
  bVar3 = (this->bTryNextChild ^ param_1->bTryNextChild) & 1 ^ this->field_0x13;
  this->field_0x13 = bVar3;
  this->field_0x13 = (bVar3 ^ param_1->field_0x13) & 2 ^ bVar3;
  return this;
}

