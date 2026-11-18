// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// GeomOverlapAnyTest @ 1478247b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>
::GeomOverlapAnyTest
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
          UWorld *param_2,FCollisionShape *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_1d8 [32];
  FColor_u_0 local_178;
  uint uStack_174;
  LARGE_INTEGER local_170;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_168;
  UWorld *local_160;
  FName local_158;
  FName local_148;
  TQuat<double> local_138;
  FCollisionObjectQueryParams *local_118;
  FCollisionResponseParams *local_110;
  FCollisionQueryParams *local_108;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_100;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_f0;
  FPhysicsShapeAdapter_Chaos local_e8;
  LARGE_INTEGER local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_108 = param_7;
  local_110 = param_8;
  local_118 = param_9;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_170 = (LARGE_INTEGER)param_3;
  local_168.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_160 = param_2;
  local_f0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147824937:
    bVar5 = false;
    FVar19 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147824937;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_148 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapAny;
  if (StatPtr_STAT_Collision_GeomOverlapAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_GeomOverlapAny");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapAny,*pFVar11
                        ,L"GeomOverlapAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147824a54:
    bVar3 = false;
    FVar18 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147824a54;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_158 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
    FVar20.Value = local_158.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1373 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1373 = true;
  }
  local_178.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapAny");
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_168.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_168.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_168.SpatialAcceleration)->SyncTimestamp;
  local_168.SpatialAcceleration = local_f0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_160 == (UWorld *)0x0) || (local_160->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_147824bef;
  }
  if (*(char *)(local_160->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147824b33:
    bVar9 = false;
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_147824b33;
    }
    bVar9 = true;
  }
  LVar8 = local_170;
  local_138.X = local_a8.Rotation.XY.m128d_f64[0];
  local_138.Y = local_a8.Rotation.XY.m128d_f64[1];
  local_138.Z = local_a8.Rotation.ZW.m128d_f64[0];
  local_138.W = local_a8.Rotation.ZW.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_e8,&local_138,(FCollisionShape *)local_170);
  local_b8 = LVar8;
  pFVar14 = FPhysicsShapeAdapter_Chaos::GetGeometry(&local_e8);
  if (bVar9) {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,2,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  else {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,2,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
LAB_147824bef:
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapAny",local_178.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar18.Number,FVar20.Value) & 0xffff6fffffffffff |
                            0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar19.Number,local_148.ComparisonIndex.Value.Value) &
                             0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapAnyTest @ 147824de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomOverlapAnyTest
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
          UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TVector<double> *param_4,
          TQuat<double> *param_5,ECollisionChannel param_6,FCollisionQueryParams *param_7,
          FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  undefined1 auStackY_178 [32];
  FColor_u_0 local_118;
  uint uStack_114;
  LARGE_INTEGER local_110;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_108;
  FStatMessage local_100;
  FName local_f0;
  FName local_e0;
  FCollisionObjectQueryParams *local_d0;
  FCollisionResponseParams *local_c8;
  FCollisionQueryParams *local_c0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_b8;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_c0 = param_7;
  local_c8 = param_8;
  local_d0 = param_9;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_110 = (LARGE_INTEGER)param_2;
  local_108.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_a8 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147824f68:
    bVar5 = false;
    FVar19 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147824f68;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_e0 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapAny;
  if (StatPtr_STAT_Collision_GeomOverlapAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_GeomOverlapAny");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapAny,*pFVar11
                        ,L"GeomOverlapAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147825086:
    bVar3 = false;
    FVar18 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147825086;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_f0 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1373 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1373 = true;
  }
  local_118.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapAny");
  LVar8 = local_110;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_98.Rotation.XY.m128d_f64[0] = param_5->X;
  local_98.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_98.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_98.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_98.Translation.ZW.m128d_f64[0] = (double)local_108.SpatialAcceleration[1]._padding_;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_98.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_98.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_108.SpatialAcceleration)->_padding_)->_s_0).X;
  local_98.Translation.XY.m128d_f64[1] = *(double *)&(local_108.SpatialAcceleration)->SyncTimestamp;
  local_108.SpatialAcceleration = local_a8;
  if (((UWorld *)local_110.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_147825216;
  }
  if (*(char *)((*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0))->_padding_ + 0x271) == '\0') {
LAB_1478251b8:
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_1478251b8;
    }
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
LAB_147825216:
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapAny",local_118.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_f0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_e0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapAnyTest @ 147825410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
::GeomOverlapAnyTest
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
          UWorld *param_2,FImplicitObject *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148;
  uint uStack_144;
  undefined1 local_140 [16];
  LARGE_INTEGER local_130;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_128;
  UWorld *local_120;
  FName local_118;
  FName local_108;
  FCollisionObjectQueryParams *local_f8;
  FCollisionResponseParams *local_f0;
  FCollisionQueryParams *local_e8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_e0;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e8 = param_7;
  local_f0 = param_8;
  local_f8 = param_9;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_130 = (LARGE_INTEGER)param_3;
  local_128.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_120 = param_2;
  local_d0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_147825590:
    bVar5 = false;
    FVar18 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147825590;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_108 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapAny;
  if (StatPtr_STAT_Collision_GeomOverlapAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_GeomOverlapAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapAny,*pFVar10
                        ,L"GeomOverlapAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_1478256ae:
    bVar3 = false;
    FVar17 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478256ae;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_118 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_118.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1373 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1373 = true;
  }
  local_148.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapAny");
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_128.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_128.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_128.SpatialAcceleration)->SyncTimestamp;
  local_128.SpatialAcceleration = local_d0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_120 == (UWorld *)0x0) || (local_120->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_147825843;
  }
  if (*(char *)(local_120->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147825787:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_147825787;
    }
    bVar8 = true;
  }
  local_c8 = local_a8.Rotation.XY.m128d_f64[0];
  dStack_c0 = local_a8.Rotation.XY.m128d_f64[1];
  local_b8 = local_a8.Rotation.ZW.m128d_f64[0];
  dStack_b0 = local_a8.Rotation.ZW.m128d_f64[1];
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_140);
  local_140._8_8_ = &local_c8;
  pFVar13 = FPhysicsGeometryCollection_Chaos::GetGeometry
                      ((FPhysicsGeometryCollection_Chaos *)local_140);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_140);
LAB_147825843:
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapAny",local_148.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ = CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ =
           CONCAT44(FVar18.Number,local_108.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomOverlapAnyTest @ 147825a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>
::GeomOverlapAnyTest
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          UWorld *param_2,FCollisionShape *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_1d8 [32];
  FColor_u_0 local_178;
  uint uStack_174;
  LARGE_INTEGER local_170;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_168;
  UWorld *local_160;
  FName local_158;
  FName local_148;
  TQuat<double> local_138;
  FCollisionObjectQueryParams *local_118;
  FCollisionResponseParams *local_110;
  FCollisionQueryParams *local_108;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_100;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_f0;
  FPhysicsShapeAdapter_Chaos local_e8;
  LARGE_INTEGER local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_108 = param_7;
  local_110 = param_8;
  local_118 = param_9;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_170 = (LARGE_INTEGER)param_3;
  local_168.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_160 = param_2;
  local_f0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147825bc7:
    bVar5 = false;
    FVar19 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147825bc7;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_148 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapAny;
  if (StatPtr_STAT_Collision_GeomOverlapAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_GeomOverlapAny");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapAny,*pFVar11
                        ,L"GeomOverlapAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147825ce4:
    bVar3 = false;
    FVar18 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147825ce4;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_158 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
    FVar20.Value = local_158.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1373 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1373 = true;
  }
  local_178.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapAny");
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_168.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_168.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_168.SpatialAcceleration)->SyncTimestamp;
  local_168.SpatialAcceleration = local_f0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_160 == (UWorld *)0x0) || (local_160->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_147825e7f;
  }
  if (*(char *)(local_160->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147825dc3:
    bVar9 = false;
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_147825dc3;
    }
    bVar9 = true;
  }
  LVar8 = local_170;
  local_138.X = local_a8.Rotation.XY.m128d_f64[0];
  local_138.Y = local_a8.Rotation.XY.m128d_f64[1];
  local_138.Z = local_a8.Rotation.ZW.m128d_f64[0];
  local_138.W = local_a8.Rotation.ZW.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_e8,&local_138,(FCollisionShape *)local_170);
  local_b8 = LVar8;
  pFVar14 = FPhysicsShapeAdapter_Chaos::GetGeometry(&local_e8);
  if (bVar9) {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,2,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  else {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,2,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
LAB_147825e7f:
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapAny",local_178.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar18.Number,FVar20.Value) & 0xffff6fffffffffff |
                            0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar19.Number,local_148.ComparisonIndex.Value.Value) &
                             0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapAnyTest @ 147826070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomOverlapAnyTest
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TVector<double> *param_4,
          TQuat<double> *param_5,ECollisionChannel param_6,FCollisionQueryParams *param_7,
          FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  undefined1 auStackY_178 [32];
  FColor_u_0 local_118;
  uint uStack_114;
  LARGE_INTEGER local_110;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_108;
  FStatMessage local_100;
  FName local_f0;
  FName local_e0;
  FCollisionObjectQueryParams *local_d0;
  FCollisionResponseParams *local_c8;
  FCollisionQueryParams *local_c0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_b8;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_c0 = param_7;
  local_c8 = param_8;
  local_d0 = param_9;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_110 = (LARGE_INTEGER)param_2;
  local_108.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_a8 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_1478261f8:
    bVar5 = false;
    FVar19 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478261f8;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_e0 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapAny;
  if (StatPtr_STAT_Collision_GeomOverlapAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_GeomOverlapAny");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapAny,*pFVar11
                        ,L"GeomOverlapAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147826316:
    bVar3 = false;
    FVar18 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147826316;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_f0 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1373 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1373 = true;
  }
  local_118.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapAny");
  LVar8 = local_110;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_98.Rotation.XY.m128d_f64[0] = param_5->X;
  local_98.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_98.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_98.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_98.Translation.ZW.m128d_f64[0] = (double)local_108.SpatialAcceleration[1]._padding_;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_98.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_98.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_108.SpatialAcceleration)->_padding_)->_s_0).X;
  local_98.Translation.XY.m128d_f64[1] = *(double *)&(local_108.SpatialAcceleration)->SyncTimestamp;
  local_108.SpatialAcceleration = local_a8;
  if (((UWorld *)local_110.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_1478264a6;
  }
  if (*(char *)((*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0))->_padding_ + 0x271) == '\0') {
LAB_147826448:
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_147826448;
    }
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
LAB_1478264a6:
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapAny",local_118.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_f0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_e0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapAnyTest @ 1478266a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>
::GeomOverlapAnyTest
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          UWorld *param_2,FImplicitObject *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148;
  uint uStack_144;
  undefined1 local_140 [16];
  LARGE_INTEGER local_130;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_128;
  UWorld *local_120;
  FName local_118;
  FName local_108;
  FCollisionObjectQueryParams *local_f8;
  FCollisionResponseParams *local_f0;
  FCollisionQueryParams *local_e8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_e0;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e8 = param_7;
  local_f0 = param_8;
  local_f8 = param_9;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_130 = (LARGE_INTEGER)param_3;
  local_128.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_120 = param_2;
  local_d0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_147826820:
    bVar5 = false;
    FVar18 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147826820;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_108 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapAny;
  if (StatPtr_STAT_Collision_GeomOverlapAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_GeomOverlapAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapAny,*pFVar10
                        ,L"GeomOverlapAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782693e:
    bVar3 = false;
    FVar17 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x55c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782693e;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_118 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_118.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1373 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomOverlapAnyTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1373 = true;
  }
  local_148.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapAny");
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_128.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_128.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_128.SpatialAcceleration)->SyncTimestamp;
  local_128.SpatialAcceleration = local_d0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_120 == (UWorld *)0x0) || (local_120->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_147826ad3;
  }
  if (*(char *)(local_120->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147826a17:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_147826a17;
    }
    bVar8 = true;
  }
  local_c8 = local_a8.Rotation.XY.m128d_f64[0];
  dStack_c0 = local_a8.Rotation.XY.m128d_f64[1];
  local_b8 = local_a8.Rotation.ZW.m128d_f64[0];
  dStack_b0 = local_a8.Rotation.ZW.m128d_f64[1];
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_140);
  local_140._8_8_ = &local_c8;
  pFVar13 = FPhysicsGeometryCollection_Chaos::GetGeometry
                      ((FPhysicsGeometryCollection_Chaos *)local_140);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,2,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_140);
