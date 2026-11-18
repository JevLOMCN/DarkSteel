// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GeomSweepMulti @ 14782e4d0

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
Chaos::Private::FGenericPhysicsInterface_Internal::GeomSweepMulti
          (UWorld *param_1,FCollisionShape *param_2,TQuat<double> *param_3,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,ECollisionChannel param_7,FCollisionQueryParams *param_8,
          FCollisionResponseParams *param_9,FCollisionObjectQueryParams *param_10)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  Type TVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar20;
  FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple_Internal> FVar21;
  uint *puVar22;
  FTlsAutoCleanup *pFVar23;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  uint uVar26;
  FNameEntryId FVar27;
  FName FVar28;
  FName FVar29;
  uint local_res10;
  uint uStackX_14;
  TQuat<double> *local_res18;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_res20;
  FDefaultAccelContainer local_188 [4];
  FColor_u_0 local_184;
  FColor_u_0 local_180 [2];
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_158;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  FStatMessage local_138;
  FStatMessage local_128;
  code *local_118;
  uint *local_110;
  FName local_108;
  FName local_100;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  FGeomSQAdditionalInputs local_b8 [2];
  
  TVar5 = param_2->ShapeType;
  local_res18 = param_3;
  local_res20 = param_4;
  if (TVar5 == Box) {
    if (((param_2->field1_0x4).Box.HalfExtentX <= __real_38d1b717) &&
       ((param_2->field1_0x4).Box.HalfExtentY <= __real_38d1b717)) {
      fVar2 = (param_2->field1_0x4).Box.HalfExtentZ;
      goto joined_r0x00014782e69b;
    }
  }
  else {
    if ((TVar5 != Sphere) && (TVar5 != Capsule)) goto LAB_14782e6a1;
    fVar2 = (param_2->field1_0x4).Box.HalfExtentX;
joined_r0x00014782e69b:
    if (fVar2 <= __real_38d1b717) {
LAB_14782e6a1:
      bVar16 = RaycastMulti(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
      return bVar16;
    }
  }
  bVar11 = false;
  bVar16 = false;
  FVar20 = StatPtr_STAT_Collision_SceneQueryTotal;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar19 = ::FName::FName(&local_108,"STAT_Collision_SceneQueryTotal");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar19,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar20;
  bVar13 = false;
  bVar15 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  FVar27 = FVar29.ComparisonIndex.Value;
  uVar26 = FVar29.Number;
  if ((FVar27.Value == 0) && (uVar26 == 0)) {
LAB_14782e6f1:
    bVar14 = false;
    FVar29 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_184.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar27.Value;
        local_178.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x5d1);
        bVar13 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14782e6f1;
    local_res10 = FVar27.Value;
    uStackX_14 = uVar26;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar14 = true;
  }
  FVar21 = StatPtr_STAT_Collision_GeomSweepMultiple_Internal;
  if (StatPtr_STAT_Collision_GeomSweepMultiple_Internal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple_Internal>)0x0) {
    pFVar19 = ::FName::FName(&local_100,"STAT_Collision_GeomSweepMultiple_Internal");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_Collision_GeomSweepMultiple_Internal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Collision_GeomSweepMultiple_Internal,*pFVar19,
                        L"GeomSweepMultipleInternal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar21;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar27 = FVar28.ComparisonIndex.Value;
  uVar26 = FVar28.Number;
  if ((FVar27.Value != 0) || (uVar26 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar27.Value;
        local_170.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x5d2);
        bVar11 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar27.Value;
      uStackX_14 = uVar26;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar11 = false;
      bVar12 = true;
      goto LAB_14782e81e;
    }
  }
  bVar12 = false;
  FVar28 = local_158;
