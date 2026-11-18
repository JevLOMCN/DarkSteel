// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FTickTaskSequencer @ 1488af110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTickTaskSequencer * __thiscall FTickTaskSequencer::FTickTaskSequencer(FTickTaskSequencer *this)

{
  TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FTaskGraphInterface *pFVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FTickTaskSequencer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = this->HiPriTickTasks[0];
  (this->TickBatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickBatches).ArrayNum = 0;
  (this->TickBatches).ArrayMax = 0;
  this->TickBatchesNum = 0;
  *(undefined8 *)&this->TickCompletionEvents[0].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[0].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[0].field_0x2c = 4;
  *(undefined8 *)&this->TickCompletionEvents[1].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[1].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[1].field_0x2c = 4;
  *(undefined8 *)&this->TickCompletionEvents[2].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[2].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[2].field_0x2c = 4;
  *(undefined8 *)&this->TickCompletionEvents[3].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[3].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[3].field_0x2c = 4;
  *(undefined8 *)&this->TickCompletionEvents[4].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[4].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[4].field_0x2c = 4;
  *(undefined8 *)&this->TickCompletionEvents[5].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[5].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[5].field_0x2c = 4;
  *(undefined8 *)&this->TickCompletionEvents[6].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[6].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[6].field_0x2c = 4;
  *(undefined8 *)&this->TickCompletionEvents[7].field_0x20 = 0;
  *(undefined4 *)&this->TickCompletionEvents[7].field_0x28 = 0;
  *(undefined4 *)&this->TickCompletionEvents[7].field_0x2c = 4;
  *(undefined8 *)this->ManualDispatchTicks = 0;
  *(undefined8 *)&this->ManualDispatchTicks[0].field_0x8 = 0;
  *(undefined8 *)(this->ManualDispatchTicks + 1) = 0;
  *(undefined8 *)&this->ManualDispatchTicks[1].field_0x8 = 0;
  *(undefined8 *)(this->ManualDispatchTicks + 2) = 0;
  *(undefined8 *)&this->ManualDispatchTicks[2].field_0x8 = 0;
  *(undefined8 *)(this->ManualDispatchTicks + 3) = 0;
  *(undefined8 *)&this->ManualDispatchTicks[3].field_0x8 = 0;
  *(undefined8 *)(this->ManualDispatchTicks + 4) = 0;
  *(undefined8 *)&this->ManualDispatchTicks[4].field_0x8 = 0;
  *(undefined8 *)(this->ManualDispatchTicks + 5) = 0;
  *(undefined8 *)&this->ManualDispatchTicks[5].field_0x8 = 0;
  *(undefined8 *)(this->ManualDispatchTicks + 6) = 0;
  *(undefined8 *)&this->ManualDispatchTicks[6].field_0x8 = 0;
  *(undefined8 *)(this->ManualDispatchTicks + 7) = 0;
  *(undefined8 *)&this->ManualDispatchTicks[7].field_0x8 = 0;
  lVar3 = 0x40;
  lVar5 = 0x40;
  do {
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&pTVar1->field_0x8 = 0;
    pTVar1 = pTVar1 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pTVar1 = this->TickTasks[0];
  do {
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&pTVar1->field_0x8 = 0;
    pTVar1 = pTVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->CleanupTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  (this->CleanupTasks).ArrayNum = 0;
  (this->CleanupTasks).ArrayMax = 4;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___0FTickTaskSequencer__AEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTickTaskSequencer::FTickTaskSequencer'::__l2::<lambda_1>,void>
                ::Call;
  this->bAllowConcurrentTicks = false;
  this->bAllowBatchedTicksForFrame = false;
  this->bAllowOptimizedPrerequisites = false;
  this->bLogTicks = false;
  this->bLogTicksShowPrerequistes = false;
  this->bSingleThreadMode = false;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  pFVar2 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar2 + 0x88))(pFVar2,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return this;
}

// ~FTickTaskSequencer @ 1488b2690

void __thiscall FTickTaskSequencer::~FTickTaskSequencer(FTickTaskSequencer *this)

{
  TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  longlong lVar7;
  TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  
  WaitForCleanup(this);
  pTVar11 = &this->CleanupTasks;
  FVar5 = (this->CleanupTasks).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar11;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar5,(this->CleanupTasks).ArrayNum);
  FVar5 = (this->CleanupTasks).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  lVar10 = 0x40;
  lVar7 = 0x40;
  do {
    pTVar8 = (TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *)(pTVar11 + -1)
    ;
    pTVar11 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)((TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *)
                  (pTVar11 + -1) + 2);
    lVar7 = lVar7 + -1;
    if (*(void **)(pTVar8 + 2) != (void *)0x0) {
      FMemory::Free(*(void **)(pTVar8 + 2));
    }
  } while (lVar7 != 0);
  pTVar8 = this->TickTasks[0];
  do {
    pTVar1 = pTVar8 + -1;
    pTVar8 = pTVar8 + -1;
    lVar10 = lVar10 + -1;
    if (*(void **)pTVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar1);
    }
  } while (lVar10 != 0);
  pTVar9 = (TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> *)
           this->HiPriTickTasks;
  lVar7 = 8;
  do {
    pTVar2 = pTVar9 + -1;
    pTVar9 = pTVar9 + -1;
    lVar7 = lVar7 + -1;
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
  } while (lVar7 != 0);
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[7].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents + 7;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[7].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[7].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[6].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents + 6;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[6].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[6].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[5].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents + 5;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[5].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[5].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[4].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents + 4;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[4].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[4].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[3].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents + 3;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[3].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[3].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[2].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents + 2;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[2].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[2].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[1].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents + 1;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[1].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[1].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar6 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&this->TickCompletionEvents[0].field_0x20;
  if (pTVar6 == (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = this->TickCompletionEvents;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar6,
             *(int *)&this->TickCompletionEvents[0].field_0x28);
  pvVar3 = *(void **)&this->TickCompletionEvents[0].field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DestructItems<TTuple<FTickGroupCondition,TUniquePtr<FTickBatchInfo,TDefaultDelete<FTickBatchInfo>_>_>,int>
            ((TTuple<FTickGroupCondition,TUniquePtr<FTickBatchInfo,TDefaultDelete<FTickBatchInfo>_>_>
              *)(this->TickBatches).AllocatorInstance.Data,(this->TickBatches).ArrayNum);
  pFVar4 = (this->TickBatches).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 1488b40e0

EProcessTasksOperation __thiscall
`FTickTaskSequencer::ReleaseTickGroup'::__l45::<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  LARGE_INTEGER local_res8;
  
  if (**(char **)((longlong)this + 8) != '\0') {
    if (**(longlong **)((longlong)this + 0x18) == 0) {
      dVar6 = (double)GIdleTaskWorkMS * __real_3f50624dd2f1a9fc;
      QueryPerformanceCounter(&local_res8);
      **(longlong **)((longlong)this + 0x18) =
           (longlong)(dVar6 / FGenericPlatformTime::SecondsPerCycle64) + local_res8.QuadPart;
    }
    else {
      QueryPerformanceCounter(&local_res8);
      if ((ulonglong)**(LARGE_INTEGER **)((longlong)this + 0x18) < (ulonglong)local_res8) {
        **(undefined1 **)((longlong)this + 8) = 0;
      }
    }
  }
  if (**(char **)((longlong)this + 0x10) != '\0') {
    if (param_1 == **(int **)((longlong)this + 0x20)) {
      piVar3 = *(int **)((longlong)this + 0x28);
      *piVar3 = *piVar3 + 1;
      if (10 < *piVar3) {
        lVar9 = (longlong)*(int *)((longlong)this + 0x30);
        lVar4 = *(longlong *)this;
        puVar8 = *(undefined8 **)(lVar4 + 0x198 + lVar9 * 0x10);
        iVar2 = *(int *)(lVar4 + 0x1a0 + lVar9 * 0x10);
        puVar1 = puVar8 + iVar2;
        while( true ) {
          if (*(int *)(lVar4 + 0x1a0 + lVar9 * 0x10) != iVar2) {
            `TCheckedPointerIterator<FTickFunction_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res8);
          }
          if (puVar8 == puVar1) break;
          plVar5 = (longlong *)*puVar8;
          cVar7 = (**(code **)(*plVar5 + 8))(plVar5);
          if (cVar7 != '\0') {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
          puVar8 = puVar8 + 1;
        }
        **(undefined1 **)((longlong)this + 0x10) = 0;
      }
    }
    else {
      **(int **)((longlong)this + 0x20) = param_1;
      **(undefined4 **)((longlong)this + 0x28) = 0;
    }
  }
  if (**(char **)((longlong)this + 8) != '\0') {
    return ProcessOneOtherTask;
  }
  return (**(char **)((longlong)this + 0x10) == '\0') + ProcessNamedThreadTasks;
}

// DispatchTickGroup @ 1488bc4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTickTaskSequencer::DispatchTickGroup(FTickTaskSequencer *this,Type param_1,ETickingGroup param_2)