LAB_147826ad3:
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapAny",local_148.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ = CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ =
           CONCAT44(FVar18.Number,local_108.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomOverlapBlockingTest @ 147827230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>
::GeomOverlapBlockingTest
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
          UWorld *param_2,FCollisionShape *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_1d8 [32];
  FColor_u_0 local_178;
  uint uStack_174;
  LARGE_INTEGER local_170;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_168;
  UWorld *local_160;
  FName local_158;
  FName local_148;
  TQuat<double> local_138;
  FCollisionObjectQueryParams *local_118;
  FCollisionResponseParams *local_110;
  FCollisionQueryParams *local_108;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_100;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_f0;
  FPhysicsShapeAdapter_Chaos local_e8;
  LARGE_INTEGER local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_108 = param_7;
  local_110 = param_8;
  local_118 = param_9;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_170 = (LARGE_INTEGER)param_3;
  local_168.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_160 = param_2;
  local_f0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_1478273b7:
    bVar5 = false;
    FVar19 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x544);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478273b7;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_148 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapBlocking;
  if (StatPtr_STAT_Collision_GeomOverlapBlocking ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_GeomOverlapBlocking");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapBlocking,
                        *pFVar11,L"GeomOverlapBlocking","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_1478274d4:
    bVar3 = false;
    FVar18 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x545);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478274d4;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_158 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
    FVar20.Value = local_158.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1350 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1350 = true;
  }
  local_178.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapBlocking");
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_168.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_168.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_168.SpatialAcceleration)->SyncTimestamp;
  local_168.SpatialAcceleration = local_f0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_160 == (UWorld *)0x0) || (local_160->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_14782766f;
  }
  if (*(char *)(local_160->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_1478275b3:
    bVar9 = false;
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_1478275b3;
    }
    bVar9 = true;
  }
  LVar8 = local_170;
  local_138.X = local_a8.Rotation.XY.m128d_f64[0];
  local_138.Y = local_a8.Rotation.XY.m128d_f64[1];
  local_138.Z = local_a8.Rotation.ZW.m128d_f64[0];
  local_138.W = local_a8.Rotation.ZW.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_e8,&local_138,(FCollisionShape *)local_170);
  local_b8 = LVar8;
  pFVar14 = FPhysicsShapeAdapter_Chaos::GetGeometry(&local_e8);
  if (bVar9) {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,1,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  else {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,1,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
LAB_14782766f:
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapBlocking",local_178.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar18.Number,FVar20.Value) & 0xffff6fffffffffff |
                            0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar19.Number,local_148.ComparisonIndex.Value.Value) &
                             0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapBlockingTest @ 147827860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomOverlapBlockingTest
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
          UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TVector<double> *param_4,
          TQuat<double> *param_5,ECollisionChannel param_6,FCollisionQueryParams *param_7,
          FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  undefined1 auStackY_178 [32];
  FColor_u_0 local_118;
  uint uStack_114;
  LARGE_INTEGER local_110;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_108;
  FStatMessage local_100;
  FName local_f0;
  FName local_e0;
  FCollisionObjectQueryParams *local_d0;
  FCollisionResponseParams *local_c8;
  FCollisionQueryParams *local_c0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_b8;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_c0 = param_7;
  local_c8 = param_8;
  local_d0 = param_9;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_110 = (LARGE_INTEGER)param_2;
  local_108.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_a8 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_1478279e8:
    bVar5 = false;
    FVar19 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x544);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478279e8;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_e0 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapBlocking;
  if (StatPtr_STAT_Collision_GeomOverlapBlocking ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_GeomOverlapBlocking");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapBlocking,
                        *pFVar11,L"GeomOverlapBlocking","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147827b06:
    bVar3 = false;
    FVar18 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x545);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147827b06;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_f0 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1350 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1350 = true;
  }
  local_118.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapBlocking");
  LVar8 = local_110;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_98.Rotation.XY.m128d_f64[0] = param_5->X;
  local_98.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_98.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_98.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_98.Translation.ZW.m128d_f64[0] = (double)local_108.SpatialAcceleration[1]._padding_;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_98.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_98.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_108.SpatialAcceleration)->_padding_)->_s_0).X;
  local_98.Translation.XY.m128d_f64[1] = *(double *)&(local_108.SpatialAcceleration)->SyncTimestamp;
  local_108.SpatialAcceleration = local_a8;
  if (((UWorld *)local_110.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_147827c96;
  }
  if (*(char *)((*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0))->_padding_ + 0x271) == '\0') {
LAB_147827c38:
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_147827c38;
    }
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
LAB_147827c96:
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapBlocking",local_118.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_f0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_e0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapBlockingTest @ 147827e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
::GeomOverlapBlockingTest
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
          UWorld *param_2,FImplicitObject *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148;
  uint uStack_144;
  undefined1 local_140 [16];
  LARGE_INTEGER local_130;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_128;
  UWorld *local_120;
  FName local_118;
  FName local_108;
  FCollisionObjectQueryParams *local_f8;
  FCollisionResponseParams *local_f0;
  FCollisionQueryParams *local_e8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_e0;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e8 = param_7;
  local_f0 = param_8;
  local_f8 = param_9;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_130 = (LARGE_INTEGER)param_3;
  local_128.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_120 = param_2;
  local_d0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_147828010:
    bVar5 = false;
    FVar18 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x544);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147828010;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_108 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapBlocking;
  if (StatPtr_STAT_Collision_GeomOverlapBlocking ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_GeomOverlapBlocking");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapBlocking,
                        *pFVar10,L"GeomOverlapBlocking","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782812e:
    bVar3 = false;
    FVar17 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x545);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782812e;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_118 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_118.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1350 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1350 = true;
  }
  local_148.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapBlocking");
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_128.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_128.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_128.SpatialAcceleration)->SyncTimestamp;
  local_128.SpatialAcceleration = local_d0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_120 == (UWorld *)0x0) || (local_120->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_1478282c3;
  }
  if (*(char *)(local_120->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147828207:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_147828207;
    }
    bVar8 = true;
  }
  local_c8 = local_a8.Rotation.XY.m128d_f64[0];
  dStack_c0 = local_a8.Rotation.XY.m128d_f64[1];
  local_b8 = local_a8.Rotation.ZW.m128d_f64[0];
  dStack_b0 = local_a8.Rotation.ZW.m128d_f64[1];
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_140);
  local_140._8_8_ = &local_c8;
  pFVar13 = FPhysicsGeometryCollection_Chaos::GetGeometry
                      ((FPhysicsGeometryCollection_Chaos *)local_140);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_140);
