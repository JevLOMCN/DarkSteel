// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 14

// QueueStage<UE::Trace::FEstablishTransportStage> @ 14d389d90

FEstablishTransportStage * __thiscall
UE::Trace::FAnalysisMachine::QueueStage<UE::Trace::FEstablishTransportStage>(FAnalysisMachine *this)

{
  FEstablishTransportStage *pFVar1;
  FEstablishTransportStage *local_res8;
  
  pFVar1 = ::operator_new(8);
  if (pFVar1 == (FEstablishTransportStage *)0x0) {
    pFVar1 = (FEstablishTransportStage *)0x0;
  }
  else {
    *pFVar1 = (FEstablishTransportStage)&___7FEstablishTransportStage_Trace_UE__6B_;
  }
  local_res8 = pFVar1;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return pFVar1;
}

// QueueStage<UE::Trace::FMagicStage> @ 14d389df0

FMagicStage * __thiscall
UE::Trace::FAnalysisMachine::QueueStage<UE::Trace::FMagicStage>(FAnalysisMachine *this)

{
  FMagicStage *pFVar1;
  FMagicStage *local_res8;
  
  pFVar1 = ::operator_new(8);
  if (pFVar1 == (FMagicStage *)0x0) {
    pFVar1 = (FMagicStage *)0x0;
  }
  else {
    *pFVar1 = (FMagicStage)&___7FMagicStage_Trace_UE__6B_;
  }
  local_res8 = pFVar1;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return pFVar1;
}

// QueueStage<UE::Trace::FMetadataStage> @ 14d389e50

FMetadataStage * __thiscall
UE::Trace::FAnalysisMachine::QueueStage<UE::Trace::FMetadataStage>(FAnalysisMachine *this)

{
  FMetadataStage *pFVar1;
  FMetadataStage *local_res8;
  
  pFVar1 = ::operator_new(8);
  if (pFVar1 == (FMetadataStage *)0x0) {
    pFVar1 = (FMetadataStage *)0x0;
  }
  else {
    *pFVar1 = (FMetadataStage)&___7FMetadataStage_Trace_UE__6B_;
  }
  local_res8 = pFVar1;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return pFVar1;
}

// QueueStage<UE::Trace::FProtocol0Stage,UE::Trace::FTransport_*> @ 14d389eb0

FProtocol0Stage * __thiscall
UE::Trace::FAnalysisMachine::QueueStage<UE::Trace::FProtocol0Stage,UE::Trace::FTransport_*>
          (FAnalysisMachine *this,FTransport *param_1)

{
  FProtocol0Stage *pFVar1;
  FProtocol0Stage *local_res8;
  
  pFVar1 = ::operator_new(0x20);
  if (pFVar1 != (FProtocol0Stage *)0x0) {
    pFVar1->Transport = param_1;
    pFVar1->_padding_ = (longlong)&___7FProtocol0Stage_Trace_UE__6B_;
    (pFVar1->TypeRegistry).TypeInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->TypeRegistry).TypeInfos.ArrayNum = 0;
    (pFVar1->TypeRegistry).TypeInfos.ArrayMax = 0;
  }
  local_res8 = pFVar1;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return pFVar1;
}

// QueueStage<UE::Trace::FProtocol2Stage,unsigned_int,UE::Trace::FTransport_*> @ 14d389f30

FProtocol2Stage * __thiscall
UE::Trace::FAnalysisMachine::
QueueStage<UE::Trace::FProtocol2Stage,unsigned_int,UE::Trace::FTransport_*>
          (FAnalysisMachine *this,uint param_1,FTransport *param_2)

{
  FProtocol2Stage *pFVar1;
  FProtocol2Stage *local_res8;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 == (FProtocol2Stage *)0x0) {
    pFVar1 = (FProtocol2Stage *)0x0;
  }
  else {
    pFVar1 = FProtocol2Stage::FProtocol2Stage(pFVar1,param_1,param_2);
  }
  local_res8 = pFVar1;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return pFVar1;
}

// QueueStage<UE::Trace::FProtocol4Stage,unsigned_int,UE::Trace::FTransport_*> @ 14d389fa0

