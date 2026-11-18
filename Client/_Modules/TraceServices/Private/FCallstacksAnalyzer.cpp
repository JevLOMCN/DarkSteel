// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FCallstacksAnalyzer @ 14d3cbe20

FCallstacksAnalyzer * __thiscall
TraceServices::FCallstacksAnalyzer::FCallstacksAnalyzer
          (FCallstacksAnalyzer *this,IAnalysisSession *param_1,FCallstacksProvider *param_2)

{
  code *pcVar1;
  bool bVar2;
  FCallstacksAnalyzer *pFVar3;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FCallstacksAnalyzer_TraceServices__6B_;
  this->Provider = param_2;
  if (param_2 == (FCallstacksProvider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Provider != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CallstacksAnalysis.cpp"
                       ,0x12,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCallstacksAnalyzer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// OnAnalysisBegin @ 14d3e8510

void __thiscall
TraceServices::FCallstacksAnalyzer::OnAnalysisBegin
          (FCallstacksAnalyzer *this,FOnAnalysisContext *param_1)

{
  (**(code **)*param_1->InterfaceBuilder)(param_1->InterfaceBuilder,0,"Memory","CallstackSpec",0);
  return;
}

// OnEvent @ 14d3ef930

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FCallstacksAnalyzer::OnEvent
          (FCallstacksAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FCallstacksProvider *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FArrayReader *this_00;
  ulong64 *puVar5;
  ulong64 uVar6;
  int iVar7;
  char local_res10 [8];
  FLLMScope local_28 [2];
  FMemScope local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name31,L"Insights/FCallstacksAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_28,LLMScope_Name31,false,None,Default,true);
  FMemScope::FMemScope(&local_20,&LLMScope_Name31,true);
  if (param_1 != 0) goto LAB_14d3efb18;
  this_00 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(param_3->EventData,"Frames");
  uVar3 = UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
  uVar2 = uVar3 & 0xff;
  if (0xff < uVar3) {
    uVar2 = 0xff;
  }
  uVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                    (param_3->EventData,"CallstackId",0);
  if (uVar3 == 0) {
    uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_3->EventData,"Id",0);
    if (uVar6 == 0) goto LAB_14d3efb18;
    uVar3 = UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
    if ((uVar2 != uVar3) && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    pFVar1 = this->Provider;
    puVar5 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_00,0,local_res10);
    if (puVar5 == (ulong64 *)0x0) {
LAB_14d3efafc:
      puVar5 = (ulong64 *)0x0;
    }
    else {
      iVar7 = -(int)local_res10[0];
      if (iVar7 < 0) {
        iVar7 = (int)local_res10[0];
      }
      if (iVar7 != 8) goto LAB_14d3efafc;
    }
    FCallstacksProvider::AddCallstackWithHash(pFVar1,uVar6,puVar5,(uchar)uVar2);
    goto LAB_14d3efb18;
  }
  uVar4 = UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
  if ((uVar2 != uVar4) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  pFVar1 = this->Provider;
  puVar5 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_00,0,local_res10);
  if (puVar5 == (ulong64 *)0x0) {
LAB_14d3efa61:
    puVar5 = (ulong64 *)0x0;
  }
  else {
    iVar7 = -(int)local_res10[0];
    if (iVar7 < 0) {
      iVar7 = (int)local_res10[0];
    }
    if (iVar7 != 8) goto LAB_14d3efa61;
  }
  FCallstacksProvider::AddCallstack(pFVar1,uVar3,puVar5,(uchar)uVar2);
LAB_14d3efb18:
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_28);
  return true;
}

