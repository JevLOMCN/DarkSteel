// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// RaycastMulti @ 147858270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
::RaycastMulti(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
              UWorld *param_2,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_3,
              TVector<double> *param_4,TVector<double> *param_5,ECollisionChannel param_6,
              FCollisionQueryParams *param_7,FCollisionResponseParams *param_8,
              FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar17;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FName FVar21;
  FName FVar22;
  FNameEntryId FVar23;
  LARGE_INTEGER local_res10;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_res18;
  TVector<double> *local_res20;
  FName local_b8 [2];
  TVector<double>_u_0 local_a8;
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar23.Value = 0;
  FVar17 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar16 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar16,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar6 = false;
  bVar9 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_1478583b7:
    bVar7 = false;
    FVar22 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0] = (FName)((ulonglong)local_b8[0] & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)local_b8,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8[0] = FVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3df);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478583b7;
    local_b8[0] = FVar22;
    local_78 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
  }
  FVar18 = StatPtr_STAT_Collision_RaycastMultiple;
  if (StatPtr_STAT_Collision_RaycastMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple>)0x0) {
    pFVar16 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_RaycastMultiple");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastMultiple,
                        *pFVar16,L"RaycastMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar18;
  bVar4 = false;
  bVar8 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0] = (FName)((ulonglong)local_b8[0] & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)local_b8,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8[0] = FVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_b8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3e0);
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8[0] = FVar21;
      local_88 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar5 = true;
      FVar23.Value = local_88.ComparisonIndex.Value;
      goto LAB_1478584cd;
    }
  }
  bVar5 = false;
  FVar21 = local_88;