{
  FTaskBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  int iVar10;
  FName FVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  FColor_u_0 local_res20 [2];
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  lVar12 = (longlong)(int)param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FTickTaskSequencer::DispatchTickGroup(ENamedThreads::Type,ETickingGroup)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FTickTaskSequencer::DispatchTickGroup(ENamedThreads::Type,ETickingGroup)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FTickTaskSequencer::DispatchTickGroup(ENamedThreads::Type,ETickingGroup)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_DispatchTickGroup = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_48,"STAT_DispatchTickGroup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FTickTaskSequencer::DispatchTickGroup(ENamedThreads::Type,ETickingGroup)___ptr64'
                ::__l2::StatPtr_STAT_DispatchTickGroup,*pFVar8,L"STAT_DispatchTickGroup",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FTickTaskSequencer::DispatchTickGroup(ENamedThreads::Type,ETickingGroup)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_DispatchTickGroup;
  if (_StatPtr_STAT_DispatchTickGroup == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_40,"STAT_DispatchTickGroup");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_void___cdecl_FTickTaskSequencer::DispatchTickGroup(ENamedThreads::Type,ETickingGroup)___ptr64'
                         ::__l2::StatPtr_STAT_DispatchTickGroup,*pFVar8,L"STAT_DispatchTickGroup",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_50.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_50.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_50,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x48f);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1488bc63e;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
LAB_1488bc63e:
  lVar16 = 0;
  piVar13 = (int *)&this->HiPriTickTasks[lVar12][0].field_0x8;
  do {
    iVar10 = *piVar13;
    if (lVar16 < lVar12) {
      if ((iVar10 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TickArray.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                             ,0x495,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      uVar14 = 0;
      if (0 < iVar10) {
        lVar15 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar14 < iVar10) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = *(FTaskBase **)(lVar15 + *(longlong *)(piVar13 + -2));
          if (pFVar1->ExtendedPriority == TaskEvent) {
            LOCK();
            pFVar1->RefCount = (atomic<unsigned_int>)((int)pFVar1->RefCount + 1);
            UNLOCK();
          }
          UE::Tasks::Private::FTaskBase::TryLaunch(pFVar1,0);
          iVar10 = *piVar13;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 8;
        } while ((int)uVar14 < iVar10);
      }
    }
    *piVar13 = 0;
    if (piVar13[1] < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(piVar13 + -2),0,piVar13 + 1);
    }
    lVar16 = lVar16 + 1;
    piVar13 = piVar13 + 4;
  } while (lVar16 < 8);
  lVar16 = 0;
  piVar13 = (int *)&this->TickTasks[lVar12][0].field_0x8;
  do {
    iVar10 = *piVar13;
    if (lVar16 < lVar12) {
      if ((iVar10 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TickArray.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                             ,0x4a5,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      uVar14 = 0;
      if (0 < iVar10) {
        lVar15 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar14 < iVar10) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = *(FTaskBase **)(lVar15 + *(longlong *)(piVar13 + -2));
          if (pFVar1->ExtendedPriority == TaskEvent) {
            LOCK();
            pFVar1->RefCount = (atomic<unsigned_int>)((int)pFVar1->RefCount + 1);
            UNLOCK();
          }
          UE::Tasks::Private::FTaskBase::TryLaunch(pFVar1,0);
          iVar10 = *piVar13;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 8;
        } while ((int)uVar14 < iVar10);
      }
    }
    *piVar13 = 0;
    if (piVar13[1] < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(piVar13 + -2),0,piVar13 + 1);
    }
    lVar16 = lVar16 + 1;
    piVar13 = piVar13 + 4;
  } while (lVar16 < 8);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return;
}

// Get @ 1488c1c70

