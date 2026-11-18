// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// GeomOverlapMulti<FCollisionShape> @ 147749760

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
FGenericPhysicsInterface::GeomOverlapMulti<FCollisionShape>
          (UWorld *param_1,FCollisionShape *param_2,TVector<double> *param_3,TQuat<double> *param_4,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_5,ECollisionChannel param_6,
          FCollisionQueryParams *param_7,FCollisionResponseParams *param_8,
          FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  UPhysicsQueryHandler *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
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
  EThreadQueryContext EVar19;
  FName FVar20;
  FNameEntryId FVar21;
  undefined1 auStackY_1e8 [32];
  FColor_u_0 local_188;
  uint uStack_184;
  FDefaultAccelContainer local_180 [8];
  LARGE_INTEGER local_178;
  FCollisionShape *local_170;
  FCollisionObjectQueryParams *local_168;
  FCollisionResponseParams *local_160;
  FCollisionQueryParams *local_158;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_150;
  FName local_148;
  FName local_138;
  TQuat<double> local_128;
  TQuat<double> *local_108;
  undefined1 local_f8 [32];
  double local_d8;
  double dStack_d0;
  FCollisionShape *local_c8;
  TVector<double,3> TStack_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_150 = param_5;
  bVar4 = false;
  bVar3 = false;
  local_158 = param_7;
  local_160 = param_8;
  local_168 = param_9;
  FVar21.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_178 = (LARGE_INTEGER)param_3;
  local_170 = param_2;
  local_108 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_128,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  FVar17.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar10 = FVar20.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_1477498f0:
    bVar7 = false;
    FVar20 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_188.Bits = FVar17.Bits;
        uStack_184 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_188._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x572);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1477498f0;
    local_188.Bits = FVar17.Bits;
    uStack_184 = uVar10;
    local_138 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar7 = true;
  }
  FVar13 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_128,"STAT_Collision_GeomOverlapMultiple");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar11,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_147749a11:
    bVar5 = false;
    FVar18 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_188.Bits = FVar17.Bits;
        uStack_184 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_188._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x573);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147749a11;
    local_188.Bits = FVar17.Bits;
    uStack_184 = uVar10;
    local_148 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar4 = false;
    bVar5 = true;
    FVar21.Value = local_148.ComparisonIndex.Value;
  }
  if (__CsvProfilerStat1396 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1396 = true;
  }
  local_188.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  local_a8.Rotation.XY.m128d_f64[0] = local_108->X;
  local_a8.Rotation.XY.m128d_f64[1] = local_108->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = local_108->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = local_108->W;
  local_a8.Translation.ZW.m128d_f64[0] = *(double *)(local_178.QuadPart + 0x10);
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Translation.XY.m128d_f64[0] = *(double *)local_178;
  local_a8.Translation.XY.m128d_f64[1] = *(double *)(local_178.QuadPart + 8);
  if ((param_1 == (UWorld *)0x0) || (param_1->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
    goto LAB_147749c3f;
  }
  if (*(char *)(param_1->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_147749ada:
    EVar19 = GTData;
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_147749ada;
    }
    EVar19 = PTDataWithGTObjects;
  }
  pUVar2 = (param_1->PhysicsQueryHandler).field0_0x0.DebugPtr;
  if (pUVar2 == (UPhysicsQueryHandler *)0x0) {
    local_128.X = local_a8.Rotation.XY.m128d_f64[0];
    local_128.Y = local_a8.Rotation.XY.m128d_f64[1];
    local_128.Z = local_a8.Rotation.ZW.m128d_f64[0];
    local_128.W = local_a8.Rotation.ZW.m128d_f64[1];
    FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
              ((FPhysicsShapeAdapter_Chaos *)local_f8,&local_128,local_170);
    local_c8 = local_170;
    pFVar14 = FPhysicsShapeAdapter_Chaos::GetGeometry((FPhysicsShapeAdapter_Chaos *)local_f8);
    if (EVar19 == GTData) {
      bVar9 = GeomOverlapMultiImp<ChaosInterface::FOverlapHit,0,FCollisionShape,FDefaultAccelContainer>
                        (param_1,pFVar14,local_c8,&local_a8,local_150,param_6,local_158,local_160,
                         local_168,local_180);
      FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos
                ((FPhysicsShapeAdapter_Chaos *)local_f8);
    }
    else {
      bVar9 = GeomOverlapMultiImp<ChaosInterface::FPTOverlapHit,0,FCollisionShape,FDefaultAccelContainer>
                        (param_1,pFVar14,local_c8,&local_a8,local_150,param_6,local_158,local_160,
                         local_168,local_180);
      FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos
                ((FPhysicsShapeAdapter_Chaos *)local_f8);
    }
  }
  else {
    local_f8._16_8_ = (FScriptContainerElement *)0x0;
    local_f8._24_8_ = 0.0;
    local_d8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_d0 = _UNK_150a9e648;
    TStack_c0._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
    TStack_c0._16_8_ = _UNK_1508ffb58;
    local_f8._0_8_ = *(undefined8 *)local_170;
    local_f8._8_8_ = *(undefined8 *)((longlong)&local_170->field1_0x4 + 4);
    local_c8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    TStack_c0._0_8_ = _UNK_150a9e6d8;
    bVar9 = GeomOverlapMultiHelperWithQueryHandler<0>
                      (pUVar2,EVar19,param_1,(FQueryShape *)local_f8,&local_a8,local_150,param_6,
                       local_158,local_160,local_168);
    if ((FScriptContainerElement *)local_f8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._16_8_);
    }
  }
LAB_147749c3f:
  FCsvProfiler::EndStat("GeomOverlapMultiple",local_188.Bits);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_128.Y = (double)(CONCAT44(FVar18.Number,FVar21.Value) & 0xffff6fffffffffff |
                            0x600000000000);
      QueryPerformanceCounter(&local_178);
      local_128.X = (double)(local_178.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_128);
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
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_128.Y = (double)(CONCAT44(FVar20.Number,local_138.ComparisonIndex.Value.Value) &
                             0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_178);
      local_128.X = (double)(local_178.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_128);
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

