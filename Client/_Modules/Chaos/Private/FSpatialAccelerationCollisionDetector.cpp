// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// DetectCollisions @ 143d4c450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSpatialAccelerationCollisionDetector::DetectCollisions
          (FSpatialAccelerationCollisionDetector *this,double param_1,FEvolutionResimCache *param_2)

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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\SpatialAccelerationCollisionDetector.h"
                   ,0x4a);
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
      goto LAB_143d4c59e;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143d4c59e:
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
  if (`public:_virtual_void___cdecl_Chaos::FSpatialAccelerationCollisionDetector::DetectCollisions(double,Chaos::FEvolutionResimCache*___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat76 == false) {
    FCsvProfilerTrace::OutputInlineStat("DetectCollisions",_GCsvCategory_Chaos.Index);
    `public:_virtual_void___cdecl_Chaos::FSpatialAccelerationCollisionDetector::DetectCollisions(double,Chaos::FEvolutionResimCache*___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat76 = true;
  }
  uVar7 = _GCsvCategory_Chaos.Index;
  FCsvProfiler::BeginStat("DetectCollisions",_GCsvCategory_Chaos.Index,"CSV_DetectCollisions");
  if (((FPBDCollisionConstraints *)this->_padding_)->bEnableCollisions != false) {
    FPBDCollisionConstraints::BeginDetectCollisions((FPBDCollisionConstraints *)this->_padding_);
    FSpatialAccelerationBroadPhase::ProduceOverlaps
              (this->BroadPhase,param_1,(FCollisionConstraintAllocator *)(this->_padding_ + 0x28),
               (FCollisionDetectorSettings *)(this->_padding_ + 0x110),(IResimCacheBase *)param_2);
  }
  RunNarrowPhase(this,param_1,param_2);
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

// RunBroadPhase @ 143d6b330

void __thiscall
Chaos::FSpatialAccelerationCollisionDetector::RunBroadPhase
          (FSpatialAccelerationCollisionDetector *this,double param_1,FEvolutionResimCache *param_2)

{
  if (((FPBDCollisionConstraints *)this->_padding_)->bEnableCollisions != false) {
    FPBDCollisionConstraints::BeginDetectCollisions((FPBDCollisionConstraints *)this->_padding_);
    FSpatialAccelerationBroadPhase::ProduceOverlaps
              (this->BroadPhase,param_1,(FCollisionConstraintAllocator *)(this->_padding_ + 0x28),
               (FCollisionDetectorSettings *)(this->_padding_ + 0x110),(IResimCacheBase *)param_2);
  }
  return;
}

// RunNarrowPhase @ 143d6b390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSpatialAccelerationCollisionDetector::RunNarrowPhase
          (FSpatialAccelerationCollisionDetector *this,double param_1,FEvolutionResimCache *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FSpatialAccelerationBroadPhase *this_00;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collisions_NarrowPhase> FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCollisionContextAllocator *pFVar13;
  FPBDCollisionConstraint *pFVar14;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  undefined8 *puVar18;
  undefined1 auStackY_788 [32];
  undefined1 local_728;
  undefined1 local_727 [3];
  FColor_u_0 local_724;
  uint local_720;
  uint uStack_71c;
  FName local_718;
  FName local_710;
  LARGE_INTEGER local_700;
  FStatMessage local_6f8;
  FCollisionContext local_6e8;
  FName local_6c8 [2];
  FPBDCollisionConstraint local_6b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_788;
  if (*(char *)(this->_padding_ + 0xc0) == '\0') {
    return;
  }
  FVar12 = StatPtr_STAT_Collisions_NarrowPhase;
  if (StatPtr_STAT_Collisions_NarrowPhase ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_NarrowPhase>)0x0) {
    pFVar11 = ::FName::FName(local_6c8,"STAT_Collisions_NarrowPhase");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collisions_NarrowPhase>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_NarrowPhase,*pFVar11,
                        L"Collisions::NarrowPhase","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar9 = false;
  bVar7 = false;
  local_710.ComparisonIndex.Value = 0;
  local_710.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_724.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_724._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar9 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_718.ComparisonIndex.Value = FVar16.Value;
        local_718.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_718,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\SpatialAccelerationCollisionDetector.h"
                   ,0x31);
        bVar9 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_720 = FVar16.Value;
      uStack_71c = uVar15;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_143d6b50b;
    }
  }
  bVar6 = false;
  FVar17 = local_710;
