// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ~FParticlePerfStatsListener_FXBudget @ 1480f7200

void __thiscall
FParticlePerfStatsListener_FXBudget::~FParticlePerfStatsListener_FXBudget
          (FParticlePerfStatsListener_FXBudget *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->RTHistory).FrameCycles.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->GTConcurrentHistory).FrameCycles.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->GTHistory).FrameCycles.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001480f7265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Begin @ 1480fe960

void __thiscall
FParticlePerfStatsListener_FXBudget::Begin(FParticlePerfStatsListener_FXBudget *this)

{
  return;
}

// End @ 148107be0

void __thiscall FParticlePerfStatsListener_FXBudget::End(FParticlePerfStatsListener_FXBudget *this)

{
  FFXBudget::WorstAdjustedUsage = 0.0;
  return;
}

// GetUsage @ 14811c680

FFXTimeData * __thiscall
FParticlePerfStatsListener_FXBudget::GetUsage
          (FParticlePerfStatsListener_FXBudget *this,FFXTimeData *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  fVar3 = GFXBudget_GameThread;
  uVar1 = (this->AverageTimesMs).GT;
  uVar2 = (this->AverageTimesMs).GTConcurrent;
  __return_storage_ptr__->GT = 0.0;
  __return_storage_ptr__->GTConcurrent = 0.0;
  __return_storage_ptr__->RT = 0.0;
  if (0.0 < fVar3) {
    __return_storage_ptr__->GT = (float)uVar1 / fVar3;
  }
  if (0.0 < GFXBudget_GameThreadConcurrent) {
    __return_storage_ptr__->GTConcurrent = (float)uVar2 / GFXBudget_GameThreadConcurrent;
  }
  if (0.0 < GFXBudget_RenderThread) {
    __return_storage_ptr__->RT = (this->AverageTimesMs).RT / GFXBudget_RenderThread;
  }
  return __return_storage_ptr__;
}

// NeedsComponentStats @ 148124470

bool __thiscall
FParticlePerfStatsListener_FXBudget::NeedsComponentStats(FParticlePerfStatsListener_FXBudget *this)

{
  return false;
}

// NeedsSystemStats @ 148124480

bool __thiscall
FParticlePerfStatsListener_FXBudget::NeedsSystemStats(FParticlePerfStatsListener_FXBudget *this)

{
  return false;
}

// NeedsWorldStats @ 148124490

bool __thiscall
FParticlePerfStatsListener_FXBudget::NeedsWorldStats(FParticlePerfStatsListener_FXBudget *this)

{
  return true;
}

// Tick @ 14813a670

