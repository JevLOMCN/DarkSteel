// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// <lambda_invoker_cdecl> @ 143f295a0

void __cdecl
`Chaos::FEventDefaults::RegisterBreakingEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FPBDRigidsSolver *param_1,FBreakingEventData *param_2,bool param_3)

{
  undefined1 local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 143f295c0

void __cdecl
`Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FPBDRigidsSolver *param_1,FCollisionEventData *param_2,bool param_3)

{
  undefined1 local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 143f295e0

void __cdecl
`Chaos::FEventDefaults::RegisterCrumblingEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FPBDRigidsSolver *param_1,FCrumblingEventData *param_2,bool param_3)

{
  undefined1 local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 143f29600

void __cdecl
`Chaos::FEventDefaults::RegisterRemovalEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FPBDRigidsSolver *param_1,FRemovalEventData *param_2,bool param_3)

{
  undefined1 local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 143f29620

void __cdecl
`Chaos::FEventDefaults::RegisterSleepingEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FPBDRigidsSolver *param_1,FSleepingEventData *param_2,bool param_3)

{
  undefined1 local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 143f29640

void __cdecl
`Chaos::FEventDefaults::RegisterTrailingEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FPBDRigidsSolver *param_1,FTrailingEventData *param_2,bool param_3)

{
  undefined1 local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// operator() @ 143f4c9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FEventDefaults::RegisterBreakingEvent'::__l2::<lambda_1>::operator()
          (void *this,FPBDRigidsSolver *param_1,FBreakingEventData *param_2,bool param_3)

{
  TMap<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  bool *pbVar4;
  FPBDRigidsEvolutionGBF *pFVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_GatherBreakingEvent> FVar17;
  uint uVar18;
  ulonglong *puVar19;
  undefined1 *puVar20;
  FName FVar21;
  uint uVar22;
  ulonglong uVar23;
  FSolverBreakingEventFilter *this_01;
  ulonglong uVar24;
  FBreakingData *pFVar25;
  int local_a8;
  undefined1 local_a4 [4];
  longlong local_a0;
  FColor_u_0 local_98;
  int local_94;
  FName local_90;
  ulonglong local_88;
  FName local_80;
  FName local_78;
  TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *local_68;
  ulonglong *local_60;
  FSolverBreakingEventFilter *local_58;
  code *local_50;
  undefined1 *local_48;
  FName local_40;
  
  if ((param_1 == (FPBDRigidsSolver *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                          ,0x143,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar14 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_48 = local_a4;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar15 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar14);
  if ((*(int *)(pFVar15 + 2) < 1) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar23 = 0;
  FVar17 = StatPtr_STAT_GatherBreakingEvent;
  if (StatPtr_STAT_GatherBreakingEvent == (FThreadSafeStaticStat<FStat_STAT_GatherBreakingEvent>)0x0
     ) {
    pFVar16 = ::FName::FName(&local_40,"STAT_GatherBreakingEvent");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_GatherBreakingEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherBreakingEvent,*pFVar16,
                        L"Gathering Breaking Event Data","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar17;
  bVar8 = false;
  bVar10 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar11 = false;
  bVar9 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar10 = true;
      bVar11 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_90.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                   ,0x147);
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_80 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar9 = true;
      goto LAB_143f4cbe8;
    }
  }
  bVar8 = bVar11;
  bVar10 = bVar9;
  bVar9 = false;
  local_80 = local_78;
  FVar21 = local_78;
LAB_143f4cbe8:
  if (((param_1->MSolverEventFilters).Ptr)->BreakingEventsEnabled != false) {
    if (param_3) {
      Chaos::FBreakingEventData::Reset(param_2);
    }
    this_00 = &(param_2->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap;
    (param_2->BreakingData)._padding_ = param_1->_padding_;
    pTVar1 = &(param_2->BreakingData).AllBreakingsArray;
    pFVar5 = (param_1->MEvolution).Ptr;
    iVar12 = (pFVar5->Clustering).MAllClusterBreakings.ArrayNum;
    local_68 = pTVar1;
    if (0 < iVar12) {
      local_a0 = 0;
      this_01 = (((param_1->MSolverEventFilters).Ptr)->BreakingFilter).Ptr;
      uVar24 = uVar23;
      local_58 = this_01;
      do {
        uVar22 = (uint)uVar23;
        uVar18 = 0;
        if ((int)uVar22 < iVar12) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar25 = (FBreakingData *)
                  ((pFVar5->Clustering).MAllClusterBreakings.AllocatorInstance.Data + uVar24);
        uVar18 = 0;
        if ((int)uVar22 < (pFVar5->Clustering).MAllClusterBreakings.ArrayNum) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar23 = *(ulonglong *)
                  ((pFVar5->Clustering).MAllClusterBreakings.AllocatorInstance.Data + uVar24 + 8);
        local_88 = uVar23;
        if ((*(longlong *)(uVar23 + 0x20) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((**(char **)(uVar23 + 0x20) == '\0') &&
           (((this_01->Settings).FilterEnabled == false ||
            (bVar11 = Chaos::FSolverBreakingEventFilter::Pass(this_01,pFVar25), bVar11)))) {
          iVar12 = (param_2->BreakingData).AllBreakingsArray.ArrayNum;
          piVar2 = &(param_2->BreakingData).AllBreakingsArray.ArrayMax;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10c0,&pTVar1->AllocatorInstance,piVar2);
          }
          (param_2->BreakingData).AllBreakingsArray.ArrayNum = iVar12 + 1;
          Chaos::FBreakingData::FBreakingData
                    ((FBreakingData *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0xc0),
                     pFVar25);
          uVar18 = ((uint)(local_88 >> 0x14) & 0xffff ^ (uint)(local_88 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          uVar18 = uVar18 >> 0x10 ^ uVar18;
          if (*(int *)&(param_2->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x8
              != *(int *)&(param_2->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.
                          field_0x34) {
            puVar6 = *(undefined1 **)
                      &(param_2->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x40;
            puVar20 = &(param_2->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x38;
            if (puVar6 != (undefined1 *)0x0) {
              puVar20 = puVar6;
            }
            iVar13 = *(int *)(puVar20 +
                             (ulonglong)
                             (*(int *)&(param_2->PhysicsProxyToBreakingIndices).
                                       PhysicsProxyToIndicesMap.field_0x48 - 1U & uVar18) * 4);
            if (iVar13 != -1) {
              do {
                puVar19 = (ulonglong *)((longlong)iVar13 * 0x20 + *(longlong *)&this_00->field_0x0);
                if (*puVar19 == local_88) {
                  if (puVar19 != (ulonglong *)0x0) goto LAB_143f4ce5b;
                  break;
                }
                iVar13 = (int)puVar19[3];
              } while (iVar13 != -1);
            }
          }
          local_60 = &local_88;
          TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<IPhysicsProxyBase_*_const_&>_>
                    ((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)&local_94,
                     (TKeyInitializer<IPhysicsProxyBase_*_const_&> *)(ulonglong)uVar18,
                     (bool *)&local_60);
          puVar19 = (ulonglong *)((longlong)local_94 * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_143f4ce5b:
          pFVar3 = (ForAnyElementType *)(puVar19 + 1);
          local_a8 = iVar12;
          if (((pFVar3->Data <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 <
               pFVar3->Data + (longlong)*(int *)((longlong)puVar19 + 0x14) * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (int)puVar19[2];
          if (iVar12 == *(int *)((longlong)puVar19 + 0x14)) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar3,(int *)((longlong)puVar19 + 0x14));
          }
          *(int *)(puVar19 + 2) = iVar12 + 1;
          *(int *)(pFVar3->Data + (longlong)iVar12 * 4) = local_a8;
          pbVar4 = &(param_2->BreakingData).bHasGlobalEvent;
          *pbVar4 = (bool)(*pbVar4 | (byte)((uint)pFVar25->_padding_ >> 1) & 1);
          this_01 = local_58;
        }
        uVar23 = (ulonglong)(uVar22 + 1);
        iVar12 = (pFVar5->Clustering).MAllClusterBreakings.ArrayNum;
        local_a0 = local_a0 + 1;
        uVar24 = uVar24 + 0xc0;
        FVar21 = local_80;
      } while ((int)(uVar22 + 1) < iVar12);
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// operator() @ 143f4cfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::operator()
          (void *this,FPBDRigidsSolver *param_1,FCollisionEventData *param_2,bool param_3)

{
  ForAnyElementType *pFVar1;
  FPBDRigidsEvolutionGBF *pFVar2;
  FPBDCollisionConstraint *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_GatherCollisionEvent> FVar19;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Events_RegisterCollisionEvent_Filter> FVar20;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar21;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Events_RegisterCollisionEvent_Notify> FVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  FScriptContainerElement *pFVar24;
  FName FVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  FName FVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  byte bVar36;
  ulonglong uVar37;
  FPBDRigidsSolver *local_res10;
  FName local_res18;
  byte local_res20;
  uint local_184;
  ForAnyElementType local_180;
  int local_178 [2];
  FName local_170;
  uint local_168;
  uint local_164;
  undefined1 local_160 [8];
  ForAnyElementType local_158;
  int local_150 [2];
  TArrayView<Chaos::FPBDCollisionConstraint_const_*_const,int> local_148;
  FColor_u_0 local_138;
  FColor_u_0 local_134;
  FColor_u_0 local_130 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_128;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e0;
  FName local_d0;
  code *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  TArray<bool,TSizedDefaultAllocator<32>_> **local_a0;
  code *local_98;
  ForAnyElementType **local_90;
  ForAnyElementType *local_88;
  FPBDRigidsSolver **local_80;
  ForAnyElementType *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  TArrayView<Chaos::FPBDCollisionConstraint_const_*_const,int> *local_68;
  uint *local_60;
  FPBDCollisionConstraints *local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  local_res10 = param_1;
  local_res18 = (FName)param_2;
  if ((param_1 == (FPBDRigidsSolver *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                          ,0x4c,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar16 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_b0 = local_160;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar16);
  if ((*(int *)(pFVar17 + 2) < 1) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = 0;
  FVar19 = StatPtr_STAT_GatherCollisionEvent;
  if (StatPtr_STAT_GatherCollisionEvent ==
      (FThreadSafeStaticStat<FStat_STAT_GatherCollisionEvent>)0x0) {
    pFVar18 = ::FName::FName(&local_50,"STAT_GatherCollisionEvent");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_GatherCollisionEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherCollisionEvent,*pFVar18,
                        L"Gathering Collision Event Data","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar19;
  bVar11 = false;
  bVar9 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar10 = false;
  bVar12 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_143f4d1a7:
    bVar9 = bVar12;
    bVar11 = bVar10;
    bVar10 = false;
    local_f8 = local_f0;
    FVar32 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar9 = true;
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_118.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                   ,0x50);
        bVar11 = true;
        bVar9 = true;
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143f4d1a7;
    local_170 = FVar32;
    local_f8 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar10 = true;
  }
  if (param_3) {
    TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap);
    iVar14 = (param_2->CollisionData).AllCollisionsArray.ArrayMax;
    (param_2->CollisionData).AllCollisionsArray.ArrayNum = 0;
    if (iVar14 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,0,&(param_2->CollisionData).AllCollisionsArray.AllocatorInstance,0,
                 &(param_2->CollisionData).AllCollisionsArray.ArrayMax);
    }
  }
  (param_2->CollisionData)._padding_ = local_res10->_padding_;
  (param_2->PhysicsProxyToCollisionIndices)._padding_ = local_res10->_padding_;
  pFVar2 = (local_res10->MEvolution).Ptr;
  iVar14 = (pFVar2->CollisionConstraints).ConstraintAllocator.ActiveConstraints.ArrayNum;
  if (iVar14 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto LAB_143f4e035;
  }
  if (iVar14 < 1) goto LAB_143f4e035;
  uVar31 = (pFVar2->CollisionConstraints).ConstraintAllocator.ActiveConstraints.ArrayNum;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178[0] = 0;
  local_178[1] = 0;
  iVar14 = 0;
  if ((int)uVar31 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar14 = local_178[0];
  }
  if (iVar14 < (int)uVar31) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar31 - iVar14,&local_180,local_178,local_178 + 1);
  }
  else {
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
    }
    if ((int)uVar31 < iVar14) {
      uVar15 = iVar14 - uVar31;
      if ((int)(uVar15 | uVar31) < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = local_178[0];
      }
      if (uVar15 != 0) {
        iVar26 = (iVar14 - uVar15) - uVar31;
        if (iVar26 != 0) {
          memmove(local_180.Data + (longlong)(int)uVar31 * 8,
                  local_180.Data + (longlong)(int)uVar31 * 8 + (longlong)(int)uVar15 * 8,
                  (longlong)iVar26 << 3);
          iVar14 = local_178[0];
        }
        local_178[0] = iVar14 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_180,iVar14 - uVar15,local_178 + 1);
      }
    }
  }
  local_184 = 0;
  FVar20 = Chaos::StatPtr_STAT_Events_RegisterCollisionEvent_Filter;
  if (Chaos::StatPtr_STAT_Events_RegisterCollisionEvent_Filter ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Events_RegisterCollisionEvent_Filter>)0x0) {
    pFVar18 = ::FName::FName(&local_48,"STAT_Events_RegisterCollisionEvent_Filter");
    FVar20 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Events_RegisterCollisionEvent_Filter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &Chaos::StatPtr_STAT_Events_RegisterCollisionEvent_Filter,*pFVar18,
                        L"EventDefaults::RegisterCollisionEvent_Filter","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar20;
  bVar12 = false;
  bVar8 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_143f4d492:
    bVar7 = false;
    FVar25 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_134.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_134._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_110.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                   ,0x70);
        bVar12 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143f4d492;
    local_170 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar7 = true;
  }
  this_00 = FChaosSolversModule::GetModule();
  pIVar21 = FChaosSolversModule::GetSettingsProvider(this_00);
  (**(code **)((longlong)*pIVar21 + 8))(pIVar21);
  Chaos::FPBDCollisionConstraints::GetConstConstraintHandles
            (&pFVar2->CollisionConstraints,&local_148);
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_128,local_148.ArrayNum,Default);
  local_70 = &local_128;
  local_68 = &local_148;
  local_60 = &local_184;
  local_a0 = &local_70;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>,void,int,int>
             ::Call;
  local_58 = &pFVar2->CollisionConstraints;
  Chaos::InnerPhysicsParallelForRange
            (local_148.ArrayNum,(TFunctionRef<void___cdecl(int,int)> *)&local_a8,
             Chaos::LargeBatchSize,false);
  uVar37 = uVar34;
  iVar14 = local_148.ArrayNum;
  if (0 < local_148.ArrayNum) {
    do {
      uVar15 = (uint)uVar34;
      uVar31 = 0;
      if ((int)uVar15 < local_128.ArrayNum) {
        uVar31 = ~uVar15 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar14 = local_148.ArrayNum, bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_128.AllocatorInstance.Data[uVar37] != (FScriptContainerElement)0x0) {
        uVar31 = 0;
        if ((int)uVar15 < iVar14) {
          uVar31 = ~uVar15 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar28 = (longlong)(int)local_184;
        pFVar3 = local_148.DataPtr[uVar37];
        uVar31 = 0;
        if ((int)local_184 < local_178[0]) {
          uVar31 = ~local_184 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FPBDCollisionConstraint **)(local_180.Data + lVar28 * 8) = pFVar3;
        local_184 = local_184 + 1;
        iVar14 = local_148.ArrayNum;
      }
      uVar34 = (ulonglong)(uVar15 + 1);
      param_2 = (FCollisionEventData *)local_res18;
      uVar37 = uVar37 + 1;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  uVar31 = 0;
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  FVar22 = Chaos::StatPtr_STAT_Events_RegisterCollisionEvent_Notify;
  if (Chaos::StatPtr_STAT_Events_RegisterCollisionEvent_Notify ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Events_RegisterCollisionEvent_Notify>)0x0) {
    pFVar18 = ::FName::FName(&local_40,"STAT_Events_RegisterCollisionEvent_Notify");
    FVar22 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Events_RegisterCollisionEvent_Notify>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &Chaos::StatPtr_STAT_Events_RegisterCollisionEvent_Notify,*pFVar18,
                        L"EventDefaults::RegisterCollisionEvent_Notify","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar22;
  bVar36 = 0;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  local_res20 = 0;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_143f4d7d8:
    local_100 = local_d0;
    FVar25 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar36 = 1;
      local_res20 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_108.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                   ,200);
        bVar36 = 3;
        local_res20 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143f4d7d8;
    local_res18 = FVar25;
    local_100 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    local_res20 = bVar36 | 4;
  }
  uVar15 = local_184;
  lVar28 = (longlong)(int)local_184;
  if (local_178[0] < (int)local_184) {
    iVar26 = local_184 - local_178[0];
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar26,&local_180,local_178,local_178 + 1);
    memset(local_180.Data + (longlong)iVar14 * 8,0,(longlong)iVar26 << 3);
LAB_143f4d8ee:
    iVar14 = local_178[0];
  }
  else {
    if ((int)local_184 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_184);
    }
    iVar14 = local_178[0];
    if ((int)local_184 < local_178[0]) {
      uVar27 = local_178[0] - local_184;
      if ((int)(local_184 | uVar27) < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = local_178[0];
      }
      if (uVar27 != 0) {
        iVar26 = (iVar14 - uVar15) - uVar27;
        if (iVar26 != 0) {
          memmove(local_180.Data + lVar28 * 8,
                  local_180.Data + lVar28 * 8 + (longlong)(int)uVar27 * 8,(longlong)iVar26 << 3);
          iVar14 = local_178[0];
        }
        local_178[0] = iVar14 - uVar27;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_180,iVar14 - uVar27,local_178 + 1);
        goto LAB_143f4d8ee;
      }
    }
  }
  uVar15 = local_184;
  if (0 < iVar14) {
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150[0] = 0;
    local_150[1] = 0;
    if ((int)local_184 < 1) {
      if ((int)local_184 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_184);
      }
    }
    else {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x120,8,local_184,&local_158,local_150,local_150 + 1);
      DefaultConstructItems<Chaos::FCollidingData,int>
                (local_158.Data + (longlong)iVar14 * 0x120,uVar15);
      iVar14 = local_178[0];
    }
    local_88 = &local_180;
    local_80 = &local_res10;
    local_78 = &local_158;
    local_90 = &local_88;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,void,int,int>
               ::Call;
    Chaos::InnerPhysicsParallelForRange
              (iVar14,(TFunctionRef<void___cdecl(int,int)> *)&local_98,Chaos::SmallBatchSize,false);
    pFVar1 = (ForAnyElementType *)((longlong)param_2 + 8);
    if (0 < (int)local_184) {
      local_170.ComparisonIndex.Value = 0;
      local_170.Number = 0;
      do {
        FVar32 = local_170;
        uVar27 = ~uVar31 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar31 < local_150[0]) {
          uVar15 = uVar27;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(local_158.Data + (longlong)FVar32 + 0x100) != 0) {
          uVar15 = 0;
          if ((int)uVar31 < local_150[0]) {
            uVar15 = uVar27;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar28 = *(longlong *)(local_158.Data + (longlong)FVar32 + 0x100);
          if ((*(longlong *)(lVar28 + 0x20) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (**(char **)(lVar28 + 0x20) == '\0') {
            uVar15 = 0;
            if ((int)uVar31 < local_150[0]) {
              uVar15 = uVar27;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar29 = local_158.Data + (longlong)FVar32;
            if (((pFVar1->Data <= pFVar29) &&
                (pFVar29 < pFVar1->Data + (longlong)*(int *)((longlong)param_2 + 0x14) * 0x120)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar15 = *(uint *)((longlong)param_2 + 0x10);
            if (uVar15 == *(uint *)((longlong)param_2 + 0x14)) {
              uVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x120,8,pFVar1,(int *)((longlong)param_2 + 0x14));
            }
            pFVar4 = pFVar1->Data;
            lVar28 = 2;
            *(uint *)((longlong)param_2 + 0x10) = uVar15 + 1;
            lVar35 = (longlong)(int)uVar15 * 0x120;
            pFVar4 = pFVar4 + lVar35;
            do {
              pFVar30 = pFVar29;
              pFVar24 = pFVar4;
              uVar6 = *(undefined8 *)(pFVar30 + 8);
              *(undefined8 *)pFVar24 = *(undefined8 *)pFVar30;
              *(undefined8 *)(pFVar24 + 8) = uVar6;
              uVar6 = *(undefined8 *)(pFVar30 + 0x18);
              *(undefined8 *)(pFVar24 + 0x10) = *(undefined8 *)(pFVar30 + 0x10);
              *(undefined8 *)(pFVar24 + 0x18) = uVar6;
              uVar6 = *(undefined8 *)(pFVar30 + 0x28);
              *(undefined8 *)(pFVar24 + 0x20) = *(undefined8 *)(pFVar30 + 0x20);
              *(undefined8 *)(pFVar24 + 0x28) = uVar6;
              uVar6 = *(undefined8 *)(pFVar30 + 0x38);
              *(undefined8 *)(pFVar24 + 0x30) = *(undefined8 *)(pFVar30 + 0x30);
              *(undefined8 *)(pFVar24 + 0x38) = uVar6;
              uVar6 = *(undefined8 *)(pFVar30 + 0x48);
              *(undefined8 *)(pFVar24 + 0x40) = *(undefined8 *)(pFVar30 + 0x40);
              *(undefined8 *)(pFVar24 + 0x48) = uVar6;
              uVar6 = *(undefined8 *)(pFVar30 + 0x58);
              *(undefined8 *)(pFVar24 + 0x50) = *(undefined8 *)(pFVar30 + 0x50);
              *(undefined8 *)(pFVar24 + 0x58) = uVar6;
              uVar6 = *(undefined8 *)(pFVar30 + 0x68);
              *(undefined8 *)(pFVar24 + 0x60) = *(undefined8 *)(pFVar30 + 0x60);
              *(undefined8 *)(pFVar24 + 0x68) = uVar6;
              uVar6 = *(undefined8 *)(pFVar30 + 0x78);
              *(undefined8 *)(pFVar24 + 0x70) = *(undefined8 *)(pFVar30 + 0x70);
              *(undefined8 *)(pFVar24 + 0x78) = uVar6;
              lVar28 = lVar28 + -1;
              pFVar4 = pFVar24 + 0x80;
              pFVar29 = pFVar30 + 0x80;
            } while (lVar28 != 0);
            uVar6 = *(undefined8 *)(pFVar30 + 0x88);
            *(undefined8 *)(pFVar24 + 0x80) = *(undefined8 *)(pFVar30 + 0x80);
            *(undefined8 *)(pFVar24 + 0x88) = uVar6;
            uVar33 = ~uVar15 >> 0x1f;
            uVar6 = *(undefined8 *)(pFVar30 + 0x98);
            *(undefined8 *)(pFVar24 + 0x90) = *(undefined8 *)(pFVar30 + 0x90);
            *(undefined8 *)(pFVar24 + 0x98) = uVar6;
            uVar27 = 0;
            if ((int)uVar15 < *(int *)((longlong)param_2 + 0x10)) {
              uVar27 = uVar33;
            }
            if ((uVar27 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar34 = *(ulonglong *)(pFVar1->Data + lVar35 + 0x100);
            uVar27 = ((uint)(uVar34 >> 0x14) & 0xffff ^ (uint)(uVar34 >> 4)) * -0x7a143595;
            uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
            pTVar23 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<IPhysicsProxyBase_*_const_&>
                                ((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                  *)((longlong)param_2 + 0x20),uVar27 >> 0x10 ^ uVar27,
                                 (IPhysicsProxyBase **)(pFVar1->Data + lVar35 + 0x100));
            pFVar29 = (pTVar23->AllocatorInstance).Data;
            local_168 = uVar15;
            if (((pFVar29 <= (FScriptContainerElement *)&local_168) &&
                ((FScriptContainerElement *)&local_168 < pFVar29 + (longlong)pTVar23->ArrayMax * 4))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar14 = pTVar23->ArrayNum;
            if (iVar14 == pTVar23->ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar23->AllocatorInstance,&pTVar23->ArrayMax);
            }
            pTVar23->ArrayNum = iVar14 + 1;
            *(uint *)((pTVar23->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_168;
            uVar27 = 0;
            if ((int)uVar15 < *(int *)((longlong)param_2 + 0x10)) {
              uVar27 = uVar33;
            }
            if ((uVar27 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar32 = local_170;
            if (*(longlong *)(pFVar1->Data + lVar35 + 0x108) != 0) {
              uVar27 = 0;
              if ((int)uVar15 < *(int *)((longlong)param_2 + 0x10)) {
                uVar27 = uVar33;
              }
              if ((uVar27 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar29 = pFVar1->Data;
              uVar27 = 0;
              if ((int)uVar15 < *(int *)((longlong)param_2 + 0x10)) {
                uVar27 = uVar33;
              }
              if ((uVar27 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar32 = local_170;
              if (*(longlong *)(pFVar29 + lVar35 + 0x108) !=
                  *(longlong *)(pFVar1->Data + lVar35 + 0x100)) {
                uVar27 = 0;
                if ((int)uVar15 < *(int *)((longlong)param_2 + 0x10)) {
                  uVar27 = uVar33;
                }
                if ((uVar27 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar28 = *(longlong *)(pFVar1->Data + lVar35 + 0x108);
                if ((*(longlong *)(lVar28 + 0x20) == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FVar32 = local_170;
                if (**(char **)(lVar28 + 0x20) == '\0') {
                  uVar27 = 0;
                  if ((int)uVar15 < *(int *)((longlong)param_2 + 0x10)) {
                    uVar27 = uVar33;
                  }
                  if ((uVar27 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar34 = *(ulonglong *)(pFVar1->Data + lVar35 + 0x108);
                  uVar27 = ((uint)(uVar34 >> 0x14) & 0xffff ^ (uint)(uVar34 >> 4)) * -0x7a143595;
                  uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                  pTVar23 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            ::FindOrAddImpl<IPhysicsProxyBase_*_const_&>
                                      ((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                        *)((longlong)param_2 + 0x20),uVar27 >> 0x10 ^ uVar27,
                                       (IPhysicsProxyBase **)(pFVar1->Data + lVar35 + 0x108));
                  local_164 = uVar15 | 0x80000000;
                  pFVar29 = (pTVar23->AllocatorInstance).Data;
                  if (((pFVar29 <= (FScriptContainerElement *)&local_164) &&
                      ((FScriptContainerElement *)&local_164 <
                       pFVar29 + (longlong)pTVar23->ArrayMax * 4)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar14 = pTVar23->ArrayNum;
                  if (iVar14 == pTVar23->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar23->AllocatorInstance,&pTVar23->ArrayMax);
                  }
                  pTVar23->ArrayNum = iVar14 + 1;
                  *(uint *)((pTVar23->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_164;
                  FVar32 = local_170;
                }
              }
            }
          }
        }
        local_170 = (FName)((longlong)FVar32 + 0x120);
        uVar31 = uVar31 + 1;
        FVar25 = local_100;
        FVar32 = local_f8;
      } while ((int)uVar31 < (int)local_184);
    }
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
  }
  bVar36 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar36 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar36 & 4) != 0) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  if (local_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data);
  }
LAB_143f4e035:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// operator() @ 143f4e0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FEventDefaults::RegisterCrumblingEvent'::__l2::<lambda_1>::operator()
          (void *this,FPBDRigidsSolver *param_1,FCrumblingEventData *param_2,bool param_3)

{
  int *piVar1;
  bool *pbVar2;
  int iVar3;
  FName FVar4;
  FPBDRigidsEvolutionGBF *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_GatherBreakingEvent> FVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  FCrumblingData *pFVar16;
  FCrumblingData *pFVar17;
  byte bVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  byte local_res20;
  int local_78;
  FColor_u_0 local_74;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  code *local_48;
  undefined1 *local_40;
  
  if (param_1 == (FPBDRigidsSolver *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                       ,0x22b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar10 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_40 = local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar10);
  if (*(int *)(pFVar11 + 2) < 1) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310308>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x124,"IsInPhysicsThreadContext()");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar13 = StatPtr_STAT_GatherBreakingEvent;
  if (StatPtr_STAT_GatherBreakingEvent == (FThreadSafeStaticStat<FStat_STAT_GatherBreakingEvent>)0x0
     ) {
    pFVar12 = ::FName::FName(&local_60,"STAT_GatherBreakingEvent");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_GatherBreakingEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherBreakingEvent,*pFVar12,
                        L"Gathering Breaking Event Data","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar13;
  bVar18 = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_res20 = 0;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_74.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_74._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar18 = 1;
      local_res20 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_70.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                   ,0x22f);
        bVar18 = 3;
        local_res20 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_res20 = bVar18 | 4;
      goto LAB_143f4e2b9;
    }
  }
  local_68 = local_58;
LAB_143f4e2b9:
  if (param_3) {
    Chaos::FCrumblingEventData::Reset(param_2);
  }
  (param_2->CrumblingData)._padding_ = param_1->_padding_;
  pFVar5 = (param_1->MEvolution).Ptr;
  uVar15 = (pFVar5->Clustering).MAllClusterCrumblings.ArrayNum;
  if (-1 < (int)uVar15) {
    piVar1 = &(param_2->CrumblingData).AllCrumblingsArray.ArrayMax;
    if ((param_2->CrumblingData).AllCrumblingsArray.ArrayMax < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,uVar15,&(param_2->CrumblingData).AllCrumblingsArray.AllocatorInstance,
                 (param_2->CrumblingData).AllCrumblingsArray.ArrayNum,piVar1);
    }
    iVar3 = (pFVar5->Clustering).MAllClusterCrumblings.ArrayNum;
    pFVar17 = (FCrumblingData *)(pFVar5->Clustering).MAllClusterCrumblings.AllocatorInstance.Data;
    pFVar16 = pFVar17 + iVar3;
    while( true ) {
      if ((pFVar5->Clustering).MAllClusterCrumblings.ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::FCrumblingData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      FVar4 = local_68;
      bVar18 = local_res20;
      if (pFVar17 == pFVar16) break;
      iVar9 = (param_2->CrumblingData).AllCrumblingsArray.ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10d0,&(param_2->CrumblingData).AllCrumblingsArray.AllocatorInstance,
                           piVar1);
      }
      (param_2->CrumblingData).AllCrumblingsArray.ArrayNum = iVar9 + 1;
      Chaos::FCrumblingData::FCrumblingData
                ((FCrumblingData *)
                 ((param_2->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data +
                 (longlong)iVar9 * 0xd0),pFVar17);
      uVar15 = ((uint)((ulonglong)pFVar17->Proxy >> 0x14) & 0xffff ^
               (uint)((ulonglong)pFVar17->Proxy >> 4)) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      local_78 = iVar9;
      pTVar14 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<IPhysicsProxyBase_*_const_&>
                          ((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)&(param_2->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap,
                           uVar15 >> 0x10 ^ uVar15,&pFVar17->Proxy);
      pFVar6 = (pTVar14->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_78) &&
         ((FScriptContainerElement *)&local_78 < pFVar6 + (longlong)pTVar14->ArrayMax * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = pTVar14->ArrayNum;
      if (iVar9 == pTVar14->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
      }
      pTVar14->ArrayNum = iVar9 + 1;
      *(int *)((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_78;
      pbVar2 = &(param_2->CrumblingData).bHasGlobalEvent;
      *pbVar2 = (bool)(*pbVar2 | (byte)(*(uint *)pFVar17 >> 1) & 1);
      pFVar17 = pFVar17 + 1;
    }
    if ((local_res20 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((bVar18 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((bVar18 & 4) != 0) {
      FThreadStats::AddMessage(FVar4,CycleScopeEnd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
}

// operator() @ 143f4e4e0

void __thiscall
`Chaos::FEventDefaults::RegisterRemovalEvent'::__l2::<lambda_1>::operator()
          (void *this,FPBDRigidsSolver *param_1,FRemovalEventData *param_2,bool param_3)

{
  TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  undefined8 *puVar4;
  FPBDRigidsEvolutionGBF *pFVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  uint uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  TMap<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  longlong *plVar23;
  int local_res10 [2];
  ulonglong local_res18;
  undefined1 local_res20 [8];
  int local_d8 [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong *local_68;
  code *local_60;
  undefined1 *local_58;
  
  if ((param_1 == (FPBDRigidsSolver *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                          ,0x207,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  puVar14 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_58 = local_res20;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar15 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar14);
  if ((*(int *)(pFVar15 + 2) < 1) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar1 = &(param_2->RemovalData).AllRemovalArray;
  if (param_3) {
    iVar12 = (param_2->RemovalData).AllRemovalArray.ArrayMax;
    (param_2->RemovalData).AllRemovalArray.ArrayNum = 0;
    if (iVar12 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&pTVar1->AllocatorInstance,0,
                 &(param_2->RemovalData).AllRemovalArray.ArrayMax);
    }
    TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&(param_2->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap);
  }
  this_00 = &(param_2->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap;
  uVar22 = 0;
  (param_2->RemovalData)._padding_ = param_1->_padding_;
  pFVar5 = (param_1->MEvolution).Ptr;
  plVar23 = &pFVar5->_padding_;
  iVar12 = (int)pFVar5->_padding_;
  if (0 < iVar12) {
    lVar21 = 0;
    do {
      uVar20 = ~uVar22 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar22 < iVar12) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar6 = *(ulonglong *)(*plVar23 + 0x20 + lVar21);
      local_res18 = uVar6;
      if ((*(longlong *)(uVar6 + 0x20) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (**(char **)(uVar6 + 0x20) == '\0') {
        local_a0 = 0;
        local_78 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        uVar16 = 0;
        if ((int)uVar22 < (int)pFVar5->_padding_) {
          uVar16 = uVar20;
        }
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar4 = (undefined8 *)(*plVar23 + lVar21);
        local_c8 = *puVar4;
        uStack_c0 = puVar4[1];
        local_b8 = *(undefined8 *)(*plVar23 + 0x10 + lVar21);
        uVar16 = 0;
        if ((int)uVar22 < (int)pFVar5->_padding_) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uStack_b0 = *(undefined8 *)(*plVar23 + 0x18 + lVar21);
        local_a8 = local_res18;
        uVar16 = 0;
        if ((int)uVar22 < (int)pFVar5->_padding_) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar18 = *plVar23;
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        puVar4 = (undefined8 *)(lVar18 + 0x28 + lVar21);
        local_a0 = *puVar4;
        uStack_98 = puVar4[1];
        uStack_90 = *(undefined8 *)(lVar18 + 0x38 + lVar21);
        puVar4 = (undefined8 *)(lVar18 + 0x40 + lVar21);
        local_88 = *puVar4;
        uStack_80 = puVar4[1];
        local_78 = *(undefined8 *)(lVar18 + 0x50 + lVar21);
        if (((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             pFVar7 + (longlong)(param_2->RemovalData).AllRemovalArray.ArrayMax * 0x58)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar12 = (param_2->RemovalData).AllRemovalArray.ArrayNum;
        piVar2 = &(param_2->RemovalData).AllRemovalArray.ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&pTVar1->AllocatorInstance,piVar2);
          (param_2->RemovalData).AllRemovalArray.ArrayNum = iVar12;
        }
        (param_2->RemovalData).AllRemovalArray.ArrayNum = iVar12 + 1;
        lVar18 = (longlong)iVar12 * 0x58;
        pFVar8 = (pTVar1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar18) = local_c8;
        *(undefined8 *)(pFVar8 + lVar18 + 8) = uStack_c0;
        *(undefined8 *)(pFVar8 + lVar18 + 0x10) = local_b8;
        *(undefined8 *)(pFVar8 + lVar18 + 0x18) = uStack_b0;
        *(ulonglong *)(pFVar8 + lVar18 + 0x20) = local_a8;
        *(undefined8 *)(pFVar8 + lVar18 + 0x28) = local_a0;
        *(undefined8 *)(pFVar8 + lVar18 + 0x28 + 8) = uStack_98;
        *(undefined8 *)(pFVar8 + lVar18 + 0x38) = uStack_90;
        pFVar7 = pFVar8 + lVar18 + 0x40;
        *(undefined4 *)pFVar7 = (undefined4)local_88;
        *(undefined4 *)(pFVar7 + 4) = local_88._4_4_;
        *(undefined4 *)(pFVar7 + 8) = (undefined4)uStack_80;
        *(undefined4 *)(pFVar7 + 0xc) = uStack_80._4_4_;
        *(undefined8 *)(pFVar8 + lVar18 + 0x50) = local_78;
        uVar16 = ((uint)(local_res18 >> 0x14) & 0xffff ^ (uint)(local_res18 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = uVar16 >> 0x10 ^ uVar16;
        if (*(int *)&(param_2->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x8 !=
            *(int *)&(param_2->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x34) {
          puVar9 = *(undefined1 **)
                    &(param_2->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x40;
          puVar19 = &(param_2->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x38;
          if (puVar9 != (undefined1 *)0x0) {
            puVar19 = puVar9;
          }
          iVar13 = *(int *)(puVar19 +
                           (ulonglong)
                           (*(int *)&(param_2->PhysicsProxyToRemovalIndices).
                                     PhysicsProxyToIndicesMap.field_0x48 - 1U & uVar16) * 4);
          if (iVar13 != -1) {
            do {
              puVar17 = (ulonglong *)((longlong)iVar13 * 0x20 + *(longlong *)&this_00->field_0x0);
              if (*puVar17 == local_res18) {
                if (puVar17 != (ulonglong *)0x0) goto LAB_143f4e9ae;
                break;
              }
              iVar13 = (int)puVar17[3];
            } while (iVar13 != -1);
          }
        }
        local_68 = &local_res18;
        TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<IPhysicsProxyBase_*_const_&>_>
                  ((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_res10,
                   (TKeyInitializer<IPhysicsProxyBase_*_const_&> *)(ulonglong)uVar16,
                   (bool *)&local_68);
        puVar17 = (ulonglong *)((longlong)local_res10[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_143f4e9ae:
        pFVar3 = (ForAnyElementType *)(puVar17 + 1);
        local_d8[0] = iVar12;
        if (((pFVar3->Data <= (FScriptContainerElement *)local_d8) &&
            ((FScriptContainerElement *)local_d8 <
             pFVar3->Data + (longlong)*(int *)((longlong)puVar17 + 0x14) * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar12 = (int)puVar17[2];
        if (iVar12 == *(int *)((longlong)puVar17 + 0x14)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar3,(int *)((longlong)puVar17 + 0x14));
        }
        *(int *)(puVar17 + 2) = iVar12 + 1;
        *(int *)(pFVar3->Data + (longlong)iVar12 * 4) = local_d8[0];
      }
      iVar12 = (int)pFVar5->_padding_;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 0x58;
    } while ((int)uVar22 < iVar12);
  }
  return;
}

// operator() @ 143f4eaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FEventDefaults::RegisterSleepingEvent'::__l2::<lambda_1>::operator()
          (void *this,FPBDRigidsSolver *param_1,FSleepingEventData *param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  PSRWLOCK SRWLock;
  FPBDRigidsSolver *pFVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_GatherSleepingEvent> FVar17;
  TGeometryParticle<double,3> **ppTVar18;
  IPhysicsProxyBase *pIVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FNameEntryId FVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_148 [32];
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5 [5];
  uint local_e0;
  uint uStack_dc;
  ForAnyElementType local_d8;
  uint local_d0;
  int local_cc;
  FColor_u_0 local_c8 [2];
  FName local_c0;
  FScriptContainerElement *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  FName local_98;
  PSRWLOCK local_88;
  FScriptContainerElement *local_80;
  FPBDRigidsSolver *local_78;
  code *local_70;
  undefined1 *local_68;
  FName local_60;
  TPBDRigidParticles<double,3> *local_58;
  TPBDRigidClusteredParticles<double,3> *pTStack_50;
  TPBDGeometryCollectionParticles<double,3> *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_78 = param_1;
  if (param_1 == (FPBDRigidsSolver *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Solver",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                        ,0x1d2,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar14 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_68 = local_e5;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar15 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_70,puVar14);
  if (*(int *)(pFVar15 + 2) < 1) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3522308889972310308>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                        ,0x124,"IsInPhysicsThreadContext()");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar17 = StatPtr_STAT_GatherSleepingEvent;
  if (StatPtr_STAT_GatherSleepingEvent == (FThreadSafeStaticStat<FStat_STAT_GatherSleepingEvent>)0x0
     ) {
    pFVar16 = ::FName::FName(&local_60,"STAT_GatherSleepingEvent");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_GatherSleepingEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherSleepingEvent,*pFVar16,
                        L"Gathering Sleeping Event Data","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar17;
  bVar10 = false;
  bVar7 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  bVar9 = false;
  bVar11 = false;
  FVar22 = FVar3.ComparisonIndex.Value;
  uVar12 = FVar3.Number;
  if ((FVar22.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar7 = true;
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar22.Value;
        local_c0.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                   ,0x1d6);
        bVar10 = true;
        bVar7 = true;
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0 = FVar22.Value;
      uStack_dc = uVar12;
      local_b0 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar9 = true;
      goto LAB_143f4ec91;
    }
  }
  bVar7 = bVar11;
  bVar10 = bVar9;
  bVar9 = false;
  local_b0 = local_98;
LAB_143f4ec91:
  piVar1 = &(param_2->SleepingData).ArrayMax;
  (param_2->SleepingData).ArrayNum = 0;
  if ((param_2->SleepingData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)param_2,0,piVar1);
  }
  local_58 = (param_1->Particles).DynamicParticles.Ptr;
  pTStack_50 = (param_1->Particles).ClusteredParticles.Ptr;
  local_48 = (param_1->Particles).GeometryCollectionParticles.Ptr;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,&local_d8,3,&local_cc);
  *(TPBDRigidParticles<double,3> **)local_d8.Data = local_58;
  *(TPBDRigidClusteredParticles<double,3> **)(local_d8.Data + 8) = pTStack_50;
  *(TPBDGeometryCollectionParticles<double,3> **)(local_d8.Data + 0x10) = local_48;
  uVar20 = (ulonglong)(int)local_d0;
  local_e0 = local_d0;
  local_80 = local_d8.Data + uVar20 * 8;
  uVar21 = uVar20;
  FVar23.Data = local_d8.Data;
  while( true ) {
    pFVar25 = local_80;
    local_b8 = FVar23.Data;
    if ((int)uVar20 != (int)uVar21) {
      local_e7 = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticles<double,3>_*_const,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_e7);
    }
    pFVar8 = local_78;
    if (FVar23.Data == pFVar25) break;
    lVar4 = *(longlong *)FVar23.Data;
    if (lVar4 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                          ,0x1e7,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_88 = (PSRWLOCK)(lVar4 + 0x538);
    AcquireSRWLockShared(local_88);
    iVar2 = *(int *)(lVar4 + 0x530);
    pFVar25 = ((ForAnyElementType *)(lVar4 + 0x528))->Data;
    pFVar26 = pFVar25 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (*(int *)(lVar4 + 0x530) != iVar2) {
        local_e6 = 0;
        `TCheckedPointerIterator<Chaos::TSleepData<double,3>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e6);
      }
      SRWLock = local_88;
      if (pFVar25 == pFVar26) break;
      puVar5 = *(undefined8 **)pFVar25;
      if (puVar5 != (undefined8 *)0x0) {
        ppTVar18 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)*puVar5,*(int *)(puVar5 + 1));
        if (*ppTVar18 != (TGeometryParticle<double,3> *)0x0) {
          pIVar19 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                              ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)pFVar25,
                               *(int *)(*(undefined8 **)pFVar25 + 1));
          if (pIVar19 != (IPhysicsProxyBase *)0x0) {
            pFVar24 = (param_2->SleepingData).AllocatorInstance.Data;
            local_a8 = 0;
            uStack_a0 = 1;
            if ((pFVar24 <= (FScriptContainerElement *)&local_a8) &&
               ((FScriptContainerElement *)&local_a8 < pFVar24 + (longlong)*piVar1 * 0x10)) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar12 = (param_2->SleepingData).ArrayNum;
            if (uVar12 == *piVar1) {
              uVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)param_2,piVar1);
            }
            (param_2->SleepingData).ArrayNum = uVar12 + 1;
            pFVar24 = (param_2->SleepingData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
            *(undefined8 *)pFVar24 = local_a8;
            *(ulonglong *)(pFVar24 + 8) = CONCAT71(uStack_9f,uStack_a0);
            uVar13 = 0;
            if ((int)uVar12 < (param_2->SleepingData).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pFVar24 = (param_2->SleepingData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
            pIVar19 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)pFVar25,
                                 *(int *)(*(undefined8 **)pFVar25 + 1));
            *(IPhysicsProxyBase **)pFVar24 = pIVar19;
            pFVar24[8] = pFVar25[8];
          }
        }
      }
      pFVar25 = pFVar25 + 0x10;
    }
    ReleaseSRWLockShared(local_88);
    AcquireSRWLockExclusive(SRWLock);
    *(undefined4 *)(lVar4 + 0x530) = 0;
    if (*(int *)(lVar4 + 0x534) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar4 + 0x528),0,(int *)(lVar4 + 0x534));
    }
    ReleaseSRWLockExclusive(SRWLock);
    uVar20 = (ulonglong)local_d0;
    FVar23.Data = local_b8 + 8;
    uVar21 = (ulonglong)local_e0;
  }
  Chaos::TRigidParticles<double,3>::ClearSleepData
            ((TRigidParticles<double,3> *)(local_78->Particles).DynamicKinematicParticles.Ptr);
  Chaos::TRigidParticles<double,3>::ClearSleepData
            ((TRigidParticles<double,3> *)(pFVar8->Particles).DynamicDisabledParticles.Ptr);
  FVar3 = local_b0;
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar3,CycleScopeEnd);
  }
  return;
}

// operator() @ 143f4f040

void __thiscall
`Chaos::FEventDefaults::RegisterTrailingEvent'::__l2::<lambda_1>::operator()
          (void *this,FPBDRigidsSolver *param_1,FTrailingEventData *param_2,bool param_3)

{
  TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_> *pTVar1;
  ForAnyElementType *pFVar2;
  undefined8 uVar3;
  FPBDRigidsEvolutionGBF *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FSolverTrailingEventFilter *this_01;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  FImplicitObject *pFVar14;
  TVector<double,3> *pTVar15;
  double *pdVar16;
  undefined8 *puVar17;
  TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *pTVar18;
  uint uVar19;
  int *piVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  longlong lVar24;
  longlong lVar25;
  TMap<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  undefined8 *puVar26;
  undefined1 local_res10 [8];
  uint local_288;
  undefined1 local_284 [4];
  int local_280;
  uint local_27c;
  undefined1 local_278 [40];
  double dStack_250;
  undefined1 local_248 [16];
  TVector<double,3> local_238;
  TVector<double,3> TStack_220;
  double local_208;
  IPhysicsProxyBase *local_200;
  TVector<double,3> local_1f8;
  TVector<double,3> TStack_1e0;
  int local_1c8;
  IPhysicsProxyBase **local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  TVector<double,3> local_98;
  TVector<double,3> local_80;
  undefined1 local_68 [64];
  
  if ((param_1 == (FPBDRigidsSolver *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                         ,0x172,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar12 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_198 = local_284;
  local_1a0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar13 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1a0,puVar12);
  if ((*(int *)(pFVar13 + 2) < 1) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3522308889972310308>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x124,"IsInPhysicsThreadContext()"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((param_1->MSolverEventFilters).Ptr)->TrailingEventsEnabled == false) {
    return;
  }
  pFVar4 = (param_1->MEvolution).Ptr;
  pTVar1 = &(param_2->TrailingData).AllTrailingsArray;
  if (param_3) {
    iVar10 = (param_2->TrailingData).AllTrailingsArray.ArrayMax;
    (param_2->TrailingData).AllTrailingsArray.ArrayNum = 0;
    if (iVar10 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,0,&pTVar1->AllocatorInstance,0,
                 &(param_2->TrailingData).AllTrailingsArray.ArrayMax);
    }
    TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&(param_2->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap);
  }
  this_02 = &(param_2->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap;
  (param_2->TrailingData)._padding_ = param_1->_padding_;
  (param_2->PhysicsProxyToTrailingIndices)._padding_ = param_1->_padding_;
  local_1b0 = pFVar4->_padding_;
  local_27c = *(uint *)(local_1b0 + 0x240);
  uVar22 = (ulonglong)(int)local_27c;
  puVar26 = *(undefined8 **)(local_1b0 + 0x238);
  local_1a8 = puVar26 + uVar22;
LAB_143f4f1b0:
  do {
    while( true ) {
      puVar17 = local_1a8;
      if (*(int *)(local_1b0 + 0x240) != (int)uVar22) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (puVar26 == puVar17) {
        return;
      }
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)*puVar26;
      uVar11 = (uint)this_00->_padding_;
      lVar24 = this_00->_padding_;
      uVar19 = 0;
      if ((int)uVar11 < *(int *)(lVar24 + 1000)) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = _finite(*(double *)(*(longlong *)(lVar24 + 0x3e0) + (longlong)(int)uVar11 * 8));
      if (iVar10 != 0) break;
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6800962416931765872>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                         ,400,"FMath::IsFinite(ActiveParticle->InvM())");
      if (bVar9) {
code_r0x000143f4fa8c:
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar26 = puVar26 + 1;
      uVar22 = (ulonglong)local_27c;
    }
    uVar11 = (uint)this_00->_padding_;
    lVar24 = this_00->_padding_;
    uVar19 = 0;
    if ((int)uVar11 < *(int *)(lVar24 + 1000)) {
      uVar19 = ~uVar11 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((*(double *)(*(longlong *)(lVar24 + 0x3e0) + (longlong)(int)uVar11 * 8) != 0.0) &&
        (pFVar14 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00),
        pFVar14 != (FImplicitObject *)0x0)) &&
       (pFVar14 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00),
       pFVar14->bHasBoundingBox != false)) {
      pTVar15 = Chaos::TParticles<double,3>::GetX
                          ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
      iVar10 = _finite(*(double *)pTVar15);
      if (((iVar10 != 0) && (iVar10 = _finite(*(double *)&pTVar15->field_0x8), iVar10 != 0)) &&
         (iVar10 = _finite(*(double *)&pTVar15->field_0x10), iVar10 != 0)) {
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                   (TVector<double,3> *)&local_190,(int)this_00->_padding_);
        iVar10 = _finite(local_190);
        if (((iVar10 != 0) && (iVar10 = _finite(local_188), iVar10 != 0)) &&
           (iVar10 = _finite(local_180), iVar10 != 0)) {
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                     (TVector<double,3> *)&local_178,(int)this_00->_padding_);
          iVar10 = _finite(local_178);
          if (((iVar10 != 0) && (iVar10 = _finite(local_170), iVar10 != 0)) &&
             (iVar10 = _finite(local_168), iVar10 != 0)) {
            pdVar16 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
            iVar10 = _finite(*pdVar16);
            if (iVar10 != 0) {
              local_278._0_8_ = 0;
              local_278._8_8_ = 0;
              local_248._8_8_ = UE::Math::TQuat<double>::Identity.W;
              local_248._0_8_ = UE::Math::TQuat<double>::Identity.Z;
              local_278._32_8_ = UE::Math::TQuat<double>::Identity.X;
              dStack_250 = UE::Math::TQuat<double>::Identity.Y;
              local_238._0_8_ = 0;
              local_238._8_8_ = 0;
              TStack_220._8_8_ = 0;
              TStack_220._16_8_ = 0;
              local_1f8._0_8_ = 0;
              local_1f8._8_8_ = 0;
              TStack_1e0._8_8_ = 0;
              TStack_1e0._16_8_ = 0;
              local_278._16_8_ = 0;
              local_208 = 0.0;
              local_238._16_8_ = 0;
              TStack_220._0_8_ = 0;
              local_200 = (IPhysicsProxyBase *)0x0;
              local_1f8._16_8_ = 0;
              TStack_1e0._0_8_ = 0;
              local_1c8 = -1;
              pTVar15 = Chaos::TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)this_00->_padding_,
                                   (int)this_00->_padding_);
              uVar11 = (uint)this_00->_padding_;
              lVar25 = (longlong)(int)uVar11;
              lVar24 = this_00->_padding_;
              local_278._0_8_ = *(undefined8 *)pTVar15;
              local_278._8_8_ = *(undefined8 *)&pTVar15->field_0x8;
              local_278._16_8_ = *(undefined8 *)&pTVar15->field_0x10;
              uVar19 = 0;
              if ((int)uVar11 < *(int *)(lVar24 + 0x50)) {
                uVar19 = ~uVar11 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar24 = *(longlong *)(lVar24 + 0x48);
              uVar3 = *(undefined8 *)(lVar24 + 8 + lVar25 * 0x10);
              dStack_250 = (double)*(float *)(lVar24 + 4 + lVar25 * 0x10);
              local_278._32_8_ = (undefined8)*(float *)(lVar24 + lVar25 * 0x10);
              dVar8 = (double)(float)((ulonglong)uVar3 >> 0x20);
              local_248._8_4_ = SUB84(dVar8,0);
              local_248._0_8_ = (double)(float)uVar3;
              local_248._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                        ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,&local_98,
                         (int)this_00->_padding_);
              local_238._0_8_ = local_98._0_8_;
              local_238._8_8_ = local_98._8_8_;
              local_238._16_8_ = local_98._16_8_;
              Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                        ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,&local_80,
                         (int)this_00->_padding_);
              TStack_220._0_8_ = local_80._0_8_;
              TStack_220._8_8_ = local_80._8_8_;
              TStack_220._16_8_ = local_80._16_8_;
              pdVar16 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
              local_208 = *pdVar16;
              local_200 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                                     (int)this_00->_padding_);
              pFVar14 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00);
              if (pFVar14->bHasBoundingBox != false) {
                pFVar14 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00);
                puVar17 = (undefined8 *)(**(code **)(pFVar14->_padding_ + 0x90))(pFVar14,local_68);
                local_1f8._0_8_ = *puVar17;
                local_1f8._8_8_ = puVar17[1];
                local_1f8._16_8_ = puVar17[2];
                TStack_1e0._0_8_ = puVar17[3];
                TStack_1e0._8_8_ = puVar17[4];
                TStack_1e0._16_8_ = puVar17[5];
              }
              if (local_200->Type == GeometryCollectionType) {
                pTVar18 = TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                                  *)&local_200[0xd].Owner,
                                 (TPBDRigidParticleHandleImp<double,3,1> *)this_00);
                piVar20 = (int *)&pTVar18->field_0x8;
                if (pTVar18 == (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *)0x0) {
                  piVar20 = (int *)0x0;
                }
                if (piVar20 == (int *)0x0) {
                  local_1c8 = -1;
                }
                else {
                  local_1c8 = *piVar20;
                }
              }
              else {
                local_1c8 = -1;
              }
              this_01 = (((param_1->MSolverEventFilters).Ptr)->TrailingFilter).Ptr;
              if (((this_01->Settings).FilterEnabled != false) &&
                 (bVar9 = Chaos::FSolverTrailingEventFilter::Pass
                                    (this_01,(FTrailingData *)local_278), !bVar9))
              goto LAB_143f4fa8d;
              pFVar5 = (pTVar1->AllocatorInstance).Data;
              local_158 = 0;
              uStack_150 = 0;
              local_128 = UE::Math::TQuat<double>::Identity.Z;
              dStack_120 = UE::Math::TQuat<double>::Identity.W;
              local_138 = UE::Math::TQuat<double>::Identity.X;
              dStack_130 = UE::Math::TQuat<double>::Identity.Y;
              local_118 = 0;
              uStack_110 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_148 = 0;
              local_e8 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_e0 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_a8 = 0xffffffff;
              if (((pFVar5 <= (FScriptContainerElement *)&local_158) &&
                  ((FScriptContainerElement *)&local_158 <
                   pFVar5 + (longlong)(param_2->TrailingData).AllTrailingsArray.ArrayMax * 0xc0)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar11 = (param_2->TrailingData).AllTrailingsArray.ArrayNum;
              piVar20 = &(param_2->TrailingData).AllTrailingsArray.ArrayMax;
              if (uVar11 == *piVar20) {
                uVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10c0,&pTVar1->AllocatorInstance,piVar20);
                (param_2->TrailingData).AllTrailingsArray.ArrayNum = uVar11;
              }
              (param_2->TrailingData).AllTrailingsArray.ArrayNum = uVar11 + 1;
              pFVar5 = (pTVar1->AllocatorInstance).Data;
              lVar24 = (longlong)(int)uVar11 * 0xc0;
              *(undefined8 *)(pFVar5 + lVar24) = local_158;
              *(undefined8 *)(pFVar5 + lVar24 + 8) = uStack_150;
              *(undefined8 *)(pFVar5 + lVar24 + 0x10) = local_148;
              *(double *)(pFVar5 + lVar24 + 0x20) = local_138;
              *(double *)(pFVar5 + lVar24 + 0x20 + 8) = dStack_130;
              *(double *)(pFVar5 + lVar24 + 0x30) = local_128;
              *(double *)(pFVar5 + lVar24 + 0x30 + 8) = dStack_120;
              *(undefined8 *)(pFVar5 + lVar24 + 0x40) = local_118;
              *(undefined8 *)(pFVar5 + lVar24 + 0x40 + 8) = uStack_110;
              *(undefined8 *)(pFVar5 + lVar24 + 0x50) = local_108;
              *(undefined8 *)(pFVar5 + lVar24 + 0x58) = uStack_100;
              *(undefined8 *)(pFVar5 + lVar24 + 0x58 + 8) = local_f8;
              *(undefined8 *)(pFVar5 + lVar24 + 0x68) = uStack_f0;
              *(undefined8 *)(pFVar5 + lVar24 + 0x70) = local_e8;
              *(undefined8 *)(pFVar5 + lVar24 + 0x78) = local_e0;
              *(undefined8 *)(pFVar5 + lVar24 + 0x80) = local_d8;
              *(undefined8 *)(pFVar5 + lVar24 + 0x80 + 8) = uStack_d0;
              *(undefined8 *)(pFVar5 + lVar24 + 0x90) = local_c8;
              *(undefined8 *)(pFVar5 + lVar24 + 0x98) = uStack_c0;
              *(undefined8 *)(pFVar5 + lVar24 + 0x98 + 8) = local_b8;
              *(undefined8 *)(pFVar5 + lVar24 + 0xa8) = uStack_b0;
              *(undefined4 *)(pFVar5 + lVar24 + 0xb0) = local_a8;
              uVar19 = 0;
              if ((int)uVar11 < (param_2->TrailingData).AllTrailingsArray.ArrayNum) {
                uVar19 = ~uVar11 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar5 = (pTVar1->AllocatorInstance).Data;
              *(undefined8 *)(pFVar5 + lVar24) = local_278._0_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 8) = local_278._8_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x10) = local_278._16_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x20) = local_278._32_8_;
              *(double *)(pFVar5 + lVar24 + 0x20 + 8) = dStack_250;
              *(undefined8 *)(pFVar5 + lVar24 + 0x30) = local_248._0_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x30 + 8) = local_248._8_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x40) = local_238._0_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x40 + 8) = local_238._8_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x50) = local_238._16_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x58) = TStack_220._0_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x58 + 8) = TStack_220._8_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x68) = TStack_220._16_8_;
              *(double *)(pFVar5 + lVar24 + 0x70) = local_208;
              *(IPhysicsProxyBase **)(pFVar5 + lVar24 + 0x78) = local_200;
              *(undefined8 *)(pFVar5 + lVar24 + 0x80) = local_1f8._0_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x80 + 8) = local_1f8._8_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x90) = local_1f8._16_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x98) = TStack_1e0._0_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0x98 + 8) = TStack_1e0._8_8_;
              *(undefined8 *)(pFVar5 + lVar24 + 0xa8) = TStack_1e0._16_8_;
              *(int *)(pFVar5 + lVar24 + 0xb0) = local_1c8;
              uVar19 = ((uint)((ulonglong)local_200 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_200 >> 4)) * -0x7a143595;
              uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
              uVar19 = uVar19 >> 0x10 ^ uVar19;
              if (*(int *)&(param_2->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.
                           field_0x8 !=
                  *(int *)&(param_2->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.
                           field_0x34) {
                puVar6 = *(undefined1 **)
                          &(param_2->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.
                           field_0x40;
                puVar23 = &(param_2->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.
                           field_0x38;
                if (puVar6 != (undefined1 *)0x0) {
                  puVar23 = puVar6;
                }
                iVar10 = *(int *)(puVar23 +
                                 (ulonglong)
                                 (*(int *)&(param_2->PhysicsProxyToTrailingIndices).
                                           PhysicsProxyToIndicesMap.field_0x48 - 1U & uVar19) * 4);
                if (iVar10 != -1) {
                  do {
                    plVar21 = (longlong *)
                              ((longlong)iVar10 * 0x20 + *(longlong *)&this_02->field_0x0);
                    if ((IPhysicsProxyBase *)*plVar21 == local_200) {
                      if (plVar21 != (longlong *)0x0) goto LAB_143f4f9ac;
                      break;
                    }
                    iVar10 = (int)plVar21[3];
                  } while (iVar10 != -1);
                }
              }
              local_1b8 = &local_200;
              TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<IPhysicsProxyBase_*_const_&>_>
                        ((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_02,(uint)&local_280,
                         (TKeyInitializer<IPhysicsProxyBase_*_const_&> *)(ulonglong)uVar19,
                         (bool *)&local_1b8);
              plVar21 = (longlong *)((longlong)local_280 * 0x20 + *(longlong *)&this_02->field_0x0);
LAB_143f4f9ac:
              pFVar2 = (ForAnyElementType *)(plVar21 + 1);
              local_288 = uVar11;
              if (((pFVar2->Data <= (FScriptContainerElement *)&local_288) &&
                  ((FScriptContainerElement *)&local_288 <
                   pFVar2->Data + (longlong)*(int *)((longlong)plVar21 + 0x14) * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar10 = (int)plVar21[2];
              if (iVar10 == *(int *)((longlong)plVar21 + 0x14)) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar2,(int *)((longlong)plVar21 + 0x14));
              }
              *(int *)(plVar21 + 2) = iVar10 + 1;
              puVar26 = puVar26 + 1;
              *(uint *)(pFVar2->Data + (longlong)iVar10 * 4) = local_288;
              uVar22 = (ulonglong)local_27c;
              goto LAB_143f4f1b0;
            }
          }
        }
      }
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6800962416931765863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventDefaults.cpp"
                         ,0x199,
                         "!ActiveParticle->GetX().ContainsNaN() && !ActiveParticle->GetV().ContainsNaN() && !ActiveParticle->GetW().ContainsNaN() && FMath::IsFinite(ActiveParticle->M())"
                        );
      if (bVar9) goto code_r0x000143f4fa8c;
    }
LAB_143f4fa8d:
    puVar26 = puVar26 + 1;
    uVar22 = (ulonglong)local_27c;
  } while( true );
}

// RegisterBreakingEvent @ 143f70f30

void __cdecl Chaos::FEventDefaults::RegisterBreakingEvent(FEventManager *param_1)

{
  TEventContainer<Chaos::FBreakingEventData> *this;
  TEventContainer<Chaos::FBreakingEventData> *pTVar1;
  undefined ***pppuVar2;
  int local_res8 [2];
  TEventContainer<Chaos::FBreakingEventData> *local_res10;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFBreakingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pTVar1 = (TEventContainer<Chaos::FBreakingEventData> *)0x0;
  local_50 = (undefined ***)0x0;
  local_60 = `Chaos::FEventDefaults::RegisterBreakingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this = ::operator_new(0x170);
  if (this != (TEventContainer<Chaos::FBreakingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)**pppuVar2)(pppuVar2,local_38);
    pTVar1 = TEventContainer<Chaos::FBreakingEventData>::TEventContainer<Chaos::FBreakingEventData>
                       (this,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 1;
  local_res10 = pTVar1;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar2 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar2 = local_50;
  }
  (*(code *)(*pppuVar2)[2])();
  return;
}

// RegisterCollisionEvent @ 143f71040

void __cdecl Chaos::FEventDefaults::RegisterCollisionEvent(FEventManager *param_1)

{
  TEventContainer<Chaos::FCollisionEventData> *this;
  undefined ***pppuVar1;
  int local_res8 [2];
  TEventContainer<Chaos::FCollisionEventData> *local_res10;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  code *local_38 [2];
  undefined1 local_28 [24];
  undefined8 local_10;
  
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFCollisionEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this = ::operator_new(0x170);
  local_res10 = (TEventContainer<Chaos::FCollisionEventData> *)0x0;
  if (this != (TEventContainer<Chaos::FCollisionEventData> *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool>
                  ::Call;
    local_10 = 0;
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)**pppuVar1)(pppuVar1,local_28);
    local_res10 = TEventContainer<Chaos::FCollisionEventData>::
                  TEventContainer<Chaos::FCollisionEventData>
                            (this,&param_1->BufferMode,
                             (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool)>
                              *)local_38);
  }
  local_res8[0] = 0;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar1 = &local_58;
  if (local_40 != (undefined ***)0x0) {
    pppuVar1 = local_40;
  }
  (*(code *)(*pppuVar1)[2])();
  return;
}

// RegisterCrumblingEvent @ 143f71150

void __cdecl Chaos::FEventDefaults::RegisterCrumblingEvent(FEventManager *param_1)

{
  TEventContainer<Chaos::FCrumblingEventData> *this;
  TEventContainer<Chaos::FCrumblingEventData> *pTVar1;
  undefined ***pppuVar2;
  int local_res8 [2];
  TEventContainer<Chaos::FCrumblingEventData> *local_res10;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFCrumblingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pTVar1 = (TEventContainer<Chaos::FCrumblingEventData> *)0x0;
  local_50 = (undefined ***)0x0;
  local_60 = `Chaos::FEventDefaults::RegisterCrumblingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this = ::operator_new(0x170);
  if (this != (TEventContainer<Chaos::FCrumblingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)**pppuVar2)(pppuVar2,local_38);
    pTVar1 = TEventContainer<Chaos::FCrumblingEventData>::
             TEventContainer<Chaos::FCrumblingEventData>
                       (this,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 5;
  local_res10 = pTVar1;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar2 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar2 = local_50;
  }
  (*(code *)(*pppuVar2)[2])();
  return;
}

// RegisterRemovalEvent @ 143f72040

void __cdecl Chaos::FEventDefaults::RegisterRemovalEvent(FEventManager *param_1)

{
  TEventContainer<Chaos::FRemovalEventData> *this;
  TEventContainer<Chaos::FRemovalEventData> *pTVar1;
  undefined ***pppuVar2;
  int local_res8 [2];
  TEventContainer<Chaos::FRemovalEventData> *local_res10;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFRemovalEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pTVar1 = (TEventContainer<Chaos::FRemovalEventData> *)0x0;
  local_50 = (undefined ***)0x0;
  local_60 = `Chaos::FEventDefaults::RegisterRemovalEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
  ;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this = ::operator_new(0x170);
  if (this != (TEventContainer<Chaos::FRemovalEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)**pppuVar2)(pppuVar2,local_38);
    pTVar1 = TEventContainer<Chaos::FRemovalEventData>::TEventContainer<Chaos::FRemovalEventData>
                       (this,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 4;
  local_res10 = pTVar1;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar2 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar2 = local_50;
  }
  (*(code *)(*pppuVar2)[2])();
  return;
}

// RegisterSleepingEvent @ 143f72150

void __cdecl Chaos::FEventDefaults::RegisterSleepingEvent(FEventManager *param_1)

{
  TEventContainer<Chaos::FSleepingEventData> *this;
  TEventContainer<Chaos::FSleepingEventData> *pTVar1;
  undefined ***pppuVar2;
  int local_res8 [2];
  TEventContainer<Chaos::FSleepingEventData> *local_res10;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFSleepingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pTVar1 = (TEventContainer<Chaos::FSleepingEventData> *)0x0;
  local_50 = (undefined ***)0x0;
  local_60 = `Chaos::FEventDefaults::RegisterSleepingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this = ::operator_new(0x170);
  if (this != (TEventContainer<Chaos::FSleepingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)**pppuVar2)(pppuVar2,local_38);
    pTVar1 = TEventContainer<Chaos::FSleepingEventData>::TEventContainer<Chaos::FSleepingEventData>
                       (this,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 3;
  local_res10 = pTVar1;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar2 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar2 = local_50;
  }
  (*(code *)(*pppuVar2)[2])();
  return;
}

// RegisterSystemEvents @ 143f72260

void __cdecl Chaos::FEventDefaults::RegisterSystemEvents(FEventManager *param_1)

{
  TEventContainer<Chaos::FCollisionEventData> *this;
  TEventContainer<Chaos::FBreakingEventData> *this_00;
  TEventContainer<Chaos::FBreakingEventData> *pTVar1;
  TEventContainer<Chaos::FTrailingEventData> *this_01;
  TEventContainer<Chaos::FTrailingEventData> *pTVar2;
  TEventContainer<Chaos::FSleepingEventData> *this_02;
  TEventContainer<Chaos::FSleepingEventData> *pTVar3;
  TEventContainer<Chaos::FRemovalEventData> *this_03;
  TEventContainer<Chaos::FRemovalEventData> *pTVar4;
  TEventContainer<Chaos::FCrumblingEventData> *this_04;
  TEventContainer<Chaos::FCrumblingEventData> *pTVar5;
  undefined ***pppuVar6;
  int local_res8 [2];
  TEventContainer<Chaos::FCollisionEventData> *local_res10;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFCollisionEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pTVar5 = (TEventContainer<Chaos::FCrumblingEventData> *)0x0;
  local_50 = (undefined ***)0x0;
  local_60 = `Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this = ::operator_new(0x170);
  local_res10 = (TEventContainer<Chaos::FCollisionEventData> *)pTVar5;
  if (this != (TEventContainer<Chaos::FCollisionEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)**pppuVar6)(pppuVar6,local_38);
    local_res10 = TEventContainer<Chaos::FCollisionEventData>::
                  TEventContainer<Chaos::FCollisionEventData>
                            (this,&param_1->BufferMode,
                             (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool)>
                              *)local_48);
  }
  local_res8[0] = 0;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar6 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar6 = local_50;
  }
  (*(code *)(*pppuVar6)[2])();
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFBreakingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `Chaos::FEventDefaults::RegisterBreakingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this_00 = ::operator_new(0x170);
  pTVar1 = (TEventContainer<Chaos::FBreakingEventData> *)pTVar5;
  if (this_00 != (TEventContainer<Chaos::FBreakingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)**pppuVar6)(pppuVar6,local_38);
    pTVar1 = TEventContainer<Chaos::FBreakingEventData>::TEventContainer<Chaos::FBreakingEventData>
                       (this_00,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 1;
  local_res10 = (TEventContainer<Chaos::FCollisionEventData> *)pTVar1;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar6 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar6 = local_50;
  }
  (*(code *)(*pppuVar6)[2])();
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFTrailingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `Chaos::FEventDefaults::RegisterTrailingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this_01 = ::operator_new(0x170);
  pTVar2 = (TEventContainer<Chaos::FTrailingEventData> *)pTVar5;
  if (this_01 != (TEventContainer<Chaos::FTrailingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)**pppuVar6)(pppuVar6,local_38);
    pTVar2 = TEventContainer<Chaos::FTrailingEventData>::TEventContainer<Chaos::FTrailingEventData>
                       (this_01,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 2;
  local_res10 = (TEventContainer<Chaos::FCollisionEventData> *)pTVar2;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar6 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar6 = local_50;
  }
  (*(code *)(*pppuVar6)[2])();
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFSleepingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `Chaos::FEventDefaults::RegisterSleepingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this_02 = ::operator_new(0x170);
  pTVar3 = (TEventContainer<Chaos::FSleepingEventData> *)pTVar5;
  if (this_02 != (TEventContainer<Chaos::FSleepingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)**pppuVar6)(pppuVar6,local_38);
    pTVar3 = TEventContainer<Chaos::FSleepingEventData>::TEventContainer<Chaos::FSleepingEventData>
                       (this_02,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 3;
  local_res10 = (TEventContainer<Chaos::FCollisionEventData> *)pTVar3;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar6 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar6 = local_50;
  }
  (*(code *)(*pppuVar6)[2])();
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFRemovalEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `Chaos::FEventDefaults::RegisterRemovalEvent'::__l2::<lambda_1>::<lambda_invoker_cdecl>
  ;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this_03 = ::operator_new(0x170);
  pTVar4 = (TEventContainer<Chaos::FRemovalEventData> *)pTVar5;
  if (this_03 != (TEventContainer<Chaos::FRemovalEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)**pppuVar6)(pppuVar6,local_38);
    pTVar4 = TEventContainer<Chaos::FRemovalEventData>::TEventContainer<Chaos::FRemovalEventData>
                       (this_03,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 4;
  local_res10 = (TEventContainer<Chaos::FCollisionEventData> *)pTVar4;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar6 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar6 = local_50;
  }
  (*(code *)(*pppuVar6)[2])();
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFCrumblingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `Chaos::FEventDefaults::RegisterCrumblingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this_04 = ::operator_new(0x170);
  if (this_04 != (TEventContainer<Chaos::FCrumblingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)**pppuVar6)(pppuVar6,local_38);
    pTVar5 = TEventContainer<Chaos::FCrumblingEventData>::
             TEventContainer<Chaos::FCrumblingEventData>
                       (this_04,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 5;
  local_res10 = (TEventContainer<Chaos::FCollisionEventData> *)pTVar5;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar6 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar6 = local_50;
  }
  (*(code *)(*pppuVar6)[2])();
  return;
}

// RegisterTrailingEvent @ 143f72710

void __cdecl Chaos::FEventDefaults::RegisterTrailingEvent(FEventManager *param_1)

{
  TEventContainer<Chaos::FTrailingEventData> *this;
  TEventContainer<Chaos::FTrailingEventData> *pTVar1;
  undefined ***pppuVar2;
  int local_res8 [2];
  TEventContainer<Chaos::FTrailingEventData> *local_res10;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXPEBVFPBDRigidsSolver_Chaos__AEAUFTrailingEventData_2__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pTVar1 = (TEventContainer<Chaos::FTrailingEventData> *)0x0;
  local_50 = (undefined ***)0x0;
  local_60 = `Chaos::FEventDefaults::RegisterTrailingEvent'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  this = ::operator_new(0x170);
  if (this != (TEventContainer<Chaos::FTrailingEventData> *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool>
                  ::Call;
    local_20 = 0;
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)**pppuVar2)(pppuVar2,local_38);
    pTVar1 = TEventContainer<Chaos::FTrailingEventData>::TEventContainer<Chaos::FTrailingEventData>
                       (this,&param_1->BufferMode,
                        (TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool)>
                         *)local_48);
  }
  local_res8[0] = 2;
  local_res10 = pTVar1;
  FEventManager::InternalRegisterInjector(param_1,local_res8,(FEventContainerBase **)&local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
  pppuVar2 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar2 = local_50;
  }
  (*(code *)(*pppuVar2)[2])();
  return;
}