FTickTaskSequencer * __cdecl FTickTaskSequencer::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FTickTaskSequencer(&`public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'
                          ::__l2::SingletonInstance);
      atexit(`FTickTaskSequencer::Get'::__l2::_dynamic_atexit_destructor_for__SingletonInstance__);
      _Init_thread_footer(&`public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'
              ::__l2::SingletonInstance;
    }
  }
  return &`public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'::
          __l2::SingletonInstance;
}

// QueueOrBatchTickTask @ 1488d16c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTickBatchInfo * __thiscall
FTickTaskSequencer::QueueOrBatchTickTask
          (FTickTaskSequencer *this,
          TArray<FTickFunction_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1,
          FTickFunction *param_2,FTickContext *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  uint uVar9;
  FInternalData *pFVar10;
  ForElementType<FTickFunction_*> FVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> (*paTVar14) [8];
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  Type TVar19;
  TEnumAsByte<ETickingGroup> *pTVar20;
  FTickBatchInfo *pFVar21;
  FBaseGraphTask *pFVar22;
  TRefCountPtr<FBaseGraphTask> TVar23;
  TGraphTask<FBatchTickFunctionTask> *pTVar24;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar25;
  FTaskBase *pFVar26;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar27;
  byte bVar28;
  FScriptContainerElement *pFVar29;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar30;
  TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *pTVar31;
  TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> *pTVar32;
  FBaseGraphTask *pFVar33;
  ForElementType<FTickFunction_*> FVar34;
  ulonglong uVar35;
  FTaskBase *pFVar36;
  uint uVar37;
  longlong lVar38;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a7;
  undefined1 local_1a6;
  byte local_1a5;
  byte local_1a4;
  undefined1 local_1a3;
  EExtendedTaskPriority local_1a2;
  ETaskPriority local_1a1;
  EExtendedTaskPriority local_1a0;
  ETaskPriority local_19f [3];
  undefined4 local_19c;
  FTickBatchInfo *local_198;
  FBaseGraphTask *local_190;
  FTaskBase *local_188;
  FTaskBase *local_180;
  FTickFunction *local_178;
  FTickFunction *local_170;
  FTickFunction *local_168;
  int local_160;
  FBaseGraphTask *local_158;
  FTickContext *local_150;
  FTaskBase *local_148;
  FTaskBase *local_140;
  FTaskBase *local_138;
  FTaskBase *local_130;
  longlong local_128;
  ForElementType<FTickFunction_*> local_120;
  FTickContext local_118;
  UWorld *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  UWorld *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  FTickContext *local_c8;
  FConstructor local_c0;
  FTickContext *local_b8;
  FConstructor local_b0;
  undefined8 *local_a8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_a0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_168 = param_2;
  local_150 = param_3;
  if ((this->bAllowBatchedTicksForFrame == false) || (param_2->bAllowTickBatching == '\0')) {
LAB_1488d2067:
    iVar17 = param_1->ArrayNum;
    piVar3 = &param_1->ArrayNum;
    if (iVar17 < 1) {
      uVar7._0_1_ = param_3->TickType;
      uVar7._1_1_ = param_3->TickGroup;
      uVar7._2_1_ = param_3->bLogTick;
      uVar7._3_1_ = param_3->bLogTicksShowPrerequistes;
      uVar7._4_4_ = *(undefined4 *)&param_3->field_0x14;
      local_e8 = param_3->World;
      uStack_e0._0_4_ = param_3->DeltaSeconds;
      uStack_e0._4_4_ = param_3->Thread;
      uVar8 = param_2->field_0xa;
      local_d8 = CONCAT44(uVar7._4_4_,
                          CONCAT13(this->bLogTicksShowPrerequistes,
                                   CONCAT12(this->bLogTicks,(short)uVar7)));
      local_170 = param_2;
      if (((param_2->bRunOnAnyThread == '\0') || (this->bAllowConcurrentTicks == false)) ||
         ((((param_2->InternalData).Ptr)->ActualStartTickGroup).Value != (param_2->TickGroup).Value)
         ) {
        uStack_e0 = CONCAT44(((byte)uVar8 & 0x20) << 4,(undefined4)uStack_e0) | 0x100000000;
      }
      else if (param_2->bHighPriority == '\0') {
        TVar19 = FAutoConsoleTaskPriority::Get
                           (&CPrio_NormalAsyncTickTaskPriority,AnyNormalThreadNormalTask);
        uStack_e0 = CONCAT44(TVar19,(undefined4)uStack_e0);
      }
      else {
        TVar19 = FAutoConsoleTaskPriority::Get
                           (&CPrio_HiPriAsyncTickTaskPriority,AnyNormalThreadNormalTask);
        uStack_e0 = CONCAT44(TVar19,(undefined4)uStack_e0);
      }
      pFVar26 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf8,8);
      pFVar36 = (FTaskBase *)0x0;
      if (pFVar26 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)pFVar26,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        pFVar26->_padding_ = (longlong)&___7__TGraphTask_VFTickFunctionTask____6B_;
        pFVar36 = pFVar26;
      }
      pFVar36[1]._padding_ = (longlong)local_170;
      pFVar36[1]._padding_ = (longlong)local_e8;
      pFVar36[1]._padding_ = uStack_e0;
      pFVar36[1]._padding_ = local_d8;
      UE::Tasks::Private::TranslatePriority
                (*(Type *)((longlong)&pFVar36[1]._padding_ + 4),local_19f,&local_1a0);
      UE::Tasks::Private::FTaskBase::Init(pFVar36,L"GraphTask",local_19f[0],local_1a0,None);
      TaskTrace::Created((ulong64)pFVar36->TraceId,0xf8);
      pFVar10 = (local_170->InternalData).Ptr;
      if (pFVar10 != (FInternalData *)0x0) {
        pFVar10->TaskState = HasTask;
        ((local_170->InternalData).Ptr)->TaskPointer = pFVar36;
      }
      pFVar10 = (local_170->InternalData).Ptr;
      bVar28 = (pFVar10->ActualEndTickGroup).Value;
      if (local_170->bDispatchManually == 0) {
        if (local_170->bHighPriority == '\0') {
          paTVar14 = this->TickTasks;
        }
        else {
          paTVar14 = this->HiPriTickTasks;
        }
        pTVar31 = paTVar14[(pFVar10->ActualStartTickGroup).Value] + bVar28;
        local_180 = pFVar36;
        if (((*(FTaskBase ***)&pTVar31->field_0x0 <= &local_180) &&
            (&local_180 < *(FTaskBase ***)&pTVar31->field_0x0 + *(int *)&pTVar31->field_0xc)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          pFVar21 = (FTickBatchInfo *)(*pcVar13)();
          return pFVar21;
        }
        iVar17 = *(int *)&pTVar31->field_0x8;
        if (iVar17 == *(int *)&pTVar31->field_0xc) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar31,(int *)&pTVar31->field_0xc);
        }
        *(int *)&pTVar31->field_0x8 = iVar17 + 1;
        FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                 (this->TickCompletionEvents + bVar28);
        *(FTaskBase **)(*(longlong *)&pTVar31->field_0x0 + (longlong)iVar17 * 8) = local_180;
        local_130 = local_180;
        if (local_180 != (FTaskBase *)0x0) {
          LOCK();
          local_180->RefCount = (atomic<unsigned_int>)((int)local_180->RefCount + 1);
          UNLOCK();
        }
        FVar27 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20);
        FVar25 = FVar30;
        if (FVar27 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar25 = FVar27;
        }
        if ((ulonglong)FVar25 <= &local_130) {
          FVar25 = FVar30;
          if (FVar27 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar25 = FVar27;
          }
          if ((&local_130 <
               (FTaskBase **)((longlong)FVar25 + (longlong)*(int *)((longlong)FVar30 + 0x2c) * 8))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
            pcVar13 = (code *)swi(3);
            pFVar21 = (FTickBatchInfo *)(*pcVar13)();
            return pFVar21;
          }
        }
        iVar17 = *(int *)((longlong)FVar30 + 0x28);
        if (iVar17 == *(int *)((longlong)FVar30 + 0x2c)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar30,
                              (int *)((longlong)FVar30 + 0x2c));
        }
        *(int *)((longlong)FVar30 + 0x28) = iVar17 + 1;
        if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20) !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar30 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20);
        }
        puVar2 = (undefined8 *)((longlong)FVar30 + (longlong)iVar17 * 8);
        *puVar2 = 0;
        *puVar2 = local_130;
      }
      else {
        pTVar32 = this->ManualDispatchTicks + bVar28;
        if (((*(FTickFunction ***)&pTVar32->field_0x0 <= &local_170) &&
            (&local_170 < *(FTickFunction ***)&pTVar32->field_0x0 + *(int *)&pTVar32->field_0xc)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          pFVar21 = (FTickBatchInfo *)(*pcVar13)();
          return pFVar21;
        }
        iVar17 = *(int *)&pTVar32->field_0x8;
        if (iVar17 == *(int *)&pTVar32->field_0xc) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar32,(int *)&pTVar32->field_0xc);
        }
        *(int *)&pTVar32->field_0x8 = iVar17 + 1;
        FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                 (this->TickCompletionEvents + bVar28);
        *(FTickFunction **)(*(longlong *)&pTVar32->field_0x0 + (longlong)iVar17 * 8) = local_170;
        LOCK();
        pFVar36->RefCount = (atomic<unsigned_int>)((int)pFVar36->RefCount + 1);
        UNLOCK();
        FVar30 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar25 + 0x20);
        FVar27 = FVar30;
        if (FVar30 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar27 = FVar25;
        }
        local_138 = pFVar36;
        if ((ulonglong)FVar27 <= &local_138) {
          FVar27 = FVar25;
          if (FVar30 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar27 = FVar30;
          }
          if ((&local_138 <
               (FTaskBase **)((longlong)FVar27 + (longlong)*(int *)((longlong)FVar25 + 0x2c) * 8))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
            pcVar13 = (code *)swi(3);
            pFVar21 = (FTickBatchInfo *)(*pcVar13)();
            return pFVar21;
          }
        }
        iVar17 = *(int *)((longlong)FVar25 + 0x28);
        if (iVar17 == *(int *)((longlong)FVar25 + 0x2c)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar25,
                              (int *)((longlong)FVar25 + 0x2c));
        }
        *(int *)((longlong)FVar25 + 0x28) = iVar17 + 1;
        if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar25 + 0x20) !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar25 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar25 + 0x20);
        }
        puVar2 = (undefined8 *)((longlong)FVar25 + (longlong)iVar17 * 8);
        *puVar2 = 0;
        *puVar2 = local_138;
        local_170->bWasDispatchedManually = '\0';
      }
    }
    else {
      FVar11 = (param_1->AllocatorInstance).SecondaryData;
      pFVar36 = (FTaskBase *)0x0;
      local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 4;
      if (FVar11 != (ForElementType<FTickFunction_*>)0x0) {
        param_1 = (TArray<FTickFunction_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar11;
      }
      FVar11 = (ForElementType<FTickFunction_*>)((longlong)param_1 + (longlong)iVar17 * 8);
      while( true ) {
        if (*piVar3 != iVar17) {
          local_1a3 = 0;
          `TCheckedPointerIterator<FTickFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1a3);
        }
        if ((ForElementType<FTickFunction_*>)param_1 == FVar11) break;
        TVar23 = FTickFunction::GetCompletionHandle(*(FTickFunction **)param_1);
        FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
        if (local_70.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar30 = local_70.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar30 <= TVar23.Reference) {
          FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
          if (local_70.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar30 = local_70.AllocatorInstance.SecondaryData;
          }
          if ((TVar23.Reference <
               (FBaseGraphTask *)((longlong)FVar30 + (longlong)local_70.ArrayMax * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar13 = (code *)swi(3);
            pFVar21 = (FTickBatchInfo *)(*pcVar13)();
            return pFVar21;
          }
        }
        if (local_70.ArrayNum == local_70.ArrayMax) {
          local_70.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
        }
        FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
        if (local_70.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar30 = local_70.AllocatorInstance.SecondaryData;
        }
        puVar2 = (undefined8 *)((longlong)FVar30 + (longlong)local_70.ArrayNum * 8);
        local_70.ArrayNum = local_70.ArrayNum + 1;
        *puVar2 = 0;
        *puVar2 = *(undefined8 *)TVar23.Reference;
        *(undefined8 *)TVar23.Reference = 0;
        if (local_a8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_a8 + 6);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (local_a8 != (undefined8 *)0x0)) {
            (**(code **)*local_a8)(local_a8,1);
          }
        }
        param_1 = (TArray<FTickFunction_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                   *)((longlong)param_1 + 8);
      }
      local_178 = local_168;
      uVar6._0_1_ = local_150->TickType;
      uVar6._1_1_ = local_150->TickGroup;
      uVar6._2_1_ = local_150->bLogTick;
      uVar6._3_1_ = local_150->bLogTicksShowPrerequistes;
      uVar6._4_4_ = *(undefined4 *)&local_150->field_0x14;
      local_100 = local_150->World;
      uStack_f8._0_4_ = local_150->DeltaSeconds;
      uStack_f8._4_4_ = local_150->Thread;
      uVar8 = local_168->field_0xa;
      local_f0 = CONCAT44(uVar6._4_4_,
                          CONCAT13(this->bLogTicksShowPrerequistes,
                                   CONCAT12(this->bLogTicks,(short)uVar6)));
      if (((local_168->bRunOnAnyThread == '\0') || (this->bAllowConcurrentTicks == false)) ||
         ((((local_168->InternalData).Ptr)->ActualStartTickGroup).Value !=
          (local_168->TickGroup).Value)) {
        uStack_f8 = CONCAT44(((byte)uVar8 & 0x20) << 4,(undefined4)uStack_f8) | 0x100000000;
      }
      else if (local_168->bHighPriority == '\0') {
        TVar19 = FAutoConsoleTaskPriority::Get
                           (&CPrio_NormalAsyncTickTaskPriority,AnyNormalThreadNormalTask);
        uStack_f8 = CONCAT44(TVar19,(undefined4)uStack_f8);
      }
      else {
        TVar19 = FAutoConsoleTaskPriority::Get
                           (&CPrio_HiPriAsyncTickTaskPriority,AnyNormalThreadNormalTask);
        uStack_f8 = CONCAT44(TVar19,(undefined4)uStack_f8);
      }
      pFVar26 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf8,8);
      if (pFVar26 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar26,&local_70);
        pFVar26->_padding_ = (longlong)&___7__TGraphTask_VFTickFunctionTask____6B_;
        pFVar36 = pFVar26;
      }
      pFVar36[1]._padding_ = (longlong)local_178;
      pFVar36[1]._padding_ = (longlong)local_100;
      pFVar36[1]._padding_ = uStack_f8;
      pFVar36[1]._padding_ = local_f0;
      UE::Tasks::Private::TranslatePriority
                (*(Type *)((longlong)&pFVar36[1]._padding_ + 4),&local_1a1,&local_1a2);
      UE::Tasks::Private::FTaskBase::Init(pFVar36,L"GraphTask",local_1a1,local_1a2,None);
      TaskTrace::Created((ulong64)pFVar36->TraceId,0xf8);
      pFVar10 = (local_178->InternalData).Ptr;
      if (pFVar10 != (FInternalData *)0x0) {
        pFVar10->TaskState = HasTask;
        ((local_178->InternalData).Ptr)->TaskPointer = pFVar36;
      }
      pFVar10 = (local_178->InternalData).Ptr;
      bVar28 = (pFVar10->ActualEndTickGroup).Value;
      if (local_178->bDispatchManually == 0) {
        if (local_178->bHighPriority == '\0') {
          paTVar14 = this->TickTasks;
        }
        else {
          paTVar14 = this->HiPriTickTasks;
        }
        pTVar31 = paTVar14[(pFVar10->ActualStartTickGroup).Value] + bVar28;
        local_188 = pFVar36;
        if (((*(FTaskBase ***)&pTVar31->field_0x0 <= &local_188) &&
            (&local_188 < *(FTaskBase ***)&pTVar31->field_0x0 + *(int *)&pTVar31->field_0xc)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          pFVar21 = (FTickBatchInfo *)(*pcVar13)();
          return pFVar21;
        }
        iVar17 = *(int *)&pTVar31->field_0x8;
        if (iVar17 == *(int *)&pTVar31->field_0xc) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar31,(int *)&pTVar31->field_0xc);
        }
        *(int *)&pTVar31->field_0x8 = iVar17 + 1;
        FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                 (this->TickCompletionEvents + bVar28);
        *(FTaskBase **)(*(longlong *)&pTVar31->field_0x0 + (longlong)iVar17 * 8) = local_188;
        local_140 = local_188;
        if (local_188 != (FTaskBase *)0x0) {
          LOCK();
          local_188->RefCount = (atomic<unsigned_int>)((int)local_188->RefCount + 1);
          UNLOCK();
        }
        FVar27 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20);
        FVar25 = FVar30;
        if (FVar27 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar25 = FVar27;
        }
        if ((ulonglong)FVar25 <= &local_140) {
          FVar25 = FVar30;
          if (FVar27 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar25 = FVar27;
          }
          if ((&local_140 <
               (FTaskBase **)((longlong)FVar25 + (longlong)*(int *)((longlong)FVar30 + 0x2c) * 8))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
            pcVar13 = (code *)swi(3);
            pFVar21 = (FTickBatchInfo *)(*pcVar13)();
            return pFVar21;
          }
        }
        iVar17 = *(int *)((longlong)FVar30 + 0x28);
        if (iVar17 == *(int *)((longlong)FVar30 + 0x2c)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar30,
                              (int *)((longlong)FVar30 + 0x2c));
        }
        *(int *)((longlong)FVar30 + 0x28) = iVar17 + 1;
        if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20) !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar30 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20);
        }
        puVar2 = (undefined8 *)((longlong)FVar30 + (longlong)iVar17 * 8);
        *puVar2 = 0;
        *puVar2 = local_140;
      }
      else {
        pTVar32 = this->ManualDispatchTicks + bVar28;
        if (((*(FTickFunction ***)&pTVar32->field_0x0 <= &local_178) &&
            (&local_178 < *(FTickFunction ***)&pTVar32->field_0x0 + *(int *)&pTVar32->field_0xc)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          pFVar21 = (FTickBatchInfo *)(*pcVar13)();
          return pFVar21;
        }
        iVar17 = *(int *)&pTVar32->field_0x8;
        if (iVar17 == *(int *)&pTVar32->field_0xc) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar32,(int *)&pTVar32->field_0xc);
        }
        *(int *)&pTVar32->field_0x8 = iVar17 + 1;
        FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                 (this->TickCompletionEvents + bVar28);
        *(FTickFunction **)(*(longlong *)&pTVar32->field_0x0 + (longlong)iVar17 * 8) = local_178;
        LOCK();
        pFVar36->RefCount = (atomic<unsigned_int>)((int)pFVar36->RefCount + 1);
        UNLOCK();
        FVar30 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar25 + 0x20);
        FVar27 = FVar30;
        if (FVar30 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar27 = FVar25;
        }
        local_148 = pFVar36;
        if ((ulonglong)FVar27 <= &local_148) {
          FVar27 = FVar25;
          if (FVar30 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar27 = FVar30;
          }
          if ((&local_148 <
               (FTaskBase **)((longlong)FVar27 + (longlong)*(int *)((longlong)FVar25 + 0x2c) * 8))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
            pcVar13 = (code *)swi(3);
            pFVar21 = (FTickBatchInfo *)(*pcVar13)();
            return pFVar21;
          }
        }
        iVar17 = *(int *)((longlong)FVar25 + 0x28);
        if (iVar17 == *(int *)((longlong)FVar25 + 0x2c)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar25,
                              (int *)((longlong)FVar25 + 0x2c));
        }
        *(int *)((longlong)FVar25 + 0x28) = iVar17 + 1;
        if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar25 + 0x20) !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar25 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar25 + 0x20);
        }
        puVar2 = (undefined8 *)((longlong)FVar25 + (longlong)iVar17 * 8);
        *puVar2 = 0;
        *puVar2 = local_148;
        local_178->bWasDispatchedManually = '\0';
      }
      FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar30 = local_70.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar30,local_70.ArrayNum);
      if (local_70.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
      }
    }
    return (FTickBatchInfo *)0x0;
  }
  pFVar10 = (param_2->InternalData).Ptr;
  if (pFVar10 == (FInternalData *)0x0) {
    bVar28 = (param_2->TickGroup).Value;
    pTVar20 = &param_2->EndTickGroup;
  }
  else {
    bVar28 = (pFVar10->ActualStartTickGroup).Value;
    pTVar20 = &pFVar10->ActualEndTickGroup;
  }
  local_1a5 = pTVar20->Value;
  local_19c._0_2_ = CONCAT11(local_1a5,bVar28);
  uVar8 = param_2->field_0xa;
  local_1a4 = param_2->bHighPriority;
  local_19c._0_3_ = (uint3)(ushort)local_19c;
  local_19c = CONCAT13((byte)uVar8 >> 6,(uint3)local_19c) & 0x1ffffff;
  local_19c = CONCAT13(local_19c._3_1_,CONCAT12((byte)uVar8 >> 5,(ushort)local_19c)) & 0xff01ffff;
  uVar9 = local_19c;
  if ((((char)(local_19c >> 0x18) != '\0') || ((char)(local_19c >> 0x10) != '\0')) ||
     (bVar28 != (byte)(local_19c >> 8))) goto LAB_1488d2067;
  pFVar33 = (FBaseGraphTask *)0x0;
  local_198 = (FTickBatchInfo *)0x0;
  uVar18 = 0;
  if (0 < this->TickBatchesNum) {
    local_128 = 0;
    pFVar22 = pFVar33;
    do {
      lVar38 = local_128;
      uVar37 = (uint)pFVar22;
      uVar16 = 0;
      if ((int)uVar37 < (this->TickBatches).ArrayNum) {
        uVar16 = ~uVar37 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        pFVar21 = (FTickBatchInfo *)(*pcVar13)();
        return pFVar21;
      }
      if (uVar9 == *(uint *)((this->TickBatches).AllocatorInstance.Data + lVar38)) {
        uVar16 = uVar18;
        if ((int)uVar37 < (this->TickBatches).ArrayNum) {
          uVar16 = ~uVar37 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          pFVar21 = (FTickBatchInfo *)(*pcVar13)();
          return pFVar21;
        }
        FVar11 = (param_1->AllocatorInstance).SecondaryData;
        pFVar21 = *(FTickBatchInfo **)((this->TickBatches).AllocatorInstance.Data + lVar38 + 8);
        local_160 = param_1->ArrayNum;
        FVar34 = (ForElementType<FTickFunction_*>)param_1;
        if (FVar11 != (ForElementType<FTickFunction_*>)0x0) {
          FVar34 = FVar11;
        }
        local_120 = (ForElementType<FTickFunction_*>)((longlong)FVar34 + (longlong)local_160 * 8);
        do {
          if (param_1->ArrayNum != local_160) {
            local_1a7 = 0;
            `TCheckedPointerIterator<FTickFunction_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1a7);
          }
          if (FVar34 == local_120) goto LAB_1488d1938;
          pFVar29 = (pFVar21->TickPrerequisites).AllocatorInstance.Data;
          pFVar12 = pFVar29 + (longlong)(pFVar21->TickPrerequisites).ArrayNum * 8;
          for (; pFVar29 != pFVar12; pFVar29 = pFVar29 + 8) {
            if (*(longlong *)pFVar29 == *(longlong *)FVar34) {
              bVar15 = true;
              goto LAB_1488d18e0;
            }
          }
          bVar15 = false;
LAB_1488d18e0:
          lVar38 = *(longlong *)(*(longlong *)FVar34 + 0x20);
          pFVar22 = pFVar33;
          if ((lVar38 != 0) && (*(char *)(lVar38 + 1) == '\x02')) {
            pFVar22 = *(FBaseGraphTask **)(lVar38 + 0x10);
          }
          lVar38 = local_128;
          if (this->bAllowBatchedTicksUnorderedForFrame == false) {
            if ((!bVar15) && (pFVar22 != pFVar21->TickTask)) break;
          }
          else if (!bVar15) break;
          FVar34 = (ForElementType<FTickFunction_*>)((longlong)FVar34 + 8);
        } while( true );
      }
      local_128 = lVar38 + 0x10;
      pFVar22 = (FBaseGraphTask *)(ulonglong)(uVar37 + 1);
      pFVar21 = local_198;
    } while ((int)(uVar37 + 1) < this->TickBatchesNum);
