// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FCsvProfilerThreadData @ 141915b90

FCsvProfilerThreadData * __thiscall
FCsvProfilerThreadData::FCsvProfilerThreadData
          (FCsvProfilerThreadData *this,TOptional<ECsvTimeline::Type> param_1)

{
  void *pvVar1;
  bool bVar2;
  DWORD DVar3;
  FThreadManager *this_00;
  ulonglong uVar4;
  FString *pFVar5;
  int *piVar6;
  
  (this->TimingMarkers).HeadBlock = (FBlock *)0x0;
  (this->TimingMarkers).TailBlock = (FBlock *)0x0;
  (this->TimingMarkers).Counter = 0;
  (this->TimingMarkers).ConsumerThreadReadIndex = 0;
  (this->TimingMarkers).ConsumerThreadDeleteIndex = 0;
  (this->CustomStats).HeadBlock = (FBlock *)0x0;
  (this->CustomStats).TailBlock = (FBlock *)0x0;
  (this->CustomStats).Counter = 0;
  (this->CustomStats).ConsumerThreadReadIndex = 0;
  (this->CustomStats).ConsumerThreadDeleteIndex = 0;
  (this->Events).HeadBlock = (FBlock *)0x0;
  (this->Events).TailBlock = (FBlock *)0x0;
  (this->Events).Counter = 0;
  (this->Events).ConsumerThreadReadIndex = 0;
  (this->Events).ConsumerThreadDeleteIndex = 0;
  DVar3 = GetCurrentThreadId();
  pvVar1 = ThreadLocalStoragePointer;
  pFVar5 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
            ::__l2::GameThreadName;
  uVar4 = (ulonglong)_tls_index;
  this->ThreadId = DVar3;
  piVar6 = (int *)(*(longlong *)((longlong)pvVar1 + uVar4 * 8) + 0x9d4c);
  if (*piVar6 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::GameThreadName,L"GameThread");
      atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__GameThreadName__
            );
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar6 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::RenderThreadName,L"RenderThread");
      atexit(`FThreadManager::GetThreadName'::__l2::
             _dynamic_atexit_destructor_for__RenderThreadName__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (DVar3 != GGameThreadId) {
    if (DVar3 == GRenderThreadId) {
      pFVar5 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::RenderThreadName;
    }
    else {
      this_00 = FThreadManager::Get();
      pFVar5 = FThreadManager::GetThreadNameInternal(this_00,DVar3);
    }
  }
  ::FString::FString(&this->ThreadName,pFVar5);
  bVar2 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                    ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  (this->CsvTimeline).bIsSet = false;
  this->bIsTaskWorkerThread = bVar2;
  bVar2 = *(bool *)((longlong)param_1 + 4);
  (this->CsvTimeline).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->CsvTimeline).TypedValue = *(Type *)param_1;
  }
  this->DataProcessor = (FCsvProfilerThreadDataProcessor *)0x0;
  (this->WaitStatNameStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaitStatNameStack).ArrayNum = 0;
  (this->WaitStatNameStack).ArrayMax = 0;
  return this;
}

// ~FCsvProfilerThreadData @ 14191b550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvProfilerThreadData::~FCsvProfilerThreadData(FCsvProfilerThreadData *this)

{
  int *piVar1;
  longlong *plVar2;
  FBlock *pFVar3;
  FBlock *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  int iVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_68;
  FName local_60;
  FName local_58;
  
  uVar18 = 0;
  if (!GIsRunning) goto LAB_14191b901;
  if ((this->DataProcessor != (FCsvProfilerThreadDataProcessor *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataProcessor == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x9ba,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_FCsvProfilerThreadData::~FCsvProfilerThreadData(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FCsvProfilerThreadData::~FCsvProfilerThreadData(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_FCsvProfilerThreadData::~FCsvProfilerThreadData(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_CSVProfiler_ThreadData_Destructor = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_68,"CSVProfiler_ThreadData_Destructor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:___cdecl_FCsvProfilerThreadData::~FCsvProfilerThreadData(void)___ptr64'::
                __l2::StatPtr_CSVProfiler_ThreadData_Destructor,*pFVar11,
               L"CSVProfiler_ThreadData_Destructor","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:___cdecl_FCsvProfilerThreadData::~FCsvProfilerThreadData(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_CSVProfiler_ThreadData_Destructor;
  if (_StatPtr_CSVProfiler_ThreadData_Destructor == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_60,"CSVProfiler_ThreadData_Destructor");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:___cdecl_FCsvProfilerThreadData::~FCsvProfilerThreadData(void)___ptr64'
                          ::__l2::StatPtr_CSVProfiler_ThreadData_Destructor,*pFVar11,
                         L"CSVProfiler_ThreadData_Destructor","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar10 == 0)) {
LAB_14191b710:
    bVar6 = false;
    FVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x9bc);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14191b710;
    local_res20 = FVar14.Value;
    uStackX_24 = uVar10;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar6 = true;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&Singleton);
  for (; (-1 < (int)uVar18 && ((int)uVar18 < Singleton.TlsInstances.ArrayNum)); uVar18 = uVar18 + 1)
  {
    uVar16 = ~uVar18 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar18 < Singleton.TlsInstances.ArrayNum) {
      uVar10 = uVar16;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar19 = (longlong)(int)uVar18 * 0x10;
    if (((*(longlong *)(Singleton.TlsInstances.AllocatorInstance.Data + lVar19) == 0) ||
        (*(longlong *)(Singleton.TlsInstances.AllocatorInstance.Data + lVar19 + 8) == 0)) ||
       (*(int *)(*(longlong *)(Singleton.TlsInstances.AllocatorInstance.Data + lVar19 + 8) + 8) < 1)
       ) {
      uVar10 = 0;
      if ((int)uVar18 < Singleton.TlsInstances.ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = Singleton.TlsInstances.AllocatorInstance.Data + lVar19;
      plVar2 = *(longlong **)(pFVar17 + 8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      iVar13 = Singleton.TlsInstances.ArrayNum + ~uVar18;
      if (iVar13 != 0) {
        memmove(pFVar17,pFVar17 + 0x10,(longlong)iVar13 << 4);
      }
      Singleton.TlsInstances.ArrayNum = Singleton.TlsInstances.ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&Singleton.TlsInstances.AllocatorInstance,Singleton.TlsInstances.ArrayNum,
                 &Singleton.TlsInstances.ArrayMax);
      uVar18 = uVar18 - 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&Singleton);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
LAB_14191b901:
  pFVar17 = (this->WaitStatNameStack).AllocatorInstance.Data;
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  pFVar17 = (this->ThreadName).Data.AllocatorInstance.Data;
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  TSingleProducerSingleConsumerList<FCsvEvent,32>::~TSingleProducerSingleConsumerList<FCsvEvent,32>
            (&this->Events);
  pFVar3 = (this->CustomStats).HeadBlock;
  while (pFVar3 != (FBlock *)0x0) {
    (this->CustomStats).HeadBlock = pFVar3->Next;
    ::operator_delete(pFVar3,0x2008);
    pFVar3 = (this->CustomStats).HeadBlock;
  }
  (this->CustomStats).HeadBlock = (FBlock *)0x0;
  (this->CustomStats).TailBlock = (FBlock *)0x0;
  pFVar4 = (this->TimingMarkers).HeadBlock;
  while (pFVar4 != (FBlock *)0x0) {
    (this->TimingMarkers).HeadBlock = pFVar4->Next;
    ::operator_delete(pFVar4,0x1808);
    pFVar4 = (this->TimingMarkers).HeadBlock;
  }
  (this->TimingMarkers).TailBlock = (FBlock *)0x0;
  (this->TimingMarkers).HeadBlock = (FBlock *)0x0;
  return;
}

// CreateTLSData @ 141931860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FCsvProfilerThreadData * __cdecl FCsvProfilerThreadData::CreateTLSData(void)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined8 uVar7;
  FName *pFVar8;
  LARGE_INTEGER *pLVar9;
  FCsvProfilerThreadData *this;
  LARGE_INTEGER LVar10;
  LARGE_INTEGER this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uchar auVar11 [8];
  longlong lVar12;
  LARGE_INTEGER LVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_28 [12];
  uint uStack_1c;
  
  this_00.QuadPart = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FCsvProfilerThreadData*___ptr64___cdecl_FCsvProfilerThreadData::CreateTLSData(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FCsvProfilerThreadData*___ptr64___cdecl_FCsvProfilerThreadData::CreateTLSData(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FCsvProfilerThreadData*___ptr64___cdecl_FCsvProfilerThreadData::CreateTLSData(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_CSVProfiler_ThreadData_CreateTLSData = (LARGE_INTEGER *)0x0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,"CSVProfiler_ThreadData_CreateTLSData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_FCsvProfilerThreadData*___ptr64___cdecl_FCsvProfilerThreadData::CreateTLSData(void)'
                ::__l2::StatPtr_CSVProfiler_ThreadData_CreateTLSData,*pFVar8,
               L"CSVProfiler_ThreadData_CreateTLSData","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
               ,true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_FCsvProfilerThreadData*___ptr64___cdecl_FCsvProfilerThreadData::CreateTLSData(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pLVar9 = _StatPtr_CSVProfiler_ThreadData_CreateTLSData;
  if (_StatPtr_CSVProfiler_ThreadData_CreateTLSData == (LARGE_INTEGER *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"CSVProfiler_ThreadData_CreateTLSData");
    pLVar9 = (LARGE_INTEGER *)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_class_FCsvProfilerThreadData*___ptr64___cdecl_FCsvProfilerThreadData::CreateTLSData(void)'
                         ::__l2::StatPtr_CSVProfiler_ThreadData_CreateTLSData,*pFVar8,
                        L"CSVProfiler_ThreadData_CreateTLSData","STATGROUP_Quick","STATCAT_Advanced"
                        ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar13 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar9->s;
  bVar3 = false;
  bVar5 = false;
  if ((LVar13.s.LowPart != 0) || (LVar13.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pLVar9[2]);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pLVar9[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x974);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar13;
      FThreadStats::AddMessage((FName)LVar13.s,CycleScopeStart);
      bVar4 = true;
      goto LAB_1419319dd;
    }
  }
  bVar4 = false;
  LVar13._0_4_ = 0;
  LVar13._4_4_ = 0;
LAB_1419319dd:
  EnterCriticalSection((LPCRITICAL_SECTION)&Singleton);
  this = ::operator_new(0xb8);
  LVar10.QuadPart = this_00.QuadPart;
  if (this != (FCsvProfilerThreadData *)0x0) {
    local_res8.s.HighPart._0_1_ = 0;
    LVar10 = (LARGE_INTEGER)FCsvProfilerThreadData(this,(TOptional<ECsvTimeline::Type>)&local_res8);
  }
  local_res8 = LVar10;
  TSharedPtr<FCsvProfilerThreadData,1>::TSharedPtr<FCsvProfilerThreadData,1><FCsvProfilerThreadData>
            ((TSharedPtr<FCsvProfilerThreadData,1> *)local_28,
             (TRawPtrProxy<FCsvProfilerThreadData> *)&local_res8.s);
  uVar7 = local_28._0_8_;
  TlsSetValue(Singleton.TlsSlot,(LPVOID)local_28._0_8_);
  if (Singleton.TlsInstances.ArrayNum == Singleton.TlsInstances.ArrayMax) {
    Singleton.TlsInstances.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&Singleton.TlsInstances.AllocatorInstance,&Singleton.TlsInstances.ArrayMax
                   );
  }
  FVar6.Data = Singleton.TlsInstances.AllocatorInstance.Data;
  pTVar2 = (TReferenceControllerBase<1> *)CONCAT44(uStack_1c,local_28._8_4_);
  lVar12 = (longlong)Singleton.TlsInstances.ArrayNum;
  Singleton.TlsInstances.ArrayNum = Singleton.TlsInstances.ArrayNum + 1;
  *(undefined8 *)(Singleton.TlsInstances.AllocatorInstance.Data + lVar12 * 0x10) = local_28._0_8_;
  *(TReferenceControllerBase<1> **)(FVar6.Data + lVar12 * 0x10 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  LVar10 = (LARGE_INTEGER)::operator_new(0x18);
  if ((FCsvProfilerThreadData *)LVar10.QuadPart != (FCsvProfilerThreadData *)0x0) {
    *(undefined8 *)(LVar10.QuadPart + 8) = local_28._0_8_;
    *(undefined ***)LVar10 =
         &___7__TTlsAutoCleanupValue_V__TSharedPtr_VFCsvProfilerThreadData___00____6B_;
    *(TReferenceControllerBase<1> **)(LVar10.QuadPart + 0x10) = pTVar2;
    this_00 = LVar10;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  FTlsAutoCleanup::Register((FTlsAutoCleanup *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&Singleton);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && ((FName)LVar13.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_28._8_4_ = LVar13.s.LowPart;
      uStack_1c = LVar13.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_28._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_28);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  local_28[0] = (undefined1)uVar7;
  local_28[1] = SUB81(uVar7,1);
  local_28[2] = SUB81(uVar7,2);
  local_28[3] = SUB81(uVar7,3);
  local_28[4] = SUB81(uVar7,4);
  local_28[5] = SUB81(uVar7,5);
  local_28[6] = SUB81(uVar7,6);
  local_28[7] = SUB81(uVar7,7);
  auVar11[0] = local_28[0];
  auVar11[1] = local_28[1];
  auVar11[2] = local_28[2];
  auVar11[3] = local_28[3];
  auVar11[4] = local_28[4];
  auVar11[5] = local_28[5];
  auVar11[6] = local_28[6];
  auVar11[7] = local_28[7];
  return (FCsvProfilerThreadData *)auVar11;
}

// FlushResults @ 14193f5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCsvProfilerThreadData::FlushResults
          (FCsvProfilerThreadData *this,
          TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FCsvEvent,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  DWORD DVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  FColor_u_0 local_res8 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  lVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FCsvProfilerThreadData::FlushResults(TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvEvent,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FCsvProfilerThreadData::FlushResults(TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvEvent,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FCsvProfilerThreadData::FlushResults(TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvEvent,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FCsvProfilerThreadData_FlushResults = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_58,"STAT_FCsvProfilerThreadData_FlushResults");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FCsvProfilerThreadData::FlushResults(TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvEvent,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FCsvProfilerThreadData_FlushResults,*pFVar9,
               L"STAT_FCsvProfilerThreadData_FlushResults","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FCsvProfilerThreadData::FlushResults(TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvEvent,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_FCsvProfilerThreadData_FlushResults;
  if (_StatPtr_STAT_FCsvProfilerThreadData_FlushResults == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_50,"STAT_FCsvProfilerThreadData_FlushResults");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FCsvProfilerThreadData::FlushResults(TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FCsvEvent,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FCsvProfilerThreadData_FlushResults,*pFVar9,
                         L"STAT_FCsvProfilerThreadData_FlushResults","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar10->Name;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar12.Value;
        local_68.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x9cc);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60.s.LowPart = FVar12.Value;
      local_60.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_14193f771;
    }
  }
  bVar4 = false;
  FVar13 = local_48;
LAB_14193f771:
  uVar11 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread != false) {
    uVar11 = GGameThreadId;
  }
  DVar8 = GetCurrentThreadId();
  if ((DVar8 != uVar11) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInCsvProcessingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x9ce,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = CVarMaxPerThreadStatDataSlackKB.Ref;
  bVar7 = IsInParallelGameThread();
  if ((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) {
    lVar14 = 4;
  }
  lVar14 = (longlong)*(int *)((longlong)pTVar6->ShadowedValue + lVar14) << 10;
  TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::PopAll
            (&this->TimingMarkers,param_1,lVar14);
  TSingleProducerSingleConsumerList<FCsvCustomStat,256>::PopAll(&this->CustomStats,param_2,lVar14);
  TSingleProducerSingleConsumerList<FCsvEvent,32>::PopAll(&this->Events,param_3,lVar14);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetTlsInstances @ 14194b850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FCsvProfilerThreadData::GetTlsInstances
          (TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  atomic<int> aVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  atomic<int> aVar11;
  int iVar12;
  FName *pFVar13;
  TStatIdData *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FName FVar16;
  ulonglong uVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  undefined4 local_78;
  undefined1 local_74;
  FName local_70;
  FName local_68;
  FName local_60;
  TReferenceControllerBase<1> *local_50;
  TReferenceControllerBase<1> *local_48;
  
  uVar17 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) <
       `public:_static_void___cdecl_FCsvProfilerThreadData::GetTlsInstances(TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_>&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FCsvProfilerThreadData::GetTlsInstances(TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_>&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FCsvProfilerThreadData::GetTlsInstances(TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_>&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_CSVProfiler_ThreadData_GetTlsInstances = (TStatIdData *)0x0;
    pFVar13 = ::FName::FName(&local_70,"CSVProfiler_ThreadData_GetTlsInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FCsvProfilerThreadData::GetTlsInstances(TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::StatPtr_CSVProfiler_ThreadData_GetTlsInstances,*pFVar13,
               L"CSVProfiler_ThreadData_GetTlsInstances","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FCsvProfilerThreadData::GetTlsInstances(TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_>&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar14 = _StatPtr_CSVProfiler_ThreadData_GetTlsInstances;
  if (_StatPtr_CSVProfiler_ThreadData_GetTlsInstances == (TStatIdData *)0x0) {
    pFVar13 = ::FName::FName(&local_68,"CSVProfiler_ThreadData_GetTlsInstances");
    pTVar14 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_void___cdecl_FCsvProfilerThreadData::GetTlsInstances(TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_>&___ptr64)'
                          ::__l2::StatPtr_CSVProfiler_ThreadData_GetTlsInstances,*pFVar13,
                         L"CSVProfiler_ThreadData_GetTlsInstances","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar14->Name;
  bVar5 = false;
  bVar4 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(pTVar14->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar4 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_res20.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(pTVar14->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x996);
        bVar5 = true;
        bVar4 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_14194ba75;
    }
  }
  bVar5 = bVar9;
  bVar4 = bVar8;
  bVar8 = false;
  FVar16 = local_60;
LAB_14194ba75:
  EnterCriticalSection((LPCRITICAL_SECTION)&Singleton);
  uVar19 = Singleton.TlsInstances.ArrayNum + 1;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  DestructItems<TSharedPtr<FCsvProfilerThreadData,1>,int>
            ((TSharedPtr<FCsvProfilerThreadData,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar19,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar19 = Singleton.TlsInstances.ArrayNum - 1;
  if (-1 < (int)uVar19) {
    lVar21 = (longlong)(int)uVar19 << 4;
    do {
      uVar10 = 0;
      if ((int)uVar19 < Singleton.TlsInstances.ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar7.Data = Singleton.TlsInstances.AllocatorInstance.Data;
      pTVar18 = *(TReferenceControllerBase<1> **)
                 (Singleton.TlsInstances.AllocatorInstance.Data + lVar21 + 8);
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar18->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) goto LAB_14194bbac;
          LOCK();
          aVar11 = pTVar18->SharedReferenceCount;
          bVar9 = aVar6 == aVar11;
          if (bVar9) {
            pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar11 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar11;
        } while (!bVar9);
        lVar2 = *(longlong *)(FVar7.Data + lVar21);
        if (lVar2 != 0) {
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar12 + 1;
          pFVar20 = (param_1->AllocatorInstance).Data;
          *(longlong *)(pFVar20 + (longlong)iVar12 * 0x10) = lVar2;
          *(TReferenceControllerBase<1> **)(pFVar20 + (longlong)iVar12 * 0x10 + 8) = pTVar18;
LAB_14194bbac:
          pTVar18 = (TReferenceControllerBase<1> *)0x0;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      lVar21 = lVar21 + -0x10;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
    uVar17 = (ulonglong)_tls_index;
  }
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) <
       `public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar15 = ::operator_new(200);
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      _EndOfPipeData = ___xmm_00000000000000000000000000000010;
      DAT_154f0c1d8 = _UNK_150651568;
    }
    else {
      pTVar15->SharedReferenceCount = (atomic<int>)0x1;
      pTVar15->WeakReferenceCount = (atomic<int>)0x1;
      local_78 = 2;
      pTVar15->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCsvProfilerThreadData___00_SharedPointerInternals__6B_
      ;
      local_74 = 1;
      FCsvProfilerThreadData
                ((FCsvProfilerThreadData *)(pTVar15 + 1),(TOptional<ECsvTimeline::Type>)&local_78);
      if ((pTVar15 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      _EndOfPipeData = pTVar15 + 1;
      DAT_154f0c1d8 = pTVar15;
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      pTVar18 = pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    atexit(`FCsvProfilerThreadData::GetEndOfPipe'::__l2::
           _dynamic_atexit_destructor_for__EndOfPipeData__);
    _Init_thread_footer(&`public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_50 = _EndOfPipeData;
  local_48 = DAT_154f0c1d8;
  if (DAT_154f0c1d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    DAT_154f0c1d8->SharedReferenceCount =
         (atomic<int>)((int)DAT_154f0c1d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar20 = (param_1->AllocatorInstance).Data;
  if (((pFVar20 <= (FScriptContainerElement *)&local_50) &&
      ((FScriptContainerElement *)&local_50 < pFVar20 + (longlong)*piVar1 * 0x10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar12 = param_1->ArrayNum;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar12 + 1;
  pFVar20 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar20 = local_50;
  *(TReferenceControllerBase<1> **)(pFVar20 + 8) = local_48;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&Singleton);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

