// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DetectCollisions @ 14827a4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FBasicCollisionDetector::DetectCollisions
          (FBasicCollisionDetector *this,double param_1,FEvolutionResimCache *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Collisions_Detect> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_78;
  wchar_t *local_68;
  FOutputDeviceRedirector *local_60;
  double local_58;
  double local_50;
  double *local_48;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_Collisions_Detect;
  if (StatPtr_STAT_Collisions_Detect == (FThreadSafeStaticStat<FStat_STAT_Collisions_Detect>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_Collisions_Detect");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Collisions_Detect>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Detect,*pFVar5,
                       L"Collisions::Detect","STATGROUP_ChaosCollision","STATCAT_Advanced",
                       L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\BasicCollisionDetector.h"
                   ,0x1b);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14827a629;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14827a629:
  local_68 = L"DetectCollisions";
  local_60 = GetGlobalLogSingleton();
  local_58 = 0.0;
  QueryPerformanceCounter(&local_res8);
  local_48 = &local_58;
  local_50 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
             FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  QueryPerformanceCounter(&local_res8);
  local_50 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
             FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (`public:_virtual_void___cdecl_Chaos::FBasicCollisionDetector::DetectCollisions(double,Chaos::FEvolutionResimCache*___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat29 == false) {
    FCsvProfilerTrace::OutputInlineStat("DetectCollisions",_GCsvCategory_Chaos.Index);
    `public:_virtual_void___cdecl_Chaos::FBasicCollisionDetector::DetectCollisions(double,Chaos::FEvolutionResimCache*___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat29 = true;
  }
  uVar7 = _GCsvCategory_Chaos.Index;
  FCsvProfiler::BeginStat("DetectCollisions",_GCsvCategory_Chaos.Index,"CSV_DetectCollisions");
  if (((FPBDCollisionConstraints *)this->_padding_)->bEnableCollisions != false) {
    FPBDCollisionConstraints::BeginDetectCollisions((FPBDCollisionConstraints *)this->_padding_);
    FBasicBroadPhase::ProduceOverlaps
              (this->BroadPhase,param_1,(FCollisionConstraintAllocator *)(this->_padding_ + 0x28),
               (FCollisionDetectorSettings *)(this->_padding_ + 0x110));
    FPBDCollisionConstraints::EndDetectCollisions((FPBDCollisionConstraints *)this->_padding_);
  }
  FCsvProfiler::EndStat("DetectCollisions",uVar7);
  QueryPerformanceCounter(&local_res8);
  dVar11 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
           FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  *local_48 = (dVar11 - local_50) + *local_48;
  local_50 = dVar11;
  if (FChaosScopedDurationTimeLogger::GlobalLabel != (wchar_t *)0x0) {
    FOutputDevice::LogfImpl((FOutputDevice *)local_60,L"%s - %s: %f%s");
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
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

