// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// ~FTaskDispatcherSolver @ 14406bc80

void __thiscall
Chaos::Private::FTaskDispatcherSolver::~FTaskDispatcherSolver(FTaskDispatcherSolver *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  FTaskBase *pFVar4;
  
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->ClusterBatchTasks).AllocatorInstance.Data,
             (this->ClusterBatchTasks).ArrayNum);
  pFVar3 = (this->ClusterBatchTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->GCBatchTasks).AllocatorInstance.Data,
             (this->GCBatchTasks).ArrayNum);
  pFVar3 = (this->GCBatchTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_> *)
             (this->PullDataDirtyRigidsArray).AllocatorInstance.Data,
             (this->PullDataDirtyRigidsArray).ArrayNum);
  pFVar3 = (this->PullDataDirtyRigidsArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->PreviousCopyRigidTask).Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->ClusterPendingTask).Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->GCPendingTask).Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->DirtyGCAndClusterPendingTask).Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->DirtyRigidPendingTasks).AllocatorInstance.Data,
             (this->DirtyRigidPendingTasks).ArrayNum);
  pFVar3 = (this->DirtyRigidPendingTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ActiveClusterUnions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ActiveGC).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *)
             (this->ActiveRigidArray).AllocatorInstance.Data,(this->ActiveRigidArray).ArrayNum);
  pFVar3 = (this->ActiveRigidArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 144070150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::
CollectPhysicsResults<`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'::__l2::<lambda_2>_>'
::__l4::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_CollectRigidsTasks ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_CollectRigidsTasks");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectRigidsTasks,*pFVar5,
                   L"STAT_CollectRigidsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_CollectRigidsTasks;
  if (StatPtr_STAT_CollectRigidsTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_CollectRigidsTasks");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectRigidsTasks,*pFVar5,
                         L"STAT_CollectRigidsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.h"
                   ,0x58);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1440702d6;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1440702d6:
  FPBDRigidsSolver::
  DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),*(int *)this,*(int *)((longlong)this + 4),
             *(TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 8));
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 144070480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::
CollectPhysicsResults<`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'::__l2::<lambda_1>,`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'::__l2::<lambda_2>_>'
::__l4::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_CollectRigidsTasks ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_CollectRigidsTasks");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectRigidsTasks,*pFVar5,
                   L"STAT_CollectRigidsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_CollectRigidsTasks;
  if (StatPtr_STAT_CollectRigidsTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_CollectRigidsTasks");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CollectRigidsTasks>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectRigidsTasks,*pFVar5,
                         L"STAT_CollectRigidsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.h"
                   ,0x58);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_144070606;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_144070606:
  FPBDRigidsSolver::
  DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),*(int *)this,*(int *)((longlong)this + 4),
             *(TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 8));
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 1440711b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::
CollectPhysicsResults<`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'::__l2::<lambda_2>_>'
::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_CollectGCAndClustersTasks ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_CollectGCAndClustersTasks");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectGCAndClustersTasks,*pFVar5,
                   L"STAT_CollectGCAndClustersTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_CollectGCAndClustersTasks;
  if (StatPtr_STAT_CollectGCAndClustersTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_CollectGCAndClustersTasks");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_13_::<lambda_1>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectGCAndClustersTasks,
                         *pFVar5,L"STAT_CollectGCAndClustersTasks","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.h"
                   ,99);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_144071336;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_144071336:
  FPBDRigidsSolver::
  DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'
  ::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),0,*(int *)((longlong)this + 8),
             (TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x10),
             (TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x20));
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 1440714e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::
CollectPhysicsResults<`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'::__l2::<lambda_1>,`Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'::__l2::<lambda_2>_>'
::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_CollectGCAndClustersTasks ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_CollectGCAndClustersTasks");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectGCAndClustersTasks,*pFVar5,
                   L"STAT_CollectGCAndClustersTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_CollectGCAndClustersTasks;
  if (StatPtr_STAT_CollectGCAndClustersTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_CollectGCAndClustersTasks");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_int___cdecl_Chaos::Private::FTaskDispatcherSolver::CollectPhysicsResults<_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>_>(_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_1>,_private:_int___cdecl_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>_>(int,int,_private:_void___cdecl_Chaos::FPBDRigidsSolver::BufferPhysicsResults(void)_::_24_::<lambda_2>)_::_2_::<lambda_2>,int,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_CollectGCAndClustersTasks>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollectGCAndClustersTasks,
                         *pFVar5,L"STAT_CollectGCAndClustersTasks","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.h"
                   ,99);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_144071666;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_144071666:
  FPBDRigidsSolver::
  DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'
  ::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),0,*(int *)((longlong)this + 8),
             (TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x10),
             (TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x20));
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 1440cdc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::__l2::<lambda_1>::operator()
          (void *this)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FTaskBase *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTask>
  FVar17;
  FTaskGraphInterface *pFVar18;
  longlong lVar19;
  FTaskBase *this_00;
  undefined8 *puVar20;
  FName FVar21;
  ulonglong uVar22;
  TArray<Chaos::FDirtyClusterUnionData,TSizedDefaultAllocator<32>_> *this_01;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  FColor_u_0 local_res20 [2];
  FName local_98;
  FName local_90;
  longlong local_88;
  longlong local_80;
  FName local_78;
  FName local_70;
  longlong local_68;
  FName local_60;
  
  uVar22 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BufferClusterResultsTask ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTask>
         )0x0) {
      pFVar16 = ::FName::FName(&local_78,"STAT_BufferClusterResultsTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferClusterResultsTask,*pFVar16,
                 L"STAT_BufferClusterResultsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_BufferClusterResultsTask;
  if (StatPtr_STAT_BufferClusterResultsTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTask>
       )0x0) {
    pFVar16 = ::FName::FName(&local_70,"STAT_BufferClusterResultsTask");
    FVar17 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferClusterResultsTask,
                          *pFVar16,L"STAT_BufferClusterResultsTask","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar17;
  bVar10 = false;
  bVar9 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_98.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                   ,0x80);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar11 = true;
      goto LAB_1440cddaa;
    }
  }
  bVar10 = bVar12;
  bVar9 = bVar11;
  bVar11 = false;
  local_90 = local_60;
  FVar21 = local_60;
