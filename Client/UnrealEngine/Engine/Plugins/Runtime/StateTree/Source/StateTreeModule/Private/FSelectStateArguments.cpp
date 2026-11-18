// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FSelectStateArguments @ 14d4e9f20

FSelectStateArguments * __thiscall
FStateTreeExecutionContext::FSelectStateArguments::FSelectStateArguments
          (FSelectStateArguments *this,FSelectStateArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  undefined4 uVar3;
  FActiveStateID FVar4;
  undefined2 uVar5;
  FStateTreeStateHandle FVar6;
  undefined6 uVar7;
  
  iVar2 = (param_1->ActiveStates).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->ActiveStates).field_0xc;
  (this->ActiveStates).DataPtr = (param_1->ActiveStates).DataPtr;
  (this->ActiveStates).ArrayNum = iVar2;
  *(undefined4 *)&(this->ActiveStates).field_0xc = uVar3;
  FVar4.Value = (param_1->SourceState).StateID.Value;
  (this->SourceState).FrameID = (FActiveFrameID)(param_1->SourceState).FrameID.Value;
  (this->SourceState).StateID = (FActiveStateID)FVar4.Value;
  uVar5 = *(undefined2 *)&(param_1->SourceState).field_0xa;
  (this->SourceState).StateHandle = (FStateTreeStateHandle)(param_1->SourceState).StateHandle.Index;
  *(undefined2 *)&(this->SourceState).field_0xa = uVar5;
  FVar6.Index = (param_1->TargetState).StateHandle.Index;
  uVar7 = *(undefined6 *)&(param_1->TargetState).field_0xa;
  (this->TargetState).StateTree = (param_1->TargetState).StateTree;
  (this->TargetState).StateHandle = (FStateTreeStateHandle)FVar6.Index;
  *(undefined6 *)&(this->TargetState).field_0xa = uVar7;
  (this->TransitionEvent).Event.Object = (param_1->TransitionEvent).Event.Object;
  pTVar1 = (param_1->TransitionEvent).Event.SharedReferenceCount.ReferenceController;
  (this->TransitionEvent).Event.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Fallback = param_1->Fallback;
  this->Behavior = param_1->Behavior;
  this->SelectionRules = param_1->SelectionRules;
  return this;
}

