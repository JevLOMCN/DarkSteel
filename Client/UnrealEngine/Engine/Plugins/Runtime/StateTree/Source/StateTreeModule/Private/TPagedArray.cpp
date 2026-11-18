// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// EmplaceBack<double_&,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d4ac050

FEventInternal * __thiscall
TraceServices::
TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
::
EmplaceBack<double_&,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
           *this,double *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEventInternal *pFVar7;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar8;
  FEventPage *pFVar9;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  local_78;
  
  if ((this->LastPage == (FEventPage *)0x0) || (this->LastPage->Count == this->PageSize)) {
    iVar6 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar6 + 1;
    pFVar9 = (FEventPage *)((this->PagesArray).AllocatorInstance.Data + (longlong)iVar6 * 0x30);
    DefaultConstructItems<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage,int>
              (pFVar9,1);
    this->FirstPage = (FEventPage *)(this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pFVar9;
    pFVar7 = (FEventInternal *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize * 0x60);
    this->LastPage->Items = pFVar7;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar7 = this->LastPage->Items + this->LastPage->Count;
  pTVar8 = TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
           ::
           TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                     (&local_78,param_2);
  pFVar7->Time = *param_1;
  bVar3 = pTVar8->TypeIndex;
  (pFVar7->Event).TypeIndex = bVar3;
  if (10 < bVar3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventInternal *)(*pcVar4)();
      return pFVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar3])(&pFVar7->Event,pTVar8);
  bVar3 = pTVar8->TypeIndex;
  if (10 < (ulonglong)bVar3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventInternal *)(*pcVar4)();
      return pFVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3])(pTVar8);
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar7;
}

