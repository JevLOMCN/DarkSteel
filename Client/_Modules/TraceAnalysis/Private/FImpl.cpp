// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 11

// FImpl @ 14d38f540

FImpl * __thiscall
UE::Trace::FAnalysisEngine::FImpl::FImpl
          (FImpl *this,TArray<UE::Trace::IAnalyzer_*,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
          *param_2)

{
  FAnalysisState *this_00;
  FAnalyzerHub *this_01;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_02;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FImpl *pFVar4;
  int iVar5;
  FTraceAnalyzer *local_28;
  ForAnyElementType local_20;
  int local_18;
  int aiStack_14 [3];
  
  this_00 = &(this->Bridge).State;
  (this->Bridge)._padding_ = (longlong)&___7FAnalysisBridge_Trace_UE__6B_;
  FAnalysisState::FAnalysisState(this_00);
  (this->Bridge).TraceAnalyzer.State = this_00;
  local_28 = &(this->Bridge).TraceAnalyzer;
  (this->Bridge).TraceAnalyzer.ThreadInfoCallback = (FThreadInfoCallback *)this;
  (this->Bridge).AnalyzerHub.TypeToRoute.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_short>)0x0;
  this_01 = &(this->Bridge).AnalyzerHub;
  (this_01->Analyzers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28->_padding_ = (longlong)&___7FTraceAnalyzer_Trace_UE__6B_;
  (this->Bridge).AnalyzerHub.Analyzers.ArrayNum = 0;
  (this->Bridge).AnalyzerHub.Analyzers.ArrayMax = 0;
  (this->Bridge).AnalyzerHub.Routes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bridge).AnalyzerHub.Routes.ArrayNum = 0;
  (this->Bridge).AnalyzerHub.Routes.ArrayMax = 0;
  (this->Bridge).AnalyzerHub.TypeToRoute.ArrayNum = 0;
  (this->Bridge).AnalyzerHub.TypeToRoute.ArrayMax = 0x60;
  (this->Bridge).ThreadInfo = (FInfo *)0x0;
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
    pFVar4 = (FImpl *)(*pcVar2)();
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
  if (this_01 != (FAnalyzerHub *)&local_20) {
    pFVar1 = (this_01->Analyzers).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_01->Analyzers).AllocatorInstance.Data = local_20.Data;
    (this->Bridge).AnalyzerHub.Analyzers.ArrayNum = local_18;
    (this->Bridge).AnalyzerHub.Analyzers.ArrayMax = aiStack_14[0];
    local_18 = 0;
    aiStack_14[0] = 0;
    local_20.Data = (FScriptContainerElement *)0x0;
  }
  FAnalyzerHub::BuildRoutes(this_01);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  this_02 = &(this->Machine).OnMessage;
  (this->Machine).Bridge = &this->Bridge;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->Machine).OnMessage.field_0x8 = 0;
  *(undefined4 *)&(this->Machine).OnMessage.field_0x10 = 0;
  (this->Machine).ActiveStage = (FStage *)0x0;
  (this->Machine).StageQueue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Machine).StageQueue.ArrayNum = 0;
  (this->Machine).StageQueue.ArrayMax = 0;
  (this->Machine).DeadStages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Machine).DeadStages.ArrayNum = 0;
  (this->Machine).DeadStages.ArrayMax = 0;
  TDelegate<void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(this_02,param_2);
  return this;
}

// FImpl @ 14d38f740

FImpl * __thiscall
UE::Trace::FAnalysisProcessor::FImpl::FImpl
          (FImpl *this,IInDataStream *param_1,
          TArray<UE::Trace::IAnalyzer_*,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
          *param_3)

