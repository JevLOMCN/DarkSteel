// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FNodeInstanceDataScope @ 14d4e9df0

FNodeInstanceDataScope * __thiscall
FStateTreeExecutionContext::FNodeInstanceDataScope::FNodeInstanceDataScope
          (FNodeInstanceDataScope *this,FStateTreeExecutionContext *param_1,
          FStateTreeNodeBase *param_2,int param_3,FStateTreeDataHandle param_4,
          FStateTreeDataView *param_5)

{
  undefined4 uVar1;
  FStateTreeExecutionContext *pFVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 in_stack_0000002e;
  
  this->Context = param_1;
  this->SavedNodeIndex = 0xffff;
  this->SavedNode = (FStateTreeNodeBase *)0x0;
  (this->SavedNodeDataHandle).Index = 0xffff;
  (this->SavedNodeDataHandle).Source = None;
  (this->SavedNodeDataHandle).StateHandle.Index = FStateTreeStateHandle::Invalid.Index;
  *(undefined8 *)&this->SavedNodeInstanceData = 0;
  *(undefined8 *)&(this->SavedNodeInstanceData).field_0x8 = 0;
  pFVar2 = this->Context;
  this->SavedNode = pFVar2->CurrentNode;
  this->SavedNodeIndex = pFVar2->CurrentNodeIndex;
  uVar4 = (pFVar2->CurrentNodeDataHandle).field_0x1;
  uVar5 = (pFVar2->CurrentNodeDataHandle).Index;
  (this->SavedNodeDataHandle).Source = (pFVar2->CurrentNodeDataHandle).Source;
  (this->SavedNodeDataHandle).field_0x1 = uVar4;
  (this->SavedNodeDataHandle).Index = uVar5;
  (this->SavedNodeDataHandle).StateHandle.Index = (pFVar2->CurrentNodeDataHandle).StateHandle.Index;
  uVar3 = *(undefined8 *)&(pFVar2->CurrentNodeInstanceData).field_0x8;
  *(undefined8 *)&this->SavedNodeInstanceData = *(undefined8 *)&pFVar2->CurrentNodeInstanceData;
  *(undefined8 *)&(this->SavedNodeInstanceData).field_0x8 = uVar3;
  pFVar2->CurrentNode = param_2;
  this->Context->CurrentNodeIndex = param_3;
  uVar1 = *(undefined4 *)CONCAT26(in_stack_0000002e,param_4);
  pFVar2 = this->Context;
  (pFVar2->CurrentNodeDataHandle).Source = (char)uVar1;
  (pFVar2->CurrentNodeDataHandle).field_0x1 = (char)((uint)uVar1 >> 8);
  (pFVar2->CurrentNodeDataHandle).Index = (short)((uint)uVar1 >> 0x10);
  (pFVar2->CurrentNodeDataHandle).StateHandle.Index =
       *(ushort *)((undefined4 *)CONCAT26(in_stack_0000002e,param_4) + 1);
  pFVar2 = this->Context;
  uVar3 = *(undefined8 *)&param_5->field_0x8;
  *(undefined8 *)&pFVar2->CurrentNodeInstanceData = *(undefined8 *)param_5;
  *(undefined8 *)&(pFVar2->CurrentNodeInstanceData).field_0x8 = uVar3;
  return this;
}

// ~FNodeInstanceDataScope @ 14d4ec490

void __thiscall
FStateTreeExecutionContext::FNodeInstanceDataScope::~FNodeInstanceDataScope
          (FNodeInstanceDataScope *this)

{
  FStateTreeExecutionContext *pFVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  
  uVar3 = (this->SavedNodeDataHandle).field_0x1;
  uVar4 = (this->SavedNodeDataHandle).Index;
  pFVar1 = this->Context;
  (pFVar1->CurrentNodeDataHandle).Source = (this->SavedNodeDataHandle).Source;
  (pFVar1->CurrentNodeDataHandle).field_0x1 = uVar3;
  (pFVar1->CurrentNodeDataHandle).Index = uVar4;
  (pFVar1->CurrentNodeDataHandle).StateHandle.Index = (this->SavedNodeDataHandle).StateHandle.Index;
  pFVar1 = this->Context;
  uVar2 = *(undefined8 *)&(this->SavedNodeInstanceData).field_0x8;
  *(undefined8 *)&pFVar1->CurrentNodeInstanceData = *(undefined8 *)&this->SavedNodeInstanceData;
  *(undefined8 *)&(pFVar1->CurrentNodeInstanceData).field_0x8 = uVar2;
  this->Context->CurrentNodeIndex = this->SavedNodeIndex;
  this->Context->CurrentNode = this->SavedNode;
  return;
}

