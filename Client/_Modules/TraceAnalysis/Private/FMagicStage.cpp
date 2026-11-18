// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// OnData @ 14d3a11e0

EStatus __thiscall
UE::Trace::FMagicStage::OnData(FMagicStage *this,FStreamReader *param_1,FMachineContext *param_2)

{
  int iVar1;
  FAnalysisMachine *pFVar2;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar3;
  uint uVar4;
  FStage *local_res10 [3];
  wchar_t *local_38;
  undefined4 uStack_30;
  FReadAccessScope local_28;
  
  uVar4 = param_1->Cursor + 4;
  if (param_1->End < uVar4) {
    uVar4 = 4;
    if (4 < param_1->DemandHint) {
      uVar4 = param_1->DemandHint;
    }
    param_1->DemandHint = uVar4;
    return NotEnoughData;
  }
  if ((int *)(param_1->Buffer + param_1->Cursor) == (int *)0x0) {
    return NotEnoughData;
  }
  iVar1 = *(int *)(param_1->Buffer + param_1->Cursor);
  if ((iVar1 != 0x45435254) && (iVar1 != 0x32435254)) {
    if (iVar1 == 0x54524345) {
      param_1->Cursor = uVar4;
    }
    else {
      if (iVar1 == 0x54524332) {
        param_1->Cursor = uVar4;
        pFVar2 = param_2->Machine;
        local_res10[0] = ::operator_new(8);
        if (local_res10[0] != (FStage *)0x0) {
          *local_res10[0] = (FStage)&___7FMetadataStage_Trace_UE__6B_;
        }
        TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
                  (&pFVar2->StageQueue,local_res10,0);
        FAnalysisMachine::Transition(param_2->Machine);
        return Continue;
      }
      if (iVar1 != 1) {
        local_38 = L"The file or stream was not recognized as trace stream.";
        uStack_30 = 0x36;
        goto LAB_14d3a12e3;
      }
    }
    FAnalysisMachine::QueueStage<UE::Trace::FEstablishTransportStage>(param_2->Machine);
    FAnalysisMachine::Transition(param_2->Machine);
    return Continue;
  }
  local_38 = L"Big endian traces are currently not supported.";
  uStack_30 = 0x2e;
LAB_14d3a12e3:
  this_00 = param_2->OnMessage;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&this_00->field_0x10 != 0) &&
     (plVar3 = *(longlong **)&this_00->field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,2,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return Error;
}