LAB_14782e81e:
  if (__CsvProfilerStat1491 == false) {
    FCsvProfilerTrace::OutputInlineStat("GeomSweepMultiple_Internal",_GCsvCategory_SceneQuery.Index)
    ;
    __CsvProfilerStat1491 = true;
  }
  uVar26 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("GeomSweepMultiple_Internal",_GCsvCategory_SceneQuery.Index,
             "CSV_GeomSweepMultiple_Internal");
  puVar22 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_110 = &local_res10;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar23 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_118,puVar22);
  if ((*(int *)(pFVar23 + 2) < 1) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar17)) {
    pcVar6 = (code *)swi(3);
    uVar18 = (*pcVar6)();
    return (bool)uVar18;
  }
  if ((param_1 == (UWorld *)0x0) || (param_1->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar17 = false;
  }
  else {
    dVar3 = (param_6->field0_0x0)._s_0.Z;
    dVar7 = (param_6->field0_0x0)._s_0.X;
    dVar8 = (param_6->field0_0x0)._s_0.Y;
    dVar9 = (param_5->field0_0x0)._s_0.X;
    dVar10 = (param_5->field0_0x0)._s_0.Y;
    dVar4 = (param_5->field0_0x0)._s_0.Z;
    FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
              (&local_b8[0].ShapeAdapter,local_res18,param_2);
    local_f8._s_0.X = dVar7;
    local_f8._s_0.Y = dVar8;
    local_f8._s_0.Z = dVar3;
    local_d8._s_0.X = dVar9;
    local_d8._s_0.Y = dVar10;
    local_d8._s_0.Z = dVar4;
    local_b8[0].CollisionShape = param_2;
    bVar17 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                       (param_1,local_res20,local_b8,(TVector<double> *)&local_d8._s_0,
                        (TVector<double> *)&local_f8._s_0,param_7,param_8,param_9,param_10,local_188
                       );
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_b8[0].ShapeAdapter);
  }
  FCsvProfiler::EndStat("GeomSweepMultiple_Internal",uVar26);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar24 == (FThreadStats *)0x0) {
      pFVar25 = FThreadStatsPool::Get();
      pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
    }
    if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
      local_138.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_138.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_148);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_148.s.LowPart._0_1_;
      local_138.StatData.Pad[1] = local_148.s.LowPart._1_1_;
      local_138.StatData.Pad[2] = local_148.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_148.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar24,&local_138);
      piVar1 = &pFVar24->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar24,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar24,false,false);
      }
    }
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar14) && (FVar29 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar24 == (FThreadStats *)0x0) {
      pFVar25 = FThreadStatsPool::Get();
      pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
    }
    if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
      local_128.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
      local_128.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_128.StatData.Pad[4] = '\0';
      local_128.StatData.Pad[5] = '\0';
      local_128.StatData.Pad[6] = '\0';
      local_128.StatData.Pad[7] = '\0';
      local_128.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_128.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_128.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_128.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar24,&local_128);
      piVar1 = &pFVar24->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar24,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar24,false,false);
      }
    }
  }
  return bVar17;
}

// RaycastMulti @ 147859410

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
Chaos::Private::FGenericPhysicsInterface_Internal::RaycastMulti
          (UWorld *param_1,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,ECollisionChannel param_5,
          FCollisionQueryParams *param_6,FCollisionResponseParams *param_7,
          FCollisionObjectQueryParams *param_8)

