// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FBehaviorTreeSearchUpdate @ 146ec4c10

FBehaviorTreeSearchUpdate * __thiscall
FBehaviorTreeSearchUpdate::FBehaviorTreeSearchUpdate
          (FBehaviorTreeSearchUpdate *this,FBehaviorTreeSearchUpdate *param_1)

{
  undefined1 uVar1;
  UBTAuxiliaryNode *pUVar2;
  UBTTaskNode *pUVar3;
  byte bVar4;
  
  pUVar2 = (param_1->AuxNode).field0_0x0.DebugPtr;
  (this->AuxNode).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UBTAuxiliaryNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->TaskNode).field0_0x0.DebugPtr;
  (this->TaskNode).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UBTTaskNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->InstanceIndex = param_1->InstanceIndex;
  (this->Mode).Value = (param_1->Mode).Value;
  bVar4 = (this->bPostUpdate ^ param_1->bPostUpdate) & 1 ^ this->field_0x13;
  this->field_0x13 = bVar4;
  this->field_0x13 = (bVar4 ^ param_1->field_0x13) & 2 ^ bVar4;
  return this;
}

