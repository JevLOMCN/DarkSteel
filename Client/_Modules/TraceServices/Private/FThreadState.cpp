// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// EnterScope @ 14d3dbd90

void __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState::EnterScope
          (FThreadState *this,double param_1,FPackageExportInfo *param_2,
          ELoadTimeProfilerObjectEventType param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FPackageInfo *pFVar4;
  longlong *plVar5;
  FScopeStackEntry *pFVar6;
  
  pFVar6 = this->CpuScopeStack + this->CpuScopeStackDepth;
  this->CpuScopeStackDepth = this->CpuScopeStackDepth + 1;
  (pFVar6->Event).Export = param_2;
  if (param_2 == (FPackageExportInfo *)0x0) {
    pFVar4 = (FPackageInfo *)0x0;
  }
  else {
    pFVar4 = param_2->Package;
  }
  (pFVar6->Event).Package = pFVar4;
  (pFVar6->Event).EventType = param_3;
  uVar1 = *(undefined4 *)((longlong)&(pFVar6->Event).Package + 4);
  uVar2 = *(undefined4 *)&(pFVar6->Event).Export;
  uVar3 = *(undefined4 *)((longlong)&(pFVar6->Event).Export + 4);
  *(undefined4 *)&(this->CurrentEvent).Package = *(undefined4 *)&(pFVar6->Event).Package;
  *(undefined4 *)((longlong)&(this->CurrentEvent).Package + 4) = uVar1;
  *(undefined4 *)&(this->CurrentEvent).Export = uVar2;
  *(undefined4 *)((longlong)&(this->CurrentEvent).Export + 4) = uVar3;
  uVar1 = *(undefined4 *)&(pFVar6->Event).field_0x14;
  (this->CurrentEvent).EventType = (pFVar6->Event).EventType;
  *(undefined4 *)&(this->CurrentEvent).field_0x14 = uVar1;
  plVar5 = &this->CpuTimeline->_padding_;
                    /* WARNING: Could not recover jumptable at 0x00014d3dbdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))(plVar5,param_1,pFVar6);
  return;
}

// EnterScope @ 14d3dbe00

void __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState::EnterScope
          (FThreadState *this,double param_1,FPackageInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  FScopeStackEntry *pFVar5;
  
  pFVar5 = this->CpuScopeStack + this->CpuScopeStackDepth;
  this->CpuScopeStackDepth = this->CpuScopeStackDepth + 1;
  (pFVar5->Event).Package = param_2;
  (pFVar5->Event).Export = (FPackageExportInfo *)0x0;
  (pFVar5->Event).EventType = LoadTimeProfilerObjectEventType_None;
  uVar1 = *(undefined4 *)((longlong)&(pFVar5->Event).Package + 4);
  uVar2 = *(undefined4 *)&(pFVar5->Event).Export;
  uVar3 = *(undefined4 *)((longlong)&(pFVar5->Event).Export + 4);
  *(undefined4 *)&(this->CurrentEvent).Package = *(undefined4 *)&(pFVar5->Event).Package;
  *(undefined4 *)((longlong)&(this->CurrentEvent).Package + 4) = uVar1;
  *(undefined4 *)&(this->CurrentEvent).Export = uVar2;
  *(undefined4 *)((longlong)&(this->CurrentEvent).Export + 4) = uVar3;
  uVar1 = *(undefined4 *)&(pFVar5->Event).field_0x14;
  (this->CurrentEvent).EventType = (pFVar5->Event).EventType;
  *(undefined4 *)&(this->CurrentEvent).field_0x14 = uVar1;
  plVar4 = &this->CpuTimeline->_padding_;
                    /* WARNING: Could not recover jumptable at 0x00014d3dbe5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 8))(plVar4,param_1,pFVar5);
  return;
}

// GetCurrentExportScope @ 14d3e04b0

FPackageExportInfo * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState::GetCurrentExportScope(FThreadState *this)

{
  if (this->CpuScopeStackDepth != 0) {
    return this->CpuScopeStack[this->CpuScopeStackDepth - 1].Event.Export;
  }
  return (FPackageExportInfo *)0x0;
}

// GetCurrentScopeEventType @ 14d3e0540

ELoadTimeProfilerObjectEventType __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState::GetCurrentScopeEventType
          (FThreadState *this)

{
  if (this->CpuScopeStackDepth != 0) {
    return this->CpuScopeStack[this->CpuScopeStackDepth - 1].Event.EventType;
  }
  return LoadTimeProfilerObjectEventType_None;
}

// LeaveScope @ 14d3e6c00

void __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState::LeaveScope
          (FThreadState *this,double param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  FPackageExportInfo *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong *plVar6;
  
  if (this->CpuScopeStackDepth == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CpuScopeStackDepth > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\LoadTimeTraceAnalysis.cpp"
                       ,0x466,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->CpuScopeStackDepth = this->CpuScopeStackDepth - 1;
  plVar6 = &this->CpuTimeline->_padding_;
  (**(code **)(*plVar6 + 0x10))(plVar6,param_1);
  uVar1 = this->CpuScopeStackDepth;
  if (uVar1 != 0) {
    pFVar3 = this->CpuScopeStack[uVar1 - 1].Event.Export;
    (this->CurrentEvent).Package = this->CpuScopeStack[uVar1 - 1].Event.Package;
    (this->CurrentEvent).Export = pFVar3;
    uVar4 = *(undefined4 *)&this->CpuScopeStack[uVar1 - 1].Event.field_0x14;
    (this->CurrentEvent).EventType = this->CpuScopeStack[uVar1 - 1].Event.EventType;
    *(undefined4 *)&(this->CurrentEvent).field_0x14 = uVar4;
    return;
  }
  (this->CurrentEvent).Package = (FPackageInfo *)0x0;
  (this->CurrentEvent).Export = (FPackageExportInfo *)0x0;
  *(undefined8 *)&(this->CurrentEvent).EventType = 3;
  return;
}