{
  FImpl *this_00;
  FImpl *pFVar1;
  FEvent *pFVar2;
  FRunnableThread *pFVar3;
  
  this->_padding_ = (longlong)&___7FImpl_FAnalysisProcessor_Trace_UE__6B_;
  this_00 = ::operator_new(0x1c0);
  pFVar1 = (FImpl *)0x0;
  if (this_00 != (FImpl *)0x0) {
    pFVar1 = FAnalysisEngine::FImpl::FImpl(this_00,param_2,param_3);
  }
  (this->AnalysisEngine).Impl = pFVar1;
  this->DataStream = param_1;
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->StopEvent = pFVar2;
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->UnpausedEvent = pFVar2;
  this->Thread = (FRunnableThread *)0x0;
  this->bComplete = false;
  pFVar3 = FRunnableThread::Create
                     ((FRunnable *)this,L"TraceAnalysis",0,TPri_Normal,0xffffffffffffffff,None);
  this->Thread = pFVar3;
  if (this->bComplete == false) {
    (**(code **)(this->UnpausedEvent->_padding_ + 0x10))();
  }
  return this;
}

// ~FImpl @ 14d392390

void __thiscall UE::Trace::FAnalysisProcessor::FImpl::~FImpl(FImpl *this)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FImpl_FAnalysisProcessor_Trace_UE__6B_;
  if (this->bComplete == false) {
    (**(code **)(this->StopEvent->_padding_ + 0x10))();
    if (this->bComplete == false) {
      (**(code **)(this->Thread->_padding_ + 0x18))(this->Thread,1);
      pFVar1 = this->Thread;
      if (pFVar1 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
      }
      this->Thread = (FRunnableThread *)0x0;
    }
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->UnpausedEvent);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->StopEvent);
  FAnalysisEngine::~FAnalysisEngine(&this->AnalysisEngine);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Begin @ 14d397f00

void __thiscall UE::Trace::FAnalysisEngine::FImpl::Begin(FImpl *this)

{
  FStage *local_res8 [4];
  
  local_res8[0] = ::operator_new(8);
  if (local_res8[0] != (FStage *)0x0) {
    *local_res8[0] = (FStage)&___7FMagicStage_Trace_UE__6B_;
  }
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&(this->Machine).StageQueue,local_res8,0);
  FAnalysisMachine::Transition(&this->Machine);
  return;
}

// End @ 14d39b760

void __thiscall UE::Trace::FAnalysisEngine::FImpl::End(FImpl *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  FAnalysisMachine::Transition(&this->Machine);
  pFVar3 = (this->Bridge).AnalyzerHub.Analyzers.AllocatorInstance.Data;
  iVar2 = (this->Bridge).AnalyzerHub.Analyzers.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Bridge).AnalyzerHub.Analyzers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x10))();
    }
    pFVar3 = pFVar3 + 8;
  }
  FThreads::~FThreads(&(this->Bridge).State.Threads);
  *(undefined8 *)&(this->Bridge).State.Threads = 0;
  (this->Bridge).State.Threads.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bridge).State.Threads.Infos.ArrayNum = 0;
  (this->Bridge).State.Threads.Infos.ArrayMax = 0;
  (this->Bridge).State.Threads.GroupName.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bridge).State.Threads.GroupName.ArrayNum = 0;
  (this->Bridge).State.Threads.GroupName.ArrayMax = 0;
  (this->Bridge).State.Timing.BaseTimestamp = 0;
  (this->Bridge).State.Timing.TimestampHz = 0;
  (this->Bridge).State.Timing.InvTimestampHz = 0.0;
  (this->Bridge).State.Timing.EventTimestamp = 0;
  (this->Bridge).State.Timing.BaseDateTimestamp = 0.0;
  (this->Bridge).State.Serial.Value = 0;
  (this->Bridge).State.Serial.Mask = 0;
  *(undefined8 *)&(this->Bridge).State.UserUidBias = 0;
  FAnalysisState::FAnalysisState(&(this->Bridge).State);
  return;
}

// IsActive @ 14d3a05b0

bool __thiscall UE::Trace::FAnalysisProcessor::FImpl::IsActive(FImpl *this)

{
  return this->bComplete == false;
}

// OnData @ 14d3a10e0

