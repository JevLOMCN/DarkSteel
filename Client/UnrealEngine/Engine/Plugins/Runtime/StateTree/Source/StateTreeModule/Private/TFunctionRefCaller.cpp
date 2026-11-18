// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 8

// Call @ 14d4b77e0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StateTreeDebugger::AddEvents'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,double,double,unsigned_int,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
::Call(void *param_1,double *param_2,double *param_3,uint *param_4,
      TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
      *param_5)

{
  EEventEnumerate EVar1;
  
  EVar1 = `UE::StateTreeDebugger::AddEvents'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4,param_5);
  return EVar1;
}

// Call @ 14d4b7800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UStateTreeTaskBlueprintBase::EnterState'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)param_1 + 0x6a);
  *pbVar1 = *pbVar1 ^ (**(char **)((longlong)param_1 + 8) << 3 ^
                      *(byte *)(*(longlong *)param_1 + 0x6a)) & 8;
  return;
}

// Call @ 14d4b7820

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::EnumerateEvents'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,double,double,unsigned_int,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
::Call(void *param_1,double *param_2,double *param_3,uint *param_4,
      TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
      *param_5)

{
  double dVar1;
  double local_res8 [3];
  longlong local_res20;
  
  local_res8[0] = *param_2;
  dVar1 = *param_3;
  local_res20._1_7_ = (uint7)((ulonglong)param_4 >> 8);
  local_res20._0_1_ = 1;
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],&local_res20,local_res8,param_5);
  local_res20 = (ulonglong)local_res20._1_7_ << 8;
  local_res8[0] = dVar1;
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],&local_res20,local_res8,param_5);
  return Continue;
}

// Call @ 14d4b78a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UStateTreeTaskBlueprintBase::Tick'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)param_1 + 0x6a);
  *pbVar1 = *pbVar1 ^ (**(char **)((longlong)param_1 + 8) << 3 ^
                      *(byte *)(*(longlong *)param_1 + 0x6a)) & 8;
  return;
}

// Call @ 14d4b78c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StateTreeDebugger::ReadTrace'::__l11::<lambda_1>,void,FStateTreeInstanceDebugId,TraceServices::ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>_const_&>
::Call(void *param_1,FStateTreeInstanceDebugId *param_2,
      ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>
      *param_3)

{
  StateTreeDebugger::AddEvents
            (*(double *)param_1,*(double *)((longlong)param_1 + 8),
             *(IFrameProvider **)((longlong)param_1 + 0x10),*param_2,param_3,
             *(ITraceReader **)((longlong)param_1 + 0x18));
  return;
}

// Call @ 14d4b7900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StateTreeDebugger::ReadTrace'::__l15::<lambda_2>,void,FStateTreeInstanceDebugId,TraceServices::ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>_const_&>
::Call(void *param_1,FStateTreeInstanceDebugId *param_2,
      ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>
      *param_3)

{
  StateTreeDebugger::AddEvents
            (*(double *)param_1,*(double *)((longlong)param_1 + 8),
             *(IFrameProvider **)((longlong)param_1 + 0x10),*param_2,param_3,
             *(ITraceReader **)((longlong)param_1 + 0x18));
  return;
}

// Call @ 14d52dad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),void,FStructProperty_const_&,unsigned_char_*,unsigned_char_*>
::Call(void *param_1,FStructProperty *param_2,uchar **param_3,uchar **param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014d52dae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,*param_3,*param_4);
  return;
}

// Call @ 14d52daf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(unsigned_char_*),void,unsigned_char_*>::Call
          (void *param_1,uchar **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d52daf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

