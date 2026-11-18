// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FCsvProfilerThreadDataProcessor @ 141915d70

FCsvProfilerThreadDataProcessor * __thiscall
FCsvProfilerThreadDataProcessor::FCsvProfilerThreadDataProcessor
          (FCsvProfilerThreadDataProcessor *this,TSharedPtr<FCsvProfilerThreadData,1> *param_1,
          FCsvStreamWriter *param_2,uint param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCsvThreadGroupStatProcessor *pFVar4;
  FCsvProfilerThreadDataProcessor *pFVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FString local_28;
  
  (this->ThreadData).Object = param_1->Object;
  pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ThreadData).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->MarkerStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerStack).ArrayNum = 0;
  (this->MarkerStack).ArrayMax = 0;
  (this->ExclusiveMarkerStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExclusiveMarkerStack).ArrayNum = 0;
  (this->ExclusiveMarkerStack).ArrayMax = 0;
  this->LastProcessedTimestamp = 0;
  this->Writer = param_2;
  this->RenderThreadId = param_3;
  this->RHIThreadId = param_4;
  pFVar4 = ::operator_new(0x108);
  if (pFVar4 == (FCsvThreadGroupStatProcessor *)0x0) {
    pFVar4 = (FCsvThreadGroupStatProcessor *)0x0;
  }
  else {
    if ((param_1->Object == (FCsvProfilerThreadData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCsvProfilerThreadDataProcessor *)(*pcVar2)();
      return pFVar5;
    }
    pFVar6 = ::FString::FString(&local_28,&param_1->Object->ThreadName);
    pFVar4->Writer = param_2;
    (pFVar4->StatSeriesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->StatSeriesArray).ArrayNum = 0;
    (pFVar4->StatSeriesArray).ArrayMax = 0;
    FCsvStatRegister::FCsvStatRegister(&pFVar4->StatRegister);
    ::FString::FString(&pFVar4->Name,pFVar6);
    pFVar4->AggregateStatProcessor = (FCsvThreadGroupStatProcessor *)0x0;
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  (this->StatProcessor).Object = pFVar4;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFCsvThreadGroupStatProcessor__U__DefaultDeleter_VFCsvThreadGroupStatProcessor___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = (longlong)pFVar4;
    pTVar8 = pTVar7;
  }
  (this->StatProcessor).SharedReferenceCount.ReferenceController = pTVar8;
  (this->ThreadMarkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadMarkers).ArrayNum = 0;
  (this->ThreadMarkers).ArrayMax = 0;
  (this->CustomStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomStats).ArrayNum = 0;
  (this->CustomStats).ArrayMax = 0;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  if (((this->ThreadData).Object == (FCsvProfilerThreadData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCsvProfilerThreadDataProcessor *)(*pcVar2)();
    return pFVar5;
  }
  if ((((this->ThreadData).Object)->DataProcessor != (FCsvProfilerThreadDataProcessor *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadData->DataProcessor == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0xae4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCsvProfilerThreadDataProcessor *)(*pcVar2)();
    return pFVar5;
  }
  if (((this->ThreadData).Object == (FCsvProfilerThreadData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCsvProfilerThreadDataProcessor *)(*pcVar2)();
    return pFVar5;
  }
  ((this->ThreadData).Object)->DataProcessor = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// Process @ 14195b620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014195bcb8) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCsvProfilerThreadDataProcessor::Process
          (FCsvProfilerThreadDataProcessor *this,FCsvProcessThreadDataStats *param_1,int *param_2,
          TSharedPtr<FCsvThreadGroupStatProcessor,1> *param_3)

{
  int *piVar1;
  byte bVar2;
  FCsvEvent *pFVar3;
  FCsvThreadGroupStatProcessor *this_00;
  FCsvProfilerThreadData *pFVar4;
  FScriptContainerElement *pFVar5;
  FCsvStatBase *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  DWORD DVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_2_::FStat_STAT_FCsvProfilerThreadData_ProcessThreadData>
  FVar25;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_16_::FStat_STAT_FCsvProfilerThreadData_TimingMarkers>
  FVar26;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_61_::FStat_STAT_FCsvProfilerThreadData_CustomStats>
  FVar27;
  FCsvStatSeries *pFVar28;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_75_::FStat_STAT_FCsvProfilerThreadData_Events>
  FVar29;
  ulong64 uVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  FCsvThreadGroupStatProcessor *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uchar uVar37;
  ulonglong uVar38;
  FCsvStatBase *pFVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  undefined1 auStackY_218 [32];
  uint local_1b4;
  FName local_1b0;
  Type local_1a8;
  FName local_1a0;
  FColor_u_0 local_180;
  FColor_u_0 local_17c;
  FColor_u_0 local_178;
  FColor_u_0 local_174;
  uint *local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  TSharedPtr<FCsvThreadGroupStatProcessor,1> *local_148;
  FName local_140;
  FName local_130;
  FName local_120;
  FName local_110;
  FCsvProcessedEvent local_100;
  ulonglong local_e8;
  ulong64 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulong64 uStack_c8;
  undefined8 local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FCsvStatBase local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_170 = (uint *)param_2;
  local_148 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FCsvProfilerThreadData_ProcessThreadData =
         (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_2_::FStat_STAT_FCsvProfilerThreadData_ProcessThreadData>
          )0x0;
    pFVar24 = ::FName::FName(&local_b8,"STAT_FCsvProfilerThreadData_ProcessThreadData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfilerThreadData_ProcessThreadData,
               *pFVar24,L"STAT_FCsvProfilerThreadData_ProcessThreadData","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar25 = StatPtr_STAT_FCsvProfilerThreadData_ProcessThreadData;
  if (StatPtr_STAT_FCsvProfilerThreadData_ProcessThreadData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_2_::FStat_STAT_FCsvProfilerThreadData_ProcessThreadData>
       )0x0) {
    pFVar24 = ::FName::FName(&local_b0,"STAT_FCsvProfilerThreadData_ProcessThreadData");
    FVar25 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_2_::FStat_STAT_FCsvProfilerThreadData_ProcessThreadData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCsvProfilerThreadData_ProcessThreadData,*pFVar24,
                          L"STAT_FCsvProfilerThreadData_ProcessThreadData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1a0 = *(FName *)FVar25;
  bVar9 = false;
  bVar12 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((local_1a0.ComparisonIndex.Value.Value == 0) && (local_1a0.Number == 0)) {
LAB_14195b854:
    bVar12 = bVar16;
    bVar9 = bVar15;
    bVar15 = false;
    local_1a0 = local_140;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar9 = false;
      bVar12 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = local_1a0.ComparisonIndex.Value.Value;
        local_168.Number = local_1a0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xc91);
        bVar9 = true;
        bVar12 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14195b854;
    FThreadStats::AddMessage(local_1a0,CycleScopeStart);
    bVar15 = true;
  }
  uVar20 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread != false) {
    uVar20 = GGameThreadId;
  }
  DVar19 = GetCurrentThreadId();
  if ((DVar19 != uVar20) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInCsvProcessingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                          ,0xc94,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->ThreadMarkers).ArrayNum = 0;
  if ((this->ThreadMarkers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ThreadMarkers).AllocatorInstance,0,&(this->ThreadMarkers).ArrayMax);
  }
  (this->CustomStats).ArrayNum = 0;
  if ((this->CustomStats).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->CustomStats).AllocatorInstance,0,&(this->CustomStats).ArrayMax);
  }
  pFVar3 = (FCsvEvent *)(this->Events).AllocatorInstance.Data;
  piVar1 = &(this->Events).ArrayMax;
  iVar21 = (this->Events).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FCsvEvent,int>(pFVar3,iVar21);
    (this->Events).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Events).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FCsvEvent,int>(pFVar3,iVar21);
    (this->Events).ArrayNum = 0;
  }
  if (((this->ThreadData).Object == (FCsvProfilerThreadData *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FCsvProfilerThreadData::FlushResults
            ((this->ThreadData).Object,&this->ThreadMarkers,&this->CustomStats,&this->Events);
  this_00 = (this->StatProcessor).Object;
  if (((this->ThreadData).Object == (FCsvProfilerThreadData *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar34 = (FCsvThreadGroupStatProcessor *)0x0;
  if ((((this->ThreadData).Object)->bIsTaskWorkerThread != false) &&
     (local_148->Object != (FCsvThreadGroupStatProcessor *)0x0)) {
    pFVar34 = local_148->Object;
  }
  this_00->AggregateStatProcessor = pFVar34;
  param_1->TimestampCount = param_1->TimestampCount + (this->ThreadMarkers).ArrayNum;
  param_1->CustomStatCount = param_1->CustomStatCount + (this->CustomStats).ArrayNum;
  param_1->EventCount = param_1->EventCount + (this->Events).ArrayNum;
  if (((this->ThreadData).Object == (FCsvProfilerThreadData *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar4 = (this->ThreadData).Object;
  if ((pFVar4->CsvTimeline).bIsSet == false) {
    if ((pFVar4 == (FCsvProfilerThreadData *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (this->ThreadData).Object;
    if (pFVar4->ThreadId != this->RenderThreadId) {
      if ((pFVar4 == (FCsvProfilerThreadData *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1a8 = Gamethread;
      if (((this->ThreadData).Object)->ThreadId != this->RHIThreadId) goto LAB_14195bb45;
    }
    local_1a8 = Renderthread;
  }
  else {
    if ((pFVar4 == (FCsvProfilerThreadData *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (this->ThreadData).Object;
    if (((pFVar4->CsvTimeline).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_1a8 = (pFVar4->CsvTimeline).TypedValue;
  }
LAB_14195bb45:
  if (0 < (this->ThreadMarkers).ArrayNum) {
    if ((*(ulonglong *)(this->ThreadMarkers).AllocatorInstance.Data < this->LastProcessedTimestamp)
       && (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3045156212573205326>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                               ,0xcb2,"ThreadMarkers[0].GetTimestamp() >= LastProcessedTimestamp"),
          bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar21 = (this->ThreadMarkers).ArrayNum;
    uVar31 = iVar21 - 1;
    uVar20 = 0;
    if ((int)uVar31 < iVar21) {
      uVar20 = ~uVar31 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this->LastProcessedTimestamp =
         *(ulong64 *)
          ((this->ThreadMarkers).AllocatorInstance.Data +
          (longlong)(this->ThreadMarkers).ArrayNum * 0x18 + -0x18);
  }
  uVar36 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar36 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_FCsvProfilerThreadData_TimingMarkers =
         (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_16_::FStat_STAT_FCsvProfilerThreadData_TimingMarkers>
          )0x0;
    pFVar24 = ::FName::FName(&local_a8,"STAT_FCsvProfilerThreadData_TimingMarkers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfilerThreadData_TimingMarkers,
               *pFVar24,L"STAT_FCsvProfilerThreadData_TimingMarkers","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  uVar38 = 0;
  FVar26 = StatPtr_STAT_FCsvProfilerThreadData_TimingMarkers;
  if (StatPtr_STAT_FCsvProfilerThreadData_TimingMarkers ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_16_::FStat_STAT_FCsvProfilerThreadData_TimingMarkers>
       )0x0) {
    pFVar24 = ::FName::FName(&local_a0,"STAT_FCsvProfilerThreadData_TimingMarkers");
    FVar26 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_16_::FStat_STAT_FCsvProfilerThreadData_TimingMarkers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCsvProfilerThreadData_TimingMarkers,*pFVar24,
                          L"STAT_FCsvProfilerThreadData_TimingMarkers","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b0 = *(FName *)FVar26;
  bVar16 = false;
  bVar10 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar14 = false;
  bVar18 = false;
  if ((local_1b0.ComparisonIndex.Value.Value == 0) && (local_1b0.Number == 0)) {
LAB_14195be08:
    bVar10 = bVar18;
    bVar16 = bVar14;
    bVar14 = false;
    local_1b0 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_17c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_17c._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar16 = false;
      bVar10 = true;
      bVar14 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = local_1b0.ComparisonIndex.Value.Value;
        local_160.Number = local_1b0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xcb8);
        bVar16 = true;
        bVar10 = true;
        bVar14 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14195be08;
    FThreadStats::AddMessage(local_1b0,CycleScopeStart);
    bVar14 = true;
  }
  bVar18 = true;
  uVar35 = uVar38;
  if (0 < (this->ThreadMarkers).ArrayNum) {
    do {
      uVar31 = (uint)uVar35;
      uVar20 = 0;
      if ((int)uVar31 < (this->ThreadMarkers).ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar17 = false;
      pFVar39 = (FCsvStatBase *)((this->ThreadMarkers).AllocatorInstance.Data + uVar38 * 0x18);
      if ((bVar18) && ((pFVar39->Flags & 0x10) != 0)) {
        iVar21 = (this->ExclusiveMarkerStack).ArrayNum;
        if ((pFVar39->Flags & 2) == 0) {
          if (0 < iVar21) {
            pFVar5 = (this->ExclusiveMarkerStack).AllocatorInstance.Data +
                     (longlong)(int)(iVar21 - 1U) * 0x18;
            iVar21 = ~(iVar21 - 1U) + iVar21;
            if (iVar21 != 0) {
              memmove(pFVar5,pFVar5 + 0x18,(longlong)iVar21 * 0x18);
            }
            iVar21 = (this->ExclusiveMarkerStack).ArrayNum;
            iVar32 = iVar21 + -1;
            (this->ExclusiveMarkerStack).ArrayNum = iVar32;
            if (0 < iVar32) {
              uVar20 = iVar21 - 2;
              uVar22 = 0;
              if ((int)uVar20 < iVar32) {
                uVar22 = ~uVar20 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar33 = (longlong)(this->ExclusiveMarkerStack).ArrayNum;
              bVar17 = true;
              pFVar5 = (this->ExclusiveMarkerStack).AllocatorInstance.Data;
              local_78.RawStatID = *(ulong64 *)(pFVar5 + lVar33 * 0x18 + -0x10);
              local_78._16_8_ = *(ulonglong *)(pFVar5 + lVar33 * 0x18 + -8) | 0x220000000000;
              local_78.Timestamp = pFVar39->Timestamp;
              goto LAB_14195c0d3;
            }
          }
        }
        else {
          if (0 < iVar21) {
            uVar20 = 0;
            if ((int)(iVar21 - 1U) < iVar21) {
              uVar20 = ~(iVar21 - 1U) >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar5 = (this->ExclusiveMarkerStack).AllocatorInstance.Data;
            bVar17 = true;
            lVar33 = (longlong)(this->ExclusiveMarkerStack).ArrayNum;
            local_78.RawStatID = *(ulong64 *)(pFVar5 + lVar33 * 0x18 + -0x10);
            local_78._16_8_ =
                 *(ulonglong *)(pFVar5 + lVar33 * 0x18 + -8) & 0xfffffdffffffffff | 0x200000000000;
            local_78.Timestamp = pFVar39->Timestamp;
          }
          pFVar6 = (FCsvStatBase *)(this->ExclusiveMarkerStack).AllocatorInstance.Data;
          if (((pFVar6 <= pFVar39) && (pFVar39 < pFVar6 + (this->ExclusiveMarkerStack).ArrayMax)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar21 = (this->ExclusiveMarkerStack).ArrayNum;
          piVar1 = &(this->ExclusiveMarkerStack).ArrayMax;
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(this->ExclusiveMarkerStack).AllocatorInstance,piVar1);
          }
          (this->ExclusiveMarkerStack).ArrayNum = iVar21 + 1;
          uVar30 = pFVar39->RawStatID;
          pFVar7 = (this->ExclusiveMarkerStack).AllocatorInstance.Data;
          pFVar5 = pFVar7 + (longlong)iVar21 * 0x18;
          *(ulong64 *)pFVar5 = pFVar39->Timestamp;
          *(ulong64 *)(pFVar5 + 8) = uVar30;
          *(undefined8 *)(pFVar7 + (longlong)iVar21 * 0x18 + 0x10) =
               *(undefined8 *)&pFVar39->CategoryIndex;
          if (bVar17) {
LAB_14195c0d3:
            pFVar39 = &local_78;
          }
        }
      }
      uVar20 = uVar31 - 1;
      local_d8 = uVar38 - 1;
      if (!bVar17) {
        uVar20 = uVar31;
        local_d8 = uVar38;
      }
      bVar18 = (bool)(bVar17 ^ 1);
      uVar22 = FFrameBoundaries::GetFrameNumberForTimestamp
                         (&GFrameBoundaries,local_1a8,pFVar39->Timestamp);
      uVar31 = *local_170;
      if ((int)uVar22 < (int)*local_170) {
        uVar31 = uVar22;
      }
      *local_170 = uVar31;
      if ((pFVar39->Flags & 2) == 0) {
        iVar21 = (this->MarkerStack).ArrayNum;
        if (0 < iVar21) {
          uVar31 = iVar21 - 1;
          local_e8 = 0;
          local_e0 = 0;
          uVar30 = 0;
          uVar36 = 0;
          bVar17 = false;
          if (-1 < (int)uVar31) {
            lVar33 = (longlong)(int)uVar31 * 0x18;
            do {
              uVar36 = (ulonglong)uVar31;
              uVar40 = ~uVar31 >> 0x1f;
              uVar23 = 0;
              if ((int)uVar31 < (this->MarkerStack).ArrayNum) {
                uVar23 = uVar40;
              }
              if ((uVar23 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (*(ulong64 *)((this->MarkerStack).AllocatorInstance.Data + lVar33 + 8) ==
                  pFVar39->RawStatID) {
                uVar23 = 0;
                if ((int)uVar31 < (this->MarkerStack).ArrayNum) {
                  uVar23 = uVar40;
                }
                if ((uVar23 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar7 = (this->MarkerStack).AllocatorInstance.Data;
                pFVar5 = pFVar7 + uVar36 * 0x18;
                local_d0 = *(ulonglong *)pFVar5;
                uStack_c8 = *(ulong64 *)(pFVar5 + 8);
                local_c0 = *(undefined8 *)(pFVar7 + uVar36 * 0x18 + 0x10);
                uVar23 = 0;
                if ((int)uVar31 < (this->MarkerStack).ArrayNum) {
                  uVar23 = uVar40;
                }
                if ((uVar23 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar5 = (this->MarkerStack).AllocatorInstance.Data + uVar36 * 0x18;
                iVar21 = (this->MarkerStack).ArrayNum + ~uVar31;
                if (iVar21 != 0) {
                  memmove(pFVar5,pFVar5 + 0x18,(longlong)iVar21 * 0x18);
                }
                piVar1 = &(this->MarkerStack).ArrayNum;
                *piVar1 = *piVar1 + -1;
                uVar30 = uStack_c8;
                uVar36 = local_d0;
                bVar17 = true;
                break;
              }
              lVar33 = lVar33 + -0x18;
              uVar31 = uVar31 - 1;
              uVar30 = local_e0;
              uVar36 = local_e8;
              bVar17 = false;
            } while (-1 < (int)uVar31);
          }
          if ((-1 < (int)uVar22) && (bVar17)) {
            if ((pFVar39->RawStatID != uVar30) &&
               (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_3045156212573205226>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                    ,0xd16,"Marker.RawStatID == StartMarker.RawStatID"), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((pFVar39->Timestamp < uVar36) &&
               (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_3045156212573205225>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                    ,0xd17,"Marker.GetTimestamp() >= StartMarker.GetTimestamp()"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar38 = pFVar39->Timestamp;
            if (uVar36 < uVar38) {
              pFVar28 = FCsvThreadGroupStatProcessor::FindOrCreateStatSeries
                                  (this_00,pFVar39,TimerData,false,false);
              if ((pFVar28->SeriesType != TimerData) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SeriesType == EType::TimerData",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                      ,1999,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (((uVar22 < pFVar28->CurrentWriteFrameNumber) &&
                  (pFVar28->CurrentWriteFrameNumber != 0xffffffff)) &&
                 (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3045156212573206576>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                      ,2000,
                                      "CurrentWriteFrameNumber <= DataFrameNumber || CurrentWriteFrameNumber == -1"
                                     ), bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (pFVar28->CurrentWriteFrameNumber != uVar22) {
                if (pFVar28->CurrentWriteFrameNumber != 0xffffffff) {
                  FCsvStatSeries::FlushIfDirty(pFVar28);
                }
                pFVar28->CurrentWriteFrameNumber = uVar22;
                pFVar28->bDirty = true;
              }
              (pFVar28->CurrentValue).AsTimerCycles =
                   (pFVar28->CurrentValue).AsTimerCycles + (uVar38 - uVar36);
              if ((GCsvStatCounts != false) && ((pFVar39->Flags & 0x20) == 0)) {
                pFVar28 = FCsvThreadGroupStatProcessor::FindOrCreateStatSeries
                                    (this_00,pFVar39,CustomStatInt,true,false);
                FCsvStatSeries::SetCustomStatValue_Int(pFVar28,uVar22,Accumulate,1);
              }
            }
          }
        }
      }
      else {
        pFVar6 = (FCsvStatBase *)(this->MarkerStack).AllocatorInstance.Data;
        if (((pFVar6 <= pFVar39) && (pFVar39 < pFVar6 + (this->MarkerStack).ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar21 = (this->MarkerStack).ArrayNum;
        piVar1 = &(this->MarkerStack).ArrayMax;
        if (iVar21 == *piVar1) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(this->MarkerStack).AllocatorInstance,piVar1);
        }
        (this->MarkerStack).ArrayNum = iVar21 + 1;
        uVar30 = pFVar39->RawStatID;
        pFVar7 = (this->MarkerStack).AllocatorInstance.Data;
        pFVar5 = pFVar7 + (longlong)iVar21 * 0x18;
        *(ulong64 *)pFVar5 = pFVar39->Timestamp;
        *(ulong64 *)(pFVar5 + 8) = uVar30;
        *(undefined8 *)(pFVar7 + (longlong)iVar21 * 0x18 + 0x10) =
             *(undefined8 *)&pFVar39->CategoryIndex;
      }
      uVar38 = local_d8 + 1;
      uVar35 = (ulonglong)(uVar20 + 1);
    } while ((int)(uVar20 + 1) < (this->ThreadMarkers).ArrayNum);
    uVar36 = (ulonglong)_tls_index;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(local_1b0,CycleScopeEnd);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar36 * 8) + 0x9d4c) < ::_TSS2)
     && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    StatPtr_STAT_FCsvProfilerThreadData_CustomStats =
         (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_61_::FStat_STAT_FCsvProfilerThreadData_CustomStats>
          )0x0;
    pFVar24 = ::FName::FName(&local_98,"STAT_FCsvProfilerThreadData_CustomStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfilerThreadData_CustomStats,
               *pFVar24,L"STAT_FCsvProfilerThreadData_CustomStats","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS2);
  }
  FVar27 = StatPtr_STAT_FCsvProfilerThreadData_CustomStats;
  if (StatPtr_STAT_FCsvProfilerThreadData_CustomStats ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_61_::FStat_STAT_FCsvProfilerThreadData_CustomStats>
       )0x0) {
    pFVar24 = ::FName::FName(&local_90,"STAT_FCsvProfilerThreadData_CustomStats");
    FVar27 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_61_::FStat_STAT_FCsvProfilerThreadData_CustomStats>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCsvProfilerThreadData_CustomStats,*pFVar24,
                          L"STAT_FCsvProfilerThreadData_CustomStats","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b0 = *(FName *)FVar27;
  bVar16 = false;
  bVar10 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar14 = false;
  bVar18 = false;
  if ((local_1b0.ComparisonIndex.Value.Value == 0) && (local_1b0.Number == 0)) {
LAB_14195c73d:
    bVar10 = bVar18;
    bVar16 = bVar14;
    bVar14 = false;
    local_1b0 = local_120;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar16 = false;
      bVar10 = true;
      bVar14 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = local_1b0.ComparisonIndex.Value.Value;
        local_158.Number = local_1b0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xd2f);
        bVar16 = true;
        bVar10 = true;
        bVar14 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14195c73d;
    FThreadStats::AddMessage(local_1b0,CycleScopeStart);
    bVar14 = true;
  }
  uVar35 = 0;
  local_1b4 = 0;
  uVar38 = uVar35;
  if (0 < (this->CustomStats).ArrayNum) {
    do {
      uVar31 = (uint)uVar38;
      uVar20 = 0;
      if ((int)uVar31 < (this->CustomStats).ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar39 = (FCsvStatBase *)((this->CustomStats).AllocatorInstance.Data + uVar35);
      uVar22 = FFrameBoundaries::GetFrameNumberForTimestamp
                         (&GFrameBoundaries,local_1a8,pFVar39->Timestamp);
      uVar20 = *local_170;
      if ((int)uVar22 < (int)*local_170) {
        uVar20 = uVar22;
      }
      *local_170 = uVar20;
      if (-1 < (int)uVar22) {
        bVar2 = pFVar39->Flags;
        pFVar28 = FCsvThreadGroupStatProcessor::FindOrCreateStatSeries
                            (this_00,pFVar39,((bVar2 >> 3 & 1) == 0) + CustomStatInt,false,false);
        if ((bVar2 >> 3 & 1) == 0) {
          fVar42 = *(float *)&pFVar39[1].Timestamp;
          uVar37 = pFVar39->UserData;
          if ((pFVar28->SeriesType != CustomStatFloat) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SeriesType == EType::CustomStatFloat",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                  ,0x808,L""), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((uVar22 < pFVar28->CurrentWriteFrameNumber) &&
              (pFVar28->CurrentWriteFrameNumber != 0xffffffff)) &&
             (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3045156212573206519>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                  ,0x809,
                                  "CurrentWriteFrameNumber <= DataFrameNumber || CurrentWriteFrameNumber == -1"
                                 ), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (pFVar28->CurrentWriteFrameNumber != uVar22) {
            if (pFVar28->CurrentWriteFrameNumber != 0xffffffff) {
              FCsvStatSeries::FlushIfDirty(pFVar28);
            }
            uVar37 = '\0';
            pFVar28->CurrentWriteFrameNumber = uVar22;
            pFVar28->bDirty = true;
          }
          if (uVar37 == '\0') {
LAB_14195c9c6:
            (pFVar28->CurrentValue).AsFloatValue = fVar42;
          }
          else if (uVar37 == '\x01') {
            fVar41 = (pFVar28->CurrentValue).AsFloatValue;
            if (fVar42 <= (pFVar28->CurrentValue).AsFloatValue) {
              fVar41 = fVar42;
            }
            (pFVar28->CurrentValue).AsFloatValue = fVar41;
          }
          else if (uVar37 == '\x02') {
            fVar41 = (pFVar28->CurrentValue).AsFloatValue;
            if ((pFVar28->CurrentValue).AsFloatValue <= fVar42) {
              fVar41 = fVar42;
            }
            (pFVar28->CurrentValue).AsFloatValue = fVar41;
          }
          else if (uVar37 == '\x03') {
            fVar42 = fVar42 + (pFVar28->CurrentValue).AsFloatValue;
            goto LAB_14195c9c6;
          }
        }
        else {
          iVar21 = (int)pFVar39[1].Timestamp;
          uVar37 = pFVar39->UserData;
          if ((pFVar28->SeriesType != CustomStatInt) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SeriesType == EType::CustomStatInt",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                  ,0x7e1,L""), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((uVar22 < pFVar28->CurrentWriteFrameNumber) &&
              (pFVar28->CurrentWriteFrameNumber != 0xffffffff)) &&
             (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3045156212573206558>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                  ,0x7e2,
                                  "CurrentWriteFrameNumber <= DataFrameNumber || CurrentWriteFrameNumber == -1"
                                 ), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (pFVar28->CurrentWriteFrameNumber != uVar22) {
            if (pFVar28->CurrentWriteFrameNumber != 0xffffffff) {
              FCsvStatSeries::FlushIfDirty(pFVar28);
            }
            uVar37 = '\0';
            pFVar28->CurrentWriteFrameNumber = uVar22;
            pFVar28->bDirty = true;
          }
          uVar31 = local_1b4;
          if (uVar37 == '\0') {
            (pFVar28->CurrentValue).AsIntValue = iVar21;
          }
          else if (uVar37 == '\x01') {
            iVar32 = (pFVar28->CurrentValue).AsIntValue;
            if (iVar21 < (pFVar28->CurrentValue).AsIntValue) {
              iVar32 = iVar21;
            }
            (pFVar28->CurrentValue).AsIntValue = iVar32;
          }
          else if (uVar37 == '\x02') {
            iVar32 = (pFVar28->CurrentValue).AsIntValue;
            if ((pFVar28->CurrentValue).AsIntValue < iVar21) {
              iVar32 = iVar21;
            }
            (pFVar28->CurrentValue).AsIntValue = iVar32;
          }
          else if (uVar37 == '\x03') {
            (pFVar28->CurrentValue).AsIntValue = (pFVar28->CurrentValue).AsIntValue + iVar21;
          }
        }
        if (GCsvStatCounts != false) {
          pFVar28 = FCsvThreadGroupStatProcessor::FindOrCreateStatSeries
                              (this_00,pFVar39,CustomStatInt,true,false);
          if ((pFVar28->SeriesType != CustomStatInt) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SeriesType == EType::CustomStatInt",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                  ,0x7e1,L""), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((uVar22 < pFVar28->CurrentWriteFrameNumber) &&
              (pFVar28->CurrentWriteFrameNumber != 0xffffffff)) &&
             (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3045156212573206558>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                  ,0x7e2,
                                  "CurrentWriteFrameNumber <= DataFrameNumber || CurrentWriteFrameNumber == -1"
                                 ), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (pFVar28->CurrentWriteFrameNumber == uVar22) {
            (pFVar28->CurrentValue).AsIntValue = (pFVar28->CurrentValue).AsIntValue + 1;
          }
          else {
            if (pFVar28->CurrentWriteFrameNumber != 0xffffffff) {
              FCsvStatSeries::FlushIfDirty(pFVar28);
            }
            pFVar28->CurrentWriteFrameNumber = uVar22;
            pFVar28->bDirty = true;
            (pFVar28->CurrentValue).AsIntValue = 1;
          }
        }
      }
      local_1b4 = uVar31 + 1;
      uVar35 = uVar35 + 0x20;
      uVar38 = (ulonglong)local_1b4;
    } while ((int)local_1b4 < (this->CustomStats).ArrayNum);
    uVar36 = (ulonglong)_tls_index;
  }
  uVar38 = 0;
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(local_1b0,CycleScopeEnd);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar36 * 8) + 0x9d4c) < ::_TSS3)
     && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    StatPtr_STAT_FCsvProfilerThreadData_Events =
         (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_75_::FStat_STAT_FCsvProfilerThreadData_Events>
          )0x0;
    pFVar24 = ::FName::FName(&local_88,"STAT_FCsvProfilerThreadData_Events");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfilerThreadData_Events,*pFVar24,
               L"STAT_FCsvProfilerThreadData_Events","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS3);
  }
  FVar29 = StatPtr_STAT_FCsvProfilerThreadData_Events;
  if (StatPtr_STAT_FCsvProfilerThreadData_Events ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_75_::FStat_STAT_FCsvProfilerThreadData_Events>
       )0x0) {
    pFVar24 = ::FName::FName(&local_80,"STAT_FCsvProfilerThreadData_Events");
    FVar29 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfilerThreadDataProcessor::Process(FCsvProcessThreadDataStats_&,int_&,TSharedPtr<FCsvThreadGroupStatProcessor,1>)_::_75_::FStat_STAT_FCsvProfilerThreadData_Events>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfilerThreadData_Events,
                          *pFVar24,L"STAT_FCsvProfilerThreadData_Events","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b0 = *(FName *)FVar29;
  bVar16 = false;
  bVar10 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar14 = false;
  bVar18 = false;
  if ((local_1b0.ComparisonIndex.Value.Value != 0) ||
     (bVar17 = bVar16, bVar11 = bVar10, local_1b0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_174.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar16 = false;
      bVar10 = true;
      bVar14 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = local_1b0.ComparisonIndex.Value.Value;
        local_150.Number = local_1b0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xd4e);
        bVar16 = true;
        bVar10 = true;
        bVar14 = true;
        bVar18 = true;
      }
    }
    bVar17 = bVar16;
    bVar11 = bVar10;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_1b0,CycleScopeStart);
      bVar14 = true;
      goto LAB_14195cd15;
    }
  }
  bVar10 = bVar18;
  bVar16 = bVar14;
  bVar14 = false;
  local_1b0 = local_110;
LAB_14195cd15:
  puVar13 = local_170;
  uVar36 = uVar38;
  if (0 < (this->Events).ArrayNum) {
    do {
      uVar31 = (uint)uVar38;
      uVar20 = 0;
      if ((int)uVar31 < (this->Events).ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->Events).AllocatorInstance.Data;
      uVar22 = FFrameBoundaries::GetFrameNumberForTimestamp
                         (&GFrameBoundaries,local_1a8,*(ulong64 *)(pFVar5 + uVar36 + 0x10));
      uVar20 = *puVar13;
      if ((int)uVar22 < (int)uVar20) {
        uVar20 = uVar22;
      }
      *puVar13 = uVar20;
      if (-1 < (int)uVar22) {
        local_100.EventText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.EventText.Data.ArrayNum = 0;
        local_100.EventText.Data.ArrayMax = 0;
        iVar21 = *(int *)(pFVar5 + uVar36 + 8) + -1;
        if (*(int *)(pFVar5 + uVar36 + 8) == 0) {
          iVar21 = 0;
        }
        ::FString::AssignRange(&local_100.EventText,*(wchar_t **)(pFVar5 + uVar36),iVar21);
        local_100.CategoryIndex = *(uint *)(pFVar5 + uVar36 + 0x18);
        local_100.FrameNumber = uVar22;
        FCsvStreamWriter::PushEvent(this->Writer,&local_100);
        if (local_100.EventText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.EventText.Data.AllocatorInstance.Data);
        }
      }
      uVar38 = (ulonglong)(uVar31 + 1);
      uVar36 = uVar36 + 0x20;
      bVar17 = bVar16;
      bVar11 = bVar10;
    } while ((int)(uVar31 + 1) < (this->Events).ArrayNum);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(local_1b0,CycleScopeEnd);
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(local_1a0,CycleScopeEnd);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_148->SharedReferenceCount).ReferenceController);
  return;
}