LAB_1440cddaa:
  uVar23 = Chaos::MaxNumWorkers;
  uVar4 = *(uint *)(*(longlong *)this + 0x28);
  pFVar18 = FTaskGraphInterface::Get();
  iVar13 = (**(code **)((longlong)*pFVar18 + 0x20))(pFVar18);
  if ((int)(iVar13 - 1U) < (int)uVar23) {
    uVar23 = iVar13 - 1U;
  }
  uVar14 = 1;
  if (1 < (int)uVar23) {
    uVar14 = uVar23;
  }
  uVar23 = uVar4;
  if ((int)uVar14 < (int)uVar4) {
    uVar23 = uVar14;
  }
  uVar14 = 1;
  if (1 < (int)uVar23) {
    uVar14 = uVar23;
  }
  uVar14 = (int)((uVar4 - 1) + uVar14) / (int)uVar14;
  uVar23 = 1;
  if (1 < (int)uVar14) {
    uVar23 = uVar14;
  }
  iVar13 = (int)((uVar4 - 1) + uVar23) / (int)uVar23;
  if ((*(int *)(*(longlong *)((longlong)this + 8) + 0x78) != 0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7514351438210793612>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                          ,0x8c,"PullData->DirtyClusterUnions.Num() == 0"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *(longlong *)((longlong)this + 8);
  this_01 = (TArray<Chaos::FDirtyClusterUnionData,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x70);
  iVar5 = *(int *)(lVar6 + 0x78);
  if (iVar5 < (int)uVar4) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xf0,0x10,uVar4 - iVar5,(ForAnyElementType *)this_01,(int *)(lVar6 + 0x78),
                        (int *)(lVar6 + 0x7c));
    DefaultConstructItems<Chaos::FDirtyClusterUnionData,int>
              ((this_01->AllocatorInstance).Data + (longlong)iVar15 * 0xf0,uVar4 - iVar5);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar5) {
      uVar14 = iVar5 - uVar4;
      if (((int)(uVar14 | uVar4) < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar14 != 0) {
        TArray<Chaos::FDirtyClusterUnionData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_01,uVar4,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,(ForAnyElementType *)this_01,*(int *)(lVar6 + 0x78),
                   (int *)(lVar6 + 0x7c));
      }
    }
  }
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x80),iVar13,Default);
  uVar25 = uVar22;
  uVar14 = uVar23;
  local_80 = (longlong)iVar13;
  if (0 < iVar13) {
    do {
      local_88 = *(longlong *)this;
      lVar6 = *(longlong *)((longlong)this + 8);
      uVar26 = uVar14;
      if ((int)uVar4 < (int)uVar14) {
        uVar26 = uVar4;
      }
      lVar19 = local_88 + 0x20;
      this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<``Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (this_00,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp(150)"
                   ,Default,None,None);
        *(uint *)&this_00[1]._padding_ = uVar14 - uVar23;
        *(uint *)((longlong)&this_00[1]._padding_ + 4) = uVar26;
        this_00[1]._padding_ = lVar19;
        this_00[1]._padding_ = lVar6 + 0x70;
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<``Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
              ::_vftable_;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (this_00,(TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
                         (local_88 + 0x70),true);
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      lVar6 = *(longlong *)this;
      uVar24 = (uint)uVar25;
      uVar26 = 0;
      if ((int)uVar24 < *(int *)(lVar6 + 0x88)) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar2 = (longlong *)(*(longlong *)(lVar6 + 0x80) + uVar22 * 8);
      if (plVar2 == &local_68) {
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &this_00->RefCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            puVar20 = (undefined8 *)this_00->_padding_;
            goto LAB_1440ce0cf;
          }
        }
      }
      else {
        pFVar7 = (FTaskBase *)*plVar2;
        *plVar2 = (longlong)this_00;
        if (pFVar7 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &pFVar7->RefCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            puVar20 = (undefined8 *)pFVar7->_padding_;
            this_00 = pFVar7;
LAB_1440ce0cf:
            (*(code *)*puVar20)(this_00,1);
          }
        }
      }
      uVar22 = uVar22 + 1;
      FVar21 = local_90;
      uVar25 = (ulonglong)(uVar24 + 1);
      uVar14 = uVar14 + uVar23;
    } while ((longlong)uVar22 < local_80);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// operator() @ 1440ce1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  FTaskBase *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTask>
  FVar19;
  FTaskGraphInterface *pFVar20;
  FTaskBase *this_00;
  undefined8 *puVar21;
  FName FVar22;
  TArray<Chaos::FDirtyGeometryCollectionData,TSizedDefaultAllocator<32>_> *this_01;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  FColor_u_0 local_res20 [2];
  FName local_90;
  FName local_88;
  FName local_80;
  longlong local_70;
  FName local_68;
  FName local_60;
  longlong local_58 [3];
  
  uVar23 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BufferGCResultsTask ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTask>
         )0x0) {
      pFVar18 = ::FName::FName(&local_68,"STAT_BufferGCResultsTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferGCResultsTask,*pFVar18,
                 L"STAT_BufferGCResultsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_BufferGCResultsTask;
  if (StatPtr_STAT_BufferGCResultsTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTask>
       )0x0) {
    pFVar18 = ::FName::FName(&local_60,"STAT_BufferGCResultsTask");
    FVar19 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferGCResultsTask,*pFVar18,
                          L"STAT_BufferGCResultsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar19;
  bVar12 = false;
  bVar11 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_90.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                   ,0x59);
        bVar12 = true;
        bVar11 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar13 = true;
      goto LAB_1440ce384;
    }
  }
  bVar12 = bVar14;
  bVar11 = bVar13;
  bVar13 = false;
  local_88 = local_80;
  FVar22 = local_80;
