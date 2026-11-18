// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FCountersAnalyzer @ 14d3cbea0

FCountersAnalyzer * __thiscall
TraceServices::FCountersAnalyzer::FCountersAnalyzer
          (FCountersAnalyzer *this,IAnalysisSession *param_1,IEditableCounterProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FCountersAnalyzer_TraceServices__6B_;
  *(undefined8 *)&this->EditableCountersMap = 0;
  *(undefined8 *)&(this->EditableCountersMap).field_0x8 = 0;
  *(undefined8 *)&(this->EditableCountersMap).field_0x20 = 0;
  this->EditableCounterProvider = param_2;
  *(undefined4 *)&(this->EditableCountersMap).field_0x28 = 0;
  *(undefined4 *)&(this->EditableCountersMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EditableCountersMap).field_0x34 = 0;
  *(undefined4 *)&(this->EditableCountersMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EditableCountersMap).field_0x40 = 0;
  *(undefined4 *)&(this->EditableCountersMap).field_0x48 = 0;
  return this;
}

// OnAnalysisBegin @ 14d3e8600

void __thiscall
TraceServices::FCountersAnalyzer::OnAnalysisBegin
          (FCountersAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Counters","Spec",0);
  (**(code **)*pFVar1)(pFVar1,1,"Counters","SetValueInt",0);
  (**(code **)*pFVar1)(pFVar1,2,"Counters","SetValueFloat",0);
  return;
}

// OnEvent @ 14d3f0000

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FCountersAnalyzer::OnEvent
          (FCountersAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  int iVar1;
  IAnalysisSession *pIVar2;
  FEventData *this_00;
  FEventTime *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uchar uVar7;
  uchar uVar8;
  ushort uVar9;
  uint uVar10;
  ulong64 uVar11;
  IEditableCounter *pIVar12;
  long64 lVar13;
  wchar_t *pwVar14;
  FString *pFVar15;
  undefined8 uVar16;
  ForAnyElementType FVar17;
  float fVar18;
  double dVar19;
  FLLMScope local_res8 [2];
  ushort local_res10 [4];
  longlong *local_98;
  FMemScope local_90;
  FString local_88;
  FString local_78;
  ushort *local_68;
  longlong **local_60;
  FString local_58 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name30,L"Insights/FCountersAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name30,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name30,true);
  pIVar2 = this->Session;
  (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  this_00 = param_3->EventData;
  if (param_1 == 0) {
    local_res10[0] = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"Id",0);
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"Type",'\0');
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"DisplayHint",'\0');
    local_98 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
    if (uVar7 == '\x01') {
      (**(code **)(*local_98 + 0x20))(local_98,1);
    }
    if (uVar8 == '\x01') {
      (**(code **)(*local_98 + 0x30))(local_98,1);
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    bVar5 = UE::Trace::IAnalyzer::FEventData::GetString(param_3->EventData,"Name",&local_88);
    if (!bVar5) {
      uVar10 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
      pwVar14 = (wchar_t *)UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
      pFVar15 = ::FString::ConstructFromPtrSize(local_58,pwVar14,uVar10 >> 1);
      if (&local_88 != pFVar15) {
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_88.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = (pFVar15->Data).ArrayNum;
        local_88.Data.ArrayMax = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
      }
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    iVar1 = local_88.Data.ArrayNum;
    if (local_88.Data.ArrayNum < 2) {
      if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      ::FString::PrintfImpl(&local_78,L"<noname counter %u>");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_88.Data.ArrayMax = local_78.Data.ArrayMax;
      local_88.Data.ArrayNum = local_78.Data.ArrayNum;
      iVar1 = local_78.Data.ArrayNum;
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (iVar1 != 0) {
      FVar17.Data = local_88.Data.AllocatorInstance.Data;
    }
    pcVar4 = *(code **)(*local_98 + 8);
    uVar16 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar17.Data);
    (*pcVar4)(local_98,uVar16);
    local_68 = local_res10;
    local_60 = &local_98;
    TSet<TTuple<unsigned_short,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,TraceServices::IEditableCounter_*_const_&>_>
              ((TSet<TTuple<unsigned_short,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
                *)&this->EditableCountersMap,
               (TPairInitializer<unsigned_short_const_&,TraceServices::IEditableCounter_*_const_&> *
               )&stack0x00000020,(bool *)&local_68);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  else if (param_1 == 1) {
    pFVar3 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar19 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar3,uVar11);
    lVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<__int64>(this_00,"Value",0);
    uVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"CounterId",0);
    pIVar12 = TMapBase<unsigned_short,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>_>
              ::FindRef((TMapBase<unsigned_short,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>_>
                         *)&this->EditableCountersMap,uVar9);
    if (pIVar12 == (IEditableCounter *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3800325236893679549>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CountersTraceAnalysis.cpp"
                         ,0x43,"FindEditableCounter");
      if (bVar5) {
code_r0x00014d3f0203:
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar19,0));
      (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,SUB84(dVar19,0),lVar13);
    }
  }
  else if (param_1 == 2) {
    pFVar3 = param_3->EventTime;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar19 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar3,uVar11);
    fVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<float>(this_00,"Value",0.0);
    uVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"CounterId",0);
    pIVar12 = TMapBase<unsigned_short,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>_>
              ::FindRef((TMapBase<unsigned_short,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>_>
                         *)&this->EditableCountersMap,uVar9);
    if (pIVar12 == (IEditableCounter *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3800325236893679536>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CountersTraceAnalysis.cpp"
                         ,0x50,"FindEditableCounter");
      if (bVar5) goto code_r0x00014d3f0203;
    }
    else {
      (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar19,0));
      (**(code **)((longlong)*pIVar12 + 0x48))(pIVar12,SUB84(dVar19,0),(double)fVar18);
    }
  }
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res8);
  return true;
}