LAB_1478584cd:
  if (`public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>::RaycastMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat993 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>::RaycastMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat993 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastMultiple",_GCsvCategory_SceneQuery.Index,"CSV_RaycastMultiple");
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  local_a8._0_4_ = *(undefined4 *)&param_5->field0_0x0;
  local_a8._4_4_ = *(undefined4 *)((longlong)&param_5->field0_0x0 + 4);
  local_a8._8_4_ = *(uint *)((longlong)&param_5->field0_0x0 + 8);
  local_a8._12_4_ = *(uint *)((longlong)&param_5->field0_0x0 + 0xc);
  dVar3 = (local_res20->field0_0x0)._s_0.Z;
  local_68._0_4_ = *(undefined4 *)&local_res20->field0_0x0;
  local_68._4_4_ = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 4);
  local_68._8_4_ = *(uint *)((longlong)&local_res20->field0_0x0 + 8);
  local_68._12_4_ = *(uint *)((longlong)&local_res20->field0_0x0 + 0xc);
  local_b8[0] = (FName)param_1;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar15 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') ||
       ((bVar15 = IsInGameThread(), !bVar15 && (bVar15 = IsInParallelGameThread(), !bVar15)))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    local_a8._s_0.Z = dVar3;
    local_68._s_0.Z = dVar2;
    if (bVar15) {
      uVar11 = local_a8._8_4_;
      local_a8._8_4_ = local_68._8_4_;
      uVar12 = local_a8._12_4_;
      local_a8._12_4_ = local_68._12_4_;
      uVar13 = local_68._0_4_;
      local_68._0_4_ = local_a8._0_4_;
      uVar14 = local_68._4_4_;
      local_68._4_4_ = local_a8._4_4_;
      local_68._8_4_ = uVar11;
      local_68._12_4_ = uVar12;
      local_a8._0_4_ = uVar13;
      local_a8._4_4_ = uVar14;
      bVar15 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,1>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                         ((UWorld *)local_res10,local_res18,
                          (FRaycastSQAdditionalInputs *)&local_res10.s,
                          (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_68._s_0,
                          param_6,param_7,param_8,param_9,
                          (FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
                           *)local_b8);
    }
    else {
      uVar11 = local_a8._8_4_;
      local_a8._8_4_ = local_68._8_4_;
      uVar12 = local_a8._12_4_;
      local_a8._12_4_ = local_68._12_4_;
      uVar13 = local_68._0_4_;
      local_68._0_4_ = local_a8._0_4_;
      uVar14 = local_68._4_4_;
      local_68._4_4_ = local_a8._4_4_;
      local_68._8_4_ = uVar11;
      local_68._12_4_ = uVar12;
      local_a8._0_4_ = uVar13;
      local_a8._4_4_ = uVar14;
      bVar15 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,1>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                         ((UWorld *)local_res10,local_res18,
                          (FRaycastSQAdditionalInputs *)&local_res10.s,
                          (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_68._s_0,
                          param_6,param_7,param_8,param_9,
                          (FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
                           *)local_b8);
    }
  }
  FCsvProfiler::EndStat("RaycastMultiple",uVar10);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_a8._12_4_ = FVar21.Number & 0xffff6fff | 0x6000;
      local_a8._8_4_ = FVar23.Value;
      QueryPerformanceCounter(&local_res10);
      local_a8._0_4_ = local_res10.s.LowPart;
      local_a8._4_4_ = 0;
      FThreadStats::AddStatMessage(pFVar19,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_a8._8_4_ = local_78.ComparisonIndex.Value;
      local_a8._12_4_ = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar19,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return bVar15;
}

// RaycastMulti @ 1478587f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
::RaycastMulti(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
              UWorld *param_2,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_3,
              TVector<double> *param_4,TVector<double> *param_5,ECollisionChannel param_6,
              FCollisionQueryParams *param_7,FCollisionResponseParams *param_8,
              FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar17;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FName FVar21;
  FName FVar22;
  FNameEntryId FVar23;
  LARGE_INTEGER local_res10;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_res18;
  TVector<double> *local_res20;
  FName local_b8 [2];
  TVector<double>_u_0 local_a8;
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar23.Value = 0;
  FVar17 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar16 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar16,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar6 = false;
  bVar9 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_147858937:
    bVar7 = false;
    FVar22 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0] = (FName)((ulonglong)local_b8[0] & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)local_b8,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8[0] = FVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3df);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147858937;
    local_b8[0] = FVar22;
    local_78 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
  }
  FVar18 = StatPtr_STAT_Collision_RaycastMultiple;
  if (StatPtr_STAT_Collision_RaycastMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple>)0x0) {
    pFVar16 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_RaycastMultiple");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastMultiple,
                        *pFVar16,L"RaycastMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar18;
  bVar4 = false;
  bVar8 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0] = (FName)((ulonglong)local_b8[0] & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)local_b8,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8[0] = FVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_b8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3e0);
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8[0] = FVar21;
      local_88 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar5 = true;
      FVar23.Value = local_88.ComparisonIndex.Value;
      goto LAB_147858a4d;
    }
  }
  bVar5 = false;
  FVar21 = local_88;
LAB_147858a4d:
  if (`public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>::RaycastMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat993 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>::RaycastMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat993 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastMultiple",_GCsvCategory_SceneQuery.Index,"CSV_RaycastMultiple");
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  local_a8._0_4_ = *(undefined4 *)&param_5->field0_0x0;
  local_a8._4_4_ = *(undefined4 *)((longlong)&param_5->field0_0x0 + 4);
  local_a8._8_4_ = *(uint *)((longlong)&param_5->field0_0x0 + 8);
  local_a8._12_4_ = *(uint *)((longlong)&param_5->field0_0x0 + 0xc);
  dVar3 = (local_res20->field0_0x0)._s_0.Z;
  local_68._0_4_ = *(undefined4 *)&local_res20->field0_0x0;
  local_68._4_4_ = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 4);
  local_68._8_4_ = *(uint *)((longlong)&local_res20->field0_0x0 + 8);
  local_68._12_4_ = *(uint *)((longlong)&local_res20->field0_0x0 + 0xc);
  local_b8[0] = (FName)param_1;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar15 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') ||
       ((bVar15 = IsInGameThread(), !bVar15 && (bVar15 = IsInParallelGameThread(), !bVar15)))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    local_a8._s_0.Z = dVar3;
    local_68._s_0.Z = dVar2;
    if (bVar15) {
      uVar11 = local_a8._8_4_;
      local_a8._8_4_ = local_68._8_4_;
      uVar12 = local_a8._12_4_;
      local_a8._12_4_ = local_68._12_4_;
      uVar13 = local_68._0_4_;
      local_68._0_4_ = local_a8._0_4_;
      uVar14 = local_68._4_4_;
      local_68._4_4_ = local_a8._4_4_;
      local_68._8_4_ = uVar11;
      local_68._12_4_ = uVar12;
      local_a8._0_4_ = uVar13;
      local_a8._4_4_ = uVar14;
      bVar15 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,1>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                         ((UWorld *)local_res10,local_res18,
                          (FRaycastSQAdditionalInputs *)&local_res10.s,
                          (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_68._s_0,
                          param_6,param_7,param_8,param_9,
                          (FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
                           *)local_b8);
    }
    else {
      uVar11 = local_a8._8_4_;
      local_a8._8_4_ = local_68._8_4_;
      uVar12 = local_a8._12_4_;
      local_a8._12_4_ = local_68._12_4_;
      uVar13 = local_68._0_4_;
      local_68._0_4_ = local_a8._0_4_;
      uVar14 = local_68._4_4_;
      local_68._4_4_ = local_a8._4_4_;
      local_68._8_4_ = uVar11;
      local_68._12_4_ = uVar12;
      local_a8._0_4_ = uVar13;
      local_a8._4_4_ = uVar14;
      bVar15 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,1>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                         ((UWorld *)local_res10,local_res18,
                          (FRaycastSQAdditionalInputs *)&local_res10.s,
                          (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_68._s_0,
                          param_6,param_7,param_8,param_9,
                          (FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
                           *)local_b8);
    }
  }
  FCsvProfiler::EndStat("RaycastMultiple",uVar10);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_a8._12_4_ = FVar21.Number & 0xffff6fff | 0x6000;
      local_a8._8_4_ = FVar23.Value;
      QueryPerformanceCounter(&local_res10);
      local_a8._0_4_ = local_res10.s.LowPart;
      local_a8._4_4_ = 0;
      FThreadStats::AddStatMessage(pFVar19,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_a8._8_4_ = local_78.ComparisonIndex.Value;
      local_a8._12_4_ = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar19,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return bVar15;
}

// RaycastSingle @ 147859a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
::RaycastSingle(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
               UWorld *param_2,FHitResult *param_3,TVector<double> *param_4,TVector<double> *param_5
               ,ECollisionChannel param_6,FCollisionQueryParams *param_7,
               FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FHitResult *local_res18;
  TVector<double> *local_res20;
  FColor_u_0 local_b8;
  uint uStack_b4;
  TVector<double>_u_0 local_a8;
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147859bd7:
    bVar5 = false;
    FVar17 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.Bits = FVar15.Bits;
        uStack_b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3c7);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147859bd7;
    local_b8.Bits = FVar15.Bits;
    uStack_b4 = uVar9;
    local_78 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_RaycastSingle;
  if (StatPtr_STAT_Collision_RaycastSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_RaycastSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastSingle,*pFVar10,
                        L"RaycastSingle","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.Bits = FVar15.Bits;
        uStack_b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3c8);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8.Bits = FVar15.Bits;
      uStack_b4 = uVar9;
      local_88 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_88.ComparisonIndex.Value;
      goto LAB_147859ced;
    }
  }
  bVar3 = false;
  FVar16 = local_88;
