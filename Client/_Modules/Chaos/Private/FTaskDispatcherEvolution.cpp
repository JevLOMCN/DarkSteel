// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// ~FTaskDispatcherEvolution @ 143d03b50

void __thiscall
Chaos::Private::FTaskDispatcherEvolution::~FTaskDispatcherEvolution(FTaskDispatcherEvolution *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  FTaskBase *pFVar4;
  
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->KinematicPendingTasks).AllocatorInstance.Data,
             (this->KinematicPendingTasks).ArrayNum);
  pFVar3 = (this->KinematicPendingTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->IntegrationPendingTasks).AllocatorInstance.Data,
             (this->IntegrationPendingTasks).ArrayNum);
  pFVar3 = (this->IntegrationPendingTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->UpdateViewTask).Pimpl.Reference;
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
  pFVar4 = (this->FlushAsyncQueueTask).Pimpl.Reference;
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
  pFVar4 = (this->AsyncQueueKinTask).Pimpl.Reference;
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
  pFVar4 = (this->AsyncQueueDynTask).Pimpl.Reference;
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
  return;
}

// operator() @ 143d0cba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
DispatchDynAsyncDirty<`Chaos::FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_2>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchDynAsyncDirty<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyAsyncDynamicParticleTask>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_DirtyAsyncDynamicParticleTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchDynAsyncDirty<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyAsyncDynamicParticleTask>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_DirtyAsyncDynamicParticleTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DirtyAsyncDynamicParticleTask,*pFVar4,
                   L"STAT_DirtyAsyncDynamicParticleTask","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_DirtyAsyncDynamicParticleTask;
  if (StatPtr_STAT_DirtyAsyncDynamicParticleTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchDynAsyncDirty<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyAsyncDynamicParticleTask>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_DirtyAsyncDynamicParticleTask");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchDynAsyncDirty<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_2>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyAsyncDynamicParticleTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DirtyAsyncDynamicParticleTask,
                         *pFVar4,L"STAT_DirtyAsyncDynamicParticleTask","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_2>::operator()(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x5d);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_2>::operator()(this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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
  }
  return;
}

// operator() @ 143d0cec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
DispatchKinAsyncDirtyAndUpdateKinematic<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l2::<lambda_3>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyMovingKinematicsTask>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_DirtyMovingKinematicsTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyMovingKinematicsTask>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_DirtyMovingKinematicsTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DirtyMovingKinematicsTask,*pFVar4,
                   L"STAT_DirtyMovingKinematicsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_DirtyMovingKinematicsTask;
  if (StatPtr_STAT_DirtyMovingKinematicsTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyMovingKinematicsTask>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_DirtyMovingKinematicsTask");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_DirtyMovingKinematicsTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DirtyMovingKinematicsTask,
                         *pFVar4,L"STAT_DirtyMovingKinematicsTask","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l2::<lambda_3>::operator()(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x69);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l2::<lambda_3>::operator()(this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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
  }
  return;
}

// operator() @ 143d0f7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
FlushAccelerationQueue<`Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::FlushAccelerationQueue<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FlushAsyncAccelerationQueueTask>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FlushAsyncAccelerationQueueTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::FlushAccelerationQueue<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FlushAsyncAccelerationQueueTask>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_FlushAsyncAccelerationQueueTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlushAsyncAccelerationQueueTask,
                   *pFVar4,L"STAT_FlushAsyncAccelerationQueueTask","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_FlushAsyncAccelerationQueueTask;
  if (StatPtr_STAT_FlushAsyncAccelerationQueueTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::FlushAccelerationQueue<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FlushAsyncAccelerationQueueTask>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_FlushAsyncAccelerationQueueTask");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::FlushAccelerationQueue<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(void)_::_2_::<lambda_1>)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FlushAsyncAccelerationQueueTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlushAsyncAccelerationQueueTask,
                         *pFVar4,L"STAT_FlushAsyncAccelerationQueueTask","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue'::__l2::<lambda_1>::operator()(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x134);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue'::__l2::<lambda_1>::operator()(this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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
  }
  return;
}

