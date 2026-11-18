// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// FSystemSubsequentTasks @ 146182710

/* WARNING: Enum "Type": Some values do not have unique names */

FSystemSubsequentTasks * __thiscall
UE::MovieScene::FSystemSubsequentTasks::FSystemSubsequentTasks
          (FSystemSubsequentTasks *this,FMovieSceneEntitySystemGraph *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,EEntityThreadingModel param_3)

{
  this->Graph = param_1;
  (this->Subsequents).Object = (FSystemTaskPrerequisites *)0x0;
  (this->Subsequents).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->AllTasks = param_2;
  this->ThreadingModel = param_3;
  return this;
}

// AddComponentTask @ 14618d460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemSubsequentTasks::AddComponentTask
          (FSystemSubsequentTasks *this,FComponentTypeID param_1,
          TRefCountPtr<FBaseGraphTask> param_2)

{
  FSharedReferencer<1> *this_00;
  int *piVar1;
  FSystemTaskPrerequisites *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost> FVar13;
  TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> *pTVar14;
  ulonglong uVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar16;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  undefined8 *puVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  undefined1 local_68 [24];
  uint local_50;
  uint local_4c;
  TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> local_48;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if ((this->ThreadingModel == NoThreading) && (GIgnoreDependenciesWhenNotThreading)) {
    puVar18 = *(undefined8 **)param_2.Reference;
    goto LAB_14618d88b;
  }
  FVar13 = StatPtr_MovieSceneEval_SystemDependencyCost;
  if (StatPtr_MovieSceneEval_SystemDependencyCost ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)0x0) {
    pFVar12 = ::FName::FName(&local_80,"MovieSceneEval_SystemDependencyCost");
    FVar13 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SystemDependencyCost,
                        *pFVar12,L"System Dependency Cost","STATGROUP_MovieSceneECS",
                        "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true
                        ,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar16 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar16 == 0)) {
LAB_14618d5dc:
    bVar8 = false;
    FVar20 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar19.Value;
        local_res20.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSystemTaskDependencies.cpp"
                   ,100);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14618d5dc;
    local_88.s.LowPart = FVar19.Value;
    local_88.s.HighPart = uVar16;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar8 = true;
  }
  if (*(longlong *)param_2.Reference != 0) {
    if ((this->Subsequents).Object == (FSystemTaskPrerequisites *)0x0) {
      pTVar14 = MakeShared<UE::MovieScene::FSystemTaskPrerequisites,1>(&local_48);
      local_68._8_8_ = (pTVar14->SharedReferenceCount).ReferenceController;
      local_68._0_8_ = pTVar14->Object;
      if ((TReferenceControllerBase<1> *)local_68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00 = &(this->Subsequents).SharedReferenceCount;
      if (this != (FSystemSubsequentTasks *)local_68) {
        (this->Subsequents).Object = (FSystemTaskPrerequisites *)local_68._0_8_;
        local_68._0_8_ = (FSystemTaskPrerequisites *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (this_00,(FSharedReferencer<1> *)(local_68 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      uVar15 = (ulonglong)this->NodeID;
      pFVar2 = (this->Subsequents).Object;
      lVar3 = *(longlong *)&(this->Graph->Nodes).Array;
      pTVar4 = this_00->ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar18 = (undefined8 *)(lVar3 + 0x10 + uVar15 * 0x28);
      local_38 = *puVar18;
      pTStack_30 = (TReferenceControllerBase<1> *)puVar18[1];
      *(FSystemTaskPrerequisites **)(lVar3 + 0x10 + uVar15 * 0x28) = pFVar2;
      *(TReferenceControllerBase<1> **)(lVar3 + 0x18 + uVar15 * 0x28) = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      if ((this->Subsequents).Object == (FSystemTaskPrerequisites *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    FSystemTaskPrerequisites::AddComponentTask
              ((this->Subsequents).Object,param_1,(TRefCountPtr<FBaseGraphTask> *)param_2.Reference)
    ;
    FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this->AllTasks;
    FVar17 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20);
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20) ==
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar17 = FVar5;
    }
    if (((ulonglong)FVar17 <= param_2.Reference) &&
       (param_2.Reference <
        (FBaseGraphTask *)((longlong)FVar17 + (longlong)*(int *)((longlong)FVar5 + 0x2c) * 8))) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = *(int *)((longlong)FVar5 + 0x28);
    if (iVar11 == *(int *)((longlong)FVar5 + 0x2c)) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0x2c));
    }
    *(int *)((longlong)FVar5 + 0x28) = iVar11 + 1;
    FVar17 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20);
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20) ==
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar17 = FVar5;
    }
    *(undefined8 *)((longlong)FVar17 + (longlong)iVar11 * 8) = 0;
    lVar3 = *(longlong *)param_2.Reference;
    *(longlong *)((longlong)FVar17 + (longlong)iVar11 * 8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
      UNLOCK();
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_50 = (uint)FVar20.ComparisonIndex.Value;
      local_4c = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_68._16_8_ = ZEXT48(local_88.s.LowPart);
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)(local_68 + 0x10));
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
  puVar18 = *(undefined8 **)param_2.Reference;
