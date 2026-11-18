// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// DoTask @ 14dc452d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::DoTask
          (FClothSimulationProxyParallelTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  IClothComponentAdapter *pIVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  USkinnedMeshComponent *this_00;
  USkinnedAsset *pUVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ClothTotalTime> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  undefined4 in_register_00000014;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FName local_48;
  byte local_40;
  FStatMessage local_38;
  
  pIVar2 = this->ClothSimulationProxy->ClothComponentAdapter;
  this_00 = (USkinnedMeshComponent *)
            (**(code **)*pIVar2)(pIVar2,CONCAT44(in_register_00000014,param_1));
  pUVar6 = USkinnedMeshComponent::GetSkinnedAsset(this_00);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_48,(UObjectBaseUtility *)pUVar6);
  FVar12.Value = 0;
  FVar8 = StatPtr_STAT_ClothTotalTime;
  if (StatPtr_STAT_ClothTotalTime == (FThreadSafeStaticStat<FStat_STAT_ClothTotalTime>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_ClothTotalTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ClothTotalTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothTotalTime,*pFVar7,
                       L"Cloth Total","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                   ,0x68);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14dc45450;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14dc45450:
  if (`public:_void___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat105 == false) {
    FCsvProfilerTrace::OutputInlineStat("Cloth",_GCsvCategory_Animation.Index);
    `public:_void___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat105 = true;
  }
  uVar9 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("Cloth",_GCsvCategory_Animation.Index,"CSV_Cloth");
  if ((this->Type == Tick) || (this->Type != Initialization)) {
    FClothSimulationProxy::Tick(this->ClothSimulationProxy);
  }
  else {
    FClothSimulationProxy::ExecuteInitialization(this->ClothSimulationProxy);
  }
  FCsvProfiler::EndStat("Cloth",uVar9);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
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
  if ((local_40 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_40 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_40 & 4) != 0) {
    FThreadStats::AddMessage(local_48,CycleScopeEnd);
  }
  return;
}

// GetDesiredThread @ 14dc4b800

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  char cVar4;
  bool bVar5;
  Type TVar6;
  IConsoleManager *pIVar7;
  Type TVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_enum_ENamedThreads::Type___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_enum_ENamedThreads::Type___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_enum_ENamedThreads::Type___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar7 = IConsoleManager::Get();
    `public:_static_enum_ENamedThreads::Type___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)'
    ::__l2::CVarClothPhysicsUseTaskThread =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"p.ClothPhysics.UseTaskThread",1);
    _Init_thread_footer(&`public:_static_enum_ENamedThreads::Type___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((`public:_static_enum_ENamedThreads::Type___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)'
       ::__l2::CVarClothPhysicsUseTaskThread != (IConsoleVariable *)0x0) &&
     (cVar4 = (**(code **)(*(longlong *)
                            `public:_static_enum_ENamedThreads::Type___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread(void)'
                            ::__l2::CVarClothPhysicsUseTaskThread + 0xc0))(),
     TVar8 = CPrio_ClothSimulationProxyParallelTask.TaskPriorityIfForcedToNormalThreadPriority,
     TVar3 = CPrio_ClothSimulationProxyParallelTask.TaskPriority,
     TVar6 = CPrio_ClothSimulationProxyParallelTask.ThreadPriority, cVar4 != '\0')) {
    iVar2 = ENamedThreads::bHasHighPriorityThreads;
    if (((CPrio_ClothSimulationProxyParallelTask.ThreadPriority == HighThreadPriority) ||
        (iVar2 = ENamedThreads::bHasBackgroundThreads,
        CPrio_ClothSimulationProxyParallelTask.ThreadPriority == BackgroundThreadPriority)) &&
       (iVar2 == 0)) {
      if (((CPrio_ClothSimulationProxyParallelTask.TaskPriorityIfForcedToNormalThreadPriority &
           ~HighTaskPriority) != MainQueue) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xcd,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
    }
    else {
      if ((((CPrio_ClothSimulationProxyParallelTask.ThreadPriority & ~ThreadPriorityMask) !=
            MainQueue ||
            (CPrio_ClothSimulationProxyParallelTask.ThreadPriority & ThreadPriorityMask) ==
            ThreadPriorityMask) ||
          ((CPrio_ClothSimulationProxyParallelTask.TaskPriority & ~HighTaskPriority) != MainQueue))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                ,0xb1,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
      TVar8 = TVar6 | TVar3;
    }
    return TVar8 | AnyNormalThreadNormalTask;
  }
  return GameThread;
}

