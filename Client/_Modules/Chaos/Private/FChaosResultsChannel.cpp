// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// SetPrevNextDataHelper<1> @ 143ae7e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FChaosResultsChannel::SetPrevNextDataHelper<1>
          (FChaosResultsChannel *this,FPullPhysicsData *param_1)

{
  int *piVar1;
  int iVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  FProxyInterpolationBase *pFVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy> FVar9;
  FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy> FVar10;
  FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_RigidResimTargets> FVar14;
  FDirtyRigidParticleData *this_00;
  FNameEntryId FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FDirtyRigidParticleData *pFVar20;
  FDirtyRigidParticleData *pFVar21;
  bool bVar22;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar9 = StatPtr_STAT_ProcessSingleProxy;
  if (StatPtr_STAT_ProcessSingleProxy == (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)0x0)
  {
    pFVar8 = ::FName::FName(&local_res10,"STAT_ProcessSingleProxy");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessSingleProxy,*pFVar8,
                       L"Process Single Particle Proxies","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar9;
  bVar6 = false;
  bVar5 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar7 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar7 == 0)) {
    SetPrevNextDataHelperTyped<1,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData>
              (this,&param_1->DirtyRigids,
               (TArray<Chaos::FChaosRigidInterpolationData,TSizedDefaultAllocator<32>_> *)this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x88);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar22 = FThreadStats::bPrimaryEnable == false;
    if (bVar22) {
      FVar16.ComparisonIndex.Value = 0;
      FVar16.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar6 = false;
    }
    SetPrevNextDataHelperTyped<1,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData>
              (this,&param_1->DirtyRigids,
               (TArray<Chaos::FChaosRigidInterpolationData,TSizedDefaultAllocator<32>_> *)this);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar22) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_48.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
        local_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_res8);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_48);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
  }
  FVar10 = StatPtr_STAT_ProcessGCProxy;
  if (StatPtr_STAT_ProcessGCProxy == (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_ProcessGCProxy");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessGCProxy,*pFVar8,
                        L"Process Geometry Collections Proxies","STATGROUP_Chaos","STATCAT_Advanced"
                        ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar6 = false;
  bVar5 = false;
  FVar15 = FVar17.ComparisonIndex.Value;
  uVar7 = FVar17.Number;
  if ((FVar15.Value == 0) && (uVar7 == 0)) {
    SetPrevNextDataHelperTyped<1,Chaos::FDirtyGeometryCollectionData,Chaos::FChaosGeometryCollectionInterpolationData>
              (this,&param_1->DirtyGeometryCollections,
               &(this->Results).GeometryCollectionInterpolations);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x8d);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar22 = FThreadStats::bPrimaryEnable == false;
    if (bVar22) {
      FVar17.ComparisonIndex.Value = 0;
      FVar17.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = false;
    }
    SetPrevNextDataHelperTyped<1,Chaos::FDirtyGeometryCollectionData,Chaos::FChaosGeometryCollectionInterpolationData>
              (this,&param_1->DirtyGeometryCollections,
               &(this->Results).GeometryCollectionInterpolations);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((!bVar22) && (FVar17 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_48.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
        local_48.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_res8);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_48);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
  }
  FVar11 = StatPtr_STAT_ProcessClusterUnionProxy;
  if (StatPtr_STAT_ProcessClusterUnionProxy ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_ProcessClusterUnionProxy");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessClusterUnionProxy,*pFVar8,
                        L"Process Cluster Union Proxies","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar5 = false;
  bVar6 = false;
  FVar15 = FVar18.ComparisonIndex.Value;
  uVar7 = FVar18.Number;
  if ((FVar15.Value == 0) && (uVar7 == 0)) {
    SetPrevNextDataHelperTyped<1,Chaos::FDirtyClusterUnionData,Chaos::FChaosClusterUnionInterpolationData>
              (this,&param_1->DirtyClusterUnions,&(this->Results).ClusterUnionInterpolations);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x92);
        bVar5 = true;
        bVar6 = true;
      }
    }
    bVar22 = FThreadStats::bPrimaryEnable == false;
    if (bVar22) {
      FVar18.ComparisonIndex.Value = 0;
      FVar18.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
    }
    SetPrevNextDataHelperTyped<1,Chaos::FDirtyClusterUnionData,Chaos::FChaosClusterUnionInterpolationData>
              (this,&param_1->DirtyClusterUnions,&(this->Results).ClusterUnionInterpolations);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar22) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_48.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
        local_48.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_res8);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_48);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
  }
  FVar14 = StatPtr_STAT_RigidResimTargets;
  if (StatPtr_STAT_RigidResimTargets == (FThreadSafeStaticStat<FStat_STAT_RigidResimTargets>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_RigidResimTargets");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_RigidResimTargets>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidResimTargets,*pFVar8,
                        L"Process Rigid Resim Targets","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar5 = false;
  bVar6 = false;
  FVar15 = FVar19.ComparisonIndex.Value;
  uVar7 = FVar19.Number;
  if ((FVar15.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x98);
        bVar5 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar22 = true;
      goto LAB_143ae8574;
    }
  }
  bVar22 = false;
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
LAB_143ae8574:
  iVar2 = (param_1->DirtyRigids).ArrayNum;
  pFVar21 = (FDirtyRigidParticleData *)(param_1->DirtyRigids).AllocatorInstance.Data;
  pFVar20 = pFVar21 + iVar2;
  while( true ) {
    if ((param_1->DirtyRigids).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FDirtyRigidParticleData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar21 == pFVar20) break;
    if (((*(char **)&pFVar21->field_0x8 != (char *)0x0) && (**(char **)&pFVar21->field_0x8 == '\0'))
       && ((pFVar3 = *(FSingleParticlePhysicsProxy **)pFVar21,
           pFVar3 != (FSingleParticlePhysicsProxy *)0x0 &&
           ((pFVar4 = (pFVar3->InterpolationData).Ptr, pFVar4 != (FProxyInterpolationBase *)0x0 &&
            (pFVar4->InterpChannel_External == this->ChannelIdx)))))) {
      this_00 = TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
                ::Find((TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
                        *)&this->ParticleToResimTarget,pFVar3);
      if (this_00 != (FDirtyRigidParticleData *)0x0) {
        FDirtyRigidParticleData::operator=(this_00,pFVar21);
      }
    }
    pFVar21 = pFVar21 + 1;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// SetPrevNextDataHelper<0> @ 143ae8640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FChaosResultsChannel::SetPrevNextDataHelper<0>
          (FChaosResultsChannel *this,FPullPhysicsData *param_1)

{
  int *piVar1;
  TArray<Chaos::FChaosGeometryCollectionInterpolationData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  longlong lVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  FProxyInterpolationBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy> FVar14;
  FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy> FVar18;
  FThreadSafeStaticStat<FStat_STAT_RigidResimTargets> FVar19;
  FDirtyRigidParticleData *this_00;
  FName FVar20;
  FName FVar21;
  FDirtyGeometryCollectionData *pFVar22;
  FDirtyClusterUnionData *pFVar23;
  FDirtyRigidParticleData *pFVar24;
  FDirtyGeometryCollectionData *this_01;
  FDirtyClusterUnionData *pFVar25;
  FDirtyClusterUnionData *this_02;
  FDirtyRigidParticleData *pFVar26;
  FDirtyGeometryCollectionData *pFVar27;
  bool bVar28;
  FName local_res18;
  undefined1 local_res20 [8];
  undefined1 local_138;
  undefined1 local_137 [3];
  FColor_u_0 local_134;
  FColor_u_0 local_130;
  FColor_u_0 local_12c;
  FColor_u_0 local_128 [2];
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_e8;
  FName local_d8;
  FName local_c8;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  FVar14 = StatPtr_STAT_ProcessSingleProxy;
  if (StatPtr_STAT_ProcessSingleProxy == (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)0x0)
  {
    pFVar13 = ::FName::FName(&local_70,"STAT_ProcessSingleProxy");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessSingleProxy,*pFVar13,
                        L"Process Single Particle Proxies","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar8 = false;
  bVar9 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
    SetPrevNextDataHelperTyped<0,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData>
              (this,&param_1->DirtyRigids,
               (TArray<Chaos::FChaosRigidInterpolationData,TSizedDefaultAllocator<32>_> *)this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_134.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_134._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_120.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x88);
        bVar8 = true;
        bVar9 = true;
      }
    }
    bVar28 = FThreadStats::bPrimaryEnable != false;
    FVar20 = local_f8;
    if (bVar28) {
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      FVar20 = FVar21;
    }
    SetPrevNextDataHelperTyped<0,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData>
              (this,&param_1->DirtyRigids,
               (TArray<Chaos::FChaosRigidInterpolationData,TSizedDefaultAllocator<32>_> *)this);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar28) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_a0.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
        local_a0.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_b8);
        local_a0.StatData.Pad[4] = '\0';
        local_a0.StatData.Pad[5] = '\0';
        local_a0.StatData.Pad[6] = '\0';
        local_a0.StatData.Pad[7] = '\0';
        local_a0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
        local_a0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
        local_a0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
        local_a0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_a0);
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
  }
  FVar15 = StatPtr_STAT_ProcessGCProxy;
  if (StatPtr_STAT_ProcessGCProxy == (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)0x0) {
    pFVar13 = ::FName::FName(&local_68,"STAT_ProcessGCProxy");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessGCProxy,*pFVar13,
                        L"Process Geometry Collections Proxies","STATGROUP_Chaos","STATCAT_Advanced"
                        ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  bVar28 = false;
  bVar8 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_143ae89af:
    bVar28 = bVar10;
    bVar8 = bVar9;
    bVar9 = false;
    local_110 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar28 = false;
      bVar8 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_118.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x8d);
        bVar28 = true;
        bVar8 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ae89af;
    local_110 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar9 = true;
  }
  pTVar2 = &(this->Results).GeometryCollectionInterpolations;
  iVar3 = (param_1->DirtyGeometryCollections).ArrayNum;
  pFVar22 = (FDirtyGeometryCollectionData *)
            (param_1->DirtyGeometryCollections).AllocatorInstance.Data;
  pFVar27 = pFVar22 + iVar3;
  while( true ) {
    if ((param_1->DirtyGeometryCollections).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::FDirtyGeometryCollectionData_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    FVar21 = local_110;
    if (pFVar22 == pFVar27) break;
    if (((((char *)pFVar22->_padding_ != (char *)0x0) && (*(char *)pFVar22->_padding_ == '\0')) &&
        (pFVar22->_padding_ != 0)) &&
       ((lVar4 = *(longlong *)(pFVar22->_padding_ + 0x860), lVar4 != 0 &&
        (*(int *)(lVar4 + 0xc) == this->ChannelIdx)))) {
      uVar11 = *(uint *)(lVar4 + 8);
      if (uVar11 == 0xffffffff) {
        uVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40,8,1,&pTVar2->AllocatorInstance,
                            &(this->Results).GeometryCollectionInterpolations.ArrayNum,
                            &(this->Results).GeometryCollectionInterpolations.ArrayMax);
        DefaultConstructItems<Chaos::FChaosGeometryCollectionInterpolationData,int>
                  ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x40,1);
        *(uint *)(lVar4 + 8) = uVar11;
      }
      uVar12 = 0;
      if ((int)uVar11 < (this->Results).GeometryCollectionInterpolations.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = (FDirtyGeometryCollectionData *)
                ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x40);
      FDirtyGeometryCollectionData::operator=(this_01,pFVar22);
      FDirtyGeometryCollectionData::operator=(this_01 + 1,pFVar22);
    }
    pFVar22 = pFVar22 + 1;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_90.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_90);
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
  FVar18 = StatPtr_STAT_ProcessClusterUnionProxy;
  if (StatPtr_STAT_ProcessClusterUnionProxy ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)0x0) {
    pFVar13 = ::FName::FName(&local_60,"STAT_ProcessClusterUnionProxy");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessClusterUnionProxy,*pFVar13
                        ,L"Process Cluster Union Proxies","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_res18 = *(FName *)FVar18;
  bVar8 = false;
  bVar9 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  if ((local_res18.ComparisonIndex.Value.Value == 0) && (local_res18.Number == 0)) {
LAB_143ae8d06:
    bVar28 = false;
    local_res18 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_12c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_12c._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = local_res18.ComparisonIndex.Value.Value;
        local_108.Number = local_res18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x92);
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ae8d06;
    FThreadStats::AddMessage(local_res18,CycleScopeStart);
    bVar28 = true;
  }
  iVar3 = (param_1->DirtyClusterUnions).ArrayNum;
  pFVar23 = (FDirtyClusterUnionData *)(param_1->DirtyClusterUnions).AllocatorInstance.Data;
  pFVar25 = pFVar23 + iVar3;
  while( true ) {
    if ((param_1->DirtyClusterUnions).ArrayNum != iVar3) {
      local_138 = 0;
      `TCheckedPointerIterator<Chaos::FDirtyClusterUnionData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_138);
    }
    if (pFVar23 == pFVar25) break;
    if ((((char *)pFVar23->_padding_ != (char *)0x0) && (*(char *)pFVar23->_padding_ == '\0')) &&
       ((pFVar23->_padding_ != 0 &&
        ((lVar4 = *(longlong *)(pFVar23->_padding_ + 0x178), lVar4 != 0 &&
         (*(int *)(lVar4 + 0xc) == this->ChannelIdx)))))) {
      uVar11 = *(uint *)(lVar4 + 8);
      if (uVar11 == 0xffffffff) {
        uVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1e0,0x10,1,
                            &(this->Results).ClusterUnionInterpolations.AllocatorInstance,
                            &(this->Results).ClusterUnionInterpolations.ArrayNum,
                            &(this->Results).ClusterUnionInterpolations.ArrayMax);
        DefaultConstructItems<Chaos::FChaosClusterUnionInterpolationData,int>
                  ((this->Results).ClusterUnionInterpolations.AllocatorInstance.Data +
                   (longlong)(int)uVar11 * 0x1e0,1);
        *(uint *)(lVar4 + 8) = uVar11;
      }
      uVar12 = 0;
      if ((int)uVar11 < (this->Results).ClusterUnionInterpolations.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_02 = (FDirtyClusterUnionData *)
                ((this->Results).ClusterUnionInterpolations.AllocatorInstance.Data +
                (longlong)(int)uVar11 * 0x1e0);
      FDirtyClusterUnionData::operator=(this_02,pFVar23);
      FDirtyClusterUnionData::operator=(this_02 + 1,pFVar23);
    }
    pFVar23 = pFVar23 + 1;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar28) && (local_res18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_80.NameAndInfo.Index = local_res18.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = local_res18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_80);
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
  FVar19 = StatPtr_STAT_RigidResimTargets;
  if (StatPtr_STAT_RigidResimTargets == (FThreadSafeStaticStat<FStat_STAT_RigidResimTargets>)0x0) {
    pFVar13 = ::FName::FName(local_58,"STAT_RigidResimTargets");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_RigidResimTargets>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidResimTargets,*pFVar13,
                        L"Process Rigid Resim Targets","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar19;
  bVar8 = false;
  bVar9 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_100.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                   ,0x98);
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar28 = true;
      goto LAB_143ae905f;
    }
  }
  bVar28 = false;
  FVar21 = local_c8;
LAB_143ae905f:
  iVar3 = (param_1->DirtyRigids).ArrayNum;
  pFVar26 = (FDirtyRigidParticleData *)(param_1->DirtyRigids).AllocatorInstance.Data;
  pFVar24 = pFVar26 + iVar3;
  while( true ) {
    if ((param_1->DirtyRigids).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FDirtyRigidParticleData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_137);
    }
    if (pFVar26 == pFVar24) break;
    if (((*(char **)&pFVar26->field_0x8 != (char *)0x0) && (**(char **)&pFVar26->field_0x8 == '\0'))
       && ((pFVar5 = *(FSingleParticlePhysicsProxy **)pFVar26,
           pFVar5 != (FSingleParticlePhysicsProxy *)0x0 &&
           (((pFVar6 = (pFVar5->InterpolationData).Ptr, pFVar6 != (FProxyInterpolationBase *)0x0 &&
             (pFVar6->InterpChannel_External == this->ChannelIdx)) &&
            (this_00 = TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
                       ::Find((TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
                               *)&this->ParticleToResimTarget,pFVar5),
            this_00 != (FDirtyRigidParticleData *)0x0)))))) {
      FDirtyRigidParticleData::operator=(this_00,pFVar26);
    }
    pFVar26 = pFVar26 + 1;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// SetPrevNextDataHelperTyped<1,Chaos::FDirtyClusterUnionData,Chaos::FChaosClusterUnionInterpolationData> @ 143ae9130

void __thiscall
Chaos::FChaosResultsChannel::
SetPrevNextDataHelperTyped<1,Chaos::FDirtyClusterUnionData,Chaos::FChaosClusterUnionInterpolationData>
          (FChaosResultsChannel *this,
          TArray<Chaos::FDirtyClusterUnionData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FChaosClusterUnionInterpolationData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FClusterUnionPhysicsProxy *this_00;
  FProxyInterpolationBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  FDirtyClusterUnionData *pFVar9;
  FDirtyClusterUnionData *pFVar10;
  undefined1 local_res20 [8];
  
  pFVar10 = (FDirtyClusterUnionData *)(param_1->AllocatorInstance).Data;
  uVar2 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)uVar2;
  pFVar9 = pFVar10 + uVar8;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::FDirtyClusterUnionData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar9) break;
    if (((((char *)pFVar10->_padding_ != (char *)0x0) && (*(char *)pFVar10->_padding_ == '\0')) &&
        (this_00 = (FClusterUnionPhysicsProxy *)pFVar10->_padding_,
        this_00 != (FClusterUnionPhysicsProxy *)0x0)) &&
       ((pFVar3 = (this_00->InterpolationData).Ptr, pFVar3 != (FProxyInterpolationBase *)0x0 &&
        (pFVar3->InterpChannel_External == this->ChannelIdx)))) {
      uVar6 = pFVar3->PullDataInterpIdx_External;
      piVar1 = &param_2->ArrayNum;
      if (uVar6 == 0xffffffff) {
        uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1e0,0x10,1,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
        DefaultConstructItems<Chaos::FChaosClusterUnionInterpolationData,int>
                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x1e0,1);
        pFVar3->PullDataInterpIdx_External = uVar6;
        uVar7 = 0;
        if ((int)uVar6 < *piVar1) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FClusterUnionPhysicsProxy::BufferPhysicsResults_External
                  (this_00,(FDirtyClusterUnionData *)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x1e0));
      }
      uVar7 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FDirtyClusterUnionData::operator=
                ((FDirtyClusterUnionData *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x1e0 + 0xf0),pFVar10);
    }
    pFVar10 = pFVar10 + 1;
    uVar8 = (ulonglong)uVar2;
  }
  return;
}

// SetPrevNextDataHelperTyped<1,Chaos::FDirtyGeometryCollectionData,Chaos::FChaosGeometryCollectionInterpolationData> @ 143ae9340

void __thiscall
Chaos::FChaosResultsChannel::
SetPrevNextDataHelperTyped<1,Chaos::FDirtyGeometryCollectionData,Chaos::FChaosGeometryCollectionInterpolationData>
          (FChaosResultsChannel *this,
          TArray<Chaos::FDirtyGeometryCollectionData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FChaosGeometryCollectionInterpolationData,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  uint uVar2;
  FGeometryCollectionPhysicsProxy *this_00;
  FProxyInterpolationBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  FDirtyGeometryCollectionData *pFVar9;
  FDirtyGeometryCollectionData *pFVar10;
  undefined1 local_res20 [8];
  
  uVar2 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)uVar2;
  pFVar9 = (FDirtyGeometryCollectionData *)(param_1->AllocatorInstance).Data;
  pFVar10 = pFVar9 + uVar8;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::FDirtyGeometryCollectionData_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if (pFVar9 == pFVar10) break;
    if (((((char *)pFVar9->_padding_ != (char *)0x0) && (*(char *)pFVar9->_padding_ == '\0')) &&
        (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar9->_padding_,
        this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) &&
       ((pFVar3 = (this_00->InterpolationData).Ptr, pFVar3 != (FProxyInterpolationBase *)0x0 &&
        (pFVar3->InterpChannel_External == this->ChannelIdx)))) {
      uVar6 = pFVar3->PullDataInterpIdx_External;
      piVar1 = &param_2->ArrayNum;
      if (uVar6 == 0xffffffff) {
        uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,8,1,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
        DefaultConstructItems<Chaos::FChaosGeometryCollectionInterpolationData,int>
                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x40,1);
        pFVar3->PullDataInterpIdx_External = uVar6;
        uVar7 = 0;
        if ((int)uVar6 < *piVar1) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FGeometryCollectionPhysicsProxy::BufferPhysicsResults_External
                  (this_00,(FDirtyGeometryCollectionData *)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x40));
      }
      uVar7 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FDirtyGeometryCollectionData::operator=
                ((FDirtyGeometryCollectionData *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x40 + 0x20),pFVar9);
    }
    pFVar9 = pFVar9 + 1;
    uVar8 = (ulonglong)uVar2;
  }
  return;
}

// SetPrevNextDataHelperTyped<1,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData> @ 143ae9550

void __thiscall
Chaos::FChaosResultsChannel::
SetPrevNextDataHelperTyped<1,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData>
          (FChaosResultsChannel *this,
          TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FChaosRigidInterpolationData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FSingleParticlePhysicsProxy *this_00;
  FProxyInterpolationBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  FDirtyRigidParticleData *pFVar9;
  FDirtyRigidParticleData *pFVar10;
  undefined1 local_res20 [8];
  
  pFVar10 = (FDirtyRigidParticleData *)(param_1->AllocatorInstance).Data;
  uVar2 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)uVar2;
  pFVar9 = pFVar10 + uVar8;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::FDirtyRigidParticleData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar9) break;
    if ((((*(char **)&pFVar10->field_0x8 != (char *)0x0) && (**(char **)&pFVar10->field_0x8 == '\0')
         ) && (this_00 = *(FSingleParticlePhysicsProxy **)pFVar10,
              this_00 != (FSingleParticlePhysicsProxy *)0x0)) &&
       ((pFVar3 = (this_00->InterpolationData).Ptr, pFVar3 != (FProxyInterpolationBase *)0x0 &&
        (pFVar3->InterpChannel_External == this->ChannelIdx)))) {
      uVar6 = pFVar3->PullDataInterpIdx_External;
      piVar1 = &param_2->ArrayNum;
      if (uVar6 == 0xffffffff) {
        uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x120,0x10,1,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
        DefaultConstructItems<Chaos::FChaosRigidInterpolationData,int>
                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x120,1);
        pFVar3->PullDataInterpIdx_External = uVar6;
        uVar7 = 0;
        if ((int)uVar6 < *piVar1) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FSingleParticlePhysicsProxy::BufferPhysicsResults_External
                  (this_00,(FDirtyRigidParticleData *)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x120));
      }
      uVar7 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FDirtyRigidParticleData::operator=
                ((FDirtyRigidParticleData *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x120 + 0x90),pFVar10);
    }
    pFVar10 = pFVar10 + 1;
    uVar8 = (ulonglong)uVar2;
  }
  return;
}

// SetPrevNextDataHelperTyped<0,Chaos::FDirtyClusterUnionData,Chaos::FChaosClusterUnionInterpolationData> @ 143ae9770

void __thiscall
Chaos::FChaosResultsChannel::
SetPrevNextDataHelperTyped<0,Chaos::FDirtyClusterUnionData,Chaos::FChaosClusterUnionInterpolationData>
          (FChaosResultsChannel *this,
          TArray<Chaos::FDirtyClusterUnionData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FChaosClusterUnionInterpolationData,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FDirtyClusterUnionData *pFVar7;
  FDirtyClusterUnionData *this_00;
  FDirtyClusterUnionData *pFVar8;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (FDirtyClusterUnionData *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FDirtyClusterUnionData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    if (((((char *)pFVar7->_padding_ != (char *)0x0) && (*(char *)pFVar7->_padding_ == '\0')) &&
        (pFVar7->_padding_ != 0)) &&
       ((lVar2 = *(longlong *)(pFVar7->_padding_ + 0x178), lVar2 != 0 &&
        (*(int *)(lVar2 + 0xc) == this->ChannelIdx)))) {
      uVar5 = *(uint *)(lVar2 + 8);
      if (uVar5 == 0xffffffff) {
        uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1e0,0x10,1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        DefaultConstructItems<Chaos::FChaosClusterUnionInterpolationData,int>
                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x1e0,1);
        *(uint *)(lVar2 + 8) = uVar5;
      }
      uVar6 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = (FDirtyClusterUnionData *)
                ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x1e0);
      FDirtyClusterUnionData::operator=(this_00,pFVar7);
      FDirtyClusterUnionData::operator=(this_00 + 1,pFVar7);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// SetPrevNextDataHelperTyped<0,Chaos::FDirtyGeometryCollectionData,Chaos::FChaosGeometryCollectionInterpolationData> @ 143ae9900

void __thiscall
Chaos::FChaosResultsChannel::
SetPrevNextDataHelperTyped<0,Chaos::FDirtyGeometryCollectionData,Chaos::FChaosGeometryCollectionInterpolationData>
          (FChaosResultsChannel *this,
          TArray<Chaos::FDirtyGeometryCollectionData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FChaosGeometryCollectionInterpolationData,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FDirtyGeometryCollectionData *pFVar7;
  FDirtyGeometryCollectionData *pFVar8;
  FDirtyGeometryCollectionData *this_00;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (FDirtyGeometryCollectionData *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FDirtyGeometryCollectionData_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    if (((((char *)pFVar7->_padding_ != (char *)0x0) && (*(char *)pFVar7->_padding_ == '\0')) &&
        (pFVar7->_padding_ != 0)) &&
       ((lVar2 = *(longlong *)(pFVar7->_padding_ + 0x860), lVar2 != 0 &&
        (*(int *)(lVar2 + 0xc) == this->ChannelIdx)))) {
      uVar5 = *(uint *)(lVar2 + 8);
      if (uVar5 == 0xffffffff) {
        uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,8,1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        DefaultConstructItems<Chaos::FChaosGeometryCollectionInterpolationData,int>
                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x40,1);
        *(uint *)(lVar2 + 8) = uVar5;
      }
      uVar6 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = (FDirtyGeometryCollectionData *)
                ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x40);
      FDirtyGeometryCollectionData::operator=(this_00,pFVar7);
      FDirtyGeometryCollectionData::operator=(this_00 + 1,pFVar7);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// SetPrevNextDataHelperTyped<0,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData> @ 143ae9a90

void __thiscall
Chaos::FChaosResultsChannel::
SetPrevNextDataHelperTyped<0,Chaos::FDirtyRigidParticleData,Chaos::FChaosRigidInterpolationData>
          (FChaosResultsChannel *this,
          TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FChaosRigidInterpolationData,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FDirtyRigidParticleData *pFVar7;
  FDirtyRigidParticleData *pFVar8;
  FDirtyRigidParticleData *this_00;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (FDirtyRigidParticleData *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FDirtyRigidParticleData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    if ((((*(char **)&pFVar7->field_0x8 != (char *)0x0) && (**(char **)&pFVar7->field_0x8 == '\0'))
        && (*(longlong *)pFVar7 != 0)) &&
       ((lVar2 = *(longlong *)(*(longlong *)pFVar7 + 0x60), lVar2 != 0 &&
        (*(int *)(lVar2 + 0xc) == this->ChannelIdx)))) {
      uVar5 = *(uint *)(lVar2 + 8);
      if (uVar5 == 0xffffffff) {
        uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x120,0x10,1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        DefaultConstructItems<Chaos::FChaosRigidInterpolationData,int>
                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x120,1);
        *(uint *)(lVar2 + 8) = uVar5;
      }
      uVar6 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = (FDirtyRigidParticleData *)
                ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x120);
      FDirtyRigidParticleData::operator=(this_00,pFVar7);
      FDirtyRigidParticleData::operator=(this_00 + 1,pFVar7);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// ~FChaosResultsChannel @ 143afcc30

void __thiscall Chaos::FChaosResultsChannel::~FChaosResultsChannel(FChaosResultsChannel *this)

{
  FPullPhysicsData *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Results).Prev;
  if (pFVar1 != (FPullPhysicsData *)0x0) {
    FChaosResultsManager::FreePullData_External(this->ResultsManager,pFVar1,this->ChannelIdx);
  }
  pFVar1 = (this->Results).Next;
  if (pFVar1 != (FPullPhysicsData *)0x0) {
    FChaosResultsManager::FreePullData_External(this->ResultsManager,pFVar1,this->ChannelIdx);
  }
  *(undefined4 *)&(this->ParticleToResimTarget).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ParticleToResimTarget).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParticleToResimTarget);
  FChaosInterpolationResults::~FChaosInterpolationResults(&this->Results);
  return;
}

// AdvanceResult @ 143b13370

bool __thiscall Chaos::FChaosResultsChannel::AdvanceResult(FChaosResultsChannel *this)

{
  int iVar1;
  FPullPhysicsData *pFVar2;
  FProxyInterpolationBase *pFVar3;
  FPullPhysicsData *pFVar4;
  FDirtyRigidParticleData *this_00;
  uint uVar5;
  FDirtyRigidParticleData *pFVar6;
  FDirtyRigidParticleData *pFVar7;
  double dVar8;
  undefined1 local_res8 [8];
  FSingleParticlePhysicsProxy *local_res10;
  
  pFVar4 = FChaosResultsManager::PopPullData_External(this->ResultsManager,this->ChannelIdx);
  if (pFVar4 == (FPullPhysicsData *)0x0) {
    return false;
  }
  pFVar2 = (this->Results).Prev;
  if (pFVar2 != (FPullPhysicsData *)0x0) {
    FChaosResultsManager::FreePullData_External(this->ResultsManager,pFVar2,this->ChannelIdx);
  }
  pFVar2 = (this->Results).Next;
  (this->Results).Prev = pFVar2;
  SetPrevNextDataHelper<0>(this,pFVar2);
  pFVar2 = (this->Results).Prev;
  (this->Results).Next = pFVar4;
  if (0 < *(int *)&(pFVar2->DirtyRigidErrors).field_0x8 -
          *(int *)&(pFVar2->DirtyRigidErrors).field_0x34) {
    TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
    ::Append<FDefaultSetAllocator>(&pFVar4->DirtyRigidErrors,&pFVar2->DirtyRigidErrors);
  }
  if (pFVar4->ExternalEndTime <= this->LatestTimeSeen) {
    pFVar2 = (this->Results).Next;
    iVar1 = (pFVar2->DirtyRigids).ArrayNum;
    pFVar6 = (FDirtyRigidParticleData *)(pFVar2->DirtyRigids).AllocatorInstance.Data;
    pFVar7 = pFVar6 + iVar1;
    while( true ) {
      if ((pFVar2->DirtyRigids).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FDirtyRigidParticleData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      if (*(char **)&pFVar6->field_0x8 == (char *)0x0) {
        local_res10 = (FSingleParticlePhysicsProxy *)0x0;
LAB_143b134c4:
        pFVar6 = pFVar6 + 1;
      }
      else {
        local_res10 = (FSingleParticlePhysicsProxy *)0x0;
        if (**(char **)&pFVar6->field_0x8 == '\0') {
          local_res10 = *(FSingleParticlePhysicsProxy **)pFVar6;
        }
        if (((local_res10 == (FSingleParticlePhysicsProxy *)0x0) ||
            (pFVar3 = (local_res10->InterpolationData).Ptr, pFVar3 == (FProxyInterpolationBase *)0x0
            )) || (pFVar3->InterpChannel_External != this->ChannelIdx)) goto LAB_143b134c4;
        uVar5 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        this_00 = TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
                  ::FindOrAddImpl<Chaos::FSingleParticlePhysicsProxy_*_const_&>
                            ((TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
                              *)&this->ParticleToResimTarget,uVar5 >> 0x10 ^ uVar5,&local_res10);
        FDirtyRigidParticleData::operator=(this_00,pFVar6);
        pFVar6 = pFVar6 + 1;
      }
    }
  }
  dVar8 = this->LatestTimeSeen;
  if (this->LatestTimeSeen <= pFVar4->ExternalEndTime) {
    dVar8 = pFVar4->ExternalEndTime;
  }
  this->LatestTimeSeen = dVar8;
  return true;
}

// CollapseResultsToLatest @ 143b18430

void __thiscall Chaos::FChaosResultsChannel::CollapseResultsToLatest(FChaosResultsChannel *this)

{
  bool bVar1;
  FPullPhysicsData *pFVar2;
  
  if ((this->Results).Next == (FPullPhysicsData *)0x0) {
    pFVar2 = FChaosResultsManager::PopPullData_External(this->ResultsManager,this->ChannelIdx);
    (this->Results).Next = pFVar2;
  }
  do {
    bVar1 = AdvanceResult(this);
  } while (bVar1);
  return;
}

// ProcessResimResult_External @ 143b2c6d0

void __thiscall Chaos::FChaosResultsChannel::ProcessResimResult_External(FChaosResultsChannel *this)

{
  int iVar1;
  FPullPhysicsData *pFVar2;
  FProxyInterpolationBase *pFVar3;
  uint uVar4;
  FDirtyRigidParticleData *this_00;
  FDirtyRigidParticleData *pFVar5;
  FDirtyRigidParticleData *pFVar6;
  undefined1 local_res8 [8];
  FSingleParticlePhysicsProxy *local_res10;
  
  pFVar2 = (this->Results).Next;
  iVar1 = (pFVar2->DirtyRigids).ArrayNum;
  pFVar5 = (FDirtyRigidParticleData *)(pFVar2->DirtyRigids).AllocatorInstance.Data;
  pFVar6 = pFVar5 + iVar1;
  do {
    while( true ) {
      if ((pFVar2->DirtyRigids).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FDirtyRigidParticleData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) {
        return;
      }
      if (*(char **)&pFVar5->field_0x8 != (char *)0x0) break;
      local_res10 = (FSingleParticlePhysicsProxy *)0x0;
LAB_143b2c79f:
      pFVar5 = pFVar5 + 1;
    }
    local_res10 = (FSingleParticlePhysicsProxy *)0x0;
    if (**(char **)&pFVar5->field_0x8 == '\0') {
      local_res10 = *(FSingleParticlePhysicsProxy **)pFVar5;
    }
    if (((local_res10 == (FSingleParticlePhysicsProxy *)0x0) ||
        (pFVar3 = (local_res10->InterpolationData).Ptr, pFVar3 == (FProxyInterpolationBase *)0x0))
       || (pFVar3->InterpChannel_External != this->ChannelIdx)) goto LAB_143b2c79f;
    uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    this_00 = TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
              ::FindOrAddImpl<Chaos::FSingleParticlePhysicsProxy_*_const_&>
                        ((TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
                          *)&this->ParticleToResimTarget,uVar4 >> 0x10 ^ uVar4,&local_res10);
    FDirtyRigidParticleData::operator=(this_00,pFVar5);
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// PullAsyncPhysicsResults_External @ 143b2c930

FChaosInterpolationResults * __thiscall
Chaos::FChaosResultsChannel::PullAsyncPhysicsResults_External
          (FChaosResultsChannel *this,double param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  FChaosInterpolationResults *pFVar5;
  FPullPhysicsData *pFVar6;
  undefined4 uVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  
  if (param_1 < 0.0) {
    pFVar5 = UpdateInterpAlpha_External(this,param_1,__real_3ff0000000000000);
    return pFVar5;
  }
  pFVar6 = (this->Results).Next;
  if ((pFVar6 != (FPullPhysicsData *)0x0) && (param_1 <= pFVar6->ExternalEndTime)) {
    dVar8 = pFVar6->ExternalEndTime - pFVar6->ExternalStartTime;
    if (0.0 < dVar8) {
      dVar8 = (param_1 - pFVar6->ExternalStartTime) / dVar8;
      if (__real_3ff0000000000000 <= dVar8) {
        dVar8 = __real_3ff0000000000000;
      }
      pFVar5 = UpdateInterpAlpha_External(this,param_1,dVar8);
      return pFVar5;
    }
    pFVar5 = UpdateInterpAlpha_External(this,param_1,__real_3ff0000000000000);
    return pFVar5;
  }
  FChaosInterpolationResults::Reset(&this->Results);
  pFVar6 = (this->Results).Next;
  if (pFVar6 == (FPullPhysicsData *)0x0) {
    pFVar6 = FChaosResultsManager::PopPullData_External(this->ResultsManager,this->ChannelIdx);
    (this->Results).Next = pFVar6;
    if (pFVar6 == (FPullPhysicsData *)0x0) goto LAB_143b2ca3a;
  }
  if (pFVar6->ExternalEndTime <= param_1 && param_1 != pFVar6->ExternalEndTime) {
    do {
      bVar4 = AdvanceResult(this);
      if (!bVar4) break;
      pdVar1 = &((this->Results).Next)->ExternalEndTime;
    } while (*pdVar1 <= param_1 && param_1 != *pdVar1);
  }
LAB_143b2ca3a:
  if (((this->Results).Prev != (FPullPhysicsData *)0x0) &&
     ((this->Results).Next == (FPullPhysicsData *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7378659067549449853>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                       ,0x183,"Results.Prev == nullptr || Results.Next != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FChaosInterpolationResults *)(*pcVar3)();
      return pFVar5;
    }
  }
  dVar8 = __real_3ff0000000000000;
  pFVar6 = (this->Results).Next;
  uVar7 = SUB84(__real_3ff0000000000000,0);
  uVar9 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (pFVar6 != (FPullPhysicsData *)0x0) {
    SetPrevNextDataHelper<1>(this,pFVar6);
    pFVar6 = (this->Results).Next;
    dVar2 = pFVar6->ExternalStartTime;
    dVar10 = pFVar6->ExternalEndTime - dVar2;
    if (0.0 < dVar10) {
      dVar10 = (param_1 - dVar2) / dVar10;
      if (dVar8 <= dVar10) {
        dVar10 = dVar8;
      }
      uVar7 = SUB84(dVar10,0);
      uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
    }
  }
  pFVar5 = UpdateInterpAlpha_External(this,param_1,(double)CONCAT44(uVar9,uVar7));
  return pFVar5;
}

// PullSyncPhysicsResults_External @ 143b2cea0

FChaosInterpolationResults * __thiscall
Chaos::FChaosResultsChannel::PullSyncPhysicsResults_External(FChaosResultsChannel *this)

{
  bool bVar1;
  FPullPhysicsData *pFVar2;
  
  pFVar2 = (this->Results).Prev;
  if (pFVar2 != (FPullPhysicsData *)0x0) {
    FChaosResultsManager::FreePullData_External(this->ResultsManager,pFVar2,this->ChannelIdx);
    (this->Results).Prev = (FPullPhysicsData *)0x0;
  }
  FChaosInterpolationResults::Reset(&this->Results);
  if ((this->Results).Next == (FPullPhysicsData *)0x0) {
    pFVar2 = FChaosResultsManager::PopPullData_External(this->ResultsManager,this->ChannelIdx);
    (this->Results).Next = pFVar2;
  }
  do {
    bVar1 = AdvanceResult(this);
  } while (bVar1);
  pFVar2 = (this->Results).Next;
  if (pFVar2 != (FPullPhysicsData *)0x0) {
    SetPrevNextDataHelper<1>(this,pFVar2);
    (this->Results).Alpha = 1.0;
  }
  return &this->Results;
}

// UpdateInterpAlpha_External @ 143b48b90

FChaosInterpolationResults * __thiscall
Chaos::FChaosResultsChannel::UpdateInterpAlpha_External
          (FChaosResultsChannel *this,double param_1,double param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  TMap<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
  *pTVar9;
  bool bVar10;
  char cVar11;
  FChaosInterpolationResults *pFVar12;
  longlong lVar13;
  int iVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  FDirtyRigidParticleData *this_00;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_c8;
  int local_c0;
  int iStack_bc;
  ulonglong local_b8;
  TMap<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  longlong local_78;
  FSingleParticlePhysicsProxy *local_70;
  TMap<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_b0 = &this->ParticleToResimTarget;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_a0 = &(this->ParticleToResimTarget).field_0x10;
  local_c0 = 0;
  iStack_bc = 0;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  (this->Results).Alpha = (float)param_2;
  iVar4 = *(int *)&(this->ParticleToResimTarget).field_0x28;
  iStack_94 = iStack_a8;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->ParticleToResimTarget).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_a0;
    }
    uVar17 = *puVar19;
    local_90 = 0;
    iStack_a8 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_143b48c4d;
      uVar17 = puVar19[lVar13 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_80 = (int)lVar13;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar4 < iStack_94) {
      iStack_94 = iVar4;
    }
  }
LAB_143b48c4d:
  uVar17 = *(uint *)&(this->ParticleToResimTarget).field_0x28;
  iStack_88 = *(int *)&(this->ParticleToResimTarget).field_0x8 -
              *(int *)&(this->ParticleToResimTarget).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  iVar14 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_res20 = uVar17;
  iStack_8c = iStack_94;
  local_68 = local_b0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FChaosInterpolationResults *)(*pcVar8)();
    return pFVar12;
  }
  uVar5 = *(uint *)&(this->ParticleToResimTarget).field_0x28;
  if (uVar17 != uVar5) {
    puVar18 = *(undefined1 **)&(this->ParticleToResimTarget).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->ParticleToResimTarget).field_0x10;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar5;
      local_res20 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_143b48d60;
      uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_7c = (int)lVar13;
    uVar17 = local_7c + -1 + uVar16;
    local_res20 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_res20 = uVar5;
    }
  }
LAB_143b48d60:
  do {
    pTVar9 = local_68;
    if (*(int *)(&local_68->field_0x0 + 8) - *(int *)(&local_68->field_0x0 + 0x34) != (int)uStack_40
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar4 = local_c0;
    lVar13 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->ParticleToResimTarget).field_0x10)) &&
       (pTVar9 == &this->ParticleToResimTarget)) {
      pFVar2 = local_c8.Data + (longlong)local_c0 * 8;
      FVar15.Data = local_c8.Data;
      while( true ) {
        if (local_c0 != iVar4) {
          `TCheckedPointerIterator<Chaos::FSingleParticlePhysicsProxy_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (FVar15.Data == pFVar2) break;
        local_70 = *(FSingleParticlePhysicsProxy **)FVar15.Data;
        if (*(int *)&(this->ParticleToResimTarget).field_0x8 !=
            *(int *)&(this->ParticleToResimTarget).field_0x34) {
          uVar17 = ((uint)((ulonglong)local_70 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_70 >> 4))
                   * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          TSet<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>,FDefaultSetAllocator>
          ::RemoveImpl<Chaos::FSingleParticlePhysicsProxy_const_*>
                    ((TSet<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>,FDefaultSetAllocator>
                      *)&this->ParticleToResimTarget,uVar17 >> 0x10 ^ uVar17,&local_70);
        }
        FVar15.Data = FVar15.Data + 8;
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return &this->Results;
    }
    lVar6 = *(longlong *)&pTVar9->field_0x0;
    local_b8 = *(ulonglong *)(lVar13 * 0xb0 + lVar6);
    plVar7 = *(longlong **)(local_b8 + 0x60);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar11 = (**(code **)(*plVar7 + 0x10))(plVar7), cVar11 == '\0')) {
      if ((local_c8.Data <= (FScriptContainerElement *)&local_b8) &&
         (((FScriptContainerElement *)&local_b8 < local_c8.Data + (longlong)iStack_bc * 8 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FChaosInterpolationResults *)(*pcVar8)();
        return pFVar12;
      }
      if (local_c0 == iStack_bc) {
        local_c0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_c8,&iStack_bc);
      }
      lVar13 = (longlong)local_c0;
      local_c0 = local_c0 + 1;
      *(ulonglong *)(local_c8.Data + lVar13 * 8) = local_b8;
    }
    else if ((int)plVar7[1] == -1) {
      piVar1 = &(this->Results).RigidInterpolations.ArrayNum;
      uVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x120,0x10,1,(ForAnyElementType *)this,piVar1,
                          &(this->Results).RigidInterpolations.ArrayMax);
      local_78 = (longlong)(int)uVar16 * 0x120;
      DefaultConstructItems<Chaos::FChaosRigidInterpolationData,int>
                ((this->Results).RigidInterpolations.AllocatorInstance.Data + local_78,1);
      *(uint *)(plVar7 + 1) = uVar16;
      uVar17 = 0;
      if ((int)uVar16 < *piVar1) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FChaosInterpolationResults *)(*pcVar8)();
        return pFVar12;
      }
      this_00 = (FDirtyRigidParticleData *)
                ((this->Results).RigidInterpolations.AllocatorInstance.Data + local_78);
      FDirtyRigidParticleData::operator=
                (this_00 + 1,(FDirtyRigidParticleData *)(lVar6 + 0x10 + lVar13 * 0xb0));
      FDirtyRigidParticleData::operator=(this_00,this_00 + 1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_res20;
  } while( true );
}

