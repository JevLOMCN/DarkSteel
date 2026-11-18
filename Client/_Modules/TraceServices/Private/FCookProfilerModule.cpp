// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// GetModuleInfo @ 14d493220

void __thiscall
TraceServices::FCookProfilerModule::GetModuleInfo(FCookProfilerModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CookProfilerModuleName,"TraceModule_CookProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = CookProfilerModuleName;
  param_1->DisplayName = L"Cook Profiling";
  return;
}

// GetLoggers @ 14d4932b0

void __thiscall
TraceServices::FCookProfilerModule::GetLoggers
          (FCookProfilerModule *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *local_18 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18[0] = L"CookProfiler";
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

// OnAnalysisBegin @ 14d493370

void __thiscall
TraceServices::FCookProfilerModule::OnAnalysisBegin
          (FCookProfilerModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCookAnalyzer *pFVar3;
  FCookAnalyzer *this_00;
  FCookAnalyzer *pFVar4;
  IAnalysisSession **ppIVar5;
  FCookProfilerProvider *pFVar6;
  FName local_res10;
  FCookProfilerProvider *local_48;
  FCookAnalyzer *local_40;
  FCookAnalyzer *local_38;
  FCookAnalyzer *local_30;
  
  pFVar3 = ::operator_new(0xe8);
  pFVar4 = (FCookAnalyzer *)0x0;
  if (pFVar3 == (FCookAnalyzer *)0x0) {
    pFVar6 = (FCookProfilerProvider *)&DAT_00000010;
    ppIVar5 = (IAnalysisSession **)&DAT_00000008;
    pFVar3 = pFVar4;
  }
  else {
    *(undefined4 *)&pFVar3->Session = 1;
    *(undefined4 *)((longlong)&pFVar3->Session + 4) = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCookProfilerProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FCookProfilerProvider::FCookProfilerProvider
              ((FCookProfilerProvider *)&pFVar3->CookProfilerProvider,param_1);
    pFVar6 = (FCookProfilerProvider *)&pFVar3->CookProfilerProvider;
    if ((pFVar6 == (FCookProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ppIVar5 = &pFVar3->Session;
    LOCK();
    *(int *)ppIVar5 = *(int *)ppIVar5 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  local_38 = (FCookAnalyzer *)&pFVar6->_padding_;
  if (pFVar6 == (FCookProfilerProvider *)0x0) {
    local_38 = pFVar4;
  }
  if (pFVar3 != (FCookAnalyzer *)0x0) {
    LOCK();
    *(int *)ppIVar5 = *(int *)ppIVar5 + 1;
    UNLOCK();
    LOCK();
    *(int *)ppIVar5 = *(int *)ppIVar5 + 1;
    UNLOCK();
  }
  local_48 = pFVar6;
  local_40 = pFVar3;
  local_30 = pFVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"CookProfilerProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_res10 = ::Name;
  (*pcVar1)(param_1,&local_res10,&local_48,&local_38);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x18);
  if (this_00 != (FCookAnalyzer *)0x0) {
    if ((pFVar6 == (FCookProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4 = FCookAnalyzer::FCookAnalyzer(this_00,param_1,pFVar6);
  }
  (*pcVar1)(param_1,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  return;
}

