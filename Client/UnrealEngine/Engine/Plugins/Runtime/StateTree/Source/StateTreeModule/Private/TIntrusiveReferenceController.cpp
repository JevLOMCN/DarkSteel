// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 9

// DestroyObject @ 14d4ba9f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::StateTree::Private::FCrashReporterHandlerImpl,1>::DestroyObject
          (TIntrusiveReferenceController<UE::StateTree::Private::FCrashReporterHandlerImpl,1> *this)

{
  void *pvVar1;
  
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)((this->ObjectStorage).Pad + 0x438));
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x410));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x400);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d4baa40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::StateTreeDebugger::FInstanceDescriptor,1>
::DestroyObject(TIntrusiveReferenceController<UE::StateTreeDebugger::FInstanceDescriptor,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d4baa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d4baa90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeInstanceData,1>::DestroyObject
          (TIntrusiveReferenceController<FStateTreeInstanceData,1> *this)

{
  FStateTreeInstanceData::~FStateTreeInstanceData((FStateTreeInstanceData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4baaa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>,1>
::DestroyObject(TIntrusiveReferenceController<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>,1>
                *this)

{
  TraceServices::
  TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
  ::
  ~TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
            ((TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d4baab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeTraceProvider,1>::DestroyObject
          (TIntrusiveReferenceController<FStateTreeTraceProvider,1> *this)

{
  FStateTreeTraceProvider::~FStateTreeTraceProvider((FStateTreeTraceProvider *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14d4f4210

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FStateTreeExecutionContext::FSelectStateResult,1>::DestroyObject
          (TIntrusiveReferenceController<FStateTreeExecutionContext::FSelectStateResult,1> *this)

{
  FStateTreeExecutionContext::FSelectStateResult::~FSelectStateResult
            ((FSelectStateResult *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4f4220

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeEvent,1>::DestroyObject
          (TIntrusiveReferenceController<FStateTreeEvent,1> *this)

{
  FInstancedStruct::Reset((FInstancedStruct *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d4f4230

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeEventQueue,1>::DestroyObject
          (TIntrusiveReferenceController<FStateTreeEventQueue,1> *this)

{
  void *pvVar1;
  
  DestructItems<FStateTreeSharedEvent,int>
            (*(FStateTreeSharedEvent **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d4f4270

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeInstanceStorage,1>::DestroyObject
          (TIntrusiveReferenceController<FStateTreeInstanceStorage,1> *this)

{
  FStateTreeInstanceStorage::~FStateTreeInstanceStorage
            ((FStateTreeInstanceStorage *)&this->ObjectStorage);
  return;
}