LAB_1488d1938:
    local_198 = pFVar21;
    pFVar21 = local_198;
    if (local_198 != (FTickBatchInfo *)0x0) goto LAB_1488d1fa1;
  }
  if (((this->TickBatches).ArrayNum < this->TickBatchesNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TickBatchesNum <= TickBatches.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                          ,800,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    pFVar21 = (FTickBatchInfo *)(*pcVar13)();
    return pFVar21;
  }
  if (this->TickBatchesNum == (this->TickBatches).ArrayNum) {
    pFVar22 = ::operator_new(0x28);
    if (pFVar22 != (FBaseGraphTask *)0x0) {
      *(undefined8 *)pFVar22 = 0;
      *(undefined8 *)&pFVar22->field_0x8 = 0;
      *(undefined8 *)&pFVar22->field_0x10 = 0;
      *(undefined8 *)&pFVar22->field_0x18 = 0;
      *(undefined8 *)&pFVar22->field_0x20 = 0;
      pFVar33 = pFVar22;
    }
    iVar17 = (this->TickBatches).ArrayNum;
    piVar3 = &(this->TickBatches).ArrayMax;
    if (iVar17 == *piVar3) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)this,piVar3);
    }
    (this->TickBatches).ArrayNum = iVar17 + 1;
    pFVar12 = (this->TickBatches).AllocatorInstance.Data;
    *(undefined4 *)(pFVar12 + (longlong)iVar17 * 0x10) = 0;
    *(FBaseGraphTask **)(pFVar12 + (longlong)iVar17 * 0x10 + 8) = pFVar33;
    if (((this->TickBatchesNum < 0) || ((this->TickBatches).ArrayNum <= this->TickBatchesNum)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TickBatches.IsValidIndex(TickBatchesNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                            ,0x324,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      pFVar21 = (FTickBatchInfo *)(*pcVar13)();
      return pFVar21;
    }
  }
  uVar16 = this->TickBatchesNum;
  uVar37 = uVar18;
  if ((int)uVar16 < (this->TickBatches).ArrayNum) {
    uVar37 = ~uVar16 >> 0x1f;
  }
  if ((uVar37 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    pFVar21 = (FTickBatchInfo *)(*pcVar13)();
    return pFVar21;
  }
  *(uint *)((this->TickBatches).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10) = uVar9;
  uVar9 = this->TickBatchesNum;
  if ((int)uVar9 < (this->TickBatches).ArrayNum) {
    uVar18 = ~uVar9 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    pFVar21 = (FTickBatchInfo *)(*pcVar13)();
    return pFVar21;
  }
  pFVar21 = *(FTickBatchInfo **)
             ((this->TickBatches).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10 + 8);
  this->TickBatchesNum = this->TickBatchesNum + 1;
  local_198 = pFVar21;
  if ((pFVar21->TickTask != (FBaseGraphTask *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("BatchInfo->TickTask == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                          ,0x32b,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    pFVar21 = (FTickBatchInfo *)(*pcVar13)();
    return pFVar21;
  }
  local_118.World = local_150->World;
  local_118.DeltaSeconds = local_150->DeltaSeconds;
  local_118.Thread = local_150->Thread;
  uVar5._0_1_ = local_150->TickType;
  uVar5._1_1_ = local_150->TickGroup;
  uVar5._2_1_ = local_150->bLogTick;
  uVar5._3_1_ = local_150->bLogTicksShowPrerequistes;
  uVar5._4_4_ = *(undefined4 *)&local_150->field_0x14;
  local_118._16_2_ = SUB82(uVar5,0);
  local_118.bLogTick = this->bLogTicks;
  local_118.bLogTicksShowPrerequistes = this->bLogTicksShowPrerequistes;
  local_118._20_4_ = uVar5._4_4_;
  uVar8 = local_168->field_0xa;
  if (((local_168->bRunOnAnyThread == '\0') || (this->bAllowConcurrentTicks == false)) ||
     ((((local_168->InternalData).Ptr)->ActualStartTickGroup).Value != (local_168->TickGroup).Value)
     ) {
    local_118._8_8_ = CONCAT44(((byte)uVar8 & 0x20) << 4,local_118.DeltaSeconds) | 0x100000000;
  }
  else if (local_168->bHighPriority == '\0') {
    TVar19 = FAutoConsoleTaskPriority::Get
                       (&CPrio_NormalAsyncTickTaskPriority,AnyNormalThreadNormalTask);
    local_118.Thread = TVar19;
  }
  else {
    TVar19 = FAutoConsoleTaskPriority::Get
                       (&CPrio_HiPriAsyncTickTaskPriority,AnyNormalThreadNormalTask);
    local_118.Thread = TVar19;
  }
  iVar17 = param_1->ArrayNum;
  piVar3 = &param_1->ArrayNum;
  if (iVar17 < 1) {
    local_b8 = &local_118;
    local_b0.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    pTVar24 = TGraphTask<FBatchTickFunctionTask>::FConstructor::
              ConstructAndHold<FTickBatchInfo_*_&,FTickContext_*>(&local_b0,&local_198,&local_b8);
    pFVar21->TickTask = (FBaseGraphTask *)pTVar24;
  }
  else {
    FVar11 = (param_1->AllocatorInstance).SecondaryData;
    (pFVar21->TickPrerequisites).ArrayNum = iVar17;
    FVar34 = (ForElementType<FTickFunction_*>)param_1;
    if (FVar11 != (ForElementType<FTickFunction_*>)0x0) {
      FVar34 = FVar11;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar17,(pFVar21->TickPrerequisites).ArrayMax,
               &(pFVar21->TickPrerequisites).AllocatorInstance,iVar17,
               &(pFVar21->TickPrerequisites).ArrayMax);
    memcpy((pFVar21->TickPrerequisites).AllocatorInstance.Data,(void *)FVar34,(longlong)iVar17 << 3)
    ;
    FVar11 = (param_1->AllocatorInstance).SecondaryData;
    iVar17 = *piVar3;
    local_a0.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 4;
    if (FVar11 != (ForElementType<FTickFunction_*>)0x0) {
      param_1 = (TArray<FTickFunction_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                FVar11;
    }
    FVar11 = (ForElementType<FTickFunction_*>)((longlong)param_1 + (longlong)iVar17 * 8);
    while( true ) {
      if (*piVar3 != iVar17) {
        local_1a6 = 0;
        `TCheckedPointerIterator<FTickFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1a6);
      }
      if ((ForElementType<FTickFunction_*>)param_1 == FVar11) break;
      TVar23 = FTickFunction::GetCompletionHandle(*(FTickFunction **)param_1);
      FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
      if (local_a0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar30 = local_a0.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar30 <= TVar23.Reference) {
        FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
        if (local_a0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar30 = local_a0.AllocatorInstance.SecondaryData;
        }
        if ((TVar23.Reference <
             (FBaseGraphTask *)((longlong)FVar30 + (longlong)local_a0.ArrayMax * 8)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          pFVar21 = (FTickBatchInfo *)(*pcVar13)();
          return pFVar21;
        }
      }
      if (local_a0.ArrayNum == local_a0.ArrayMax) {
        local_a0.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
      }
      FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
      if (local_a0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar30 = local_a0.AllocatorInstance.SecondaryData;
      }
      puVar2 = (undefined8 *)((longlong)FVar30 + (longlong)local_a0.ArrayNum * 8);
      local_a0.ArrayNum = local_a0.ArrayNum + 1;
      *puVar2 = 0;
      *puVar2 = *(undefined8 *)TVar23.Reference;
      *(undefined8 *)TVar23.Reference = 0;
      if (local_d0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_d0 + 6);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_d0 != (undefined8 *)0x0)) {
          (**(code **)*local_d0)(local_d0,1);
        }
      }
      param_1 = (TArray<FTickFunction_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                ((longlong)param_1 + 8);
    }
    local_c0.Prerequisites = &local_a0;
    local_c8 = &local_118;
    pTVar24 = TGraphTask<FBatchTickFunctionTask>::FConstructor::
              ConstructAndHold<FTickBatchInfo_*_&,FTickContext_*>(&local_c0,&local_198,&local_c8);
    pFVar21 = local_198;
    local_198->TickTask = (FBaseGraphTask *)pTVar24;
    FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
    if (local_a0.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar30 = local_a0.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar30,local_a0.ArrayNum);
    if (local_a0.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_a0.AllocatorInstance.SecondaryData);
    }
  }
  local_190 = pFVar21->TickTask;
  uVar35 = (ulonglong)local_1a5;
  if (local_1a4 == 0) {
    paTVar14 = this->TickTasks;
  }
  else {
    paTVar14 = this->HiPriTickTasks;
  }
  pTVar31 = paTVar14[bVar28] + uVar35;
  if (((*(FBaseGraphTask ***)&pTVar31->field_0x0 <= &local_190) &&
      (&local_190 < *(FBaseGraphTask ***)&pTVar31->field_0x0 + *(int *)&pTVar31->field_0xc)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    pFVar21 = (FTickBatchInfo *)(*pcVar13)();
    return pFVar21;
  }
  iVar17 = *(int *)&pTVar31->field_0x8;
  if (iVar17 == *(int *)&pTVar31->field_0xc) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pTVar31,(int *)&pTVar31->field_0xc);
  }
  *(int *)&pTVar31->field_0x8 = iVar17 + 1;
  FVar30 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(this->TickCompletionEvents + uVar35);
  *(FBaseGraphTask **)(*(longlong *)&pTVar31->field_0x0 + (longlong)iVar17 * 8) = local_190;
  local_158 = local_190;
  if (local_190 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&local_190->field_0x30 = *(int *)&local_190->field_0x30 + 1;
    UNLOCK();
  }
  FVar27 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20);
  FVar25 = FVar30;
  if (FVar27 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar25 = FVar27;
  }
  if ((ulonglong)FVar25 <= &local_158) {
    FVar25 = FVar30;
    if (FVar27 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar25 = FVar27;
    }
    if ((&local_158 <
         (FBaseGraphTask **)((longlong)FVar25 + (longlong)*(int *)((longlong)FVar30 + 0x2c) * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      pFVar21 = (FTickBatchInfo *)(*pcVar13)();
      return pFVar21;
    }
  }
  iVar17 = *(int *)((longlong)FVar30 + 0x28);
  if (iVar17 == *(int *)((longlong)FVar30 + 0x2c)) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar30,
                        (int *)((longlong)FVar30 + 0x2c));
  }
  *(int *)((longlong)FVar30 + 0x28) = iVar17 + 1;
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20) !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar30 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar30 + 0x20);
  }
  puVar2 = (undefined8 *)((longlong)FVar30 + (longlong)iVar17 * 8);
  *puVar2 = 0;
  *puVar2 = local_158;
  local_158 = (FBaseGraphTask *)0x0;
LAB_1488d1fa1:
  pFVar12 = (pFVar21->TickFunctions).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_168) &&
      ((FScriptContainerElement *)&local_168 <
       pFVar12 + (longlong)(pFVar21->TickFunctions).ArrayMax * 8)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    pFVar21 = (FTickBatchInfo *)(*pcVar13)();
    return pFVar21;
  }
  iVar17 = (pFVar21->TickFunctions).ArrayNum;
  piVar3 = &(pFVar21->TickFunctions).ArrayMax;
  if (iVar17 == *piVar3) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(pFVar21->TickFunctions).AllocatorInstance,piVar3);
  }
  pFVar12 = (pFVar21->TickFunctions).AllocatorInstance.Data;
  (pFVar21->TickFunctions).ArrayNum = iVar17 + 1;
  *(FTickFunction **)(pFVar12 + (longlong)iVar17 * 8) = local_168;
  pFVar33 = pFVar21->TickTask;
  pFVar10 = (local_168->InternalData).Ptr;
  if (pFVar10 == (FInternalData *)0x0) {
    return pFVar21;
  }
  pFVar10->TaskState = HasTask;
  ((local_168->InternalData).Ptr)->TaskPointer = pFVar33;
  return pFVar21;
}

// ReleaseTickGroup @ 1488d6080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTickTaskSequencer::ReleaseTickGroup
          (FTickTaskSequencer *this,ETickingGroup param_1,bool param_2,
          TArray<FTickFunction_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  code *pcVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  FTickTaskSequencer *this_00;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup> FVar16;
  FTaskGraphInterface *pFVar17;
  TRefCountPtr<FBaseGraphTask> TVar18;
  FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup_Block> FVar19;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar20;
  longlong *plVar21;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar22;
  ETickingGroup EVar23;
  FNameEntryId FVar24;
  FName FVar25;
  FScriptContainerElement *pFVar26;
  ETickingGroup EVar27;
  undefined1 auStackY_208 [32];
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5 [5];
  ETickingGroup local_1a0;
  ETickingGroup local_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  FColor_u_0 local_188;
  FColor_u_0 local_184;
  undefined4 local_180 [2];
  FName local_178;
  TRefCountPtr<FBaseGraphTask> local_170;
  FName local_168;
  FName local_160;
  FTickTaskSequencer *local_158;
  FName local_150;
  FName local_140;
  FConstructor local_130;
  undefined1 local_128 [16];
  FConstructor local_118;
  undefined1 local_110 [16];
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 *local_e8;
  uint *puStack_e0;
  ETickingGroup local_d8;
  undefined4 uStack_d4;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_b8;
  int local_90;
  int local_8c;
  code *local_88 [2];
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1a0 = param_1;
  local_158 = this;
  if ((this->bLogTicks != false) && (4 < (byte)LogTick._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogTick);
  }
  FVar16 = StatPtr_STAT_ReleaseTickGroup;
  if (StatPtr_STAT_ReleaseTickGroup == (FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup>)0x0) {
    pFVar15 = ::FName::FName(&local_d0,"STAT_ReleaseTickGroup");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseTickGroup,*pFVar15,
                        L"ReleaseTickGroup","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar11 = false;
  bVar8 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  FVar24 = FVar25.ComparisonIndex.Value;
  uVar13 = FVar25.Number;
  if ((FVar24.Value == 0) && (uVar13 == 0)) {
LAB_1488d620e:
    bVar6 = false;
    FVar25 = local_150;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar24.Value;
        local_178.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x3ae);
        bVar11 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488d620e;
    local_190 = FVar24.Value;
    uStack_18c = uVar13;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar6 = true;
  }
  pTVar7 = CVarAllowAsyncTickDispatch.Ref;
  if (this->bSingleThreadMode == false) {
    bVar9 = IsInParallelGameThread();
    if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pTVar7->ShadowedValue[0] == 0) goto LAB_1488d637b;
    pFVar17 = FTaskGraphInterface::Get();
    local_130.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    TVar18 = TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask>::FConstructor::
             ConstructAndDispatchWhenReady<FTickTaskSequencer_&,enum_ETickingGroup_&>
                       (&local_130,(FTickTaskSequencer *)local_128,(ETickingGroup *)this);
    local_b8.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_90 = 1;
    pcVar5 = *(code **)((longlong)*pFVar17 + 0x60);
                    /* WARNING: Load size is inaccurate */
    local_170.Reference = *TVar18.Reference;
    *(undefined8 *)TVar18.Reference = 0;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_b8,1,&local_8c);
    FVar20 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
    if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar20 = local_b8.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar20,&local_170,1);
    (*pcVar5)(pFVar17,&local_b8);
    FVar20 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
    if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar20 = local_b8.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar20,local_90)
    ;
    if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_b8.SecondaryData);
    }
    if (local_170.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_170.Reference)->field_0x30;
      iVar14 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (*(code *)**(undefined8 **)local_170.Reference)();
      }
    }
    if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
      LOCK();
      pFVar2 = (FScriptContainerElement *)(local_128._0_8_ + 0x30);
      iVar14 = *(int *)pFVar2;
      *(int *)pFVar2 = *(int *)pFVar2 + -1;
      UNLOCK();
      if ((iVar14 == 1) &&
         ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_128._0_8_)();
      }
    }
  }
  else {
LAB_1488d637b:
    DispatchTickGroup(this,GameThread,param_1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  pFVar26 = (param_3->AllocatorInstance).Data;
  iVar14 = param_3->ArrayNum;
  pFVar2 = pFVar26 + (longlong)iVar14 * 8;
  while( true ) {
    if (param_3->ArrayNum != iVar14) {
      local_1a7 = 0;
      `TCheckedPointerIterator<FTickFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1a7);
    }
    if (pFVar26 == pFVar2) break;
    cVar10 = (**(code **)(**(longlong **)pFVar26 + 0x10))();
    if ((cVar10 == '\0') &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7009048750584759230>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                            ,0x3be,"TickToManualDispatch->DispatchManually()"), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar26 = pFVar26 + 8;
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if ((!param_2) && (this->bSingleThreadMode == false)) {
    pFVar17 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar17 + 0x48))(pFVar17,1);
    if (((int)(local_1a0 + TG_StartPhysics) < 8) && (local_1a0 != TG_NewlySpawned)) {
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("WorldTickGroup + 1 < TG_MAX && WorldTickGroup != TG_NewlySpawned",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                        ,0x424,L"");
    if (!bVar11) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar19 = StatPtr_STAT_ReleaseTickGroup_Block;
  if (StatPtr_STAT_ReleaseTickGroup_Block ==
      (FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup_Block>)0x0) {
    pFVar15 = ::FName::FName(&local_c8,"STAT_ReleaseTickGroup_Block");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup_Block>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseTickGroup_Block,*pFVar15,
                        L"ReleaseTickGroup Block","STATGROUP_TickGroups","STATCAT_Advanced",
                        L"TickGroups",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar19;
  bVar11 = false;
  bVar6 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar8 = false;
  bVar9 = false;
  FVar24 = FVar25.ComparisonIndex.Value;
  uVar13 = FVar25.Number;
  if ((FVar24.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_184.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar6 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar24.Value;
        local_168.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x3c4);
        bVar11 = true;
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_198 = FVar24.Value;
      uStack_194 = uVar13;
      local_160 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar8 = true;
      goto LAB_1488d65ed;
    }
  }
  bVar6 = bVar9;
  bVar11 = bVar8;
  bVar8 = false;
  local_160 = local_140;
  FVar25 = local_140;
LAB_1488d65ed:
  this_00 = local_158;
  EVar27 = this->WaitForTickGroup;
  EVar23 = local_1a0;
  local_198 = EVar27;
  if ((int)EVar27 <= (int)local_1a0) {
    do {
      if (*(int *)&this_00->TickCompletionEvents[(int)EVar27].field_0x28 != 0) {
        bVar9 = -1 < CpuChannel->Enabled;
        local_198 = EVar27;
        if (bVar9) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                      ::__l42::__CpuProfilerEventSpecId970,"TickCompletionEvents",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                     ,0x3ca);
          FCpuProfilerTrace::OutputBeginEvent
                    (`public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                     ::__l42::__CpuProfilerEventSpecId970);
          EVar23 = local_1a0;
        }
        if (GIdleTaskWorkMS < 0.0) {
          pFVar17 = FTaskGraphInterface::Get();
          (**(code **)((longlong)*pFVar17 + 0x60))
                    (pFVar17,this_00->TickCompletionEvents + (int)EVar27,1);
        }
        else {
          local_1a6 = 0.0 < GIdleTaskWorkMS;
          local_110._8_8_ = this_00;
          local_128._8_4_ = 0;
          local_128._12_4_ = 0;
          local_1a5[0] = 0 < *(int *)&this_00->ManualDispatchTicks[(int)EVar23].field_0x8;
          local_180[0] = *(undefined4 *)&this_00->TickCompletionEvents[(int)EVar27].field_0x28;
          puStack_100 = &local_1a6;
          local_f8 = local_1a5;
          puStack_f0 = local_128 + 8;
          local_e8 = local_180;
          puStack_e0 = &local_190;
          local_190 = 0;
          local_d8 = EVar23;
          pFVar17 = FTaskGraphInterface::Get();
          local_88[0] = (code *)0x0;
          local_60 = (longlong *)0x0;
          pcVar5 = *(code **)((longlong)*pFVar17 + 0x68);
          local_60 = FMemory::Malloc(0x40,8);
          *local_60 = (longlong)
                      &
                      ___7__TFunction_OwnedObject_V<lambda_1>__CN___ReleaseTickGroup_FTickTaskSequencer__QEAAXW4ETickingGroup___NAEAV__TArray_PEAUFTickFunction__V__TSizedDefaultAllocator__0CA______Z__0A__00_Function_Private_Core_UE__6B_
          ;
          local_60[1] = local_110._8_8_;
          local_60[2] = (longlong)puStack_100;
          local_60[3] = (longlong)local_f8;
          local_60[4] = (longlong)puStack_f0;
          *(undefined4 *)(local_60 + 5) = local_e8._0_4_;
          *(undefined4 *)((longlong)local_60 + 0x2c) = local_e8._4_4_;
          *(undefined4 *)(local_60 + 6) = puStack_e0._0_4_;
          *(undefined4 *)((longlong)local_60 + 0x34) = puStack_e0._4_4_;
          local_60[7] = CONCAT44(uStack_d4,local_d8);
          if (local_60 + 1 != (longlong *)0x0) {
            local_88[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FTickTaskSequencer::ReleaseTickGroup'::__l45::<lambda_1>,enum_FTaskGraphInterface::EProcessTasksOperation,int>
                          ::Call;
          }
          (*pcVar5)(pFVar17,this_00->TickCompletionEvents + (int)EVar27,1,local_88);
          if (local_88[0] != (code *)0x0) {
            plVar21 = local_78;
            if (local_60 != (longlong *)0x0) {
              plVar21 = local_60;
            }
            (**(code **)(*plVar21 + 0x10))();
          }
        }
        pTVar7 = CVarAllowAsyncTickCleanup.Ref;
        if ((this_00->bSingleThreadMode == false) && (EVar27 != TG_NewlySpawned)) {
          bVar12 = IsInParallelGameThread();
          if ((!bVar12) &&
             ((bVar12 = IsInGameThread(), !bVar12 &&
              (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007945>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6c9,"GetShadowIndex() == 0"), bVar12)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pTVar7->ShadowedValue[0] == 0) ||
             (*(int *)&this_00->TickCompletionEvents[(int)EVar27].field_0x28 < 0x32))
          goto LAB_1488d69a1;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                 ::__l52::_thread_safe_static_guard_1__) &&
             (_Init_thread_header(&`public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                                   ::__l52::_thread_safe_static_guard_1__),
             `public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
             ::__l52::_thread_safe_static_guard_1__ == -1)) {
            _StatPtr_STAT_FDelegateGraphTask_ResetTickGroup = 0;
            pFVar15 = ::FName::FName(&local_c0,"STAT_FDelegateGraphTask_ResetTickGroup");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                        ::__l52::StatPtr_STAT_FDelegateGraphTask_ResetTickGroup,*pFVar15,
                       L"FDelegateGraphTask.ResetTickGroup","STATGROUP_TaskGraphTasks",
                       "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
            _Init_thread_footer(&`public:_void___cdecl_FTickTaskSequencer::ReleaseTickGroup(ETickingGroup,bool,TArray<FTickFunction*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                                 ::__l52::_thread_safe_static_guard_1__);
          }
          local_118.Prerequisites =
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0;
          FVar20 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this_00->CleanupTasks;
          TVar18 = TGraphTask<FTickTaskSequencer::FResetTickGroupTask>::FConstructor::
                   ConstructAndDispatchWhenReady<FTickTaskSequencer_&,enum_ETickingGroup_&>
                             (&local_118,(FTickTaskSequencer *)local_110,(ETickingGroup *)this_00);
          FVar4 = (this_00->CleanupTasks).AllocatorInstance.SecondaryData;
          FVar22 = FVar20;
          if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar22 = FVar4;
          }
          if ((ulonglong)FVar22 <= TVar18.Reference) {
            FVar22 = FVar20;
            if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar22 = FVar4;
            }
            if ((TVar18.Reference <
                 (FBaseGraphTask *)
                 ((longlong)FVar22 + (longlong)(this_00->CleanupTasks).ArrayMax * 8)) &&
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
          }
          iVar14 = (this_00->CleanupTasks).ArrayNum;
          piVar3 = &(this_00->CleanupTasks).ArrayMax;
          if (iVar14 == *piVar3) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar20,piVar3
                               );
          }
          (this_00->CleanupTasks).ArrayNum = iVar14 + 1;
          FVar4 = (this_00->CleanupTasks).AllocatorInstance.SecondaryData;
          if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar20 = FVar4;
          }
          *(undefined8 *)((longlong)FVar20 + (longlong)iVar14 * 8) = 0;
          *(undefined8 *)((longlong)FVar20 + (longlong)iVar14 * 8) = *(undefined8 *)TVar18.Reference
          ;
          *(undefined8 *)TVar18.Reference = 0;
          if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
            LOCK();
            pFVar2 = (FScriptContainerElement *)(local_110._0_8_ + 0x30);
            iVar14 = *(int *)pFVar2;
            *(int *)pFVar2 = *(int *)pFVar2 + -1;
            UNLOCK();
            if ((iVar14 == 1) &&
               ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)local_110._0_8_)(local_110._0_8_,1);
            }
          }
        }
        else {
LAB_1488d69a1:
          ResetTickGroup(this_00,EVar27);
        }
        EVar23 = local_1a0;
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
          EVar23 = local_1a0;
        }
      }
      EVar27 = EVar27 + TG_StartPhysics;
      FVar25 = local_160;
      this = local_158;
      local_198 = EVar27;
    } while ((int)EVar27 <= (int)EVar23);
  }
  this->WaitForTickGroup = (EVar23 != TG_NewlySpawned) + EVar23;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// ResetTickGroup @ 1488dab20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTickTaskSequencer::ResetTickGroup(FTickTaskSequencer *this,ETickingGroup param_1)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  FNameEntryId FVar11;
  FName FVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> *pTVar14;
  FNameEntryId FVar15;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FStatMessage local_48;
  
  FVar15.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FTickTaskSequencer::ResetTickGroup(ETickingGroup)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FTickTaskSequencer::ResetTickGroup(ETickingGroup)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FTickTaskSequencer::ResetTickGroup(ETickingGroup)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_ResetTickGroup = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_ResetTickGroup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FTickTaskSequencer::ResetTickGroup(ETickingGroup)___ptr64'::
                __l2::StatPtr_STAT_ResetTickGroup,*pFVar7,L"STAT_ResetTickGroup","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FTickTaskSequencer::ResetTickGroup(ETickingGroup)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_ResetTickGroup;
  if (_StatPtr_STAT_ResetTickGroup == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_ResetTickGroup");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_void___cdecl_FTickTaskSequencer::ResetTickGroup(ETickingGroup)___ptr64'
                         ::__l2::StatPtr_STAT_ResetTickGroup,*pFVar7,L"STAT_ResetTickGroup",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar8->Name;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x488);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      FVar15.Value = FVar11.Value;
      goto LAB_1488dacb1;
    }
  }
  bVar5 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_1488dacb1:
  FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
           (this->TickCompletionEvents + (int)param_1);
  puVar1 = (uchar *)((longlong)FVar13 + 0x2c);
  iVar3 = *(int *)((ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar13 + 0x28))->
                  InlineData;
  FVar10 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar13 + 0x20);
  if (*(int *)puVar1 < 0) {
    if (FVar10 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar10 = FVar13;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar10,iVar3);
    *(undefined4 *)((longlong)FVar13 + 0x28) = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar13,0,(int *)puVar1);
    }
  }
  else {
    if (FVar10 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar10 = FVar13;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar10,iVar3);
    *(undefined4 *)((longlong)FVar13 + 0x28) = 0;
  }
  pTVar14 = this->ManualDispatchTicks + (int)param_1;
  *(undefined4 *)&pTVar14->field_0x8 = 0;
  if (*(int *)&pTVar14->field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar14,0,(int *)&pTVar14->field_0xc);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SingleThreadedMode @ 1488e0450