LAB_1478282c3:
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapBlocking",local_148.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ = CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ =
           CONCAT44(FVar18.Number,local_108.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomOverlapBlockingTest @ 1478284c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>
::GeomOverlapBlockingTest
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          UWorld *param_2,FCollisionShape *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_1d8 [32];
  FColor_u_0 local_178;
  uint uStack_174;
  LARGE_INTEGER local_170;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_168;
  UWorld *local_160;
  FName local_158;
  FName local_148;
  TQuat<double> local_138;
  FCollisionObjectQueryParams *local_118;
  FCollisionResponseParams *local_110;
  FCollisionQueryParams *local_108;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_100;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_f0;
  FPhysicsShapeAdapter_Chaos local_e8;
  LARGE_INTEGER local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_108 = param_7;
  local_110 = param_8;
  local_118 = param_9;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_170 = (LARGE_INTEGER)param_3;
  local_168.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_160 = param_2;
  local_f0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147828647:
    bVar5 = false;
    FVar19 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x544);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147828647;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_148 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapBlocking;
  if (StatPtr_STAT_Collision_GeomOverlapBlocking ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_138,"STAT_Collision_GeomOverlapBlocking");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapBlocking,
                        *pFVar11,L"GeomOverlapBlocking","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147828764:
    bVar3 = false;
    FVar18 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar17.Bits;
        uStack_174 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x545);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147828764;
    local_178.Bits = FVar17.Bits;
    uStack_174 = uVar10;
    local_158 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
    FVar20.Value = local_158.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1350 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1350 = true;
  }
  local_178.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapBlocking");
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_168.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_168.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_168.SpatialAcceleration)->SyncTimestamp;
  local_168.SpatialAcceleration = local_f0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_160 == (UWorld *)0x0) || (local_160->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_1478288ff;
  }
  if (*(char *)(local_160->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147828843:
    bVar9 = false;
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_147828843;
    }
    bVar9 = true;
  }
  LVar8 = local_170;
  local_138.X = local_a8.Rotation.XY.m128d_f64[0];
  local_138.Y = local_a8.Rotation.XY.m128d_f64[1];
  local_138.Z = local_a8.Rotation.ZW.m128d_f64[0];
  local_138.W = local_a8.Rotation.ZW.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_e8,&local_138,(FCollisionShape *)local_170);
  local_b8 = LVar8;
  pFVar14 = FPhysicsShapeAdapter_Chaos::GetGeometry(&local_e8);
  if (bVar9) {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,1,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  else {
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,1,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_160,pFVar14,(FCollisionShape *)local_b8,&local_a8,&local_100,param_6,
                       local_108,local_110,local_118,&local_168);
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
LAB_1478288ff:
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapBlocking",local_178.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar18.Number,FVar20.Value) & 0xffff6fffffffffff |
                            0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar19.Number,local_148.ComparisonIndex.Value.Value) &
                             0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_138);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapBlockingTest @ 147828af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomOverlapBlockingTest
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TVector<double> *param_4,
          TQuat<double> *param_5,ECollisionChannel param_6,FCollisionQueryParams *param_7,
          FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  undefined1 auStackY_178 [32];
  FColor_u_0 local_118;
  uint uStack_114;
  LARGE_INTEGER local_110;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_108;
  FStatMessage local_100;
  FName local_f0;
  FName local_e0;
  FCollisionObjectQueryParams *local_d0;
  FCollisionResponseParams *local_c8;
  FCollisionQueryParams *local_c0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_b8;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_c0 = param_7;
  local_c8 = param_8;
  local_d0 = param_9;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_110 = (LARGE_INTEGER)param_2;
  local_108.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_a8 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147828c78:
    bVar5 = false;
    FVar19 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x544);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147828c78;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_e0 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapBlocking;
  if (StatPtr_STAT_Collision_GeomOverlapBlocking ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_100,"STAT_Collision_GeomOverlapBlocking");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapBlocking,
                        *pFVar11,L"GeomOverlapBlocking","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147828d96:
    bVar3 = false;
    FVar18 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar17.Bits;
        uStack_114 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x545);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147828d96;
    local_118.Bits = FVar17.Bits;
    uStack_114 = uVar10;
    local_f0 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1350 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1350 = true;
  }
  local_118.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapBlocking");
  LVar8 = local_110;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_98.Rotation.XY.m128d_f64[0] = param_5->X;
  local_98.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_98.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_98.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_98.Translation.ZW.m128d_f64[0] = (double)local_108.SpatialAcceleration[1]._padding_;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_98.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_98.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_108.SpatialAcceleration)->_padding_)->_s_0).X;
  local_98.Translation.XY.m128d_f64[1] = *(double *)&(local_108.SpatialAcceleration)->SyncTimestamp;
  local_108.SpatialAcceleration = local_a8;
  if (((UWorld *)local_110.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_147828f26;
  }
  if (*(char *)((*(FPhysScene_Chaos **)(local_110.QuadPart + 0x2a0))->_padding_ + 0x271) == '\0') {
LAB_147828ec8:
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_147828ec8;
    }
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,&local_b8,param_6,local_c0,local_c8
                       ,local_d0,&local_108);
  }
LAB_147828f26:
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapBlocking",local_118.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_f0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_100.NameAndInfo.Index.Value = local_e0.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_100);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapBlockingTest @ 147829120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>
::GeomOverlapBlockingTest
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          UWorld *param_2,FImplicitObject *param_3,TVector<double> *param_4,TQuat<double> *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148;
  uint uStack_144;
  undefined1 local_140 [16];
  LARGE_INTEGER local_130;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_128;
  UWorld *local_120;
  FName local_118;
  FName local_108;
  FCollisionObjectQueryParams *local_f8;
  FCollisionResponseParams *local_f0;
  FCollisionQueryParams *local_e8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_e0;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e8 = param_7;
  local_f0 = param_8;
  local_f8 = param_9;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_130 = (LARGE_INTEGER)param_3;
  local_128.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_120 = param_2;
  local_d0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_1478292a0:
    bVar5 = false;
    FVar18 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x544);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478292a0;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_108 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapBlocking;
  if (StatPtr_STAT_Collision_GeomOverlapBlocking ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_GeomOverlapBlocking");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapBlocking,
                        *pFVar10,L"GeomOverlapBlocking","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_1478293be:
    bVar3 = false;
    FVar17 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x545);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478293be;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_118 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_118.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1350 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomOverlapBlockingTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1350 = true;
  }
  local_148.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapBlocking");
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_128.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_128.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_128.SpatialAcceleration)->SyncTimestamp;
  local_128.SpatialAcceleration = local_d0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_120 == (UWorld *)0x0) || (local_120->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_147829553;
  }
  if (*(char *)(local_120->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147829497:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_147829497;
    }
    bVar8 = true;
  }
  local_c8 = local_a8.Rotation.XY.m128d_f64[0];
  dStack_c0 = local_a8.Rotation.XY.m128d_f64[1];
  local_b8 = local_a8.Rotation.ZW.m128d_f64[0];
  dStack_b0 = local_a8.Rotation.ZW.m128d_f64[1];
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_140);
  local_140._8_8_ = &local_c8;
  pFVar13 = FPhysicsGeometryCollection_Chaos::GetGeometry
                      ((FPhysicsGeometryCollection_Chaos *)local_140);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,1,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       &local_e0,param_6,local_e8,local_f0,local_f8,&local_128);
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_140);
LAB_147829553:
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapBlocking",local_148.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ = CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ =
           CONCAT44(FVar18.Number,local_108.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomOverlapMulti @ 147829cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>
::GeomOverlapMulti(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                  UWorld *param_2,FCollisionShape *param_3,TVector<double> *param_4,
                  TQuat<double> *param_5,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6
                  ,ECollisionChannel param_7,FCollisionQueryParams *param_8,
                  FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1d8 [32];
  FColor_u_0 local_178;
  uint uStack_174;
  LARGE_INTEGER local_170;
  LARGE_INTEGER local_168;
  UWorld *local_160;
  FName local_158;
  FName local_148;
  TQuat<double> local_138;
  FCollisionShape *local_118;
  FCollisionObjectQueryParams *local_110;
  FCollisionResponseParams *local_108;
  FCollisionQueryParams *local_100;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_f8;
  FPhysicsShapeAdapter_Chaos local_e8;
  FCollisionShape *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_f8 = param_6;
  local_100 = param_8;
  local_108 = param_9;
  local_110 = param_10;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_170 = (LARGE_INTEGER)param_1;
  local_168 = (LARGE_INTEGER)param_4;
  local_160 = param_2;
  local_118 = param_3;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_138,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_147829e42:
    bVar5 = false;
    FVar18 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar16.Bits;
        uStack_174 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147829e42;
    local_178.Bits = FVar16.Bits;
    uStack_174 = uVar9;
    local_148 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_138,"STAT_Collision_GeomOverlapMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar10,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_147829f5c:
    bVar3 = false;
    FVar17 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar16.Bits;
        uStack_174 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147829f5c;
    local_178.Bits = FVar16.Bits;
    uStack_174 = uVar9;
    local_158 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_158.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomOverlapMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1437 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomOverlapMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1437 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = *(double *)(local_168.QuadPart + 0x10);
  local_a8.Translation.XY.m128d_f64[0] = *(double *)local_168;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)(local_168.QuadPart + 8);
  local_168 = local_170;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_160 == (UWorld *)0x0) || (local_160->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_14782a0f6;
  }
  if (*(char *)(local_160->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_14782a032:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_14782a032;
    }
    bVar8 = true;
  }
  local_138.X = local_a8.Rotation.XY.m128d_f64[0];
  local_138.Y = local_a8.Rotation.XY.m128d_f64[1];
  local_138.Z = local_a8.Rotation.ZW.m128d_f64[0];
  local_138.W = local_a8.Rotation.ZW.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(&local_e8,&local_138,local_118);
  local_b8 = local_118;
  pFVar13 = FPhysicsShapeAdapter_Chaos::GetGeometry(&local_e8);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,0,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_160,pFVar13,local_b8,&local_a8,local_f8,param_7,local_100,local_108,
                       local_110,
                       (FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
                        *)&local_168.s);
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,0,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_160,pFVar13,local_b8,&local_a8,local_f8,param_7,local_100,local_108,
                       local_110,
                       (FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
                        *)&local_168.s);
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
  }
