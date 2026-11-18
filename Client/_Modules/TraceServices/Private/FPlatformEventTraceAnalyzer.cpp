// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// FPlatformEventTraceAnalyzer @ 14d3cccb0

FPlatformEventTraceAnalyzer * __thiscall
TraceServices::FPlatformEventTraceAnalyzer::FPlatformEventTraceAnalyzer
          (FPlatformEventTraceAnalyzer *this,IAnalysisSession *param_1,
          FContextSwitchesProvider *param_2,FStackSamplesProvider *param_3)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FPlatformEventTraceAnalyzer_TraceServices__6B_;
  this->ContextSwitchesProvider = param_2;
  this->StackSamplesProvider = param_3;
  return this;
}

// OnAnalysisBegin @ 14d3e9300

void __thiscall
TraceServices::FPlatformEventTraceAnalyzer::OnAnalysisBegin
          (FPlatformEventTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"PlatformEvent","Settings",0);
  (**(code **)*pFVar1)(pFVar1,1,"PlatformEvent","ContextSwitch",0);
  (**(code **)*pFVar1)(pFVar1,2,"PlatformEvent","StackSample",0);
  (**(code **)*pFVar1)(pFVar1,3,"PlatformEvent","ThreadName",0);
  return;
}

// OnAnalysisEnd @ 14d3eab90

void __thiscall
TraceServices::FPlatformEventTraceAnalyzer::OnAnalysisEnd(FPlatformEventTraceAnalyzer *this)