// GeomOverlapMulti<FPhysicsGeometryCollection_Chaos> @ 147749e20

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
FGenericPhysicsInterface::GeomOverlapMulti<FPhysicsGeometryCollection_Chaos>
          (UWorld *param_1,FPhysicsGeometryCollection_Chaos *param_2,TVector<double> *param_3,
          TQuat<double> *param_4,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_5,
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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128;
  uint uStack_124;
  FDefaultAccelContainer local_120 [8];
  LARGE_INTEGER local_118;
  FStatMessage local_110;
  FName local_100;
  FName local_f0;
  TQuat<double> *local_e0;
  FCollisionObjectQueryParams *local_d8;
  FCollisionResponseParams *local_d0;
  FCollisionQueryParams *local_c8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_c0;
  FPhysicsGeometryCollection_Chaos *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_c0 = param_5;
  local_c8 = param_7;
  local_d0 = param_8;
  local_d8 = param_9;
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_118 = (LARGE_INTEGER)param_1;
  local_e0 = param_4;
  local_b8 = param_2;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_110,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147749faa:
    bVar5 = false;
    FVar17 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.Bits = FVar15.Bits;
        uStack_124 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_128._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x567);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147749faa;
    local_128.Bits = FVar15.Bits;
    uStack_124 = uVar9;
    local_f0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapMultiple;
  if (StatPtr_STAT_Collision_GeomOverlapMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_110,"STAT_Collision_GeomOverlapMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapMultiple,
                        *pFVar10,L"GeomOverlapMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.Bits = FVar15.Bits;
        uStack_124 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_128._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x568);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_128.Bits = FVar15.Bits;
      uStack_124 = uVar9;
      local_100 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_100.ComparisonIndex.Value;
      goto LAB_14774a0d0;
    }
  }
  bVar3 = false;
  FVar16 = local_100;
LAB_14774a0d0:
  if (__CsvProfilerStat1385 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1385 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapMultiple");
  local_a8.Translation.XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
  local_a8.Translation.XY.m128d_f64[1] = (param_3->field0_0x0)._s_0.Y;
  local_a8.Rotation.XY.m128d_f64[0] = local_e0->X;
  local_a8.Rotation.XY.m128d_f64[1] = local_e0->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = local_e0->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = local_e0->W;
  local_a8.Translation.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  bVar8 = GeomOverlapMultiHelper<0,FPhysicsGeometryCollection_Chaos,FDefaultAccelContainer>
                    ((UWorld *)local_118,local_b8,&local_a8,local_c0,param_6,local_c8,local_d0,
                     local_d8,local_120);
  FCsvProfiler::EndStat("GeomOverlapMultiple",uVar9);
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
      local_110.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_110.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_118);
      local_110.StatData.Pad = (uchar  [8])(local_118.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_110);
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
      local_110.NameAndInfo.Index.Value = local_f0.ComparisonIndex.Value;
      local_110.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_118);
      local_110.StatData.Pad = (uchar  [8])(local_118.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_110);
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

// GeomOverlapMulti<Chaos::FImplicitObject> @ 14774a380

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
FGenericPhysicsInterface::GeomOverlapMulti<Chaos::FImplicitObject>
          (UWorld *param_1,FImplicitObject *param_2,TVector<double> *param_3,TQuat<double> *param_4,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_5,ECollisionChannel param_6,
          FCollisionQueryParams *param_7,FCollisionResponseParams *param_8,
          FCollisionObjectQueryParams *param_9)

{
  bool bVar1;
  FPhysicsGeometryCollection_Chaos FVar2;
  
  FVar2 = FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)&stack0xffffffffffffffe8);
  bVar1 = GeomOverlapMulti<FPhysicsGeometryCollection_Chaos>
                    (param_1,(FPhysicsGeometryCollection_Chaos *)FVar2.Geom,param_3,param_4,param_5,
                     param_6,param_7,param_8,param_9);
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)&stack0xffffffffffffffe8);
  return bVar1;
}

// GeomSweepMulti<FCollisionShape> @ 14775a370

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
FGenericPhysicsInterface::GeomSweepMulti<FCollisionShape>
          (UWorld *param_1,FCollisionShape *param_2,TQuat<double> *param_3,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,ECollisionChannel param_7,FCollisionQueryParams *param_8,
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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FColor_u_0 local_res10;
  uint uStackX_14;
  TQuat<double> *local_res18;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_res20;
  TVector<double>_u_0 local_e8;
  FName local_c8;
  FName local_b8;
  TVector<double>_u_0 local_a8;
  FGeomSQAdditionalInputs local_88;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14775a4b6:
    bVar5 = false;
    FVar17 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar15.Bits;
        uStackX_14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x433);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14775a4b6;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_b8 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_GeomSweepMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar10,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar15.Bits;
        uStackX_14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x434);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar15.Bits;
      uStackX_14 = uVar9;
      local_c8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14775a5d4;
    }
  }
  bVar3 = false;
  FVar16 = local_c8;
LAB_14775a5d4:
  if (__CsvProfilerStat1077 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1077 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter,local_res18,param_2)
  ;
  local_e8._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_e8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_e8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_a8._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_a8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_a8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  local_88.CollisionShape = param_2;
  bVar8 = TSceneCastCommon<1,1,TArray<FHitResult,TSizedDefaultAllocator<32>_>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                    (param_1,local_res20,&local_88,(TVector<double> *)&local_a8._s_0,
                     (TVector<double> *)&local_e8._s_0,param_7,param_8,param_9,param_10,
                     (FDefaultAccelContainer *)&param_6);
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter);
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
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
      local_e8._s_0.X = (double)((ulonglong)param_6 & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_e8._s_0);
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
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,local_b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
      local_e8._s_0.X = (double)((ulonglong)param_6 & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_e8._s_0);
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

// GeomSweepMulti<FPhysicsGeometryCollection_Chaos> @ 14775a880

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
FGenericPhysicsInterface::GeomSweepMulti<FPhysicsGeometryCollection_Chaos>
          (UWorld *param_1,FPhysicsGeometryCollection_Chaos *param_2,TQuat<double> *param_3,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,ECollisionChannel param_7,FCollisionQueryParams *param_8,
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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res10;
  TQuat<double> *local_res18;
  FColor_u_0 local_b8;
  uint uStack_b4;
  LARGE_INTEGER local_b0;
  TQuat<double> *local_a8;
  FName local_a0;
  FName local_90;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_b0.s,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14775a9c9:
    bVar5 = false;
    FVar17 = local_90;
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
                   ,0x427);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14775a9c9;
    local_b8.Bits = FVar15.Bits;
    uStack_b4 = uVar9;
    local_90 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepMultiple;
  if (StatPtr_STAT_Collision_GeomSweepMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_b0.s,"STAT_Collision_GeomSweepMultiple");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepMultiple,
                        *pFVar10,L"GeomSweepMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
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
                   ,0x428);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8.Bits = FVar15.Bits;
      uStack_b4 = uVar9;
      local_a0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_a0.ComparisonIndex.Value;
      goto LAB_14775aae6;
    }
  }
  bVar3 = false;
  FVar16 = local_a0;