LAB_14782a0f6:
  FCsvProfiler::EndStat("GeomOverlapMultiple",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff |
                            0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_138);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar18.Number,local_148.ComparisonIndex.Value.Value) &
                             0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_138);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomOverlapMulti @ 14782a2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomOverlapMulti(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                  UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TVector<double> *param_4
                  ,TQuat<double> *param_5,
                  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6,
                  ECollisionChannel param_7,FCollisionQueryParams *param_8,
                  FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108;
  uint uStack_104;
  LARGE_INTEGER local_100;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_f8;
  FStatMessage local_f0;
  FName local_e0;
  FName local_d0;
  FCollisionObjectQueryParams *local_c0;
  FCollisionResponseParams *local_b8;
  FCollisionQueryParams *local_b0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_a8;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_a8 = param_6;
  local_b0 = param_8;
  local_b8 = param_9;
  local_c0 = param_10;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_100 = (LARGE_INTEGER)param_2;
  local_f8.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_a0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_f0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_14782a473:
    bVar5 = false;
    FVar19 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar17.Bits;
        uStack_104 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782a473;
    local_108.Bits = FVar17.Bits;
    uStack_104 = uVar10;
    local_d0 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_f0,"STAT_Collision_GeomOverlapMultiple");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar11,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_14782a595:
    bVar3 = false;
    FVar18 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar17.Bits;
        uStack_104 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782a595;
    local_108.Bits = FVar17.Bits;
    uStack_104 = uVar10;
    local_e0 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
    FVar20.Value = local_e0.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1437 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1437 = true;
  }
  local_108.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  LVar8 = local_100;
  local_98.Rotation.XY.m128d_f64[0] = param_5->X;
  local_98.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_98.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_98.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_98.Translation.ZW.m128d_f64[0] = (double)local_f8.SpatialAcceleration[1]._padding_;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_98.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_98.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_f8.SpatialAcceleration)->_padding_)->_s_0).X;
  local_98.Translation.XY.m128d_f64[1] = *(double *)&(local_f8.SpatialAcceleration)->SyncTimestamp;
  local_f8.SpatialAcceleration = local_a0;
  if (((UWorld *)local_100.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_100.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_14782a715;
  }
  if (*(char *)((*(FPhysScene_Chaos **)(local_100.QuadPart + 0x2a0))->_padding_ + 0x271) == '\0') {
LAB_14782a6bb:
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,local_a8,param_7,local_b0,local_b8,
                       local_c0,&local_f8);
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_14782a6bb;
    }
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,local_a8,param_7,local_b0,local_b8,
                       local_c0,&local_f8);
  }
LAB_14782a715:
  FCsvProfiler::EndStat("GeomOverlapMultiple",local_108.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_f0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_f0.NameAndInfo.Index.Value = FVar20.Value;
      QueryPerformanceCounter(&local_100);
      local_f0.StatData.Pad = (uchar  [8])(local_100.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_f0);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_f0.NameAndInfo.Index.Value = local_d0.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_f0.StatData.Pad = (uchar  [8])(local_100.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_f0);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapMulti @ 14782a900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
::GeomOverlapMulti(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                  UWorld *param_2,FImplicitObject *param_3,TVector<double> *param_4,
                  TQuat<double> *param_5,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6
                  ,ECollisionChannel param_7,FCollisionQueryParams *param_8,
                  FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148;
  uint uStack_144;
  undefined1 local_140 [16];
  LARGE_INTEGER local_130;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_128;
  UWorld *local_120;
  FName local_118;
  FName local_108;
  FCollisionObjectQueryParams *local_f8;
  FCollisionResponseParams *local_f0;
  FCollisionQueryParams *local_e8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_e0;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e0 = param_6;
  local_e8 = param_8;
  local_f0 = param_9;
  local_f8 = param_10;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_130 = (LARGE_INTEGER)param_3;
  local_128.SpatialAcceleration =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)param_4;
  local_120 = param_2;
  local_d8 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782aa8b:
    bVar5 = false;
    FVar18 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782aa8b;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_108 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_GeomOverlapMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar10,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782aba6:
    bVar3 = false;
    FVar17 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782aba6;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_118 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_118.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomOverlapMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1437 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomOverlapMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1437 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_128.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_128.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_128.SpatialAcceleration)->SyncTimestamp;
  local_128.SpatialAcceleration = local_d8;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_120 == (UWorld *)0x0) || (local_120->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_14782ad3a;
  }
  if (*(char *)(local_120->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_14782ac75:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_14782ac75;
    }
    bVar8 = true;
  }
  local_c8 = local_a8.Rotation.XY.m128d_f64[0];
  dStack_c0 = local_a8.Rotation.XY.m128d_f64[1];
  local_b8 = local_a8.Rotation.ZW.m128d_f64[0];
  dStack_b0 = local_a8.Rotation.ZW.m128d_f64[1];
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_140);
  local_140._8_8_ = &local_c8;
  pFVar13 = FPhysicsGeometryCollection_Chaos::GetGeometry
                      ((FPhysicsGeometryCollection_Chaos *)local_140);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       local_e0,param_7,local_e8,local_f0,local_f8,&local_128);
    FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
              ((FPhysicsGeometryCollection_Chaos *)local_140);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       local_e0,param_7,local_e8,local_f0,local_f8,&local_128);
    FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
              ((FPhysicsGeometryCollection_Chaos *)local_140);
  }
LAB_14782ad3a:
  FCsvProfiler::EndStat("GeomOverlapMultiple",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ = CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ =
           CONCAT44(FVar18.Number,local_108.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomOverlapMulti @ 14782af20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>
::GeomOverlapMulti(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                  UWorld *param_2,FCollisionShape *param_3,TVector<double> *param_4,
                  TQuat<double> *param_5,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6
                  ,ECollisionChannel param_7,FCollisionQueryParams *param_8,
                  FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1d8 [32];
  FColor_u_0 local_178;
  uint uStack_174;
  LARGE_INTEGER local_170;
  LARGE_INTEGER local_168;
  UWorld *local_160;
  FName local_158;
  FName local_148;
  TQuat<double> local_138;
  FCollisionShape *local_118;
  FCollisionObjectQueryParams *local_110;
  FCollisionResponseParams *local_108;
  FCollisionQueryParams *local_100;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_f8;
  FPhysicsShapeAdapter_Chaos local_e8;
  FCollisionShape *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_f8 = param_6;
  local_100 = param_8;
  local_108 = param_9;
  local_110 = param_10;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_170 = (LARGE_INTEGER)param_1;
  local_168 = (LARGE_INTEGER)param_4;
  local_160 = param_2;
  local_118 = param_3;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_138,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782b0b2:
    bVar5 = false;
    FVar18 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar16.Bits;
        uStack_174 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782b0b2;
    local_178.Bits = FVar16.Bits;
    uStack_174 = uVar9;
    local_148 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_138,"STAT_Collision_GeomOverlapMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar10,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782b1cc:
    bVar3 = false;
    FVar17 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.Bits = FVar16.Bits;
        uStack_174 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782b1cc;
    local_178.Bits = FVar16.Bits;
    uStack_174 = uVar9;
    local_158 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_158.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomOverlapMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1437 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomOverlapMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1437 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = *(double *)(local_168.QuadPart + 0x10);
  local_a8.Translation.XY.m128d_f64[0] = *(double *)local_168;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)(local_168.QuadPart + 8);
  local_168 = local_170;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_160 == (UWorld *)0x0) || (local_160->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_14782b366;
  }
  if (*(char *)(local_160->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_14782b2a2:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_14782b2a2;
    }
    bVar8 = true;
  }
  local_138.X = local_a8.Rotation.XY.m128d_f64[0];
  local_138.Y = local_a8.Rotation.XY.m128d_f64[1];
  local_138.Z = local_a8.Rotation.ZW.m128d_f64[0];
  local_138.W = local_a8.Rotation.ZW.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(&local_e8,&local_138,local_118);
  local_b8 = local_118;
  pFVar13 = FPhysicsShapeAdapter_Chaos::GetGeometry(&local_e8);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,0,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_160,pFVar13,local_b8,&local_a8,local_f8,param_7,local_100,local_108,
                       local_110,
                       (FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
                        *)&local_168.s);
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,0,FCollisionShape,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_160,pFVar13,local_b8,&local_a8,local_f8,param_7,local_100,local_108,
                       local_110,
                       (FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
                        *)&local_168.s);
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_e8);
  }
LAB_14782b366:
  FCsvProfiler::EndStat("GeomOverlapMultiple",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff |
                            0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_138);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_138.Y = (double)(CONCAT44(FVar18.Number,local_148.ComparisonIndex.Value.Value) &
                             0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_170);
      local_138.X = (double)(local_170.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_138);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomOverlapMulti @ 14782b550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomOverlapMulti(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                  UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TVector<double> *param_4
                  ,TQuat<double> *param_5,
                  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6,
                  ECollisionChannel param_7,FCollisionQueryParams *param_8,
                  FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple> FVar13;
  FImplicitObject *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108;
  uint uStack_104;
  LARGE_INTEGER local_100;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_f8;
  FStatMessage local_f0;
  FName local_e0;
  FName local_d0;
  FCollisionObjectQueryParams *local_c0;
  FCollisionResponseParams *local_b8;
  FCollisionQueryParams *local_b0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_a8;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_a8 = param_6;
  local_b0 = param_8;
  local_b8 = param_9;
  local_c0 = param_10;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_100 = (LARGE_INTEGER)param_2;
  local_f8.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_a0 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_f0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar17.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_14782b6e3:
    bVar5 = false;
    FVar19 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar17.Bits;
        uStack_104 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782b6e3;
    local_108.Bits = FVar17.Bits;
    uStack_104 = uVar10;
    local_d0 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_f0,"STAT_Collision_GeomOverlapMultiple");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar11,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_14782b805:
    bVar3 = false;
    FVar18 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar17.Bits;
        uStack_104 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782b805;
    local_108.Bits = FVar17.Bits;
    uStack_104 = uVar10;
    local_e0 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
    FVar20.Value = local_e0.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1437 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomOverlapMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1437 = true;
  }
  local_108.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  LVar8 = local_100;
  local_98.Rotation.XY.m128d_f64[0] = param_5->X;
  local_98.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_98.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_98.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_98.Translation.ZW.m128d_f64[0] = (double)local_f8.SpatialAcceleration[1]._padding_;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_98.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_98.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_f8.SpatialAcceleration)->_padding_)->_s_0).X;
  local_98.Translation.XY.m128d_f64[1] = *(double *)&(local_f8.SpatialAcceleration)->SyncTimestamp;
  local_f8.SpatialAcceleration = local_a0;
  if (((UWorld *)local_100.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_100.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_14782b985;
  }
  if (*(char *)((*(FPhysScene_Chaos **)(local_100.QuadPart + 0x2a0))->_padding_ + 0x271) == '\0') {
LAB_14782b92b:
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,local_a8,param_7,local_b0,local_b8,
                       local_c0,&local_f8);
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_14782b92b;
    }
    pFVar14 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_3);
    bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      ((UWorld *)LVar8,pFVar14,param_3,&local_98,local_a8,param_7,local_b0,local_b8,
                       local_c0,&local_f8);
  }
