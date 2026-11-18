// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1478c4d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPSOPrecacheFinishedTask::DoTask
          (FPSOPrecacheFinishedTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  atomic<int> aVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  atomic<int> aVar6;
  UPrimitiveComponent *this_00;
  FName *pFVar7;
  TStatIdData *pTVar8;
  UWorld *pUVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  this_00 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (UPrimitiveComponent *)0x0) {
    return;
  }
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FPSOPrecacheFinishedTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FPSOPrecacheFinishedTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FPSOPrecacheFinishedTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_PSOPrecacheFinishedTask = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_PSOPrecacheFinishedTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FPSOPrecacheFinishedTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l5::StatPtr_STAT_PSOPrecacheFinishedTask,*pFVar7,L"STAT_PSOPrecacheFinishedTask"
               ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FPSOPrecacheFinishedTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_PSOPrecacheFinishedTask;
  if (_StatPtr_STAT_PSOPrecacheFinishedTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_PSOPrecacheFinishedTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_void___cdecl_FPSOPrecacheFinishedTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l5::StatPtr_STAT_PSOPrecacheFinishedTask,*pFVar7,
                        L"STAT_PSOPrecacheFinishedTask","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PrimitiveComponent.cpp"
                   ,0x141e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_1478c4ead;
    }
  }
  bVar4 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_1478c4ead:
  aVar6 = this_00->LatestPSOPrecacheJobSetCompleted;
  do {
    if (this->JobSetThatJustCompleted <= (int)aVar6) break;
    LOCK();
    aVar2 = this_00->LatestPSOPrecacheJobSetCompleted;
    bVar14 = aVar6 == aVar2;
    if (bVar14) {
      this_00->LatestPSOPrecacheJobSetCompleted = (atomic<int>)this->JobSetThatJustCompleted;
      aVar2 = aVar6;
    }
    aVar6 = aVar2;
    UNLOCK();
  } while (!bVar14);
  if ((*(longlong *)&this_00->field_0xb0 != 0) ||
     (pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
     pUVar9 != (UWorld *)0x0)) {
    pUVar9 = *(UWorld **)&this_00->field_0xb0;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    }
    UWorld::AddPrimitiveComponentPSOPrecacheCompleted(pUVar9,this_00);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
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
  return;
}

