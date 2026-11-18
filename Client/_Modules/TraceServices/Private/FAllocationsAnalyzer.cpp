// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// FAllocationsAnalyzer @ 14d3caee0

FAllocationsAnalyzer * __thiscall
TraceServices::FAllocationsAnalyzer::FAllocationsAnalyzer
          (FAllocationsAnalyzer *this,IAnalysisSession *param_1,FAllocationsProvider *param_2,
          FMetadataProvider *param_3)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FAllocationsAnalyzer_TraceServices__6B_;
  this->BaseCycle = 0;
  this->LastMarkerCycle = 0;
  this->LastMarkerSeconds = 0.0;
  this->MarkerPeriod = 0;
  this->SizeShift = '\0';
  this->AllocationsProvider = param_2;
  this->MetadataProvider = param_3;
  this->TagIdMetadataType = 0xffff;
  return this;
}

// ~FAllocationsAnalyzer @ 14d3cef10

void __thiscall
TraceServices::FAllocationsAnalyzer::~FAllocationsAnalyzer(FAllocationsAnalyzer *this)

{
  this->_padding_ = (longlong)&___7FAllocationsAnalyzer_TraceServices__6B_;
  return;
}

// GetCurrentTime @ 14d3e0660

double __thiscall TraceServices::FAllocationsAnalyzer::GetCurrentTime(FAllocationsAnalyzer *this)

{
  return this->LastMarkerSeconds;
}

// OnAnalysisBegin @ 14d3e7dd0

void __thiscall
TraceServices::FAllocationsAnalyzer::OnAnalysisBegin
          (FAllocationsAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Memory","Init",0);
  (**(code **)*pFVar1)(pFVar1,1,"Memory","Alloc",0);
  (**(code **)*pFVar1)(pFVar1,2,"Memory","AllocSystem",0);
  (**(code **)*pFVar1)(pFVar1,3,"Memory","AllocVideo",0);
  (**(code **)*pFVar1)(pFVar1,4,"Memory","Free",0);
  (**(code **)*pFVar1)(pFVar1,5,"Memory","FreeSystem",0);
  (**(code **)*pFVar1)(pFVar1,6,"Memory","FreeVideo",0);
  (**(code **)*pFVar1)(pFVar1,7,"Memory","ReallocAlloc",0);
  (**(code **)*pFVar1)(pFVar1,8,"Memory","ReallocAllocSystem",0);
  (**(code **)*pFVar1)(pFVar1,9,"Memory","ReallocFree",0);
  (**(code **)*pFVar1)(pFVar1,10,"Memory","ReallocFreeSystem",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"Memory","HeapMarkAlloc",0);
  (**(code **)*pFVar1)(pFVar1,0xc,"Memory","HeapUnmarkAlloc",0);
  (**(code **)*pFVar1)(pFVar1,0xd,"Memory","UpdateAlloc",0);
  (**(code **)*pFVar1)(pFVar1,0xe,"Memory","MemorySwapOp",0);
  (**(code **)*pFVar1)(pFVar1,0xf,"Memory","Marker",0);
  (**(code **)*pFVar1)(pFVar1,0x10,"Memory","TagSpec",0);
  (**(code **)*pFVar1)(pFVar1,0x11,"Memory","HeapSpec",0);
  (**(code **)*pFVar1)(pFVar1,0x12,"Memory","MemoryScope",1);
  (**(code **)*pFVar1)(pFVar1,0x13,"Memory","MemoryScopePtr",1);
  return;
}

// OnAnalysisEnd @ 14d3e9870

void __thiscall TraceServices::FAllocationsAnalyzer::OnAnalysisEnd(FAllocationsAnalyzer *this)

