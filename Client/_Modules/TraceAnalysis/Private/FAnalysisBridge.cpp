// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 20

// FAnalysisBridge @ 14d38ee80

FAnalysisBridge * __thiscall
UE::Trace::FAnalysisBridge::FAnalysisBridge
          (FAnalysisBridge *this,TArray<UE::Trace::IAnalyzer_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FAnalyzerHub *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAnalysisBridge *pFVar4;
  int iVar5;
  FTraceAnalyzer *local_28;
  ForAnyElementType local_20;
  int local_18;
  int aiStack_14 [3];
  
  this->_padding_ = (longlong)&___7FAnalysisBridge_Trace_UE__6B_;
  FAnalysisState::FAnalysisState(&this->State);
  (this->TraceAnalyzer).State = &this->State;
  local_28 = &this->TraceAnalyzer;
  (this->TraceAnalyzer).ThreadInfoCallback = (FThreadInfoCallback *)this;
  (this->AnalyzerHub).TypeToRoute.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_short>)0x0;
  this_00 = &this->AnalyzerHub;
  (this_00->Analyzers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28->_padding_ = (longlong)&___7FTraceAnalyzer_Trace_UE__6B_;
  (this->AnalyzerHub).Analyzers.ArrayNum = 0;
  (this->AnalyzerHub).Analyzers.ArrayMax = 0;
  (this->AnalyzerHub).Routes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalyzerHub).Routes.ArrayNum = 0;
  (this->AnalyzerHub).Routes.ArrayMax = 0;
  (this->AnalyzerHub).TypeToRoute.ArrayNum = 0;
  (this->AnalyzerHub).TypeToRoute.ArrayMax = 0x60;
  this->ThreadInfo = (FInfo *)0x0;
  local_20.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18 = param_1->ArrayNum;
  aiStack_14[0] = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  if (((local_20.Data <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < local_20.Data + (longlong)aiStack_14[0] * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FAnalysisBridge *)(*pcVar2)();
    return pFVar4;
  }
  if (local_18 == aiStack_14[0]) {
    local_18 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_20,aiStack_14);
  }
  iVar5 = local_18 + 1;
  *(FTraceAnalyzer **)(local_20.Data + (longlong)local_18 * 8) = local_28;
  local_18 = iVar5;
  if (this_00 != (FAnalyzerHub *)&local_20) {
    pFVar1 = (this_00->Analyzers).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Analyzers).AllocatorInstance.Data = local_20.Data;
    (this->AnalyzerHub).Analyzers.ArrayNum = local_18;
    (this->AnalyzerHub).Analyzers.ArrayMax = aiStack_14[0];
    local_18 = 0;
    aiStack_14[0] = 0;
    local_20.Data = (FScriptContainerElement *)0x0;
  }
  FAnalyzerHub::BuildRoutes(this_00);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return this;
}

// DispatchLeaveScope @ 14d39b370

void __thiscall UE::Trace::FAnalysisBridge::DispatchLeaveScope(FAnalysisBridge *this)

{
  int iVar1;
  FInfo *pFVar2;
  FOnEventContext local_48;
  undefined8 local_30;
  FDispatch *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  pFVar2 = this->ThreadInfo;
  iVar1 = (pFVar2->ScopeRoutes).ArrayNum;
  if (0 < iVar1) {
    local_28 = *(FDispatch **)
                ((pFVar2->ScopeRoutes).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
    (pFVar2->ScopeRoutes).ArrayNum = iVar1 + -1;
    if (-1 < (longlong)local_28) {
      local_48.ThreadInfo = (FThreadInfo *)this->ThreadInfo;
      local_48.EventTime = (FEventTime *)&(this->State).Timing;
      local_30 = 0;
      local_48.EventData = (FEventData *)&local_30;
      local_20 = 0;
      uStack_18 = 0;
      FAnalyzerHub::OnEvent(&this->AnalyzerHub,local_28,LeaveScope,&local_48);
    }
  }
  return;
}

// EnterScope @ 14d39b810

void __thiscall UE::Trace::FAnalysisBridge::EnterScope(FAnalysisBridge *this)

{
  int *piVar1;
  FInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 local_18 [2];
  
  pFVar2 = this->ThreadInfo;
  local_18[0] = 0xffffffffffffffff;
  pFVar3 = (pFVar2->ScopeRoutes).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(pFVar2->ScopeRoutes).ArrayMax * 8))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->ScopeRoutes).ArrayNum;
  piVar1 = &(pFVar2->ScopeRoutes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar2,piVar1);
  }
  (pFVar2->ScopeRoutes).ArrayNum = iVar6 + 1;
  *(undefined8 *)((pFVar2->ScopeRoutes).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// EnterScope @ 14d39b8d0

void __thiscall UE::Trace::FAnalysisBridge::EnterScope(FAnalysisBridge *this,ulong64 param_1)

{
  long64 *plVar1;
  int *piVar2;
  FInfo *pFVar3;
  FInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong local_18 [2];
  
  pFVar3 = this->ThreadInfo;
  plVar1 = &pFVar3->PrevTimestamp;
  *plVar1 = *plVar1 + param_1;
  pFVar4 = this->ThreadInfo;
  local_18[0] = ~pFVar3->PrevTimestamp;
  pFVar5 = (pFVar4->ScopeRoutes).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5 + (longlong)(pFVar4->ScopeRoutes).ArrayMax * 8))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (pFVar4->ScopeRoutes).ArrayNum;
  piVar2 = &(pFVar4->ScopeRoutes).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,piVar2);
  }
  (pFVar4->ScopeRoutes).ArrayNum = iVar8 + 1;
  *(ulonglong *)((pFVar4->ScopeRoutes).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_18[0];
  return;
}

