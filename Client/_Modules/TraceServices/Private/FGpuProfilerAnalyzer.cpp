// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 14

// FGpuProfilerAnalyzer @ 14d3cc6a0

FGpuProfilerAnalyzer * __thiscall
TraceServices::FGpuProfilerAnalyzer::FGpuProfilerAnalyzer
          (FGpuProfilerAnalyzer *this,FAnalysisSession *param_1,FTimingProfilerProvider *param_2,
          IEditableCounterProvider *param_3)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FGpuProfilerAnalyzer_TraceServices__6B_;
  this->Version = 0;
  this->GpuWorkTimerId = 0;
  this->GpuWaitTimerId = 0;
  *(undefined8 *)&this->SpecIdToTimerIdMap = 0;
  *(undefined8 *)&(this->SpecIdToTimerIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpecIdToTimerIdMap).field_0x20 = 0;
  this->TimingProfilerProvider = param_2;
  this->EditableCounterProvider = param_3;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpecIdToTimerIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x48 = 0;
  *(undefined8 *)&this->BreadcrumbMap = 0;
  *(undefined8 *)&(this->BreadcrumbMap).field_0x8 = 0;
  *(undefined8 *)&(this->BreadcrumbMap).field_0x20 = 0;
  *(undefined4 *)&(this->BreadcrumbMap).field_0x28 = 0;
  *(undefined4 *)&(this->BreadcrumbMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BreadcrumbMap).field_0x34 = 0;
  *(undefined4 *)&(this->BreadcrumbMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BreadcrumbMap).field_0x40 = 0;
  *(undefined4 *)&(this->BreadcrumbMap).field_0x48 = 0;
  *(undefined8 *)&this->TimerMap = 0;
  *(undefined8 *)&(this->TimerMap).field_0x8 = 0;
  *(undefined8 *)&(this->TimerMap).field_0x20 = 0;
  *(undefined4 *)&(this->TimerMap).field_0x28 = 0;
  *(undefined4 *)&(this->TimerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimerMap).field_0x34 = 0;
  *(undefined4 *)&(this->TimerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TimerMap).field_0x40 = 0;
  *(undefined4 *)&(this->TimerMap).field_0x48 = 0;
  *(undefined8 *)&this->Queues = 0;
  *(undefined8 *)&(this->Queues).field_0x8 = 0;
  *(undefined8 *)&(this->Queues).field_0x20 = 0;
  *(undefined4 *)&(this->Queues).field_0x28 = 0;
  *(undefined4 *)&(this->Queues).field_0x2c = 0x80;
  *(undefined4 *)&(this->Queues).field_0x34 = 0;
  *(undefined4 *)&(this->Queues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Queues).field_0x40 = 0;
  *(undefined4 *)&(this->Queues).field_0x48 = 0;
  (this->ErrorData).NumWarnings = 0;
  (this->ErrorData).NumTimerWarnings = 0;
  (this->ErrorData).NumErrors = 0;
  (this->ErrorData).NumInterleavedEvents = 0;
  (this->ErrorData).NumInterleavedAndReversedEvents = 0;
  (this->ErrorData).NumMismatchedEvents = 0;
  (this->ErrorData).NumNegativeDurationEvents = 0;
  (this->ErrorData).InterleavedEventsMaxDelta = 0.0;
  (this->ErrorData).InterleavedAndReversedEventsMaxDelta = 0.0;
  (this->ErrorData).NegativeDurationEventsMaxDelta = 0.0;
  return this;
}

// AddGpuTimer @ 14d3d3670

uint __thiscall
TraceServices::FGpuProfilerAnalyzer::AddGpuTimer
          (FGpuProfilerAnalyzer *this,uint param_1,FString *param_2)

{
  int iVar1;
  FAnalysisSession *pFVar2;
  longlong *plVar3;
  int iVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<FString_const_&,unsigned_int_const_&> local_res18;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  FScriptContainerElement *local_38;
  undefined8 uStack_30;
  
  pFVar2 = this->Session;
  local_res18.Value = (uint *)0x0;
  local_res10[0] = param_1;
  (**(code **)(pFVar2->_padding_ + 0xa0))(pFVar2);
  local_48 = (param_2->Data).AllocatorInstance.Data;
  plVar3 = &this->TimingProfilerProvider->_padding_;
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  uStack_40 = (uint **)CONCAT44(uStack_40._4_4_,iVar4);
  uStack_30 = (uint **)CONCAT44(uStack_40._4_4_,iVar4);
  local_38 = local_48;
  local_res8[0] = (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
  local_48 = (FScriptContainerElement *)CONCAT44(local_48._4_4_,local_res8[0]);
  uStack_40 = &local_res18.Value;
  uStack_30 = (uint **)&local_48;
  local_38 = (FScriptContainerElement *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::FGpuProfilerAnalyzer::AddGpuTimer'::__l3::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
             ::Call;
  (**(code **)(this->TimingProfilerProvider->_padding_ + 0x38))
            (this->TimingProfilerProvider,&local_38);
  (**(code **)(pFVar2->_padding_ + 0xa8))(pFVar2);
  local_38 = (FScriptContainerElement *)local_res8;
  uStack_30 = &local_res18.Value;
  TSet<TTuple<unsigned_int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,wchar_t_const_*_const_&>_>
            ((TSet<TTuple<unsigned_int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,0>,FDefaultSetAllocator>
              *)&this->TimerMap,
             (TPairInitializer<unsigned_int_const_&,wchar_t_const_*_const_&> *)&local_res18,
             (bool *)&local_38);
  uStack_30 = (uint **)local_res8;
  local_38 = (FScriptContainerElement *)param_2;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->BreadcrumbMap,&local_res18,(bool *)&local_38);
  if (local_res10[0] != 0xffffffff) {
    local_38 = (FScriptContainerElement *)(local_res8 + 2);
    uStack_30 = (uint **)local_res8;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->SpecIdToTimerIdMap,
               (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)&local_res18,
               (bool *)&local_38);
  }
  return local_res8[0];
}

