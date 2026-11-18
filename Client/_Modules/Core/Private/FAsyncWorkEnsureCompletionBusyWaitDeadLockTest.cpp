// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adc280

EAutomationTestFlags __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::GetTestFlags
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adc2e0

bool __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::IsStressTest
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adc2f0

uint __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::GetRequiredDeviceNum
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adc300

FString * __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::GetTestSourceFileName
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncWorkTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adc330

int __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::GetTestSourceFileLine
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this)

{
  return 0x55;
}

// GetTests @ 141adc340

/* WARNING: Removing unreachable block (ram,0x000141adc4be) */

void __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::GetTests
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this,
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

// RunTest @ 141adc4e0

bool __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::RunTest
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adc510

FString * __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::GetBeautifiedTestName
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FAsyncWorkEnsureCompletionBusyWaitDeadLockTest @ 141b197c0

FAsyncWorkEnsureCompletionBusyWaitDeadLockTest * __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::FAsyncWorkEnsureCompletionBusyWaitDeadLockTest
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FAsyncWorkEnsureCompletionBusyWaitDeadLockTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][EngineFilter][Disabled]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::AsyncWork::EnsureCompletionBusyWaitDeadlockTest");
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
  ::FString::FString(&local_18,"[.][EditorContext][EngineFilter][Disabled]");
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

// TestBody @ 141b5ea10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::TestBody
          (FAsyncWorkEnsureCompletionBusyWaitDeadLockTest *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  FQueuedThreadPool *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  FAsyncTaskBase *this_00;
  ulonglong uVar12;
  FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_> *_Dst;
  ulonglong uVar13;
  bool bVar14;
  FName local_res18;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FAsyncTaskBase local_a8;
  FQueuedThreadPool *local_38;
  undefined8 uStack_30;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId88,"FAsyncWorkEnsureCompletionBusyWaitDeadLockTest::RunTest"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncWorkTest.cpp"
               ,0x58);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId88);
  }
  pFVar3 = GThreadPool;
  uVar12 = 0;
  local_a8._padding_ = (longlong)&___7__FAsyncTask_UFOuterTask_AsyncWorkTestImpl____6B_;
  local_a8._padding_ = 0;
  local_a8.WorkNotFinishedCounter.Counter = 0;
  local_a8.DoneEvent = (FEvent *)0x0;
  local_a8.QueuedPool = (FQueuedThreadPool *)0x0;
  local_a8.Priority = Normal;
  local_a8.Flags = None;
  local_a8.RequiredMemory = -1;
  local_a8.DebugName = (wchar_t *)0x0;
  local_38 = (FQueuedThreadPool *)0x0;
  uStack_30 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_AsyncWorkTestImpl::FOuterTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_AsyncWorkTestImpl::FOuterTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_AsyncWorkTestImpl::FOuterTask::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`AsyncWorkTestImpl::FOuterTask::GetStatId'::__l2::FStat_FRootTask>::
    FThreadSafeStaticStat<_AsyncWorkTestImpl::FOuterTask::GetStatId_::__l2::FStat_FRootTask>
              (&`public:_struct_TStatId___cdecl_AsyncWorkTestImpl::FOuterTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FRootTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_AsyncWorkTestImpl::FOuterTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_a8.StatId.StatIdPtr = _StatPtr_FRootTask;
  if (_StatPtr_FRootTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res18,"FRootTask");
    local_a8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_struct_TStatId___cdecl_AsyncWorkTestImpl::FOuterTask::GetStatId(void)const___ptr64'
                     ::__l2::StatPtr_FRootTask,*pFVar7,L"FRootTask","STATGROUP_ThreadPoolAsyncTasks"
                    ,"STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                    MCR_Invalid);
  }
  if ((local_a8.WorkNotFinishedCounter.Counter != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_a8.QueuedPool != (FQueuedThreadPool *)0x0) &&
      (::FDebug::DumpStackTraceToLog(Warning), local_a8.QueuedPool != (FQueuedThreadPool *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38 = pFVar3;
  iVar5 = (**(code **)((longlong)*pFVar3 + 0x28))(pFVar3);
  if ((local_a8.WorkNotFinishedCounter.Counter != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_a8.QueuedPool != (FQueuedThreadPool *)0x0) &&
      (::FDebug::DumpStackTraceToLog(Warning), local_a8.QueuedPool != (FQueuedThreadPool *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_30 = CONCAT44(uStack_30._4_4_,iVar5 * 200);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  uVar6 = (**(code **)((longlong)*pFVar3 + 0x28))(pFVar3);
  uVar8 = (ulonglong)(int)local_b0;
  if ((int)local_b0 < (int)uVar6) {
    iVar11 = uVar6 - (int)local_b0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar11,&local_b8,(int *)&local_b0,(int *)((longlong)&local_b0 + 4));
    DefaultConstructItems<FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>,int>
              (local_b8.Data + (longlong)iVar5 * 0x78,iVar11);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)local_b0 <= (int)uVar6) goto LAB_141b5ed55;
    uVar9 = (int)local_b0 - uVar6;
    if ((int)(uVar9 | uVar6) < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = local_b0 & 0xffffffff;
    }
    if (uVar9 == 0) goto LAB_141b5ed55;
    _Dst = (FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>
            *)(local_b8.Data + (longlong)(int)uVar6 * 0x78);
    DestructItems<FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>,int>
              (_Dst,uVar9);
    iVar5 = ((int)local_b0 - uVar9) - uVar6;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + (int)uVar9,(longlong)iVar5 * 0x78);
    }
    iVar5 = (int)local_b0 - uVar9;
    local_b0 = CONCAT44(local_b0._4_4_,iVar5);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,&local_b8,iVar5,(int *)((longlong)&local_b0 + 4));
  }
  uVar8 = local_b0 & 0xffffffff;