LAB_14782b985:
  FCsvProfiler::EndStat("GeomOverlapMultiple",local_108.Bits);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_f0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_f0.NameAndInfo.Index.Value = FVar20.Value;
      QueryPerformanceCounter(&local_100);
      local_f0.StatData.Pad = (uchar  [8])(local_100.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_f0);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_f0.NameAndInfo.Index.Value = local_d0.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_f0.StatData.Pad = (uchar  [8])(local_100.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_f0);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return bVar9;
}

// GeomOverlapMulti @ 14782bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>
::GeomOverlapMulti(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                  UWorld *param_2,FImplicitObject *param_3,TVector<double> *param_4,
                  TQuat<double> *param_5,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6
                  ,ECollisionChannel param_7,FCollisionQueryParams *param_8,
                  FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple> FVar12;
  FImplicitObject *pFVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148;
  uint uStack_144;
  undefined1 local_140 [16];
  LARGE_INTEGER local_130;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_128;
  UWorld *local_120;
  FName local_118;
  FName local_108;
  FCollisionObjectQueryParams *local_f8;
  FCollisionResponseParams *local_f0;
  FCollisionQueryParams *local_e8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_e0;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e0 = param_6;
  local_e8 = param_8;
  local_f0 = param_9;
  local_f8 = param_10;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_130 = (LARGE_INTEGER)param_3;
  local_128.SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_4;
  local_120 = param_2;
  local_d8 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar9 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782bcfb:
    bVar5 = false;
    FVar18 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59b);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782bcfb;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_108 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_140,"STAT_Collision_GeomOverlapMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar10,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_14782be16:
    bVar3 = false;
    FVar17 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar16.Bits;
        uStack_144 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x59c);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782be16;
    local_148.Bits = FVar16.Bits;
    uStack_144 = uVar9;
    local_118 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar19.Value = local_118.ComparisonIndex.Value;
  }
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomOverlapMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1437 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomOverlapMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>&___ptr64,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1437 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  local_a8.Rotation.XY.m128d_f64[0] = param_5->X;
  local_a8.Rotation.XY.m128d_f64[1] = param_5->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = param_5->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = param_5->W;
  local_a8.Translation.ZW.m128d_f64[0] = (double)local_128.SpatialAcceleration[1]._padding_;
  local_a8.Translation.XY.m128d_f64[0] =
       (((TVector<double>_u_0 *)&(local_128.SpatialAcceleration)->_padding_)->_s_0).X;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)&(local_128.SpatialAcceleration)->SyncTimestamp;
  local_128.SpatialAcceleration = local_d8;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  if ((local_120 == (UWorld *)0x0) || (local_120->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar8 = false;
    goto LAB_14782bfaa;
  }
  if (*(char *)(local_120->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_14782bee5:
    bVar8 = false;
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_14782bee5;
    }
    bVar8 = true;
  }
  local_c8 = local_a8.Rotation.XY.m128d_f64[0];
  dStack_c0 = local_a8.Rotation.XY.m128d_f64[1];
  local_b8 = local_a8.Rotation.ZW.m128d_f64[0];
  dStack_b0 = local_a8.Rotation.ZW.m128d_f64[1];
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_140);
  local_140._8_8_ = &local_c8;
  pFVar13 = FPhysicsGeometryCollection_Chaos::GetGeometry
                      ((FPhysicsGeometryCollection_Chaos *)local_140);
  if (bVar8) {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       local_e0,param_7,local_e8,local_f0,local_f8,&local_128);
    FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
              ((FPhysicsGeometryCollection_Chaos *)local_140);
  }
  else {
    bVar8 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,0,FPhysicsGeometryCollection_Chaos,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                      (local_120,pFVar13,(FPhysicsGeometryCollection_Chaos *)local_140,&local_a8,
                       local_e0,param_7,local_e8,local_f0,local_f8,&local_128);
    FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
              ((FPhysicsGeometryCollection_Chaos *)local_140);
  }
LAB_14782bfaa:
  FCsvProfiler::EndStat("GeomOverlapMultiple",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ = CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_140._8_8_ =
           CONCAT44(FVar18.Number,local_108.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000;
      QueryPerformanceCounter(&local_130);
      local_140._0_8_ = local_130.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_140);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar8;
}

// GeomSweepMulti @ 14782c190

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>
::GeomSweepMulti(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                UWorld *param_2,FCollisionShape *param_3,TQuat<double> *param_4,
                TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5,TVector<double> *param_6,
                TVector<double> *param_7,ECollisionChannel param_8,FCollisionQueryParams *param_9,
                FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FCollisionShape *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FCollisionShape *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_f8;
  uint uStack_f4;
  TVector<double>_u_0 local_e8;
  FName local_c8;
  FName local_b8;
  TVector<double>_u_0 local_a8;
  FGeomSQAdditionalInputs local_88;
  
  FVar19.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_14782c2e0:
    bVar5 = false;
    FVar18 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x591);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782c2e0;
    local_f8.Bits = FVar16.Bits;
    uStack_f4 = uVar10;
    local_b8 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_GeomSweepMultiple");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar11,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x592);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.Bits = FVar16.Bits;
      uStack_f4 = uVar10;
      local_c8 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar3 = true;
      FVar19.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14782c3ff;
    }
  }
  bVar3 = false;
  FVar17 = local_c8;
LAB_14782c3ff:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomSweepMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1427 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomSweepMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1427 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  pFVar8 = local_res18;
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_88.ShapeAdapter,local_res20,local_res18);
  local_88.CollisionShape = pFVar8;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_a8._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_e8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_e8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_e8._s_0,
                         (TVector<double> *)&local_a8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_e8._s_0.X = local_a8._s_0.X;
      local_e8._s_0.Y = local_a8._s_0.Y;
      local_e8._s_0.Z = local_a8._s_0.Z;
      local_a8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_a8._s_0,
                         (TVector<double> *)&local_e8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter);
  FCsvProfiler::EndStat("GeomSweepMultiple",uVar10);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar18.Number,local_b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar9;
}

// GeomSweepMulti @ 14782c790

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomSweepMulti(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TQuat<double> *param_4,
                TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5,TVector<double> *param_6,
                TVector<double> *param_7,ECollisionChannel param_8,FCollisionQueryParams *param_9,
                FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FPhysicsGeometryCollection_Chaos *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_c8;
  uint uStack_c4;
  FGeomCollectionSQAdditionalInputs local_c0;
  FName local_b0;
  FName local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14782c8dd:
    bVar5 = false;
    FVar17 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x591);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782c8dd;
    local_c8.Bits = FVar15.Bits;
    uStack_c4 = uVar9;
    local_a0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_GeomSweepMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar10,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x592);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8.Bits = FVar15.Bits;
      uStack_c4 = uVar9;
      local_b0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_b0.ComparisonIndex.Value;
      goto LAB_14782c9f9;
    }
  }
  bVar3 = false;
  FVar16 = local_b0;
LAB_14782c9f9:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1427 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1427 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  local_c0.Collection = local_res18;
  local_c0.GeomRot = local_res20;
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
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_88._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_88._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_88._s_0,
                         (TVector<double> *)&local_68._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_88._s_0.X = local_68._s_0.X;
      local_88._s_0.Y = local_68._s_0.Y;
      local_88._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_68._s_0,
                         (TVector<double> *)&local_88._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FCsvProfiler::EndStat("GeomSweepMultiple",uVar9);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar17.Number,local_a0.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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

// GeomSweepMulti @ 14782cd60

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
::GeomSweepMulti(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                UWorld *param_2,FImplicitObject *param_3,TQuat<double> *param_4,
                TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5,TVector<double> *param_6,
                TVector<double> *param_7,ECollisionChannel param_8,FCollisionQueryParams *param_9,
                FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FImplicitObject *local_res18;
  TQuat<double> *local_res20;
  TVector<double>_u_0 local_b8;
  undefined1 local_98 [16];
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_14782cea7:
    bVar5 = false;
    FVar16 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x591);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782cea7;
    local_b8._0_8_ = FVar16;
    local_78 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_GeomSweepMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar10,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x592);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8._0_8_ = FVar15;
      local_88 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar17.Value = local_88.ComparisonIndex.Value;
      goto LAB_14782cfbd;
    }
  }
  bVar3 = false;
  FVar15 = local_88;
LAB_14782cfbd:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomSweepMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1427 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomSweepMulti(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1427 = true;
  }
  uVar8 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_98);
  local_98._8_8_ = local_res20;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_b8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_b8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_68._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
    else {
      local_b8._s_0.X = local_68._s_0.X;
      local_b8._s_0.Y = local_68._s_0.Y;
      local_b8._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_b8._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_98);
  FCsvProfiler::EndStat("GeomSweepMultiple",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar15.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,local_78.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  return bVar9;
}

// GeomSweepMulti @ 14782d330

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>
::GeomSweepMulti(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                UWorld *param_2,FCollisionShape *param_3,TQuat<double> *param_4,
                TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5,TVector<double> *param_6,
                TVector<double> *param_7,ECollisionChannel param_8,FCollisionQueryParams *param_9,
                FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FCollisionShape *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FCollisionShape *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_f8;
  uint uStack_f4;
  TVector<double>_u_0 local_e8;
  FName local_c8;
  FName local_b8;
  TVector<double>_u_0 local_a8;
  FGeomSQAdditionalInputs local_88;
  
  FVar19.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_14782d480:
    bVar5 = false;
    FVar18 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x591);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782d480;
    local_f8.Bits = FVar16.Bits;
    uStack_f4 = uVar10;
    local_b8 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_GeomSweepMultiple");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar11,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x592);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.Bits = FVar16.Bits;
      uStack_f4 = uVar10;
      local_c8 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar3 = true;
      FVar19.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14782d59f;
    }
  }
  bVar3 = false;
  FVar17 = local_c8;
