// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DoTask @ 1481e1c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FParticleManagerAsyncTask::DoTask
          (FParticleManagerAsyncTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  atomic<unsigned_int> *paVar1;
  ForElementType<int> FVar2;
  int iVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  FName FVar6;
  FParticleSystemWorldManager *pFVar7;
  UParticleSystemComponent *this_00;
  FTaskBase *this_01;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_PSCMan_AsyncBatch> FVar15;
  FTaskBase *this_02;
  longlong *_Dst;
  ForElementType<int> FVar16;
  undefined1 local_res20 [8];
  EExtendedTaskPriority local_78;
  ETaskPriority local_77 [3];
  FColor_u_0 local_74;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FTaskTagScope local_48;
  
  FTaskTagScope::FTaskTagScope(&local_48,EParallelGameThread);
  FVar15 = StatPtr_STAT_PSCMan_AsyncBatch;
  if (StatPtr_STAT_PSCMan_AsyncBatch == (FThreadSafeStaticStat<FStat_STAT_PSCMan_AsyncBatch>)0x0) {
    pFVar14 = ::FName::FName(&local_60,"STAT_PSCMan_AsyncBatch");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_PSCMan_AsyncBatch>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSCMan_AsyncBatch,*pFVar14,
                        L"PSC Manager Async Batch [CNC]","STATGROUP_PSCWorldMan","STATCAT_Advanced",
                        L"Particle World Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar15;
  bVar10 = false;
  bVar9 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar6.ComparisonIndex.Value.Value != 0) || (FVar6.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_74.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_74._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar6.ComparisonIndex.Value.Value;
        local_70.Number = FVar6.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                   ,0x92);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68 = FVar6;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      bVar11 = true;
      goto LAB_1481e1dfc;
    }
  }
  bVar10 = bVar12;
  bVar9 = bVar11;
  bVar11 = false;
  local_68 = local_58;
LAB_1481e1dfc:
  FVar16 = (this->PSCsToTick).AllocatorInstance.SecondaryData;
  iVar3 = (this->PSCsToTick).ArrayNum;
  if (FVar16 == (ForElementType<int>)0x0) {
    FVar16 = (ForElementType<int>)&this->PSCsToTick;
  }
  FVar2 = (ForElementType<int>)((longlong)FVar16 + (longlong)iVar3 * 4);
  while( true ) {
    if ((this->PSCsToTick).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar16 == FVar2) {
      this_02 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x110,8);
      if (this_02 == (FTaskBase *)0x0) {
        this_02 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_02,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this_02->_padding_ = (longlong)&___7__TGraphTask_VFParticleManagerFinalizeTask____6B_;
      }
      this_02[1]._padding_ = (longlong)this->Owner;
      this_02[1]._padding_ = 0;
      FVar16 = (this->PSCsToTick).AllocatorInstance.SecondaryData;
      aVar5 = (atomic<unsigned_int>)(this->PSCsToTick).ArrayNum;
      this_02[1].RefCount = aVar5;
      if (FVar16 == (ForElementType<int>)0x0) {
        FVar16 = (ForElementType<int>)&this->PSCsToTick;
      }
      if (aVar5 == (atomic<unsigned_int>)0x0) {
        this_02[1].NumLocks = (atomic<unsigned_int>)0x8;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,(int)aVar5,0,(ForElementType<int> *)&this_02[1]._padding_,(int)aVar5,
                   (int *)&this_02[1].NumLocks);
        _Dst = (longlong *)this_02[1]._padding_;
        if ((longlong *)this_02[1]._padding_ == (longlong *)0x0) {
          _Dst = &this_02[1]._padding_;
        }
        memcpy(_Dst,(void *)FVar16,(longlong)(int)aVar5 << 2);
      }
      UE::Tasks::Private::TranslatePriority(GameThread,local_77,&local_78);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_77[0],local_78,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x110);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x110);
        this_01 = (FTaskBase *)param_2->Reference;
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        if (this_01->ExtendedPriority == TaskEvent) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites(this_01,this_02);
        }
        else {
          LOCK();
          paVar1 = &this_01->NumLocks;
          aVar5 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
          UNLOCK();
          if ((aVar5 == (atomic<unsigned_int>)0xfffffffe) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                  ,0x1c2,L"Max number of nested tasks reached: %d"), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((uint)aVar5 < 0x80000001) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PrevNumLocks > ExecutionFlag",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                  ,0x1c3,
                                  L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar12 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_02,this_01);
          if (bVar12) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
            UE::Tasks::Private::FTaskBase::
            FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                      (&this_01->Prerequisites,this_02);
          }
          else {
            LOCK();
            this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + -1);
            UNLOCK();
          }
        }
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar5 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar5 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
      FVar6 = local_68;
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar6,CycleScopeEnd);
      }
      FTaskTagScope::~FTaskTagScope(&local_48);
      return;
    }
    uVar4 = *(uint *)FVar16;
    pFVar7 = this->Owner;
    uVar13 = 0;
    if ((int)uVar4 < (pFVar7->ManagedPSCs).ArrayNum) {
      uVar13 = ~uVar4 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this_00 = *(UParticleSystemComponent **)
               ((pFVar7->ManagedPSCs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    uVar13 = 0;
    if ((int)uVar4 < (this->Owner->PSCTickData).ArrayNum) {
      uVar13 = ~uVar4 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) break;
    UParticleSystemComponent::ComputeTickComponent_Concurrent(this_00);
    FVar16 = (ForElementType<int>)((longlong)FVar16 + 4);
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// GetDesiredThread @ 1481f5a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Type __thiscall FParticleManagerAsyncTask::GetDesiredThread(FParticleManagerAsyncTask *this)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = CPrio_ParticleManagerAsyncTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_ParticleManagerAsyncTask.TaskPriority;
  TVar5 = CPrio_ParticleManagerAsyncTask.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_ParticleManagerAsyncTask.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_ParticleManagerAsyncTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)) {
    if (((CPrio_ParticleManagerAsyncTask.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
  }
  else {
    if ((((CPrio_ParticleManagerAsyncTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_ParticleManagerAsyncTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask
         ) || ((CPrio_ParticleManagerAsyncTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
    TVar6 = TVar5 | TVar3;
  }
  return TVar6 | AnyNormalThreadNormalTask;
}