{
  IAnalysisSession *pIVar1;
  FAllocationsProvider *pFVar2;
  double dVar3;
  double dVar4;
  
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  dVar4 = (double)(**(code **)((longlong)*this->Session + 0x30))();
  if (dVar4 < this->LastMarkerSeconds) {
    (**(code **)((longlong)*this->Session + 0x38))();
  }
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  pFVar2 = this->AllocationsProvider;
  dVar3 = this->LastMarkerSeconds;
  if (this->LastMarkerSeconds <= dVar4) {
    dVar3 = dVar4;
  }
  (**(code **)(pFVar2->_padding_ + 8))(&pFVar2->_padding_);
  FAllocationsProvider::EditOnAnalysisCompleted(this->AllocationsProvider,dVar3);
                    /* WARNING: Could not recover jumptable at 0x00014d3e9905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar2->_padding_ + 0x10))(&pFVar2->_padding_);
  return;
}

// OnEvent @ 14d3eb620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FAllocationsAnalyzer::OnEvent
          (FAllocationsAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *this_00;
  IAnalysisSession *pIVar1;
  FAllocationsProvider *pFVar2;
  code *pcVar3;
  uchar uVar4;
  uchar uVar5;
  EMemoryTraceSwapOperation EVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FAllocationItem *pFVar15;
  wchar_t *pwVar16;
  double *pdVar17;
  ulong64 uVar18;
  longlong lVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  FAllocationsProvider *pFVar22;
  EMemoryTraceHeapFlags EVar23;
  EMemoryTraceHeapAllocationFlags EVar24;
  double dVar25;
  uint local_res10 [4];
  uint local_res20 [2];
  FLLMScope local_98;
  uint local_94;
  uint local_90;
  FString local_88;
  FMemScope local_78;
  TStringView<wchar_t> local_70;
  TStringView<wchar_t> local_60 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name102,L"Insights/FAllocationsAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_98,LLMScope_Name102,false,None,Default,true);
  FMemScope::FMemScope(&local_78,&LLMScope_Name102,true);
  this_00 = param_3->EventData;
  bVar8 = false;
  switch(param_1) {
  case 0:
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Version",0);
    if (1 < uVar14 - 1) {
      if (1 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      goto switchD_14d3eb6d5_default;
    }
    dVar25 = this->LastMarkerSeconds;
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"MarkerPeriod",0);
    this->MarkerPeriod = uVar14;
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"MinAlignment",'\0');
    uVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"SizeShift",'\0');
    this->SizeShift = uVar5;
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"PageSize",0);
    pFVar22 = this->AllocationsProvider;
    if (uVar18 < 0x1000) {
      uVar18 = 0x1000;
    }
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    pFVar2 = this->AllocationsProvider;
    (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
    if (pFVar2->bInitialized == false) {
      pFVar2->InitTime = dVar25;
      local_60[0].DataPtr = L"System memory";
      pFVar2->PlatformPageSize = uVar18;
      pFVar2->MinAlignment = uVar4;
      local_60[0].Size = 0xd;
      FAllocationsProvider::AddHeapSpec(pFVar2,0,0,local_60,Root);
      pFVar2->bInitialized = true;
      FAllocationsProvider::AdvanceTimelines(pFVar2,dVar25);
    }
    goto LAB_14d3ec188;
  case 1:
  case 7:
    goto switchD_14d3eb6d5_caseD_1;
  case 2:
  case 3:
  case 8:
    bVar8 = param_1 == 3;
    goto switchD_14d3eb6d5_caseD_1;
  case 4:
  case 9:
    goto switchD_14d3eb6d5_caseD_4;
  case 5:
  case 6:
  case 10:
    bVar8 = param_1 == 6;
    goto switchD_14d3eb6d5_caseD_4;
  case 0xb:
    uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    dVar25 = this->LastMarkerSeconds;
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Address",0);
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CallstackId",0);
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"Heap",0);
    pdVar17 = UE::Trace::IAnalyzer::FEventData::GetValueImpl(this_00,"Flags",(schar *)local_res10);
    if (pdVar17 == (double *)0x0) {
switchD_14d3ebaba_caseD_f9:
      EVar24 = None;
    }
    else {
      switch((byte)local_res10[0]) {
      case 1:
      case 2:
      case 4:
      case 8:
        EVar24 = *(EMemoryTraceHeapAllocationFlags *)pdVar17;
        break;
      case 0xf8:
        EVar24 = (EMemoryTraceHeapAllocationFlags)(int)*pdVar17;
        break;
      default:
        goto switchD_14d3ebaba_caseD_f9;
      case 0xfc:
        EVar24 = (EMemoryTraceHeapAllocationFlags)(int)*(float *)pdVar17;
      }
    }
    pFVar22 = this->AllocationsProvider;
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    FAllocationsProvider::EditMarkAllocationAsHeap
              (this->AllocationsProvider,uVar14,dVar25,uVar13,uVar18,(uint)uVar10,EVar24);
LAB_14d3ec188:
    lVar19 = pFVar22->_padding_;
    plVar20 = &pFVar22->_padding_;
    break;
  case 0xc:
    uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    dVar25 = this->LastMarkerSeconds;
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Address",0);
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CallstackId",0);
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"Heap",0);
    pFVar22 = this->AllocationsProvider;
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    FAllocationsProvider::EditUnmarkAllocationAsHeap
              (this->AllocationsProvider,uVar14,dVar25,uVar13,uVar18,(uint)uVar10);
    lVar19 = pFVar22->_padding_;
    plVar20 = &pFVar22->_padding_;
    break;
  case 0xd:
    uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    dVar25 = this->LastMarkerSeconds;
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Address",0);
    local_res10[0] =
         UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CallstackId",0);
    bVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"RootHeap",'\0');
    pFVar22 = this->AllocationsProvider;
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    pFVar2 = this->AllocationsProvider;
    (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
    if (pFVar2->bInitialized != false) {
      pFVar15 = FAllocationsProvider::FreeInternal
                          (pFVar2,uVar14,dVar25,local_res10[0],uVar18,(uint)bVar7);
      if (pFVar15 != (FAllocationItem *)0x0) {
        FAllocationsProvider::AllocInternal
                  (pFVar2,uVar14,dVar25,pFVar15->AllocCallstackId,uVar18,
                   pFVar15->SizeAndAlignment & 0xffffffffffffff,
                   (uint)(byte)(pFVar15->SizeAndAlignment >> 0x38),(uint)bVar7);
      }
    }
    (**(code **)(pFVar22->_padding_ + 0x10))(&pFVar22->_padding_);
  case 0xe:
    uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    dVar25 = this->LastMarkerSeconds;
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Address",0);
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CallstackId",0);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CompressedSize",0);
    EVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"SwapOp",'\0');
    pFVar22 = this->AllocationsProvider;
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    FAllocationsProvider::EditSwapOp
              (this->AllocationsProvider,uVar14,dVar25,uVar18,EVar6,(ulonglong)uVar12,uVar13);
    lVar19 = pFVar22->_padding_;
    plVar20 = &pFVar22->_padding_;
    break;
  case 0xf:
    uVar18 = this->BaseCycle;
    if (uVar18 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    }
    else {
      uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Cycle",0);
      uVar18 = uVar14 + uVar18;
    }
    if (uVar18 < this->LastMarkerCycle) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6995464524941754634>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\AllocationsAnalysis.cpp"
                         ,0x10a,"Cycle >= LastMarkerCycle");
      if (bVar8) {
code_r0x00014d3ec167:
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    else {
      dVar25 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar18);
      if ((dVar25 < this->LastMarkerSeconds) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Seconds >= LastMarkerSeconds",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\AllocationsAnalysis.cpp"
                             ,0x10d,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if ((dVar25 - this->LastMarkerSeconds < __real_4072c00000000000) ||
         (this->LastMarkerSeconds == 0.0)) {
        this->LastMarkerCycle = uVar18;
        pIVar1 = this->Session;
        this->LastMarkerSeconds = dVar25;
        (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
        dVar25 = (double)(**(code **)((longlong)*this->Session + 0x30))();
        if (dVar25 < this->LastMarkerSeconds) {
          (**(code **)((longlong)*this->Session + 0x38))();
        }
        (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6995464524941754638>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\AllocationsAnalysis.cpp"
                           ,0x10e,
                           "(Seconds - LastMarkerSeconds < 5 * 60.0) || LastMarkerSeconds == 0.0f");
        if (bVar8) goto code_r0x00014d3ec167;
      }
    }
    goto switchD_14d3eb6d5_default;
  case 0x10:
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Tag",0);
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"Parent",0)
    ;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(param_3->EventData,"Display",&local_88);
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar21.Data = local_88.Data.AllocatorInstance.Data;
    }
    pwVar16 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar21.Data);
    pFVar22 = this->AllocationsProvider;
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    pFVar2 = this->AllocationsProvider;
    (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
    FTagTracker::AddTagSpec(&pFVar2->TagTracker,uVar14,uVar13,pwVar16);
    (**(code **)(pFVar22->_padding_ + 0x10))(&pFVar22->_padding_);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    goto switchD_14d3eb6d5_default;
  case 0x11:
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"Id",0);
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"ParentId",0);
    pdVar17 = UE::Trace::IAnalyzer::FEventData::GetValueImpl(this_00,"Flags",(schar *)local_res20);
    if (pdVar17 == (double *)0x0) {
switchD_14d3ebf7a_caseD_f9:
      EVar23 = None;
    }
    else {
      switch((byte)local_res20[0]) {
      case 1:
        EVar23 = (EMemoryTraceHeapFlags)*(byte *)pdVar17;
        break;
      case 2:
      case 4:
      case 8:
        EVar23 = *(EMemoryTraceHeapFlags *)pdVar17;
        break;
      case 0xf8:
        EVar23 = (EMemoryTraceHeapFlags)(int)*pdVar17;
        break;
      default:
        goto switchD_14d3ebf7a_caseD_f9;
      case 0xfc:
        EVar23 = (EMemoryTraceHeapFlags)(int)*(float *)pdVar17;
      }
    }
    local_70.DataPtr = (wchar_t *)0x0;
    local_70.Size = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Name",&local_70);
    pFVar22 = this->AllocationsProvider;
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    pFVar2 = this->AllocationsProvider;
    (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
    FAllocationsProvider::AddHeapSpec(pFVar2,(uint)uVar10,(uint)uVar11,&local_70,EVar23);
    lVar19 = pFVar22->_padding_;
    plVar20 = &pFVar22->_padding_;
    break;
  case 0x12:
    uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    if (param_2 == EnterScope) {
      uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"Tag",0);
      pFVar22 = this->AllocationsProvider;
      (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
      pFVar2 = this->AllocationsProvider;
      (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
      FTagTracker::PushTag(&pFVar2->TagTracker,uVar14,'\0',uVar13);
      lVar19 = pFVar22->_padding_;
      plVar20 = &pFVar22->_padding_;
    }
    else {
      if (param_2 != LeaveScope) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6995464524941754702>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\AllocationsAnalysis.cpp"
                           ,0x14e,"Style == EStyle::LeaveScope");
        if (bVar8) goto code_r0x00014d3ec167;
        goto switchD_14d3eb6d5_default;
      }
      pFVar22 = this->AllocationsProvider;
      (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
      pFVar2 = this->AllocationsProvider;
      (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
      FTagTracker::PopTag(&pFVar2->TagTracker,uVar14,'\0');
      lVar19 = pFVar22->_padding_;
      plVar20 = &pFVar22->_padding_;
    }
    break;
  case 0x13:
    uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    if (param_2 == EnterScope) {
      uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                         (param_3->EventData,"Ptr",0);
      bVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"RootHeap",'\0');
      pFVar22 = this->AllocationsProvider;
      (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
      FAllocationsProvider::EditPushTagFromPtr
                (this->AllocationsProvider,uVar14,'\0',uVar18,(uint)bVar7);
      lVar19 = pFVar22->_padding_;
      plVar20 = &pFVar22->_padding_;
      break;
    }
    if (param_2 != LeaveScope) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6995464524941754740>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\AllocationsAnalysis.cpp"
                         ,0x174,"Style == EStyle::LeaveScope");
      if (bVar8) goto code_r0x00014d3ec167;
      goto switchD_14d3eb6d5_default;
    }
    pFVar22 = this->AllocationsProvider;
    (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
    goto LAB_14d3ec17c;
  default:
    goto switchD_14d3eb6d5_default;
  }
  (**(code **)(lVar19 + 0x10))(plVar20);
switchD_14d3eb6d5_default:
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(&local_98);
  return true;
switchD_14d3eb6d5_caseD_4:
  uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
  dVar25 = this->LastMarkerSeconds;
  uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Address",0);
  local_res10[0] = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CallstackId",0)
  ;
  bVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"RootHeap",bVar8);
  pFVar22 = this->AllocationsProvider;
  (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
  if ((ushort)(param_1 - 9) < 2) {
    FAllocationsProvider::EditPushTagFromPtr
              (this->AllocationsProvider,uVar14,'\0',uVar18,(uint)bVar7);
  }
  pFVar2 = this->AllocationsProvider;
  (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
  if (pFVar2->bInitialized != false) {
    pFVar2->FreeEvents = pFVar2->FreeEvents + 1;
    FAllocationsProvider::FreeInternal(pFVar2,uVar14,dVar25,local_res10[0],uVar18,(uint)bVar7);
  }
  goto LAB_14d3ec188;
switchD_14d3eb6d5_caseD_1:
  uVar14 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
  dVar25 = this->LastMarkerSeconds;
  local_88.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Address",0);
  local_90 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CallstackId",0);
  bVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"RootHeap",bVar8);
  local_94 = (uint)bVar7;
  uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Size",0);
  local_res20[0] = (uint)(byte)(('\x01' << (this->SizeShift & 0x1f)) - 1);
  bVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                    (this_00,"AlignmentPow2_SizeLower",'\0');
  pFVar22 = this->AllocationsProvider;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,this->SizeShift);
  (**(code **)(pFVar22->_padding_ + 8))(&pFVar22->_padding_);
  pFVar2 = this->AllocationsProvider;
  (**(code **)(pFVar2->_padding_ + 0x18))(&pFVar2->_padding_);
  if (pFVar2->bInitialized != false) {
    pFVar2->AllocEvents = pFVar2->AllocEvents + 1;
    FAllocationsProvider::AllocInternal
              (pFVar2,uVar14,dVar25,local_90,(ulong64)local_88.Data.AllocatorInstance.Data,
               (ulonglong)(bVar7 & (byte)local_res20[0]) |
               (ulonglong)uVar13 << ((byte)local_res10[0] & 0x3f),
               1 << (bVar7 >> ((byte)local_res10[0] & 0x1f) & 0x1f),local_94);
  }
  if ((ushort)(param_1 - 7) < 2) {
LAB_14d3ec17c:
    FAllocationsProvider::EditPopTagFromPtr(this->AllocationsProvider,uVar14,'\0');
  }
  goto LAB_14d3ec188;
}