LAB_1440ce384:
  uVar26 = Chaos::MaxNumWorkers;
  uVar4 = *(uint *)(*(longlong *)this + 0x18);
  pFVar20 = FTaskGraphInterface::Get();
  iVar15 = (**(code **)((longlong)*pFVar20 + 0x20))(pFVar20);
  if ((int)(iVar15 - 1U) < (int)uVar26) {
    uVar26 = iVar15 - 1U;
  }
  uVar16 = 1;
  if (1 < (int)uVar26) {
    uVar16 = uVar26;
  }
  uVar26 = uVar4;
  if ((int)uVar16 < (int)uVar4) {
    uVar26 = uVar16;
  }
  uVar16 = 1;
  if (1 < (int)uVar26) {
    uVar16 = uVar26;
  }
  uVar16 = (int)((uVar4 - 1) + uVar16) / (int)uVar16;
  uVar26 = 1;
  if (1 < (int)uVar16) {
    uVar26 = uVar16;
  }
  iVar15 = (int)((uVar4 - 1) + uVar26) / (int)uVar26;
  if ((*(int *)(*(longlong *)((longlong)this + 8) + 0x68) != 0) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7514351438210793573>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                          ,0x65,"PullData->DirtyGeometryCollections.Num() == 0"), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar6 = *(longlong *)((longlong)this + 8);
  this_01 = (TArray<Chaos::FDirtyGeometryCollectionData,TSizedDefaultAllocator<32>_> *)
            (lVar6 + 0x60);
  iVar5 = *(int *)(lVar6 + 0x68);
  if (iVar5 < (int)uVar4) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,uVar4 - iVar5,(ForAnyElementType *)this_01,(int *)(lVar6 + 0x68),
                        (int *)(lVar6 + 0x6c));
    DefaultConstructItems<Chaos::FDirtyGeometryCollectionData,int>
              ((this_01->AllocatorInstance).Data + (longlong)iVar17 * 0x20,uVar4 - iVar5);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar5) {
      uVar16 = iVar5 - uVar4;
      if (((int)(uVar16 | uVar4) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar16 != 0) {
        TArray<Chaos::FDirtyGeometryCollectionData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_01,uVar4,uVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,(ForAnyElementType *)this_01,*(int *)(lVar6 + 0x68),(int *)(lVar6 + 0x6c))
        ;
      }
    }
  }
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x70),iVar15,Default);
  uVar25 = uVar23;
  uVar16 = uVar26;
  local_70 = (longlong)iVar15;
  if (0 < iVar15) {
    do {
      lVar6 = *(longlong *)((longlong)this + 0x10);
      lVar7 = *(longlong *)this;
      lVar8 = *(longlong *)((longlong)this + 8);
      uVar27 = uVar16;
      if ((int)uVar4 < (int)uVar16) {
        uVar27 = uVar4;
      }
      this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<``Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (this_00,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp(111)"
                   ,Default,None,None);
        *(uint *)&this_00[1]._padding_ = uVar16 - uVar26;
        *(uint *)((longlong)&this_00[1]._padding_ + 4) = uVar27;
        this_00[1]._padding_ = lVar6;
        this_00[1]._padding_ = lVar7 + 0x10;
        this_00[1]._padding_ = lVar8 + 0x60;
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<``Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
              ::_vftable_;
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      uVar24 = (uint)uVar25;
      lVar6 = *(longlong *)this;
      uVar27 = 0;
      if ((int)uVar24 < *(int *)(lVar6 + 0x78)) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar2 = (longlong *)(*(longlong *)(lVar6 + 0x70) + uVar23 * 8);
      if (plVar2 == local_58) {
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &this_00->RefCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            puVar21 = (undefined8 *)this_00->_padding_;
            goto LAB_1440ce69d;
          }
        }
      }
      else {
        pFVar9 = (FTaskBase *)*plVar2;
        *plVar2 = (longlong)this_00;
        if (pFVar9 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &pFVar9->RefCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            puVar21 = (undefined8 *)pFVar9->_padding_;
            this_00 = pFVar9;
LAB_1440ce69d:
            (*(code *)*puVar21)(this_00,1);
          }
        }
      }
      uVar23 = uVar23 + 1;
      FVar22 = local_88;
      uVar25 = (ulonglong)(uVar24 + 1);
      uVar16 = uVar16 + uVar26;
    } while ((longlong)uVar23 < local_70);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// operator() @ 1440cfd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::__l18::<lambda_1>::operator()
          (void *this)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  FSingleParticlePhysicsProxy *pFVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  longlong lVar9;
  code *pcVar10;
  FProxyTimestampBase *pFVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  EObjectStateType EVar16;
  int iVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsTasks>
  FVar20;
  TVector<double,3> *pTVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar22;
  FName FVar23;
  TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp> *this_02;
  uint uVar24;
  TGeometryParticleHandleImp<double,3,1> *this_03;
  longlong lVar25;
  longlong lVar26;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FStatMessage local_88;
  FProxyTimestampBase *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FSingleParticlePhysicsProxy *local_68;
  FProxyTimestampBase *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  FSingleParticlePhysicsProxy *local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BufferRigidResultsTasks ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsTasks>
         )0x0) {
      pFVar19 = ::FName::FName(&local_a8,"STAT_BufferRigidResultsTasks");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferRigidResultsTasks,*pFVar19,
                 L"STAT_BufferRigidResultsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_BufferRigidResultsTasks;
  if (StatPtr_STAT_BufferRigidResultsTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsTasks>
       )0x0) {
    pFVar19 = ::FName::FName(&local_a0,"STAT_BufferRigidResultsTasks");
    FVar20 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsTasks>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferRigidResultsTasks,
                          *pFVar19,L"STAT_BufferRigidResultsTasks","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar20;
  bVar13 = false;
  bVar12 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_res18.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                   ,0x43);
        bVar13 = true;
        bVar12 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar14 = true;
      goto LAB_1440cfe9f;
    }
  }
  bVar13 = bVar15;
  bVar12 = bVar14;
  bVar14 = false;
  FVar23 = local_98;
