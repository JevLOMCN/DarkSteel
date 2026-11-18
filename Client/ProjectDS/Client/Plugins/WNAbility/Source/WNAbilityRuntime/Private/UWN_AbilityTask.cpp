// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 15

// StaticClass @ 148db3540

UClass * __cdecl UWN_AbilityTask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilityTask",
               &Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton,
               StaticRegisterNativesUWN_AbilityTask,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UWN_AbilityTask>,InternalVTableHelperCtorCaller<UWN_AbilityTask>,
               local_res8,UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton;
}

// UWN_AbilityTask @ 148db64d0

UWN_AbilityTask * __thiscall
UWN_AbilityTask::UWN_AbilityTask(UWN_AbilityTask *this,FVTableHelper *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Ability).field0_0x0.DebugPtr = (UWN_Ability *)0x0;
  (this->AbilitySystemComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UWN_AbilityTask @ 148db6510

/* WARNING: Enum "Type": Some values do not have unique names */

UWN_AbilityTask * __thiscall
UWN_AbilityTask::UWN_AbilityTask(UWN_AbilityTask *this,FObjectInitializer *param_1)

{
  FOutputDeviceRedirector *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Ability).field0_0x0.DebugPtr = (UWN_Ability *)0x0;
  (this->AbilitySystemComponent).WeakPtr = (FWeakObjectPtr)0x0;
  if (0 < WN_AbilityTaskCVars::WN_AbilityTaskRecordingType) {
    DebugRecordAbilityTaskCreated(this);
  }
  WN_GlobalAbilityTaskCount = WN_GlobalAbilityTaskCount + 1;
  if (WN_AbilityTaskCVars::WN_AbilityTaskMaxCount <= WN_GlobalAbilityTaskCount) {
    if (2 < (byte)LogWNAbility._0_1_) {
      local_res8[0] = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(local_res8,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWNAbility);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((0 < WN_AbilityTaskCVars::WN_AbilityTaskRecordingType) && (bHasDumpedAbilityTasks == false))
    {
      DebugPrintAbilityTasksByClass();
      bHasDumpedAbilityTasks = true;
      pFVar1 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::FlushThreadedLogs(pFVar1,None);
      pFVar1 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(pFVar1);
    }
    `UWN_AbilityTask::UWN_AbilityTask'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this;
}

// ~UWN_AbilityTask @ 148db6af0

void __thiscall UWN_AbilityTask::~UWN_AbilityTask(UWN_AbilityTask *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  return;
}

// BeginDestroy @ 148db7690

void __thiscall UWN_AbilityTask::BeginDestroy(UWN_AbilityTask *this)

{
  code *pcVar1;
  bool bVar2;
  
  UObject::BeginDestroy((UObject *)this);
  if (this->bWasSuccessfullyDestroyed == 0) {
    if (WN_GlobalAbilityTaskCount < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WN_GlobalAbilityTaskCount > 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbilityTask.cpp"
                         ,0x8e,L"Mismatched AbilityTask counting");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    WN_GlobalAbilityTaskCount = WN_GlobalAbilityTaskCount + -1;
    this->bWasSuccessfullyDestroyed = '\x01';
    if (0 < WN_AbilityTaskCVars::WN_AbilityTaskRecordingType) {
      DebugRecordAbilityTaskDestroyed(this);
      return;
    }
  }
  return;
}

// DebugRecordAbilityTaskCreatedByAbility @ 148db8990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWN_AbilityTask::DebugRecordAbilityTaskCreatedByAbility(UObject *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_static_void___cdecl_UWN_AbilityTask::DebugRecordAbilityTaskCreatedByAbility(UObject_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
  FVar6;
  int *piVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar8;
  longlong lVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res10;
  TPairInitializer<UClass_const_*_const_&,int_&&> local_res18;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AbilityTaskDebugRecording ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_UWN_AbilityTask::DebugRecordAbilityTaskCreatedByAbility(UObject_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_AbilityTaskDebugRecording");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AbilityTaskDebugRecording,*pFVar5,
                 L"STAT_AbilityTaskDebugRecording","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_AbilityTaskDebugRecording;
  if (StatPtr_STAT_AbilityTaskDebugRecording ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_UWN_AbilityTask::DebugRecordAbilityTaskCreatedByAbility(UObject_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_res18,"STAT_AbilityTaskDebugRecording");
    FVar6 = (FThreadSafeStaticStat<_public:_static_void___cdecl_UWN_AbilityTask::DebugRecordAbilityTaskCreatedByAbility(UObject_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AbilityTaskDebugRecording,
                         *pFVar5,L"STAT_AbilityTaskDebugRecording","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbilityTask.cpp"
                   ,0xd3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_148db8b19;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_148db8b19:
  if ((WN_AbilityTaskCVars::WN_RecordAbilityTaskSourceAbilityCounts != false) &&
     (0 < WN_AbilityTaskCVars::WN_AbilityTaskRecordingType)) {
    if (param_1 == (UObject *)0x0) {
      local_res18.Value = (int *)0x0;
    }
    else {
      local_res18.Value = *(int **)&param_1->field_0x10;
      if ((UClass *)local_res18.Value != (UClass *)0x0) {
        uVar8 = ((uint)((ulonglong)local_res18.Value >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res18.Value >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        if (StaticAbilityTasksByAbilityClass._8_4_ != StaticAbilityTasksByAbilityClass._52_4_) {
          lVar9 = 0x154c764b8;
          if (StaticAbilityTasksByAbilityClass._64_8_ != 0) {
            lVar9 = StaticAbilityTasksByAbilityClass._64_8_;
          }
          for (iVar1 = *(int *)(lVar9 + (ulonglong)
                                        (StaticAbilityTasksByAbilityClass._72_4_ - 1 &
                                        (uVar8 >> 0x10 ^ uVar8)) * 4); iVar1 != -1;
              iVar1 = *(int *)(StaticAbilityTasksByAbilityClass._0_8_ + 0x10 +
                              (longlong)iVar1 * 0x18)) {
            if (*(UClass **)(StaticAbilityTasksByAbilityClass._0_8_ + (longlong)iVar1 * 0x18) ==
                (UClass *)local_res18.Value) {
              piVar7 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                       ::FindChecked((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                      *)&StaticAbilityTasksByAbilityClass,
                                     (UClass *)local_res18.Value);
              *piVar7 = *piVar7 + 1;
              goto LAB_148db8c33;
            }
          }
        }
        local_38.StatData.Pad = (uchar  [8])&local_res18.Value;
        local_res10.s.LowPart = 1;
        local_38.NameAndInfo = (FStatNameAndInfo)&local_res10;
        TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_const_*_const_&,int_&&>_>
                  ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                    *)&StaticAbilityTasksByAbilityClass,&local_res18,(bool *)&local_38);
      }
    }
  }
LAB_148db8c33:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_38.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar11.Number,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_38);
      piVar7 = &this->ScopeCount;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 148db9bd0

UClass * __cdecl UWN_AbilityTask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilityTask",
               &Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton,
               StaticRegisterNativesUWN_AbilityTask,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UWN_AbilityTask>,InternalVTableHelperCtorCaller<UWN_AbilityTask>,
               local_res8,UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton;
}

// InitSimulatedTask @ 148db9d80

void __thiscall
UWN_AbilityTask::InitSimulatedTask(UWN_AbilityTask *this,UGameplayTasksComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UObject *local_res8;
  
  UGameplayTask::InitSimulatedTask((UGameplayTask *)this,param_1);
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (local_res8 != (UObject *)0x0) {
    pUVar2 = UWN_AbilitySystemComponent::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_148db9dc8;
  }
  local_res8 = (UObject *)0x0;
LAB_148db9dc8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->AbilitySystemComponent).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// OnDestroy @ 148dba160

void __thiscall UWN_AbilityTask::OnDestroy(UWN_AbilityTask *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (WN_GlobalAbilityTaskCount < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WN_GlobalAbilityTaskCount > 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbilityTask.cpp"
                       ,0x77,L"Mismatched AbilityTask counting");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  WN_GlobalAbilityTaskCount = WN_GlobalAbilityTaskCount + -1;
  this->bWasSuccessfullyDestroyed = '\x01';
  if (0 < WN_AbilityTaskCVars::WN_AbilityTaskRecordingType) {
    DebugRecordAbilityTaskDestroyed(this);
  }
  (this->Ability).field0_0x0.DebugPtr = (UWN_Ability *)0x0;
  UGameplayTask::OnDestroy((UGameplayTask *)this,param_1);
  return;
}

// OnTick @ 148dbad10

void __thiscall UWN_AbilityTask::OnTick(UWN_AbilityTask *this,float param_1)

{
  return;
}

// SetAbilitySystemComponent @ 148dbb540

void __thiscall
UWN_AbilityTask::SetAbilitySystemComponent
          (UWN_AbilityTask *this,UWN_AbilitySystemComponent *param_1)

{
  UWN_AbilitySystemComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWN_AbilitySystemComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->AbilitySystemComponent).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// ShouldBroadcastAbilityTaskDelegates @ 148dbb620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWN_AbilityTask::ShouldBroadcastAbilityTaskDelegates(UWN_AbilityTask *this)

{
  UWN_Ability *pUVar1;
  void *local_18 [3];
  
  pUVar1 = (this->Ability).field0_0x0.DebugPtr;
  if ((pUVar1 != (UWN_Ability *)0x0) && (pUVar1->bIsActive != false)) {
    return true;
  }
  if ((WN_AbilityTaskWarnIfBroadcastSuppress != 0) && (2 < (byte)LogWNAbility._0_1_)) {
    (**(code **)(this->_padding_ + 0x2d8))(this,local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWNAbility);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return false;
}

// StaticRegisterNativesUWN_AbilityTask @ 148dbb6f0

void __cdecl UWN_AbilityTask::StaticRegisterNativesUWN_AbilityTask(void)

{
  return;
}

// TickTask @ 148dbbb70

void __thiscall UWN_AbilityTask::TickTask(UWN_AbilityTask *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148dbbb73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x310))();
  return;
}

// operator() @ 15053a330

bool __thiscall `UWN_AbilityTask::UWN_AbilityTask'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3428718473100918894>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3428718473100918894>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