bool __cdecl FTickTaskSequencer::SingleThreadedMode(void)

{
  bool bVar1;
  int iVar2;
  
  if (`public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::__l3::
      _thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return `public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::__l3::
           bIsSingleThread;
  }
  _Init_thread_header(&`public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::
                       __l3::_thread_safe_static_guard_0__);
  if (`public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::__l3::
      _thread_safe_static_guard_0__ == -1) {
    bVar1 = FApp::IsMultithreadServer();
    if (((bVar1) && (bVar1 = FGenericPlatformProcess::SupportsMultithreading(), bVar1)) ||
       ((bVar1 = FApp::ShouldUseThreadingForPerformance(), bVar1 &&
        ((iVar2 = FWindowsPlatformMisc::NumberOfCores(), 2 < iVar2 &&
         (bVar1 = FGenericPlatformProcess::SupportsMultithreading(), bVar1)))))) {
      `public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::__l3::
      bIsSingleThread = false;
    }
    else {
      `public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::__l3::
      bIsSingleThread = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    return `public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::__l3::
           bIsSingleThread;
  }
  return `public:_static_bool___cdecl_FTickTaskSequencer::SingleThreadedMode(void)'::__l3::
         bIsSingleThread;
}

// StartFrame @ 1488e1650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTickTaskSequencer::StartFrame(FTickTaskSequencer *this)

{
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  pTVar3 = CVarLogTicks.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bLogTicks = pTVar3->ShadowedValue[0] != 0;
  pTVar3 = CVarLogTicksShowPrerequistes.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bLogTicksShowPrerequistes = pTVar3->ShadowedValue[0] != 0;
  bVar4 = SingleThreadedMode();
  this->bSingleThreadMode = bVar4;
  if ((this->bLogTicks != false) && (4 < (byte)LogTick._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FTickTaskSequencer::StartFrame(void)___ptr64'::__l6::
                LOG_Static,(FLogCategoryBase *)&LogTick);
  }
  pTVar3 = CVarAllowAsyncComponentTicks.Ref;
  if (this->bSingleThreadMode == false) {
    bVar4 = IsInParallelGameThread();
    if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = pTVar3->ShadowedValue[0] != 0;
  }
  else {
    bVar4 = false;
  }
  this->bAllowConcurrentTicks = bVar4;
  pTVar3 = CVarAllowBatchedTicks.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bAllowBatchedTicksForFrame = pTVar3->ShadowedValue[0] != 0;
  pTVar3 = CVarAllowBatchedTicksUnordered.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bAllowBatchedTicksUnorderedForFrame = pTVar3->ShadowedValue[0] != 0;
  pTVar3 = CVarAllowOptimizedPrerequisites.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bAllowOptimizedPrerequisites = pTVar3->ShadowedValue[0] != 0;
  WaitForCleanup(this);
  piVar6 = (int *)&this->TickTasks[0][0].field_0x8;
  lVar8 = 8;
  puVar10 = (undefined4 *)&this->ManualDispatchTicks[0].field_0x8;
  piVar9 = (int *)&this->TickCompletionEvents[0].field_0x28;
  do {
    if ((*piVar9 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TickCompletionEvents[Index].Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                           ,0x449,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(piVar9 + -2);
    pFVar1 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(piVar9 + -10);
    if (piVar9[1] < 0) {
      if (pFVar5 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
        pFVar5 = pFVar1;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)pFVar5,*piVar9);
      *piVar9 = 0;
      if (piVar9[1] != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,0,pFVar1,0,piVar9 + 1);
      }
    }
    else {
      if (pFVar5 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
        pFVar5 = pFVar1;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)pFVar5,*piVar9);
      *piVar9 = 0;
    }
    *puVar10 = 0;
    if ((int)puVar10[1] < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(puVar10 + -2),0,puVar10 + 1);
    }
    lVar7 = 8;
    do {
      if (((*piVar6 != 0) || (piVar6[-0x100] != 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TickTasks[Index][IndexInner].Num() && !HiPriTickTasks[Index][IndexInner].Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                             ,0x44e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *piVar6 = 0;
      if (piVar6[1] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar6 + -2),0,piVar6 + 1);
      }
      piVar6[-0x100] = 0;
      if (piVar6[-0xff] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar6 + -0x102),0,piVar6 + -0xff);
      }
      piVar6 = piVar6 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    piVar9 = piVar9 + 0xc;
    puVar10 = puVar10 + 4;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      this->WaitForTickGroup = TG_PrePhysics;
      return;
    }
  } while( true );
}

