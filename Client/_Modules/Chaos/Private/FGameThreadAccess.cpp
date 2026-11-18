// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// AddProxy @ 143b10950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::AddProxy
          (FGameThreadAccess *this,FThreadingProxy *param_1)

{
  int *piVar1;
  TArray<Chaos::Softs::FThreadingProxy_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDeformableSolver *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_AddProxy> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  bool bVar16;
  FThreadingProxy *pFStackX_10;
  FColor_u_0 aFStackX_18 [2];
  uint uStackX_20;
  uint uStackX_24;
  FName FStack_68;
  UObject *pUStack_60;
  LARGE_INTEGER LStack_58;
  FName FStack_50;
  FName FStack_48;
  FStatMessage FStack_38;
  
  pFVar4 = this->Solver;
  if (pFVar4 == (FDeformableSolver *)0x0) {
    return;
  }
  FVar12 = StatPtr_STAT_ChaosDeformableSolver_AddProxy;
  pFStackX_10 = param_1;
  if (StatPtr_STAT_ChaosDeformableSolver_AddProxy ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_AddProxy>)0x0) {
    pFVar11 = ::FName::FName(&FStack_50,"STAT_ChaosDeformableSolver_AddProxy");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_AddProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosDeformableSolver_AddProxy,
                        *pFVar11,L"Chaos.Deformable.Solver.AddProxy","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_68.ComparisonIndex.Value = FVar14.Value;
        FStack_68.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_68,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x91e);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      uStackX_20 = FVar14.Value;
      uStackX_24 = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_143a49e80;
    }
  }
  bVar7 = false;
  FVar15 = FStack_48;
LAB_143a49e80:
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2334,"STAT_ChaosDeformableSolver_AddProxy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x91e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2334);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&InitializationMutex);
  pTVar2 = &pFVar4->UninitializedProxys_Internal;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&pFStackX_10) &&
      ((FScriptContainerElement *)&pFStackX_10 <
       pFVar3 + (longlong)(pFVar4->UninitializedProxys_Internal).ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (pFVar4->UninitializedProxys_Internal).ArrayNum;
  piVar1 = &(pFVar4->UninitializedProxys_Internal).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar4->UninitializedProxys_Internal).ArrayNum = iVar10 + 1;
  *(FThreadingProxy **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = pFStackX_10;
  pUStack_60 = pFStackX_10->Owner;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
  Emplace<UObject_const_*>
            (&pFVar4->InitializedObjects_External,(UObject **)&uStackX_20,(bool *)&pUStack_60);
  LeaveCriticalSection((LPCRITICAL_SECTION)&InitializationMutex);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_38.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_38.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_58);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStack_58.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStack_58.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStack_58.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStack_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetEnableSolver @ 143b20920

bool __thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::GetEnableSolver(FGameThreadAccess *this)

{
  if (this->Solver != (FDeformableSolver *)0x0) {
    return this->Solver->bEnableSolver;
  }
  return false;
}

// HasObject @ 143b22a30

bool __thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::HasObject
          (FGameThreadAccess *this,UObject *param_1)

{
  FDeformableSolver *pFVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  
  pFVar1 = this->Solver;
  if (pFVar1 == (FDeformableSolver *)0x0) {
    return false;
  }
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(pFVar1->InitializedObjects_External).Elements.field_0x8 !=
      *(int *)&(pFVar1->InitializedObjects_External).Elements.field_0x34) {
    FVar5 = (pFVar1->InitializedObjects_External).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(pFVar1->InitializedObjects_External).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((pFVar1->InitializedObjects_External).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4))
                    * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(pFVar1->InitializedObjects_External).Elements;
      do {
        if (*(UObject **)(lVar2 + (longlong)iVar3 * 0x10) == param_1) goto LAB_143b22aca;
        iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_143b22aca:
  return iVar3 != -1;
}

// PullOutputPackage @ 143b2ce60

TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
__thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::PullOutputPackage(FGameThreadAccess *this)

{
  FDeformablePackage *in_RDX;
  
  if (this->Solver != (FDeformableSolver *)0x0) {
    FDeformableSolver::PullOutputPackage(this->Solver);
    return (TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
            )in_RDX;
  }
  in_RDX->Frame = 0;
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
          )in_RDX;
}