LAB_14782d59f:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomSweepMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1427 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomSweepMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1427 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  pFVar8 = local_res18;
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_88.ShapeAdapter,local_res20,local_res18);
  local_88.CollisionShape = pFVar8;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_a8._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_e8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_e8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_e8._s_0,
                         (TVector<double> *)&local_a8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_e8._s_0.X = local_a8._s_0.X;
      local_e8._s_0.Y = local_a8._s_0.Y;
      local_e8._s_0.Z = local_a8._s_0.Z;
      local_a8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_a8._s_0,
                         (TVector<double> *)&local_e8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter);
  FCsvProfiler::EndStat("GeomSweepMultiple",uVar10);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar18.Number,local_b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar9;
}

// GeomSweepMulti @ 14782d930

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomSweepMulti(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TQuat<double> *param_4,
                TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5,TVector<double> *param_6,
                TVector<double> *param_7,ECollisionChannel param_8,FCollisionQueryParams *param_9,
                FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FPhysicsGeometryCollection_Chaos *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_c8;
  uint uStack_c4;
  FGeomCollectionSQAdditionalInputs local_c0;
  FName local_b0;
  FName local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14782da7d:
    bVar5 = false;
    FVar17 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x591);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782da7d;
    local_c8.Bits = FVar15.Bits;
    uStack_c4 = uVar9;
    local_a0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_GeomSweepMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar10,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x592);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8.Bits = FVar15.Bits;
      uStack_c4 = uVar9;
      local_b0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_b0.ComparisonIndex.Value;
      goto LAB_14782db99;
    }
  }
  bVar3 = false;
  FVar16 = local_b0;
LAB_14782db99:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1427 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1427 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  local_c0.Collection = local_res18;
  local_c0.GeomRot = local_res20;
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
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_88._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_88._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_88._s_0,
                         (TVector<double> *)&local_68._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_88._s_0.X = local_68._s_0.X;
      local_88._s_0.Y = local_68._s_0.Y;
      local_88._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_68._s_0,
                         (TVector<double> *)&local_88._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FCsvProfiler::EndStat("GeomSweepMultiple",uVar9);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar17.Number,local_a0.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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

// GeomSweepMulti @ 14782df00

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>
::GeomSweepMulti(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                UWorld *param_2,FImplicitObject *param_3,TQuat<double> *param_4,
                TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5,TVector<double> *param_6,
                TVector<double> *param_7,ECollisionChannel param_8,FCollisionQueryParams *param_9,
                FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FImplicitObject *local_res18;
  TQuat<double> *local_res20;
  TVector<double>_u_0 local_b8;
  undefined1 local_98 [16];
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_14782e047:
    bVar5 = false;
    FVar16 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x591);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782e047;
    local_b8._0_8_ = FVar16;
    local_78 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_GeomSweepMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar10,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x592);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8._0_8_ = FVar15;
      local_88 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar17.Value = local_88.ComparisonIndex.Value;
      goto LAB_14782e15d;
    }
  }
  bVar3 = false;
  FVar15 = local_88;
LAB_14782e15d:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomSweepMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1427 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomSweepMulti(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,TArray<FHitResult,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1427 = true;
  }
  uVar8 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_98);
  local_98._8_8_ = local_res20;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_b8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_b8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_68._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
    else {
      local_b8._s_0.X = local_68._s_0.X;
      local_b8._s_0.Y = local_68._s_0.Y;
      local_b8._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_b8._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_98);
  FCsvProfiler::EndStat("GeomSweepMultiple",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar15.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,local_78.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  return bVar9;
}

// GeomSweepSingle @ 14782ebb0

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>
::GeomSweepSingle(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                 UWorld *param_2,FCollisionShape *param_3,TQuat<double> *param_4,FHitResult *param_5
                 ,TVector<double> *param_6,TVector<double> *param_7,ECollisionChannel param_8,
                 FCollisionQueryParams *param_9,FCollisionResponseParams *param_10,
                 FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FCollisionShape *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FCollisionShape *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_f8;
  uint uStack_f4;
  TVector<double>_u_0 local_e8;
  FName local_c8;
  FName local_b8;
  TVector<double>_u_0 local_a8;
  FGeomSQAdditionalInputs local_88;
  
  FVar19.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_14782ed00:
    bVar5 = false;
    FVar18 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x585);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782ed00;
    local_f8.Bits = FVar16.Bits;
    uStack_f4 = uVar10;
    local_b8 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_GeomSweepSingle");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar11,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x586);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.Bits = FVar16.Bits;
      uStack_f4 = uVar10;
      local_c8 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar3 = true;
      FVar19.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14782ee1f;
    }
  }
  bVar3 = false;
  FVar17 = local_c8;
LAB_14782ee1f:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomSweepSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1415 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomSweepSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1415 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  pFVar8 = local_res18;
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_88.ShapeAdapter,local_res20,local_res18);
  local_88.CollisionShape = pFVar8;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_a8._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_e8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_e8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_e8._s_0,
                         (TVector<double> *)&local_a8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_e8._s_0.X = local_a8._s_0.X;
      local_e8._s_0.Y = local_a8._s_0.Y;
      local_e8._s_0.Z = local_a8._s_0.Z;
      local_a8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_a8._s_0,
                         (TVector<double> *)&local_e8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter);
  FCsvProfiler::EndStat("GeomSweepSingle",uVar10);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar18.Number,local_b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar9;
}

// GeomSweepSingle @ 14782f1b0

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomSweepSingle(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                 UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TQuat<double> *param_4,
                 FHitResult *param_5,TVector<double> *param_6,TVector<double> *param_7,
                 ECollisionChannel param_8,FCollisionQueryParams *param_9,
                 FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FPhysicsGeometryCollection_Chaos *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_c8;
  uint uStack_c4;
  FGeomCollectionSQAdditionalInputs local_c0;
  FName local_b0;
  FName local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14782f2fd:
    bVar5 = false;
    FVar17 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x585);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782f2fd;
    local_c8.Bits = FVar15.Bits;
    uStack_c4 = uVar9;
    local_a0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_GeomSweepSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar10,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x586);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8.Bits = FVar15.Bits;
      uStack_c4 = uVar9;
      local_b0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_b0.ComparisonIndex.Value;
      goto LAB_14782f419;
    }
  }
  bVar3 = false;
  FVar16 = local_b0;
LAB_14782f419:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1415 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1415 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  local_c0.Collection = local_res18;
  local_c0.GeomRot = local_res20;
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
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_88._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_88._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_88._s_0,
                         (TVector<double> *)&local_68._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_88._s_0.X = local_68._s_0.X;
      local_88._s_0.Y = local_68._s_0.Y;
      local_88._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_68._s_0,
                         (TVector<double> *)&local_88._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FCsvProfiler::EndStat("GeomSweepSingle",uVar9);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar17.Number,local_a0.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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

// GeomSweepSingle @ 14782f780

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
::GeomSweepSingle(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
                 UWorld *param_2,FImplicitObject *param_3,TQuat<double> *param_4,FHitResult *param_5
                 ,TVector<double> *param_6,TVector<double> *param_7,ECollisionChannel param_8,
                 FCollisionQueryParams *param_9,FCollisionResponseParams *param_10,
                 FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FImplicitObject *local_res18;
  TQuat<double> *local_res20;
  TVector<double>_u_0 local_b8;
  undefined1 local_98 [16];
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_14782f8c7:
    bVar5 = false;
    FVar16 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x585);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782f8c7;
    local_b8._0_8_ = FVar16;
    local_78 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_GeomSweepSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar10,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x586);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8._0_8_ = FVar15;
      local_88 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar17.Value = local_88.ComparisonIndex.Value;
      goto LAB_14782f9dd;
    }
  }
  bVar3 = false;
  FVar15 = local_88;
LAB_14782f9dd:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomSweepSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1415 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomSweepSingle(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1415 = true;
  }
  uVar8 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_98);
  local_98._8_8_ = local_res20;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_b8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_b8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_68._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
    else {
      local_b8._s_0.X = local_68._s_0.X;
      local_b8._s_0.Y = local_68._s_0.Y;
      local_b8._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_b8._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_98);
  FCsvProfiler::EndStat("GeomSweepSingle",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar15.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,local_78.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  return bVar9;
}

// GeomSweepSingle @ 14782fd50

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>
::GeomSweepSingle(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                 UWorld *param_2,FCollisionShape *param_3,TQuat<double> *param_4,FHitResult *param_5
                 ,TVector<double> *param_6,TVector<double> *param_7,ECollisionChannel param_8,
                 FCollisionQueryParams *param_9,FCollisionResponseParams *param_10,
                 FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FCollisionShape *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FCollisionShape *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_f8;
  uint uStack_f4;
  TVector<double>_u_0 local_e8;
  FName local_c8;
  FName local_b8;
  TVector<double>_u_0 local_a8;
  FGeomSQAdditionalInputs local_88;
  
  FVar19.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_14782fea0:
    bVar5 = false;
    FVar18 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x585);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782fea0;
    local_f8.Bits = FVar16.Bits;
    uStack_f4 = uVar10;
    local_b8 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_GeomSweepSingle");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar11,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.Bits = FVar16.Bits;
        uStack_f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x586);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.Bits = FVar16.Bits;
      uStack_f4 = uVar10;
      local_c8 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar3 = true;
      FVar19.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14782ffbf;
    }
  }
  bVar3 = false;
  FVar17 = local_c8;