bool __thiscall FParticlePerfStatsListener_FXBudget::Tick(FParticlePerfStatsListener_FXBudget *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FCsvProfiler *this_00;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  LARGE_INTEGER local_res10 [3];
  float local_48;
  float fStack_44;
  
  fVar15 = 0.0;
  if (FFXBudget::bEnabled) {
    FParticlePerfStatsManager::
    ForAllWorldStats<_FParticlePerfStatsListener_FXBudget::Tick_::__l5::<lambda_1>_>
              ((<lambda_1>)this);
    FInGameCycleHistory::NextFrame(&this->GTHistory);
    FInGameCycleHistory::NextFrame(&this->GTConcurrentHistory);
    dVar10 = __real_408f400000000000;
    if (GFXTimeOverride_GameThread < 0.0) {
      if (GFXBudget_GameThread <= 0.0) {
        (this->AverageTimesMs).GT = 0.0;
      }
      else {
        (this->AverageTimesMs).GT =
             (float)((double)(ulonglong)(this->GTHistory).CachedAverageCycles *
                     FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
      }
    }
    else {
      (this->AverageTimesMs).GT = GFXTimeOverride_GameThread;
    }
    if (GFXTimeOverride_GameThreadConcurrent < 0.0) {
      if (GFXBudget_GameThreadConcurrent <= 0.0) {
        (this->AverageTimesMs).GTConcurrent = 0.0;
      }
      else {
        (this->AverageTimesMs).GTConcurrent =
             (float)((double)(ulonglong)(this->GTConcurrentHistory).CachedAverageCycles *
                     FGenericPlatformTime::SecondsPerCycle64 * dVar10);
      }
    }
    else {
      (this->AverageTimesMs).GTConcurrent = GFXTimeOverride_GameThreadConcurrent;
    }
    QueryPerformanceCounter(local_res10);
    dVar10 = (double)(local_res10[0].QuadPart - this->PrevTickCycles) *
             FGenericPlatformTime::SecondsPerCycle64;
    fVar13 = 0.0;
    this->PrevTickCycles = (ulong64)local_res10[0];
    fVar14 = 0.0;
    uVar1 = (this->AverageTimesMs).GT;
    uVar3 = (this->AverageTimesMs).GTConcurrent;
    fVar9 = 0.0;
    if (0.0 < GFXBudget_GameThread) {
      fVar9 = (float)uVar1 / GFXBudget_GameThread;
    }
    if (0.0 < GFXBudget_GameThreadConcurrent) {
      fVar13 = (float)uVar3 / GFXBudget_GameThreadConcurrent;
    }
    if (0.0 < GFXBudget_RenderThread) {
      fVar14 = (this->AverageTimesMs).RT / GFXBudget_RenderThread;
    }
    fVar11 = GFXBudget_AdjustedUsageDecayRate * (float)dVar10;
    fVar12 = (this->AdjustedUsage).GT - fVar11;
    if (fVar12 <= fVar9) {
      fVar12 = fVar9;
    }
    if (GFXBudget_AdjustedUsageMax <= fVar12) {
      fVar12 = GFXBudget_AdjustedUsageMax;
    }
    (this->AdjustedUsage).GT = fVar12;
    FFXBudget::WorstAdjustedUsage = (this->AdjustedUsage).GTConcurrent - fVar11;
    if (FFXBudget::WorstAdjustedUsage <= fVar13) {
      FFXBudget::WorstAdjustedUsage = fVar13;
    }
    if (GFXBudget_AdjustedUsageMax <= FFXBudget::WorstAdjustedUsage) {
      FFXBudget::WorstAdjustedUsage = GFXBudget_AdjustedUsageMax;
    }
    (this->AdjustedUsage).GTConcurrent = FFXBudget::WorstAdjustedUsage;
    if (FFXBudget::WorstAdjustedUsage <= fVar12) {
      FFXBudget::WorstAdjustedUsage = fVar12;
    }
    fVar11 = (this->AdjustedUsage).RT - fVar11;
    if (fVar11 <= fVar14) {
      fVar11 = fVar14;
    }
    if (GFXBudget_AdjustedUsageMax <= fVar11) {
      fVar11 = GFXBudget_AdjustedUsageMax;
    }
    if (FFXBudget::WorstAdjustedUsage <= fVar11) {
      FFXBudget::WorstAdjustedUsage = fVar11;
    }
    (this->AdjustedUsage).RT = fVar11;
  }
  this_00 = FCsvProfiler::Get();
  if (((this_00 != (FCsvProfiler *)0x0) && (bVar7 = FCsvProfiler::IsCapturing(this_00), bVar7)) &&
     (FParticlePerfStats::bCSVStatsEnabled != (TAtomic<bool>)0x0)) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar5 + 0x9d4c) <
         `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::
         __l29::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                             ::__l29::_thread_safe_static_guard_0__),
       `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::__l29
       ::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                      ::__l29::GTUsageStat,L"Budget/GT");
      _Init_thread_footer(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                           ::__l29::_thread_safe_static_guard_0__);
    }
    if ((*(int *)(lVar5 + 0x9d4c) <
         `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::
         __l29::_thread_safe_static_guard_1__) &&
       (_Init_thread_header(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                             ::__l29::_thread_safe_static_guard_1__),
       `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::__l29
       ::_thread_safe_static_guard_1__ == -1)) {
      ::FName::FName(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                      ::__l29::GTCNCUsageStat,L"Budget/GTCNC");
      _Init_thread_footer(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                           ::__l29::_thread_safe_static_guard_1__);
    }
    if ((*(int *)(lVar5 + 0x9d4c) <
         `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::
         __l29::_thread_safe_static_guard_2__) &&
       (_Init_thread_header(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                             ::__l29::_thread_safe_static_guard_2__),
       `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::__l29
       ::_thread_safe_static_guard_2__ == -1)) {
      ::FName::FName(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                      ::__l29::RTUsageStat,L"Budget/RT");
      _Init_thread_footer(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                           ::__l29::_thread_safe_static_guard_2__);
    }
    if ((*(int *)(lVar5 + 0x9d4c) <
         `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::
         __l29::_thread_safe_static_guard_3__) &&
       (_Init_thread_header(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                             ::__l29::_thread_safe_static_guard_3__),
       `public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'::__l29
       ::_thread_safe_static_guard_3__ == -1)) {
      ::FName::FName(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                      ::__l29::AdjustedUsageStat,L"Budget/Adjusted");
      _Init_thread_footer(&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                           ::__l29::_thread_safe_static_guard_3__);
    }
    if ((FFXBudget::bEnabled == false) ||
       (FFXBudget::StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0)) {
      fVar9 = 0.0;
      fVar13 = 0.0;
    }
    else {
      if ((FFXBudget::StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar2 = ((FFXBudget::StatsListener.Object)->AverageTimesMs).GT;
      uVar4 = ((FFXBudget::StatsListener.Object)->AverageTimesMs).GTConcurrent;
      fVar9 = 0.0;
      fVar13 = 0.0;
      if (0.0 < GFXBudget_GameThread) {
        fVar9 = (float)uVar2 / GFXBudget_GameThread;
      }
      if (0.0 < GFXBudget_GameThreadConcurrent) {
        fVar13 = (float)uVar4 / GFXBudget_GameThreadConcurrent;
      }
      if (0.0 < GFXBudget_RenderThread) {
        fVar15 = ((FFXBudget::StatsListener.Object)->AverageTimesMs).RT / GFXBudget_RenderThread;
      }
    }
    fVar14 = FFXBudget::WorstAdjustedUsage;
    FCsvProfiler::RecordCustomStat
              (&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                ::__l29::GTUsageStat,_GCsvCategory_Particles.Index,fVar9,Set);
    FCsvProfiler::RecordCustomStat
              (&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                ::__l29::GTCNCUsageStat,_GCsvCategory_Particles.Index,fVar13,Set);
    FCsvProfiler::RecordCustomStat
              (&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                ::__l29::RTUsageStat,_GCsvCategory_Particles.Index,fVar15,Set);
    FCsvProfiler::RecordCustomStat
              (&`public:_virtual_bool___cdecl_FParticlePerfStatsListener_FXBudget::Tick(void)___ptr64'
                ::__l29::AdjustedUsageStat,_GCsvCategory_Particles.Index,fVar14,Set);
  }
  return true;
}

// TickRT @ 14813ab90

void __thiscall
FParticlePerfStatsListener_FXBudget::TickRT(FParticlePerfStatsListener_FXBudget *this)

{
  float fVar1;
  
  FParticlePerfStatsManager::
  ForAllWorldStats<_FParticlePerfStatsListener_FXBudget::TickRT_::__l2::<lambda_1>_>
            ((<lambda_1>)this);
  FInGameCycleHistory::NextFrame(&this->RTHistory);
  fVar1 = GFXTimeOverride_RenderThread;
  if (GFXTimeOverride_RenderThread < 0.0) {
    if (GFXBudget_RenderThread <= 0.0) {
      (this->AverageTimesMs).RT = 0.0;
      return;
    }
    fVar1 = (float)((double)(ulonglong)(this->RTHistory).CachedAverageCycles *
                    FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
  }
  (this->AverageTimesMs).RT = fVar1;
  return;
}

