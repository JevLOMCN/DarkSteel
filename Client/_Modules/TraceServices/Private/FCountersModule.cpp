// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// GetModuleInfo @ 14d4926e0

void __thiscall
TraceServices::FCountersModule::GetModuleInfo(FCountersModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CountersModuleName,"TraceModule_Counters");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = CountersModuleName;
  param_1->DisplayName = L"Counters";
  return;
}

// GetLoggers @ 14d492770

void __thiscall
TraceServices::FCountersModule::GetLoggers
          (FCountersModule *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *local_18 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18[0] = L"Counters";
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

// OnAnalysisBegin @ 14d492830

void __thiscall
TraceServices::FCountersModule::OnAnalysisBegin(FCountersModule *this,IAnalysisSession *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IEditableCounterProvider *pIVar1;
  FCountersAnalyzer *this_00;
  FCountersAnalyzer *pFVar2;
  
  pIVar1 = EditCounterProvider(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x68);
  pFVar2 = (FCountersAnalyzer *)0x0;
  if (this_00 != (FCountersAnalyzer *)0x0) {
    pFVar2 = FCountersAnalyzer::FCountersAnalyzer(this_00,param_1,pIVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d49288c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pFVar2);
  return;
}

// GenerateReports @ 14d4928a0

void __thiscall
TraceServices::FCountersModule::GenerateReports
          (FCountersModule *this,IAnalysisSession *param_1,wchar_t *param_2,wchar_t *param_3)

{
  return;
}

