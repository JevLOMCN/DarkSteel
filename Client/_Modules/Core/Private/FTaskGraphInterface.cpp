// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ~FTaskGraphInterface @ 141481a90

void __thiscall FTaskGraphInterface::~FTaskGraphInterface(FTaskGraphInterface *this)

{
  *this = (FTaskGraphInterface)&___7FTaskGraphInterface__6B_;
  return;
}

// BroadcastSlow_OnlyUseForSpecialPurposes @ 1414870a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001414878d1) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes
          (bool param_1,bool param_2,TFunction<void___cdecl(ENamedThreads::Type)> *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned_int> *paVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_char> aVar4;
  atomic<unsigned_int> aVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  TAtomic<ENamedThreads::Type> TVar15;
  FEvent *pFVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  DWORD DVar20;
  uint uVar21;
  int iVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_2_::FStat_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes>
  FVar24;
  undefined8 uVar25;
  FTaskBase *this;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar26;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_61_::FStat_STAT_Broadcast_WaitForTaskThreads>
  FVar27;
  FTaskBase *pFVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  FName FVar33;
  FName FVar34;
  FName FVar35;
  ulonglong uVar36;
  bool bVar37;
  bool bVar38;
  undefined1 auStackY_1e8 [32];
  EExtendedTaskPriority local_186;
  ETaskPriority local_185 [2];
  EExtendedTaskPriority local_183;
  ETaskPriority local_182;
  EExtendedTaskPriority local_181;
  ETaskPriority local_180 [8];
  ForAnyElementType local_178;
  undefined8 local_170;
  uint local_168;
  undefined1 local_164 [4];
  FName local_160;
  TRefCountPtr<FBaseGraphTask> local_158;
  FEvent *local_150;
  FName local_148;
  FColor_u_0 local_140 [2];
  undefined4 local_138 [2];
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_108;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_b8;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  QueryPerformanceCounter(&local_f8);
  dVar14 = __real_4170000000000000;
  dVar8 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes =
         (FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_2_::FStat_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes>
          )0x0;
    pFVar23 = ::FName::FName(&local_d8,
                             "STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes,*pFVar23,
               L"STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes","STATGROUP_Quick"
               ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar24 = StatPtr_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes;
  if (StatPtr_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_2_::FStat_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes>
       )0x0) {
    pFVar23 = ::FName::FName(&local_d0,
                             "STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes");
    FVar24 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_2_::FStat_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes,
                          *pFVar23,
                          L"STAT_FTaskGraphInterface_BroadcastSlow_OnlyUseForSpecialPurposes",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar24;
  bVar11 = false;
  bVar12 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar17 = false;
  bVar37 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_1414872ee:
    bVar12 = bVar37;
    bVar11 = bVar17;
    bVar17 = false;
    local_148 = local_118;
    FVar34 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar17 = false;
      bVar37 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_128.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                   ,0x76d);
        bVar11 = true;
        bVar12 = true;
        bVar17 = true;
        bVar37 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1414872ee;
    local_160 = FVar34;
    local_148 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar17 = true;
  }
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1902,"FTaskGraphInterface_BroadcastSlow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
               ,0x76e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1902);
  }
  DVar20 = GetCurrentThreadId();
  if ((DVar20 != GGameThreadId) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("FPlatformTLS::GetCurrentThreadId() == GGameThreadId",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                          ,0x76f,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_138[0] = 0x101;
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar6 = *(code **)param_3;
  plVar29 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar29 = *(longlong **)&param_3->field_0x28;
  }
  uVar25 = (**(code **)(*plVar29 + 8))();
  (*pcVar6)(uVar25,local_138);
  dVar13 = __real_3f947ae147ae147b;
  if (TaskGraphImplementationSingleton == (FTaskGraphInterface *)0x0) goto LAB_141487e75;
  FVar35.ComparisonIndex.Value = 0;
  FVar35.Number = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_b8.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_90 = 0;
  local_8c = 4;
  local_168 = 0;
  if (param_1) {
    local_160 = (FName)FGenericPlatformProcess::GetSynchEventFromPool(false);
    uVar21 = GNumForegroundWorkers;
    if (param_2) {
      uVar21 = (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x20))();
    }
    LOCK();
    local_168 = local_168 + uVar21;
    UNLOCK();
    if ((int)local_168 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_168);
    }
    if (local_170._4_4_ < (int)local_168) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_168,&local_178,(int)local_170,(int *)((longlong)&local_170 + 4));
    }
    FVar35 = local_160;
    if (0 < (int)uVar21) {
      uVar36 = (ulonglong)uVar21;
      do {
        pFVar28 = (FTaskBase *)0x0;
        local_150 = FGenericPlatformProcess::GetSynchEventFromPool(false);
        if (((local_178.Data <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 < local_178.Data + (longlong)local_170._4_4_ * 8)
            ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar22 = (int)local_170;
        if ((int)local_170 == local_170._4_4_) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_178,(int *)((longlong)&local_170 + 4));
        }
        local_170 = CONCAT44(local_170._4_4_,iVar22 + 1);
        *(FEvent **)(local_178.Data + (longlong)iVar22 * 8) = local_150;
        this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x140,0x10);
        if (this != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase(this,1,false);
          this->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
          pFVar1 = &(this->Prerequisites).Mutex;
          LOCK();
          aVar4 = pFVar1->State;
          pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(pFVar1);
          }
          this->_padding_ = (longlong)&___7__TGraphTask_VFBroadcastTask____6B_;
          pFVar28 = this;
        }
        pFVar16 = local_150;
        lVar31 = *(longlong *)param_3;
        pFVar28[1]._padding_ = lVar31;
        pFVar28[1].RefCount = (atomic<unsigned_int>)0x0;
        pFVar28[1].NumLocks = (atomic<unsigned_int>)0x0;
        if (lVar31 != 0) {
          puVar30 = *(undefined8 **)&param_3->field_0x28;
          if (*(undefined8 **)&param_3->field_0x28 == (undefined8 *)0x0) {
            puVar30 = (undefined8 *)&param_3->field_0x10;
          }
          (**(code **)*puVar30)();
        }
        *(double *)pFVar28[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = dVar8;
        *(uint **)&pFVar28[1].StateChangeEvent = &local_168;
        *(undefined4 *)&pFVar28[1].Pipe = 0x6ff;
        pFVar28[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)L"NPTask";
        *(FEvent **)&pFVar28[1].ExecutingThreadId = pFVar16;
        pFVar28[1].TraceId = (atomic<unsigned___int64>)FVar35;
        UE::Tasks::Private::TranslatePriority(AnyHiPriThreadHiPriTask,local_185,&local_186);
        UE::Tasks::Private::FTaskBase::Init(pFVar28,L"GraphTask",local_185[0],local_186,None);
        LOCK();
        pFVar28->RefCount = (atomic<unsigned_int>)((int)pFVar28->RefCount + 1);
        UNLOCK();
        local_158.Reference = (FBaseGraphTask *)pFVar28;
        UE::Tasks::Private::FTaskBase::TryLaunch(pFVar28,0x140);
        FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar26 = local_b8.SecondaryData;
        }
        if ((ulonglong)FVar26 <= &local_158) {
          FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
          if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar26 = local_b8.SecondaryData;
          }
          if ((&local_158 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar26 + (longlong)local_8c * 8)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (local_90 == local_8c) {
          local_90 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (0x808,&local_b8,&local_8c);
        }
        FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar26 = local_b8.SecondaryData;
        }
        lVar31 = (longlong)local_90;
        local_90 = local_90 + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar26 + lVar31 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar26 + lVar31 * 8))->Reference =
             local_158.Reference;
        local_158.Reference = (FBaseGraphTask *)0x0;
        uVar36 = uVar36 - 1;
        FVar34 = local_148;
      } while (uVar36 != 0);
    }
    if ((TaskGraphImplementationSingleton == (FTaskGraphInterface *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskGraphImplementationSingleton",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                            ,0x792,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (FVar35 == (FName)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("MyEvent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                          ,0x798,L"");
      if (bVar18) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      cVar19 = (**(code **)(*(longlong *)FVar35 + 0x20))(FVar35,3000,0);
      if ((cVar19 == '\0') && (4 < (byte)LogTaskGraph._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
      }
    }
    iVar22 = (int)local_170;
    uVar36 = (ulonglong)(int)local_170;
    pFVar3 = local_178.Data + uVar36 * 8;
    FVar32.Data = local_178.Data;
    while( true ) {
      if ((int)uVar36 != iVar22) {
        local_185[1] = 0;
        `TCheckedPointerIterator<FEvent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_185 + 1);
      }
      if (FVar32.Data == pFVar3) break;
      (**(code **)((*(FEvent **)FVar32.Data)->_padding_ + 0x10))();
      uVar36 = local_170 & 0xffffffff;
      FVar32.Data = FVar32.Data + 8;
    }
    QueryPerformanceCounter(&local_f0);
    dVar7 = (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      StatPtr_STAT_Broadcast_WaitForTaskThreads =
           (FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_61_::FStat_STAT_Broadcast_WaitForTaskThreads>
            )0x0;
      pFVar23 = ::FName::FName(&local_c8,"STAT_Broadcast_WaitForTaskThreads");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Broadcast_WaitForTaskThreads,*pFVar23,
                 L"STAT_Broadcast_WaitForTaskThreads","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS2);
    }
    FVar27 = StatPtr_STAT_Broadcast_WaitForTaskThreads;
    if (StatPtr_STAT_Broadcast_WaitForTaskThreads ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_61_::FStat_STAT_Broadcast_WaitForTaskThreads>
         )0x0) {
      pFVar23 = ::FName::FName(&local_c0,"STAT_Broadcast_WaitForTaskThreads");
      FVar27 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes(bool,bool,TFunction<void___cdecl(ENamedThreads::Type)>_&)_::_61_::FStat_STAT_Broadcast_WaitForTaskThreads>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Broadcast_WaitForTaskThreads,
                            *pFVar23,L"STAT_Broadcast_WaitForTaskThreads","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar33 = *(FName *)FVar27;
    bVar9 = false;
    bVar18 = false;
    local_108.ComparisonIndex.Value = 0;
    local_108.Number = 0;
    if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_141487a02:
      bVar10 = false;
      FVar33 = local_108;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_130[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
        bVar9 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_120.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
          local_120.Number = FVar33.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_120,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                     ,0x7a3);
          bVar9 = true;
          bVar18 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_141487a02;
      local_148 = FVar33;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar10 = true;
    }
    bVar38 = -1 < CpuChannel->Enabled;
    if (bVar38) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1956,"Broadcast_WaitForTaskThreads",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                 ,0x7a4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1956);
    }
    (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x60))
              (TaskGraphImplementationSingleton,&local_b8);
    QueryPerformanceCounter(&local_e8);
    if (((dVar13 < (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) &&
        (2 < (byte)LogTaskGraph._0_1_)) && (GPrintBroadcastWarnings != 0)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
    }
    if (bVar38) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar18) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar10) {
      FThreadStats::AddMessage(FVar33,CycleScopeEnd);
    }
  }
  bVar18 = IsRHIThreadRunning();
  if (bVar18) {
    pFVar28 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x140,0x10);
    if (pFVar28 == (FTaskBase *)0x0) {
      pFVar28 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar28,1,false);
      pFVar28->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
      pFVar1 = &(pFVar28->Prerequisites).Mutex;
      LOCK();
      aVar4 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(pFVar1);
      }
      pFVar28->_padding_ = (longlong)&___7__TGraphTask_VFBroadcastTask____6B_;
    }
    lVar31 = *(longlong *)param_3;
    pFVar28[1]._padding_ = lVar31;
    pFVar28[1].RefCount = (atomic<unsigned_int>)0x0;
    pFVar28[1].NumLocks = (atomic<unsigned_int>)0x0;
    if (lVar31 != 0) {
      puVar30 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar30 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar30)();
    }
    *(double *)pFVar28[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = dVar8;
    pFVar28[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)L"RHIT";
    *(undefined4 *)&pFVar28[1].Pipe = 0x200;
    pFVar28[1].StateChangeEvent = (atomic<unsigned_int>)0x0;
    pFVar28[1].ExtendedPriority = None;
    pFVar28[1].TaskTriggered = (atomic<bool>)0x0;
    pFVar28[1]._padding_ = 0;
    pFVar28[1].ExecutingThreadId = (atomic<unsigned_int>)0x0;
    pFVar28[1]._padding_ = 0;
    pFVar28[1].TraceId = (atomic<unsigned___int64>)0x0;
    UE::Tasks::Private::TranslatePriority(HighTaskPriority,&local_182,&local_183);
    UE::Tasks::Private::FTaskBase::Init(pFVar28,L"GraphTask",local_182,local_183,None);
    if (pFVar28 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x140);
    }
    else {
      LOCK();
      pFVar28->RefCount = (atomic<unsigned_int>)((int)pFVar28->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar28,0x140);
      LOCK();
      paVar2 = &pFVar28->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar28->_padding_)(pFVar28,1);
      }
    }
  }
  TVar15 = ENamedThreads::FRenderThreadStatics::RenderThread;
  if (ENamedThreads::FRenderThreadStatics::RenderThread != (TAtomic<ENamedThreads::Type>)0x1) {
    if ((((uint)ENamedThreads::FRenderThreadStatics::RenderThread & 0xffffff00) != 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                            ,0xcd,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar28 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x140,0x10);
    if (pFVar28 == (FTaskBase *)0x0) {
      pFVar28 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar28,1,false);
      pFVar28->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
      pFVar1 = &(pFVar28->Prerequisites).Mutex;
      LOCK();
      aVar4 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(pFVar1);
      }
      pFVar28->_padding_ = (longlong)&___7__TGraphTask_VFBroadcastTask____6B_;
    }
    lVar31 = *(longlong *)param_3;
    pFVar28[1]._padding_ = lVar31;
    pFVar28[1].RefCount = (atomic<unsigned_int>)0x0;
    pFVar28[1].NumLocks = (atomic<unsigned_int>)0x0;
    if (lVar31 != 0) {
      puVar30 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar30 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar30)();
    }
    *(double *)pFVar28[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = dVar8;
    pFVar28[1].StateChangeEvent = (atomic<unsigned_int>)0x0;
    pFVar28[1].ExtendedPriority = None;
    pFVar28[1].TaskTriggered = (atomic<bool>)0x0;
    pFVar28[1]._padding_ = 0;
    pFVar28[1].ExecutingThreadId = (atomic<unsigned_int>)0x0;
    pFVar28[1]._padding_ = 0;
    pFVar28[1].TraceId = (atomic<unsigned___int64>)0x0;
    pFVar28[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)L"RT";
    *(Type *)&pFVar28[1].Pipe = (uint)TVar15 | HighTaskPriority;
    UE::Tasks::Private::TranslatePriority((uint)TVar15 | HighTaskPriority,local_180,&local_181);
    UE::Tasks::Private::FTaskBase::Init(pFVar28,L"GraphTask",local_180[0],local_181,None);
    if (pFVar28 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x140);
    }
    else {
      LOCK();
      pFVar28->RefCount = (atomic<unsigned_int>)((int)pFVar28->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar28,0x140);
      LOCK();
      paVar2 = &pFVar28->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar28->_padding_)(pFVar28,1);
      }
    }
  }
  iVar22 = (int)local_170;
  uVar36 = (ulonglong)(int)local_170;
  pFVar3 = local_178.Data + uVar36 * 8;
  FVar32.Data = local_178.Data;
  while( true ) {
    if ((int)uVar36 != iVar22) {
      `TCheckedPointerIterator<FEvent_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_164)
      ;
    }
    if (FVar32.Data == pFVar3) break;
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)FVar32.Data);
    uVar36 = local_170 & 0xffffffff;
    FVar32.Data = FVar32.Data + 8;
  }
  if (FVar35 != (FName)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)FVar35);
  }
  QueryPerformanceCounter(&local_e0);
  if (((dVar13 < ((double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar14) -
                 dVar8) && (2 < (byte)LogTaskGraph._0_1_)) && (GPrintBroadcastWarnings != 0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
  }
  FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
  if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar26 = local_b8.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar26,local_90);
  if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_b8.SecondaryData);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