LAB_147859ced:
  if (`public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>::RaycastSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat969 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>::RaycastSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat969 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastSingle",_GCsvCategory_SceneQuery.Index,"CSV_RaycastSingle");
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar8 = IsInGameThread(), !bVar8 && (bVar8 = IsInParallelGameThread(), !bVar8)))
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    local_68._s_0.X = (param_5->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_5->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_a8._s_0.X = (local_res20->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (local_res20->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (local_res20->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,0>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,local_res18,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_68._s_0,param_6
                         ,param_7,param_8,param_9,&local_res8);
    }
    else {
      local_a8._s_0.X = local_68._s_0.X;
      local_a8._s_0.Y = local_68._s_0.Y;
      local_a8._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (local_res20->field0_0x0)._s_0.X;
      local_68._s_0.Y = (local_res20->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (local_res20->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,0>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,local_res18,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_a8._s_0,param_6
                         ,param_7,param_8,param_9,&local_res8);
    }
  }
  FCsvProfiler::EndStat("RaycastSingle",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_a8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_a8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,local_78.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return bVar8;
}

// RaycastSingle @ 14785a040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
::RaycastSingle(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
               UWorld *param_2,FHitResult *param_3,TVector<double> *param_4,TVector<double> *param_5
               ,ECollisionChannel param_6,FCollisionQueryParams *param_7,
               FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FHitResult *local_res18;
  TVector<double> *local_res20;
  FColor_u_0 local_b8;
  uint uStack_b4;
  TVector<double>_u_0 local_a8;
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14785a187:
    bVar5 = false;
    FVar17 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.Bits = FVar15.Bits;
        uStack_b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3c7);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785a187;
    local_b8.Bits = FVar15.Bits;
    uStack_b4 = uVar9;
    local_78 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_RaycastSingle;
  if (StatPtr_STAT_Collision_RaycastSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_a8._s_0,"STAT_Collision_RaycastSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastSingle,*pFVar10,
                        L"RaycastSingle","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.Bits = FVar15.Bits;
        uStack_b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3c8);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8.Bits = FVar15.Bits;
      uStack_b4 = uVar9;
      local_88 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_88.ComparisonIndex.Value;
      goto LAB_14785a29d;
    }
  }
  bVar3 = false;
  FVar16 = local_88;
LAB_14785a29d:
  if (`public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>::RaycastSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat969 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>::RaycastSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat969 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastSingle",_GCsvCategory_SceneQuery.Index,"CSV_RaycastSingle");
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar8 = IsInGameThread(), !bVar8 && (bVar8 = IsInParallelGameThread(), !bVar8)))
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    local_68._s_0.X = (param_5->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_5->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_a8._s_0.X = (local_res20->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (local_res20->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (local_res20->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,0>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,local_res18,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_68._s_0,param_6
                         ,param_7,param_8,param_9,&local_res8);
    }
    else {
      local_a8._s_0.X = local_68._s_0.X;
      local_a8._s_0.Y = local_68._s_0.Y;
      local_a8._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (local_res20->field0_0x0)._s_0.X;
      local_68._s_0.Y = (local_res20->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (local_res20->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,0>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,local_res18,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_a8._s_0,param_6
                         ,param_7,param_8,param_9,&local_res8);
    }
  }
  FCsvProfiler::EndStat("RaycastSingle",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_a8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_a8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,local_78.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return bVar8;
}

// RaycastTest @ 14785adb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
::RaycastTest(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
             UWorld *param_2,TVector<double> *param_3,TVector<double> *param_4,
             ECollisionChannel param_5,FCollisionQueryParams *param_6,
             FCollisionResponseParams *param_7,FCollisionObjectQueryParams *param_8)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  TVector<double> *local_res18;
  TVector<double> *local_res20;
  FColor_u_0 local_1b8;
  uint uStack_1b4;
  TVector<double>_u_0 local_1a8;
  FName local_188;
  FName local_178;
  TVector<double>_u_0 local_168;
  FHitResult local_148;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1a8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14785af03:
    bVar5 = false;
    FVar17 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.Bits = FVar15.Bits;
        uStack_1b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3ae);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785af03;
    local_1b8.Bits = FVar15.Bits;
    uStack_1b4 = uVar9;
    local_178 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_RaycastAny;
  if (StatPtr_STAT_Collision_RaycastAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1a8._s_0,"STAT_Collision_RaycastAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastAny,*pFVar10,
                        L"RaycastAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.Bits = FVar15.Bits;
        uStack_1b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3af);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b8.Bits = FVar15.Bits;
      uStack_1b4 = uVar9;
      local_188 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_188.ComparisonIndex.Value;
      goto LAB_14785b025;
    }
  }
  bVar3 = false;
  FVar16 = local_188;