LAB_14775aae6:
  if (__CsvProfilerStat1065 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1065 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepMultiple");
  local_b0 = local_res10;
  local_a8 = local_res18;
  local_78._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_78._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_58._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  bVar8 = TSceneCastCommon<1,1,TArray<FHitResult,TSizedDefaultAllocator<32>_>,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                    (param_1,param_4,(FGeomCollectionSQAdditionalInputs *)&local_b0.s,
                     (TVector<double> *)&local_58._s_0,(TVector<double> *)&local_78._s_0,param_7,
                     param_8,param_9,param_10,(FDefaultAccelContainer *)&local_res10.s);
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
      local_a8 = (TQuat<double> *)
                 (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b0.QuadPart = local_res10.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b0.s);
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
      local_a8 = (TQuat<double> *)
                 (CONCAT44(FVar17.Number,local_90.ComparisonIndex.Value.Value) & 0xffff6fffffffffff
                 | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b0.QuadPart = local_res10.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b0.s);
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

// GeomSweepMulti<Chaos::FImplicitObject> @ 14775ad80

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
FGenericPhysicsInterface::GeomSweepMulti<Chaos::FImplicitObject>
          (UWorld *param_1,FImplicitObject *param_2,TQuat<double> *param_3,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,ECollisionChannel param_7,FCollisionQueryParams *param_8,
          FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

{
  bool bVar1;
  FPhysicsGeometryCollection_Chaos FVar2;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  double local_38;
  TVector<double>_u_0 local_28;
  
  FVar2 = FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_58);
  local_48._0_8_ = (param_6->field0_0x0)._s_0.X;
  local_48._8_8_ = (param_6->field0_0x0)._s_0.Y;
  local_38 = (param_6->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  bVar1 = GeomSweepMulti<FPhysicsGeometryCollection_Chaos>
                    (param_1,(FPhysicsGeometryCollection_Chaos *)FVar2.Geom,param_3,param_4,
                     (TVector<double> *)&local_28._s_0,(TVector<double> *)(local_58 + 0x10),param_7,
                     param_8,param_9,param_10);
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_58);
  return bVar1;
}

// GeomSweepSingle<FCollisionShape> @ 14775ae70

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
FGenericPhysicsInterface::GeomSweepSingle<FCollisionShape>
          (UWorld *param_1,FCollisionShape *param_2,TQuat<double> *param_3,FHitResult *param_4,
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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FColor_u_0 local_res10;
  uint uStackX_14;
  TQuat<double> *local_res18;
  FHitResult *local_res20;
  TVector<double>_u_0 local_e8;
  FName local_c8;
  FName local_b8;
  TVector<double>_u_0 local_a8;
  FGeomSQAdditionalInputs local_88;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14775afb6:
    bVar5 = false;
    FVar17 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar15.Bits;
        uStackX_14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x415);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14775afb6;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_b8 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_e8._s_0,"STAT_Collision_GeomSweepSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar10,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar15.Bits;
        uStackX_14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x416);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar15.Bits;
      uStackX_14 = uVar9;
      local_c8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14775b0d4;
    }
  }
  bVar3 = false;
  FVar16 = local_c8;
LAB_14775b0d4:
  if (__CsvProfilerStat1047 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1047 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter,local_res18,param_2)
  ;
  local_e8._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_e8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_e8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_a8._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_a8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_a8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  local_88.CollisionShape = param_2;
  bVar8 = TSceneCastCommon<1,0,FHitResult,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                    (param_1,local_res20,&local_88,(TVector<double> *)&local_a8._s_0,
                     (TVector<double> *)&local_e8._s_0,param_7,param_8,param_9,param_10,
                     (FDefaultAccelContainer *)&param_6);
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter);
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
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
      local_e8._s_0.X = (double)((ulonglong)param_6 & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_e8._s_0);
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
      local_e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,local_b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
      local_e8._s_0.X = (double)((ulonglong)param_6 & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_e8._s_0);
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

// GeomSweepSingle<FPhysicsGeometryCollection_Chaos> @ 14775b380

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
FGenericPhysicsInterface::GeomSweepSingle<FPhysicsGeometryCollection_Chaos>
          (UWorld *param_1,FPhysicsGeometryCollection_Chaos *param_2,TQuat<double> *param_3,
          FHitResult *param_4,TVector<double> *param_5,TVector<double> *param_6,
          ECollisionChannel param_7,FCollisionQueryParams *param_8,FCollisionResponseParams *param_9
          ,FCollisionObjectQueryParams *param_10)

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
  LARGE_INTEGER local_res10;
  TQuat<double> *local_res18;
  FColor_u_0 local_b8;
  uint uStack_b4;
  LARGE_INTEGER local_b0;
  TQuat<double> *local_a8;
  FName local_a0;
  FName local_90;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_b0.s,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14775b4c9:
    bVar5 = false;
    FVar17 = local_90;
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
                   ,0x409);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14775b4c9;
    local_b8.Bits = FVar15.Bits;
    uStack_b4 = uVar9;
    local_90 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepSingle;
  if (StatPtr_STAT_Collision_GeomSweepSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_b0.s,"STAT_Collision_GeomSweepSingle");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepSingle,
                        *pFVar10,L"GeomSweepSingle","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
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
                   ,0x40a);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8.Bits = FVar15.Bits;
      uStack_b4 = uVar9;
      local_a0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_a0.ComparisonIndex.Value;
      goto LAB_14775b5e6;
    }
  }
  bVar3 = false;
  FVar16 = local_a0;
LAB_14775b5e6:
  if (__CsvProfilerStat1035 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1035 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepSingle",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepSingle");
  local_b0 = local_res10;
  local_a8 = local_res18;
  local_78._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_78._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_58._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  bVar8 = TSceneCastCommon<1,0,FHitResult,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                    (param_1,param_4,(FGeomCollectionSQAdditionalInputs *)&local_b0.s,
                     (TVector<double> *)&local_58._s_0,(TVector<double> *)&local_78._s_0,param_7,
                     param_8,param_9,param_10,(FDefaultAccelContainer *)&local_res10.s);
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
      local_a8 = (TQuat<double> *)
                 (CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b0.QuadPart = local_res10.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b0.s);
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
      local_a8 = (TQuat<double> *)
                 (CONCAT44(FVar17.Number,local_90.ComparisonIndex.Value.Value) & 0xffff6fffffffffff
                 | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_b0.QuadPart = local_res10.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_b0.s);
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

