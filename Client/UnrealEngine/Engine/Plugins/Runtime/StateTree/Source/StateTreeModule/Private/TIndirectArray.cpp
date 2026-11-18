// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// DestructAndFreeItems @ 14d4bac80

void __thiscall
TIndirectArray<UE::StateTreeDebugger::FInstanceEventCollection,TSizedDefaultAllocator<32>_>::
DestructAndFreeItems
          (TIndirectArray<UE::StateTreeDebugger::FInstanceEventCollection,TSizedDefaultAllocator<32>_>
           *this)

{
  void *pvVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar2 = (this->Array).ArrayNum; iVar2 != 0; iVar2 = iVar2 + -1) {
    pvVar1 = *(void **)pFVar3;
    if (pvVar1 != (void *)0x0) {
      if (*(void **)((longlong)pvVar1 + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar1 + 0x38));
      }
      if (*(void **)((longlong)pvVar1 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar1 + 0x28));
      }
      if (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar1 + 0x18));
      }
      DestructItems<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,int>
                (*(TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                   **)((longlong)pvVar1 + 8),*(int *)((longlong)pvVar1 + 0x10));
      if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar1 + 8));
      }
      ::operator_delete(pvVar1,0x48);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