// EnterScopeA @ 14d39b9a0

void __thiscall UE::Trace::FAnalysisBridge::EnterScopeA(FAnalysisBridge *this,ulong64 param_1)

{
  int *piVar1;
  FInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong local_18 [2];
  
  pFVar2 = this->ThreadInfo;
  local_18[0] = ~(param_1 - (this->State).Timing.BaseTimestamp);
  pFVar3 = (pFVar2->ScopeRoutes).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(pFVar2->ScopeRoutes).ArrayMax * 8))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->ScopeRoutes).ArrayNum;
  piVar1 = &(pFVar2->ScopeRoutes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar2,piVar1);
  }
  (pFVar2->ScopeRoutes).ArrayNum = iVar6 + 1;
  *(ulonglong *)((pFVar2->ScopeRoutes).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// EnterScopeB @ 14d39ba60

void __thiscall UE::Trace::FAnalysisBridge::EnterScopeB(FAnalysisBridge *this,ulong64 param_1)

{
  int *piVar1;
  FInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong local_18 [2];
  
  pFVar2 = this->ThreadInfo;
  local_18[0] = ~param_1;
  pFVar3 = (pFVar2->ScopeRoutes).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(pFVar2->ScopeRoutes).ArrayMax * 8))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->ScopeRoutes).ArrayNum;
  piVar1 = &(pFVar2->ScopeRoutes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar2,piVar1);
  }
  (pFVar2->ScopeRoutes).ArrayNum = iVar6 + 1;
  *(ulonglong *)((pFVar2->ScopeRoutes).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// GetActiveThreadId @ 14d39c5c0

uint __thiscall UE::Trace::FAnalysisBridge::GetActiveThreadId(FAnalysisBridge *this)

{
  if (this->ThreadInfo != (FInfo *)0x0) {
    return this->ThreadInfo->ThreadId;
  }
  return 0xffffffff;
}

// GetSerial @ 14d39d390

FSerial * __thiscall UE::Trace::FAnalysisBridge::GetSerial(FAnalysisBridge *this)

{
  return &(this->State).Serial;
}

// GetState @ 14d39e4e0

FAnalysisState * __thiscall UE::Trace::FAnalysisBridge::GetState(FAnalysisBridge *this)

{
  return &this->State;
}

// GetUserUidBias @ 14d3a00d0

uint __thiscall UE::Trace::FAnalysisBridge::GetUserUidBias(FAnalysisBridge *this)

{
  return (this->State).UserUidBias;
}

// IsStillAnalyzing @ 14d3a0700

bool __thiscall UE::Trace::FAnalysisBridge::IsStillAnalyzing(FAnalysisBridge *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->AnalyzerHub).Analyzers.AllocatorInstance.Data;
  iVar2 = (this->AnalyzerHub).Analyzers.ArrayNum;
  uVar4 = 0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AnalyzerHub).Analyzers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    uVar4 = uVar4 + (*(longlong *)pFVar3 != 0);
    pFVar3 = pFVar3 + 8;
  }
  return 1 < uVar4;
}

// LeaveScope @ 14d3a0820

void __thiscall UE::Trace::FAnalysisBridge::LeaveScope(FAnalysisBridge *this)

{
  (this->State).Timing.EventTimestamp = 0;
  DispatchLeaveScope(this);
  return;
}

// LeaveScope @ 14d3a0840

void __thiscall UE::Trace::FAnalysisBridge::LeaveScope(FAnalysisBridge *this,ulong64 param_1)

{
  long64 *plVar1;
  FInfo *pFVar2;
  
  pFVar2 = this->ThreadInfo;
  plVar1 = &pFVar2->PrevTimestamp;
  *plVar1 = *plVar1 + param_1;
  (this->State).Timing.EventTimestamp = pFVar2->PrevTimestamp;
  DispatchLeaveScope(this);
  (this->State).Timing.EventTimestamp = 0;
  return;
}

// LeaveScopeA @ 14d3a0880

void __thiscall UE::Trace::FAnalysisBridge::LeaveScopeA(FAnalysisBridge *this,ulong64 param_1)

{
  (this->State).Timing.EventTimestamp = param_1 - (this->State).Timing.BaseTimestamp;
  DispatchLeaveScope(this);
  (this->State).Timing.EventTimestamp = 0;
  return;
}