// GeomSweepSingle<Chaos::FImplicitObject> @ 14775b880

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
FGenericPhysicsInterface::GeomSweepSingle<Chaos::FImplicitObject>
          (UWorld *param_1,FImplicitObject *param_2,TQuat<double> *param_3,FHitResult *param_4,
          TVector<double> *param_5,TVector<double> *param_6,ECollisionChannel param_7,
          FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
          FCollisionObjectQueryParams *param_10)

{
  bool bVar1;
  FPhysicsGeometryCollection_Chaos FVar2;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  double local_38;
  TVector<double>_u_0 local_28;
  
  FVar2 = FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)local_58);
  local_48._0_8_ = (param_6->field0_0x0)._s_0.X;
  local_48._8_8_ = (param_6->field0_0x0)._s_0.Y;
  local_38 = (param_6->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  bVar1 = GeomSweepSingle<FPhysicsGeometryCollection_Chaos>
                    (param_1,(FPhysicsGeometryCollection_Chaos *)FVar2.Geom,param_3,param_4,
                     (TVector<double> *)&local_28._s_0,(TVector<double> *)(local_58 + 0x10),param_7,
                     param_8,param_9,param_10);
  FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
            ((FPhysicsGeometryCollection_Chaos *)local_58);
  return bVar1;
}

// GeomOverlapAnyTest @ 147826cd0

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
FGenericPhysicsInterface::GeomOverlapAnyTest
          (UWorld *param_1,FCollisionShape *param_2,TVector<double> *param_3,TQuat<double> *param_4,
          ECollisionChannel param_5,FCollisionQueryParams *param_6,FCollisionResponseParams *param_7
          ,FCollisionObjectQueryParams *param_8)

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
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_198 [32];
  FColor_u_0 local_138;
  uint uStack_134;
  FDefaultAccelContainer local_130 [8];
  LARGE_INTEGER local_128;
  FStatMessage local_120;
  FName local_110;
  FName local_100;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_f0;
  TQuat<double> *local_e0;
  TVector<double> *local_d8;
  FCollisionObjectQueryParams *local_d0;
  FCollisionResponseParams *local_c8;
  FCollisionQueryParams *local_c0;
  FCollisionShape *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_c0 = param_6;
  local_c8 = param_7;
  local_d0 = param_8;
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_128 = (LARGE_INTEGER)param_1;
  local_e0 = param_4;
  local_d8 = param_3;
  local_b8 = param_2;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_120,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147826e50:
    bVar5 = false;
    FVar17 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.Bits = FVar15.Bits;
        uStack_134 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_138._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x54f);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147826e50;
    local_138.Bits = FVar15.Bits;
    uStack_134 = uVar9;
    local_100 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapAny;
  if (StatPtr_STAT_Collision_GeomOverlapAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_120,"STAT_Collision_GeomOverlapAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapAny,*pFVar10
                        ,L"GeomOverlapAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.Bits = FVar15.Bits;
        uStack_134 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_138._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x550);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138.Bits = FVar15.Bits;
      uStack_134 = uVar9;
      local_110 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_110.ComparisonIndex.Value;
      goto LAB_147826f72;
    }
  }
  bVar3 = false;
  FVar16 = local_110;
LAB_147826f72:
  if (__CsvProfilerStat1361 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1361 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomOverlapAny",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapAny");
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = local_e0->X;
  local_a8.Rotation.XY.m128d_f64[1] = local_e0->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = local_e0->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = local_e0->W;
  local_a8.Translation.ZW.m128d_f64[0] = (local_d8->field0_0x0)._s_0.Z;
  local_a8.Translation.XY.m128d_f64[0] = (local_d8->field0_0x0)._s_0.X;
  local_a8.Translation.XY.m128d_f64[1] = (local_d8->field0_0x0)._s_0.Y;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  bVar8 = GeomOverlapMultiHelper<2,FCollisionShape,FDefaultAccelContainer>
                    ((UWorld *)local_128,local_b8,&local_a8,&local_f0,param_5,local_c0,local_c8,
                     local_d0,local_130);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapAny",uVar9);
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
      local_120.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_120.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_128);
      local_120.StatData.Pad = (uchar  [8])(local_128.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_120);
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
      local_120.NameAndInfo.Index.Value = local_100.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_128);
      local_120.StatData.Pad = (uchar  [8])(local_128.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_120);
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

// GeomOverlapBlockingTest @ 147829750

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
FGenericPhysicsInterface::GeomOverlapBlockingTest
          (UWorld *param_1,FCollisionShape *param_2,TVector<double> *param_3,TQuat<double> *param_4,
          ECollisionChannel param_5,FCollisionQueryParams *param_6,FCollisionResponseParams *param_7
          ,FCollisionObjectQueryParams *param_8)

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
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_198 [32];
  FColor_u_0 local_138;
  uint uStack_134;
  FDefaultAccelContainer local_130 [8];
  LARGE_INTEGER local_128;
  FStatMessage local_120;
  FName local_110;
  FName local_100;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_f0;
  TQuat<double> *local_e0;
  TVector<double> *local_d8;
  FCollisionObjectQueryParams *local_d0;
  FCollisionResponseParams *local_c8;
  FCollisionQueryParams *local_c0;
  FCollisionShape *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_c0 = param_6;
  local_c8 = param_7;
  local_d0 = param_8;
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_128 = (LARGE_INTEGER)param_1;
  local_e0 = param_4;
  local_d8 = param_3;
  local_b8 = param_2;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_120,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1478298d0:
    bVar5 = false;
    FVar17 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.Bits = FVar15.Bits;
        uStack_134 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_138._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x538);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478298d0;
    local_138.Bits = FVar15.Bits;
    uStack_134 = uVar9;
    local_100 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomOverlapBlocking;
  if (StatPtr_STAT_Collision_GeomOverlapBlocking ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_120,"STAT_Collision_GeomOverlapBlocking");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomOverlapBlocking>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomOverlapBlocking,
                        *pFVar10,L"GeomOverlapBlocking","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.Bits = FVar15.Bits;
        uStack_134 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_138._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x539);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138.Bits = FVar15.Bits;
      uStack_134 = uVar9;
      local_110 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = local_110.ComparisonIndex.Value;
      goto LAB_1478299f2;
    }
  }
  bVar3 = false;
  FVar16 = local_110;
