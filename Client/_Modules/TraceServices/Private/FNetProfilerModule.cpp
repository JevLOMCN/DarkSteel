// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// GetModuleInfo @ 14d4929b0

void __thiscall
TraceServices::FNetProfilerModule::GetModuleInfo(FNetProfilerModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ModuleName,"TraceModule_NetProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = ::ModuleName;
  param_1->DisplayName = L"NetProfiler";
  return;
}

// OnAnalysisBegin @ 14d492a40

void __thiscall
TraceServices::FNetProfilerModule::OnAnalysisBegin
          (FNetProfilerModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNetTraceAnalyzer *pFVar3;
  FName FVar4;
  FNetTraceAnalyzer *this_00;
  FNetTraceAnalyzer *pFVar5;
  IAnalysisSession **ppIVar6;
  FNetProfilerProvider *pFVar7;
  FNetProfilerProvider *local_38;
  FNetTraceAnalyzer *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar3 = ::operator_new(0xa38);
  pFVar5 = (FNetTraceAnalyzer *)0x0;
  if (pFVar3 == (FNetTraceAnalyzer *)0x0) {
    pFVar7 = (FNetProfilerProvider *)&DAT_00000010;
    ppIVar6 = (IAnalysisSession **)&DAT_00000008;
    pFVar3 = pFVar5;
  }
  else {
    *(undefined4 *)&pFVar3->Session = 1;
    *(undefined4 *)((longlong)&pFVar3->Session + 4) = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNetProfilerProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FNetProfilerProvider::FNetProfilerProvider
              ((FNetProfilerProvider *)&pFVar3->NetProfilerProvider,param_1);
    pFVar7 = (FNetProfilerProvider *)&pFVar3->NetProfilerProvider;
    if (pFVar7 == (FNetProfilerProvider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ppIVar6 = &pFVar3->Session;
    LOCK();
    *(int *)ppIVar6 = *(int *)ppIVar6 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  local_28 = 0;
  uStack_20 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (pFVar3 != (FNetTraceAnalyzer *)0x0) {
    LOCK();
    *(int *)ppIVar6 = *(int *)ppIVar6 + 1;
    UNLOCK();
  }
  local_38 = pFVar7;
  local_30 = pFVar3;
  FVar4 = GetNetProfilerProviderName();
  (*pcVar1)(param_1,FVar4,&local_38,&local_28);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x180);
  if (this_00 != (FNetTraceAnalyzer *)0x0) {
    if (pFVar7 == (FNetProfilerProvider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = FNetTraceAnalyzer::FNetTraceAnalyzer(this_00,param_1,pFVar7);
  }
  (*pcVar1)(param_1,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  return;
}