LAB_14785b025:
  if (`public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>::RaycastTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat944 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>::RaycastTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat944 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastTest",_GCsvCategory_SceneQuery.Index,"CSV_RaycastTest");
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_148.HitObjectHandle.ResolutionStatus = Invalid;
  local_148.Component.WeakPtr.ObjectIndex = 0;
  local_148.Component.WeakPtr.ObjectSerialNumber = 0;
  local_148.PhysicsObjectOwner.WeakPtr.ObjectIndex = 0;
  local_148.PhysicsObjectOwner.WeakPtr.ObjectSerialNumber = 0;
  local_148.BoneName.ComparisonIndex.Value = 0;
  local_148.BoneName.Number = 0;
  local_148.MyBoneName.ComparisonIndex.Value = 0;
  local_148.MyBoneName.Number = 0;
  local_148.PhysMaterial.WeakPtr.ObjectIndex = 0;
  local_148.PhysMaterial.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.InstanceIndex = -1;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar8 = IsInGameThread(), !bVar8 && (bVar8 = IsInParallelGameThread(), !bVar8)))
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    local_168._s_0.X = (local_res20->field0_0x0)._s_0.X;
    local_168._s_0.Y = (local_res20->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (local_res20->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_1a8._s_0.X = (local_res18->field0_0x0)._s_0.X;
      local_1a8._s_0.Y = (local_res18->field0_0x0)._s_0.Y;
      local_1a8._s_0.Z = (local_res18->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,2>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_168._s_0,
                         param_5,param_6,param_7,param_8,&local_res8);
    }
    else {
      local_1a8._s_0.X = local_168._s_0.X;
      local_1a8._s_0.Y = local_168._s_0.Y;
      local_1a8._s_0.Z = local_168._s_0.Z;
      local_168._s_0.X = (local_res18->field0_0x0)._s_0.X;
      local_168._s_0.Y = (local_res18->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (local_res18->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,2>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_1a8._s_0,
                         param_5,param_6,param_7,param_8,&local_res8);
    }
  }
  FCsvProfiler::EndStat("RaycastTest",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1a8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1a8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,local_178.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return bVar8;
}

// RaycastTest @ 14785b400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
::RaycastTest(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
             UWorld *param_2,TVector<double> *param_3,TVector<double> *param_4,
             ECollisionChannel param_5,FCollisionQueryParams *param_6,
             FCollisionResponseParams *param_7,FCollisionObjectQueryParams *param_8)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  TVector<double> *local_res18;
  TVector<double> *local_res20;
  FColor_u_0 local_1b8;
  uint uStack_1b4;
  TVector<double>_u_0 local_1a8;
  FName local_188;
  FName local_178;
  TVector<double>_u_0 local_168;
  FHitResult local_148;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1a8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14785b553:
    bVar5 = false;
    FVar17 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.Bits = FVar15.Bits;
        uStack_1b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3ae);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785b553;
    local_1b8.Bits = FVar15.Bits;
    uStack_1b4 = uVar9;
    local_178 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_RaycastAny;
  if (StatPtr_STAT_Collision_RaycastAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1a8._s_0,"STAT_Collision_RaycastAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastAny,*pFVar10,
                        L"RaycastAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.Bits = FVar15.Bits;
        uStack_1b4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3af);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b8.Bits = FVar15.Bits;
      uStack_1b4 = uVar9;
      local_188 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_188.ComparisonIndex.Value;
      goto LAB_14785b675;
    }
  }
  bVar3 = false;
  FVar16 = local_188;
LAB_14785b675:
  if (`public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>::RaycastTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat944 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>::RaycastTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat944 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastTest",_GCsvCategory_SceneQuery.Index,"CSV_RaycastTest");
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_148.HitObjectHandle.ResolutionStatus = Invalid;
  local_148.Component.WeakPtr.ObjectIndex = 0;
  local_148.Component.WeakPtr.ObjectSerialNumber = 0;
  local_148.PhysicsObjectOwner.WeakPtr.ObjectIndex = 0;
  local_148.PhysicsObjectOwner.WeakPtr.ObjectSerialNumber = 0;
  local_148.BoneName.ComparisonIndex.Value = 0;
  local_148.BoneName.Number = 0;
  local_148.MyBoneName.ComparisonIndex.Value = 0;
  local_148.MyBoneName.Number = 0;
  local_148.PhysMaterial.WeakPtr.ObjectIndex = 0;
  local_148.PhysMaterial.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.InstanceIndex = -1;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar8 = IsInGameThread(), !bVar8 && (bVar8 = IsInParallelGameThread(), !bVar8)))
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    local_168._s_0.X = (local_res20->field0_0x0)._s_0.X;
    local_168._s_0.Y = (local_res20->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (local_res20->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_1a8._s_0.X = (local_res18->field0_0x0)._s_0.X;
      local_1a8._s_0.Y = (local_res18->field0_0x0)._s_0.Y;
      local_1a8._s_0.Z = (local_res18->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,2>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_168._s_0,
                         param_5,param_6,param_7,param_8,&local_res8);
    }
    else {
      local_1a8._s_0.X = local_168._s_0.X;
      local_1a8._s_0.Y = local_168._s_0.Y;
      local_1a8._s_0.Z = local_168._s_0.Z;
      local_168._s_0.X = (local_res18->field0_0x0)._s_0.X;
      local_168._s_0.Y = (local_res18->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (local_res18->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,2>,FRaycastSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FRaycastSQAdditionalInputs *)&local_res10.s,
                         (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_1a8._s_0,
                         param_5,param_6,param_7,param_8,&local_res8);
    }
  }
  FCsvProfiler::EndStat("RaycastTest",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1a8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1a8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,local_178.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1a8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1a8._s_0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return bVar8;
}