LAB_14618d88b:
  if (puVar18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar18 + 6);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)*puVar18)(puVar18,1);
    }
  }
  return;
}

// AddRootTask @ 14618f7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemSubsequentTasks::AddRootTask
          (FSystemSubsequentTasks *this,TRefCountPtr<FBaseGraphTask> param_1)

{
  FSharedReferencer<1> *this_00;
  int *piVar1;
  FSystemTaskPrerequisites *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost> FVar13;
  TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> *pTVar14;
  ulonglong uVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar16;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  undefined8 *puVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_88;
  FName local_80;
  undefined1 local_70 [24];
  uint local_58;
  uint local_54;
  TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> local_50;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  
  if ((this->ThreadingModel == NoThreading) && (GIgnoreDependenciesWhenNotThreading)) {
    puVar18 = *(undefined8 **)param_1.Reference;
    goto LAB_14618fbeb;
  }
  FVar13 = StatPtr_MovieSceneEval_SystemDependencyCost;
  if (StatPtr_MovieSceneEval_SystemDependencyCost ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)0x0) {
    pFVar12 = ::FName::FName(&local_88,"MovieSceneEval_SystemDependencyCost");
    FVar13 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SystemDependencyCost,
                        *pFVar12,L"System Dependency Cost","STATGROUP_MovieSceneECS",
                        "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true
                        ,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar16 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar16 == 0)) {
LAB_14618f93d:
    bVar8 = false;
    FVar20 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar19.Value;
        local_res18.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSystemTaskDependencies.cpp"
                   ,0x4f);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14618f93d;
    local_res20.s.LowPart = FVar19.Value;
    local_res20.s.HighPart = uVar16;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar8 = true;
  }
  if (*(longlong *)param_1.Reference != 0) {
    if ((this->Subsequents).Object == (FSystemTaskPrerequisites *)0x0) {
      pTVar14 = MakeShared<UE::MovieScene::FSystemTaskPrerequisites,1>(&local_50);
      local_70._8_8_ = (pTVar14->SharedReferenceCount).ReferenceController;
      local_70._0_8_ = pTVar14->Object;
      if ((TReferenceControllerBase<1> *)local_70._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_70._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_70._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00 = &(this->Subsequents).SharedReferenceCount;
      if (this != (FSystemSubsequentTasks *)local_70) {
        (this->Subsequents).Object = (FSystemTaskPrerequisites *)local_70._0_8_;
        local_70._0_8_ = (FSystemTaskPrerequisites *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (this_00,(FSharedReferencer<1> *)(local_70 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_70._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
      uVar15 = (ulonglong)this->NodeID;
      pFVar2 = (this->Subsequents).Object;
      lVar3 = *(longlong *)&(this->Graph->Nodes).Array;
      pTVar4 = this_00->ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar18 = (undefined8 *)(lVar3 + 0x10 + uVar15 * 0x28);
      local_40 = *puVar18;
      pTStack_38 = (TReferenceControllerBase<1> *)puVar18[1];
      *(FSystemTaskPrerequisites **)(lVar3 + 0x10 + uVar15 * 0x28) = pFVar2;
      *(TReferenceControllerBase<1> **)(lVar3 + 0x18 + uVar15 * 0x28) = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_38);
      if ((this->Subsequents).Object == (FSystemTaskPrerequisites *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    FSystemTaskPrerequisites::AddComponentTask
              ((this->Subsequents).Object,(FComponentTypeID)0xffff,
               (TRefCountPtr<FBaseGraphTask> *)param_1.Reference);
    FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this->AllTasks;
    FVar17 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20);
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20) ==
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar17 = FVar5;
    }
    if (((ulonglong)FVar17 <= param_1.Reference) &&
       (param_1.Reference <
        (FBaseGraphTask *)((longlong)FVar17 + (longlong)*(int *)((longlong)FVar5 + 0x2c) * 8))) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = *(int *)((longlong)FVar5 + 0x28);
    if (iVar11 == *(int *)((longlong)FVar5 + 0x2c)) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0x2c));
    }
    *(int *)((longlong)FVar5 + 0x28) = iVar11 + 1;
    FVar17 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20);
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x20) ==
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar17 = FVar5;
    }
    *(undefined8 *)((longlong)FVar17 + (longlong)iVar11 * 8) = 0;
    lVar3 = *(longlong *)param_1.Reference;
    *(longlong *)((longlong)FVar17 + (longlong)iVar11 * 8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
      UNLOCK();
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58 = (uint)FVar20.ComparisonIndex.Value;
      local_54 = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_70._16_8_ = ZEXT48(local_res20.s.LowPart);
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)(local_70 + 0x10));
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
  puVar18 = *(undefined8 **)param_1.Reference;
