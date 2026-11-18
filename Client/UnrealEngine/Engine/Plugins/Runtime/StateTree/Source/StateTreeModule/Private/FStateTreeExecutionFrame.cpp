// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// StaticStruct @ 14d4daca0

UScriptStruct * __cdecl FStateTreeExecutionFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionFrame,(UObject *)pUVar1,
                         L"StateTreeExecutionFrame");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeExecutionFrame.OuterSingleton;
}

// FStateTreeExecutionFrame @ 14d4eaba0

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionFrame::FStateTreeExecutionFrame
          (FStateTreeExecutionFrame *this,FStateTreeExecutionFrame *param_1)

{
  undefined1 uVar1;
  UStateTree *pUVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  byte bVar7;
  
  pUVar2 = (param_1->StateTree).field0_0x0.DebugPtr;
  (this->StateTree).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->RootState).Index = (param_1->RootState).Index;
  uVar3 = *(undefined8 *)((param_1->ActiveStates).StateIDs + 2);
  *(undefined8 *)(this->ActiveStates).StateIDs = *(undefined8 *)(param_1->ActiveStates).StateIDs;
  *(undefined8 *)((this->ActiveStates).StateIDs + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->ActiveStates).StateIDs + 6);
  *(undefined8 *)((this->ActiveStates).StateIDs + 4) =
       *(undefined8 *)((param_1->ActiveStates).StateIDs + 4);
  *(undefined8 *)((this->ActiveStates).StateIDs + 6) = uVar3;
  uVar3 = *(undefined8 *)((param_1->ActiveStates).States + 4);
  *(undefined8 *)(this->ActiveStates).States = *(undefined8 *)(param_1->ActiveStates).States;
  *(undefined8 *)((this->ActiveStates).States + 4) = uVar3;
  uVar4 = *(undefined3 *)&(param_1->ActiveStates).field_0x31;
  (this->ActiveStates).NumStates = (param_1->ActiveStates).NumStates;
  *(undefined3 *)&(this->ActiveStates).field_0x31 = uVar4;
  FStateTreeTasksCompletionStatus::FStateTreeTasksCompletionStatus
            (&this->ActiveTasksStatus,&param_1->ActiveTasksStatus);
  (this->FrameID).Value = (param_1->FrameID).Value;
  (this->ActiveNodeIndex).Value = (param_1->ActiveNodeIndex).Value;
  (this->ExternalDataBaseIndex).Value = (param_1->ExternalDataBaseIndex).Value;
  (this->GlobalInstanceIndexBase).Value = (param_1->GlobalInstanceIndexBase).Value;
  (this->ActiveInstanceIndexBase).Value = (param_1->ActiveInstanceIndexBase).Value;
  (this->ExecutionRuntimeIndexBase).Value = (param_1->ExecutionRuntimeIndexBase).Value;
  uVar5 = (param_1->StateParameterDataHandle).field_0x1;
  uVar6 = (param_1->StateParameterDataHandle).Index;
  (this->StateParameterDataHandle).Source = (param_1->StateParameterDataHandle).Source;
  (this->StateParameterDataHandle).field_0x1 = uVar5;
  (this->StateParameterDataHandle).Index = uVar6;
  (this->StateParameterDataHandle).StateHandle.Index =
       (param_1->StateParameterDataHandle).StateHandle.Index;
  uVar5 = (param_1->GlobalParameterDataHandle).field_0x1;
  uVar6 = (param_1->GlobalParameterDataHandle).Index;
  (this->GlobalParameterDataHandle).Source = (param_1->GlobalParameterDataHandle).Source;
  (this->GlobalParameterDataHandle).field_0x1 = uVar5;
  (this->GlobalParameterDataHandle).Index = uVar6;
  (this->GlobalParameterDataHandle).StateHandle.Index =
       (param_1->GlobalParameterDataHandle).StateHandle.Index;
  bVar7 = (this->bIsGlobalFrame ^ param_1->bIsGlobalFrame) & 1 ^ this->field_0x6a;
  this->field_0x6a = bVar7;
  this->field_0x6a = (bVar7 ^ param_1->field_0x6a) & 2 ^ bVar7;
  return this;
}

// FStateTreeExecutionFrame @ 14d4eac80

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionFrame::FStateTreeExecutionFrame
          (FStateTreeExecutionFrame *this,FStateTreeExecutionFrame *param_1)