{
  int *piVar1;
  code *pcVar2;
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
  FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple_Internal> FVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FName FVar21;
  uint local_res8;
  uint uStackX_c;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_res10;
  TVector<double> *local_res18;
  TVector<double> *local_res20;
  FDefaultAccelContainer local_118;
  FRaycastSQAdditionalInputs local_117 [3];
  FColor_u_0 local_114;
  FColor_u_0 local_110 [2];
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_e8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  FStatMessage local_c8;
  FStatMessage local_b8;
  code *local_a8;
  uint *local_a0;
  FName local_98;
  FName local_90;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName(&local_98,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar12;
  bVar5 = false;
  bVar8 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar19 = FVar21.ComparisonIndex.Value;
  uVar18 = FVar21.Number;
  if ((FVar19.Value == 0) && (uVar18 == 0)) {
LAB_14785955f:
    bVar6 = false;
    FVar21 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_114.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_114._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar19.Value;
        local_108.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x5e2);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14785955f;
    local_res8 = FVar19.Value;
    uStackX_c = uVar18;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar6 = true;
  }
  FVar13 = StatPtr_STAT_Collision_RaycastMultiple_Internal;
  if (StatPtr_STAT_Collision_RaycastMultiple_Internal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple_Internal>)0x0) {
    pFVar11 = ::FName::FName(&local_90,"STAT_Collision_RaycastMultiple_Internal");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_RaycastMultiple_Internal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Collision_RaycastMultiple_Internal,*pFVar11,
                        L"RaycastMultipleInternal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar3 = false;
  bVar7 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar19.Value;
        local_100.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x5e3);
        bVar3 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar19.Value;
      uStackX_c = uVar18;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar4 = true;
      goto LAB_147859682;
    }
  }
  bVar4 = false;
  FVar20 = local_e8;
LAB_147859682:
  if (__CsvProfilerStat1508 == false) {
    FCsvProfilerTrace::OutputInlineStat("RaycastMultiple_Internal",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1508 = true;
  }
  uVar18 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("RaycastMultiple_Internal",_GCsvCategory_SceneQuery.Index,
             "CSV_RaycastMultiple_Internal");
  puVar14 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_a0 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar15 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar14);
  if (*(int *)(pFVar15 + 2) < 1) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310308>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x124,"IsInPhysicsThreadContext()");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
  }
  if ((param_1 == (UWorld *)0x0) || (param_1->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else {
    local_88._s_0.X = (local_res20->field0_0x0)._s_0.X;
    local_88._s_0.Y = (local_res20->field0_0x0)._s_0.Y;
    local_88._s_0.Z = (local_res20->field0_0x0)._s_0.Z;
    local_68._s_0.X = (local_res18->field0_0x0)._s_0.X;
    local_68._s_0.Y = (local_res18->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (local_res18->field0_0x0)._s_0.Z;
    bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,1>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                      (param_1,local_res10,local_117,(TVector<double> *)&local_68._s_0,
                       (TVector<double> *)&local_88._s_0,param_5,param_6,param_7,param_8,&local_118)
    ;
  }
  FCsvProfiler::EndStat("RaycastMultiple_Internal",uVar18);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_c8.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d8);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_c8);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_b8.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_b8.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_b8);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return bVar9;
}

// SpherecastMulti @ 147874940

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
Chaos::Private::FGenericPhysicsInterface_Internal::SpherecastMulti
          (UWorld *param_1,float param_2,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,ECollisionChannel param_6,
          FCollisionQueryParams *param_7,FCollisionResponseParams *param_8,
          FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  code *pcVar2;
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
  FThreadSafeStaticStat<FStat_STAT_Collision_SpherecastMultiple_Internal> FVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FName FVar21;
  uint local_res8;
  uint uStackX_c;
  FDefaultAccelContainer local_1a8;
  FDefaultAccelContainer local_1a7;
  FRaycastSQAdditionalInputs local_1a6 [2];
  FColor_u_0 local_1a4;
  FColor_u_0 local_1a0 [2];
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_178;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  FCollisionShape local_158;
  FStatMessage local_148;
  FStatMessage local_138;
  code *local_128;
  uint *local_120;
  FName local_118;
  FName local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  FGeomSQAdditionalInputs local_88;
  
  FVar12 = StatPtr_STAT_Collision_SceneQueryTotal;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar11 = ::FName::FName(&local_118,"STAT_Collision_SceneQueryTotal");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar11,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar12;
  bVar5 = false;
  bVar8 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar19 = FVar21.ComparisonIndex.Value;
  uVar18 = FVar21.Number;
  if ((FVar19.Value == 0) && (uVar18 == 0)) {
LAB_147874a97:
    bVar6 = false;
    FVar21 = local_188;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar19.Value;
        local_198.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x5b2);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147874a97;
    local_res8 = FVar19.Value;
    uStackX_c = uVar18;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar6 = true;
  }
  FVar13 = StatPtr_STAT_Collision_SpherecastMultiple_Internal;
  if (StatPtr_STAT_Collision_SpherecastMultiple_Internal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SpherecastMultiple_Internal>)0x0) {
    pFVar11 = ::FName::FName(&local_110,"STAT_Collision_SpherecastMultiple_Internal");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collision_SpherecastMultiple_Internal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Collision_SpherecastMultiple_Internal,*pFVar11,
                        L"SpherecastMultipleInternal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar3 = false;
  bVar7 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar19.Value;
        local_190.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\SceneQuery.cpp"
                   ,0x5b3);
        bVar3 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar19.Value;
      uStackX_c = uVar18;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar4 = true;
      goto LAB_147874bba;
    }
  }
  bVar4 = false;
  FVar20 = local_178;