LAB_1440cfe9f:
  uVar24 = 0;
  if (0 < *(int *)(*(longlong *)this + 8)) {
    lVar26 = 0;
    do {
      pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      iVar17 = *(int *)&pFVar4[1].Data;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1090,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar17 + 1;
      DefaultConstructItems<Chaos::FDirtyRigidParticleData,int>
                (pFVar4->Data + (longlong)iVar17 * 0x90,1);
      plVar5 = *(longlong **)this;
      uVar18 = 0;
      if ((int)uVar24 < (int)plVar5[1]) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar6 = *(longlong **)((longlong)this + 8);
      pFVar7 = *(FSingleParticlePhysicsProxy **)(lVar26 + *plVar5);
      uVar22 = (int)plVar6[1] - 1;
      uVar18 = 0;
      if ((int)uVar22 < (int)plVar6[1]) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar8 = pFVar7->Handle;
      this_02 = (TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp> *)
                (*plVar6 + -0x90 + (longlong)(int)plVar6[1] * 0x90);
      if (pTVar8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_03 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
          this_03 = pTVar8;
        }
        if (this_03 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          Chaos::TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp>::
          SetProxy(this_02,pFVar7);
          pTVar21 = Chaos::TParticles<double,3>::GetX
                              ((TParticles<double,3> *)this_03->_padding_,(int)this_03->_padding_);
          pFVar11 = *(FProxyTimestampBase **)&pTVar21->field_0x8;
          this_02[1].Proxy = *(FSingleParticlePhysicsProxy **)pTVar21;
          this_02[1].Timestamp.Object = pFVar11;
          this_02[1].Timestamp.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar21->field_0x10;
          uVar18 = (uint)this_03->_padding_;
          lVar25 = (longlong)(int)uVar18;
          lVar9 = this_03->_padding_;
          uVar22 = 0;
          if ((int)uVar18 < *(int *)(lVar9 + 0x50)) {
            uVar22 = ~uVar18 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar9 = *(longlong *)(lVar9 + 0x48);
          fVar2 = *(float *)(lVar9 + 4 + lVar25 * 0x10);
          uVar3 = *(undefined8 *)(lVar9 + 8 + lVar25 * 0x10);
          this_02[2].Proxy =
               (FSingleParticlePhysicsProxy *)(double)*(float *)(lVar9 + lVar25 * 0x10);
          this_02[2].Timestamp.Object = (FProxyTimestampBase *)(double)fVar2;
          this_02[2].Timestamp.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)(double)(float)uVar3;
          this_02[3].Proxy =
               (FSingleParticlePhysicsProxy *)(double)(float)((ulonglong)uVar3 >> 0x20);
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_03->_padding_,
                     (TVector<double,3> *)&local_78,(int)this_03->_padding_);
          this_02[3].Timestamp.Object = local_78;
          this_02[3].Timestamp.SharedReferenceCount.ReferenceController = pTStack_70;
          this_02[4].Proxy = local_68;
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_03->_padding_,
                     (TVector<double,3> *)&local_60,(int)this_03->_padding_);
          this_02[4].Timestamp.Object = local_60;
          this_02[4].Timestamp.SharedReferenceCount.ReferenceController = pTStack_58;
          this_02[5].Proxy = local_50;
          EVar16 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_03);
          *(EObjectStateType *)&this_02[5].Timestamp.Object = EVar16;
        }
      }
      uVar24 = uVar24 + 1;
      lVar26 = lVar26 + 8;
    } while ((int)uVar24 < *(int *)(*(longlong *)this + 8));
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
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

