// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// DiagnosticContext @ 1482f4880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FEndPhysicsTickFunction::DiagnosticContext(FEndPhysicsTickFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"EndPhysicsTick");
  return this_00;
}

// DiagnosticMessage @ 1482f48e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FEndPhysicsTickFunction::DiagnosticMessage
          (FEndPhysicsTickFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FEndPhysicsTickFunction");
  return __return_storage_ptr__;
}

// ExecuteTick @ 148301580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FEndPhysicsTickFunction::ExecuteTick
          (FEndPhysicsTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int *piVar1;
  FPhysScene_Chaos *pFVar2;
  FBaseGraphTask *this_00;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FEndPhysicsTickFunction_ExecuteTick>
  FVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_18_::FStat_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim>
  FVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FTaskBase *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  FName FVar15;
  FTaskBase *this_04;
  ulonglong uVar16;
  undefined1 auStackY_188 [32];
  EExtendedTaskPriority local_128;
  ETaskPriority local_127 [3];
  FColor_u_0 local_124;
  undefined1 local_120 [8];
  FDelegateAllocation local_118;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  FStatMessage local_d8;
  FTaskBase *local_c8;
  LARGE_INTEGER local_c0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar16 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FEndPhysicsTickFunction_ExecuteTick =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FEndPhysicsTickFunction_ExecuteTick>
          )0x0;
    pFVar9 = ::FName::FName(&local_80,"FEndPhysicsTickFunction_ExecuteTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FEndPhysicsTickFunction_ExecuteTick,*pFVar9,
               L"FEndPhysicsTickFunction_ExecuteTick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_FEndPhysicsTickFunction_ExecuteTick;
  if (StatPtr_FEndPhysicsTickFunction_ExecuteTick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FEndPhysicsTickFunction_ExecuteTick>
       )0x0) {
    pFVar9 = ::FName::FName(&local_78,"FEndPhysicsTickFunction_ExecuteTick");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FEndPhysicsTickFunction_ExecuteTick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_FEndPhysicsTickFunction_ExecuteTick,
                          *pFVar9,L"FEndPhysicsTickFunction_ExecuteTick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_124._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_100.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                   ,0x103);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_108 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14830178d;
    }
  }
  bVar6 = false;
  FVar15 = local_f8;
LAB_14830178d:
  if (__CsvProfilerStat260 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Physics");
    __CsvProfilerStat260 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Physics","CSV_Physics");
  if ((this->Target == (UWorld *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Target",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x106,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = this->Target->PhysicsScene;
  if (pFVar2 != (FPhysScene_Chaos *)0x0) {
    FChaosScene::GetCompletionEvents((FChaosScene *)pFVar2,&local_68);
    bVar8 = FChaosScene::IsCompletionEventComplete((FChaosScene *)pFVar2);
    if (bVar8) {
      pFVar2 = this->Target->PhysicsScene;
      if (pFVar2 != (FPhysScene_Chaos *)0x0) {
        FChaosScene::EndFrame((FChaosScene *)pFVar2);
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        StatPtr_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim =
             (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_18_::FStat_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim>
              )0x0;
        pFVar9 = ::FName::FName(&local_70,"STAT_FSimpleDelegateGraphTask_FinishPhysicsSim");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim,*pFVar9,
                   L"FSimpleDelegateGraphTask.FinishPhysicsSim","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
        _Init_thread_footer(&::_TSS1);
      }
      this_00 = param_4->Reference;
      FVar11 = StatPtr_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim;
      if (StatPtr_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_18_::FStat_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim>
           )0x0) {
        pFVar9 = ::FName::FName(&local_e8,"STAT_FSimpleDelegateGraphTask_FinishPhysicsSim");
        FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_18_::FStat_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FSimpleDelegateGraphTask_FinishPhysicsSim,*pFVar9,
                              L"FSimpleDelegateGraphTask.FinishPhysicsSim",
                              "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true
                              ,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar3 = (FName)this->Target;
      iStack_dc = local_d8.NameAndInfo.Number;
      local_e8 = (FName)UWorld::FinishPhysicsSim;
      uStack_e0 = 0;
      local_120 = (undefined1  [8])0x0;
      local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_118.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
                 (FWriteAccessScope *)&local_a0);
      local_88 = &local_118;
      puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_118);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar13;
        *puVar12 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUWorld____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
        puVar12[3] = 0;
        local_108 = FVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_108);
        *(FName *)(puVar12 + 4) = local_e8;
        puVar12[5] = CONCAT44(iStack_dc,uStack_e0);
      }
      this_04 = (FTaskBase *)0x0;
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
      if (this_01 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_01,&local_68);
        this_01->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
        this_04 = this_01;
      }
      this_04[1]._padding_ = (longlong)FVar11;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_04[1]._padding_,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_120);
      *(undefined4 *)&this_04[1]._padding_ = 1;
      UE::Tasks::Private::TranslatePriority(GameThread,local_127,&local_128);
      UE::Tasks::Private::FTaskBase::Init(this_04,L"GraphTask",local_127[0],local_128,None);
      if (this_04 != (FTaskBase *)0x0) {
        LOCK();
        this_04->RefCount = (atomic<unsigned_int>)((int)this_04->RefCount + 1);
        UNLOCK();
      }
      local_c8 = this_04;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_04,0x100);
      FBaseGraphTask::DontCompleteUntil(this_00,(FBaseGraphTask *)&local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
                 (FWriteAccessScope *)&local_b8);
      if ((local_118.DelegateSize != 0) &&
         (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_118,0,0,0x10);
        local_118.DelegateSize = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_118.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_120);
    }
    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar14 = local_68.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_68.ArrayNum);
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  FCsvProfiler::EndExclusiveStat("Physics");
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_d8);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// StaticStruct @ 148998390

UScriptStruct * __cdecl FEndPhysicsTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEndPhysicsTickFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEndPhysicsTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEndPhysicsTickFunction,(UObject *)pUVar1,
                         L"EndPhysicsTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FEndPhysicsTickFunction.OuterSingleton;
}