{
  undefined1 uVar1;
  UStateTree *pUVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  byte bVar7;
  
  pUVar2 = (param_1->StateTree).field0_0x0.DebugPtr;
  (this->StateTree).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->RootState).Index = (param_1->RootState).Index;
  uVar3 = *(undefined8 *)((param_1->ActiveStates).StateIDs + 2);
  *(undefined8 *)(this->ActiveStates).StateIDs = *(undefined8 *)(param_1->ActiveStates).StateIDs;
  *(undefined8 *)((this->ActiveStates).StateIDs + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->ActiveStates).StateIDs + 6);
  *(undefined8 *)((this->ActiveStates).StateIDs + 4) =
       *(undefined8 *)((param_1->ActiveStates).StateIDs + 4);
  *(undefined8 *)((this->ActiveStates).StateIDs + 6) = uVar3;
  uVar3 = *(undefined8 *)((param_1->ActiveStates).States + 4);
  *(undefined8 *)(this->ActiveStates).States = *(undefined8 *)(param_1->ActiveStates).States;
  *(undefined8 *)((this->ActiveStates).States + 4) = uVar3;
  uVar4 = *(undefined3 *)&(param_1->ActiveStates).field_0x31;
  (this->ActiveStates).NumStates = (param_1->ActiveStates).NumStates;
  *(undefined3 *)&(this->ActiveStates).field_0x31 = uVar4;
  FStateTreeTasksCompletionStatus::FStateTreeTasksCompletionStatus
            (&this->ActiveTasksStatus,&param_1->ActiveTasksStatus);
  (this->FrameID).Value = (param_1->FrameID).Value;
  (this->ActiveNodeIndex).Value = (param_1->ActiveNodeIndex).Value;
  (this->ExternalDataBaseIndex).Value = (param_1->ExternalDataBaseIndex).Value;
  (this->GlobalInstanceIndexBase).Value = (param_1->GlobalInstanceIndexBase).Value;
  (this->ActiveInstanceIndexBase).Value = (param_1->ActiveInstanceIndexBase).Value;
  (this->ExecutionRuntimeIndexBase).Value = (param_1->ExecutionRuntimeIndexBase).Value;
  uVar5 = (param_1->StateParameterDataHandle).field_0x1;
  uVar6 = (param_1->StateParameterDataHandle).Index;
  (this->StateParameterDataHandle).Source = (param_1->StateParameterDataHandle).Source;
  (this->StateParameterDataHandle).field_0x1 = uVar5;
  (this->StateParameterDataHandle).Index = uVar6;
  (this->StateParameterDataHandle).StateHandle.Index =
       (param_1->StateParameterDataHandle).StateHandle.Index;
  uVar5 = (param_1->GlobalParameterDataHandle).field_0x1;
  uVar6 = (param_1->GlobalParameterDataHandle).Index;
  (this->GlobalParameterDataHandle).Source = (param_1->GlobalParameterDataHandle).Source;
  (this->GlobalParameterDataHandle).field_0x1 = uVar5;
  (this->GlobalParameterDataHandle).Index = uVar6;
  (this->GlobalParameterDataHandle).StateHandle.Index =
       (param_1->GlobalParameterDataHandle).StateHandle.Index;
  bVar7 = (this->bIsGlobalFrame ^ param_1->bIsGlobalFrame) & 1 ^ this->field_0x6a;
  this->field_0x6a = bVar7;
  this->field_0x6a = (bVar7 ^ param_1->field_0x6a) & 2 ^ bVar7;
  return this;
}

// FStateTreeExecutionFrame @ 14d4ead60

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionFrame::FStateTreeExecutionFrame
          (FStateTreeExecutionFrame *this,FRecordedStateTreeExecutionFrame *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  FStateTreeStateHandle FVar4;
  
  (this->StateTree).field0_0x0.DebugPtr = (UStateTree *)0x0;
  (this->RootState).Index = FStateTreeStateHandle::Root.Index;
  (this->ActiveStates).StateIDs[0] = 0;
  (this->ActiveStates).StateIDs[1] = 0;
  (this->ActiveStates).StateIDs[2] = 0;
  (this->ActiveStates).StateIDs[3] = 0;
  (this->ActiveStates).StateIDs[4] = 0;
  (this->ActiveStates).StateIDs[5] = 0;
  (this->ActiveStates).StateIDs[6] = 0;
  (this->ActiveStates).StateIDs[7] = 0;
  (this->ActiveStates).States[0] = 0xffff;
  (this->ActiveStates).States[1] = 0xffff;
  (this->ActiveStates).States[2] = 0xffff;
  (this->ActiveStates).States[3] = 0xffff;
  (this->ActiveStates).States[4] = 0xffff;
  (this->ActiveStates).States[5] = 0xffff;
  (this->ActiveStates).States[6] = 0xffff;
  (this->ActiveStates).States[7] = 0xffff;
  (this->ActiveStates).NumStates = '\0';
  (this->ActiveTasksStatus).Buffer = (uint *)0x0;
  (this->ActiveTasksStatus).BufferNum = '\0';
  (this->FrameID).Value = 0;
  (this->ActiveNodeIndex).Value = FStateTreeIndex16::Invalid.Value;
  (this->ExternalDataBaseIndex).Value = FStateTreeIndex16::Invalid.Value;
  (this->GlobalInstanceIndexBase).Value = FStateTreeIndex16::Invalid.Value;
  (this->ActiveInstanceIndexBase).Value = FStateTreeIndex16::Invalid.Value;
  (this->ExecutionRuntimeIndexBase).Value = FStateTreeIndex16::Invalid.Value;
  uVar2 = FStateTreeDataHandle::Invalid._1_1_;
  uVar3 = FStateTreeDataHandle::Invalid.Index;
  (this->StateParameterDataHandle).Source = FStateTreeDataHandle::Invalid.Source;
  (this->StateParameterDataHandle).field_0x1 = uVar2;
  (this->StateParameterDataHandle).Index = uVar3;
  (this->StateParameterDataHandle).StateHandle.Index =
       FStateTreeDataHandle::Invalid.StateHandle.Index;
  uVar2 = FStateTreeDataHandle::Invalid._1_1_;
  uVar3 = FStateTreeDataHandle::Invalid.Index;
  (this->GlobalParameterDataHandle).Source = FStateTreeDataHandle::Invalid.Source;
  FVar4 = FStateTreeDataHandle::Invalid.StateHandle;
  (this->GlobalParameterDataHandle).field_0x1 = uVar2;
  (this->GlobalParameterDataHandle).Index = uVar3;
  this->bIsGlobalFrame = '\0';
  this->bHaveEntered = '\0';
  (this->GlobalParameterDataHandle).StateHandle.Index = FVar4.Index;
  return this;
}