// operator() @ 143d14080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
DispatchIntegrate<`Chaos::FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_1>_>'::__l4::<lambda_1>
::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchIntegrate<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_IntegrateTask>
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
      if (StatPtr_STAT_IntegrateTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchIntegrate<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_IntegrateTask>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_IntegrateTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IntegrateTask,*pFVar5,
                   L"STAT_IntegrateTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_IntegrateTask;
  if (StatPtr_STAT_IntegrateTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchIntegrate<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_IntegrateTask>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_IntegrateTask");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchIntegrate<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>_>(_public:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::Integrate(double)_::_2_::<lambda_1>)_::_4_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_IntegrateTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IntegrateTask,*pFVar5,
                         L"STAT_IntegrateTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                         true,ST_int64,true,false,MCR_Invalid);
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x50);
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
      goto LAB_143d14205;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143d14205:
  FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 8),*(int *)((longlong)this + 0x60),
             *(int *)((longlong)this + 100),*(int *)((longlong)this + 0x68));
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

// operator() @ 143d20490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
DispatchKinematicsTarget<`Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l24::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l18::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
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
      if (StatPtr_STAT_KinematicTargetsTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_KinematicTargetsTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KinematicTargetsTask,*pFVar5,
                   L"STAT_KinematicTargetsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_KinematicTargetsTask;
  if (StatPtr_STAT_KinematicTargetsTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_KinematicTargetsTask");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_24_::<lambda_1>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KinematicTargetsTask,*pFVar5,
                         L"STAT_KinematicTargetsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x9e);
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
      goto LAB_143d20615;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143d20615:
  FPBDRigidsEvolutionGBF::
  DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l24::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()
            (this,*(int *)((longlong)this + 0x28),*(int *)((longlong)this + 0x2c),
             *(int *)((longlong)this + 0x34) + *(int *)((longlong)this + 0x30));
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

// operator() @ 143d207c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
DispatchKinematicsTarget<`Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l28::<lambda_2>_>'::__l2::<lambda_1>_>'
::__l18::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
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
      if (StatPtr_STAT_KinematicTargetsTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_KinematicTargetsTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KinematicTargetsTask,*pFVar5,
                   L"STAT_KinematicTargetsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_KinematicTargetsTask;
  if (StatPtr_STAT_KinematicTargetsTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_KinematicTargetsTask");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinematicsTarget<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>_>(int,int,double,double,bool,_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_28_::<lambda_2>)_::_2_::<lambda_1>,int,int)_::_18_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_KinematicTargetsTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KinematicTargetsTask,*pFVar5,
                         L"STAT_KinematicTargetsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x9e);
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
      goto LAB_143d20945;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143d20945:
  FPBDRigidsEvolutionGBF::
  DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l28::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()
            (this,*(int *)((longlong)this + 0x28),*(int *)((longlong)this + 0x2c),
             *(int *)((longlong)this + 0x34) + *(int *)((longlong)this + 0x30));
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

// operator() @ 143d21460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
PruneInternalPendingData<`Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData'::__l2::<lambda_1>_>'
::__l12::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_12_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CleanUpDuplicated>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_CleanUpDuplicated ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_12_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CleanUpDuplicated>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_CleanUpDuplicated");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CleanUpDuplicated,*pFVar4,
                   L"STAT_CleanUpDuplicated","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                   ,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_CleanUpDuplicated;
  if (StatPtr_STAT_CleanUpDuplicated ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_12_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CleanUpDuplicated>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_CleanUpDuplicated");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_12_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_CleanUpDuplicated>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CleanUpDuplicated,*pFVar4,
                         L"STAT_CleanUpDuplicated","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    Chaos::FPendingSpatialInternalDataQueue::CleanUpDuplicated
              (*(FPendingSpatialInternalDataQueue **)(*(longlong *)this + 0x48));
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0xbd);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    Chaos::FPendingSpatialInternalDataQueue::CleanUpDuplicated
              (*(FPendingSpatialInternalDataQueue **)(*(longlong *)this + 0x48));
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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
  }
  return;
}

