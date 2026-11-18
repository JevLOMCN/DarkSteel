// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 5

// FProtocol0Stage @ 14d38f810

FProtocol0Stage * __thiscall
UE::Trace::FProtocol0Stage::FProtocol0Stage(FProtocol0Stage *this,FTransport *param_1)

{
  this->Transport = param_1;
  this->_padding_ = (longlong)&___7FProtocol0Stage_Trace_UE__6B_;
  (this->TypeRegistry).TypeInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeRegistry).TypeInfos.ArrayNum = 0;
  (this->TypeRegistry).TypeInfos.ArrayMax = 0;
  return this;
}

// ~FProtocol0Stage @ 14d3924d0

void __thiscall UE::Trace::FProtocol0Stage::~FProtocol0Stage(FProtocol0Stage *this)

{
  FTransport *pFVar1;
  
  this->_padding_ = (longlong)&___7FProtocol0Stage_Trace_UE__6B_;
  pFVar1 = this->Transport;
  if (pFVar1 != (FTransport *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FTypeRegistry::~FTypeRegistry(&this->TypeRegistry);
  this->_padding_ = (longlong)&___7FStage_FAnalysisMachine_Trace_UE__6B_;
  return;
}

// EnterStage @ 14d39bb20

void __thiscall
UE::Trace::FProtocol0Stage::EnterStage(FProtocol0Stage *this,FMachineContext *param_1)

{
  FAnalysisBridge *pFVar1;
  FInfo *pFVar2;
  
  pFVar1 = param_1->Bridge;
  pFVar2 = FThreads::GetInfo(&(pFVar1->State).Threads,0);
  pFVar1->ThreadInfo = pFVar2;
  return;
}

// ExitStage @ 14d39bb90

void __thiscall
UE::Trace::FProtocol0Stage::ExitStage(FProtocol0Stage *this,FMachineContext *param_1)

{
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar1;
  char cVar2;
  wchar_t *local_38;
  undefined4 uStack_30;
  FReadAccessScope local_28;
  
  cVar2 = (**(code **)(this->Transport->_padding_ + 0x10))();
  if (cVar2 == '\0') {
    this_00 = param_1->OnMessage;
    local_38 = L"Transport buffers are not empty at end of analysis (protocol 0)!";
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

// OnData @ 14d3a13d0

EStatus __thiscall
UE::Trace::FProtocol0Stage::OnData
          (FProtocol0Stage *this,FStreamReader *param_1,FMachineContext *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EStatus EVar4;
  longlong lVar5;
  ushort *puVar6;
  FDispatch *pFVar7;
  uint uVar8;
  int iVar9;
  FEventDataInfo local_48;
  
  this->Transport->Reader = param_1;
  lVar5 = (**(code **)(this->Transport->_padding_ + 0x28))(this->Transport,4);
  while (lVar5 != 0) {
    iVar9 = *(ushort *)(lVar5 + 2) + 4;
    puVar6 = (ushort *)(**(code **)(this->Transport->_padding_ + 0x28))(this->Transport,iVar9);
    if (puVar6 == (ushort *)0x0) break;
    uVar8 = *puVar6 & 0x3fff;
    if ((*puVar6 & 0x3fff) == 0) {
      pFVar7 = FTypeRegistry::AddVersion4(&this->TypeRegistry,puVar6 + 2);
      FAnalyzerHub::OnNewType(&param_2->Bridge->AnalyzerHub,pFVar7);
    }
    else {
      uVar1 = (this->TypeRegistry).TypeInfos.ArrayNum;
      if (uVar1 <= uVar8) {
        return Error;
      }
      if (((int)uVar1 <= (int)uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      local_48.Dispatch =
           *(FDispatch **)
            ((this->TypeRegistry).TypeInfos.AllocatorInstance.Data + (ulonglong)uVar8 * 8);
      if (local_48.Dispatch == (FDispatch *)0x0) {
        return Error;
      }
      local_48.Ptr = (uchar *)(puVar6 + 2);
      local_48.AuxCollector = (FAuxDataCollector *)0x0;
      local_48.Size = puVar6[1];
      FAnalysisBridge::OnEvent(param_2->Bridge,&local_48);
    }
    (**(code **)(this->Transport->_padding_ + 8))(this->Transport,iVar9);
    lVar5 = (**(code **)(this->Transport->_padding_ + 0x28))(this->Transport,4);
  }
  return EndOfStream - (param_1->Cursor < param_1->End);
}

