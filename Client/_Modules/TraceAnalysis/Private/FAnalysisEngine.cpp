// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 5

// FAnalysisEngine @ 14d38f030

FAnalysisEngine * __thiscall
UE::Trace::FAnalysisEngine::FAnalysisEngine
          (FAnalysisEngine *this,TArray<UE::Trace::IAnalyzer_*,TSizedDefaultAllocator<32>_> *param_1
          ,TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
           *param_2)

{
  FImpl *pFVar1;
  
  pFVar1 = ::operator_new(0x1c0);
  if (pFVar1 != (FImpl *)0x0) {
    pFVar1 = FImpl::FImpl(pFVar1,param_1,param_2);
    this->Impl = pFVar1;
    return this;
  }
  this->Impl = (FImpl *)0x0;
  return this;
}

// ~FAnalysisEngine @ 14d392030

void __thiscall UE::Trace::FAnalysisEngine::~FAnalysisEngine(FAnalysisEngine *this)

{
  FImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_short> FVar3;
  
  pFVar1 = this->Impl;
  if (pFVar1 != (FImpl *)0x0) {
    FAnalysisMachine::CleanUp(&pFVar1->Machine);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->Machine).OnMessage);
    pFVar2 = (pFVar1->Machine).DeadStages.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Machine).StageQueue.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FVar3 = (pFVar1->Bridge).AnalyzerHub.TypeToRoute.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_short>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    pFVar2 = (pFVar1->Bridge).AnalyzerHub.Routes.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Bridge).AnalyzerHub.Analyzers.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FThreads::~FThreads(&(pFVar1->Bridge).State.Threads);
    (pFVar1->Bridge)._padding_ = (longlong)&___7FThreadInfoCallback_Trace_UE__6B_;
    ::operator_delete(pFVar1,0x1c0);
    return;
  }
  return;
}

// Begin @ 14d397ea0

void __thiscall UE::Trace::FAnalysisEngine::Begin(FAnalysisEngine *this)

{
  FImpl *pFVar1;
  FStage *local_res8 [4];
  
  pFVar1 = this->Impl;
  local_res8[0] = ::operator_new(8);
  if (local_res8[0] != (FStage *)0x0) {
    *local_res8[0] = (FStage)&___7FMagicStage_Trace_UE__6B_;
  }
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&(pFVar1->Machine).StageQueue,local_res8,0);
  FAnalysisMachine::Transition(&pFVar1->Machine);
  return;
}

// End @ 14d39b640

void __thiscall UE::Trace::FAnalysisEngine::End(FAnalysisEngine *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImpl *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = this->Impl;
  FAnalysisMachine::Transition(&pFVar3->Machine);
  pFVar4 = (pFVar3->Bridge).AnalyzerHub.Analyzers.AllocatorInstance.Data;
  iVar2 = (pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar4 + 0x10))();
    }
    pFVar4 = pFVar4 + 8;
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
  return;
}

// OnData @ 14d3a0a30

bool __thiscall UE::Trace::FAnalysisEngine::OnData(FAnalysisEngine *this,FStreamReader *param_1)

{
  FAnalysisMachine *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImpl *pFVar3;
  FStage *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  FAnalysisMachine *local_38;
  FAnalysisBridge *local_30;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *local_28;
  
  pFVar3 = this->Impl;
  this_00 = &pFVar3->Machine;
  local_30 = this_00->Bridge;
  local_28 = &(pFVar3->Machine).OnMessage;
  local_38 = this_00;
  do {
    FAnalysisMachine::CleanUp(this_00);
    if ((pFVar3->Machine).ActiveStage == (FStage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveStage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                         ,0xa35,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar4 = (pFVar3->Machine).ActiveStage;
    iVar8 = (**(code **)((longlong)*pFVar4 + 8))(pFVar4,param_1,&local_38);
  } while (iVar8 == 4);
  pFVar9 = (pFVar3->Bridge).AnalyzerHub.Analyzers.AllocatorInstance.Data;
  iVar2 = (pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum;
  uVar10 = 0;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->Bridge).AnalyzerHub.Analyzers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    uVar10 = uVar10 + (*(longlong *)pFVar9 != 0);
    pFVar9 = pFVar9 + 8;
  }
  return 1 < uVar10 && iVar8 != 0;
}

