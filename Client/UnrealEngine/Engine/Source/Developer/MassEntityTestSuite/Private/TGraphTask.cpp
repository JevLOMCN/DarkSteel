// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// CreateTask @ 14711bf90

/* WARNING: Enum "Type": Some values do not have unique names */

FConstructor __cdecl
TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask>::CreateTask
          (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1,Type param_2)

{
  undefined4 in_register_00000014;
  
  *(ulonglong *)(param_1->AllocatorInstance).InlineData = CONCAT44(in_register_00000014,param_2);
  return (FConstructor)param_1;
}

// ExecuteTask @ 14711e250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask>::ExecuteTask
          (TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<UE::Mass::Testing::FMassTestPhaseTickTask> *this_00;
  TAtomic<FMinimalName> TVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  Type TVar9;
  TStatId TVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  TRefCountPtr<FBaseGraphTask> local_res10 [3];
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  local_res10[0].Reference = (FBaseGraphTask *)this;
  TVar10 = UE::Mass::Testing::FMassTestPhaseTickTask::GetStatId();
  bVar4 = false;
  bVar6 = false;
  TVar3 = (TVar10.StatIdPtr)->Name;
  FVar11 = *(FName *)TVar3;
  FVar12 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar12.Value == 0) && (uVar8 == 0)) {
    TVar9 = UE::Mass::Testing::FMassTestPhaseTickTask::GetDesiredThread();
    UE::Mass::Testing::FMassTestPhaseTickTask::DoTask
              ((FMassTestPhaseTickTask *)this_00,TVar9,local_res10);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)TVar3 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)TVar3 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar12.Value = 0;
    }
    TVar9 = UE::Mass::Testing::FMassTestPhaseTickTask::GetDesiredThread();
    UE::Mass::Testing::FMassTestPhaseTickTask::DoTask
              ((FMassTestPhaseTickTask *)this_00,TVar9,local_res10);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar12.Value;
        QueryPerformanceCounter(&local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_38);
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
  }
  TSharedRef<FMassProcessingPhaseManager,1>::~TSharedRef<FMassProcessingPhaseManager,1>
            ((TSharedRef<FMassProcessingPhaseManager,1> *)this_00);
  if ((TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask> *)local_res10[0].Reference !=
      (TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask> *)0x0) {
    LOCK();
    plVar2 = (longlong *)&(local_res10[0].Reference)->field_0x30;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) &&
       ((TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask> *)local_res10[0].Reference !=
        (TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask> *)0x0)) {
      (*(code *)**(undefined8 **)local_res10[0].Reference)(local_res10[0].Reference,1);
    }
  }
  return;
}