FProtocol4Stage * __thiscall
UE::Trace::FAnalysisMachine::
QueueStage<UE::Trace::FProtocol4Stage,unsigned_int,UE::Trace::FTransport_*>
          (FAnalysisMachine *this,uint param_1,FTransport *param_2)

{
  FProtocol2Stage *this_00;
  FProtocol2Stage *local_res8;
  
  this_00 = ::operator_new(0x28);
  if (this_00 == (FProtocol2Stage *)0x0) {
    this_00 = (FProtocol2Stage *)0x0;
  }
  else {
    FProtocol2Stage::FProtocol2Stage(this_00,param_1,param_2);
    this_00->_padding_ = (longlong)&___7FProtocol4Stage_Trace_UE__6B_;
  }
  local_res8 = this_00;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return (FProtocol4Stage *)this_00;
}

// QueueStage<UE::Trace::FProtocol5Stage,UE::Trace::FTransport_*> @ 14d38a020

FProtocol5Stage * __thiscall
UE::Trace::FAnalysisMachine::QueueStage<UE::Trace::FProtocol5Stage,UE::Trace::FTransport_*>
          (FAnalysisMachine *this,FTransport *param_1)

{
  FProtocol5Stage *pFVar1;
  FProtocol5Stage *local_res8;
  
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 == (FProtocol5Stage *)0x0) {
    pFVar1 = (FProtocol5Stage *)0x0;
  }
  else {
    pFVar1 = FProtocol5Stage::FProtocol5Stage(pFVar1,param_1);
  }
  local_res8 = pFVar1;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return pFVar1;
}

// QueueStage<UE::Trace::FProtocol6Stage,UE::Trace::FTransport_*> @ 14d38a080

FProtocol6Stage * __thiscall
UE::Trace::FAnalysisMachine::QueueStage<UE::Trace::FProtocol6Stage,UE::Trace::FTransport_*>
          (FAnalysisMachine *this,FTransport *param_1)

{
  FProtocol5Stage *this_00;
  FProtocol5Stage *local_res8;
  
  this_00 = ::operator_new(0x60);
  if (this_00 == (FProtocol5Stage *)0x0) {
    this_00 = (FProtocol5Stage *)0x0;
  }
  else {
    FProtocol5Stage::FProtocol5Stage(this_00,param_1);
    this_00->EventVersion = 6;
    this_00->_padding_ = (longlong)&___7FProtocol6Stage_Trace_UE__6B_;
  }
  local_res8 = this_00;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return (FProtocol6Stage *)this_00;
}

// QueueStage<UE::Trace::FProtocol7Stage,UE::Trace::FTransport_*> @ 14d38a100

FProtocol7Stage * __thiscall
UE::Trace::FAnalysisMachine::QueueStage<UE::Trace::FProtocol7Stage,UE::Trace::FTransport_*>
          (FAnalysisMachine *this,FTransport *param_1)

{
  FProtocol5Stage *this_00;
  FProtocol5Stage *local_res8;
  
  this_00 = ::operator_new(0x60);
  if (this_00 == (FProtocol5Stage *)0x0) {
    this_00 = (FProtocol5Stage *)0x0;
  }
  else {
    FProtocol5Stage::FProtocol5Stage(this_00,param_1);
    this_00->EventVersion = 7;
    this_00->_padding_ = (longlong)&___7FProtocol7Stage_Trace_UE__6B_;
  }
  local_res8 = this_00;
  TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->StageQueue,(FStage **)&local_res8,0);
  return (FProtocol7Stage *)this_00;
}

// FAnalysisMachine @ 14d38f0a0

FAnalysisMachine * __thiscall
UE::Trace::FAnalysisMachine::FAnalysisMachine
          (FAnalysisMachine *this,FAnalysisBridge *param_1,
          TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
          *param_2)

{
  this->Bridge = param_1;
  this->ActiveStage = (FStage *)0x0;
  (this->StageQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StageQueue).ArrayNum = 0;
  (this->StageQueue).ArrayMax = 0;
  (this->DeadStages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeadStages).ArrayNum = 0;
  (this->DeadStages).ArrayMax = 0;
  *(undefined8 *)&this->OnMessage = 0;
  *(undefined8 *)&(this->OnMessage).field_0x8 = 0;
  *(undefined4 *)&(this->OnMessage).field_0x10 = 0;
  TDelegate<void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnMessage,param_2);
  return this;
}

