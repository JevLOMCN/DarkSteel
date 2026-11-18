// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d41dfe0

FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall
TraceServices::
FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::
FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,ILinearAllocator *param_1,double param_2)

{
  FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent> *pFVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  
  (this->ScopeEntries).Allocator = param_1;
  (this->Events).Allocator = param_1;
  pFVar1 = (this->InsertionState).DepthStates;
  (this->ScopeEntries).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScopeEntries).PagesArray.ArrayNum = 0;
  (this->ScopeEntries).PagesArray.ArrayMax = 0;
  (this->ScopeEntries).FirstPage = (FEventScopeEntryPage *)0x0;
  (this->ScopeEntries).LastPage = (FEventScopeEntryPage *)0x0;
  (this->ScopeEntries).TotalItemCount = 0;
  (this->Events).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).PagesArray.ArrayNum = 0;
  (this->Events).PagesArray.ArrayMax = 0;
  (this->Events).FirstPage = (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0;
  (this->Events).LastPage = (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0;
  (this->Events).TotalItemCount = 0;
  (this->InsertionState).LastTime = -1.0;
  (this->InsertionState).CurrentDepth = 0;
  this->Resolution = param_2;
  (this->ScopeEntries).PageSize = 0x10000;
  (this->Events).PageSize = 0x10000;
  (this->InsertionState).PendingDepth = -1;
  lVar3 = 0x400;
  lVar4 = 0x400;
  do {
    pFVar1->PendingScopeEnterIndex = -1;
    pFVar1->PendingEventIndex = -1;
    (pFVar1->DominatingEvent).Package = (FPackageInfo *)0x0;
    (pFVar1->DominatingEvent).Export = (FPackageExportInfo *)0x0;
    (pFVar1->DominatingEvent).EventType = LoadTimeProfilerObjectEventType_None;
    pFVar1->DominatingEventStartTime = 0.0;
    pFVar1->DominatingEventEndTime = 0.0;
    pFVar1->DominatingEventDuration = 0.0;
    pFVar1->EnterTime = 0.0;
    pFVar1->ExitTime = 0.0;
    pFVar1 = pFVar1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pdVar2 = &(this->InsertionState).EventStack[0].EndTime;
  do {
    pdVar2[-1] = 0.0;
    *pdVar2 = -1.0;
    pdVar2 = pdVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->InsertionState).CurrentScopeEntryPageIndex = 0xffffffffffffffff;
  return this;
}

// FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d41e0e0

FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings> *
__thiscall
TraceServices::
FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::
FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,ILinearAllocator *param_1,double param_2)

{
  FDetailLevelDepthState<TraceServices::FTimingProfilerEvent> *pFVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  
  (this->ScopeEntries).Allocator = param_1;
  (this->Events).Allocator = param_1;
  pFVar1 = (this->InsertionState).DepthStates;
  (this->ScopeEntries).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScopeEntries).PagesArray.ArrayNum = 0;
  (this->ScopeEntries).PagesArray.ArrayMax = 0;
  (this->ScopeEntries).FirstPage = (FEventScopeEntryPage *)0x0;
  (this->ScopeEntries).LastPage = (FEventScopeEntryPage *)0x0;
  (this->ScopeEntries).TotalItemCount = 0;
  (this->Events).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).PagesArray.ArrayNum = 0;
  (this->Events).PagesArray.ArrayMax = 0;
  (this->Events).FirstPage = (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0;
  (this->Events).LastPage = (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0;
  (this->Events).TotalItemCount = 0;
  (this->InsertionState).LastTime = -1.0;
  (this->InsertionState).CurrentDepth = 0;
  this->Resolution = param_2;
  (this->ScopeEntries).PageSize = 0x10000;
  (this->Events).PageSize = 0x10000;
  (this->InsertionState).PendingDepth = -1;
  lVar3 = 0x400;
  lVar4 = 0x400;
  do {
    pFVar1->PendingScopeEnterIndex = -1;
    pFVar1->PendingEventIndex = -1;
    (pFVar1->DominatingEvent).TimerIndex = 0xffffffff;
    pFVar1->DominatingEventStartTime = 0.0;
    pFVar1->DominatingEventEndTime = 0.0;
    pFVar1->DominatingEventDuration = 0.0;
    pFVar1->EnterTime = 0.0;
    pFVar1->ExitTime = 0.0;
    pFVar1 = pFVar1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pdVar2 = &(this->InsertionState).EventStack[0].EndTime;
  do {
    pdVar2[-1] = 0.0;
    *pdVar2 = -1.0;
    pdVar2 = pdVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->InsertionState).CurrentScopeEntryPageIndex = 0xffffffffffffffff;
  return this;
}

// GetScopeEntryTime @ 14d46c7e0

double __thiscall
TraceServices::
FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetScopeEntryTime(FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                    *this,ulong64 param_1)

{
  ulonglong uVar1;
  double dVar2;
  
  uVar1 = (this->ScopeEntries).PageSize;
  dVar2 = (this->ScopeEntries).FirstPage[param_1 / uVar1].Items[param_1 % uVar1].Time;
  if (dVar2 < 0.0) {
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  return dVar2;
}

// GetScopeEntryTime @ 14d46c820

double __thiscall
TraceServices::
FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::
GetScopeEntryTime(FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *this,ulong64 param_1)

{
  ulonglong uVar1;
  double dVar2;
  
  uVar1 = (this->ScopeEntries).PageSize;
  dVar2 = (this->ScopeEntries).FirstPage[param_1 / uVar1].Items[param_1 % uVar1].Time;
  if (dVar2 < 0.0) {
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  return dVar2;
}