// LeaveScopeB @ 14d3a08b0

void __thiscall UE::Trace::FAnalysisBridge::LeaveScopeB(FAnalysisBridge *this,ulong64 param_1)

{
  (this->State).Timing.EventTimestamp = param_1;
  DispatchLeaveScope(this);
  (this->State).Timing.EventTimestamp = 0;
  return;
}

// OnEvent @ 14d3a39c0

void __thiscall UE::Trace::FAnalysisBridge::OnEvent(FAnalysisBridge *this,FEventDataInfo *param_1)

{
  int iVar1;
  FInfo *pFVar2;
  FDispatch *pFVar3;
  FInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  EStyle EVar9;
  FOnEventContext local_38;
  
  pFVar2 = this->ThreadInfo;
  EVar9 = Normal;
  pFVar3 = param_1->Dispatch;
  iVar1 = (pFVar2->ScopeRoutes).ArrayNum;
  if (0 < iVar1) {
    uVar7 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar7 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(longlong *)
         ((pFVar2->ScopeRoutes).AllocatorInstance.Data +
         (longlong)(pFVar2->ScopeRoutes).ArrayNum * 8 + -8) < 0) {
      pFVar2 = this->ThreadInfo;
      EVar9 = EnterScope;
      iVar1 = (pFVar2->ScopeRoutes).ArrayNum;
      uVar8 = iVar1 - 1;
      uVar7 = 0;
      if ((int)uVar8 < iVar1) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = this->ThreadInfo;
      (this->State).Timing.EventTimestamp =
           ~*(ulonglong *)
             ((pFVar2->ScopeRoutes).AllocatorInstance.Data +
             (longlong)(pFVar2->ScopeRoutes).ArrayNum * 8 + -8);
      iVar1 = (pFVar4->ScopeRoutes).ArrayNum;
      uVar8 = iVar1 - 1;
      uVar7 = 0;
      if ((int)uVar8 < iVar1) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(FDispatch **)
       ((pFVar4->ScopeRoutes).AllocatorInstance.Data +
       (longlong)(pFVar4->ScopeRoutes).ArrayNum * 8 + -8) = pFVar3;
      goto LAB_14d3a3b2b;
    }
  }
  (this->State).Timing.EventTimestamp = 0;
LAB_14d3a3b2b:
  local_38.ThreadInfo = (FThreadInfo *)this->ThreadInfo;
  local_38.EventTime = (FEventTime *)&(this->State).Timing;
  local_38.EventData = (FEventData *)param_1;
  FAnalyzerHub::OnEvent(&this->AnalyzerHub,pFVar3,EVar9,&local_38);
  return;
}

// OnNewType @ 14d3a4180

void __thiscall UE::Trace::FAnalysisBridge::OnNewType(FAnalysisBridge *this,FDispatch *param_1)

{
  FAnalyzerHub::OnNewType(&this->AnalyzerHub,param_1);
  return;
}

// OnThreadInfo @ 14d3a44b0

void __thiscall UE::Trace::FAnalysisBridge::OnThreadInfo(FAnalysisBridge *this,FInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->AnalyzerHub).Analyzers.AllocatorInstance.Data;
  iVar2 = (this->AnalyzerHub).Analyzers.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AnalyzerHub).Analyzers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// Reset @ 14d3a6640

void __thiscall UE::Trace::FAnalysisBridge::Reset(FAnalysisBridge *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->AnalyzerHub).Analyzers.AllocatorInstance.Data;
  iVar2 = (this->AnalyzerHub).Analyzers.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AnalyzerHub).Analyzers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x10))();
    }
    pFVar3 = pFVar3 + 8;
  }
  FThreads::~FThreads(&(this->State).Threads);
  *(undefined8 *)&(this->State).Threads = 0;
  (this->State).Threads.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->State).Threads.Infos.ArrayNum = 0;
  (this->State).Threads.Infos.ArrayMax = 0;
  (this->State).Threads.GroupName.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->State).Threads.GroupName.ArrayNum = 0;
  (this->State).Threads.GroupName.ArrayMax = 0;
  (this->State).Timing.BaseTimestamp = 0;
  (this->State).Timing.TimestampHz = 0;
  (this->State).Timing.InvTimestampHz = 0.0;
  (this->State).Timing.EventTimestamp = 0;
  (this->State).Timing.BaseDateTimestamp = 0.0;
  (this->State).Serial.Value = 0;
  (this->State).Serial.Mask = 0;
  *(undefined8 *)&(this->State).UserUidBias = 0;
  FAnalysisState::FAnalysisState(&this->State);
  return;
}

// SetActiveThread @ 14d3a7a70

void __thiscall UE::Trace::FAnalysisBridge::SetActiveThread(FAnalysisBridge *this,uint param_1)

{
  FInfo *pFVar1;
  
  pFVar1 = FThreads::GetInfo(&(this->State).Threads,param_1);
  this->ThreadInfo = pFVar1;
  return;
}

