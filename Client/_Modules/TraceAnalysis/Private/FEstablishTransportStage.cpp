// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// OnData @ 14d3a0c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

EStatus __thiscall
UE::Trace::FEstablishTransportStage::OnData
          (FEstablishTransportStage *this,FStreamReader *param_1,FMachineContext *param_2)

{
  uchar uVar1;
  byte bVar2;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *pTVar3;
  longlong *plVar4;
  uint uVar5;
  FProtocol5Stage *pFVar6;
  FTidPacketTransport *this_00;
  FProtocol5Stage *pFVar7;
  FProtocol2Stage *this_01;
  FProtocol5Stage *pFVar8;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_> *this_02;
  uchar *puVar9;
  FAnalysisMachine *pFVar10;
  undefined1 auStack_1a8 [32];
  FProtocol5Stage *local_188;
  undefined4 uStack_180;
  FReadAccessScope local_178;
  TStringBuilderBase<wchar_t> local_158;
  FProtocol5Stage local_138 [2];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (param_1->End < param_1->Cursor + 2) {
    uVar5 = 2;
    if (2 < param_1->DemandHint) {
      uVar5 = param_1->DemandHint;
    }
    param_1->DemandHint = uVar5;
    return NotEnoughData;
  }
  puVar9 = param_1->Buffer + param_1->Cursor;
  if (puVar9 == (uchar *)0x0) {
    return NotEnoughData;
  }
  uVar1 = *puVar9;
  bVar2 = puVar9[1];
  pFVar8 = (FProtocol5Stage *)0x0;
  pFVar7 = pFVar8;
  if (uVar1 == '\x01') {
    pFVar6 = ::operator_new(0x10);
    if (pFVar6 != (FProtocol5Stage *)0x0) {
      (pFVar6->TypeRegistry).TypeInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar6->_padding_ = (longlong)&___7FTransport_Trace_UE__6B_;
      pFVar7 = pFVar6;
    }
  }
  else if (uVar1 == '\x02') {
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FProtocol5Stage *)0x0) {
      (pFVar6->TypeRegistry).TypeInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)&(pFVar6->TypeRegistry).TypeInfos.ArrayNum = 0;
      (((TArray<UE::Trace::FTidPacketTransport::FThreadStream,TSizedDefaultAllocator<32>_> *)
       &pFVar6->BaseTransport)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar6->Transport = (FTidPacketTransport *)0x0;
      pFVar6->_padding_ = (longlong)&___7FPacketTransport_Trace_UE__6B_;
      pFVar7 = pFVar6;
    }
  }
  else if (uVar1 == '\x03') {
    this_00 = ::operator_new(0x28);
    if (this_00 != (FTidPacketTransport *)0x0) {
      pFVar7 = (FProtocol5Stage *)FTidPacketTransport::FTidPacketTransport(this_00);
    }
  }
  else {
    if (uVar1 != '\x04') {
      local_158.Base = (wchar_t *)local_138;
      local_158.bIsDynamic = false;
      local_158.bIsExternal = false;
      local_158.CurPos = (wchar_t *)local_138;
      local_158.End = (wchar_t *)local_38;
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_158,
                 L"Unknown transport version: %u. You may need to recompile this application");
      pTVar3 = param_2->OnMessage;
      uStack_180 = (undefined4)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1);
      local_188 = (FProtocol5Stage *)local_158.Base;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,&local_178);
      if ((*(int *)&pTVar3->field_0x10 != 0) &&
         (plVar4 = *(longlong **)&pTVar3->field_0x8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,2,&local_188);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_178);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
      return Error;
    }
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FProtocol5Stage *)0x0) {
      FTidPacketTransport::FTidPacketTransport((FTidPacketTransport *)pFVar6);
      (pFVar6->TypeRegistry).TypeInfos.ArrayNum = 0;
      pFVar6->_padding_ = (longlong)&___7FTidPacketTransportSync_Trace_UE__6B_;
      pFVar7 = pFVar6;
    }
  }
  local_188 = pFVar8;
  switch(bVar2) {
  case 0:
    pFVar10 = param_2->Machine;
    local_188 = ::operator_new(0x20);
    if (local_188 == (FProtocol5Stage *)0x0) {
      this_02 = &pFVar10->StageQueue;
      local_188 = (FProtocol5Stage *)0x0;
    }
    else {
      (local_188->TypeRegistry).TypeInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188->_padding_ = (longlong)&___7FProtocol0Stage_Trace_UE__6B_;
      this_02 = &pFVar10->StageQueue;
      *(undefined8 *)&(local_188->TypeRegistry).TypeInfos.ArrayNum = 0;
      (((TArray<UE::Trace::FTidPacketTransport::FThreadStream,TSizedDefaultAllocator<32>_> *)
       &local_188->BaseTransport)->AllocatorInstance).Data = (FScriptContainerElement *)pFVar7;
    }
    goto LAB_14d3a0fac;
  case 1:
  case 2:
  case 3:
    pFVar10 = param_2->Machine;
    this_01 = ::operator_new(0x28);
    if (this_01 != (FProtocol2Stage *)0x0) {
      local_188 = (FProtocol5Stage *)
                  FProtocol2Stage::FProtocol2Stage(this_01,(uint)bVar2,(FTransport *)pFVar7);
    }
    break;
  case 4:
    pFVar10 = param_2->Machine;
    pFVar8 = ::operator_new(0x28);
    if (pFVar8 != (FProtocol5Stage *)0x0) {
      FProtocol2Stage::FProtocol2Stage((FProtocol2Stage *)pFVar8,4,(FTransport *)pFVar7);
      pFVar8->_padding_ = (longlong)&___7FProtocol4Stage_Trace_UE__6B_;
      local_188 = pFVar8;
    }
    break;
  case 5:
    pFVar10 = param_2->Machine;
    pFVar6 = ::operator_new(0x60);
    if (pFVar6 != (FProtocol5Stage *)0x0) {
      pFVar8 = FProtocol5Stage::FProtocol5Stage(pFVar6,(FTransport *)pFVar7);
    }
    this_02 = &pFVar10->StageQueue;
    local_188 = pFVar8;
    goto LAB_14d3a0fac;
  case 6:
    pFVar10 = param_2->Machine;
    pFVar8 = ::operator_new(0x60);
    if (pFVar8 != (FProtocol5Stage *)0x0) {
      FProtocol5Stage::FProtocol5Stage(pFVar8,(FTransport *)pFVar7);
      pFVar8->EventVersion = 6;
      pFVar8->_padding_ = (longlong)&___7FProtocol6Stage_Trace_UE__6B_;
      local_188 = pFVar8;
    }
    break;
  case 7:
    pFVar10 = param_2->Machine;
    pFVar8 = ::operator_new(0x60);
    if (pFVar8 != (FProtocol5Stage *)0x0) {
      FProtocol5Stage::FProtocol5Stage(pFVar8,(FTransport *)pFVar7);
      pFVar8->EventVersion = 7;
      pFVar8->_padding_ = (longlong)&___7FProtocol7Stage_Trace_UE__6B_;
      local_188 = pFVar8;
    }
    break;
  default:
    local_158.Base = (wchar_t *)local_138;
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    local_158.CurPos = (wchar_t *)local_138;
    local_158.End = (wchar_t *)local_38;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_158,
               L"Unknown protocol version: %u. You may need to recompile this application");
    pTVar3 = param_2->OnMessage;
    uStack_180 = (undefined4)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1);
    local_188 = (FProtocol5Stage *)local_158.Base;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,&local_178);
    if ((*(int *)&pTVar3->field_0x10 != 0) &&
       (plVar4 = *(longlong **)&pTVar3->field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,2,&local_188);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    return Error;
  }
  this_02 = &pFVar10->StageQueue;
LAB_14d3a0fac:
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (this_02,(FStage **)&local_188,0);
  FAnalysisMachine::Transition(param_2->Machine);
  param_1->Cursor = param_1->Cursor + 2;
  return Continue;
}

