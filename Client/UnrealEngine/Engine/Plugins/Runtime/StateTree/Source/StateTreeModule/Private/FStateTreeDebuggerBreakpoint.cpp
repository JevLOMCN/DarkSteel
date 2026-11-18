// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 7

// FStateTreeDebuggerBreakpoint @ 14d4b1b60

FStateTreeDebuggerBreakpoint * __thiscall
FStateTreeDebuggerBreakpoint::FStateTreeDebuggerBreakpoint
          (FStateTreeDebuggerBreakpoint *this,FStateTreeDebuggerBreakpoint *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeDebuggerBreakpoint *pFVar4;
  
  bVar1 = (param_1->ElementIdentifier).TypeIndex;
  (this->ElementIdentifier).TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeDebuggerBreakpoint *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FStateTreeStateHandle,FStateTreeDebuggerBreakpoint::FStateTreeTaskIndex,FStateTreeDebuggerBreakpoint::FStateTreeTransitionIndex>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  this->BreakpointType = param_1->BreakpointType;
  this->EventType = param_1->EventType;
  return this;
}

// FStateTreeDebuggerBreakpoint @ 14d4b1bf0

FStateTreeDebuggerBreakpoint * __thiscall
FStateTreeDebuggerBreakpoint::FStateTreeDebuggerBreakpoint
          (FStateTreeDebuggerBreakpoint *this,FStateTreeStateHandle param_1,
          EStateTreeBreakpointType param_2)

{
  (this->ElementIdentifier)._padding_ = param_1.Index;
  (this->ElementIdentifier).TypeIndex = '\0';
  this->BreakpointType = param_2;
  if (param_2 == OnEnter) {
    this->EventType = OnEntered;
    return this;
  }
  if (param_2 != OnExit) {
    if (param_2 != OnTransition) {
      this->EventType = Unset;
      return this;
    }
    this->EventType = OnTransition;
    return this;
  }
  this->EventType = OnExited;
  return this;
}

// FStateTreeDebuggerBreakpoint @ 14d4b1c40

FStateTreeDebuggerBreakpoint * __thiscall
FStateTreeDebuggerBreakpoint::FStateTreeDebuggerBreakpoint
          (FStateTreeDebuggerBreakpoint *this,FStateTreeTaskIndex param_1,
          EStateTreeBreakpointType param_2)

{
  (this->ElementIdentifier)._padding_ = (short)param_1.Index.Value;
  (this->ElementIdentifier).TypeIndex = '\x01';
  this->BreakpointType = param_2;
  if (param_2 == OnEnter) {
    this->EventType = OnEntered;
    return this;
  }
  if (param_2 != OnExit) {
    if (param_2 != OnTransition) {
      this->EventType = Unset;
      return this;
    }
    this->EventType = OnTransition;
    return this;
  }
  this->EventType = OnExited;
  return this;
}

// FStateTreeDebuggerBreakpoint @ 14d4b1c90

FStateTreeDebuggerBreakpoint * __thiscall
FStateTreeDebuggerBreakpoint::FStateTreeDebuggerBreakpoint
          (FStateTreeDebuggerBreakpoint *this,FStateTreeTransitionIndex param_1,
          EStateTreeBreakpointType param_2)

{
  (this->ElementIdentifier)._padding_ = (short)param_1.Index.Value;
  (this->ElementIdentifier).TypeIndex = '\x02';
  this->BreakpointType = param_2;
  if (param_2 == OnEnter) {
    this->EventType = OnEntered;
    return this;
  }
  if (param_2 != OnExit) {
    if (param_2 != OnTransition) {
      this->EventType = Unset;
      return this;
    }
    this->EventType = OnTransition;
    return this;
  }
  this->EventType = OnExited;
  return this;
}

// FStateTreeDebuggerBreakpoint @ 14d4b1ce0

FStateTreeDebuggerBreakpoint * __thiscall
FStateTreeDebuggerBreakpoint::FStateTreeDebuggerBreakpoint(FStateTreeDebuggerBreakpoint *this)

{
  (this->ElementIdentifier)._padding_ = -1;
  (this->ElementIdentifier).TypeIndex = '\0';
  this->BreakpointType = Unset;
  this->EventType = Unset;
  return this;
}

// GetMatchingEventType @ 14d4be4f0

EStateTreeTraceEventType __cdecl
FStateTreeDebuggerBreakpoint::GetMatchingEventType(EStateTreeBreakpointType param_1)

{
  if (param_1 == OnEnter) {
    return OnEntered;
  }
  if (param_1 != OnExit) {
    if (param_1 != OnTransition) {
      return Unset;
    }
    return OnTransition;
  }
  return OnExited;
}

// IsMatchingEvent @ 14d4c3ee0

bool __thiscall
FStateTreeDebuggerBreakpoint::IsMatchingEvent
          (FStateTreeDebuggerBreakpoint *this,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_1)

{
  uchar uVar1;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar2;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar3;
  EStateTreeTraceEventType local_res8 [8];
  EStateTreeTraceEventType *local_res10;
  
  local_res10 = local_res8;
  local_res8[0] = Unset;
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_FStateTreeDebuggerBreakpoint::IsMatchingEvent_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>_152b2d430
            )[param_1->TypeIndex])(&local_res10);
  if (this->EventType == local_res8[0]) {
    uVar1 = (this->ElementIdentifier).TypeIndex;
    pTVar3 = (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
              *)0x0;
    pTVar2 = (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
              *)this;
    if (uVar1 != '\0') {
      pTVar2 = pTVar3;
    }
    if (pTVar2 == (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                   *)0x0) {
      pTVar2 = (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                *)this;
      if (uVar1 != '\x01') {
        pTVar2 = pTVar3;
      }
      if (pTVar2 == (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                     *)0x0) {
        if (uVar1 != '\x02') {
          this = (FStateTreeDebuggerBreakpoint *)pTVar3;
        }
        if ((TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
             *)this !=
            (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
             *)0x0) {
          if (param_1->TypeIndex != '\a') {
            param_1 = pTVar3;
          }
          if ((param_1 !=
               (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                *)0x0) &&
             (*(short *)((longlong)&param_1->_padding_ + 2) ==
              ((TVariant<FStateTreeStateHandle,FStateTreeDebuggerBreakpoint::FStateTreeTaskIndex,FStateTreeDebuggerBreakpoint::FStateTreeTransitionIndex>
                *)&((TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                     *)this)->_padding_)->_padding_)) {
            return true;
          }
        }
      }
      else {
        if (param_1->TypeIndex != '\x05') {
          param_1 = pTVar3;
        }
        if ((param_1 !=
             (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
              *)0x0) &&
           ((short)param_1->_padding_ ==
            ((TVariant<FStateTreeStateHandle,FStateTreeDebuggerBreakpoint::FStateTreeTaskIndex,FStateTreeDebuggerBreakpoint::FStateTreeTransitionIndex>
              *)&pTVar2->_padding_)->_padding_)) {
          return true;
        }
      }
    }
    else {
      if (param_1->TypeIndex != '\x04') {
        param_1 = pTVar3;
      }
      if ((param_1 !=
           (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
            *)0x0) &&
         ((short)param_1->_padding_ ==
          ((TVariant<FStateTreeStateHandle,FStateTreeDebuggerBreakpoint::FStateTreeTaskIndex,FStateTreeDebuggerBreakpoint::FStateTreeTransitionIndex>
            *)&pTVar2->_padding_)->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