LAB_141b5ed55:
  uVar10 = uVar12;
  uVar13 = uVar12;
  if (0 < (int)uVar8) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (int)uVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FAsyncTaskBase *)(local_b8.Data + uVar13);
      FAsyncTaskBase::CheckIdle(this_00);
      this_00[1]._padding_ = (longlong)&local_a8;
      uVar8 = local_b0 & 0xffffffff;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 0x78;
    } while ((int)(uVar9 + 1) < (int)local_b0);
  }
  FAsyncTaskBase::Start(&local_a8,false,pFVar3,Normal,None,-1,(wchar_t *)0x0);
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  uVar8 = uVar12;
  if (0 < (int)local_b0) {
    do {
      uVar9 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar9 < (int)local_b0) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FAsyncTaskBase::Start
                ((FAsyncTaskBase *)(local_b8.Data + (longlong)(int)uVar9 * 0x78),false,pFVar3,
                 Highest,DoNotRunInsideBusyWait,-1,(wchar_t *)0x0);
      uVar8 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (int)local_b0);
  }
  iVar5 = (int)local_b0;
  if (0 < (int)local_b0) {
    do {
      uVar9 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar9 < iVar5) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FAsyncTaskBase::EnsureCompletion
                ((FAsyncTaskBase *)(local_b8.Data + (longlong)(int)uVar9 * 0x78),false,false);
      uVar12 = (ulonglong)(uVar9 + 1);
      iVar5 = (int)local_b0;
    } while ((int)(uVar9 + 1) < (int)local_b0);
  }
  FAsyncTaskBase::EnsureCompletion(&local_a8,false,false);
  DestructItems<FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>,int>
            ((FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>
              *)local_b8.Data,(int)local_b0);
  if ((FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_> *
      )local_b8.Data !=
      (FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_> *
      )0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_a8._padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  if ((local_a8.WorkNotFinishedCounter.Counter != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_a8.QueuedPool != (FQueuedThreadPool *)0x0) &&
      (::FDebug::DumpStackTraceToLog(Warning), local_a8.QueuedPool != (FQueuedThreadPool *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(local_a8.DoneEvent);
  local_a8.DoneEvent = (FEvent *)0x0;
  local_a8._padding_ = (longlong)&___7IQueuedWork__6B_;
  if ((undefined8 *)local_a8._padding_ != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a8._padding_ + 8);
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar1 != (int *)0x0)) {
      (*(code *)**(undefined8 **)local_a8._padding_)(local_a8._padding_,1);
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