// operator() @ 143d23900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
DispatchKinAsyncDirtyAndUpdateKinematic<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l2::<lambda_3>_>'
::__l5::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_UpdateAllMovingKinematicTask>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UpdateAllMovingKinematicTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_UpdateAllMovingKinematicTask>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_UpdateAllMovingKinematicTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateAllMovingKinematicTask,*pFVar4,
                   L"STAT_UpdateAllMovingKinematicTask","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_UpdateAllMovingKinematicTask;
  if (StatPtr_STAT_UpdateAllMovingKinematicTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_UpdateAllMovingKinematicTask>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_UpdateAllMovingKinematicTask");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_UpdateAllMovingKinematicTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateAllMovingKinematicTask,
                         *pFVar4,L"STAT_UpdateAllMovingKinematicTask","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    Chaos::FPBDRigidsSOAs::UpdateAllMovingKinematic
              (*(FPBDRigidsSOAs **)(*(longlong *)this + 0x40),false);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x77);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    Chaos::FPBDRigidsSOAs::UpdateAllMovingKinematic
              (*(FPBDRigidsSOAs **)(*(longlong *)this + 0x40),false);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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
  }
  return;
}

// operator() @ 143d25910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
PruneInternalPendingData<`Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData'::__l2::<lambda_1>_>'
::__l31::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  undefined2 uVar2;
  FName FVar3;
  longlong *plVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType *pFVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_31_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_PruneDynamicsPendingDataTask>
  FVar14;
  bool *pbVar15;
  TGeometryParticle<double,3> **ppTVar16;
  FUniqueIdx *pFVar17;
  longlong lVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar19;
  ulonglong uVar20;
  FNameEntryId FVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  undefined1 uVar24;
  undefined8 *local_res8;
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  FName local_d8;
  FScriptContainerElement *local_d0;
  FName local_c8;
  FName local_c0;
  TGeometryParticle<double,3> *local_b0;
  TGeometryParticleHandleImp<double,3,1> *local_a8;
  int local_a0;
  FCollisionFilterData local_9c;
  FCollisionFilterData local_8c;
  undefined1 local_7c;
  TAABB<double,3> *local_78;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58;
  FName local_50 [2];
  
  local_res8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PruneDynamicsPendingDataTask ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_31_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_PruneDynamicsPendingDataTask>
         )0x0) {
      pFVar13 = ::FName::FName(&local_58,"STAT_PruneDynamicsPendingDataTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PruneDynamicsPendingDataTask,*pFVar13,
                 L"STAT_PruneDynamicsPendingDataTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_PruneDynamicsPendingDataTask;
  if (StatPtr_STAT_PruneDynamicsPendingDataTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_31_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_PruneDynamicsPendingDataTask>
       )0x0) {
    pFVar13 = ::FName::FName(local_50,"STAT_PruneDynamicsPendingDataTask");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_31_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_PruneDynamicsPendingDataTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PruneDynamicsPendingDataTask,
                          *pFVar13,L"STAT_PruneDynamicsPendingDataTask","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar14;
  uVar24 = 0;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_res10 = local_res10 & 0xffffff00;
  FVar21 = FVar3.ComparisonIndex.Value;
  uVar19 = FVar3.Number;
  if ((FVar21.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      uVar24 = 1;
      local_res10 = CONCAT31(local_res10._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar21.Value;
        local_d8.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0xd7);
        uVar24 = 3;
        local_res10 = CONCAT31(local_res10._1_3_,3);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar21.Value;
      uStackX_14 = uVar19;
      local_c8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_res10 = CONCAT31(local_res10._1_3_,uVar24) | 4;
      goto LAB_143d25a8e;
    }
  }
  local_c8 = local_c0;
LAB_143d25a8e:
  puVar9 = local_res8;
  plVar4 = (longlong *)local_res8[1];
  local_res20 = *(uint *)(plVar4 + 1);
  uVar20 = (ulonglong)(int)local_res20;
  pFVar22 = (FScriptContainerElement *)*plVar4;
  pFVar23 = pFVar22 + uVar20 * 0x48;
  local_d0 = pFVar23;
  do {
    if ((int)plVar4[1] != (int)uVar20) {
      local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<Chaos::FPendingSpatialData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    FVar3 = local_c8;
    uVar19 = local_res10;
    if (pFVar22 == pFVar23) {
      if ((local_res10 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((uVar19 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((((uVar19 & 4) != 0) && (FVar3 != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_68.NameAndInfo.Index = FVar3.ComparisonIndex.Value;
          local_68.NameAndInfo.Number = FVar3.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_70);
          local_68.StatData.Pad[4] = '\0';
          local_68.StatData.Pad[5] = '\0';
          local_68.StatData.Pad[6] = '\0';
          local_68.StatData.Pad[7] = '\0';
          local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
          local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
          local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
          local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_68);
          piVar1 = &this_01->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_01,false,false);
            return;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      return;
    }
    this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar22 + 8);
    if (pFVar22[0x40] == (FScriptContainerElement)0x0) {
LAB_143d25bc1:
      pFVar7 = (ForAnyElementType *)puVar9[2];
      if (((pFVar7->Data <= pFVar22) &&
          (pFVar22 < pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0x48)) &&
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
      iVar12 = *(int *)&pFVar7[1].Data;
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,pFVar7,piVar1);
      }
      lVar18 = (longlong)iVar12;
      *(int *)&pFVar7[1].Data = iVar12 + 1;
      uVar8 = *(undefined8 *)(pFVar22 + 8);
      pFVar23 = pFVar7->Data;
      *(undefined8 *)(pFVar23 + lVar18 * 0x48) = *(undefined8 *)pFVar22;
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar22 + 0x18);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x10) = *(undefined8 *)(pFVar22 + 0x10);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x10 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar22 + 0x28);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x20) = *(undefined8 *)(pFVar22 + 0x20);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x20 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar22 + 0x38);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x30) = *(undefined8 *)(pFVar22 + 0x30);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x30 + 8) = uVar8;
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x40) = *(undefined8 *)(pFVar22 + 0x40);
      pFVar23 = local_d0;
    }
    else {
      pbVar15 = Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
                          ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                           (int)this_00->_padding_);
      if (*pbVar15 != false) {
        plVar5 = (longlong *)*puVar9;
        uVar2 = *(undefined2 *)(pFVar22 + 0x38);
        pcVar6 = *(code **)(*plVar5 + 0x90);
        local_78 = Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(this_00);
        ppTVar16 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                              (int)this_00->_padding_);
        local_b0 = *ppTVar16;
        local_a8 = this_00;
        pFVar17 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                             (int)this_00->_padding_);
        local_a0 = pFVar17->Idx;
        local_9c.Word2 = 0;
        local_9c.Word3 = 0;
        local_9c.Word0 = 0;
        local_9c.Word1 = 0;
        local_8c.Word2 = 0;
        local_8c.Word3 = 0;
        local_8c.Word0 = 0;
        local_8c.Word1 = 0;
        local_7c = 0;
        if ((local_a0 == -1) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564218025>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf57,"CachedUniqueIdx.IsValid()"), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        Chaos::FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (this_00,&local_9c);
        Chaos::FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (this_00,&local_8c);
        local_7c = 1;
        cVar11 = (*pcVar6)(plVar5,&local_b0,local_78,uVar2);
        pFVar23 = local_d0;
        if (cVar11 != '\0') goto LAB_143d25bc1;
      }
    }
    uVar20 = (ulonglong)local_res20;
    pFVar22 = pFVar22 + 0x48;
  } while( true );
}

// operator() @ 143d31c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
DispatchKinAsyncDirtyAndUpdateKinematic<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l2::<lambda_3>_>'
::__l2::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_UpdateViewTask>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UpdateViewTask ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_UpdateViewTask>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_UpdateViewTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateViewTask,*pFVar4,
                   L"STAT_UpdateViewTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_UpdateViewTask;
  if (StatPtr_STAT_UpdateViewTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_UpdateViewTask>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_UpdateViewTask");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::DispatchKinAsyncDirtyAndUpdateKinematic<_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>_>(_public:_virtual_void___cdecl_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets(double,double)_::_2_::<lambda_3>,bool)_::_2_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_UpdateViewTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateViewTask,*pFVar4,
                         L"STAT_UpdateViewTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                         true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    Chaos::FPBDRigidsSOAs::UpdateViews(*(FPBDRigidsSOAs **)(*(longlong *)this + 0x40));
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x85);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    Chaos::FPBDRigidsSOAs::UpdateViews(*(FPBDRigidsSOAs **)(*(longlong *)this + 0x40));
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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
  }
  return;
}

// operator() @ 143d33030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
PruneInternalPendingData<`Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData'::__l2::<lambda_1>_>'
::__l15::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  FNameEntryId FVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_15_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedDynamicPendingDataTask>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  FName FVar17;
  FName FVar18;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CopyPrunedDynamicPendingDataTask ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_15_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedDynamicPendingDataTask>
         )0x0) {
      pFVar11 = ::FName::FName(&local_78,"STAT_CopyPrunedDynamicPendingDataTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CopyPrunedDynamicPendingDataTask,
                 *pFVar11,L"STAT_CopyPrunedDynamicPendingDataTask","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_CopyPrunedDynamicPendingDataTask;
  if (StatPtr_STAT_CopyPrunedDynamicPendingDataTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_15_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedDynamicPendingDataTask>
       )0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_CopyPrunedDynamicPendingDataTask");
    FVar12 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_15_::<lambda_3>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedDynamicPendingDataTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_CopyPrunedDynamicPendingDataTask,*pFVar11,
                          L"STAT_CopyPrunedDynamicPendingDataTask","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_res10.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0xe6);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      goto LAB_143d331b4;
    }
  }
  bVar7 = false;
  FVar13 = local_68;