LAB_1478299f2:
  if (__CsvProfilerStat1338 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1338 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomOverlapBlocking",_GCsvCategory_SceneQuery.Index,"CSV_GeomOverlapBlocking");
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_a8.Rotation.XY.m128d_f64[0] = local_e0->X;
  local_a8.Rotation.XY.m128d_f64[1] = local_e0->Y;
  local_a8.Rotation.ZW.m128d_f64[0] = local_e0->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = local_e0->W;
  local_a8.Translation.ZW.m128d_f64[0] = (local_d8->field0_0x0)._s_0.Z;
  local_a8.Translation.XY.m128d_f64[0] = (local_d8->field0_0x0)._s_0.X;
  local_a8.Translation.XY.m128d_f64[1] = (local_d8->field0_0x0)._s_0.Y;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  bVar8 = GeomOverlapMultiHelper<1,FCollisionShape,FDefaultAccelContainer>
                    ((UWorld *)local_128,local_b8,&local_a8,&local_f0,param_5,local_c0,local_c8,
                     local_d0,local_130);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("GeomOverlapBlocking",uVar9);
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
      local_120.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_120.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_128);
      local_120.StatData.Pad = (uchar  [8])(local_128.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_120);
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
      local_120.NameAndInfo.Index.Value = local_100.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_128);
      local_120.StatData.Pad = (uchar  [8])(local_128.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_120);
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

// GeomSweepTest @ 147833570

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
FGenericPhysicsInterface::GeomSweepTest
          (UWorld *param_1,FCollisionShape *param_2,TQuat<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5,ECollisionChannel param_6,FCollisionQueryParams *param_7,
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
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res10;
  TQuat<double> *local_res18;
  FColor_u_0 local_res20;
  uint uStackX_24;
  TVector<double>_u_0 local_1e8;
  FName local_1c8;
  FName local_1b8;
  TVector<double>_u_0 local_1a8;
  FGeomSQAdditionalInputs local_188;
  FHitResult local_148;
  
  bVar3 = false;
  bVar2 = false;
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res10 = (LARGE_INTEGER)param_2;
  local_res18 = param_3;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1e8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1478336d1:
    bVar6 = false;
    FVar17 = local_1b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar15.Bits;
        uStackX_24 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3ed);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478336d1;
    local_res20.Bits = FVar15.Bits;
    uStackX_24 = uVar9;
    local_1b8 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar6 = true;
  }
  FVar12 = StatPtr_STAT_Collision_GeomSweepAny;
  if (StatPtr_STAT_Collision_GeomSweepAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_1e8._s_0,"STAT_Collision_GeomSweepAny");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_GeomSweepAny,*pFVar10,
                        L"GeomSweepAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar2 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar15.Bits;
        uStackX_24 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3ee);
        bVar3 = true;
        bVar2 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.Bits = FVar15.Bits;
      uStackX_24 = uVar9;
      local_1c8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = false;
      bVar4 = true;
      FVar18.Value = local_1c8.ComparisonIndex.Value;
      goto LAB_147833807;
    }
  }
  bVar4 = false;
  FVar16 = local_1c8;