// ~FAnalysisMachine @ 14d3920f0

void __thiscall UE::Trace::FAnalysisMachine::~FAnalysisMachine(FAnalysisMachine *this)

{
  FScriptContainerElement *pFVar1;
  
  CleanUp(this);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMessage);
  pFVar1 = (this->DeadStages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StageQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CleanUp @ 14d398330

void __thiscall UE::Trace::FAnalysisMachine::CleanUp(FAnalysisMachine *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DeadStages).AllocatorInstance.Data;
  iVar2 = (this->DeadStages).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DeadStages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::FAnalysisMachine::FStage_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(undefined8 **)pFVar3 != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)pFVar3)();
    }
    pFVar3 = pFVar3 + 8;
  }
  (this->DeadStages).ArrayNum = 0;
  if ((this->DeadStages).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DeadStages).AllocatorInstance,0,&(this->DeadStages).ArrayMax);
  }
  return;
}

// OnData @ 14d3a0b30

EStatus __thiscall
UE::Trace::FAnalysisMachine::OnData(FAnalysisMachine *this,FStreamReader *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  EStatus EVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->DeadStages).ArrayMax;
  do {
    pFVar8 = (this->DeadStages).AllocatorInstance.Data;
    iVar3 = (this->DeadStages).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->DeadStages).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Trace::FAnalysisMachine::FStage_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      puVar4 = *(undefined8 **)pFVar8;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      pFVar8 = pFVar8 + 8;
    }
    (this->DeadStages).ArrayNum = 0;
    if (*piVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->DeadStages).AllocatorInstance,0,piVar1);
    }
    if (this->ActiveStage == (FStage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveStage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                         ,0xa35,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
    }
    EVar7 = (**(code **)((longlong)*this->ActiveStage + 8))(this->ActiveStage,param_1);
  } while (EVar7 == Continue);
  return EVar7;
}

// Transition @ 14d3a8880

void __thiscall UE::Trace::FAnalysisMachine::Transition(FAnalysisMachine *this)

{
  FStage **ppFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FStage *pFVar7;
  FAnalysisMachine *local_38;
  FAnalysisBridge *local_30;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *local_28;
  FAnalysisMachine *local_20;
  FAnalysisBridge *local_18;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *local_10;
  
  ppFVar1 = &this->ActiveStage;
  pFVar7 = this->ActiveStage;
  if (pFVar7 != (FStage *)0x0) {
    local_30 = this->Bridge;
    local_38 = this;
    local_28 = &this->OnMessage;
    (**(code **)((longlong)*pFVar7 + 0x18))(pFVar7,&local_38);
    pFVar3 = (this->DeadStages).AllocatorInstance.Data;
    if ((pFVar3 <= ppFVar1) && (ppFVar1 < pFVar3 + (longlong)(this->DeadStages).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->DeadStages).ArrayNum;
    piVar2 = &(this->DeadStages).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->DeadStages).AllocatorInstance,piVar2);
    }
    (this->DeadStages).ArrayNum = iVar6 + 1;
    *(FStage **)((this->DeadStages).AllocatorInstance.Data + (longlong)iVar6 * 8) = *ppFVar1;
  }
  if ((this->StageQueue).ArrayNum < 1) {
    pFVar7 = (FStage *)0x0;
  }
  else {
    iVar6 = (this->StageQueue).ArrayNum;
    pFVar7 = *(FStage **)((this->StageQueue).AllocatorInstance.Data + (longlong)iVar6 * 8 + -8);
    iVar6 = iVar6 + -1;
    (this->StageQueue).ArrayNum = iVar6;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->StageQueue).AllocatorInstance,iVar6,&(this->StageQueue).ArrayMax);
  }
  *ppFVar1 = pFVar7;
  if (pFVar7 != (FStage *)0x0) {
    local_18 = this->Bridge;
    local_20 = this;
    local_10 = &this->OnMessage;
    (**(code **)((longlong)*pFVar7 + 0x10))(pFVar7,&local_20);
  }
  return;
}

