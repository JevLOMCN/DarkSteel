// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// FCompactStateTreeState @ 14d70ce10

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FCompactStateTreeState * __thiscall
FCompactStateTreeState::FCompactStateTreeState
          (FCompactStateTreeState *this,FCompactStateTreeState *param_1)

{
  undefined1 uVar1;
  UScriptStruct *pUVar2;
  UStateTree *pUVar3;
  int iVar4;
  undefined1 uVar5;
  ushort uVar6;
  byte bVar7;
  
  pUVar2 = (param_1->RequiredEventToEnter).PayloadStruct.field0_0x0.DebugPtr;
  (this->RequiredEventToEnter).PayloadStruct.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->RequiredEventToEnter).Tag.TagName = (param_1->RequiredEventToEnter).Tag.TagName;
  this->Name = param_1->Name;
  (this->Tag).TagName = (param_1->Tag).TagName;
  iVar4 = (param_1->EnterConditionEvaluationScopeMemoryRequirement).Alignment;
  (this->EnterConditionEvaluationScopeMemoryRequirement).Size =
       (param_1->EnterConditionEvaluationScopeMemoryRequirement).Size;
  (this->EnterConditionEvaluationScopeMemoryRequirement).Alignment = iVar4;
  (this->EnterConditionEvaluationScopeMemoryRequirement).NumberOfElements =
       (param_1->EnterConditionEvaluationScopeMemoryRequirement).NumberOfElements;
  iVar4 = (param_1->ConsiderationEvaluationScopeMemoryRequirement).Alignment;
  (this->ConsiderationEvaluationScopeMemoryRequirement).Size =
       (param_1->ConsiderationEvaluationScopeMemoryRequirement).Size;
  (this->ConsiderationEvaluationScopeMemoryRequirement).Alignment = iVar4;
  (this->ConsiderationEvaluationScopeMemoryRequirement).NumberOfElements =
       (param_1->ConsiderationEvaluationScopeMemoryRequirement).NumberOfElements;
  pUVar3 = (param_1->LinkedAsset).field0_0x0.DebugPtr;
  (this->LinkedAsset).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->LinkedState).Index = (param_1->LinkedState).Index;
  (this->Parent).Index = (param_1->Parent).Index;
  this->ChildrenBegin = param_1->ChildrenBegin;
  this->ChildrenEnd = param_1->ChildrenEnd;
  this->EnterConditionsBegin = param_1->EnterConditionsBegin;
  this->UtilityConsiderationsBegin = param_1->UtilityConsiderationsBegin;
  this->TransitionsBegin = param_1->TransitionsBegin;
  this->TasksBegin = param_1->TasksBegin;
  (this->ParameterTemplateIndex).Value = (param_1->ParameterTemplateIndex).Value;
  uVar5 = (param_1->ParameterDataHandle).field_0x1;
  uVar6 = (param_1->ParameterDataHandle).Index;
  (this->ParameterDataHandle).Source = (param_1->ParameterDataHandle).Source;
  (this->ParameterDataHandle).field_0x1 = uVar5;
  (this->ParameterDataHandle).Index = uVar6;
  (this->ParameterDataHandle).StateHandle.Index = (param_1->ParameterDataHandle).StateHandle.Index;
  (this->ParameterBindingsBatch).Value = (param_1->ParameterBindingsBatch).Value;
  (this->EventDataIndex).Value = (param_1->EventDataIndex).Value;
  this->Weight = param_1->Weight;
  this->CustomTickRate = param_1->CustomTickRate;
  this->CompletionTasksMask = param_1->CompletionTasksMask;
  this->CompletionTasksMaskBufferIndex = param_1->CompletionTasksMaskBufferIndex;
  this->CompletionTasksMaskBitsOffset = param_1->CompletionTasksMaskBitsOffset;
  this->CompletionTasksControl = param_1->CompletionTasksControl;
  this->EnterConditionsNum = param_1->EnterConditionsNum;
  this->UtilityConsiderationsNum = param_1->UtilityConsiderationsNum;
  this->TransitionsNum = param_1->TransitionsNum;
  this->TasksNum = param_1->TasksNum;
  this->EnabledTasksNum = param_1->EnabledTasksNum;
  this->InstanceDataNum = param_1->InstanceDataNum;
  this->Depth = param_1->Depth;
  this->Type = param_1->Type;
  this->SelectionBehavior = param_1->SelectionBehavior;
  bVar7 = (this->bHasTransitionTasks ^ param_1->bHasTransitionTasks) & 1 ^ this->field_0x74;
  this->field_0x74 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x74) & 2 ^ bVar7;
  this->field_0x74 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x74) & 4 ^ bVar7;
  this->field_0x74 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x74) & 8 ^ bVar7;
  this->field_0x74 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x74) & 0x10 ^ bVar7;
  this->field_0x74 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x74) & 0x20 ^ bVar7;
  this->field_0x74 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x74) & 0x40 ^ bVar7;
  this->field_0x74 = bVar7;
  this->field_0x74 = (bVar7 ^ param_1->field_0x74) & 0x7f ^ param_1->field_0x74;
  bVar7 = (this->bHasDelegateTriggerTransitions ^ param_1->bHasDelegateTriggerTransitions) & 1 ^
          this->field_0x75;
  this->field_0x75 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x75) & 2 ^ bVar7;
  this->field_0x75 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x75) & 4 ^ bVar7;
  this->field_0x75 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x75) & 8 ^ bVar7;
  this->field_0x75 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x75) & 0x10 ^ bVar7;
  this->field_0x75 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x75) & 0x20 ^ bVar7;
  this->field_0x75 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x75) & 0x40 ^ bVar7;
  this->field_0x75 = bVar7;
  this->field_0x75 = (bVar7 ^ param_1->field_0x75) & 0x7f ^ param_1->field_0x75;
  return this;
}

