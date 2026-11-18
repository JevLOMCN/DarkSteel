// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 2

// FProtocol6Stage @ 14d38fbd0

FProtocol6Stage * __thiscall
UE::Trace::FProtocol6Stage::FProtocol6Stage(FProtocol6Stage *this,FTransport *param_1)

{
  FProtocol5Stage::FProtocol5Stage((FProtocol5Stage *)this,param_1);
  *(undefined4 *)&this->field_0x58 = 6;
  *(undefined ***)this = &___7FProtocol6Stage_Trace_UE__6B_;
  return this;
}

// ExitStage @ 14d39bda0

void __thiscall
UE::Trace::FProtocol6Stage::ExitStage(FProtocol6Stage *this,FMachineContext *param_1)

{
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar1;
  char cVar2;
  wchar_t *local_38;
  undefined4 uStack_30;
  FReadAccessScope local_28;
  
  cVar2 = (**(code **)(**(longlong **)&this->field_0x20 + 0x10))();
  if (cVar2 == '\0') {
    this_00 = param_1->OnMessage;
    local_38 = L"Transport buffers are not empty at end of analysis (protocol 6)!";
    uStack_30 = 0x40;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&this_00->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

