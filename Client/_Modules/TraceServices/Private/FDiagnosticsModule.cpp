// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// GetModuleInfo @ 14d4959d0

void __thiscall
TraceServices::FDiagnosticsModule::GetModuleInfo(FDiagnosticsModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DiagnosticsModuleName,"TraceModule_Diagnostics");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = DiagnosticsModuleName;
  param_1->DisplayName = L"Diagnostics";
  return;
}

// GetLoggers @ 14d495a60

void __thiscall
TraceServices::FDiagnosticsModule::GetLoggers
          (FDiagnosticsModule *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *local_18 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18[0] = L"Diagnostics";
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(wchar_t **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// OnAnalysisBegin @ 14d495b20

void __thiscall
TraceServices::FDiagnosticsModule::OnAnalysisBegin
          (FDiagnosticsModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDiagnosticsAnalyzer *pFVar3;
  FName FVar4;
  FDiagnosticsAnalyzer *this_00;
  FDiagnosticsAnalyzer *pFVar5;
  IAnalysisSession **ppIVar6;
  FDiagnosticsProvider *pFVar7;
  FDiagnosticsProvider *local_38;
  FDiagnosticsAnalyzer *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar3 = ::operator_new(0xb0);
  pFVar5 = (FDiagnosticsAnalyzer *)0x0;
  if (pFVar3 == (FDiagnosticsAnalyzer *)0x0) {
    pFVar7 = (FDiagnosticsProvider *)&DAT_00000010;
    ppIVar6 = (IAnalysisSession **)&DAT_00000008;
    pFVar3 = pFVar5;
  }
  else {
    *(undefined4 *)&pFVar3->Session = 1;
    *(undefined4 *)((longlong)&pFVar3->Session + 4) = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDiagnosticsProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FDiagnosticsProvider::FDiagnosticsProvider((FDiagnosticsProvider *)&pFVar3->Provider,param_1);
    pFVar7 = (FDiagnosticsProvider *)&pFVar3->Provider;
    if (pFVar7 == (FDiagnosticsProvider *)0x0) {
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
  if (pFVar3 != (FDiagnosticsAnalyzer *)0x0) {
    LOCK();
    *(int *)ppIVar6 = *(int *)ppIVar6 + 1;
    UNLOCK();
  }
  local_38 = pFVar7;
  local_30 = pFVar3;
  FVar4 = GetDiagnosticsProviderName();
  (*pcVar1)(param_1,FVar4,&local_38,&local_28);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x18);
  if (this_00 != (FDiagnosticsAnalyzer *)0x0) {
    pFVar5 = FDiagnosticsAnalyzer::FDiagnosticsAnalyzer(this_00,param_1,pFVar7);
  }
  (*pcVar1)(param_1,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  return;
}