LAB_147833807:
  if (__CsvProfilerStat1007 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1007 = true;
  }
  uVar9 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("GeomSweepTest",_GCsvCategory_SceneQuery.Index,"CSV_GeomSweepTest");
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_148.PhysMaterial.WeakPtr.ObjectIndex = 0;
  local_148.PhysMaterial.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
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
  local_148.HitObjectHandle.InstanceIndex = -1;
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_188.ShapeAdapter,local_res18,(FCollisionShape *)local_res10);
  local_188.CollisionShape = (FCollisionShape *)local_res10;
  local_1e8._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_1e8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_1e8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  local_1a8._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_1a8._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_1a8._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  bVar8 = TSceneCastCommon<1,2,FHitResult,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                    (param_1,&local_148,&local_188,(TVector<double> *)&local_1a8._s_0,
                     (TVector<double> *)&local_1e8._s_0,param_6,param_7,param_8,param_9,
                     (FDefaultAccelContainer *)&local_res10.s);
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_188.ShapeAdapter);
  FCsvProfiler::EndStat("GeomSweepTest",uVar9);
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1e8._s_0.Y =
           (double)(CONCAT44(FVar16.Number,FVar18.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1e8._s_0);
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
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_1e8._s_0.Y =
           (double)(CONCAT44(FVar17.Number,local_1b8.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_1e8._s_0.X = (double)(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,(FStatMessage *)&local_1e8._s_0);
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

// RaycastMulti @ 147858d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FGenericPhysicsInterface::RaycastMulti
          (UWorld *param_1,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,ECollisionChannel param_5,
          FCollisionQueryParams *param_6,FCollisionResponseParams *param_7,
          FCollisionObjectQueryParams *param_8)

{
  int *piVar1;
  UPhysicsQueryHandler *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FName FVar16;
  char cVar17;
  FName FVar18;
  FNameEntryId FVar19;
  FNameEntryId FVar20;
  uint uVar21;
  undefined1 auStackY_258 [32];
  FDefaultAccelContainer local_1f8 [4];
  FColor_u_0 local_1f4 [3];
  FName local_1e8 [2];
  TVector<double> *local_1d8;
  LARGE_INTEGER local_1c8 [2];
  TVector<double>_u_0 local_1b8;
  FCollisionObjectQueryParams *local_198;
  FCollisionResponseParams *local_190;
  FCollisionQueryParams *local_188;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_180;
  UWorld *local_178;
  FName local_170;
  FName local_160;
  TVector<double>_u_0 local_148;
  undefined4 local_130;
  undefined4 uStack_12c;
  uint uStack_128;
  uint uStack_124;
  FName local_120;
  ECollisionChannel local_118;
  FCollisionQueryParams local_110;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FCollisionObjectQueryParams local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_188 = param_6;
  local_190 = param_7;
  local_198 = param_8;
  FVar19.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_1d8 = param_4;
  local_1c8[0] = (LARGE_INTEGER)param_3;
  local_180 = param_2;
  local_178 = param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_148._s_0,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar5 = false;
  bVar8 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_147858ef4:
    bVar6 = false;
    FVar18 = local_160;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f4[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f4[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8[0] = FVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_1e8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3d3);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147858ef4;
    local_1e8[0] = FVar18;
    local_160 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar6 = true;
  }
  FVar13 = StatPtr_STAT_Collision_RaycastMultiple;
  if (StatPtr_STAT_Collision_RaycastMultiple ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_148._s_0,"STAT_Collision_RaycastMultiple");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastMultiple,
                        *pFVar11,L"RaycastMultiple","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar3 = false;
  bVar7 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_147859015:
    bVar4 = false;
    FVar16 = local_170;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f4[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f4[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8[0] = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_1e8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3d4);
        bVar3 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147859015;
    local_1e8[0] = FVar16;
    local_170 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar4 = true;
    FVar19.Value = local_170.ComparisonIndex.Value;
  }
  if (__CsvProfilerStat981 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastMultiple",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat981 = true;
  }
  local_1f4[0].Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastMultiple",_GCsvCategory_SceneQuery.Index,"CSV_RaycastMultiple");
  local_1e8[0] = *(FName *)((longlong)&local_1d8->field0_0x0 + 0x10);
  FVar20 = local_1e8[0].ComparisonIndex.Value;
  uVar21 = local_1e8[0].Number;
  local_1b8._0_4_ = *(undefined4 *)&local_1d8->field0_0x0;
  local_1b8._4_4_ = *(undefined4 *)((longlong)&local_1d8->field0_0x0 + 4);
  local_1b8._8_4_ = *(uint *)((longlong)&local_1d8->field0_0x0 + 8);
  local_1b8._12_4_ = *(uint *)((longlong)&local_1d8->field0_0x0 + 0xc);
  local_1d8 = *(TVector<double> **)(local_1c8[0].QuadPart + 0x10);
  local_148._0_4_ = *(undefined4 *)local_1c8[0];
  local_148._4_4_ = *(undefined4 *)(local_1c8[0].QuadPart + 4);
  local_148._8_4_ = *(undefined4 *)(local_1c8[0].QuadPart + 8);
  local_148._12_4_ = *(undefined4 *)(local_1c8[0].QuadPart + 0xc);
  if ((param_1 == (UWorld *)0x0) || (param_1->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    uVar10 = 0;
    goto LAB_147859235;
  }
  if (*(char *)(param_1->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_1478590d8:
    cVar17 = '\0';
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) {
        FVar20 = local_1e8[0].ComparisonIndex.Value;
        uVar21 = local_1e8[0].Number;
        goto LAB_1478590d8;
      }
    }
    cVar17 = '\x01';
    FVar20 = local_1e8[0].ComparisonIndex.Value;
    uVar21 = local_1e8[0].Number;
  }
  pUVar2 = (param_1->PhysicsQueryHandler).field0_0x0.DebugPtr;
  if (pUVar2 == (UPhysicsQueryHandler *)0x0) {
    local_1b8._s_0.Z = (double)CONCAT44(uVar21,FVar20.Value);
    local_148._s_0.Z = (double)local_1d8;
    if (cVar17 == '\0') {
      uVar10 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,1>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                         (local_178,local_180,(FRaycastSQAdditionalInputs *)local_1f8,
                          (TVector<double> *)&local_148._s_0,(TVector<double> *)&local_1b8._s_0,
                          param_5,local_188,local_190,local_198,local_1f8);
    }
    else {
      uVar10 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,1>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                         (local_178,local_180,(FRaycastSQAdditionalInputs *)local_1f8,
                          (TVector<double> *)&local_148._s_0,(TVector<double> *)&local_1b8._s_0,
                          param_5,local_188,local_190,local_198,local_1f8);
    }
  }
  else {
    local_118 = param_5;
    FCollisionQueryParams::FCollisionQueryParams(&local_110,local_188);
    local_88 = *(undefined8 *)&(local_190->CollisionResponse).field0_0x0;
    uStack_80 = *(undefined8 *)((longlong)&(local_190->CollisionResponse).field0_0x0 + 8);
    local_78 = *(undefined8 *)((longlong)&(local_190->CollisionResponse).field0_0x0 + 0x10);
    uStack_70 = *(undefined8 *)((longlong)&(local_190->CollisionResponse).field0_0x0 + 0x18);
    local_68 = *local_198;
    local_148._s_0.Z = (double)local_1d8;
    local_130 = local_1b8._0_4_;
    uStack_12c = local_1b8._4_4_;
    uStack_128 = local_1b8._8_4_;
    uStack_124 = local_1b8._12_4_;
    local_120 = local_1e8[0];
    uVar10 = (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,cVar17,local_178,&local_148);
    if (local_110.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_110.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_110.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_110.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
LAB_147859235:
  FCsvProfiler::EndStat("RaycastMultiple",local_1f4[0].Bits);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_1b8._12_4_ = FVar16.Number & 0xffff6fff | 0x6000;
      local_1b8._8_4_ = FVar19.Value;
      QueryPerformanceCounter(local_1c8);
      local_1b8._0_4_ = local_1c8[0].s.LowPart;
      local_1b8._4_4_ = 0;
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_1b8._s_0);
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
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_1b8._8_4_ = local_160.ComparisonIndex.Value;
      local_1b8._12_4_ = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_1c8);
      local_1b8._s_0.X = (double)(local_1c8[0].QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)&local_1b8._s_0);
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
  return (bool)uVar10;
}

// RaycastSingle @ 14785a5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FGenericPhysicsInterface::RaycastSingle
          (UWorld *param_1,FHitResult *param_2,TVector<double> *param_3,TVector<double> *param_4,
          ECollisionChannel param_5,FCollisionQueryParams *param_6,FCollisionResponseParams *param_7
          ,FCollisionObjectQueryParams *param_8)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  char cVar18;
  FName FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_238 [32];
  FRaycastSQAdditionalInputs local_1d8 [8];
  FColor_u_0 local_1d0;
  uint uStack_1cc;
  LARGE_INTEGER local_1c8;
  FStatMessage local_1c0;
  TVector<double> *local_1b0;
  TVector<double> *local_1a8;
  FCollisionObjectQueryParams *local_1a0;
  FCollisionResponseParams *local_198;
  FCollisionQueryParams *local_190;
  FName local_188;
  FName local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  ECollisionChannel local_118;
  FCollisionQueryParams local_110;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FCollisionObjectQueryParams local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_190 = param_6;
  local_198 = param_7;
  local_1a0 = param_8;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_1c0.StatData.Pad = (uchar  [8])param_2;
  local_1b0 = param_4;
  local_1a8 = param_3;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_1c8.s,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FVar16.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_14785a772:
    bVar5 = false;
    FVar19 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d0._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d0.Bits = FVar16.Bits;
        uStack_1cc = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1d0._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3bb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785a772;
    local_1d0.Bits = FVar16.Bits;
    uStack_1cc = uVar10;
    local_178 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar13 = StatPtr_STAT_Collision_RaycastSingle;
  if (StatPtr_STAT_Collision_RaycastSingle ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_1c8.s,"STAT_Collision_RaycastSingle");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastSingle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastSingle,*pFVar11,
                        L"RaycastSingle","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar2 = false;
  bVar6 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar10 == 0)) {
LAB_14785a894:
    bVar3 = false;
    FVar17 = local_188;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d0._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d0.Bits = FVar16.Bits;
        uStack_1cc = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1d0._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3bc);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785a894;
    local_1d0.Bits = FVar16.Bits;
    uStack_1cc = uVar10;
    local_188 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar20.Value = local_188.ComparisonIndex.Value;
  }
  if (__CsvProfilerStat957 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastSingle",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat957 = true;
  }
  local_1d0.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastSingle",_GCsvCategory_SceneQuery.Index,"CSV_RaycastSingle");
  if ((param_1 == (UWorld *)0x0) || (param_1->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    uVar9 = 0;
    goto LAB_14785aad1;
  }
  if (*(char *)(param_1->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_14785a916:
    cVar18 = '\0';
  }
  else {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) goto LAB_14785a916;
    }
    cVar18 = '\x01';
  }
  local_1c8 = (LARGE_INTEGER)(param_1->PhysicsQueryHandler).field0_0x0.DebugPtr;
  if ((UPhysicsQueryHandler *)local_1c8.QuadPart == (UPhysicsQueryHandler *)0x0) {
    local_148._s_0.Z = (local_1b0->field0_0x0)._s_0.Z;
    local_148._s_0.X = (local_1b0->field0_0x0)._s_0.X;
    local_148._s_0.Y = (local_1b0->field0_0x0)._s_0.Y;
    if (cVar18 == '\0') {
      local_168._s_0.X = local_148._s_0.X;
      local_168._s_0.Y = local_148._s_0.Y;
      local_168._s_0.Z = local_148._s_0.Z;
      local_148._s_0.X = (local_1a8->field0_0x0)._s_0.X;
      local_148._s_0.Y = (local_1a8->field0_0x0)._s_0.Y;
      local_148._s_0.Z = (local_1a8->field0_0x0)._s_0.Z;
      uVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,0>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                        (param_1,(FHitResult *)local_1c0.StatData.Pad,local_1d8,
                         (TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0,
                         param_5,local_190,local_198,local_1a0,(FDefaultAccelContainer *)local_1d8);
    }
    else {
      local_168._s_0.X = (local_1a8->field0_0x0)._s_0.X;
      local_168._s_0.Y = (local_1a8->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (local_1a8->field0_0x0)._s_0.Z;
      uVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,0>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                        (param_1,(FHitResult *)local_1c0.StatData.Pad,local_1d8,
                         (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_148._s_0,
                         param_5,local_190,local_198,local_1a0,(FDefaultAccelContainer *)local_1d8);
    }
  }
  else {
    local_118 = param_5;
    FCollisionQueryParams::FCollisionQueryParams(&local_110,local_190);
    local_88 = *(undefined8 *)&(local_198->CollisionResponse).field0_0x0;
    uStack_80 = *(undefined8 *)((longlong)&(local_198->CollisionResponse).field0_0x0 + 8);
    local_78 = *(undefined8 *)((longlong)&(local_198->CollisionResponse).field0_0x0 + 0x10);
    uStack_70 = *(undefined8 *)((longlong)&(local_198->CollisionResponse).field0_0x0 + 0x18);
    local_68 = *local_1a0;
    local_148._s_0.X = (local_1a8->field0_0x0)._s_0.X;
    local_148._s_0.Y = (local_1a8->field0_0x0)._s_0.Y;
    local_148._s_0.Z = (local_1a8->field0_0x0)._s_0.Z;
    local_130 = *(undefined4 *)&local_1b0->field0_0x0;
    uStack_12c = *(undefined4 *)((longlong)&local_1b0->field0_0x0 + 4);
    uStack_128 = *(undefined4 *)((longlong)&local_1b0->field0_0x0 + 8);
    uStack_124 = *(undefined4 *)((longlong)&local_1b0->field0_0x0 + 0xc);
    local_120 = (local_1b0->field0_0x0)._s_0.Z;
    uVar9 = (**(code **)(*(longlong *)local_1c8 + 0x2c0))
                      (local_1c8.QuadPart,cVar18,param_1,&local_148);
    if (local_110.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_110.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_110.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_110.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
LAB_14785aad1:
  FCsvProfiler::EndStat("RaycastSingle",local_1d0.Bits);
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
      local_1c0.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_1c0.NameAndInfo.Index.Value = FVar20.Value;
      QueryPerformanceCounter(&local_1c8);
      local_1c0.StatData.Pad = (uchar  [8])(local_1c8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,&local_1c0);
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
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_1c0.NameAndInfo.Index.Value = local_178.ComparisonIndex.Value;
      local_1c0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c8);
      local_1c0.StatData.Pad = (uchar  [8])(local_1c8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,&local_1c0);
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
  return (bool)uVar9;
}

// RaycastTest @ 14785ba50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FGenericPhysicsInterface::RaycastTest
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,FCollisionResponseParams *param_6
          ,FCollisionObjectQueryParams *param_7)

{
  int *piVar1;
  UPhysicsQueryHandler *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  char cVar19;
  FName FVar20;
  undefined1 auStackY_328 [32];
  FRaycastSQAdditionalInputs local_2c8 [8];
  FColor_u_0 local_2c0;
  uint uStack_2bc;
  ECollisionChannel local_2b8;
  LARGE_INTEGER local_2b0;
  TVector<double>_u_0 local_2a8;
  TVector<double> *local_288;
  TVector<double> *local_280;
  FCollisionObjectQueryParams *local_278;
  FCollisionResponseParams *local_270;
  FName local_268;
  FName local_258;
  TVector<double>_u_0 local_248;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  double local_220;
  FHitResult local_218;
  ECollisionChannel local_118;
  FCollisionQueryParams local_110;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FCollisionObjectQueryParams local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2b0 = (LARGE_INTEGER)param_5;
  local_270 = param_6;
  local_278 = param_7;
  FVar13 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_2b8 = param_4;
  local_288 = param_3;
  local_280 = param_2;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_2a8._s_0,"STAT_Collision_SceneQueryTotal");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar12,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar5 = false;
  bVar8 = false;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  FVar17.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar11 = FVar20.Number;
  if ((FVar17.Bits == 0) && (uVar11 == 0)) {
LAB_14785bbd2:
    bVar6 = false;
    FVar20 = local_258;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c0._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.Bits = FVar17.Bits;
        uStack_2bc = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_2c0._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3a0);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785bbd2;
    local_2c0.Bits = FVar17.Bits;
    uStack_2bc = uVar11;
    local_258 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
  }
  FVar14 = StatPtr_STAT_Collision_RaycastAny;
  if (StatPtr_STAT_Collision_RaycastAny ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_2a8._s_0,"STAT_Collision_RaycastAny");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastAny>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_RaycastAny,*pFVar12,
                        L"RaycastAny","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar3 = false;
  bVar7 = false;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar11 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar11 == 0)) {
LAB_14785bcef:
    bVar4 = false;
    FVar18 = local_268;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c0._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar3 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.Bits = FVar17.Bits;
        uStack_2bc = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_2c0._s_0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x3a1);
        bVar3 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785bcef;
    local_2c0.Bits = FVar17.Bits;
    uStack_2bc = uVar11;
    local_268 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar4 = true;
  }
  if (__CsvProfilerStat930 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastTest",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat930 = true;
  }
  local_2c0.Bits = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat("RaycastTest",_GCsvCategory_SceneQuery.Index,"CSV_RaycastTest");
  local_218.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_218.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_218.PhysMaterial.WeakPtr.ObjectIndex = 0;
  local_218.PhysMaterial.WeakPtr.ObjectSerialNumber = 0;
  local_218.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_218.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_218.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_218.HitObjectHandle.InstanceIndex = -1;
  local_218.HitObjectHandle.ResolutionStatus = Invalid;
  local_218.Component.WeakPtr.ObjectIndex = 0;
  local_218.Component.WeakPtr.ObjectSerialNumber = 0;
  local_218.PhysicsObjectOwner.WeakPtr.ObjectIndex = 0;
  local_218.PhysicsObjectOwner.WeakPtr.ObjectSerialNumber = 0;
  local_218.BoneName.ComparisonIndex.Value = 0;
  local_218.BoneName.Number = 0;
  local_218.MyBoneName.ComparisonIndex.Value = 0;
  local_218.MyBoneName.Number = 0;
  if ((param_1 == (UWorld *)0x0) || (param_1->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    uVar10 = 0;
    goto LAB_14785bf70;
  }
  if (*(char *)(param_1->PhysicsScene->_padding_ + 0x271) == '\0') {
LAB_14785bdb7:
    cVar19 = '\0';
  }
  else {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = IsInParallelGameThread();
      if (!bVar9) goto LAB_14785bdb7;
    }
    cVar19 = '\x01';
  }
  pUVar2 = (param_1->PhysicsQueryHandler).field0_0x0.DebugPtr;
  if (pUVar2 == (UPhysicsQueryHandler *)0x0) {
    local_248._s_0.Z = (local_288->field0_0x0)._s_0.Z;
    local_248._s_0.X = (local_288->field0_0x0)._s_0.X;
    local_248._s_0.Y = (local_288->field0_0x0)._s_0.Y;
    if (cVar19 == '\0') {
      local_2a8._s_0.X = local_248._s_0.X;
      local_2a8._s_0.Y = local_248._s_0.Y;
      local_2a8._s_0.Z = local_248._s_0.Z;
      local_248._s_0.X = (local_280->field0_0x0)._s_0.X;
      local_248._s_0.Y = (local_280->field0_0x0)._s_0.Y;
      local_248._s_0.Z = (local_280->field0_0x0)._s_0.Z;
      uVar10 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,2>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                         (param_1,&local_218,local_2c8,(TVector<double> *)&local_248._s_0,
                          (TVector<double> *)&local_2a8._s_0,local_2b8,
                          (FCollisionQueryParams *)local_2b0,local_270,local_278,
                          (FDefaultAccelContainer *)local_2c8);
    }
    else {
      local_2a8._s_0.X = (local_280->field0_0x0)._s_0.X;
      local_2a8._s_0.Y = (local_280->field0_0x0)._s_0.Y;
      local_2a8._s_0.Z = (local_280->field0_0x0)._s_0.Z;
      uVar10 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,2>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                         (param_1,&local_218,local_2c8,(TVector<double> *)&local_2a8._s_0,
                          (TVector<double> *)&local_248._s_0,local_2b8,
                          (FCollisionQueryParams *)local_2b0,local_270,local_278,
                          (FDefaultAccelContainer *)local_2c8);
    }
  }
  else {
    local_118 = local_2b8;
    FCollisionQueryParams::FCollisionQueryParams(&local_110,(FCollisionQueryParams *)local_2b0);
    local_88 = *(undefined8 *)&(local_270->CollisionResponse).field0_0x0;
    uStack_80 = *(undefined8 *)((longlong)&(local_270->CollisionResponse).field0_0x0 + 8);
    local_78 = *(undefined8 *)((longlong)&(local_270->CollisionResponse).field0_0x0 + 0x10);
    uStack_70 = *(undefined8 *)((longlong)&(local_270->CollisionResponse).field0_0x0 + 0x18);
    local_68 = *local_278;
    local_248._s_0.X = (local_280->field0_0x0)._s_0.X;
    local_248._s_0.Y = (local_280->field0_0x0)._s_0.Y;
    local_248._s_0.Z = (local_280->field0_0x0)._s_0.Z;
    local_230 = *(undefined4 *)&local_288->field0_0x0;
    uStack_22c = *(undefined4 *)((longlong)&local_288->field0_0x0 + 4);
    uStack_228 = *(undefined4 *)((longlong)&local_288->field0_0x0 + 8);
    uStack_224 = *(undefined4 *)((longlong)&local_288->field0_0x0 + 0xc);
    local_220 = (local_288->field0_0x0)._s_0.Z;
    uVar10 = (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,cVar19,param_1,&local_248);
    if (local_110.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_110.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_110.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_110.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
LAB_14785bf70:
  FCsvProfiler::EndStat("RaycastTest",local_2c0.Bits);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_2a8._s_0.Y =
           (double)(CONCAT44(FVar18.Number,local_268.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_2b0);
      local_2a8._s_0.X = (double)(local_2b0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_2a8._s_0);
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
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_2a8._s_0.Y =
           (double)(CONCAT44(FVar20.Number,local_258.ComparisonIndex.Value.Value) &
                    0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_2b0);
      local_2a8._s_0.X = (double)(local_2b0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)&local_2a8._s_0);
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
  return (bool)uVar10;
}