// operator() @ 1440d0330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::__l18::<lambda_2>::operator()
          (void *this)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsCopyTasks>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_BufferRigidResultsCopyTasks ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsCopyTasks>
           )0x0) {
        pFVar11 = ::FName::FName(&local_res20,"STAT_BufferRigidResultsCopyTasks");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferRigidResultsCopyTasks,*pFVar11,
                   L"STAT_BufferRigidResultsCopyTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                   ,true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar12 = StatPtr_STAT_BufferRigidResultsCopyTasks;
  if (StatPtr_STAT_BufferRigidResultsCopyTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsCopyTasks>
       )0x0) {
    pFVar11 = ::FName::FName(&local_58,"STAT_BufferRigidResultsCopyTasks");
    FVar12 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferRigidResults(Chaos::FPullPhysicsData_*)_::_18_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_BufferRigidResultsCopyTasks>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferRigidResultsCopyTasks,
                          *pFVar11,L"STAT_BufferRigidResultsCopyTasks","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                   ,0x4e);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar14.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_1440d04a2;
    }
  }
  bVar7 = false;
  FVar15 = local_50;
LAB_1440d04a2:
  pFVar3 = *(ForAnyElementType **)this;
  pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
  if (pFVar3 == pFVar4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = *(int *)&pFVar4[1].Data;
  if (iVar2 != 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x90,0x10,iVar2,pFVar3,(int *)(pFVar3 + 1),
                        (int *)((longlong)&pFVar3[1].Data + 4));
    ConstructItems<Chaos::FDirtyRigidParticleData,Chaos::FDirtyRigidParticleData,int>
              (pFVar3->Data + (longlong)iVar10 * 0x90,(FDirtyRigidParticleData *)pFVar4->Data,iVar2)
    ;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
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

// BufferClusterResults @ 1440d3e10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::Private::FTaskDispatcherSolver::BufferClusterResults
          (FTaskDispatcherSolver *this,FPullPhysicsData *param_1)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  FTaskBase *this_00;
  undefined8 *puVar5;
  longlong local_18 [2];
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp(126)"
               ,Default,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = (longlong)param_1;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
            (this_00,&this->GCPendingTask);
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  pFVar1 = &this->ClusterPendingTask;
  if (pFVar1 == (FTaskHandle *)local_18) {
    if (this_00 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar5 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar4 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = this_00;
    if (pFVar4 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pFVar4->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar5 = (undefined8 *)pFVar4->_padding_;
    this_00 = pFVar4;
  }
  (*(code *)*puVar5)(this_00,1);
  return;
}

// BufferGCResults @ 1440d3f10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::Private::FTaskDispatcherSolver::BufferGCResults
          (FTaskDispatcherSolver *this,FPullPhysicsData *param_1,FPBDRigidsSolver *param_2)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  FTaskBase *this_00;
  undefined8 *puVar5;
  longlong local_18 [2];
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp(87)"
               ,Default,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = (longlong)param_1;
    this_00[1]._padding_ = (longlong)param_2;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
            (this_00,&this->DirtyGCAndClusterPendingTask);
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  pFVar1 = &this->GCPendingTask;
  if (pFVar1 == (FTaskHandle *)local_18) {
    if (this_00 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar5 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar4 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = this_00;
    if (pFVar4 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pFVar4->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar5 = (undefined8 *)pFVar4->_padding_;
    this_00 = pFVar4;
  }
  (*(code *)*puVar5)(this_00,1);
  return;
}

// BufferRigidResults @ 1440d54d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::Private::FTaskDispatcherSolver::BufferRigidResults
          (FTaskDispatcherSolver *this,FPullPhysicsData *param_1)

{
  TArray<TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  code *pcVar8;
  FTaskHandle FVar9;
  bool bVar10;
  int iVar11;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  FTaskBase *pFVar12;
  uint uVar13;
  FTaskBase *this_02;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_48;
  FTaskHandle local_38;
  FTaskBase *local_30;
  
  if (((this->ActiveRigidArray).ArrayNum != this->NumRigidBatches) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveRigidArray.Num() == NumRigidBatches",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                          ,0x35,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->ActiveRigidArray).ArrayNum != (this->DirtyRigidPendingTasks).ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveRigidArray.Num() == DirtyRigidPendingTasks.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                          ,0x36,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar14 = this->NumRigidBatches;
  this_00 = &this->PullDataDirtyRigidsArray;
  iVar5 = (this->PullDataDirtyRigidsArray).ArrayNum;
  piVar1 = &(this->PullDataDirtyRigidsArray).ArrayNum;
  if (iVar5 < (int)uVar14) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar14 - iVar5,&this_00->AllocatorInstance,piVar1,
                        &(this->PullDataDirtyRigidsArray).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar11 * 0x10,0,
           (longlong)(int)(uVar14 - iVar5) << 4);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar5) {
      uVar16 = iVar5 - uVar14;
      if (((int)(uVar16 | uVar14) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar16 != 0) {
        TArray<TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar14,uVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,
                   &(this->PullDataDirtyRigidsArray).ArrayMax);
      }
    }
  }
  if (((param_1->DirtyRigids).ArrayNum != 0) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7514351438210793530>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                          ,0x3a,"PullData->DirtyRigids.Num() == 0"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar14 = 0;
  if (0 < this->NumRigidBatches) {
    lVar19 = 0;
    lVar20 = 0;
    do {
      uVar13 = ~uVar14 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar14 < (this->PullDataDirtyRigidsArray).ArrayNum) {
        uVar16 = uVar13;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar17 = (this->PullDataDirtyRigidsArray).AllocatorInstance.Data + lVar20;
      pFVar6 = pFVar17 + 0xc;
      if (*(int *)pFVar6 < 0) {
        DestructItems<Chaos::FDirtyRigidParticleData,int>
                  (*(FDirtyRigidParticleData **)&pFVar17->field_0x0,*(int *)&pFVar17[8].field_0x0);
        *(undefined4 *)&pFVar17[8].field_0x0 = 0;
        if (*(int *)pFVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,0x10,0,(ForAnyElementType *)pFVar17,0,(int *)pFVar6);
        }
      }
      else {
        DestructItems<Chaos::FDirtyRigidParticleData,int>
                  (*(FDirtyRigidParticleData **)&pFVar17->field_0x0,*(int *)&pFVar17[8].field_0x0);
        *(undefined4 *)&pFVar17[8].field_0x0 = 0;
      }
      uVar16 = 0;
      if ((int)uVar14 < (this->ActiveRigidArray).ArrayNum) {
        uVar16 = uVar13;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->ActiveRigidArray).AllocatorInstance.Data;
      uVar16 = 0;
      if ((int)uVar14 < (this->DirtyRigidPendingTasks).ArrayNum) {
        uVar16 = uVar13;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar3 = (this->DirtyRigidPendingTasks).AllocatorInstance.Data + lVar19 * 8;
      this_01.Reference =
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
      if (this_01.Reference == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                  ((FTaskBase *)0x0,(FTaskHandle *)pFVar3);
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
        local_38.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_01.Reference,2,true);
        (this_01.Reference)->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::`18'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (this_01.Reference,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp(65)"
                   ,Default,None,None);
        this_01.Reference[1]._padding_ = (longlong)(pFVar6 + lVar20);
        this_01.Reference[1]._padding_ = (longlong)pFVar17;
        (this_01.Reference)->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::`18'::<lambda_1>_>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                  (this_01.Reference,(FTaskHandle *)pFVar3);
        UE::Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x100);
        LOCK();
        (this_01.Reference)->RefCount =
             (atomic<unsigned_int>)((int)(this_01.Reference)->RefCount + 1);
        UNLOCK();
        local_38.Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
      }
      FVar9.Pimpl.Reference = local_38.Pimpl.Reference;
      this_02 = (FTaskBase *)0x0;
      local_30 = (this->PreviousCopyRigidTask).Pimpl.Reference;
      if (local_30 != (FTaskBase *)0x0) {
        LOCK();
        local_30->RefCount = (atomic<unsigned_int>)((int)local_30->RefCount + 1);
        UNLOCK();
      }
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,2,0,&local_48.AllocatorInstance,2,&local_48.ArrayMax);
      ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                (local_48.AllocatorInstance.Data,&local_38,2);
      pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar12 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
        pFVar12->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::`18'::<lambda_2>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (pFVar12,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp(76)"
                   ,Default,None,None);
        pFVar12[1]._padding_ = (longlong)param_1;
        pFVar12[1]._padding_ = (longlong)pFVar17;
        pFVar12->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::`18'::<lambda_2>_>
              ::_vftable_;
        this_02 = pFVar12;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (this_02,&local_48,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x100);
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      puVar15 = &stack0xffffffffffffffd8;
      lVar18 = 2;
      do {
        puVar7 = *(undefined8 **)(puVar15 + -8);
        puVar15 = puVar15 + -8;
        lVar18 = lVar18 + -1;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar7 + 6);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
      } while (lVar18 != 0);
      pFVar12 = (this->PreviousCopyRigidTask).Pimpl.Reference;
      if (pFVar12 != this_02) {
        (this->PreviousCopyRigidTask).Pimpl.Reference = this_02;
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        if (pFVar12 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &pFVar12->RefCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar12->_padding_)(pFVar12,1);
          }
        }
      }
      if (this_02 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &this_02->RefCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
      if (FVar9.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)FVar9.Pimpl.Reference + 0x30);
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)FVar9.Pimpl.Reference)(FVar9.Pimpl.Reference,1);
        }
      }
      uVar14 = uVar14 + 1;
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar14 < this->NumRigidBatches);
  }
  return;
}