LAB_141487e75:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// Get @ 141497350

FTaskGraphInterface * __cdecl FTaskGraphInterface::Get(void)

{
  return TaskGraphImplementationSingleton;
}

// IsMultithread @ 14149e110

bool __cdecl FTaskGraphInterface::IsMultithread(void)

{
  bool bVar1;
  
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar1) {
    bVar1 = FForkProcessHelper::IsForkedMultithreadInstance();
    if ((!bVar1) || (GAllowTaskGraphForkMultithreading == false)) {
      return false;
    }
  }
  return true;
}

// IsRunning @ 14149e360

bool __cdecl FTaskGraphInterface::IsRunning(void)

{
  return TaskGraphImplementationSingleton != (FTaskGraphInterface *)0x0;
}

// Shutdown @ 1414b0b00

void __cdecl FTaskGraphInterface::Shutdown(void)

{
  if (TaskGraphImplementationSingleton != (FTaskGraphInterface *)0x0) {
    (**(code **)((longlong)*TaskGraphImplementationSingleton + 8))
              (TaskGraphImplementationSingleton,1);
  }
  TaskGraphImplementationSingleton = (FTaskGraphInterface *)0x0;
  return;
}

// Startup @ 1414b18b0

void __cdecl FTaskGraphInterface::Startup(int param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FTaskGraphCompatibilityImplementation *this;
  
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"cookcommandlet");
  if (!bVar2) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"run=cook");
    if (!bVar2) {
      iVar1 = (param_1 + 0x14) / 0x15;
      GNumForegroundWorkers = 2;
      if (2 < iVar1) {
        GNumForegroundWorkers = iVar1;
      }
    }
  }
  pwVar3 = FCommandLine::Get();
  FParse::Value(pwVar3,L"-foregroundworkers=",&GNumForegroundWorkers);
  pwVar3 = FCommandLine::Get();
  FParse::Value(pwVar3,L"-oversubscriptionratio=",&GTaskGraphOversubscriptionRatio);
  this = FMemory::Malloc(0x48,0x80);
  if (this == (FTaskGraphCompatibilityImplementation *)0x0) {
    TaskGraphImplementationSingleton = (FTaskGraphInterface *)0x0;
    return;
  }
  TaskGraphImplementationSingleton =
       (FTaskGraphInterface *)
       FTaskGraphCompatibilityImplementation::FTaskGraphCompatibilityImplementation(this,param_1);
  return;
}

// WaitUntilTaskCompletes @ 141bbdee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphInterface::WaitUntilTaskCompletes
          (FTaskGraphInterface *this,TRefCountPtr<FBaseGraphTask> *param_1,Type param_2)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  undefined1 auStackY_88 [32];
  TRefCountPtr<FBaseGraphTask> local_48;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_40;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pcVar3 = *(code **)((longlong)*this + 0x60);
  local_48 = (TRefCountPtr<FBaseGraphTask>)param_1->Reference;
  if (local_48.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&(local_48.Reference)->field_0x30 = *(int *)&(local_48.Reference)->field_0x30 + 1;
    UNLOCK();
  }
  local_40.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_18 = 1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,1,0,&local_40,1,&local_14);
  FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
  if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = local_40.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar4,&local_48,1);
  (*pcVar3)(this,&local_40,param_2);
  FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
  if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = local_40.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar4,local_18);
  if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  if (local_48.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(local_48.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_48.Reference)(local_48.Reference,1);
    }
  }
  return;
}