// FStateTreeExecutionFrame @ 14d4eae10

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionFrame::FStateTreeExecutionFrame(FStateTreeExecutionFrame *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  FStateTreeStateHandle FVar4;
  
  (this->StateTree).field0_0x0.DebugPtr = (UStateTree *)0x0;
  (this->RootState).Index = FStateTreeStateHandle::Root.Index;
  (this->ActiveStates).StateIDs[0] = 0;
  (this->ActiveStates).StateIDs[1] = 0;
  (this->ActiveStates).StateIDs[2] = 0;
  (this->ActiveStates).StateIDs[3] = 0;
  (this->ActiveStates).StateIDs[4] = 0;
  (this->ActiveStates).StateIDs[5] = 0;
  (this->ActiveStates).StateIDs[6] = 0;
  (this->ActiveStates).StateIDs[7] = 0;
  (this->ActiveStates).States[0] = 0xffff;
  (this->ActiveStates).States[1] = 0xffff;
  (this->ActiveStates).States[2] = 0xffff;
  (this->ActiveStates).States[3] = 0xffff;
  (this->ActiveStates).States[4] = 0xffff;
  (this->ActiveStates).States[5] = 0xffff;
  (this->ActiveStates).States[6] = 0xffff;
  (this->ActiveStates).States[7] = 0xffff;
  (this->ActiveStates).NumStates = '\0';
  (this->ActiveTasksStatus).Buffer = (uint *)0x0;
  (this->ActiveTasksStatus).BufferNum = '\0';
  (this->FrameID).Value = 0;
  (this->ActiveNodeIndex).Value = FStateTreeIndex16::Invalid.Value;
  (this->ExternalDataBaseIndex).Value = FStateTreeIndex16::Invalid.Value;
  (this->GlobalInstanceIndexBase).Value = FStateTreeIndex16::Invalid.Value;
  (this->ActiveInstanceIndexBase).Value = FStateTreeIndex16::Invalid.Value;
  (this->ExecutionRuntimeIndexBase).Value = FStateTreeIndex16::Invalid.Value;
  uVar2 = FStateTreeDataHandle::Invalid._1_1_;
  uVar3 = FStateTreeDataHandle::Invalid.Index;
  (this->StateParameterDataHandle).Source = FStateTreeDataHandle::Invalid.Source;
  (this->StateParameterDataHandle).field_0x1 = uVar2;
  (this->StateParameterDataHandle).Index = uVar3;
  (this->StateParameterDataHandle).StateHandle.Index =
       FStateTreeDataHandle::Invalid.StateHandle.Index;
  uVar2 = FStateTreeDataHandle::Invalid._1_1_;
  uVar3 = FStateTreeDataHandle::Invalid.Index;
  (this->GlobalParameterDataHandle).Source = FStateTreeDataHandle::Invalid.Source;
  FVar4 = FStateTreeDataHandle::Invalid.StateHandle;
  (this->GlobalParameterDataHandle).field_0x1 = uVar2;
  (this->GlobalParameterDataHandle).Index = uVar3;
  this->bIsGlobalFrame = '\0';
  this->bHaveEntered = '\0';
  (this->GlobalParameterDataHandle).StateHandle.Index = FVar4.Index;
  return this;
}