LAB_14618fbeb:
  if (puVar18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar18 + 6);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)*puVar18)(puVar18,1);
    }
  }
  return;
}

// ResetNode @ 1461cd890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemSubsequentTasks::ResetNode(FSystemSubsequentTasks *this,ushort param_1)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSystemTaskPrerequisites *pFVar4;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar7;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar9;
  
  if ((this->ThreadingModel != NoThreading) || (!GIgnoreDependenciesWhenNotThreading)) {
    lVar2 = *(longlong *)&(this->Graph->Nodes).Array;
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x18 + (ulonglong)param_1 * 0x28);
    pFVar4 = *(FSystemTaskPrerequisites **)(lVar2 + 0x10 + (ulonglong)param_1 * 0x28);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->Subsequents).SharedReferenceCount.ReferenceController;
    (this->Subsequents).Object = pFVar4;
    (this->Subsequents).SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    this->NodeID = param_1;
    FVar5 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
            (this->Subsequents).Object;
    if (FVar5 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      iVar1 = *(int *)((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                      ((longlong)FVar5 + 0x48))->InlineData;
      FVar7 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
               ((longlong)FVar5 + 0x40);
      if (*(int *)((longlong)FVar5 + 0x4c) < 0) {
        if (FVar7 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
          FVar7 = FVar5;
        }
        DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                  ((FPrerequisite *)FVar7,iVar1);
        *(undefined4 *)((longlong)FVar5 + 0x48) = 0;
        if (*(int *)((longlong)FVar5 + 0x4c) != 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                    (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                               *)FVar5,0,(int *)((longlong)FVar5 + 0x4c));
        }
      }
      else {
        if (FVar7 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
          FVar7 = FVar5;
        }
        DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                  ((FPrerequisite *)FVar7,iVar1);
        *(undefined4 *)((longlong)FVar5 + 0x48) = 0;
      }
      pFVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar5 + 0x50);
      pFVar8 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)FVar5 + 0x70);
      if (-1 < *(int *)((longlong)FVar5 + 0x7c)) {
        if (pFVar8 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
          pFVar8 = pFVar9;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)pFVar8,*(int *)((longlong)FVar5 + 0x78));
        *(undefined4 *)((longlong)FVar5 + 0x78) = 0;
        return;
      }
      if (pFVar8 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
        pFVar8 = pFVar9;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)pFVar8,*(int *)((longlong)FVar5 + 0x78));
      *(undefined4 *)((longlong)FVar5 + 0x78) = 0;
      if (*(int *)((longlong)FVar5 + 0x7c) != 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,0,pFVar9,0,(int *)((longlong)FVar5 + 0x7c));
      }
    }
  }
  return;
}