// WaitForCleanup @ 1488ec520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTickTaskSequencer::WaitForCleanup(FTickTaskSequencer *this)

{
  int *piVar1;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_CleanupTasksWait> FVar8;
  FTaskGraphInterface *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  pTVar2 = &this->CleanupTasks;
  if ((this->CleanupTasks).ArrayNum < 1) {
    return;
  }
  FVar14.Value = 0;
  FVar8 = StatPtr_STAT_CleanupTasksWait;
  if (StatPtr_STAT_CleanupTasksWait == (FThreadSafeStaticStat<FStat_STAT_CleanupTasksWait>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_CleanupTasksWait");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_CleanupTasksWait>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CleanupTasksWait,*pFVar7,
                       L"CleanupTasksWait","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x480);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = FVar12.Value;
      goto LAB_1488ec698;
    }
  }
  bVar5 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_1488ec698:
  pFVar9 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar9 + 0x60))(pFVar9,pTVar2);
  piVar1 = &(this->CleanupTasks).ArrayMax;
  iVar3 = (this->CleanupTasks).ArrayNum;
  FVar11 = (this->CleanupTasks).AllocatorInstance.SecondaryData;
  if (*piVar1 < 0) {
    if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar11,iVar3);
    (this->CleanupTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar11,iVar3);
    (this->CleanupTasks).ArrayNum = 0;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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