bool __thiscall UE::Trace::FAnalysisEngine::FImpl::OnData(FImpl *this,FStreamReader *param_1)

{
  FAnalysisMachine *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FStage *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  FAnalysisMachine *local_38;
  FAnalysisBridge *local_30;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *local_28;
  
  this_00 = &this->Machine;
  local_30 = this_00->Bridge;
  local_28 = &(this->Machine).OnMessage;
  local_38 = this_00;
  do {
    FAnalysisMachine::CleanUp(this_00);
    if ((this->Machine).ActiveStage == (FStage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveStage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                         ,0xa35,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar3 = (this->Machine).ActiveStage;
    iVar7 = (**(code **)((longlong)*pFVar3 + 8))(pFVar3,param_1,&local_38);
  } while (iVar7 == 4);
  pFVar8 = (this->Bridge).AnalyzerHub.Analyzers.AllocatorInstance.Data;
  iVar2 = (this->Bridge).AnalyzerHub.Analyzers.ArrayNum;
  uVar9 = 0;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Bridge).AnalyzerHub.Analyzers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    uVar9 = uVar9 + (*(longlong *)pFVar8 != 0);
    pFVar8 = pFVar8 + 8;
  }
  return 1 < uVar9 && iVar7 != 0;
}

// PauseAnalysis @ 14d3a5b70

void __thiscall UE::Trace::FAnalysisProcessor::FImpl::PauseAnalysis(FImpl *this,bool param_1)

{
  longlong lVar1;
  
  if (this->bComplete != false) {
    return;
  }
  lVar1 = this->UnpausedEvent->_padding_;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014d3a5b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d3a5b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))();
  return;
}

// Run @ 14d3a6ba0

uint __thiscall UE::Trace::FAnalysisProcessor::FImpl::Run(FImpl *this)

