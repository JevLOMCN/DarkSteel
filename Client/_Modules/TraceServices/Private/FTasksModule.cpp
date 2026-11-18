// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// GetModuleInfo @ 14d490350

void __thiscall TraceServices::FTasksModule::GetModuleInfo(FTasksModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&TasksModuleName,"TraceModule_TasksProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = TasksModuleName;
  param_1->DisplayName = L"TasksProfiler";
  return;
}

// OnAnalysisBegin @ 14d4903e0

void __thiscall
TraceServices::FTasksModule::OnAnalysisBegin(FTasksModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTasksAnalyzer *pFVar3;
  FTasksAnalyzer *this_00;
  FTasksAnalyzer *pFVar4;
  IAnalysisSession **ppIVar5;
  FTasksProvider *pFVar6;
  FName local_res10;
  FTasksProvider *local_38;
  FTasksAnalyzer *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar3 = ::operator_new(0x168);
  pFVar4 = (FTasksAnalyzer *)0x0;
  if (pFVar3 == (FTasksAnalyzer *)0x0) {
    pFVar6 = (FTasksProvider *)&DAT_00000010;
    ppIVar5 = (IAnalysisSession **)&DAT_00000008;
    pFVar3 = pFVar4;
  }
  else {
    *(undefined4 *)&pFVar3->Session = 1;
    *(undefined4 *)((longlong)&pFVar3->Session + 4) = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTasksProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FTasksProvider::FTasksProvider((FTasksProvider *)&pFVar3->TasksProvider,param_1);
    pFVar6 = (FTasksProvider *)&pFVar3->TasksProvider;
    if (pFVar6 == (FTasksProvider *)0x0) {
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
    ppIVar5 = &pFVar3->Session;
    LOCK();
    *(int *)ppIVar5 = *(int *)ppIVar5 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  local_28 = 0;
  uStack_20 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (pFVar3 != (FTasksAnalyzer *)0x0) {
    LOCK();
    *(int *)ppIVar5 = *(int *)ppIVar5 + 1;
    UNLOCK();
  }
  local_38 = pFVar6;
  local_30 = pFVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"TasksProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res10 = ::Name;
  (*pcVar1)(param_1,&local_res10,&local_38,&local_28);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x18);
  if (this_00 != (FTasksAnalyzer *)0x0) {
    if (pFVar6 == (FTasksProvider *)0x0) {
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
    pFVar4 = FTasksAnalyzer::FTasksAnalyzer(this_00,param_1,pFVar6);
  }
  (*pcVar1)(param_1,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  return;
}

