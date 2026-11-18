// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// FCookAnalyzer @ 14d3cbe80

FCookAnalyzer * __thiscall
TraceServices::FCookAnalyzer::FCookAnalyzer
          (FCookAnalyzer *this,IAnalysisSession *param_1,FCookProfilerProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FCookAnalyzer_TraceServices__6B_;
  this->CookProfilerProvider = param_2;
  return this;
}

// ~FCookAnalyzer @ 14d3d0130

void __thiscall TraceServices::FCookAnalyzer::~FCookAnalyzer(FCookAnalyzer *this)

{
  this->_padding_ = (longlong)&___7FCookAnalyzer_TraceServices__6B_;
  return;
}

// OnAnalysisBegin @ 14d3e8540

void __thiscall
TraceServices::FCookAnalyzer::OnAnalysisBegin(FCookAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"CookTrace","Package",0);
  (**(code **)*pFVar1)(pFVar1,1,"CookTrace","PackageAssetClass",0);
  (**(code **)*pFVar1)(pFVar1,2,"CookTrace","PackageStat",0);
  (**(code **)*pFVar1)(pFVar1,3,"CookTrace","PackageStatBeginScope",0);
  (**(code **)*pFVar1)(pFVar1,4,"CookTrace","PackageStatEndScope",0);
  return;
}

// OnEvent @ 14d3efb80

bool __thiscall
TraceServices::FCookAnalyzer::OnEvent
          (FCookAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *this_00;
  FEventTime *pFVar1;
  IAnalysisSession *pIVar2;
  longlong lVar3;
  uchar uVar4;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  code *pcVar13;
  FCookProfilerProvider *pFVar14;
  FCookProfilerProvider *pFVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 uVar18;
  FString local_68;
  FString local_58;
  FScriptContainerElement *local_48;
  int local_40;
  FScriptContainerElement *local_38;
  int local_30;
  
  this_00 = param_3->EventData;
  if (param_1 == 0) {
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Id",0);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Name",&local_58);
    local_38 = local_58.Data.AllocatorInstance.Data;
    local_30 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      local_30 = 0;
    }
    uVar10 = (**(code **)((longlong)*this->Session + 200))(this->Session,&local_38);
    pFVar15 = this->CookProfilerProvider;
    (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_);
    plVar11 = &this->CookProfilerProvider->_padding_;
    lVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar7);
    *(undefined8 *)(lVar9 + 8) = uVar10;
    (**(code **)(pFVar15->_padding_ + 0x10))(&pFVar15->_padding_);
    FVar12.Data = local_58.Data.AllocatorInstance.Data;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 == 3) {
          uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Id",0);
          pFVar1 = param_3->EventTime;
          uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Time",0);
          dVar17 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar1,uVar8);
          uVar16 = SUB84(dVar17,0);
          uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"StatType",'\0')
          ;
          pFVar15 = this->CookProfilerProvider;
          (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_);
          pFVar14 = this->CookProfilerProvider;
          pcVar13 = *(code **)(pFVar14->_padding_ + 0x28);
          uVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
          uVar18 = 1;
        }
        else {
          if (param_1 != 4) {
            return true;
          }
          uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Id",0);
          pFVar1 = param_3->EventTime;
          uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Time",0);
          dVar17 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar1,uVar8);
          uVar16 = SUB84(dVar17,0);
          uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"StatType",'\0')
          ;
          pFVar15 = this->CookProfilerProvider;
          (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_);
          pFVar14 = this->CookProfilerProvider;
          pcVar13 = *(code **)(pFVar14->_padding_ + 0x28);
          uVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
          uVar18 = 0;
        }
        (*pcVar13)(&pFVar14->_padding_,uVar6,uVar7,uVar16,uVar4,uVar18);
        pIVar2 = this->Session;
        (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
        (**(code **)((longlong)*this->Session + 0x38))(this->Session,uVar16);
        (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
        (**(code **)(pFVar15->_padding_ + 0x10))(&pFVar15->_padding_);
        return true;
      }
      uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Id",0);
      pFVar1 = param_3->EventTime;
      uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Duration",0);
      dVar17 = UE::Trace::IAnalyzer::FEventTime::AsSecondsAbsolute(pFVar1,uVar8);
      uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"StatType",'\0');
      pFVar15 = this->CookProfilerProvider;
      (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_);
      plVar11 = &this->CookProfilerProvider->_padding_;
      lVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar7);
      if ((lVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Package",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CookAnalysis.cpp"
                             ,0x41,L""), bVar5)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      if (uVar4 == '\0') {
        *(double *)(lVar9 + 0x10) = dVar17 + *(double *)(lVar9 + 0x10);
      }
      else {
        if (uVar4 == '\x01') {
          lVar3 = pFVar15->_padding_;
          *(double *)(lVar9 + 0x20) = dVar17;
          (**(code **)(lVar3 + 0x10))(&pFVar15->_padding_);
          return true;
        }
        if (uVar4 == '\x02') {
          lVar3 = pFVar15->_padding_;
          *(double *)(lVar9 + 0x30) = dVar17 + *(double *)(lVar9 + 0x30);
          (**(code **)(lVar3 + 0x10))(&pFVar15->_padding_);
          return true;
        }
        if (uVar4 == '\x03') {
          lVar3 = pFVar15->_padding_;
          *(double *)(lVar9 + 0x40) = dVar17 + *(double *)(lVar9 + 0x40);
          (**(code **)(lVar3 + 0x10))(&pFVar15->_padding_);
          return true;
        }
      }
      (**(code **)(pFVar15->_padding_ + 0x10))(&pFVar15->_padding_);
      return true;
    }
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Id",0);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"ClassName",&local_68);
    local_48 = local_68.Data.AllocatorInstance.Data;
    local_40 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      local_40 = 0;
    }
    uVar10 = (**(code **)((longlong)*this->Session + 200))(this->Session,&local_48);
    pFVar15 = this->CookProfilerProvider;
    (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_);
    plVar11 = &this->CookProfilerProvider->_padding_;
    lVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar7);
    if ((lVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Package",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CookAnalysis.cpp"
                           ,0x87,L""), bVar5)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    *(undefined8 *)(lVar9 + 0x50) = uVar10;
    (**(code **)(pFVar15->_padding_ + 0x10))(&pFVar15->_padding_);
    FVar12.Data = local_68.Data.AllocatorInstance.Data;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return true;
}

