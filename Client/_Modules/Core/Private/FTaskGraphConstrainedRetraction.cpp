// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// GetTestFlags @ 141ad7e60

EAutomationTestFlags __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::GetTestFlags(FTaskGraphConstrainedRetraction *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad7e70

bool __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::IsStressTest(FTaskGraphConstrainedRetraction *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad7e80

uint __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::GetRequiredDeviceNum
          (FTaskGraphConstrainedRetraction *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad7e90

FString * __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::GetTestSourceFileName
          (FTaskGraphConstrainedRetraction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad7ec0

int __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::GetTestSourceFileLine
          (FTaskGraphConstrainedRetraction *this)

{
  return 0x55a;
}

// GetTests @ 141ad7ed0

/* WARNING: Removing unreachable block (ram,0x000141ad804e) */

void __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::GetTests
          (FTaskGraphConstrainedRetraction *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141ad8070

bool __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::RunTest
          (FTaskGraphConstrainedRetraction *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad80a0

FString * __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::GetBeautifiedTestName
          (FTaskGraphConstrainedRetraction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141ade980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(TRefCountPtr<FBaseGraphTask> param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (CpuChannel->Enabled < 0) {
    FCpuProfilerTrace::FlushThreadBuffer();
                    /* WARNING: Load size is inaccurate */
    FBaseGraphTask::Wait(*param_1.Reference,AnyNormalThreadNormalTask);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1379,"Task_Wait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
               ,0x563);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1379);
    FCpuProfilerTrace::FlushThreadBuffer();
                    /* WARNING: Load size is inaccurate */
    FBaseGraphTask::Wait(*param_1.Reference,AnyNormalThreadNormalTask);
    FCpuProfilerTrace::OutputEndEvent();
  }
  puVar3 = *(undefined8 **)param_1.Reference;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141adea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 141adeb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l2::<lambda_2>::
<lambda_invoker_cdecl>(TRefCountPtr<FBaseGraphTask> param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskGraphInterface *pFVar4;
  
  if (CpuChannel->Enabled < 0) {
    FCpuProfilerTrace::FlushThreadBuffer();
    pFVar4 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (pFVar4,(TRefCountPtr<FBaseGraphTask> *)param_1.Reference,AnyNormalThreadNormalTask);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1380,"Task_WaitUntilTaskCompletes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
               ,0x564);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1380);
    FCpuProfilerTrace::FlushThreadBuffer();
    pFVar4 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (pFVar4,(TRefCountPtr<FBaseGraphTask> *)param_1.Reference,AnyNormalThreadNormalTask);
    FCpuProfilerTrace::OutputEndEvent();
  }
  puVar3 = *(undefined8 **)param_1.Reference;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141adebf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// FTaskGraphConstrainedRetraction @ 141b278c0

FTaskGraphConstrainedRetraction * __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::FTaskGraphConstrainedRetraction
          (FTaskGraphConstrainedRetraction *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FTaskGraphConstrainedRetraction_TaskGraphTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::TaskGraph::ConstrainedRetraction");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141b31cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l4::<lambda_3>::operator()
          (void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::`4'::<lambda_3>::operator()'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = *(undefined8 *)this;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l4::<lambda_3>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  local_res8 = (undefined8 *)**(longlong **)this;
  puVar6 = (undefined8 *)
           ((longlong)**(int **)((longlong)this + 0x10) * 0x30 + *(longlong *)((longlong)this + 8));
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_res8 + 6) = *(int *)(local_res8 + 6) + 1;
    UNLOCK();
  }
  UE::Core::Private::Function::CheckCallable((void *)*puVar6);
  pcVar3 = (code *)*puVar6;
  plVar5 = puVar6 + 2;
  if ((longlong *)puVar6[5] != (longlong *)0x0) {
    plVar5 = (longlong *)puVar6[5];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,&local_res8);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// TestBody @ 141ba1f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody
          (FTaskGraphConstrainedRetraction *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_00;
  FTaskBase *pFVar5;
  FTask *pFVar6;
  FTaskBase *pFVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  FTaskBase *pFVar12;
  bool bVar13;
  undefined1 auStackY_128 [32];
  EExtendedTaskPriority local_e7;
  ETaskPriority local_e6 [2];
  uint local_e4;
  FTaskBase *local_e0;
  FTaskBase *local_d8 [2];
  code *local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  FPipe *local_a8;
  longlong *local_a0;
  code *local_98 [2];
  undefined **local_88;
  code *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1372,"FTaskGraphConstrainedRetraction",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
               ,0x55c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1372);
  }
  pFVar12 = (FTaskBase *)0x0;
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,1,0,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  local_70 = (undefined ***)0x0;
  local_80 = `TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_88 = &
             ___7__TFunction_OwnedObject_P6AXV__TRefCountPtr_VFBaseGraphTask_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(TRefCountPtr<FBaseGraphTask>),void,TRefCountPtr<FBaseGraphTask>_>
                ::Call;
  local_50 = `TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXV__TRefCountPtr_VFBaseGraphTask_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(TRefCountPtr<FBaseGraphTask>),void,TRefCountPtr<FBaseGraphTask>_>
             ::Call;
  local_e4 = 0;
  do {
    this_00 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               *)GetGraphEventImplAllocator();
    pFVar5 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate(this_00);
    pFVar7 = pFVar12;
    if (pFVar5 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar5,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar5->_padding_ = (longlong)&___7FGraphEventImpl__6B_;
      TaskTrace::Created((ulong64)pFVar5->TraceId,0xd8);
      if (((*(ulonglong *)&(pFVar5->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar5->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar5->LowLevelTask).field_0x28,&pFVar5->LowLevelTask);
      *(FTaskBase **)&pFVar5->LowLevelTask = pFVar5;
      *(undefined ***)&(pFVar5->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(pFVar5->LowLevelTask).field_0x8 = pFVar5;
      pFVar6 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar6 != (FTask *)0x0) {
        pFVar7 = *(FTaskBase **)&pFVar6->field_0x30;
      }
      *(FTaskBase **)&(pFVar5->LowLevelTask).field_0x30 = pFVar7;
      *(undefined8 *)&(pFVar5->LowLevelTask).field_0x38 = 0xc8000054184c7c00;
      pFVar5->ExtendedPriority = TaskEvent;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&pFVar5->_padding_);
      pFVar7 = pFVar5;
    }
    local_c8 = (code *)0x0;
    local_a0 = (longlong *)0x0;
    local_d8[0] = pFVar7;
    local_a0 = FMemory::Malloc(0x20,8);
    *local_a0 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::`4'::<lambda_3>,1,1>
                 ::_vftable_;
    local_a0[1] = (longlong)local_d8;
    local_a0[2] = (longlong)local_98;
    local_a0[3] = (longlong)&local_e4;
    if (local_a0 + 1 != (longlong *)0x0) {
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphConstrainedRetraction::TestBody'::__l4::<lambda_3>,void>
                 ::Call;
    }
    pFVar5 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar7 = pFVar12;
    if (pFVar5 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar5,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar5->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
      pFVar7 = pFVar5;
    }
    pFVar7[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    pFVar7[1]._padding_ = (longlong)local_c8;
    *(longlong **)&pFVar7[1].StateChangeEvent = local_a0;
    local_a0 = (longlong *)0x0;
    pFVar7[1]._padding_ = local_b8;
    pFVar7[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_b0;
    pFVar7[1].NumLocks = (atomic<unsigned_int>)uStack_b0._4_4_;
    pFVar7[1].Pipe = local_a8;
    if (pFVar7[1]._padding_ != 0) {
      local_c8 = (code *)0x0;
    }
    pFVar7[1].ExecutingThreadId = (atomic<unsigned_int>)0xff;
    UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_e6,&local_e7);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar7,L"GraphTask",local_e6[0],local_e7,None);
    LOCK();
    pFVar7->RefCount = (atomic<unsigned_int>)((int)pFVar7->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x130);
    if (local_c8 != (code *)0x0) {
      plVar10 = &local_b8;
      if (local_a0 != (longlong *)0x0) {
        plVar10 = local_a0;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    lVar8 = (longlong)(int)local_e4;
    LOCK();
    pFVar7->RefCount = (atomic<unsigned_int>)((int)pFVar7->RefCount + 1);
    UNLOCK();
    local_e0 = pFVar7;
    UE::Core::Private::Function::CheckCallable(local_98[lVar8 * 6]);
    pcVar3 = local_98[lVar8 * 6];
    pppuVar11 = (&local_70)[lVar8 * 6];
    if ((&local_70)[lVar8 * 6] == (undefined ***)0x0) {
      pppuVar11 = &local_88 + lVar8 * 6;
    }
    uVar9 = (*(code *)(*pppuVar11)[1])();
    (*pcVar3)(uVar9);
    if (local_e0 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_e0->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)local_e0->_padding_)();
      }
    }
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar7->_padding_)(pFVar7);
    }
    if (local_d8[0] != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_d8[0]->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<unsigned_int>)0x1) && (local_d8[0] != (FTaskBase *)0x0)) {
        (**(code **)local_d8[0]->_padding_)();
      }
    }
    local_e4 = local_e4 + 1;
  } while (local_e4 < 2);
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,0,0,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  if (local_68 != (code *)0x0) {
    pppuVar11 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar11 = local_40;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar11 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar11 = local_70;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