// BeginEvent @ 14d3d56a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FGpuProfilerAnalyzer::BeginEvent
          (FGpuProfilerAnalyzer *this,FQueue *param_1,int param_2,double param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FAnalysisSession *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  undefined1 auStackY_c8 [32];
  uint local_78 [2];
  undefined8 local_70;
  uint uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uStack_68 = param_4;
  pFVar4 = param_1->Stack[param_2].AllocatorInstance.Data;
  local_70 = param_3;
  if (((pFVar4 <= (FScriptContainerElement *)&local_70) &&
      ((FScriptContainerElement *)&local_70 <
       pFVar4 + (longlong)param_1->Stack[param_2].ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = param_1->Stack[param_2].ArrayNum;
  piVar1 = &param_1->Stack[param_2].ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->Stack[param_2].AllocatorInstance,piVar1);
  }
  param_1->Stack[param_2].ArrayNum = iVar9 + 1;
  pFVar4 = param_1->Stack[param_2].AllocatorInstance.Data + (longlong)iVar9 * 0x10;
  *(undefined4 *)pFVar4 = (undefined4)local_70;
  *(undefined4 *)(pFVar4 + 4) = local_70._4_4_;
  *(uint *)(pFVar4 + 8) = uStack_68;
  *(undefined4 *)(pFVar4 + 0xc) = uStack_64;
  param_1->LastTime = param_3;
  pFVar5 = this->Session;
  (**(code **)(pFVar5->_padding_ + 0xa0))(pFVar5);
  lVar6 = this->TimingProfilerProvider->_padding_;
  if (param_2 == 1) {
    plVar11 = (longlong *)(**(code **)(lVar6 + 0xa8))();
  }
  else {
    plVar11 = (longlong *)(**(code **)(lVar6 + 0xa0))();
  }
  if (plVar11 == (longlong *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7921341564222176892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\GpuProfilerTraceAnalysis.cpp"
                       ,0x184,"Timeline");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    local_78[0] = param_4;
    dVar12 = (double)(**(code **)(*plVar11 + 0x18))(plVar11);
    if (param_3 < dVar12) {
      puVar2 = &(this->ErrorData).NumInterleavedEvents;
      *puVar2 = *puVar2 + 1;
      (this->ErrorData).NumWarnings = (this->ErrorData).NumWarnings + 1;
      dVar3 = (this->ErrorData).InterleavedEventsMaxDelta;
      dVar13 = dVar12 - param_3;
      if (dVar12 - param_3 <= dVar3) {
        dVar13 = dVar3;
      }
      (this->ErrorData).InterleavedEventsMaxDelta = dVar13;
      param_3 = dVar12;
      if (((this->ErrorData).NumWarnings < 100) &&
         (uVar10 = (**(code **)(this->TimingProfilerProvider->_padding_ + 0x40))
                             (this->TimingProfilerProvider,param_4),
         2 < (byte)LogTraceServices._0_1_)) {
        GetTimerName(this,uVar10);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    (**(code **)(*plVar11 + 8))(plVar11,param_3,local_78);
    (**(code **)(this->Session->_padding_ + 0x38))(this->Session,param_3);
  }
  (**(code **)(pFVar5->_padding_ + 0xa8))(pFVar5);
  return;
}

// EndEvent @ 14d3db510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FGpuProfilerAnalyzer::EndEvent
          (FGpuProfilerAnalyzer *this,FQueue *param_1,int param_2,double param_3,uint param_4)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FAnalysisSession *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  
  param_1->LastTime = param_3;
  if (param_1->Stack[param_2].ArrayNum != 0) {
    if ((param_1->Stack[param_2].ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = param_1->Stack[param_2].ArrayNum;
    pFVar2 = param_1->Stack[param_2].AllocatorInstance.Data + (longlong)iVar4 * 0x10 + -0x10;
    dVar11 = *(double *)pFVar2;
    dVar3 = *(double *)(pFVar2 + 8);
    param_1->Stack[param_2].ArrayNum = iVar4 + -1;
    pFVar5 = this->Session;
    (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5);
    uVar9 = (**(code **)(this->TimingProfilerProvider->_padding_ + 0x40))
                      (this->TimingProfilerProvider,(ulonglong)dVar3 & 0xffffffff);
    (**(code **)(pFVar5->_padding_ + 0x90))(pFVar5);
    if ((param_4 != 0) && (param_4 != uVar9)) {
      puVar1 = &(this->ErrorData).NumMismatchedEvents;
      *puVar1 = *puVar1 + 1;
      (this->ErrorData).NumWarnings = (this->ErrorData).NumWarnings + 1;
      if (((this->ErrorData).NumWarnings < 100) && (2 < (byte)LogTraceServices._0_1_)) {
        GetTimerName(this,uVar9);
        GetTimerName(this,param_4);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    if (param_3 < dVar11) {
      puVar1 = &(this->ErrorData).NumNegativeDurationEvents;
      *puVar1 = *puVar1 + 1;
      (this->ErrorData).NumWarnings = (this->ErrorData).NumWarnings + 1;
      dVar11 = dVar11 - param_3;
      dVar3 = (this->ErrorData).NegativeDurationEventsMaxDelta;
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      (this->ErrorData).NegativeDurationEventsMaxDelta = dVar11;
      if ((this->ErrorData).NumWarnings < 100) {
        if (param_4 == 0) {
          if (2 < (byte)LogTraceServices._0_1_) {
            GetTimerName(this,uVar9);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
        }
        else if (2 < (byte)LogTraceServices._0_1_) {
          GetTimerName(this,uVar9);
          GetTimerName(this,param_4);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    pFVar5 = this->Session;
    (**(code **)(pFVar5->_padding_ + 0xa0))(pFVar5);
    lVar6 = this->TimingProfilerProvider->_padding_;
    if (param_2 == 1) {
      plVar10 = (longlong *)(**(code **)(lVar6 + 0xa8))();
    }
    else {
      plVar10 = (longlong *)(**(code **)(lVar6 + 0xa0))();
    }
    if (plVar10 == (longlong *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7921341564222176808>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\GpuProfilerTraceAnalysis.cpp"
                         ,0x1d8,"Timeline");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      dVar11 = (double)(**(code **)(*plVar10 + 0x18))(plVar10);
      if (param_3 < dVar11) {
        puVar1 = &(this->ErrorData).NumInterleavedAndReversedEvents;
        *puVar1 = *puVar1 + 1;
        (this->ErrorData).NumWarnings = (this->ErrorData).NumWarnings + 1;
        dVar3 = (this->ErrorData).InterleavedAndReversedEventsMaxDelta;
        dVar12 = dVar11 - param_3;
        if (dVar11 - param_3 <= dVar3) {
          dVar12 = dVar3;
        }
        (this->ErrorData).InterleavedAndReversedEventsMaxDelta = dVar12;
        param_3 = dVar11;
        if ((this->ErrorData).NumWarnings < 100) {
          if (param_4 == 0) {
            if (2 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices)
              ;
            }
          }
          else if (2 < (byte)LogTraceServices._0_1_) {
            GetTimerName(this,param_4);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
        }
      }
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
      (**(code **)(this->Session->_padding_ + 0x38))(this->Session,param_3);
    }
    (**(code **)(pFVar5->_padding_ + 0xa8))(pFVar5);
  }
  return;
}

// GetOrAddQueue @ 14d3e0ed0

FQueue * __thiscall
TraceServices::FGpuProfilerAnalyzer::GetOrAddQueue(FGpuProfilerAnalyzer *this,uint param_1)

{
  TMap<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue,0>_>
  *this_00;
  uint uVar1;
  FQueue *pFVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  TKeyInitializer<unsigned_int_const_&> local_res8;
  uint local_res10 [2];
  uint *local_res18;
  
  this_00 = &this->Queues;
  if (*(int *)&(this->Queues).field_0x8 != *(int *)&(this->Queues).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Queues).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Queues).field_0x38;
    }
    uVar1 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(this->Queues).field_0x48 - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&this_00->field_0x0);
        if (*puVar4 == param_1) {
          pFVar2 = (FQueue *)(puVar4 + 2);
          if (puVar4 == (uint *)0x0) {
            pFVar2 = (FQueue *)0x0;
          }
          if (pFVar2 != (FQueue *)0x0) {
            return pFVar2;
          }
          break;
        }
        uVar1 = puVar4[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res18 = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_res18);
  lVar5 = *(longlong *)&this_00->field_0x0 + (longlong)(int)local_res8.Key * 0x60;
  *(uint *)(lVar5 + 8) = local_res10[0];
  plVar3 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  *(longlong **)(lVar5 + 0x30) = plVar3;
  (**(code **)(*plVar3 + 0x20))(plVar3,0);
  plVar3 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  *(longlong **)(lVar5 + 0x38) = plVar3;
  (**(code **)(*plVar3 + 0x20))(plVar3,0);
  return (FQueue *)(lVar5 + 8);
}

// GetOrAddTimer @ 14d3e12c0

uint __thiscall
TraceServices::FGpuProfilerAnalyzer::GetOrAddTimer
          (FGpuProfilerAnalyzer *this,uint param_1,FString *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if ((param_1 != 0xffffffff) &&
     (*(int *)&(this->SpecIdToTimerIdMap).field_0x8 !=
      *(int *)&(this->SpecIdToTimerIdMap).field_0x34)) {
    puVar4 = *(undefined1 **)&(this->SpecIdToTimerIdMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SpecIdToTimerIdMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->SpecIdToTimerIdMap).field_0x48 - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&this->SpecIdToTimerIdMap);
        if (*puVar3 == param_1) {
          puVar2 = puVar3 + 1;
          if (puVar3 == (uint *)0x0) {
            puVar2 = (uint *)0x0;
          }
          if (puVar2 != (uint *)0x0) {
            return *puVar2;
          }
          break;
        }
        uVar1 = puVar3[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  uVar1 = AddGpuTimer(this,param_1,param_2);
  return uVar1;
}

// GetTimerName @ 14d3e3870

wchar_t * __thiscall
TraceServices::FGpuProfilerAnalyzer::GetTimerName(FGpuProfilerAnalyzer *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (param_1 == 0) {
    return L"<invalid>";
  }
  if (*(int *)&(this->TimerMap).field_0x8 != *(int *)&(this->TimerMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TimerMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TimerMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->TimerMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->TimerMap + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->TimerMap + (longlong)iVar2 * 0x18) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return L"<unknown>";
          }
          return (wchar_t *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return L"<unknown>";
}

// InitCounters @ 14d3e6940

void __thiscall
TraceServices::FGpuProfilerAnalyzer::InitCounters(FGpuProfilerAnalyzer *this,FQueue *param_1)

{
  IEditableCounter *pIVar1;
  
  pIVar1 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  param_1->NumDrawsCounter = pIVar1;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,0);
  pIVar1 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  param_1->NumPrimitivesCounter = pIVar1;
                    /* WARNING: Could not recover jumptable at 0x00014d3e698e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,0,*(code **)((longlong)*pIVar1 + 0x20));
  return;
}

// InitCountersDesc @ 14d3e69a0

void __thiscall
TraceServices::FGpuProfilerAnalyzer::InitCountersDesc
          (FGpuProfilerAnalyzer *this,FQueue *param_1,uchar param_2,uchar param_3,wchar_t *param_4)

{
  IEditableCounter *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  FString local_38;
  FString local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  ::FString::PrintfImpl(&local_28,L"NumDraws_GPU%u_%s_%u");
  ::FString::PrintfImpl(&local_38,L"NumPrimitives_GPU%u_%s_%u");
  pIVar1 = param_1->NumDrawsCounter;
  pcVar2 = *(code **)((longlong)*pIVar1 + 8);
  local_18 = local_28.Data.AllocatorInstance.Data;
  local_10 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_10 = 0;
  }
  uVar3 = (**(code **)(this->Session->_padding_ + 200))(this->Session,&local_18);
  (*pcVar2)(pIVar1,uVar3);
  (**(code **)((longlong)*param_1->NumDrawsCounter + 0x18))
            (param_1->NumDrawsCounter,L"The number of draw calls on the specified queue.");
  pIVar1 = param_1->NumPrimitivesCounter;
  pcVar2 = *(code **)((longlong)*pIVar1 + 8);
  local_18 = local_38.Data.AllocatorInstance.Data;
  local_10 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_10 = 0;
  }
  uVar3 = (**(code **)(this->Session->_padding_ + 200))(this->Session,&local_18);
  (*pcVar2)(pIVar1,uVar3);
  (**(code **)((longlong)*param_1->NumPrimitivesCounter + 0x18))
            (param_1->NumPrimitivesCounter,L"The number of primitives on the specified queue.");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// OnAnalysisBegin @ 14d3e89d0

void __thiscall
TraceServices::FGpuProfilerAnalyzer::OnAnalysisBegin
          (FGpuProfilerAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"GpuProfiler","Init",0);
  (**(code **)*pFVar1)(pFVar1,1,"GpuProfiler","QueueSpec",0);
  (**(code **)*pFVar1)(pFVar1,2,"GpuProfiler","EventFrameBoundary",0);
  (**(code **)*pFVar1)(pFVar1,3,"GpuProfiler","EventBreadcrumbSpec",0);
  (**(code **)*pFVar1)(pFVar1,4,"GpuProfiler","EventBeginBreadcrumb",0);
  (**(code **)*pFVar1)(pFVar1,5,"GpuProfiler","EventEndBreadcrumb",0);
  (**(code **)*pFVar1)(pFVar1,6,"GpuProfiler","EventBeginWork",0);
  (**(code **)*pFVar1)(pFVar1,7,"GpuProfiler","EventEndWork",0);
  (**(code **)*pFVar1)(pFVar1,8,"GpuProfiler","EventWait",0);
  (**(code **)*pFVar1)(pFVar1,9,"GpuProfiler","EventStats",0);
  (**(code **)*pFVar1)(pFVar1,10,"GpuProfiler","SignalFence",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"GpuProfiler","WaitFence",0);
  return;
}

// OnAnalysisEnd @ 14d3ea880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FGpuProfilerAnalyzer::OnAnalysisEnd(FGpuProfilerAnalyzer *this)

{
  if (((this->ErrorData).NumInterleavedEvents != 0) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (((this->ErrorData).NumInterleavedAndReversedEvents != 0) && (2 < (byte)LogTraceServices._0_1_)
     ) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (((this->ErrorData).NumMismatchedEvents != 0) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (((this->ErrorData).NumNegativeDurationEvents != 0) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (((this->ErrorData).NumTimerWarnings != 0) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (((0 < *(int *)&(this->Queues).field_0x8 - *(int *)&(this->Queues).field_0x34) ||
      (0 < *(int *)&(this->TimerMap).field_0x8 - *(int *)&(this->TimerMap).field_0x34)) &&
     (4 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// OnEvent @ 14d3f1a00

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FGpuProfilerAnalyzer::OnEvent
          (FGpuProfilerAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *this_00;
  IEditableCounter *pIVar1;
  code *pcVar2;
  uchar *_Src;
  double dVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  TArrayView<unsigned_char_const_,int> *pTVar10;
  FQueue *pFVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  longlong *plVar14;
  FAnalysisSession *pFVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FLLMScope local_res10 [5];
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffe78;
  undefined7 uVar19;
  FString local_168;
  FCborWriter local_158;
  FString local_138;
  FMemScope local_128;
  FString local_120;
  FArchiveState local_108;
  longlong local_78;
  FString *local_70;
  undefined8 local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name93,L"Insights/FGpuProfilerAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  uVar19 = (undefined7)((ulonglong)in_stack_fffffffffffffe78 >> 8);
  FLLMScope::FLLMScope(local_res10,LLMScope_Name93,false,None,Default,true);
  FMemScope::FMemScope(&local_128,&LLMScope_Name93,true);
  this_00 = param_3->EventData;
  switch(param_1) {
  case 0:
    bVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"Version",'\0');
    this->Version = (uint)bVar5;
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    break;
  case 1:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"TypeString",&local_168);
    local_138.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
    local_138.Data.ArrayNum = local_168.Data.ArrayNum + -1;
    if (local_168.Data.ArrayNum == 0) {
      local_138.Data.ArrayNum = 0;
    }
    uVar9 = (**(code **)(this->Session->_padding_ + 200))(this->Session,&local_138);
    pFVar15 = this->Session;
    (**(code **)(pFVar15->_padding_ + 0xa0))(pFVar15);
    plVar14 = &this->TimingProfilerProvider->_padding_;
    (**(code **)(*plVar14 + 0x88))
              (plVar14,uVar7,uVar7 >> 8 & 0xff,uVar7 >> 0x10 & 0xff,CONCAT71(uVar19,(char)uVar7),
               uVar9);
    (**(code **)(pFVar15->_padding_ + 0xa8))(pFVar15);
    pFVar11 = GetOrAddQueue(this,uVar7);
    ::FString::PrintfImpl(&local_138,L"NumDraws_GPU%u_%s_%u");
    ::FString::PrintfImpl(&local_120,L"NumPrimitives_GPU%u_%s_%u");
    pIVar1 = pFVar11->NumDrawsCounter;
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    local_158.Stream = (FArchive *)local_138.Data.AllocatorInstance.Data;
    local_158.ContextStack.AllocatorInstance.Data._0_4_ = local_138.Data.ArrayNum + -1;
    if (local_138.Data.ArrayNum == 0) {
      local_158.ContextStack.AllocatorInstance.Data._0_4_ = 0;
    }
    uVar9 = (**(code **)(this->Session->_padding_ + 200))(this->Session,&local_158);
    (*pcVar2)(pIVar1,uVar9);
    (**(code **)((longlong)*pFVar11->NumDrawsCounter + 0x18))
              (pFVar11->NumDrawsCounter,L"The number of draw calls on the specified queue.");
    pIVar1 = pFVar11->NumPrimitivesCounter;
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    local_158.Stream = (FArchive *)local_120.Data.AllocatorInstance.Data;
    local_158.ContextStack.AllocatorInstance.Data._0_4_ = local_120.Data.ArrayNum + -1;
    if (local_120.Data.ArrayNum == 0) {
      local_158.ContextStack.AllocatorInstance.Data._0_4_ = 0;
    }
    uVar9 = (**(code **)(this->Session->_padding_ + 200))(this->Session,&local_158);
    (*pcVar2)(pIVar1,uVar9);
    (**(code **)((longlong)*pFVar11->NumPrimitivesCounter + 0x18))
              (pFVar11->NumPrimitivesCounter,L"The number of primitives on the specified queue.");
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    goto LAB_14d3f212a;
  case 2:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"FrameNumber",0);
    pFVar11 = GetOrAddQueue(this,uVar7);
    pFVar11->FrameNumber = uVar8;
    if (0.0 < pFVar11->LastTime) {
      pFVar15 = this->Session;
      (**(code **)(pFVar15->_padding_ + 0xa0))(pFVar15);
      (**(code **)((longlong)*pFVar11->NumDrawsCounter + 0x50))
                (pFVar11->NumDrawsCounter,pFVar11->LastTime,pFVar11->NumDraws);
      (**(code **)((longlong)*pFVar11->NumPrimitivesCounter + 0x50))
                (pFVar11->NumPrimitivesCounter,pFVar11->LastTime,pFVar11->NumPrimitives);
      (**(code **)(pFVar15->_padding_ + 0xa8))(pFVar15);
    }
    pFVar11->NumDraws = 0;
    pFVar11->NumPrimitives = 0;
    pFVar11->LastTime = 0.0;
    break;
  case 3:
    OnEventBreadcrumbSpec(this,param_3);
    break;
  case 4:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"SpecId",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    local_res20 = CONCAT44(local_res20._4_4_,uVar8);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       (this_00,"GPUTimestampTOP",0);
    if (uVar12 == 0) break;
    dVar3 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
    uVar17 = SUB84(dVar3,0);
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
    pTVar10 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
                        (this_00,(TArrayView<unsigned_char_const_,int> *)&local_158,"Metadata");
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = pTVar10->ArrayNum;
    _Src = pTVar10->DataPtr;
    local_168.Data.ArrayNum = iVar16;
    if (iVar16 == 0) {
      local_168.Data.ArrayNum = 0;
      local_168.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar16,0,(ForAnyElementType *)&local_168,iVar16,&local_168.Data.ArrayMax);
      memcpy(local_168.Data.AllocatorInstance.Data,_Src,(longlong)iVar16);
    }
    ::FString::FString((FString *)&local_158,L"<unknown>");
    uVar7 = GetOrAddTimer(this,uVar7,(FString *)&local_158);
    if (local_158.Stream != (FArchive *)0x0) {
      FMemory::Free(local_158.Stream);
    }
    if (0 < local_168.Data.ArrayNum) {
      pFVar15 = this->Session;
      (**(code **)(pFVar15->_padding_ + 0xa0))(pFVar15);
      plVar14 = &this->TimingProfilerProvider->_padding_;
      uVar7 = (**(code **)(*plVar14 + 0x58))(plVar14,uVar7);
      (**(code **)(pFVar15->_padding_ + 0xa8))(pFVar15);
    }
    pFVar11 = GetOrAddQueue(this,(uint)local_res20);
    iVar16 = 0;
    goto LAB_14d3f211f;
  case 5:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       (this_00,"GPUTimestampBOP",0);
    if (uVar12 != 0) {
      dVar3 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
      pFVar11 = GetOrAddQueue(this,uVar7);
      EndEvent(this,pFVar11,0,dVar3,0);
    }
    break;
  case 6:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       (this_00,"GPUTimestampTOP",0);
    dVar3 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
    uVar17 = SUB84(dVar3,0);
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (this->GpuWorkTimerId == 0) {
      ::FString::FString((FString *)&local_158,L"GpuWork");
      uVar8 = AddGpuTimer(this,0xffffffff,(FString *)&local_158);
      this->GpuWorkTimerId = uVar8;
      if (local_158.Stream != (FArchive *)0x0) {
        FMemory::Free(local_158.Stream);
      }
    }
    pFVar11 = GetOrAddQueue(this,uVar7);
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x100,(ForAnyElementType *)&local_168,0,&local_168.Data.ArrayMax);
    local_res20 = 0;
    local_108._padding_ = 0;
    local_108.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_108.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_108._40_8_ = 0;
    local_108.ArSerializingDefaults = 0;
    local_108.ArPortFlags = 0;
    local_108.ArMaxSerializeSize = 0;
    local_108.ArUEVer.FileVersionUE4 = 0;
    local_108.ArUEVer.FileVersionUE5 = 0;
    local_108.ArLicenseeUEVer = 0;
    local_108.ArEngineVer.Major = 0;
    local_108.ArEngineVer.Minor = 0;
    local_108.ArEngineVer.Patch = 0;
    local_108.ArEngineVer._6_2_ = 0;
    local_108.ArEngineVer.Changelist = 0;
    local_108.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_108.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_108.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_108.SerializedProperty = (FProperty *)0x0;
    local_108.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_108.bCustomVersionsAreReset = false;
    local_108._129_7_ = 0;
    local_108.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_108);
    local_78 = 0;
    local_108._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_70 = &local_168;
    local_68 = 0;
    FArchiveState::SetIsSaving(&local_108,true);
    (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
    local_78 = (longlong)local_168.Data.ArrayNum;
    local_108._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FCborWriter::FCborWriter(&local_158,(FArchive *)&local_108,BigEndian);
    FCborWriter::WriteContainerStart(&local_158,Map,1);
    FCborWriter::WriteValue(&local_158,"Frame",5);
    FCborWriter::WriteValue(&local_158,(ulonglong)pFVar11->FrameNumber);
    FCborWriter::~FCborWriter(&local_158);
    FArchive::~FArchive((FArchive *)&local_108);
    pFVar15 = this->Session;
    (**(code **)(pFVar15->_padding_ + 0xa0))(pFVar15);
    plVar14 = &this->TimingProfilerProvider->_padding_;
    uVar7 = (**(code **)(*plVar14 + 0x58))(plVar14,this->GpuWorkTimerId,&local_168);
    (**(code **)(pFVar15->_padding_ + 0xa8))(pFVar15);
    iVar16 = 1;
LAB_14d3f211f:
    BeginEvent(this,pFVar11,iVar16,(double)CONCAT44(uVar18,uVar17),uVar7);
LAB_14d3f212a:
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    break;
  case 7:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       (this_00,"GPUTimestampBOP",0);
    dVar3 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
    pFVar11 = GetOrAddQueue(this,uVar7);
    EndEvent(this,pFVar11,1,dVar3,this->GpuWorkTimerId);
    break;
  case 8:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"StartTime",0);
    dVar3 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"EndTime",0);
    dVar4 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
    if (this->GpuWaitTimerId == 0) {
      ::FString::FString((FString *)&local_158,L"GpuWait");
      uVar8 = AddGpuTimer(this,0xffffffff,(FString *)&local_158);
      this->GpuWaitTimerId = uVar8;
      if (local_158.Stream != (FArchive *)0x0) {
        FMemory::Free(local_158.Stream);
      }
    }
    pFVar11 = GetOrAddQueue(this,uVar7);
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x100,(ForAnyElementType *)&local_168,0,&local_168.Data.ArrayMax);
    local_res20 = 0;
    local_108._padding_ = 0;
    local_108.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_108.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_108._40_8_ = 0;
    local_108.ArSerializingDefaults = 0;
    local_108.ArPortFlags = 0;
    local_108.ArMaxSerializeSize = 0;
    local_108.ArUEVer.FileVersionUE4 = 0;
    local_108.ArUEVer.FileVersionUE5 = 0;
    local_108.ArLicenseeUEVer = 0;
    local_108.ArEngineVer.Major = 0;
    local_108.ArEngineVer.Minor = 0;
    local_108.ArEngineVer.Patch = 0;
    local_108.ArEngineVer._6_2_ = 0;
    local_108.ArEngineVer.Changelist = 0;
    local_108.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_108.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_108.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_108.SerializedProperty = (FProperty *)0x0;
    local_108.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_108.bCustomVersionsAreReset = false;
    local_108._129_7_ = 0;
    local_108.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_108);
    local_78 = 0;
    local_108._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_70 = &local_168;
    local_68 = 0;
    FArchiveState::SetIsSaving(&local_108,true);
    (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
    local_78 = (longlong)local_168.Data.ArrayNum;
    local_108._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FCborWriter::FCborWriter(&local_158,(FArchive *)&local_108,BigEndian);
    FCborWriter::WriteContainerStart(&local_158,Map,1);
    FCborWriter::WriteValue(&local_158,"Frame",5);
    FCborWriter::WriteValue(&local_158,(ulonglong)pFVar11->FrameNumber);
    FCborWriter::~FCborWriter(&local_158);
    FArchive::~FArchive((FArchive *)&local_108);
    pFVar15 = this->Session;
    (**(code **)(pFVar15->_padding_ + 0xa0))(pFVar15);
    plVar14 = &this->TimingProfilerProvider->_padding_;
    uVar7 = (**(code **)(*plVar14 + 0x58))(plVar14,this->GpuWaitTimerId,&local_168);
    (**(code **)(pFVar15->_padding_ + 0xa8))(pFVar15);
    BeginEvent(this,pFVar11,1,dVar3,uVar7);
    EndEvent(this,pFVar11,1,dVar4,this->GpuWaitTimerId);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    break;
  case 9:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"NumDraws",0);
    uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"NumPrimitives",0);
    pFVar11 = GetOrAddQueue(this,uVar7);
    pFVar11->NumDraws = pFVar11->NumDraws + (ulonglong)uVar8;
    pFVar11->NumPrimitives = pFVar11->NumPrimitives + (ulonglong)uVar6;
    break;
  case 10:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"CPUTimestamp",0);
    pFVar13 = (FScriptContainerElement *)
              UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Value",0);
    GetOrAddQueue(this,uVar7);
    local_158.Stream =
         (FArchive *)UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
    pFVar15 = this->Session;
    local_158.ContextStack.AllocatorInstance.Data = pFVar13;
    (**(code **)(pFVar15->_padding_ + 0xa0))(pFVar15);
    plVar14 = &this->TimingProfilerProvider->_padding_;
    (**(code **)(*plVar14 + 0x90))(plVar14,uVar7,&local_158);
    goto LAB_14d3f2566;
  case 0xb:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueId",0);
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"CPUTimestamp",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"QueueToWaitForId",0);
    pFVar13 = (FScriptContainerElement *)
              UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Value",0);
    local_158.Stream =
         (FArchive *)UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar12);
    pFVar15 = this->Session;
    local_158.ContextStack.AllocatorInstance.Data = pFVar13;
    local_158.ContextStack.ArrayNum = uVar8;
    (**(code **)(pFVar15->_padding_ + 0xa0))(pFVar15);
    plVar14 = &this->TimingProfilerProvider->_padding_;
    (**(code **)(*plVar14 + 0x98))(plVar14,uVar7,&local_158);
LAB_14d3f2566:
    (**(code **)(pFVar15->_padding_ + 0xa8))(pFVar15);
  }
  FMemScope::~FMemScope(&local_128);
  FLLMScope::~FLLMScope(local_res10);
  return true;
}

// OnEventBreadcrumbSpec @ 14d3f8fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FGpuProfilerAnalyzer::OnEventBreadcrumbSpec
          (FGpuProfilerAnalyzer *this,FOnEventContext *param_1)

{
  FEventData *this_00;
  FAnalysisSession *pFVar1;
  code *pcVar2;
  FGpuProfilerAnalyzer *this_01;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  FArrayReader *this_02;
  void *pvVar8;
  wchar_t *pwVar9;
  size_t sVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ForAnyElementType _Str1;
  ForAnyElementType FVar14;
  uint *puVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  void *pvVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  FScriptContainerElement *local_3a0;
  longlong local_398;
  longlong local_390;
  FScriptContainerElement *local_388;
  longlong local_380;
  undefined4 local_378;
  char local_368 [8];
  FString local_360;
  FString local_350;
  uint local_340;
  longlong local_338;
  ForAnyElementType FStack_330;
  undefined8 local_328;
  undefined8 local_320;
  FString local_318;
  FString local_308;
  FCborContext local_2f8;
  undefined8 *local_2d8;
  undefined8 uStack_2d0;
  int local_2c8;
  undefined8 local_2c4;
  FGpuProfilerAnalyzer *local_2b8;
  FString local_2b0;
  FScriptContainerElement *local_2a0;
  int local_298;
  FScriptContainerElement *local_290;
  int local_288;
  undefined8 local_278;
  int iStack_270;
  undefined4 uStack_26c;
  uint local_268 [2];
  undefined8 **local_260;
  code *local_258;
  uint *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  FCborReader local_238;
  FArchiveState local_218;
  undefined8 local_188;
  void *local_180;
  longlong local_178;
  undefined8 local_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  this_00 = param_1->EventData;
  local_2b8 = this;
  local_340 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"SpecId",0);
  pvVar19 = (void *)0x0;
  local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.Data.ArrayNum = 0;
  local_350.Data.ArrayMax = 0;
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.Data.ArrayNum = 0;
  local_360.Data.ArrayMax = 0;
  UE::Trace::IAnalyzer::FEventData::GetString(this_00,"StaticName",&local_350);
  UE::Trace::IAnalyzer::FEventData::GetString(this_00,"NameFormat",&local_360);
  this_02 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"FieldNames");
  uVar4 = UE::Trace::IAnalyzer::FArrayReader::Num(this_02);
  pvVar8 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_02,0,local_368);
  if (pvVar8 != (void *)0x0) {
    iVar17 = -(int)local_368[0];
    if (iVar17 < 0) {
      iVar17 = (int)local_368[0];
    }
    if (iVar17 == 1) goto LAB_14d3f9072;
  }
  pvVar8 = pvVar19;
LAB_14d3f9072:
  if (((int)uVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar17 = local_360.Data.ArrayNum;
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_360.Data.ArrayNum != 0) {
    FVar14.Data = local_360.Data.AllocatorInstance.Data;
  }
  _Str1.Data = (FScriptContainerElement *)L"";
  if (local_350.Data.ArrayNum != 0) {
    _Str1.Data = local_350.Data.AllocatorInstance.Data;
  }
  iVar5 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)FVar14.Data);
  if (iVar5 == 0) {
    ::FString::Empty(&local_350);
    iVar17 = local_360.Data.ArrayNum;
  }
  iVar5 = 0;
  while( true ) {
    iVar6 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar6 = 0;
    }
    if (iVar6 <= iVar5) break;
    iVar13 = local_350.Data.ArrayNum + -1;
    iVar6 = iVar13;
    if (local_350.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (iVar6 <= iVar5) break;
    if (iVar5 < 0) {
LAB_14d3f9122:
      if (local_350.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      local_3a0 = (FScriptContainerElement *)CONCAT44(local_3a0._4_4_,iVar13);
      local_3a8 = (undefined8 *)CONCAT44(local_3a8._4_4_,iVar5);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar24 = local_350.Data.AllocatorInstance.Data + (longlong)pvVar19;
      iVar17 = local_360.Data.ArrayNum;
      if (-1 < iVar5) goto LAB_14d3f9168;
LAB_14d3f9175:
      iVar6 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar6 = 0;
      }
      local_3a0 = (FScriptContainerElement *)CONCAT44(local_3a0._4_4_,iVar6);
      local_3a8 = (undefined8 *)CONCAT44(local_3a8._4_4_,iVar5);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar17 = local_360.Data.ArrayNum;
    }
    else {
      if (local_350.Data.ArrayNum == 0) {
        iVar13 = -1;
        goto LAB_14d3f9122;
      }
      if (iVar13 <= iVar5) goto LAB_14d3f9122;
      pFVar24 = local_350.Data.AllocatorInstance.Data + (longlong)pvVar19;
LAB_14d3f9168:
      iVar6 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar6 = 0;
      }
      if (iVar6 <= iVar5) goto LAB_14d3f9175;
    }
    if (*(short *)pFVar24 != *(short *)((longlong)pvVar19 + local_360.Data.AllocatorInstance.Data))
    break;
    iVar5 = iVar5 + 1;
    pvVar19 = (void *)((longlong)pvVar19 + 2);
  }
  this_01 = local_2b8;
  if (1 < iVar5) {
    ::FString::RemoveAt(&local_360,0,iVar5,Default);
    iVar17 = local_360.Data.ArrayNum;
  }
  if (local_350.Data.ArrayNum < 2) {
    ::FString::FString(&local_308,L"% (=");
    uVar20 = 0;
    uVar21 = uVar20;
    iVar17 = local_360.Data.ArrayNum;
    while( true ) {
      iVar6 = 0;
      iVar5 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar5 = iVar6;
      }
      iVar13 = (int)uVar21;
      if (iVar5 <= iVar13) break;
      if (((iVar13 < 0) || (iVar17 == 0)) || (iVar17 + -1 <= iVar13)) {
        local_3a0 = (FScriptContainerElement *)CONCAT44(local_3a0._4_4_,iVar5);
        local_3a8 = (undefined8 *)CONCAT44(local_3a8._4_4_,iVar13);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar17 = local_360.Data.ArrayNum;
      }
      FVar14.Data = local_308.Data.AllocatorInstance.Data;
      if (local_308.Data.AllocatorInstance.Data ==
          local_308.Data.AllocatorInstance.Data + (longlong)local_308.Data.ArrayNum * 2) {
LAB_14d3f92a6:
        uVar21 = (ulonglong)(iVar13 + 1);
        uVar20 = uVar20 + 2;
      }
      else {
        do {
          if (*(short *)FVar14.Data == *(short *)(local_360.Data.AllocatorInstance.Data + uVar20)) {
            if ((int)((longlong)FVar14.Data - (longlong)local_308.Data.AllocatorInstance.Data >> 1)
                == -1) goto LAB_14d3f92a6;
            iVar5 = iVar17 + -1;
            if (iVar17 == 0) {
              iVar5 = iVar6;
            }
            if (iVar13 < iVar5) {
              iVar5 = iVar13;
            }
            iVar22 = iVar6;
            if (0 < iVar5) {
              iVar22 = iVar5;
            }
            FVar14.Data = (FScriptContainerElement *)L"";
            if (iVar17 != 0) {
              FVar14.Data = local_360.Data.AllocatorInstance.Data;
            }
            ::FString::ConstructFromPtrSize(&local_318,(wchar_t *)FVar14.Data,iVar22);
            if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_350.Data.AllocatorInstance.Data);
            }
            local_350.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
            local_350.Data.ArrayNum = local_318.Data.ArrayNum;
            local_350.Data.ArrayMax = local_318.Data.ArrayMax;
            local_318.Data.ArrayNum = 0;
            local_318.Data.ArrayMax = 0;
            local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            ::FString::RemoveAt(&local_360,0,iVar13,Default);
            iVar17 = local_360.Data.ArrayNum;
            goto LAB_14d3f9322;
          }
          FVar14.Data = FVar14.Data + 2;
        } while (FVar14.Data !=
                 local_308.Data.AllocatorInstance.Data + (longlong)local_308.Data.ArrayNum * 2);
        uVar21 = (ulonglong)(iVar13 + 1);
        uVar20 = uVar20 + 2;
      }
    }
LAB_14d3f9322:
    if (local_350.Data.ArrayNum < 2) {
      if (iVar17 < 2) {
        pwVar9 = (wchar_t *)
                 (**(code **)(this_01->Session->_padding_ + 0xd0))(this_01->Session,L"Unknown");
        ::FString::operator=(&local_350,pwVar9);
      }
      else {
        iVar5 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar5 = iVar6;
        }
        ::FString::AssignRange(&local_350,(wchar_t *)local_360.Data.AllocatorInstance.Data,iVar5);
        ::FString::Empty(&local_360);
      }
      iVar17 = local_360.Data.ArrayNum;
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
      iVar17 = local_360.Data.ArrayNum;
    }
  }
  local_328 = 0;
  local_338 = 0;
  FStack_330.Data = (FScriptContainerElement *)0x0;
  if (1 < iVar17) {
    local_2a0 = local_360.Data.AllocatorInstance.Data;
    local_298 = iVar17 + -1;
    if (iVar17 == 0) {
      local_298 = 0;
    }
    local_338 = (**(code **)(this_01->Session->_padding_ + 200))(this_01->Session,&local_2a0);
  }
  if (0 < (int)uVar4) {
    local_218._padding_ = 0;
    local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_218._40_8_ = 0;
    local_218.ArSerializingDefaults = 0;
    local_218.ArPortFlags = 0;
    local_218.ArMaxSerializeSize = 0;
    local_218.ArUEVer.FileVersionUE4 = 0;
    local_218.ArUEVer.FileVersionUE5 = 0;
    local_218.ArLicenseeUEVer = 0;
    local_218.ArEngineVer.Major = 0;
    local_218.ArEngineVer.Minor = 0;
    local_218.ArEngineVer.Patch = 0;
    local_218.ArEngineVer._6_2_ = 0;
    local_218.ArEngineVer.Changelist = 0;
    local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_218.SerializedProperty = (FProperty *)0x0;
    local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_218.bCustomVersionsAreReset = false;
    local_218._129_7_ = 0;
    local_218.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_218);
    local_188 = 0;
    local_170 = 0x7fffffffffffffff;
    local_218._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_180 = pvVar8;
    local_178 = (longlong)(int)uVar4;
    FArchiveState::SetIsLoading(&local_218,true);
    (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
    local_218._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    FCborReader::FCborReader(&local_238,(FArchive *)&local_218,BigEndian);
    local_2f8.Header.Header = 0x1c;
    local_2f8.RawTextValue.ArrayNum = 0;
    local_2f8.RawTextValue.ArrayMax = 0;
    local_2f8.field1_0x8.IntValue = 0;
    local_2f8.RawTextValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar3 = FCborReader::ReadNext(&local_238,&local_2f8);
    if (bVar3) {
      do {
        FVar14.Data = local_2f8.RawTextValue.AllocatorInstance.Data;
        if ((local_2f8.Header.Header & 0xe0) == 0x60) {
          local_68.Data = (FScriptContainerElement *)0x0;
          if (local_2f8.RawTextValue.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            local_58 = 0;
            local_60 = (FScriptContainerElement *)0x0;
          }
          else {
            sVar10 = strlen((char *)local_2f8.RawTextValue.AllocatorInstance.Data);
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)FVar14.Data,(int)sVar10);
            uVar4 = local_58 + 1;
            uVar23 = uVar4;
            if (uVar4 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar23 = 0;
                goto LAB_14d3f952f;
              }
            }
            else {
LAB_14d3f952f:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar23,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            UE::Core::Private::Convert
                      ((wchar_t *)local_60,uVar4,(uchar *)FVar14.Data,(int)sVar10 + 1);
          }
          ::FString::FString(&local_2b0,(wchar_t *)local_60);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          local_290 = local_2b0.Data.AllocatorInstance.Data;
          local_288 = local_2b0.Data.ArrayNum + -1;
          if (local_2b0.Data.ArrayNum == 0) {
            local_288 = 0;
          }
          local_320 = (**(code **)(this_01->Session->_padding_ + 200))(this_01->Session,&local_290);
          if (FStack_330.Data <= (FScriptContainerElement *)&local_320) {
            if ((FScriptContainerElement *)&local_320 <
                FStack_330.Data + (longlong)local_328._4_4_ * 8) {
              local_390 = (longlong)(int)local_328;
              local_388 = (FScriptContainerElement *)&DAT_00000008;
              local_3a8 = &local_320;
              local_3a0 = FStack_330.Data;
              local_398 = (longlong)local_328._4_4_;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          iVar17 = (int)local_328;
          if ((int)local_328 == local_328._4_4_) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&FStack_330,(int *)((longlong)&local_328 + 4));
          }
          local_328 = CONCAT44(local_328._4_4_,iVar17 + 1);
          *(undefined8 *)(FStack_330.Data + (longlong)iVar17 * 8) = local_320;
          if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          }
        }
        bVar3 = FCborReader::ReadNext(&local_238,&local_2f8);
      } while (bVar3);
    }
    if (local_2f8.RawTextValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.RawTextValue.AllocatorInstance.Data);
    }
    FCborReader::~FCborReader(&local_238);
    FArchive::~FArchive((FArchive *)&local_218);
  }
  if (*(int *)&(this_01->SpecIdToTimerIdMap).field_0x8 !=
      *(int *)&(this_01->SpecIdToTimerIdMap).field_0x34) {
    puVar18 = *(undefined1 **)&(this_01->SpecIdToTimerIdMap).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this_01->SpecIdToTimerIdMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar18 +
                     (ulonglong)(*(int *)&(this_01->SpecIdToTimerIdMap).field_0x48 - 1U & local_340)
                     * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar15 = (uint *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&this_01->SpecIdToTimerIdMap);
        if (*puVar15 == local_340) {
          puVar11 = puVar15 + 1;
          if (puVar15 == (uint *)0x0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 != (uint *)0x0) {
            uVar4 = *puVar11;
            pFVar1 = this_01->Session;
            local_278 = local_350.Data.AllocatorInstance.Data;
            iStack_270 = local_350.Data.ArrayNum + -1;
            if (local_350.Data.ArrayNum == 0) {
              iStack_270 = 0;
            }
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1);
            plVar16 = &this_01->TimingProfilerProvider->_padding_;
            local_248 = (undefined4)local_278;
            uStack_244 = local_278._4_4_;
            iStack_240 = iStack_270;
            uStack_23c = uStack_26c;
            (**(code **)(*plVar16 + 0x38))(plVar16,uVar4,&local_248);
            (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
            goto LAB_14d3f979e;
          }
          break;
        }
        uVar4 = puVar15[2];
      } while (uVar4 != 0xffffffff);
    }
  }
  uVar4 = AddGpuTimer(this_01,local_340,&local_350);
LAB_14d3f979e:
  if ((0 < (int)local_328) || (local_338 != 0)) {
    pFVar1 = this_01->Session;
    (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1);
    plVar16 = &this_01->TimingProfilerProvider->_padding_;
    uVar7 = (**(code **)(*plVar16 + 0x78))(plVar16,&local_338);
    local_2c8 = -1;
    local_2d8 = (undefined8 *)0x0;
    uStack_2d0 = 0;
    local_2c4 = 0;
    local_260 = &local_2d8;
    local_250 = local_268;
    local_258 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FGpuProfilerAnalyzer::OnEventBreadcrumbSpec'::__l48::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
                ::Call;
    local_268[0] = uVar4;
    (**(code **)(this_01->TimingProfilerProvider->_padding_ + 0x38))
              (this_01->TimingProfilerProvider,&local_258);
    if (local_2c8 != -1) {
      uVar4 = AddGpuTimer(this_01,local_340,&local_350);
      puVar15 = &(this_01->ErrorData).NumTimerWarnings;
      *puVar15 = *puVar15 + 1;
      if ((this_01->ErrorData).NumTimerWarnings < 100) {
        puVar12 = (undefined8 *)
                  (**(code **)(this_01->TimingProfilerProvider->_padding_ + 0x50))
                            (this_01->TimingProfilerProvider,local_2c8);
        if ((puVar12 == (undefined8 *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreviousMetadataSpec",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\GpuProfilerTraceAnalysis.cpp"
                               ,0x276,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (2 < (byte)LogTraceServices._0_1_) {
          local_388 = (FScriptContainerElement *)L"";
          if (local_350.Data.ArrayNum != 0) {
            local_388 = local_350.Data.AllocatorInstance.Data;
          }
          local_378 = (int)local_328;
          local_380 = local_338;
          local_390 = CONCAT44(local_390._4_4_,uVar4);
          local_398 = CONCAT44(local_398._4_4_,*(undefined4 *)(puVar12 + 2));
          local_3a0 = (FScriptContainerElement *)*puVar12;
          local_3a8 = local_2d8;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    plVar16 = &this_01->TimingProfilerProvider->_padding_;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar4,uVar7);
    (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
  }
  if (FStack_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_330.Data);
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTimerName @ 14d4023c0

void __thiscall
TraceServices::FGpuProfilerAnalyzer::SetTimerName
          (FGpuProfilerAnalyzer *this,uint param_1,uint param_2,TStringView<wchar_t> *param_3)

{
  FAnalysisSession *pFVar1;
  longlong *plVar2;
  undefined4 in_register_00000014;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pFVar1 = this->Session;
  (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,CONCAT44(in_register_00000014,param_1));
  local_18 = *(undefined4 *)&param_3->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iStack_10 = param_3->Size;
  uStack_c = *(undefined4 *)&param_3->field_0xc;
  plVar2 = &this->TimingProfilerProvider->_padding_;
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2,&local_18);
                    /* WARNING: Could not recover jumptable at 0x00014d402426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
  return;
}

