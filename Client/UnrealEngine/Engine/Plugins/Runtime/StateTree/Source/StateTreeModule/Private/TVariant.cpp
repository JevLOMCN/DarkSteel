// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent> @ 14d4b0f00

TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
* __thiscall
TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
::
TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
           *this,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (10 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