// Initialize @ 1440e62c0

void __thiscall
Chaos::Private::FTaskDispatcherSolver::Initialize
          (FTaskDispatcherSolver *this,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FTaskBase *pFVar6;
  TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FTaskGraphInterface *pFVar13;
  int iVar14;
  FTaskHandle *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong local_28;
  longlong local_20;
  
  uVar17 = 0;
  this->NumRigidBatches = 0;
  iVar14 = *(int *)&param_1->field_0x8;
  uVar18 = uVar17;
  if (0 < iVar14) {
    do {
      uVar16 = (uint)uVar17;
      uVar10 = 0;
      if ((int)uVar16 < iVar14) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = MaxNumWorkers;
      lVar4 = *(longlong *)(*(longlong *)param_1 + 8 + uVar18);
      if (lVar4 == 0) {
        iVar12 = *(int *)(*(longlong *)(*(longlong *)param_1 + uVar18) + 0x18);
      }
      else {
        iVar12 = *(int *)(lVar4 + 8);
      }
      if (iVar12 != 0) {
        pFVar13 = FTaskGraphInterface::Get();
        iVar11 = (**(code **)((longlong)*pFVar13 + 0x20))(pFVar13);
        if (iVar11 + -1 < iVar14) {
          iVar14 = iVar11 + -1;
        }
        iVar11 = 1;
        if (1 < iVar14) {
          iVar11 = iVar14;
        }
        iVar14 = iVar12;
        if (iVar11 < iVar12) {
          iVar14 = iVar11;
        }
        iVar11 = 1;
        if (1 < iVar14) {
          iVar11 = iVar14;
        }
        iVar11 = (iVar11 + -1 + iVar12) / iVar11;
        iVar14 = 0x32;
        if (0x32 < iVar11) {
          iVar14 = iVar11;
        }
        this->NumRigidBatches = this->NumRigidBatches + (iVar14 + -1 + iVar12) / iVar14;
      }
      iVar14 = *(int *)&param_1->field_0x8;
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar16 + 1) < iVar14);
  }
  uVar10 = this->NumRigidBatches;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(this->DirtyRigidPendingTasks).ArrayMax;
  pFVar5 = (this->DirtyRigidPendingTasks).AllocatorInstance.Data;
  iVar14 = (this->DirtyRigidPendingTasks).ArrayNum;
  if (*piVar1 < (int)uVar10) {
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar5,iVar14);
    (this->DirtyRigidPendingTasks).ArrayNum = 0;
    if (*piVar1 != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,&(this->DirtyRigidPendingTasks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar5,iVar14);
    (this->DirtyRigidPendingTasks).ArrayNum = 0;
  }
  pFVar15 = &this->DirtyGCAndClusterPendingTask;
  if (pFVar15 != (FTaskHandle *)&local_28) {
    pFVar6 = (pFVar15->Pimpl).Reference;
    (pFVar15->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar6->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  iVar14 = (this->ActiveRigidArray).ArrayNum;
  piVar1 = &(this->ActiveRigidArray).ArrayNum;
  uVar10 = this->NumRigidBatches;
  if (iVar14 < (int)uVar10) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar10 - iVar14,(ForAnyElementType *)this,piVar1,
                        &(this->ActiveRigidArray).ArrayMax);
    memset((this->ActiveRigidArray).AllocatorInstance.Data + (longlong)iVar12 * 0x10,0,
           (longlong)(int)(uVar10 - iVar14) << 4);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar14) {
      uVar16 = iVar14 - uVar10;
      if (((int)(uVar16 | uVar10) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar16 != 0) {
        TArray<TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->ActiveRigidArray,uVar10,uVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,*piVar1,&(this->ActiveRigidArray).ArrayMax);
      }
    }
  }
  (this->ActiveGC).ArrayNum = 0;
  if ((this->ActiveGC).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveGC).AllocatorInstance,0,&(this->ActiveGC).ArrayMax);
  }
  (this->ActiveClusterUnions).ArrayNum = 0;
  if ((this->ActiveClusterUnions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveClusterUnions).AllocatorInstance,0,
               &(this->ActiveClusterUnions).ArrayMax);
  }
  piVar1 = &(this->PullDataDirtyRigidsArray).ArrayMax;
  pTVar7 = (TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_> *)
           (this->PullDataDirtyRigidsArray).AllocatorInstance.Data;
  iVar14 = (this->PullDataDirtyRigidsArray).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,iVar14);
    (this->PullDataDirtyRigidsArray).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PullDataDirtyRigidsArray).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<Chaos::FDirtyRigidParticleData,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,iVar14);
    (this->PullDataDirtyRigidsArray).ArrayNum = 0;
  }
  pFVar15 = &this->PreviousCopyRigidTask;
  if (pFVar15 != (FTaskHandle *)&local_20) {
    pFVar6 = (pFVar15->Pimpl).Reference;
    (pFVar15->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar6->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  return;
}

// WaitTaskEndBufferResults @ 1440f7aa0

void __thiscall
Chaos::Private::FTaskDispatcherSolver::WaitTaskEndBufferResults(FTaskDispatcherSolver *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTaskHandle local_res8;
  FTaskHandle local_res10;
  FTaskHandle local_res18 [2];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_38;
  
  if ((this->ActiveRigidArray).ArrayNum != this->NumRigidBatches) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveRigidArray.Num() == NumRigidBatches",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                       ,0xa4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->ActiveRigidArray).ArrayNum != (this->DirtyRigidPendingTasks).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveRigidArray.Num() == DirtyRigidPendingTasks.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                       ,0xa5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_res8.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->GCPendingTask).Pimpl.Reference;
  if (local_res8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_res8.Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_res8.Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_48.ArrayNum = 1;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_48.AllocatorInstance.Data,&local_res8,1);
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_48,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_res8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_res8.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res8.Pimpl.Reference)(local_res8.Pimpl.Reference,1);
    }
  }
  local_res10.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->ClusterPendingTask).Pimpl.Reference;
  if (local_res10.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_res10.Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_res10.Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_38.AllocatorInstance.Data,&local_res10,1);
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_38,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_res10.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_res10.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res10.Pimpl.Reference)(local_res10.Pimpl.Reference,1);
    }
  }
  local_res18[0].Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->PreviousCopyRigidTask).Pimpl.Reference;
  if (local_res18[0].Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_res18[0].Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_res18[0].Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_58.AllocatorInstance,1,&local_58.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_58.AllocatorInstance.Data,local_res18,1);
  if (local_res18[0].Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_res18[0].Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res18[0].Pimpl.Reference)(local_res18[0].Pimpl.Reference,1);
    }
  }
  if (&local_58 == &this->GCBatchTasks) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->GCBatchTasks).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&local_58.AllocatorInstance,&local_58.ArrayNum,&local_58.ArrayMax);
    ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
              (local_58.AllocatorInstance.Data + (longlong)iVar6 * 8,
               (FTaskHandle *)(this->GCBatchTasks).AllocatorInstance.Data,iVar3);
  }
  if (&local_58 == &this->ClusterBatchTasks) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->ClusterBatchTasks).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&local_58.AllocatorInstance,&local_58.ArrayNum,&local_58.ArrayMax);
    ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
              (local_58.AllocatorInstance.Data + (longlong)iVar6 * 8,
               (FTaskHandle *)(this->ClusterBatchTasks).AllocatorInstance.Data,iVar3);
  }
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_58,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

