// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// GetModuleInfo @ 14d4928b0

void __thiscall TraceServices::FStatsModule::GetModuleInfo(FStatsModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StatsModuleName,"TraceModule_Stats");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = StatsModuleName;
  param_1->DisplayName = L"Stats";
  return;
}

// OnAnalysisBegin @ 14d492940

void __thiscall
TraceServices::FStatsModule::OnAnalysisBegin(FStatsModule *this,IAnalysisSession *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IEditableCounterProvider *pIVar1;
  FStatsAnalyzer *this_00;
  FStatsAnalyzer *pFVar2;
  
  pIVar1 = EditCounterProvider(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x158);
  pFVar2 = (FStatsAnalyzer *)0x0;
  if (this_00 != (FStatsAnalyzer *)0x0) {
    pFVar2 = FStatsAnalyzer::FStatsAnalyzer(this_00,param_1,pIVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d49299c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pFVar2);
  return;
}