LAB_147874bba:
  if (__CsvProfilerStat1460 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("SpherecastMultiple_Internal",_GCsvCategory_SceneQuery.Index);
    __CsvProfilerStat1460 = true;
  }
  uVar18 = _GCsvCategory_SceneQuery.Index;
  FCsvProfiler::BeginStat
            ("SpherecastMultiple_Internal",_GCsvCategory_SceneQuery.Index,
             "CSV_SpherecastMultiple_Internal");
  puVar14 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_120 = &local_res8;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar15 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_128,puVar14);
  if (*(int *)(pFVar15 + 2) < 1) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310308>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x124,"IsInPhysicsThreadContext()");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
  }
  if ((param_1 == (UWorld *)0x0) || (param_1->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    bVar9 = false;
  }
  else if (param_2 <= __real_322bcc77) {
    local_c8._s_0.X = (param_5->field0_0x0)._s_0.X;
    local_c8._s_0.Y = (param_5->field0_0x0)._s_0.Y;
    local_c8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    local_a8._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,1>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                      (param_1,param_3,local_1a6,(TVector<double> *)&local_a8._s_0,
                       (TVector<double> *)&local_c8._s_0,param_6,param_7,param_8,param_9,&local_1a7)
    ;
  }
  else {
    local_158.ShapeType = Sphere;
    local_158.field1_0x4.Box.HalfExtentX = param_2;
    FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
              (&local_88.ShapeAdapter,&UE::Math::TQuat<double>::Identity,&local_158);
    local_88.CollisionShape = &local_158;
    local_108._s_0.X = (param_5->field0_0x0)._s_0.X;
    local_108._s_0.Y = (param_5->field0_0x0)._s_0.Y;
    local_108._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    local_e8._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_e8._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_e8._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    bVar9 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                      (param_1,param_3,&local_88,(TVector<double> *)&local_e8._s_0,
                       (TVector<double> *)&local_108._s_0,param_6,param_7,param_8,param_9,&local_1a8
                      );
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_88.ShapeAdapter);
  }
  FCsvProfiler::EndStat("SpherecastMultiple_Internal",uVar18);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_148.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_148.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_168);
      local_148.StatData.Pad[4] = '\0';
      local_148.StatData.Pad[5] = '\0';
      local_148.StatData.Pad[6] = '\0';
      local_148.StatData.Pad[7] = '\0';
      local_148.StatData.Pad[0] = local_168.s.LowPart._0_1_;
      local_148.StatData.Pad[1] = local_168.s.LowPart._1_1_;
      local_148.StatData.Pad[2] = local_168.s.LowPart._2_1_;
      local_148.StatData.Pad[3] = local_168.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_148);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_138.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_138.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_160);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_160.s.LowPart._0_1_;
      local_138.StatData.Pad[1] = local_160.s.LowPart._1_1_;
      local_138.StatData.Pad[2] = local_160.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_160.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_138);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return bVar9;
}