LAB_14782ffbf:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomSweepSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1415 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomSweepSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1415 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  pFVar8 = local_res18;
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_88.ShapeAdapter,local_res20,local_res18);
  local_88.CollisionShape = pFVar8;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_a8._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_e8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_e8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_e8._s_0,
                         (TVector<double> *)&local_a8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_e8._s_0.X = local_a8._s_0.X;
      local_e8._s_0.Y = local_a8._s_0.Y;
      local_e8._s_0.Z = local_a8._s_0.Z;
      local_a8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_88,(TVector<double> *)&local_a8._s_0,
                         (TVector<double> *)&local_e8._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter);
  FCsvProfiler::EndStat("GeomSweepSingle",uVar10);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar18.Number,local_b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar9;
}

// GeomSweepSingle @ 147830350

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomSweepSingle(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                 UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TQuat<double> *param_4,
                 FHitResult *param_5,TVector<double> *param_6,TVector<double> *param_7,
                 ECollisionChannel param_8,FCollisionQueryParams *param_9,
                 FCollisionResponseParams *param_10,FCollisionObjectQueryParams *param_11)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FPhysicsGeometryCollection_Chaos *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_c8;
  uint uStack_c4;
  FGeomCollectionSQAdditionalInputs local_c0;
  FName local_b0;
  FName local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14783049d:
    bVar5 = false;
    FVar17 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x585);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14783049d;
    local_c8.Bits = FVar15.Bits;
    uStack_c4 = uVar9;
    local_a0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_c0,"STAT_Collision_GeomSweepSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar10,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar15.Bits;
        uStack_c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x586);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8.Bits = FVar15.Bits;
      uStack_c4 = uVar9;
      local_b0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_b0.ComparisonIndex.Value;
      goto LAB_1478305b9;
    }
  }
  bVar3 = false;
  FVar16 = local_b0;
LAB_1478305b9:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1415 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1415 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  local_c0.Collection = local_res18;
  local_c0.GeomRot = local_res20;
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
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_88._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_88._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_88._s_0,
                         (TVector<double> *)&local_68._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
    else {
      local_88._s_0.X = local_68._s_0.X;
      local_88._s_0.Y = local_68._s_0.Y;
      local_88._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,&local_c0,(TVector<double> *)&local_68._s_0,
                         (TVector<double> *)&local_88._s_0,param_8,param_9,param_10,param_11,
                         &local_res8);
    }
  }
  FCsvProfiler::EndStat("GeomSweepSingle",uVar9);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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
      local_c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar17.Number,local_a0.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_c0);
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

// GeomSweepSingle @ 147830920

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>
::GeomSweepSingle(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
                 UWorld *param_2,FImplicitObject *param_3,TQuat<double> *param_4,FHitResult *param_5
                 ,TVector<double> *param_6,TVector<double> *param_7,ECollisionChannel param_8,
                 FCollisionQueryParams *param_9,FCollisionResponseParams *param_10,
                 FCollisionObjectQueryParams *param_11)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FImplicitObject *local_res18;
  TQuat<double> *local_res20;
  TVector<double>_u_0 local_b8;
  undefined1 local_98 [16];
  FName local_88;
  FName local_78;
  TVector<double>_u_0 local_68;
  
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_147830a67:
    bVar5 = false;
    FVar16 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x585);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147830a67;
    local_b8._0_8_ = FVar16;
    local_78 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_98,"STAT_Collision_GeomSweepSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar10,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8._s_0.X = (double)((ulonglong)local_b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8._0_8_ = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x586);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8._0_8_ = FVar15;
      local_88 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar17.Value = local_88.ComparisonIndex.Value;
      goto LAB_147830b7d;
    }
  }
  bVar3 = false;
  FVar15 = local_88;
LAB_147830b7d:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomSweepSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1415 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomSweepSingle(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,FHitResult&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1415 = true;
  }
  uVar8 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_98);
  local_98._8_8_ = local_res20;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_68._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_b8._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_b8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_68._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
    else {
      local_b8._s_0.X = local_68._s_0.X;
      local_b8._s_0.Y = local_68._s_0.Y;
      local_b8._s_0.Z = local_68._s_0.Z;
      local_68._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_68._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,param_5,
                         (FPhysicsGeometrySQAdditionalInputs *)local_98,
                         (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_b8._s_0,param_8
                         ,param_9,param_10,param_11,&local_res8);
    }
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_98);
  FCsvProfiler::EndStat("GeomSweepSingle",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar15.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,local_78.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b8._s_0);
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
  return bVar9;
}

// GeomSweepTest @ 147830ef0

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>
::GeomSweepTest(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
               UWorld *param_2,FCollisionShape *param_3,TQuat<double> *param_4,
               TVector<double> *param_5,TVector<double> *param_6,ECollisionChannel param_7,
               FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
               FCollisionObjectQueryParams *param_10)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FCollisionShape *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FCollisionShape *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_1f8;
  uint uStack_1f4;
  TVector<double>_u_0 local_1e8;
  FName local_1c8;
  FName local_1b8;
  TVector<double>_u_0 local_1a8;
  FGeomSQAdditionalInputs local_188;
  FHitResult local_148;
  
  FVar19.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_1e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_147831043:
    bVar5 = false;
    FVar18 = local_1b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.Bits = FVar16.Bits;
        uStack_1f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1f8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147831043;
    local_1f8.Bits = FVar16.Bits;
    uStack_1f4 = uVar10;
    local_1b8 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomSweepAny;
  if (StatPtr_STAT_Collision_GeomSweepAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_1e8._s_0,"STAT_Collision_GeomSweepAny");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepAny,*pFVar11,
                        L"GeomSweepAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.Bits = FVar16.Bits;
        uStack_1f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1f8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fc);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1f8.Bits = FVar16.Bits;
      uStack_1f4 = uVar10;
      local_1c8 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar3 = true;
      FVar19.Value = local_1c8.ComparisonIndex.Value;
      goto LAB_147831165;
    }
  }
  bVar3 = false;
  FVar17 = local_1c8;
LAB_147831165:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomSweepTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1021 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FCollisionShape>::GeomSweepTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1021 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepTest");
  pFVar8 = local_res18;
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
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_188.ShapeAdapter,local_res20,local_res18);
  local_188.CollisionShape = pFVar8;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_1a8._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_1a8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_1a8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_1e8._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_1e8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_1e8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_188,
                         (TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_1a8._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
    else {
      local_1e8._s_0.X = local_1a8._s_0.X;
      local_1e8._s_0.Y = local_1a8._s_0.Y;
      local_1e8._s_0.Z = local_1a8._s_0.Z;
      local_1a8._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_1a8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_1a8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_188,
                         (TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_1e8._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_188.ShapeAdapter);
  FCsvProfiler::EndStat("GeomSweepTest",uVar10);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_1e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_1e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_1e8._s_0.Y =
           (double)(CONCAT44(FVar18.Number,local_1b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_1e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar9;
}

// GeomSweepTest @ 147831560

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomSweepTest(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
               UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TQuat<double> *param_4,
               TVector<double> *param_5,TVector<double> *param_6,ECollisionChannel param_7,
               FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
               FCollisionObjectQueryParams *param_10)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FPhysicsGeometryCollection_Chaos *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_1c8;
  uint uStack_1c4;
  FGeomCollectionSQAdditionalInputs local_1c0;
  FName local_1b0;
  FName local_1a0;
  TVector<double>_u_0 local_188;
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
    pFVar10 = ::FName::FName((FName *)&local_1c0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1478316b3:
    bVar5 = false;
    FVar17 = local_1a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8.Bits = FVar15.Bits;
        uStack_1c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1c8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478316b3;
    local_1c8.Bits = FVar15.Bits;
    uStack_1c4 = uVar9;
    local_1a0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepAny;
  if (StatPtr_STAT_Collision_GeomSweepAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1c0,"STAT_Collision_GeomSweepAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepAny,*pFVar10,
                        L"GeomSweepAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8.Bits = FVar15.Bits;
        uStack_1c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1c8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fc);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c8.Bits = FVar15.Bits;
      uStack_1c4 = uVar9;
      local_1b0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_1b0.ComparisonIndex.Value;
      goto LAB_1478317d9;
    }
  }
  bVar3 = false;
  FVar16 = local_1b0;
LAB_1478317d9:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1021 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1021 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepTest");
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
  local_1c0.Collection = local_res18;
  local_1c0.GeomRot = local_res20;
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
    local_168._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_168._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_188._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_188._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_188._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_1c0,
                         (TVector<double> *)&local_188._s_0,(TVector<double> *)&local_168._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
    else {
      local_188._s_0.X = local_168._s_0.X;
      local_188._s_0.Y = local_168._s_0.Y;
      local_188._s_0.Z = local_168._s_0.Z;
      local_168._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_168._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_1c0,
                         (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_188._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
  }
  FCsvProfiler::EndStat("GeomSweepTest",uVar9);
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
      local_1c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff)
      ;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1c0);
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
      local_1c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar17.Number,local_1a0.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff)
      ;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1c0);
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

// GeomSweepTest @ 147831bc0

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
::GeomSweepTest(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
               UWorld *param_2,FImplicitObject *param_3,TQuat<double> *param_4,
               TVector<double> *param_5,TVector<double> *param_6,ECollisionChannel param_7,
               FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
               FCollisionObjectQueryParams *param_10)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FImplicitObject *local_res18;
  TQuat<double> *local_res20;
  TVector<double>_u_0 local_1b8;
  undefined1 local_198 [16];
  FName local_188;
  FName local_178;
  TVector<double>_u_0 local_168;
  FHitResult local_148;
  
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_198,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_147831d12:
    bVar5 = false;
    FVar16 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8._s_0.X = (double)((ulonglong)local_1b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8._0_8_ = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147831d12;
    local_1b8._0_8_ = FVar16;
    local_178 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepAny;
  if (StatPtr_STAT_Collision_GeomSweepAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_198,"STAT_Collision_GeomSweepAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepAny,*pFVar10,
                        L"GeomSweepAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8._s_0.X = (double)((ulonglong)local_1b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8._0_8_ = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fc);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b8._0_8_ = FVar15;
      local_188 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar17.Value = local_188.ComparisonIndex.Value;
      goto LAB_147831e33;
    }
  }
  bVar3 = false;
  FVar15 = local_188;