LAB_143d331b4:
  FVar18 = FVar17;
  if (0 < *(int *)((longlong)this + 0x10)) {
    do {
      FVar5 = FVar17.ComparisonIndex.Value;
      uVar14 = FVar5.Value + 1;
      plVar2 = *(longlong **)(*(longlong *)this + 0x48);
      uVar10 = 0;
      if ((int)uVar14 < (int)plVar2[1]) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res18 = (FName)((longlong)FVar18 + 0x10);
      plVar3 = *(longlong **)((longlong)this + 8);
      puVar15 = (undefined8 *)(*plVar2 + (longlong)local_res18);
      uVar10 = 0;
      if ((int)FVar5.Value < (int)plVar3[1]) {
        uVar10 = ~FVar5.Value >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar16 = (undefined8 *)(*plVar3 + (longlong)FVar18);
      if (puVar15 != puVar16) {
        if ((void *)*puVar15 != (void *)0x0) {
          FMemory::Free((void *)*puVar15);
        }
        *puVar15 = *puVar16;
        *puVar16 = 0;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar16 + 1);
        *(undefined4 *)((longlong)puVar15 + 0xc) = *(undefined4 *)((longlong)puVar16 + 0xc);
        puVar16[1] = 0;
      }
      FVar17.Number = 0;
      FVar17.ComparisonIndex.Value = uVar14;
      FVar18 = local_res18;
    } while ((int)uVar14 < *(int *)((longlong)this + 0x10));
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
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

// operator() @ 143d334a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
PruneInternalPendingData<`Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData'::__l2::<lambda_1>_>'
::__l56::<lambda_4>::operator()(void *this)

{
  int *piVar1;
  undefined2 uVar2;
  FName FVar3;
  longlong *plVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType *pFVar7;
  undefined8 uVar8;
  void *pvVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_56_::<lambda_4>::operator()(void)const_::_2_::FStat_STAT_PruneKinematicPendingDataTask>
  FVar14;
  bool *pbVar15;
  TGeometryParticle<double,3> **ppTVar16;
  FUniqueIdx *pFVar17;
  longlong lVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar19;
  ulonglong uVar20;
  FNameEntryId FVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  undefined1 uVar24;
  void *local_res8;
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  FName local_d8;
  FScriptContainerElement *local_d0;
  FName local_c8;
  FName local_c0;
  TGeometryParticle<double,3> *local_b0;
  TGeometryParticleHandleImp<double,3,1> *local_a8;
  int local_a0;
  FCollisionFilterData local_9c;
  FCollisionFilterData local_8c;
  undefined1 local_7c;
  TAABB<double,3> *local_78;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58;
  FName local_50 [2];
  
  local_res8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PruneKinematicPendingDataTask ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_56_::<lambda_4>::operator()(void)const_::_2_::FStat_STAT_PruneKinematicPendingDataTask>
         )0x0) {
      pFVar13 = ::FName::FName(&local_58,"STAT_PruneKinematicPendingDataTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PruneKinematicPendingDataTask,*pFVar13,
                 L"STAT_PruneKinematicPendingDataTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_PruneKinematicPendingDataTask;
  if (StatPtr_STAT_PruneKinematicPendingDataTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_56_::<lambda_4>::operator()(void)const_::_2_::FStat_STAT_PruneKinematicPendingDataTask>
       )0x0) {
    pFVar13 = ::FName::FName(local_50,"STAT_PruneKinematicPendingDataTask");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_56_::<lambda_4>::operator()(void)const_::_2_::FStat_STAT_PruneKinematicPendingDataTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PruneKinematicPendingDataTask,
                          *pFVar13,L"STAT_PruneKinematicPendingDataTask","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar14;
  uVar24 = 0;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_res10 = local_res10 & 0xffffff00;
  FVar21 = FVar3.ComparisonIndex.Value;
  uVar19 = FVar3.Number;
  if ((FVar21.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      uVar24 = 1;
      local_res10 = CONCAT31(local_res10._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar21.Value;
        local_d8.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x109);
        uVar24 = 3;
        local_res10 = CONCAT31(local_res10._1_3_,3);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar21.Value;
      uStackX_14 = uVar19;
      local_c8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_res10 = CONCAT31(local_res10._1_3_,uVar24) | 4;
      goto LAB_143d3361e;
    }
  }
  local_c8 = local_c0;
LAB_143d3361e:
  pvVar9 = local_res8;
  plVar4 = *(longlong **)((longlong)local_res8 + 8);
  local_res20 = *(uint *)(plVar4 + 1);
  uVar20 = (ulonglong)(int)local_res20;
  pFVar22 = (FScriptContainerElement *)*plVar4;
  pFVar23 = pFVar22 + uVar20 * 0x48;
  local_d0 = pFVar23;
  do {
    if ((int)plVar4[1] != (int)uVar20) {
      local_res8 = (void *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<Chaos::FPendingSpatialData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    FVar3 = local_c8;
    uVar19 = local_res10;
    if (pFVar22 == pFVar23) {
      if ((local_res10 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((uVar19 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((((uVar19 & 4) != 0) && (FVar3 != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_68.NameAndInfo.Index = FVar3.ComparisonIndex.Value;
          local_68.NameAndInfo.Number = FVar3.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_70);
          local_68.StatData.Pad[4] = '\0';
          local_68.StatData.Pad[5] = '\0';
          local_68.StatData.Pad[6] = '\0';
          local_68.StatData.Pad[7] = '\0';
          local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
          local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
          local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
          local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_68);
          piVar1 = &this_01->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_01,false,false);
            return;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      return;
    }
    this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar22 + 8);
    if (pFVar22[0x40] == (FScriptContainerElement)0x0) {
LAB_143d33752:
      pFVar7 = *(ForAnyElementType **)((longlong)pvVar9 + 0x10);
      if (((pFVar7->Data <= pFVar22) &&
          (pFVar22 < pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0x48)) &&
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
      iVar12 = *(int *)&pFVar7[1].Data;
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,pFVar7,piVar1);
      }
      lVar18 = (longlong)iVar12;
      *(int *)&pFVar7[1].Data = iVar12 + 1;
      uVar8 = *(undefined8 *)(pFVar22 + 8);
      pFVar23 = pFVar7->Data;
      *(undefined8 *)(pFVar23 + lVar18 * 0x48) = *(undefined8 *)pFVar22;
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar22 + 0x18);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x10) = *(undefined8 *)(pFVar22 + 0x10);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x10 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar22 + 0x28);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x20) = *(undefined8 *)(pFVar22 + 0x20);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x20 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar22 + 0x38);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x30) = *(undefined8 *)(pFVar22 + 0x30);
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x30 + 8) = uVar8;
      *(undefined8 *)(pFVar23 + lVar18 * 0x48 + 0x40) = *(undefined8 *)(pFVar22 + 0x40);
      pFVar23 = local_d0;
    }
    else {
      pbVar15 = Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
                          ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                           (int)this_00->_padding_);
      if (*pbVar15 != false) {
        plVar5 = *(longlong **)((longlong)pvVar9 + 0x18);
        uVar2 = *(undefined2 *)(pFVar22 + 0x38);
        pcVar6 = *(code **)(*plVar5 + 0x90);
        local_78 = Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(this_00);
        ppTVar16 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                              (int)this_00->_padding_);
        local_b0 = *ppTVar16;
        local_a8 = this_00;
        pFVar17 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                             (int)this_00->_padding_);
        local_a0 = pFVar17->Idx;
        local_9c.Word2 = 0;
        local_9c.Word3 = 0;
        local_9c.Word0 = 0;
        local_9c.Word1 = 0;
        local_8c.Word2 = 0;
        local_8c.Word3 = 0;
        local_8c.Word0 = 0;
        local_8c.Word1 = 0;
        local_7c = 0;
        if ((local_a0 == -1) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564218025>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf57,"CachedUniqueIdx.IsValid()"), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        Chaos::FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (this_00,&local_9c);
        Chaos::FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (this_00,&local_8c);
        local_7c = 1;
        cVar11 = (*pcVar6)(plVar5,&local_b0,local_78,uVar2);
        pFVar23 = local_d0;
        if (cVar11 != '\0') goto LAB_143d33752;
      }
    }
    uVar20 = (ulonglong)local_res20;
    pFVar22 = pFVar22 + 0x48;
  } while( true );
}

// operator() @ 143d339d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FTaskDispatcherEvolution::
PruneInternalPendingData<`Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData'::__l2::<lambda_1>_>'
::__l47::<lambda_5>::operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_47_::<lambda_5>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedKinematicPendingDataTask>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  uVar15 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CopyPrunedKinematicPendingDataTask ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_47_::<lambda_5>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedKinematicPendingDataTask>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_CopyPrunedKinematicPendingDataTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CopyPrunedKinematicPendingDataTask,
                 *pFVar10,L"STAT_CopyPrunedKinematicPendingDataTask","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_CopyPrunedKinematicPendingDataTask;
  if (StatPtr_STAT_CopyPrunedKinematicPendingDataTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_47_::<lambda_5>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedKinematicPendingDataTask>
       )0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_CopyPrunedKinematicPendingDataTask");
    FVar11 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherEvolution::PruneInternalPendingData<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>_>(_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::<lambda_1>)_::_47_::<lambda_5>::operator()(void)const_::_2_::FStat_STAT_CopyPrunedKinematicPendingDataTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_CopyPrunedKinematicPendingDataTask,*pFVar10,
                          L"STAT_CopyPrunedKinematicPendingDataTask","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h"
                   ,0x118);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_143d33b50;
    }
  }
  bVar6 = false;
  FVar13 = local_70;
