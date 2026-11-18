// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 11

// ~TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings> @ 14d4b2f50

void __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::
~TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
          (TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
           *this)

{
  TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
  ::
  ~TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
            (&this->Events);
  return;
}

// EnumerateEvents @ 14d4bb430

void __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::EnumerateEvents(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&)>
                 *param_3)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FEventPage *pFVar7;
  FEventInternal *pFVar8;
  FEventInternal *pFVar9;
  FEventInternal *pFVar10;
  FEventInternal *pFVar11;
  FEventInternal *pFVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 local_res8 [2];
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50 [5];
  
  bVar4 = false;
  lVar13 = 0;
  if ((this->Events).TotalItemCount != 0) {
    if (((this->Events).PagesArray.ArrayNum == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = (this->Events).FirstPage;
    if (pFVar7->Items == (FEventInternal *)0x0) {
      pFVar10 = (FEventInternal *)0x0;
    }
    else {
      pFVar10 = pFVar7->Items + (pFVar7->Count - 1);
    }
    if ((pFVar7->Count == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar11 = pFVar7->Items;
    if (pFVar11 != (FEventInternal *)0x0) {
      lVar14 = 0;
      pFVar9 = pFVar11;
      pFVar12 = pFVar11;
      do {
        pFVar8 = pFVar9;
        pFVar7 = (this->Events).FirstPage;
        pdVar1 = (double *)((longlong)&pFVar7->EndTime + lVar14);
        if ((*pdVar1 <= param_1 && param_1 != *pdVar1) ||
           (param_2 < *(double *)((longlong)&pFVar7->BeginTime + lVar14))) {
          if (lVar13 == (this->Events).PagesArray.ArrayNum + -1) {
            return;
          }
          lVar13 = lVar13 + 1;
          lVar14 = lVar13 * 0x30;
          pFVar9 = pFVar7[lVar13].Items;
          if (pFVar9 == (FEventInternal *)0x0) {
            pFVar10 = (FEventInternal *)0x0;
          }
          else {
            pFVar10 = pFVar9 + (pFVar7[lVar13].Count - 1);
          }
          pFVar11 = pFVar9;
          if (pFVar7 + lVar13 == (FEventPage *)0x0) {
            return;
          }
        }
        else {
          dVar2 = pFVar8->Time;
          if ((dVar2 < param_1) || (param_2 < dVar2)) {
            if ((this->bEnumerateOutsideRange != false) && (bVar4)) {
              local_80[0] = 0;
              local_58 = dVar2;
              local_50[0] = dVar2;
              iVar6 = (**(code **)param_3)
                                (*(undefined8 *)&param_3->field_0x8,local_50,&local_58,local_80,
                                 &pFVar8->Event);
              if (iVar6 == 1) {
                return;
              }
            }
          }
          else {
            if (((!bVar4) && (this->bEnumerateOutsideRange != false)) && (pFVar12 != pFVar8)) {
              local_78 = pFVar12->Time;
              local_res8[0] = 0;
              local_70 = local_78;
              iVar6 = (**(code **)param_3)
                                (*(undefined8 *)&param_3->field_0x8,&local_70,&local_78,local_res8,
                                 &pFVar12->Event);
              if (iVar6 == 1) {
                return;
              }
            }
            local_68 = pFVar8->Time;
            local_88[0] = 0;
            local_60 = local_68;
            iVar6 = (**(code **)param_3)
                              (*(undefined8 *)&param_3->field_0x8,&local_60,&local_68,local_88,
                               &pFVar8->Event);
            if (iVar6 == 1) {
              return;
            }
            bVar4 = true;
          }
          if (pFVar11 == pFVar10) {
            if (lVar13 == (this->Events).PagesArray.ArrayNum + -1) {
              pFVar10 = (FEventInternal *)0x0;
              pFVar9 = (FEventInternal *)0x0;
              pFVar11 = (FEventInternal *)0x0;
            }
            else {
              lVar13 = lVar13 + 1;
              lVar14 = lVar13 * 0x30;
              pFVar7 = (this->Events).FirstPage + lVar13;
              pFVar11 = pFVar7->Items;
              if (pFVar11 == (FEventInternal *)0x0) {
                pFVar10 = (FEventInternal *)0x0;
              }
              else {
                pFVar10 = pFVar11 + (pFVar7->Count - 1);
              }
              pFVar9 = pFVar11;
              if (pFVar7 == (FEventPage *)0x0) {
                pFVar9 = (FEventInternal *)0x0;
              }
            }
          }
          else {
            pFVar9 = pFVar11 + 1;
            pFVar11 = pFVar9;
          }
        }
        pFVar12 = pFVar8;
      } while (pFVar9 != (FEventInternal *)0x0);
    }
  }
  return;
}

// EnumerateEvents @ 14d4bb740

void __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::EnumerateEvents(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&)>
                 *param_3)

{
  (**(code **)(this->_padding_ + 0x58))();
  return;
}

// EnumerateEventsDownSampled @ 14d4bb7c0

void __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&)>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\PointTimeline.h"
                     ,0x26,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EnumerateEventsDownSampled @ 14d4bb800

void __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&)>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\PointTimeline.h"
                     ,0x25,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetEndTime @ 14d4bd6a0

double __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::GetEndTime(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
             *this)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = (this->Events).TotalItemCount;
  if (uVar1 != 0) {
    uVar3 = uVar1 - 1;
    uVar2 = (this->Events).PageSize;
    return (this->Events).FirstPage[uVar3 / uVar2].Items[uVar3 % uVar2].Time;
  }
  return 0.0;
}

// GetEvent @ 14d4bd6e0

TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
* __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::GetEvent(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
           *this,ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = (this->Events).PageSize;
  return &(this->Events).FirstPage[param_1 / uVar1].Items[param_1 % uVar1].Event;
}

// GetEventCount @ 14d4bd800

ulong64 __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::GetEventCount(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
                *this)

{
  return (this->Events).TotalItemCount;
}

// GetEventInfo @ 14d4bd810

bool __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::GetEventInfo(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
               *this,double param_1,double param_2,int param_3,FTimelineEventInfo *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\PointTimeline.h"
                     ,0x8f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// GetModCount @ 14d4be520

ulong64 __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::GetModCount(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
              *this)

{
  return this->ModCount;
}

// GetStartTime @ 14d4bfbc0

double __thiscall
TraceServices::
TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
::GetStartTime(TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>
               *this)

{
  if ((this->Events).TotalItemCount != 0) {
    return ((this->Events).FirstPage)->Items->Time;
  }
  return 0.0;
}