LAB_147831e33:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomSweepTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1021 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>::GeomSweepTest(Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1021 = true;
  }
  uVar8 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepTest");
  local_148.HitObjectHandle.InstanceIndex = -1;
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
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_198);
  local_198._8_8_ = local_res20;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_168._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_168._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_1b8._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_1b8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_1b8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FPhysicsGeometrySQAdditionalInputs *)local_198,
                         (TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_168._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
    else {
      local_1b8._s_0.X = local_168._s_0.X;
      local_1b8._s_0.Y = local_168._s_0.Y;
      local_1b8._s_0.Z = local_168._s_0.Z;
      local_168._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_168._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FPhysicsGeometrySQAdditionalInputs *)local_198,
                         (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_1b8._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_198);
  FCsvProfiler::EndStat("GeomSweepTest",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1b8._s_0.Y =
           (double)(CONCAT44(FVar15.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1b8._s_0);
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
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1b8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,local_178.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1b8._s_0);
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
  return bVar9;
}

// GeomSweepTest @ 147832230

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>
::GeomSweepTest(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
               UWorld *param_2,FCollisionShape *param_3,TQuat<double> *param_4,
               TVector<double> *param_5,TVector<double> *param_6,ECollisionChannel param_7,
               FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
               FCollisionObjectQueryParams *param_10)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FCollisionShape *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FCollisionShape *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_1f8;
  uint uStack_1f4;
  TVector<double>_u_0 local_1e8;
  FName local_1c8;
  FName local_1b8;
  TVector<double>_u_0 local_1a8;
  FGeomSQAdditionalInputs local_188;
  FHitResult local_148;
  
  FVar19.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_1e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FVar16.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_147832383:
    bVar5 = false;
    FVar18 = local_1b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.Bits = FVar16.Bits;
        uStack_1f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1f8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147832383;
    local_1f8.Bits = FVar16.Bits;
    uStack_1f4 = uVar10;
    local_1b8 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomSweepAny;
  if (StatPtr_STAT_Collision_GeomSweepAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_1e8._s_0,"STAT_Collision_GeomSweepAny");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepAny,*pFVar11,
                        L"GeomSweepAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.Bits = FVar16.Bits;
        uStack_1f4 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1f8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fc);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1f8.Bits = FVar16.Bits;
      uStack_1f4 = uVar10;
      local_1c8 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar3 = true;
      FVar19.Value = local_1c8.ComparisonIndex.Value;
      goto LAB_1478324a5;
    }
  }
  bVar3 = false;
  FVar17 = local_1c8;
LAB_1478324a5:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomSweepTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1021 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FCollisionShape>::GeomSweepTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FCollisionShape_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1021 = true;
  }
  uVar10 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepTest");
  pFVar8 = local_res18;
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
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_188.ShapeAdapter,local_res20,local_res18);
  local_188.CollisionShape = pFVar8;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_1a8._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_1a8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_1a8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_1e8._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_1e8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_1e8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_188,
                         (TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_1a8._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
    else {
      local_1e8._s_0.X = local_1a8._s_0.X;
      local_1e8._s_0.Y = local_1a8._s_0.Y;
      local_1e8._s_0.Z = local_1a8._s_0.Z;
      local_1a8._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_1a8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_1a8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FGeomSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_188,
                         (TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_1e8._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_188.ShapeAdapter);
  FCsvProfiler::EndStat("GeomSweepTest",uVar10);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_1e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,FVar19.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_1e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_1e8._s_0.Y =
           (double)(CONCAT44(FVar18.Number,local_1b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_1e8._s_0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return bVar9;
}

// GeomSweepTest @ 1478328a0

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>
::GeomSweepTest(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
               UWorld *param_2,FPhysicsGeometryCollection_Chaos *param_3,TQuat<double> *param_4,
               TVector<double> *param_5,TVector<double> *param_6,ECollisionChannel param_7,
               FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
               FCollisionObjectQueryParams *param_10)

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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FPhysicsGeometryCollection_Chaos *local_res18;
  TQuat<double> *local_res20;
  FColor_u_0 local_1c8;
  uint uStack_1c4;
  FGeomCollectionSQAdditionalInputs local_1c0;
  FName local_1b0;
  FName local_1a0;
  TVector<double>_u_0 local_188;
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
    pFVar10 = ::FName::FName((FName *)&local_1c0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1478329f3:
    bVar5 = false;
    FVar17 = local_1a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8.Bits = FVar15.Bits;
        uStack_1c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1c8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478329f3;
    local_1c8.Bits = FVar15.Bits;
    uStack_1c4 = uVar9;
    local_1a0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepAny;
  if (StatPtr_STAT_Collision_GeomSweepAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1c0,"STAT_Collision_GeomSweepAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepAny,*pFVar10,
                        L"GeomSweepAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8.Bits = FVar15.Bits;
        uStack_1c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1c8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fc);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c8.Bits = FVar15.Bits;
      uStack_1c4 = uVar9;
      local_1b0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_1b0.ComparisonIndex.Value;
      goto LAB_147832b19;
    }
  }
  bVar3 = false;
  FVar16 = local_1b0;
LAB_147832b19:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1021 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,FPhysicsGeometryCollection_Chaos>::GeomSweepTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,FPhysicsGeometryCollection_Chaos_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1021 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepTest");
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
  local_1c0.Collection = local_res18;
  local_1c0.GeomRot = local_res20;
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
    local_168._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_168._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    if (bVar8) {
      local_188._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_188._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_188._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_1c0,
                         (TVector<double> *)&local_188._s_0,(TVector<double> *)&local_168._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
    else {
      local_188._s_0.X = local_168._s_0.X;
      local_188._s_0.Y = local_168._s_0.Y;
      local_188._s_0.Z = local_168._s_0.Z;
      local_168._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_168._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar8 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FGeomCollectionSQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,&local_1c0,
                         (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_188._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
  }
  FCsvProfiler::EndStat("GeomSweepTest",uVar9);
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
      local_1c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff)
      ;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1c0);
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
      local_1c0.GeomRot =
           (TQuat<double> *)
           (CONCAT44(FVar17.Number,local_1a0.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1c0.Collection = (FPhysicsGeometryCollection_Chaos *)(local_res10.QuadPart & 0xffffffff)
      ;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1c0);
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

// GeomSweepTest @ 147832f00

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
FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>
::GeomSweepTest(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,
               UWorld *param_2,FImplicitObject *param_3,TQuat<double> *param_4,
               TVector<double> *param_5,TVector<double> *param_6,ECollisionChannel param_7,
               FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
               FCollisionObjectQueryParams *param_10)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
  local_res8;
  LARGE_INTEGER local_res10;
  FImplicitObject *local_res18;
  TQuat<double> *local_res20;
  TVector<double>_u_0 local_1b8;
  undefined1 local_198 [16];
  FName local_188;
  FName local_178;
  TVector<double>_u_0 local_168;
  FHitResult local_148;
  
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res8.SpatialAcceleration = param_1;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_198,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_147833052:
    bVar5 = false;
    FVar16 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8._s_0.X = (double)((ulonglong)local_1b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8._0_8_ = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147833052;
    local_1b8._0_8_ = FVar16;
    local_178 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepAny;
  if (StatPtr_STAT_Collision_GeomSweepAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)local_198,"STAT_Collision_GeomSweepAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepAny,*pFVar10,
                        L"GeomSweepAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8._s_0.X = (double)((ulonglong)local_1b8._s_0.X & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8._0_8_ = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3fc);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b8._0_8_ = FVar15;
      local_188 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar17.Value = local_188.ComparisonIndex.Value;
      goto LAB_147833173;
    }
  }
  bVar3 = false;
  FVar15 = local_188;
LAB_147833173:
  if (`public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomSweepTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
      ::__l2::__CsvProfilerStat1021 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index);
    `public:_static_bool___cdecl_FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,Chaos::FImplicitObject>::GeomSweepTest(Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_const&___ptr64,UWorld_const*___ptr64,Chaos::FImplicitObject_const&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams_const&___ptr64,FCollisionResponseParams_const&___ptr64,FCollisionObjectQueryParams_const&___ptr64)'
    ::__l2::__CsvProfilerStat1021 = true;
  }
  uVar8 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepTest");
  local_148.HitObjectHandle.InstanceIndex = -1;
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
  FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_198);
  local_198._8_8_ = local_res20;
  if (((UWorld *)local_res10.QuadPart == (UWorld *)0x0) ||
     (*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0) == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    if ((*(char *)((*(FPhysScene_Chaos **)(local_res10.QuadPart + 0x2a0))->_padding_ + 0x271) ==
         '\0') || ((bVar9 = IsInGameThread(), !bVar9 && (bVar9 = IsInParallelGameThread(), !bVar9)))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_168._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_168._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    if (bVar9) {
      local_1b8._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_1b8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_1b8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FPhysicsGeometrySQAdditionalInputs *)local_198,
                         (TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_168._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
    else {
      local_1b8._s_0.X = local_168._s_0.X;
      local_1b8._s_0.Y = local_168._s_0.Y;
      local_1b8._s_0.Z = local_168._s_0.Z;
      local_168._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_168._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (param_5->field0_0x0)._s_0.Z;
      bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FPhysicsGeometrySQAdditionalInputs,FOverrideAccelContainer<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        ((UWorld *)local_res10,&local_148,
                         (FPhysicsGeometrySQAdditionalInputs *)local_198,
                         (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_1b8._s_0,
                         param_7,param_8,param_9,param_10,&local_res8);
    }
  }
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_198);
  FCsvProfiler::EndStat("GeomSweepTest",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1b8._s_0.Y =
           (double)(CONCAT44(FVar15.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1b8._s_0);
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
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1b8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,local_178.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1b8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1b8._s_0);
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
  return bVar9;
}