LAB_143d6b50b:
  if (`public:_void___cdecl_Chaos::FSpatialAccelerationCollisionDetector::RunNarrowPhase(double,Chaos::FEvolutionResimCache*___ptr64)___ptr64'
      ::__l6::__CsvProfilerStat50 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("DetectCollisions_NarrowPhase",_GCsvCategory_PhysicsVerbose.Index);
    `public:_void___cdecl_Chaos::FSpatialAccelerationCollisionDetector::RunNarrowPhase(double,Chaos::FEvolutionResimCache*___ptr64)___ptr64'
    ::__l6::__CsvProfilerStat50 = true;
  }
  uVar15 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("DetectCollisions_NarrowPhase",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_DetectCollisions_NarrowPhase");
  FSpatialAccelerationBroadPhase::ProduceCollisions(this->BroadPhase,param_1);
  this_00 = this->BroadPhase;
  bVar8 = FPBDCollisionConstraints::GetIsDeterministic((FPBDCollisionConstraints *)this->_padding_);
  FSpatialAccelerationBroadPhase::GatherConstraints(this_00,bVar8);
  FCsvProfiler::EndStat("DetectCollisions_NarrowPhase",uVar15);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_6f8.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_6f8.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_700);
      local_6f8.StatData.Pad[4] = '\0';
      local_6f8.StatData.Pad[5] = '\0';
      local_6f8.StatData.Pad[6] = '\0';
      local_6f8.StatData.Pad[7] = '\0';
      local_6f8.StatData.Pad[0] = local_700.s.LowPart._0_1_;
      local_6f8.StatData.Pad[1] = local_700.s.LowPart._1_1_;
      local_6f8.StatData.Pad[2] = local_700.s.LowPart._2_1_;
      local_6f8.StatData.Pad[3] = local_700.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_6f8);
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
  FPBDCollisionConstraints::EndDetectCollisions((FPBDCollisionConstraints *)this->_padding_);
  if (param_2 != (FEvolutionResimCache *)0x0) {
    Chaos::Private::FCollisionConstraintAllocator::SetMaxContexts
              ((FCollisionConstraintAllocator *)(this->_padding_ + 0x28),1);
    lVar3 = this->_padding_;
    pFVar13 = Chaos::Private::FCollisionConstraintAllocator::GetContextAllocator
                        ((FCollisionConstraintAllocator *)(lVar3 + 0x28),0);
    lVar4 = this->_padding_;
    `Chaos::FEvolutionResimCache::GetAndSanitizeConstraints'::__l2::<lambda_1>::
    operator()<TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>,TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>_>
              (&local_728,&param_2->SavedConstraints,&param_2->WeakSinglePointConstraints);
    local_6e8.Settings = (FCollisionDetectorSettings *)(lVar3 + 0x110);
    local_6e8.MidPhase = (FParticlePairMidPhase *)0x0;
    local_6e8.Allocator = pFVar13;
    Chaos::Private::FCollisionConstraintAllocator::AddResimConstraints
              ((FCollisionConstraintAllocator *)(lVar4 + 0x28),&param_2->SavedConstraints,&local_6e8
              );
    iVar10 = *(int *)(this->_padding_ + 0x60);
    puVar18 = *(undefined8 **)(this->_padding_ + 0x58);
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>::Reset
              (&param_2->SavedConstraints,iVar10);
    puVar2 = puVar18 + iVar10;
    for (; puVar18 != puVar2; puVar18 = puVar18 + 1) {
      pFVar14 = FPBDCollisionConstraint::MakeCopy(&local_6b8,(FPBDCollisionConstraint *)*puVar18);
      iVar10 = (param_2->SavedConstraints).ArrayNum;
      if (iVar10 == (param_2->SavedConstraints).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x660,0x10,&(param_2->SavedConstraints).AllocatorInstance,
                            &(param_2->SavedConstraints).ArrayMax);
      }
      (param_2->SavedConstraints).ArrayNum = iVar10 + 1;
      FPBDCollisionConstraint::FPBDCollisionConstraint
                ((FPBDCollisionConstraint *)
                 ((param_2->SavedConstraints).AllocatorInstance.Data + (longlong)iVar10 * 0x660),
                 pFVar14);
      FPBDCollisionConstraint::~FPBDCollisionConstraint(&local_6b8);
    }
    `Chaos::FEvolutionResimCache::SaveConstraints'::__l2::<lambda_1>::
    operator()<TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>,TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>_>
              (local_727,&param_2->SavedConstraints,&param_2->WeakSinglePointConstraints);
  }
  return;
}