// PushInputPackage @ 143b2d020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::PushInputPackage
          (FGameThreadAccess *this,int param_1,
          TMap<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDeformableSolver *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushInputPackage> FVar11;
  FDeformablePackage *this_00;
  FDeformablePackage *pFVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  TArray<TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  bool bVar17;
  bool bVar18;
  FColor_u_0 aFStackX_20 [2];
  FDeformablePackage *pFStack_68;
  FName FStack_60;
  LARGE_INTEGER LStack_58;
  FName FStack_50;
  FName FStack_48;
  FStatMessage FStack_38;
  
  pFVar3 = this->Solver;
  if (pFVar3 == (FDeformableSolver *)0x0) {
    return;
  }
  pFVar12 = (FDeformablePackage *)0x0;
  FVar11 = StatPtr_STAT_ChaosDeformableSolver_PushInputPackage;
  if (StatPtr_STAT_ChaosDeformableSolver_PushInputPackage ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushInputPackage>)0x0) {
    pFVar10 = ::FName::FName(&FStack_50,"STAT_ChaosDeformableSolver_PushInputPackage");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushInputPackage>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosDeformableSolver_PushInputPackage,*pFVar10,
                        L"Chaos.Deformable.Solver.PushInputPackage","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_60.ComparisonIndex.Value = FVar14.Value;
        FStack_60.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_60,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x8bc);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStack_58.s.LowPart = FVar14.Value;
      LStack_58.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_143a893ea;
    }
  }
  bVar6 = false;
  FVar15 = FStack_48;
LAB_143a893ea:
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2236,"STAT_ChaosDeformableSolver_PushInputPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x8bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2236);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&PackageInputMutex);
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2239,"ChaosDeformableSolver_PushInputPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x8bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2239);
  }
  pTVar16 = &pFVar3->BufferedInputPackages;
  this_00 = ::operator_new(0x58);
  if (this_00 != (FDeformablePackage *)0x0) {
    pFVar12 = FDeformablePackage::FDeformablePackage(this_00,param_1,param_2);
  }
  pFVar2 = (pTVar16->AllocatorInstance).Data;
  pFStack_68 = pFVar12;
  if (((pFVar2 <= (FScriptContainerElement *)&pFStack_68) &&
      ((FScriptContainerElement *)&pFStack_68 <
       pFVar2 + (longlong)(pFVar3->BufferedInputPackages).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (pFVar3->BufferedInputPackages).ArrayNum;
  piVar1 = &(pFVar3->BufferedInputPackages).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar16->AllocatorInstance,piVar1);
  }
  (pFVar3->BufferedInputPackages).ArrayNum = iVar9 + 1;
  *(FDeformablePackage **)((pTVar16->AllocatorInstance).Data + (longlong)iVar9 * 8) = pFStack_68;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&PackageInputMutex);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_38.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_38.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_58);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStack_58.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStack_58.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStack_58.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStack_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_38);
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
  return;
}

// PushRestartPackage @ 143b2d060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::PushRestartPackage
          (FGameThreadAccess *this,int param_1,
          TMap<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
          *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  FDeformableSolver *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushRestartPackage> FVar12;
  FDeformablePackage *this_00;
  FDeformablePackage *pFVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  bool bVar17;
  bool bVar18;
  FColor_u_0 aFStackX_20 [2];
  FDeformablePackage *pFStack_78;
  FName FStack_70;
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FName FStack_58;
  FStatMessage FStack_48;
  
  pFVar4 = this->Solver;
  if (pFVar4 == (FDeformableSolver *)0x0) {
    return;
  }
  pFVar13 = (FDeformablePackage *)0x0;
  FVar12 = StatPtr_STAT_ChaosDeformableSolver_PushRestartPackage;
  if (StatPtr_STAT_ChaosDeformableSolver_PushRestartPackage ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushRestartPackage>)0x0) {
    pFVar11 = ::FName::FName(&FStack_60,"STAT_ChaosDeformableSolver_PushRestartPackage");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushRestartPackage>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosDeformableSolver_PushRestartPackage,*pFVar11,
                        L"Chaos.Deformable.Solver.PushRestartPackage","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_70.ComparisonIndex.Value = FVar15.Value;
        FStack_70.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_70,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x8d0);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStack_68.s.LowPart = FVar15.Value;
      LStack_68.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_143a89b43;
    }
  }
  bVar7 = false;
  FVar16 = FStack_58;