{
  FAnalysisMachine *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImpl *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FStage *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  FStage *local_res20;
  FMemScope local_90;
  FAnalysisMachine *local_88;
  FAnalysisBridge *local_80;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *local_78;
  FStreamBuffer local_70;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name39,L"TraceAnalysis");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name39,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name39,true);
  do {
    cVar5 = (**(code **)(this->StopEvent->_padding_ + 0x20))(this->StopEvent,0);
    if (cVar5 != '\0') break;
    cVar5 = (**(code **)((longlong)*this->DataStream + 0x18))();
  } while (cVar5 == '\0');
  pFVar3 = (this->AnalysisEngine).Impl;
  pFVar9 = ::operator_new(8);
  local_res20 = (FStage *)0x0;
  if (pFVar9 != (FStage *)0x0) {
    *pFVar9 = (FStage)&___7FMagicStage_Trace_UE__6B_;
    local_res20 = pFVar9;
  }
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&(pFVar3->Machine).StageQueue,&local_res20,0);
  FAnalysisMachine::Transition(&pFVar3->Machine);
  local_70._padding_ = 0;
  local_70._padding_._0_4_ = 0;
  local_70.BufferSize = 0x400000;
  local_70._padding_ = (longlong)FMemory::Malloc(0x400000,0);
  cVar5 = (**(code **)(this->StopEvent->_padding_ + 0x20))(this->StopEvent,0,1);
  if (cVar5 == '\0') {
    while( true ) {
      (**(code **)(this->UnpausedEvent->_padding_ + 0x20))(this->UnpausedEvent,0xffffffff,0);
      FStreamBuffer::Consolidate(&local_70);
      iVar7 = (**(code **)((longlong)*this->DataStream + 8))
                        (this->DataStream,(ulonglong)(uint)local_70._padding_ + local_70._padding_,
                         local_70.BufferSize - (uint)local_70._padding_);
      if (iVar7 < 1) break;
      local_70._padding_._0_4_ = (uint)local_70._padding_ + iVar7;
      pFVar3 = (this->AnalysisEngine).Impl;
      this_00 = &pFVar3->Machine;
      local_80 = this_00->Bridge;
      local_78 = &(pFVar3->Machine).OnMessage;
      local_88 = this_00;
      do {
        FAnalysisMachine::CleanUp(this_00);
        if (((pFVar3->Machine).ActiveStage == (FStage *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ActiveStage != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                               ,0xa35,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        pFVar9 = (pFVar3->Machine).ActiveStage;
        iVar7 = (**(code **)((longlong)*pFVar9 + 8))(pFVar9,&local_70,&local_88);
      } while (iVar7 == 4);
      pFVar10 = (pFVar3->Bridge).AnalyzerHub.Analyzers.AllocatorInstance.Data;
      iVar2 = (pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum;
      uVar8 = 0;
      pFVar1 = pFVar10 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Trace::IAnalyzer_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar1) break;
        uVar8 = uVar8 + (*(longlong *)pFVar10 != 0);
        pFVar10 = pFVar10 + 8;
      }
      if ((iVar7 == 0 || uVar8 < 2) ||
         (cVar5 = (**(code **)(this->StopEvent->_padding_ + 0x20))(this->StopEvent,0), cVar5 != '\0'
         )) break;
    }
  }
  pFVar3 = (this->AnalysisEngine).Impl;
  FAnalysisMachine::Transition(&pFVar3->Machine);
  pFVar10 = (pFVar3->Bridge).AnalyzerHub.Analyzers.AllocatorInstance.Data;
  iVar7 = (pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar7 * 8;
  while( true ) {
    if ((pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum != iVar7) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar1) break;
    if (*(longlong **)pFVar10 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar10 + 0x10))();
    }
    pFVar10 = pFVar10 + 8;
  }
  FThreads::~FThreads(&(pFVar3->Bridge).State.Threads);
  *(undefined8 *)&(pFVar3->Bridge).State.Threads = 0;
  (pFVar3->Bridge).State.Threads.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Bridge).State.Threads.Infos.ArrayNum = 0;
  (pFVar3->Bridge).State.Threads.Infos.ArrayMax = 0;
  (pFVar3->Bridge).State.Threads.GroupName.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Bridge).State.Threads.GroupName.ArrayNum = 0;
  (pFVar3->Bridge).State.Threads.GroupName.ArrayMax = 0;
  (pFVar3->Bridge).State.Timing.BaseTimestamp = 0;
  (pFVar3->Bridge).State.Timing.TimestampHz = 0;
  (pFVar3->Bridge).State.Timing.InvTimestampHz = 0.0;
  (pFVar3->Bridge).State.Timing.EventTimestamp = 0;
  (pFVar3->Bridge).State.Timing.BaseDateTimestamp = 0.0;
  (pFVar3->Bridge).State.Serial.Value = 0;
  (pFVar3->Bridge).State.Serial.Mask = 0;
  *(undefined8 *)&(pFVar3->Bridge).State.UserUidBias = 0;
  FAnalysisState::FAnalysisState(&(pFVar3->Bridge).State);
  this->bComplete = true;
  FMemory::Free((void *)local_70._padding_);
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res18);
  return 0;
}

// StopAnalysis @ 14d3a8820

void __thiscall UE::Trace::FAnalysisProcessor::FImpl::StopAnalysis(FImpl *this)

{
  FRunnableThread *pFVar1;
  
  if (this->bComplete == false) {
    (**(code **)(this->StopEvent->_padding_ + 0x10))();
    if (this->bComplete == false) {
      (**(code **)(this->Thread->_padding_ + 0x18))(this->Thread,1);
      pFVar1 = this->Thread;
      if (pFVar1 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
      }
      this->Thread = (FRunnableThread *)0x0;
    }
  }
  return;
}

// WaitOnAnalysis @ 14d3a8b80

void __thiscall UE::Trace::FAnalysisProcessor::FImpl::WaitOnAnalysis(FImpl *this)

{
  FRunnableThread *pFVar1;
  
  if (this->bComplete == false) {
    (**(code **)(this->Thread->_padding_ + 0x18))(this->Thread,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  return;
}

