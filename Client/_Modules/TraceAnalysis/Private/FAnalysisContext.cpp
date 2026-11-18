// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 3

// AddAnalyzer @ 14d3972f0

void __thiscall UE::Trace::FAnalysisContext::AddAnalyzer(FAnalysisContext *this,IAnalyzer *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IAnalyzer *local_18 [2];
  
  pFVar2 = (this->Analyzers).AllocatorInstance.Data;
  local_18[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Analyzers).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Analyzers).ArrayNum;
  piVar1 = &(this->Analyzers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Analyzers).ArrayNum = iVar5 + 1;
  *(IAnalyzer **)((this->Analyzers).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// Process @ 14d3a5ba0

FAnalysisProcessor __thiscall
UE::Trace::FAnalysisContext::Process(FAnalysisContext *this,IInDataStream *param_1)

{
  IInDataStream IVar1;
  FImpl *this_00;
  FRunnable FVar2;
  FRunnable in_R8;
  
  if (0 < (this->Analyzers).ArrayNum) {
    IVar1 = (IInDataStream)::operator_new(0x38);
    if (IVar1 == (IInDataStream)0x0) {
      *param_1 = (IInDataStream)0x0;
    }
    else {
      *(undefined ***)IVar1 = &___7FImpl_FAnalysisProcessor_Trace_UE__6B_;
      this_00 = ::operator_new(0x1c0);
      FVar2 = (FRunnable)0x0;
      if (this_00 != (FImpl *)0x0) {
        FVar2 = (FRunnable)FAnalysisEngine::FImpl::FImpl(this_00,&this->Analyzers,&this->OnMessage);
      }
      *(FRunnable *)((longlong)IVar1 + 8) = FVar2;
      *(FRunnable *)((longlong)IVar1 + 0x10) = in_R8;
      FVar2 = (FRunnable)FGenericPlatformProcess::GetSynchEventFromPool(true);
      *(FRunnable *)((longlong)IVar1 + 0x18) = FVar2;
      FVar2 = (FRunnable)FGenericPlatformProcess::GetSynchEventFromPool(true);
      *(FRunnable *)((longlong)IVar1 + 0x20) = FVar2;
      *(FRunnable *)((longlong)IVar1 + 0x28) = (FRunnable)0x0;
      *(undefined1 *)((longlong)IVar1 + 0x30) = 0;
      FVar2 = (FRunnable)
              FRunnableThread::Create
                        ((FRunnable *)IVar1,L"TraceAnalysis",0,TPri_Normal,0xffffffffffffffff,None);
      *(FRunnable *)((longlong)IVar1 + 0x28) = FVar2;
      if (*(char *)((longlong)IVar1 + 0x30) == '\0') {
        (**(code **)(*(longlong *)*(FRunnable *)((longlong)IVar1 + 0x20) + 0x10))();
      }
      *param_1 = IVar1;
    }
    return (FAnalysisProcessor)(FImpl *)param_1;
  }
  *param_1 = (IInDataStream)0x0;
  return (FAnalysisProcessor)(FImpl *)param_1;
}

// SetMessageDelegate @ 14d3a7d40

void __thiscall
UE::Trace::FAnalysisContext::SetMessageDelegate
          (FAnalysisContext *this,
          TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnMessage,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