{
  FStackSamplesProvider *pFVar1;
  IAnalysisSession *pIVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  double dVar6;
  
  pFVar1 = this->StackSamplesProvider;
  (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
  dVar6 = FStackSamplesProvider::OnAnalysisEnd(this->StackSamplesProvider);
  (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
  if (0.0 < dVar6) {
    pIVar2 = this->Session;
    (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar6,0));
    (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  }
  fVar3 = __real_3f800000;
  iVar5 = 10;
  do {
    bVar4 = FStackSamplesProvider::UpdatePendingTimers(this->StackSamplesProvider);
    if (!bVar4) {
      return;
    }
    FWindowsPlatformProcess::Sleep(fVar3);
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  return;
}

// OnEvent @ 14d3f5610

bool __thiscall
TraceServices::FPlatformEventTraceAnalyzer::OnEvent
          (FPlatformEventTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *pFVar1;
  FContextSwitchesProvider *pFVar2;
  FStackSamplesProvider *pFVar3;
  FEventTime *pFVar4;
  FStackSamplesProvider *this_00;
  IAnalysisSession *pIVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong64 uVar12;
  FArrayReader *this_01;
  ulong64 *puVar13;
  longlong lVar14;
  int iVar15;
  char local_res10 [8];
  FLLMScope local_68 [2];
  FMemScope local_60;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name59,L"Insights/FPlatformEventTraceAnalyzer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_68,LLMScope_Name59,false,None,Default,true);
  FMemScope::FMemScope(&local_60,&LLMScope_Name59,true);
  if (param_1 == 0) {
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"SamplingInterval",0);
    pFVar3 = this->StackSamplesProvider;
    (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_);
    FStackSamplesProvider::SetSamplingInterval(this->StackSamplesProvider,uVar10);
    lVar14 = pFVar3->_padding_;
LAB_14d3f5996:
    (**(code **)(lVar14 + 0x10))(&pFVar3->_padding_);
    goto LAB_14d3f5999;
  }
  if (param_1 == 1) {
    pFVar1 = param_3->EventData;
    pFVar4 = param_3->EventTime;
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(pFVar1,"StartTime",0);
    dVar6 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar4,uVar12);
    pFVar4 = param_3->EventTime;
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(pFVar1,"EndTime",0);
    dVar7 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar4,uVar12);
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(pFVar1,"ThreadId",0);
    bVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(pFVar1,"CoreNumber",'\0');
    pFVar2 = this->ContextSwitchesProvider;
    (**(code **)(pFVar2->_padding_ + 8))(&pFVar2->_padding_);
    FContextSwitchesProvider::AddTimingEvent
              (this->ContextSwitchesProvider,uVar10,dVar6,dVar7,(uint)bVar9);
    (**(code **)(pFVar2->_padding_ + 0x10))(&pFVar2->_padding_);
    pIVar5 = this->Session;
    (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar7,0));
    (**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5);
    goto LAB_14d3f5999;
  }
  if (param_1 != 2) {
    if (param_1 != 3) goto LAB_14d3f5999;
    pFVar1 = param_3->EventData;
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(pFVar1,"ThreadId",0);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(pFVar1,"ProcessId",0);
    local_58.DataPtr = (wchar_t *)0x0;
    local_58.Size = 0;
    bVar8 = UE::Trace::IAnalyzer::FEventData::GetString(pFVar1,"Name",&local_58);
    if (!bVar8) goto LAB_14d3f5999;
    pFVar2 = this->ContextSwitchesProvider;
    (**(code **)(pFVar2->_padding_ + 8))(&pFVar2->_padding_);
    local_48[0]._12_4_ = local_58._12_4_;
    local_48[0].Size = local_58.Size;
    local_48[0].DataPtr = local_58.DataPtr;
    FContextSwitchesProvider::AddThreadName(this->ContextSwitchesProvider,uVar10,uVar11,local_48);
    (**(code **)(pFVar2->_padding_ + 0x10))(&pFVar2->_padding_);
    pFVar3 = this->StackSamplesProvider;
    (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_);
    local_48[0]._12_4_ = local_58._12_4_;
    local_48[0].Size = local_58.Size;
    local_48[0].DataPtr = local_58.DataPtr;
    FStackSamplesProvider::AddThreadName(this->StackSamplesProvider,uVar10,uVar11,local_48);
    lVar14 = pFVar3->_padding_;
    goto LAB_14d3f5996;
  }
  pFVar1 = param_3->EventData;
  pFVar4 = param_3->EventTime;
  uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(pFVar1,"Time",0);
  dVar6 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar4,uVar12);
  uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(pFVar1,"ThreadId",0);
  this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(pFVar1,"Addresses");
  pFVar3 = this->StackSamplesProvider;
  (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_);
  this_00 = this->StackSamplesProvider;
  puVar13 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,local_res10);
  if (puVar13 == (ulong64 *)0x0) {
LAB_14d3f581c:
    puVar13 = (ulong64 *)0x0;
  }
  else {
    iVar15 = -(int)local_res10[0];
    if (iVar15 < 0) {
      iVar15 = (int)local_res10[0];
    }
    if (iVar15 != 8) goto LAB_14d3f581c;
  }
  uVar11 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
  FStackSamplesProvider::AddStackSample(this_00,uVar10,dVar6,uVar11,puVar13);
  (**(code **)(pFVar3->_padding_ + 0x10))(&pFVar3->_padding_);
  FStackSamplesProvider::UpdatePendingTimers(this->StackSamplesProvider);
  pIVar5 = this->Session;
  (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5);
  (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar6,0));
  (**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5);
LAB_14d3f5999:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_68);
  return true;
}

// OnThreadInfo @ 14d3faf90

void __thiscall
TraceServices::FPlatformEventTraceAnalyzer::OnThreadInfo
          (FPlatformEventTraceAnalyzer *this,FThreadInfo *param_1)

{
  FContextSwitchesProvider *pFVar1;
  FContextSwitchesProvider *this_00;
  uint uVar2;
  uint uVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name138,L"Insights/FPlatformEventTraceAnalyzer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name138,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name138,true);
  pFVar1 = this->ContextSwitchesProvider;
  (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
  this_00 = this->ContextSwitchesProvider;
  uVar2 = UE::Trace::IAnalyzer::FThreadInfo::GetSystemId(param_1);
  uVar3 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_1);
  FContextSwitchesProvider::AddThreadInfo(this_00,uVar3,uVar2);
  (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