LAB_143d33b50:
  uVar19 = uVar15;
  if (0 < *(int *)((longlong)this + 0x10)) {
    do {
      plVar2 = *(longlong **)(*(longlong *)this + 0x48);
      uVar14 = (uint)uVar15;
      uVar17 = (int)plVar2[6] + uVar14;
      uVar9 = 0;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((longlong)this + 8);
      puVar16 = (undefined8 *)((longlong)(int)uVar17 * 0x10 + *plVar2);
      uVar9 = 0;
      if ((int)uVar14 < (int)plVar3[1]) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar18 = (undefined8 *)(*plVar3 + uVar19);
      if (puVar16 != puVar18) {
        if ((void *)*puVar16 != (void *)0x0) {
          FMemory::Free((void *)*puVar16);
        }
        *puVar16 = *puVar18;
        *puVar18 = 0;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar18 + 1);
        *(undefined4 *)((longlong)puVar16 + 0xc) = *(undefined4 *)((longlong)puVar18 + 0xc);
        puVar18[1] = 0;
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar19 = uVar19 + 0x10;
    } while ((int)(uVar14 + 1) < *(int *)((longlong)this + 0x10));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
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

// WaitIntegrationComplete @ 143d828d0

void __thiscall
Chaos::Private::FTaskDispatcherEvolution::WaitIntegrationComplete(FTaskDispatcherEvolution *this)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  atomic<unsigned_int> aVar5;
  int iVar6;
  FTaskBase *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  FTaskHandle local_res8;
  longlong local_48;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_40;
  
  local_res8.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->UpdateViewTask).Pimpl.Reference;
  pFVar1 = &this->UpdateViewTask;
  if (local_res8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_res8.Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_res8.Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_40.ArrayNum = 1;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_40.AllocatorInstance,1,&local_40.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_40.AllocatorInstance.Data,&local_res8,1);
  if (local_res8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = (atomic<unsigned_int> *)((longlong)local_res8.Pimpl.Reference + 0x30);
    aVar5 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res8.Pimpl.Reference)(local_res8.Pimpl.Reference,1);
    }
  }
  uVar13 = (this->IntegrationPendingTasks).ArrayNum + 1 + (this->KinematicPendingTasks).ArrayNum;
  if (-1 < (int)uVar13) {
    if (local_40.ArrayMax < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&local_40.AllocatorInstance,local_40.ArrayNum,&local_40.ArrayMax);
    }
    pTVar3 = &this->IntegrationPendingTasks;
    if (&local_40 == pTVar3) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar6 = (this->IntegrationPendingTasks).ArrayNum;
    if (iVar6 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar6,&local_40.AllocatorInstance,&local_40.ArrayNum,
                          &local_40.ArrayMax);
      ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                (local_40.AllocatorInstance.Data + (longlong)iVar11 * 8,
                 (FTaskHandle *)(pTVar3->AllocatorInstance).Data,iVar6);
    }
    pTVar12 = &this->KinematicPendingTasks;
    if (&local_40 == pTVar12) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar6 = (this->KinematicPendingTasks).ArrayNum;
    if (iVar6 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar6,&local_40.AllocatorInstance,&local_40.ArrayNum,
                          &local_40.ArrayMax);
      ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                (local_40.AllocatorInstance.Data + (longlong)iVar11 * 8,
                 (FTaskHandle *)(pTVar12->AllocatorInstance).Data,iVar6);
    }
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (&local_40,(FTimespan)0x7fffffffffffffff);
    if (pFVar1 != (FTaskHandle *)&local_48) {
      pFVar7 = (pFVar1->Pimpl).Reference;
      (pFVar1->Pimpl).Reference = (FTaskBase *)0x0;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar7->RefCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
    piVar4 = &(this->IntegrationPendingTasks).ArrayMax;
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    iVar6 = (this->IntegrationPendingTasks).ArrayNum;
    if (*piVar4 < 0) {
      DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar8,iVar6);
      (this->IntegrationPendingTasks).ArrayNum = 0;
      if (*piVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar3->AllocatorInstance,0,piVar4);
      }
    }
    else {
      DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar8,iVar6);
      (this->IntegrationPendingTasks).ArrayNum = 0;
    }
    piVar4 = &(this->KinematicPendingTasks).ArrayMax;
    pFVar8 = (pTVar12->AllocatorInstance).Data;
    iVar6 = (this->KinematicPendingTasks).ArrayNum;
    if (*piVar4 < 0) {
      DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar8,iVar6);
      (this->KinematicPendingTasks).ArrayNum = 0;
      if (*piVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar12->AllocatorInstance,0,piVar4);
      }
    }
    else {
      DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar8,iVar6);
      (this->KinematicPendingTasks).ArrayNum = 0;
    }
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
}

