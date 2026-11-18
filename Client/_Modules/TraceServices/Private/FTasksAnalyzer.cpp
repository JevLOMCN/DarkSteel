// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FTasksAnalyzer @ 14d3cd510

FTasksAnalyzer * __thiscall
TraceServices::FTasksAnalyzer::FTasksAnalyzer
          (FTasksAnalyzer *this,IAnalysisSession *param_1,FTasksProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FTasksAnalyzer_TraceServices__6B_;
  this->TasksProvider = param_2;
  return this;
}

// OnAnalysisBegin @ 14d3e9600

void __thiscall
TraceServices::FTasksAnalyzer::OnAnalysisBegin(FTasksAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"TaskTrace","Init",0);
  (**(code **)*pFVar1)(pFVar1,1,"TaskTrace","Created",0);
  (**(code **)*pFVar1)(pFVar1,2,"TaskTrace","Launched",0);
  (**(code **)*pFVar1)(pFVar1,3,"TaskTrace","Scheduled",0);
  (**(code **)*pFVar1)(pFVar1,4,"TaskTrace","SubsequentAdded",0);
  (**(code **)*pFVar1)(pFVar1,5,"TaskTrace","Started",0);
  (**(code **)*pFVar1)(pFVar1,6,"TaskTrace","NestedAdded",0);
  (**(code **)*pFVar1)(pFVar1,7,"TaskTrace","Finished",0);
  (**(code **)*pFVar1)(pFVar1,8,"TaskTrace","Completed",0);
  (**(code **)*pFVar1)(pFVar1,9,"TaskTrace","Destroyed",0);
  (**(code **)*pFVar1)(pFVar1,10,"TaskTrace","WaitingStarted",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"TaskTrace","WaitingFinished",0);
  return;
}

// OnEvent @ 14d3f7ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FTasksAnalyzer::OnEvent
          (FTasksAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  IAnalysisSession *pIVar1;
  FEventData *this_00;
  FTasksProvider *this_01;
  FEventTime *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ulong64 uVar10;
  FArrayReader *this_02;
  ulong64 *_Src;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  double dVar13;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_68;
  FString local_58 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name41,L"Insights/FTasksAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name41,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name41,true);
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  this_00 = param_3->EventData;
  uVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
  switch(param_1) {
  case 0:
    uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Version",0);
    FTasksProvider::Init(this->TasksProvider,uVar6);
    break;
  case 1:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskSize",0);
    FTasksProvider::TaskCreated(this->TasksProvider,uVar11,dVar13,uVar6,uVar10);
    break;
  case 2:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    pwVar9 = (wchar_t *)0x0;
    local_58[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58[0].Data.ArrayNum = 0;
    local_58[0].Data.ArrayMax = 0;
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"DebugName",local_58);
    if (bVar4) {
      iVar7 = local_58[0].Data.ArrayNum + -1;
      if (local_58[0].Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_58[0].Data.ArrayNum != 0) {
          FVar12.Data = local_58[0].Data.AllocatorInstance.Data;
        }
        pwVar9 = (wchar_t *)
                 (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar12.Data);
      }
    }
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(this_00,"Tracked",false);
    iVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(this_00,"ThreadToExecuteOn",0);
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskSize",0);
    FTasksProvider::TaskLaunched(this->TasksProvider,uVar11,pwVar9,bVar4,iVar7,dVar13,uVar6,uVar10);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    break;
  case 3:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    FTasksProvider::TaskScheduled(this->TasksProvider,uVar11,dVar13,uVar6);
    break;
  case 4:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"SubsequentId",0);
    FTasksProvider::SubsequentAdded(this->TasksProvider,uVar11,uVar10,dVar13,uVar6);
    break;
  case 5:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    FTasksProvider::TaskStarted(this->TasksProvider,uVar11,dVar13,uVar6);
    break;
  case 6:
    if (::bLogged == false) {
      if (4 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      ::bLogged = true;
    }
    break;
  case 7:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    FTasksProvider::TaskFinished(this->TasksProvider,uVar11,dVar13);
    break;
  case 8:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    FTasksProvider::TaskCompleted(this->TasksProvider,uVar11,dVar13,uVar6);
    break;
  case 9:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TaskId",0);
    FTasksProvider::TaskDestroyed(this->TasksProvider,uVar11,dVar13,uVar6);
    break;
  case 10:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    this_02 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"Tasks");
    this_01 = this->TasksProvider;
    _Src = UE::Trace::IAnalyzer::TArrayReader<unsigned___int64>::GetData
                     ((TArrayReader<unsigned___int64> *)this_02);
    uVar8 = UE::Trace::IAnalyzer::FArrayReader::Num(this_02);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (((_Src == (ulong64 *)0x0) && (uVar8 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x2d3,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_68.ArrayNum = uVar8;
    if (uVar8 == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,0,&local_68.AllocatorInstance,uVar8,&local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,_Src,(longlong)(int)uVar8 << 3);
    }
    FTasksProvider::WaitingStarted(this_01,&local_68,dVar13,uVar6);
    break;
  case 0xb:
    pFVar2 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar2,uVar11);
    FTasksProvider::WaitingFinished(this->TasksProvider,dVar13,uVar6);
  }
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return true;
}

