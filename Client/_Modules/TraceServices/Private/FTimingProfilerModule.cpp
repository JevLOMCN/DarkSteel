// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// GetModuleInfo @ 14d493580

void __thiscall
TraceServices::FTimingProfilerModule::GetModuleInfo
          (FTimingProfilerModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&TimingProfilerModuleName,"TraceModule_TimingProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = TimingProfilerModuleName;
  param_1->DisplayName = L"Timing";
  return;
}

// GetLoggers @ 14d493610

void __thiscall
TraceServices::FTimingProfilerModule::GetLoggers
          (FTimingProfilerModule *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *local_18;
  wchar_t *local_10;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18 = L"CpuProfiler";
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(wchar_t **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_10 = L"GpuProfiler";
  if (pFVar1 <= (FScriptContainerElement *)&local_10) {
    if ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8) {
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
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(wchar_t **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
  return;
}

// OnAnalysisBegin @ 14d493780

void __thiscall
TraceServices::FTimingProfilerModule::OnAnalysisBegin
          (FTimingProfilerModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGpuProfilerAnalyzer *pFVar3;
  FCpuProfilerAnalyzer *this_00;
  FGpuProfilerAnalyzer *pFVar4;
  FOldGpuProfilerAnalyzer *this_01;
  FGpuProfilerAnalyzer *this_02;
  IEditableCounterProvider *pIVar5;
  FVerseAnalyzer *this_03;
  FGpuProfilerAnalyzer *pFVar6;
  FAnalysisSession **ppFVar7;
  FTimingProfilerProvider *pFVar8;
  FName local_res10;
  IEditableThreadProvider *local_res18;
  FTimingProfilerProvider *local_58;
  FGpuProfilerAnalyzer *local_50;
  FGpuProfilerAnalyzer *local_48;
  FGpuProfilerAnalyzer *local_40;
  
  local_res18 = EditThreadProvider(param_1);
  pFVar3 = ::operator_new(0x1a8);
  pFVar6 = (FGpuProfilerAnalyzer *)0x0;
  if (pFVar3 == (FGpuProfilerAnalyzer *)0x0) {
    pFVar8 = (FTimingProfilerProvider *)&DAT_00000010;
    ppFVar7 = (FAnalysisSession **)&DAT_00000008;
    pFVar3 = pFVar6;
  }
  else {
    *(undefined4 *)&pFVar3->Session = 1;
    *(undefined4 *)((longlong)&pFVar3->Session + 4) = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTimingProfilerProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FTimingProfilerProvider::FTimingProfilerProvider
              ((FTimingProfilerProvider *)&pFVar3->TimingProfilerProvider,param_1);
    pFVar8 = (FTimingProfilerProvider *)&pFVar3->TimingProfilerProvider;
    if ((pFVar8 == (FTimingProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ppFVar7 = &pFVar3->Session;
    LOCK();
    *(int *)ppFVar7 = *(int *)ppFVar7 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  local_48 = (FGpuProfilerAnalyzer *)&pFVar8->_padding_;
  if (pFVar8 == (FTimingProfilerProvider *)0x0) {
    local_48 = pFVar6;
  }
  if (pFVar3 != (FGpuProfilerAnalyzer *)0x0) {
    LOCK();
    *(int *)ppFVar7 = *(int *)ppFVar7 + 1;
    UNLOCK();
    LOCK();
    *(int *)ppFVar7 = *(int *)ppFVar7 + 1;
    UNLOCK();
  }
  local_58 = pFVar8;
  local_50 = pFVar3;
  local_40 = pFVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"TimingProfilerProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_res10 = ::Name;
  (*pcVar1)(param_1,&local_res10,&local_58,&local_48);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(400);
  pFVar4 = pFVar6;
  if (this_00 != (FCpuProfilerAnalyzer *)0x0) {
    if ((pFVar8 == (FTimingProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4 = (FGpuProfilerAnalyzer *)
             FCpuProfilerAnalyzer::FCpuProfilerAnalyzer
                       (this_00,param_1,(IEditableTimingProfilerProvider *)&pFVar8->_padding_,
                        local_res18);
  }
  (*pcVar1)(param_1,pFVar4);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_01 = ::operator_new(0x80);
  pFVar4 = pFVar6;
  if (this_01 != (FOldGpuProfilerAnalyzer *)0x0) {
    if ((pFVar8 == (FTimingProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4 = (FGpuProfilerAnalyzer *)
             FOldGpuProfilerAnalyzer::FOldGpuProfilerAnalyzer
                       (this_01,(FAnalysisSession *)param_1,pFVar8);
  }
  (*pcVar1)(param_1,pFVar4);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_02 = ::operator_new(0x1a8);
  pFVar4 = pFVar6;
  if (this_02 != (FGpuProfilerAnalyzer *)0x0) {
    pIVar5 = EditCounterProvider(param_1);
    if ((pFVar8 == (FTimingProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4 = FGpuProfilerAnalyzer::FGpuProfilerAnalyzer
                       (this_02,(FAnalysisSession *)param_1,pFVar8,pIVar5);
  }
  (*pcVar1)(param_1,pFVar4);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_03 = ::operator_new(0x98);
  if (this_03 != (FVerseAnalyzer *)0x0) {
    if ((pFVar8 == (FTimingProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = (FGpuProfilerAnalyzer *)FVerseAnalyzer::FVerseAnalyzer(this_03,param_1,pFVar8);
  }
  (*pcVar1)(param_1,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  return;
}

