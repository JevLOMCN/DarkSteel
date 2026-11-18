// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// GetModuleInfo @ 14d492f20

void __thiscall
TraceServices::FPlatformEventsModule::GetModuleInfo
          (FPlatformEventsModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&PlatformEventsModuleName,"TraceModule_PlatformEvents");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = PlatformEventsModuleName;
  param_1->DisplayName = L"PlatformEvents";
  return;
}

// OnAnalysisBegin @ 14d492fb0

void __thiscall
TraceServices::FPlatformEventsModule::OnAnalysisBegin
          (FPlatformEventsModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlatformEventTraceAnalyzer *pFVar3;
  FPlatformEventTraceAnalyzer *pFVar4;
  FName FVar5;
  FPlatformEventTraceAnalyzer *this_00;
  FPlatformEventTraceAnalyzer *pFVar6;
  IAnalysisSession **ppIVar7;
  FContextSwitchesProvider *pFVar8;
  FStackSamplesProvider *pFVar9;
  FContextSwitchesProvider *local_78;
  FPlatformEventTraceAnalyzer *local_70;
  FStackSamplesProvider *local_68;
  FPlatformEventTraceAnalyzer *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pFVar3 = ::operator_new(0x138);
  pFVar6 = (FPlatformEventTraceAnalyzer *)0x0;
  pFVar9 = (FStackSamplesProvider *)&DAT_00000010;
  if (pFVar3 == (FPlatformEventTraceAnalyzer *)0x0) {
    pFVar8 = (FContextSwitchesProvider *)&DAT_00000010;
    pFVar3 = pFVar6;
  }
  else {
    *(undefined4 *)&pFVar3->Session = 1;
    *(undefined4 *)((longlong)&pFVar3->Session + 4) = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFContextSwitchesProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FContextSwitchesProvider::FContextSwitchesProvider
              ((FContextSwitchesProvider *)&pFVar3->ContextSwitchesProvider,param_1);
    pFVar8 = (FContextSwitchesProvider *)&pFVar3->ContextSwitchesProvider;
    if (pFVar8 == (FContextSwitchesProvider *)0x0) {
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
    LOCK();
    *(int *)&pFVar3->Session = *(int *)&pFVar3->Session + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  pFVar4 = ::operator_new(0x1e0);
  if (pFVar4 == (FPlatformEventTraceAnalyzer *)0x0) {
    ppIVar7 = (IAnalysisSession **)&DAT_00000008;
    pFVar4 = pFVar6;
  }
  else {
    *(undefined4 *)&pFVar4->Session = 1;
    *(undefined4 *)((longlong)&pFVar4->Session + 4) = 1;
    pFVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStackSamplesProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FStackSamplesProvider::FStackSamplesProvider
              ((FStackSamplesProvider *)&pFVar4->ContextSwitchesProvider,param_1);
    pFVar9 = (FStackSamplesProvider *)&pFVar4->ContextSwitchesProvider;
    if (pFVar9 == (FStackSamplesProvider *)0x0) {
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
    ppIVar7 = &pFVar4->Session;
    LOCK();
    *(int *)ppIVar7 = *(int *)ppIVar7 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  local_58 = 0;
  uStack_50 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (pFVar3 != (FPlatformEventTraceAnalyzer *)0x0) {
    LOCK();
    *(int *)&pFVar3->Session = *(int *)&pFVar3->Session + 1;
    UNLOCK();
  }
  local_78 = pFVar8;
  local_70 = pFVar3;
  FVar5 = GetContextSwitchesProviderName();
  (*pcVar1)(param_1,FVar5,&local_78,&local_58);
  local_48 = 0;
  uStack_40 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (pFVar4 != (FPlatformEventTraceAnalyzer *)0x0) {
    LOCK();
    *(int *)ppIVar7 = *(int *)ppIVar7 + 1;
    UNLOCK();
  }
  local_68 = pFVar9;
  local_60 = pFVar4;
  FVar5 = GetStackSamplesProviderName();
  (*pcVar1)(param_1,FVar5,&local_68,&local_48);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x20);
  if (this_00 != (FPlatformEventTraceAnalyzer *)0x0) {
    if (pFVar9 == (FStackSamplesProvider *)0x0) {
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
    if (pFVar8 == (FContextSwitchesProvider *)0x0) {
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
    pFVar6 = FPlatformEventTraceAnalyzer::FPlatformEventTraceAnalyzer(this_00,param_1,pFVar8,pFVar9)
    ;
  }
  (*pcVar1)(param_1,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  return;
}