LAB_143a89b43:
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2256,"STAT_ChaosDeformableSolver_PushRestartPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x8d0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2256);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&PackageRestartMutex);
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2258,"ChaosDeformableSolver_PushRestartPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x8d2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2258);
  }
  pTVar2 = &pFVar4->BufferedRestartPackages;
  this_00 = ::operator_new(0x58);
  if (this_00 != (FDeformablePackage *)0x0) {
    pFVar13 = FDeformablePackage::FDeformablePackage(this_00,param_1,param_2);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFStack_78 = pFVar13;
  if (((pFVar3 <= (FScriptContainerElement *)&pFStack_78) &&
      ((FScriptContainerElement *)&pFStack_78 <
       pFVar3 + (longlong)(pFVar4->BufferedRestartPackages).ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (pFVar4->BufferedRestartPackages).ArrayNum;
  piVar1 = &(pFVar4->BufferedRestartPackages).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar4->BufferedRestartPackages).ArrayNum = iVar10 + 1;
  *(FDeformablePackage **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = pFStack_78;
  pFVar4->bPendingRestart = true;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&PackageRestartMutex);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_48.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      FStack_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_68);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_48);
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
  return;
}

// RemoveProxy @ 143b35ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::RemoveProxy
          (FGameThreadAccess *this,FThreadingProxy *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  FDeformableSolver *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_RemoveProxy> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  undefined1 *puVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FScriptContainerElement *pFVar18;
  TArray<Chaos::Softs::FThreadingProxy_*,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  bool bVar21;
  FThreadingProxy *pFStackX_10;
  FColor_u_0 aFStackX_18 [2];
  FName FStackX_20;
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FName FStack_58;
  FStatMessage FStack_48;
  
  pFVar5 = this->Solver;
  if (pFVar5 == (FDeformableSolver *)0x0) {
    return;
  }
  FVar13 = StatPtr_STAT_ChaosDeformableSolver_RemoveProxy;
  pFStackX_10 = param_1;
  if (StatPtr_STAT_ChaosDeformableSolver_RemoveProxy ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_RemoveProxy>)0x0) {
    pFVar12 = ::FName::FName(&FStack_60,"STAT_ChaosDeformableSolver_RemoveProxy");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_RemoveProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosDeformableSolver_RemoveProxy
                        ,*pFVar12,L"Chaos.Deformable.Solver.RemoveProxy","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar14 == 0)) {
LAB_143a8cf82:
    bVar8 = false;
    FVar17 = FStack_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_20.ComparisonIndex.Value = FVar16.Value;
        FStackX_20.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x927);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143a8cf82;
    LStack_68.s.LowPart = FVar16.Value;
    LStack_68.s.HighPart = uVar14;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar8 = true;
  }
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2343,"STAT_ChaosDeformableSolver_RemoveProxy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x927);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2343);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&RemovalMutex);
  EnterCriticalSection((LPCRITICAL_SECTION)&InitializationMutex);
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::Remove
            (&pFVar5->InitializedObjects_External,pFStackX_10->Owner);
  pFVar3 = (pFVar5->UninitializedProxys_Internal).AllocatorInstance.Data;
  iVar11 = (pFVar5->UninitializedProxys_Internal).ArrayNum;
  for (pFVar18 = pFVar3; pFVar18 != pFVar3 + (longlong)iVar11 * 8; pFVar18 = pFVar18 + 8) {
    if (*(FThreadingProxy **)pFVar18 == pFStackX_10) {
      uVar14 = (uint)((longlong)pFVar18 - (longlong)pFVar3 >> 3);
      if (uVar14 != 0xffffffff) {
        uVar20 = 0;
        if ((int)uVar14 < iVar11) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = (pFVar5->UninitializedProxys_Internal).ArrayNum;
        pFVar3 = (pFVar5->UninitializedProxys_Internal).AllocatorInstance.Data;
        iVar11 = iVar2 + ~uVar14;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar14 * 8,pFVar3 + (longlong)(iVar2 - iVar11) * 8,
                  (longlong)iVar11 << 3);
        }
        piVar1 = &(pFVar5->UninitializedProxys_Internal).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(pFVar5->UninitializedProxys_Internal).AllocatorInstance,
                   (pFVar5->UninitializedProxys_Internal).ArrayNum,
                   &(pFVar5->UninitializedProxys_Internal).ArrayMax);
        pUVar4 = pFStackX_10->Owner;
        uVar14 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        if (*(int *)&(pFVar5->Proxies).field_0x8 == *(int *)&(pFVar5->Proxies).field_0x34)
        goto LAB_143a8d228;
        puVar15 = *(undefined1 **)&(pFVar5->Proxies).field_0x40;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = &(pFVar5->Proxies).field_0x38;
        }
        iVar11 = *(int *)(puVar15 +
                         (ulonglong)
                         (*(int *)&(pFVar5->Proxies).field_0x48 - 1U & (uVar14 >> 0x10 ^ uVar14)) *
                         4);
        if (iVar11 == -1) goto LAB_143a8d228;
        goto LAB_143a8d213;
      }
      break;
    }
  }
  pUVar4 = pFStackX_10->Owner;
  uVar14 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  if (*(int *)&(pFVar5->Proxies).field_0x8 != *(int *)&(pFVar5->Proxies).field_0x34) {
    puVar15 = *(undefined1 **)&(pFVar5->Proxies).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(pFVar5->Proxies).field_0x38;
    }
    iVar11 = *(int *)(puVar15 +
                     (ulonglong)
                     (*(int *)&(pFVar5->Proxies).field_0x48 - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
    if (iVar11 != -1) {
      do {
        if (*(UObject **)(*(longlong *)&pFVar5->Proxies + (longlong)iVar11 * 0x18) == pUVar4) {
          pTVar19 = &pFVar5->RemovedProxys_Internal;
          pFVar3 = (pTVar19->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&pFStackX_10) &&
              ((FScriptContainerElement *)&pFStackX_10 <
               pFVar3 + (longlong)(pFVar5->RemovedProxys_Internal).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (pFVar5->RemovedProxys_Internal).ArrayNum;
          if (iVar11 == (pFVar5->RemovedProxys_Internal).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar19->AllocatorInstance,
                                &(pFVar5->RemovedProxys_Internal).ArrayMax);
          }
          (pFVar5->RemovedProxys_Internal).ArrayNum = iVar11 + 1;
          *(FThreadingProxy **)((pTVar19->AllocatorInstance).Data + (longlong)iVar11 * 8) =
               pFStackX_10;
          break;
        }
        iVar11 = *(int *)(*(longlong *)&pFVar5->Proxies + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
LAB_143a8d380:
  LeaveCriticalSection((LPCRITICAL_SECTION)&InitializationMutex);
  LeaveCriticalSection((LPCRITICAL_SECTION)&RemovalMutex);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_48.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      FStack_48.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_68);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
  while (iVar11 = *(int *)(*(longlong *)&pFVar5->Proxies + 0x10 + (longlong)iVar11 * 0x18),
        iVar11 != -1) {
LAB_143a8d213:
    if (*(UObject **)(*(longlong *)&pFVar5->Proxies + (longlong)iVar11 * 0x18) == pUVar4) {
      pTVar19 = &pFVar5->RemovedProxys_Internal;
      pFVar3 = (pTVar19->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&pFStackX_10) &&
          ((FScriptContainerElement *)&pFStackX_10 <
           pFVar3 + (longlong)(pFVar5->RemovedProxys_Internal).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (pFVar5->RemovedProxys_Internal).ArrayNum;
      if (iVar11 == (pFVar5->RemovedProxys_Internal).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar19->AllocatorInstance,
                            &(pFVar5->RemovedProxys_Internal).ArrayMax);
      }
      (pFVar5->RemovedProxys_Internal).ArrayNum = iVar11 + 1;
      *(FThreadingProxy **)((pTVar19->AllocatorInstance).Data + (longlong)iVar11 * 8) = pFStackX_10;
      goto LAB_143a8d380;
    }
  }
LAB_143a8d228:
  (**(code **)pFStackX_10->_padding_)(pFStackX_10,1);
  goto LAB_143a8d380;
}

// SetEnableSolver @ 143b3f2d0

void __thiscall
Chaos::Softs::FDeformableSolver::FGameThreadAccess::SetEnableSolver
          (FGameThreadAccess *this,bool param_1)

{
  FDeformableSolver *pFVar1;
  
  pFVar1 = this->Solver;
  if (pFVar1 != (FDeformableSolver *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&SolverEnabledMutex);
    pFVar1->bEnableSolver = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&SolverEnabledMutex);
  }
  return;
}

