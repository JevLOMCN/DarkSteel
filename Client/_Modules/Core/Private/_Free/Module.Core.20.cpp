// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 487

// Constructed'' @ 140f1bc80

void __cdecl
`dynamic_initializer_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::Constructed__(void)

{
  atexit(`dynamic_atexit_destructor_for_'`anonymous_namespace'::
         TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::
         Constructed__);
  return;
}

// Constructed'' @ 140f1bca0

void __cdecl
`dynamic_initializer_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::Constructed__(void)

{
  atexit(`dynamic_atexit_destructor_for_'`anonymous_namespace'::
         TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::
         Constructed__);
  return;
}

// Destructed'' @ 140f1bcc0

void __cdecl
`dynamic_initializer_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::Destructed__(void)

{
  atexit(`dynamic_atexit_destructor_for_'`anonymous_namespace'::
         TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::Destructed__
        );
  return;
}

// Destructed'' @ 140f1bce0

void __cdecl
`dynamic_initializer_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::Destructed__(void)

{
  atexit(`dynamic_atexit_destructor_for_'`anonymous_namespace'::
         TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::
         Destructed__);
  return;
}

// `dynamic_initializer_for_'FAsymmetricThreadFenceInstance'' @ 140f1bd00

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FAsymmetricThreadFenceInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAsymmetricThreadFence");
  FAsymmetricThreadFence::FAsymmetricThreadFence(&FAsymmetricThreadFenceInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAsymmetricThreadFenceInstance__);
  return;
}

// `dynamic_initializer_for_'FNoDestroyTestInstance'' @ 140f1bd50

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FNoDestroyTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FNoDestroyTest");
  FNoDestroyTest::FNoDestroyTest(&FNoDestroyTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FNoDestroyTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRelocateConstructItemsTestInstance'' @ 140f1bda0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FRelocateConstructItemsTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRelocateConstructItemsTest");
  FRelocateConstructItemsTest::FRelocateConstructItemsTest
            (&FRelocateConstructItemsTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRelocateConstructItemsTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringRemoveFromTestInstance'' @ 140f1bdf0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStringRemoveFromTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringRemoveFromTest");
  FStringRemoveFromTest::FStringRemoveFromTest(&FStringRemoveFromTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringRemoveFromTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringSplitTestInstance'' @ 140f1be40

void __cdecl
UE::String::`anonymous_namespace'::_dynamic_initializer_for__FStringSplitTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringSplitTest");
  FStringSplitTest::FStringSplitTest(&FStringSplitTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringSplitTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTaskGraphBackgroundWithNormalAsPrereqInstance'' @ 140f1be90

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTaskGraphBackgroundWithNormalAsPrereqInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTaskGraphBackgroundWithNormalAsPrereq");
  FTaskGraphBackgroundWithNormalAsPrereq::FTaskGraphBackgroundWithNormalAsPrereq
            (&FTaskGraphBackgroundWithNormalAsPrereqInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTaskGraphBackgroundWithNormalAsPrereqInstance__);
  return;
}

// `dynamic_initializer_for_'FTaskGraphLaunchFromThreadDuringRestartWorkersInstance'' @ 140f1bee0

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTaskGraphLaunchFromThreadDuringRestartWorkersInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTaskGraphLaunchFromThreadDuringRestartWorkers");
  FTaskGraphLaunchFromThreadDuringRestartWorkers::FTaskGraphLaunchFromThreadDuringRestartWorkers
            (&FTaskGraphLaunchFromThreadDuringRestartWorkersInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTaskGraphLaunchFromThreadDuringRestartWorkersInstance__);
  return;
}

// `dynamic_initializer_for_'FTaskGraphOversubscribeDuringRestartWorkersInstance'' @ 140f1bf30

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTaskGraphOversubscribeDuringRestartWorkersInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTaskGraphOversubscribeDuringRestartWorkers");
  FTaskGraphOversubscribeDuringRestartWorkers::FTaskGraphOversubscribeDuringRestartWorkers
            (&FTaskGraphOversubscribeDuringRestartWorkersInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTaskGraphOversubscribeDuringRestartWorkersInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksAnyInstance'' @ 140f1bf80

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksAnyInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksAny");
  FTasksAny::FTasksAny(&FTasksAnyInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksAnyInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksBasicStressTestInstance'' @ 140f1bfd0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksBasicStressTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksBasicStressTest");
  FTasksBasicStressTest::FTasksBasicStressTest(&FTasksBasicStressTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksBasicStressTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksBasicTestInstance'' @ 140f1c020

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksBasicTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksBasicTest");
  FTasksBasicTest::FTasksBasicTest(&FTasksBasicTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksBasicTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksBenchmarkBlockUnblockWorkersInstance'' @ 140f1c070

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksBenchmarkBlockUnblockWorkersInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksBenchmarkBlockUnblockWorkers");
  FTasksBenchmarkBlockUnblockWorkers::FTasksBenchmarkBlockUnblockWorkers
            (&FTasksBenchmarkBlockUnblockWorkersInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksBenchmarkBlockUnblockWorkersInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksCancellationInstance'' @ 140f1c0c0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksCancellationInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksCancellation");
  FTasksCancellation::FTasksCancellation(&FTasksCancellationInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksCancellationInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksConcurrencyLimiterTestInstance'' @ 140f1c110

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksConcurrencyLimiterTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksConcurrencyLimiterTest");
  FTasksConcurrencyLimiterTest::FTasksConcurrencyLimiterTest
            (&FTasksConcurrencyLimiterTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksConcurrencyLimiterTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksConcurrencyLimiterWaitingTestInstance'' @ 140f1c160

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksConcurrencyLimiterWaitingTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksConcurrencyLimiterWaitingTest");
  FTasksConcurrencyLimiterWaitingTest::FTasksConcurrencyLimiterWaitingTest
            (&FTasksConcurrencyLimiterWaitingTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksConcurrencyLimiterWaitingTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksDeepRetractionStressTestInstance'' @ 140f1c1b0

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksDeepRetractionStressTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksDeepRetractionStressTest");
  FTasksDeepRetractionStressTest::FTasksDeepRetractionStressTest
            (&FTasksDeepRetractionStressTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksDeepRetractionStressTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksDeepRetractionTestInstance'' @ 140f1c200

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksDeepRetractionTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksDeepRetractionTest");
  FTasksDeepRetractionTest::FTasksDeepRetractionTest(&FTasksDeepRetractionTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksDeepRetractionTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksDependenciesTestInstance'' @ 140f1c250

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksDependenciesTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksDependenciesTest");
  FTasksDependenciesTest::FTasksDependenciesTest(&FTasksDependenciesTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksDependenciesTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksEventTestInstance'' @ 140f1c2a0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksEventTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksEventTest");
  FTasksEventTest::FTasksEventTest(&FTasksEventTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksEventTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksLoneStandbyWorkerInstance'' @ 140f1c2f0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksLoneStandbyWorkerInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksLoneStandbyWorker");
  FTasksLoneStandbyWorker::FTasksLoneStandbyWorker(&FTasksLoneStandbyWorkerInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksLoneStandbyWorkerInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksMakeCompletedTaskInstance'' @ 140f1c340

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksMakeCompletedTaskInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksMakeCompletedTask");
  FTasksMakeCompletedTask::FTasksMakeCompletedTask(&FTasksMakeCompletedTaskInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksMakeCompletedTaskInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksNestedTasksStressTestInstance'' @ 140f1c390

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksNestedTasksStressTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksNestedTasksStressTest");
  FTasksNestedTasksStressTest::FTasksNestedTasksStressTest
            (&FTasksNestedTasksStressTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksNestedTasksStressTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksPerfTestInstance'' @ 140f1c3e0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksPerfTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksPerfTest");
  FTasksPerfTest::FTasksPerfTest(&FTasksPerfTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksPerfTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksPipeNoThreadingTestInstance'' @ 140f1c430

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksPipeNoThreadingTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksPipeNoThreadingTest");
  FTasksPipeNoThreadingTest::FTasksPipeNoThreadingTest(&FTasksPipeNoThreadingTestInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksPipeNoThreadingTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksPipeTestInstance'' @ 140f1c480

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksPipeTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksPipeTest");
  FTasksPipeTest::FTasksPipeTest(&FTasksPipeTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksPipeTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksPipeWaitUntilEmptyTestInstance'' @ 140f1c4d0

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksPipeWaitUntilEmptyTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksPipeWaitUntilEmptyTest");
  FTasksPipeWaitUntilEmptyTest::FTasksPipeWaitUntilEmptyTest
            (&FTasksPipeWaitUntilEmptyTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksPipeWaitUntilEmptyTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksPriorityCVarTestInstance'' @ 140f1c520

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksPriorityCVarTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksPriorityCVarTest");
  FTasksPriorityCVarTest::FTasksPriorityCVarTest(&FTasksPriorityCVarTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksPriorityCVarTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksWaitAnyInstance'' @ 140f1c570

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTasksWaitAnyInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksWaitAny");
  FTasksWaitAny::FTasksWaitAny(&FTasksWaitAnyInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksWaitAnyInstance__);
  return;
}

// `dynamic_initializer_for_'FTemplatesSortingTestInstance'' @ 140f1c5c0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTemplatesSortingTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTemplatesSortingTest");
  FTemplatesSortingTest::FTemplatesSortingTest(&FTemplatesSortingTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTemplatesSortingTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTemplatesValueOrErrorTestInstance'' @ 140f1c610

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTemplatesValueOrErrorTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTemplatesValueOrErrorTest");
  FTemplatesValueOrErrorTest::FTemplatesValueOrErrorTest
            (&FTemplatesValueOrErrorTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTemplatesValueOrErrorTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTlsTestInstance'' @ 140f1c660

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_initializer_for__FTlsTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTlsTest");
  FTlsTest::FTlsTest(&FTlsTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTlsTestInstance__);
  return;
}

// `dynamic_initializer_for_'NoDestroyTestGlobal'' @ 140f1c6b0

void __cdecl _dynamic_initializer_for__NoDestroyTestGlobal__(void)

{
  atexit(_dynamic_atexit_destructor_for__NoDestroyTestGlobal__);
  return;
}

// `scalar_deleting_destructor' @ 141d57310

void * __thiscall
UE::TasksTests::FTasksConcurrencyLimiterTest::_scalar_deleting_destructor_
          (FTasksConcurrencyLimiterTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d57750

void * __thiscall
UE::TasksTests::FTasksConcurrencyLimiterWaitingTest::_scalar_deleting_destructor_
          (FTasksConcurrencyLimiterWaitingTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d57ae0

void * __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::_scalar_deleting_destructor_
          (FTasksBenchmarkBlockUnblockWorkers *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d57da0

void * __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::_scalar_deleting_destructor_
          (FTasksLoneStandbyWorker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d582d0

void * __thiscall
UE::TasksTests::FTasksEventTest::_scalar_deleting_destructor_(FTasksEventTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d58560

void * __thiscall
UE::TasksTests::FTasksBasicTest::_scalar_deleting_destructor_(FTasksBasicTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d585e0

void * __thiscall
UE::TasksTests::FTaskGraphOversubscribeDuringRestartWorkers::_scalar_deleting_destructor_
          (FTaskGraphOversubscribeDuringRestartWorkers *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d589e0

void * __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::_scalar_deleting_destructor_
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d58ca0

void * __thiscall
UE::TasksTests::FTasksDependenciesTest::_scalar_deleting_destructor_
          (FTasksDependenciesTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d591d0

void * __thiscall
FStringRemoveFromTest::_scalar_deleting_destructor_(FStringRemoveFromTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d59220

void * __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::_scalar_deleting_destructor_
          (FTaskGraphBackgroundWithNormalAsPrereq *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d594e0

void * __thiscall
UE::TasksTests::FAsymmetricThreadFence::_scalar_deleting_destructor_
          (FAsymmetricThreadFence *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d597a0

void * __thiscall
FRelocateConstructItemsTest::_scalar_deleting_destructor_
          (FRelocateConstructItemsTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d59a60

void * __thiscall
UE::String::FStringSplitTest::_scalar_deleting_destructor_(FStringSplitTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d59eb0

void * __thiscall FNoDestroyTest::_scalar_deleting_destructor_(FNoDestroyTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5a170

void * __thiscall
FTemplatesSortingTest::_scalar_deleting_destructor_(FTemplatesSortingTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5a430

void * __thiscall
FTemplatesValueOrErrorTest::_scalar_deleting_destructor_
          (FTemplatesValueOrErrorTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5a6f0

void * __thiscall
UE::TasksTests::FTasksDeepRetractionTest::_scalar_deleting_destructor_
          (FTasksDeepRetractionTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5ab30

void * __thiscall
UE::TasksTests::FTasksDeepRetractionStressTest::_scalar_deleting_destructor_
          (FTasksDeepRetractionStressTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5af70

void * __thiscall
UE::TasksTests::FTasksNestedTasksStressTest::_scalar_deleting_destructor_
          (FTasksNestedTasksStressTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5b230

void * __thiscall
UE::TasksTests::FTasksPerfTest::_scalar_deleting_destructor_(FTasksPerfTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5b670

void * __thiscall
UE::TasksTests::FTasksBasicStressTest::_scalar_deleting_destructor_
          (FTasksBasicStressTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5bba0

void * __thiscall
UE::TasksTests::FTasksPipeTest::_scalar_deleting_destructor_(FTasksPipeTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5bbf0

void * __thiscall
UE::TasksTests::FTasksPriorityCVarTest::_scalar_deleting_destructor_
          (FTasksPriorityCVarTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5beb0

void * __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::_scalar_deleting_destructor_
          (FTasksPipeNoThreadingTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5c170

void * __thiscall
UE::TasksTests::FTasksMakeCompletedTask::_scalar_deleting_destructor_
          (FTasksMakeCompletedTask *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5c430

void * __thiscall
UE::TasksTests::FTasksCancellation::_scalar_deleting_destructor_
          (FTasksCancellation *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5c6f0

void * __thiscall
UE::TasksTests::FTasksWaitAny::_scalar_deleting_destructor_(FTasksWaitAny *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5c9b0

void * __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::_scalar_deleting_destructor_
          (FTasksPipeWaitUntilEmptyTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5cc70

void * __thiscall
UE::TasksTests::FTasksAny::_scalar_deleting_destructor_(FTasksAny *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d5cf30

void * __thiscall
UE::TasksTests::FTlsTest::_scalar_deleting_destructor_(FTlsTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// operator()<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>_> @ 141d5d830

void __thiscall
`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>::
operator()<_UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody_::__l85::<lambda_4>_>
          (void *this,<lambda_4> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FPipe *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *this_00;
  FTask *pFVar7;
  undefined8 uVar8;
  
  if (**(char **)((longlong)this + 8) == '\0') {
    pFVar4 = *(FPipe **)this;
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<``UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`85'::<lambda_4>::operator()<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`85'::<lambda_4>_>'::`5'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
      *(FTaskBase **)&this_00->LowLevelTask = this_00;
      *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
      pFVar7 = LowLevelTasks::FTask::GetActiveTask();
      uVar8 = 0;
      if (pFVar7 != (FTask *)0x0) {
        uVar8 = *(undefined8 *)&pFVar7->field_0x30;
      }
      *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar8;
      *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e84b800;
      this_00->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_00->_padding_);
      this_00[1]._padding_ = (longlong)param_1;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<``UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`85'::<lambda_4>::operator()<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`85'::<lambda_4>_>'::`5'::<lambda_1>_>
            ::_vftable_;
    }
    LOCK();
    paVar1 = &pFVar4->TaskCount;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    LOCK();
    this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
    UNLOCK();
    this_00->Pipe = pFVar4;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_> @ 141d5ef50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1d8 [32];
  TPromise<void> local_198;
  undefined4 local_180;
  TFutureState<void> *local_178;
  FRunnableThread *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FConstructor local_130;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  undefined1 local_f8 [16];
  undefined **local_e8;
  undefined8 uStack_e0;
  atomic<bool> *paStack_d8;
  undefined ***local_d0;
  TFutureState<void> *local_c8;
  undefined **local_b8;
  FManualResetEvent *pFStack_b0;
  atomic<bool> *local_a8;
  undefined ***local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_180 = 0;
  uStack_e0 = param_2->Done;
  paStack_d8 = param_2->bExit;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_d0 = (undefined ***)0x0;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>,void>
       ::Call;
  TPromise<void>::TPromise<void>(&local_198,param_3);
  if ((local_198.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_198.bFutureRetrieved = true;
  if ((local_198.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_198.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_198.State.Object;
  if (local_198.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_130.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_180 = 1;
    if (param_1 == TaskGraph) {
      local_180 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_130,(TUniqueFunction<void___cdecl(void)> *)&local_178,
               (TPromise<void> *)local_f8,(Type *)&local_198);
    if (local_178 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_178->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_178)(local_178,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (TFutureState<void> *)local_f8._0_8_;
    local_a0 = local_d0;
    local_98 = local_198.State.Object;
    local_90 = local_198.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8;
    pFStack_b0 = uStack_e0;
    local_a8 = paStack_d8;
    local_f8._0_8_ = (TFutureState<void> *)0x0;
    local_198.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_198.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_198.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_c8;
    local_50[7] = (code *)local_a0;
    local_a0 = (undefined ***)0x0;
    local_50[4] = (code *)local_b8;
    local_50[5] = (code *)pFStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_c8 = (TFutureState<void> *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if (local_c8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar17 = local_a0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FManualResetEvent **)&pTVar12->field_0x28 = uStack_e0;
        *(atomic<bool> **)&pTVar12->field_0x30 = paStack_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_170 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_170);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FManualResetEvent **)&pTVar12->field_0x28 = uStack_e0;
        *(atomic<bool> **)&pTVar12->field_0x30 = paStack_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar19.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_f8._0_8_;
        puVar14[7] = local_d0;
        *(undefined4 *)(puVar14 + 4) = local_e8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_e0._4_4_;
        puVar14[6] = paStack_d8;
        if (puVar14[2] != 0) {
          local_f8._0_8_ = pTVar20;
        }
        puVar14[8] = local_198.State.Object;
        puVar14[9] = local_198.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_198.bFutureRetrieved;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_198.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_f8._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar17 = local_d0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Benchmark<5,`UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::TestBody'::__l4::<lambda_1>_> @ 141d5ffc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Benchmark<5,_UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::TestBody_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  FTaskEvent local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_80 [5];
  
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar8 = 0;
  dVar6 = __real_7fefffffffffffff;
  do {
    QueryPerformanceCounter(&local_res20);
    uVar4 = *param_2->Index;
    dVar5 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1676,"BenchmarkBlockUnblockWorkers",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                 ,0x68c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1676);
    }
    lVar7 = 1000;
    do {
      local_res18 = (FTaskEvent)
                    UE::Tasks::Private::FTaskEventBase::Create
                              (
                              L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1680)"
                              );
      UE::TasksTests::BlockWorkers(local_80,&local_res18,uVar4);
      if ((local_res18 != (FTaskEvent)0x0) &&
         (*(atomic<bool> *)((longlong)local_res18 + 0xd0) == (atomic<bool>)0x0)) {
        LOCK();
        aVar2 = *(atomic<bool> *)((longlong)local_res18 + 0x45);
        *(atomic<bool> *)((longlong)local_res18 + 0x45) = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar2 == (atomic<bool>)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)local_res18 + 0x30) =
               (atomic<unsigned_int>)
               ((int)*(atomic<unsigned_int> *)((longlong)local_res18 + 0x30) + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)local_res18,0xd8);
        }
      }
      UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                (local_80,(FTimespan)0x7fffffffffffffff);
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)local_80[0].AllocatorInstance.Data,local_80[0].ArrayNum);
      if (local_80[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80[0].AllocatorInstance.Data);
      }
      if (local_res18 != (FTaskEvent)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned_int> *)((longlong)local_res18 + 0x30);
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)local_res18)(local_res18,1);
        }
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    QueryPerformanceCounter(&local_88);
    dVar5 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    iVar8 = iVar8 + 1;
    if (dVar6 <= dVar5) {
      dVar5 = dVar6;
    }
    dVar6 = dVar5;
  } while (iVar8 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  return;
}

// CompareItems<`FTemplatesSortingTest::TestBody'::__l2::FRadixSort64Test,int> @ 141d60240

bool __cdecl
CompareItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
          (FRadixSort64Test *param_1,FRadixSort64Test *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    pFVar4 = &param_2->Value;
    pFVar3 = &param_1->Value;
    do {
      if (*(longlong *)((longlong)(pFVar3 + -1) + 8) !=
          *(longlong *)((longlong)pFVar3 + (longlong)param_2 + (-8 - (longlong)param_1))) {
        return false;
      }
      iVar2 = (pFVar3->Data).ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar2 == iVar1) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar5 = iVar2 == 0;
          goto LAB_141d6029e;
        }
      }
      else {
        bVar5 = iVar2 + iVar1 == 1;
LAB_141d6029e:
        if (!bVar5) {
          return false;
        }
      }
      pFVar4 = (FString *)((longlong)(pFVar4 + 1) + 8);
      pFVar3 = (FString *)((longlong)(pFVar3 + 1) + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<`FTemplatesSortingTest::TestBody'::__l2::FRadixSort64Test,`FTemplatesSortingTest::TestBody'::__l2::FRadixSort64Test,int> @ 141d602e0

void __cdecl
ConstructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
          (void *param_1,FRadixSort64Test *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(ulong64 *)(lVar1 + (longlong)param_2) = param_2->Key;
      FString::FString((FString *)(lVar1 + 8 + (longlong)param_2),&param_2->Value);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<`FTemplatesSortingTest::TestBody'::__l2::FRadixSort64Test,int> @ 141d60370

void __cdecl
DefaultConstructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Tasks::Private::FTaskHandle,int> @ 141d603a0

void __cdecl DefaultConstructItems<UE::Tasks::Private::FTaskHandle,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<`FTemplatesSortingTest::TestBody'::__l2::FRadixSort64Test,int> @ 141d60800

void __cdecl
DestructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
          (FRadixSort64Test *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Value;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Tasks::TTask<UE::Tasks::FTaskEvent>,int> @ 141d60840

void __cdecl
DestructItems<UE::Tasks::TTask<UE::Tasks::FTaskEvent>,int>
          (TTask<UE::Tasks::FTaskEvent> *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  TTask<UE::Tasks::FTaskEvent> TVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TVar3 = *param_1;
    if (TVar3 != (TTask<UE::Tasks::FTaskEvent>)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)TVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Emplace<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*> @ 141d60890

FSetElementId __thiscall
TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>
          (void *this,FStringDest **param_1,bool *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(this,&local_38);
  if (local_38.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_38.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar2 = *(ulonglong *)local_38.Pointer;
  bVar7 = false;
  iVar6 = 1;
  uVar1 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)this + (longlong)iVar5 * 0x10) == uVar2) {
          bVar7 = iVar5 != -1;
          if (bVar7) {
            *(ulonglong *)(*(longlong *)this + (longlong)iVar5 * 0x10) = uVar2;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)this + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    uVar3 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)((longlong)this + 0x48))) {
      uVar1 = *(int *)((longlong)this + 0x48) - 1U & uVar1;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar1;
      lVar4 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar4 = (longlong)this + 0x38;
      }
      uVar2 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar1;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(lVar4 + uVar2 * 4);
      *(int *)(lVar4 + uVar2 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar6;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*> @ 141d60a40

FSetElementId __thiscall
TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>
          (void *this,FStringSource **param_1,bool *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(this,&local_38);
  if (local_38.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_38.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar2 = *(ulonglong *)local_38.Pointer;
  bVar7 = false;
  iVar6 = 1;
  uVar1 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)this + (longlong)iVar5 * 0x10) == uVar2) {
          bVar7 = iVar5 != -1;
          if (bVar7) {
            *(ulonglong *)(*(longlong *)this + (longlong)iVar5 * 0x10) = uVar2;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)this + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    uVar3 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)((longlong)this + 0x48))) {
      uVar1 = *(int *)((longlong)this + 0x48) - 1U & uVar1;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar1;
      lVar4 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar4 = (longlong)this + 0x38;
      }
      uVar2 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar1;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(lVar4 + uVar2 * 4);
      *(int *)(lVar4 + uVar2 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar6;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::CheckCurrentlyInstantiated'::__l2::<lambda_1>_>_>_> @ 141d60bf0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>)_::_2_::<lambda_1>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_141d60ce3:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            iVar10 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar12->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if ((ulonglong)param_1[(longlong)iVar11 + 2]._s_1 < (ulonglong)param_1[iVar6]._s_1
                     ) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if ((ulonglong)param_1[iVar6]._s_1 <= (ulonglong)param_1[iVar10]._s_1) break;
                uVar2 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                TVar3 = param_1[iVar10]._s_1;
                uVar4 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
                param_1[iVar10]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar2;
                param_1[iVar6]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if ((ulonglong)param_1[(longlong)iVar7 + 2]._s_1 < (ulonglong)param_1[iVar8]._s_1) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if ((ulonglong)param_1[iVar8]._s_1 <= (ulonglong)param_1[iVar6]._s_1) goto LAB_141d60ce3;
    uVar2 = *(undefined8 *)(param_1[iVar8].ElementData.Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    TVar3 = param_1[iVar6]._s_1;
    uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar8]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar2;
    param_1[iVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[iVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::CheckCurrentlyInstantiated'::__l2::<lambda_1>_>_>_> @ 141d60dc0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>)_::_2_::<lambda_1>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_141d60eb3:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            iVar10 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar12->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if ((ulonglong)param_1[(longlong)iVar11 + 2]._s_1 < (ulonglong)param_1[iVar6]._s_1
                     ) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if ((ulonglong)param_1[iVar6]._s_1 <= (ulonglong)param_1[iVar10]._s_1) break;
                uVar2 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                TVar3 = param_1[iVar10]._s_1;
                uVar4 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
                param_1[iVar10]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar2;
                param_1[iVar6]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if ((ulonglong)param_1[(longlong)iVar7 + 2]._s_1 < (ulonglong)param_1[iVar8]._s_1) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if ((ulonglong)param_1[iVar8]._s_1 <= (ulonglong)param_1[iVar6]._s_1) goto LAB_141d60eb3;
    uVar2 = *(undefined8 *)(param_1[iVar8].ElementData.Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    TVar3 = param_1[iVar6]._s_1;
    uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar8]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar2;
    param_1[iVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[iVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::CheckCurrentlyInstantiated'::__l2::<lambda_2>_>_>_> @ 141d60f90

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>)_::_2_::<lambda_2>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_141d61083:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            iVar10 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar12->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if ((ulonglong)param_1[(longlong)iVar11 + 2]._s_1 < (ulonglong)param_1[iVar6]._s_1
                     ) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if ((ulonglong)param_1[iVar6]._s_1 <= (ulonglong)param_1[iVar10]._s_1) break;
                uVar2 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                TVar3 = param_1[iVar10]._s_1;
                uVar4 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
                param_1[iVar10]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar2;
                param_1[iVar6]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if ((ulonglong)param_1[(longlong)iVar7 + 2]._s_1 < (ulonglong)param_1[iVar8]._s_1) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if ((ulonglong)param_1[iVar8]._s_1 <= (ulonglong)param_1[iVar6]._s_1) goto LAB_141d61083;
    uVar2 = *(undefined8 *)(param_1[iVar8].ElementData.Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    TVar3 = param_1[iVar6]._s_1;
    uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar8]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar2;
    param_1[iVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[iVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::CheckCurrentlyInstantiated'::__l2::<lambda_2>_>_>_> @ 141d61160

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>)_::_2_::<lambda_2>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_141d61253:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            iVar10 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar12->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if ((ulonglong)param_1[(longlong)iVar11 + 2]._s_1 < (ulonglong)param_1[iVar6]._s_1
                     ) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if ((ulonglong)param_1[iVar6]._s_1 <= (ulonglong)param_1[iVar10]._s_1) break;
                uVar2 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                TVar3 = param_1[iVar10]._s_1;
                uVar4 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
                param_1[iVar10]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar2;
                param_1[iVar6]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if ((ulonglong)param_1[(longlong)iVar7 + 2]._s_1 < (ulonglong)param_1[iVar8]._s_1) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if ((ulonglong)param_1[iVar8]._s_1 <= (ulonglong)param_1[iVar6]._s_1) goto LAB_141d61253;
    uVar2 = *(undefined8 *)(param_1[iVar8].ElementData.Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    TVar3 = param_1[iVar6]._s_1;
    uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar8]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar2;
    param_1[iVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[iVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::CheckCurrentlyInstantiated'::__l2::<lambda_1>_>_>_> @ 141d61330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>)_::_2_::<lambda_1>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar1;
  ulonglong uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  ulonglong uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar12 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_141d613e0:
        if (8 < iVar7) {
          uVar2 = *(ulonglong *)((pTVar13->ElementData).Pad + 8);
          pTVar10 = pTVar12 + 1;
          TVar3 = pTVar13[iVar7 / 2]._s_1;
          uVar4 = *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8);
          pTVar13[iVar7 / 2]._s_1 = pTVar13->_s_1;
          *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(ulonglong *)((pTVar13->ElementData).Pad + 8) = uVar4;
          pTVar14 = pTVar13;
LAB_141d61410:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar12) goto code_r0x000141d61419;
          goto LAB_141d61421;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if ((ulonglong)pTVar14->_s_1 < (ulonglong)pTVar1->_s_1) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar4 = *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar4;
          pTVar12->_s_1 = TVar3;
          *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_141d614e0;
      }
LAB_141d614cf:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_141d614e0:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x000141d61419:
  if ((ulonglong)pTVar14->_s_1 <= (ulonglong)pTVar13->_s_1) goto LAB_141d61410;
LAB_141d61421:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar13) break;
  } while ((ulonglong)pTVar13->_s_1 <= (ulonglong)pTVar10->_s_1);
  TVar3 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8);
  if (pTVar14 <= pTVar10) {
    TVar5 = pTVar14->_s_1;
    TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
             ((longlong)pTVar8 + 0x18);
    pTVar14->_s_1 = pTVar10->_s_1;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar8 + 0x18) =
         TVar3;
    pTVar10->_s_1 = TVar5;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6
    ;
    goto LAB_141d61410;
  }
  TVar5 = pTVar13->_s_1;
  TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
           ((pTVar13->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar13->_s_1 = pTVar10->_s_1;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((pTVar13->ElementData).Pad + 8) =
       TVar3;
  pTVar10->_s_1 = TVar5;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6;
  if ((longlong)((longlong)pTVar10 + (-0x10 - (longlong)pTVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xfffffffffffffff0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar12;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_141d614e0;
    pTVar12 = pTVar11 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar11 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_141d614e0;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_141d614cf;
  goto LAB_141d613e0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::CheckCurrentlyInstantiated'::__l2::<lambda_1>_>_>_> @ 141d61570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>)_::_2_::<lambda_1>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar1;
  ulonglong uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  ulonglong uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar12 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_141d61620:
        if (8 < iVar7) {
          uVar2 = *(ulonglong *)((pTVar13->ElementData).Pad + 8);
          pTVar10 = pTVar12 + 1;
          TVar3 = pTVar13[iVar7 / 2]._s_1;
          uVar4 = *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8);
          pTVar13[iVar7 / 2]._s_1 = pTVar13->_s_1;
          *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(ulonglong *)((pTVar13->ElementData).Pad + 8) = uVar4;
          pTVar14 = pTVar13;
LAB_141d61650:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar12) goto code_r0x000141d61659;
          goto LAB_141d61661;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if ((ulonglong)pTVar14->_s_1 < (ulonglong)pTVar1->_s_1) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar4 = *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar4;
          pTVar12->_s_1 = TVar3;
          *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_141d61720;
      }
LAB_141d6170f:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_141d61720:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x000141d61659:
  if ((ulonglong)pTVar14->_s_1 <= (ulonglong)pTVar13->_s_1) goto LAB_141d61650;
LAB_141d61661:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar13) break;
  } while ((ulonglong)pTVar13->_s_1 <= (ulonglong)pTVar10->_s_1);
  TVar3 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8);
  if (pTVar14 <= pTVar10) {
    TVar5 = pTVar14->_s_1;
    TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
             ((longlong)pTVar8 + 0x18);
    pTVar14->_s_1 = pTVar10->_s_1;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar8 + 0x18) =
         TVar3;
    pTVar10->_s_1 = TVar5;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6
    ;
    goto LAB_141d61650;
  }
  TVar5 = pTVar13->_s_1;
  TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
           ((pTVar13->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar13->_s_1 = pTVar10->_s_1;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((pTVar13->ElementData).Pad + 8) =
       TVar3;
  pTVar10->_s_1 = TVar5;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6;
  if ((longlong)((longlong)pTVar10 + (-0x10 - (longlong)pTVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xfffffffffffffff0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar12;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_141d61720;
    pTVar12 = pTVar11 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar11 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_141d61720;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_141d6170f;
  goto LAB_141d61620;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::CheckCurrentlyInstantiated'::__l2::<lambda_2>_>_>_> @ 141d617b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>)_::_2_::<lambda_2>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar1;
  ulonglong uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  ulonglong uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar12 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_141d61860:
        if (8 < iVar7) {
          uVar2 = *(ulonglong *)((pTVar13->ElementData).Pad + 8);
          pTVar10 = pTVar12 + 1;
          TVar3 = pTVar13[iVar7 / 2]._s_1;
          uVar4 = *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8);
          pTVar13[iVar7 / 2]._s_1 = pTVar13->_s_1;
          *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(ulonglong *)((pTVar13->ElementData).Pad + 8) = uVar4;
          pTVar14 = pTVar13;
LAB_141d61890:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar12) goto code_r0x000141d61899;
          goto LAB_141d618a1;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if ((ulonglong)pTVar14->_s_1 < (ulonglong)pTVar1->_s_1) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar4 = *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar4;
          pTVar12->_s_1 = TVar3;
          *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_141d61960;
      }
LAB_141d6194f:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_141d61960:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x000141d61899:
  if ((ulonglong)pTVar14->_s_1 <= (ulonglong)pTVar13->_s_1) goto LAB_141d61890;
LAB_141d618a1:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar13) break;
  } while ((ulonglong)pTVar13->_s_1 <= (ulonglong)pTVar10->_s_1);
  TVar3 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8);
  if (pTVar14 <= pTVar10) {
    TVar5 = pTVar14->_s_1;
    TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
             ((longlong)pTVar8 + 0x18);
    pTVar14->_s_1 = pTVar10->_s_1;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar8 + 0x18) =
         TVar3;
    pTVar10->_s_1 = TVar5;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6
    ;
    goto LAB_141d61890;
  }
  TVar5 = pTVar13->_s_1;
  TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
           ((pTVar13->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar13->_s_1 = pTVar10->_s_1;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((pTVar13->ElementData).Pad + 8) =
       TVar3;
  pTVar10->_s_1 = TVar5;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6;
  if ((longlong)((longlong)pTVar10 + (-0x10 - (longlong)pTVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xfffffffffffffff0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar12;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_141d61960;
    pTVar12 = pTVar11 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar11 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_141d61960;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_141d6194f;
  goto LAB_141d61860;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<``anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::CheckCurrentlyInstantiated'::__l2::<lambda_2>_>_>_> @ 141d619f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,DefaultKeyFuncs<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>)_::_2_::<lambda_2>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar1;
  ulonglong uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  ulonglong uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar12 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_141d61aa0:
        if (8 < iVar7) {
          uVar2 = *(ulonglong *)((pTVar13->ElementData).Pad + 8);
          pTVar10 = pTVar12 + 1;
          TVar3 = pTVar13[iVar7 / 2]._s_1;
          uVar4 = *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8);
          pTVar13[iVar7 / 2]._s_1 = pTVar13->_s_1;
          *(ulonglong *)((longlong)pTVar13[iVar7 / 2].ElementData.Pad + 8) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(ulonglong *)((pTVar13->ElementData).Pad + 8) = uVar4;
          pTVar14 = pTVar13;
LAB_141d61ad0:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar12) goto code_r0x000141d61ad9;
          goto LAB_141d61ae1;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if ((ulonglong)pTVar14->_s_1 < (ulonglong)pTVar1->_s_1) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar4 = *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(ulonglong *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar4;
          pTVar12->_s_1 = TVar3;
          *(ulonglong *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_141d61ba0;
      }
LAB_141d61b8f:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_141d61ba0:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x000141d61ad9:
  if ((ulonglong)pTVar14->_s_1 <= (ulonglong)pTVar13->_s_1) goto LAB_141d61ad0;
LAB_141d61ae1:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar13) break;
  } while ((ulonglong)pTVar13->_s_1 <= (ulonglong)pTVar10->_s_1);
  TVar3 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8);
  if (pTVar14 <= pTVar10) {
    TVar5 = pTVar14->_s_1;
    TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
             ((longlong)pTVar8 + 0x18);
    pTVar14->_s_1 = pTVar10->_s_1;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar8 + 0x18) =
         TVar3;
    pTVar10->_s_1 = TVar5;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6
    ;
    goto LAB_141d61ad0;
  }
  TVar5 = pTVar13->_s_1;
  TVar6 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)
           ((pTVar13->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar13->_s_1 = pTVar10->_s_1;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((pTVar13->ElementData).Pad + 8) =
       TVar3;
  pTVar10->_s_1 = TVar5;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)((longlong)pTVar11 + -8) = TVar6;
  if ((longlong)((longlong)pTVar10 + (-0x10 - (longlong)pTVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xfffffffffffffff0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar12;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_141d61ba0;
    pTVar12 = pTVar11 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar11 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_141d61ba0;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 4) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_141d61b8f;
  goto LAB_141d61aa0;
}

// Launch<`UE::TasksTests::FTasksPipeTest::TestBody'::__l16::<lambda_11>,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>_> @ 141d61c50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __thiscall
UE::Tasks::FPipe::
Launch<_UE::TasksTests::FTasksPipeTest::TestBody_::__l16::<lambda_11>,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>_>
          (FPipe *this,wchar_t *param_1,<lambda_11> *param_2,
          TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  FTaskBase *pFVar1;
  FTaskBase *this_00;
  undefined7 in_stack_00000029;
  ETaskFlags in_stack_00000040;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`16'::<lambda_11>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000040);
    pFVar1 = param_3[1].Elements[0];
    this_00[1]._padding_ = (longlong)param_3->Elements[0];
    this_00[1]._padding_ = (longlong)pFVar1;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`16'::<lambda_11>_>::_vftable_
    ;
  }
  LOCK();
  this->TaskCount = (atomic<unsigned___int64>)((longlong)this->TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = this;
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (this_00,(TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> *)
                     CONCAT71(in_stack_00000029,param_4),true);
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  *(FTaskBase **)param_1 = this_00;
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_12>_> @ 141d61d30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l44::<lambda_12>_>
          (wchar_t *param_1,<lambda_12> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`44'::<lambda_12>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`44'::<lambda_12>_>::
          _vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l120::<lambda_12>_> @ 141d61e20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<_protected:_void___cdecl_UE::TasksTests::FTasksBasicTest::TestBody(FString_const_&)_::_119_::FMoveConstructable>
 __cdecl UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l120::<lambda_12>_>
                   (wchar_t *param_1,<lambda_12> *param_2,ETaskPriority param_3,
                   EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
          _vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`120'::<lambda_12>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<_protected:_void___cdecl_UE::TasksTests::FTasksBasicTest::TestBody(FString_const_&)_::_119_::FMoveConstructable>
          )param_1;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&> @ 141d61f00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l44::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&>
          (wchar_t *param_1,<lambda_13> *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`44'::<lambda_13>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`44'::<lambda_13>_>::
          _vftable_;
  }
  Private::FTaskBase::
  AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
            (this,(TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
                  CONCAT71(in_register_00000089,param_4),true);
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l121::<lambda_13>_> @ 141d61ff0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<_protected:_void___cdecl_UE::TasksTests::FTasksBasicTest::TestBody(FString_const_&)_::_119_::FMoveConstructable>
 __cdecl UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l121::<lambda_13>_>
                   (wchar_t *param_1,<lambda_13> *param_2,ETaskPriority param_3,
                   EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
          _vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`121'::<lambda_13>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<_protected:_void___cdecl_UE::TasksTests::FTasksBasicTest::TestBody(FString_const_&)_::_119_::FMoveConstructable>
          )param_1;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_14>,UE::Tasks::FTaskEvent_&> @ 141d620d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __thiscall
UE::Tasks::FPipe::
Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l59::<lambda_14>,UE::Tasks::FTaskEvent_&>
          (FPipe *this,wchar_t *param_1,<lambda_14> *param_2,FTaskEvent *param_3,
          ETaskPriority param_4,EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  FTaskBase *this_00;
  undefined7 in_stack_00000029;
  ETaskFlags in_stack_00000040;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`59'::<lambda_14>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000040);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`59'::<lambda_14>_>::
          _vftable_;
  }
  LOCK();
  this->TaskCount = (atomic<unsigned___int64>)((longlong)this->TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = this;
  if (*(FTaskBase **)CONCAT71(in_stack_00000029,param_4) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites
              (this_00,*(FTaskBase **)CONCAT71(in_stack_00000029,param_4));
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  *(FTaskBase **)param_1 = this_00;
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l124::<lambda_14>_> @ 141d621a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l124::<lambda_14>_>
          (wchar_t *param_1,<lambda_14> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`124'::<lambda_14>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`124'::<lambda_14>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_15>_> @ 141d62290

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __thiscall
UE::Tasks::FPipe::Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l59::<lambda_15>_>
          (FPipe *this,wchar_t *param_1,<lambda_15> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FTaskBase *this_00;
  ETaskFlags in_stack_00000038;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`59'::<lambda_15>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000038);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`59'::<lambda_15>_>::
          _vftable_;
  }
  LOCK();
  this->TaskCount = (atomic<unsigned___int64>)((longlong)this->TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = this;
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  *(FTaskBase **)param_1 = this_00;
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_15>_> @ 141d62350

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l127::<lambda_15>_>
          (wchar_t *param_1,<lambda_15> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`127'::<lambda_15>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`127'::<lambda_15>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_16>_> @ 141d62430

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l67::<lambda_16>_>
          (wchar_t *param_1,<lambda_16> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`67'::<lambda_16>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`67'::<lambda_16>_>::
          _vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_16>_> @ 141d62520

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<bool> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l127::<lambda_16>_>
          (wchar_t *param_1,<lambda_16> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ = (longlong)&___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`127'::<lambda_16>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<bool>)param_1;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_17>,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>_> @ 141d62600

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __thiscall
UE::Tasks::FPipe::
Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l67::<lambda_17>,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>_>
          (FPipe *this,wchar_t *param_1,<lambda_17> *param_2,
          TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  FTaskBase *this_00;
  undefined7 in_stack_00000029;
  ETaskFlags in_stack_00000040;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`67'::<lambda_17>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000040);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`67'::<lambda_17>_>::
          _vftable_;
  }
  LOCK();
  this->TaskCount = (atomic<unsigned___int64>)((longlong)this->TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = this;
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,0>
            (this_00,(TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *)
                     CONCAT71(in_stack_00000029,param_4),true);
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  *(FTaskBase **)param_1 = this_00;
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'[::A]::<lambda_17>_> @ 141d626d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_[::A]::<lambda_17>_>
          (wchar_t *param_1,<lambda_17> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::A]::<lambda_17>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'[::A]::<lambda_17>_>::
          _vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_18>_> @ 141d627b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l82::<lambda_18>_>
          (wchar_t *param_1,<lambda_18> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`82'::<lambda_18>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`82'::<lambda_18>_>::
          _vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'[::B]::<lambda_18>_> @ 141d628a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<_UE::TasksTests::FTasksBasicTest::TestBody_[::B]::<lambda_18>_>
          (FTaskHandle *this,wchar_t *param_1,<lambda_18> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  
  if ((this->Pimpl).Reference != (FTaskBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x77,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::B]::<lambda_18>,void,void>
          ::_vftable_;
    FTaskBase::Init(this_00,param_1,param_3,param_4,param_5);
    this_00[1]._padding_ = (longlong)param_2->Task;
    this_00->_padding_ =
         (longlong)
         &TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'[::B]::<lambda_18>_>::_vftable_
    ;
  }
  pFVar3 = (this->Pimpl).Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->Pimpl).Reference = this_00;
  FTaskBase::TryLaunch(this_00,0x100);
  return;
}

// Launch<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_19>,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>_> @ 141d629b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __thiscall
UE::Tasks::FPipe::
Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l82::<lambda_19>,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>_>
          (FPipe *this,wchar_t *param_1,<lambda_19> *param_2,
          TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  FTaskBase *this_00;
  undefined7 in_stack_00000029;
  ETaskFlags in_stack_00000040;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`82'::<lambda_19>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000040);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`82'::<lambda_19>_>::
          _vftable_;
  }
  LOCK();
  this->TaskCount = (atomic<unsigned___int64>)((longlong)this->TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = this;
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,0>
            (this_00,(TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *)
                     CONCAT71(in_stack_00000029,param_4),true);
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  *(FTaskBase **)param_1 = this_00;
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>_> @ 141d62a80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_[::C]::<lambda_19>_>
          (wchar_t *param_1,<lambda_19> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>_>::
          _vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::Tasks::MakeCompletedTask<int,int>'::__l2::<lambda_1>_> @ 141d62b70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<int> __cdecl
UE::Tasks::Launch<_UE::Tasks::MakeCompletedTask<int,int>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ = (longlong)&___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____MakeCompletedTask_HH_Tasks_UE__YA_AV__TTask_H_23___QEAH_Z_HX_Private_Tasks_UE__6B_
    ;
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_HH_Tasks_UE__YA_AV__TTask_H_23___QEAH_Z__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<int>)param_1;
}

// Launch<`UE::Tasks::MakeCompletedTask<TUniquePtr<int,TDefaultDelete<int>_>,TUniquePtr<int,TDefaultDelete<int>_>_>'::__l2::<lambda_1>_> @ 141d62c70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TUniquePtr<int,TDefaultDelete<int>_>_> __cdecl
UE::Tasks::
Launch<_UE::Tasks::MakeCompletedTask<TUniquePtr<int,TDefaultDelete<int>_>,TUniquePtr<int,TDefaultDelete<int>_>_>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &___7__TTaskWithResult_V__TUniquePtr_HU__TDefaultDelete_H_____Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____MakeCompletedTask_V__TUniquePtr_HU__TDefaultDelete_H____V1__Tasks_UE__YA_AV__TTask_V__TUniquePtr_HU__TDefaultDelete_H_____23___QEAV__TUniquePtr_HU__TDefaultDelete_H_____Z_V5_X_Private_Tasks_UE__6B_
    ;
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TUniquePtr_HU__TDefaultDelete_H____V1__Tasks_UE__YA_AV__TTask_V__TUniquePtr_HU__TDefaultDelete_H_____23___QEAV__TUniquePtr_HU__TDefaultDelete_H_____Z__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<TUniquePtr<int,TDefaultDelete<int>_>_>)param_1;
}

// Launch<``UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 141d62d70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<__UE::TasksTests::NestedTasksStressTest<10000>_::__l4::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1___R1_3____NestedTasksStressTest__0CHBA__TasksTests_UE__YAXXZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1___R1_3____NestedTasksStressTest__0CHBA__TasksTests_UE__YAXXZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<```UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 141d62e50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<___UE::TasksTests::BasicStressTest<100,100,100>_::__l6::<lambda_1>::operator()_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1___R1_4___R1_5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1___R1_4___R1_5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>_> @ 141d62f40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<UE::Tasks::FTaskEvent> __cdecl
UE::Tasks::Launch<_UE::TasksTests::DependenciesPerfTest<150,150>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ = (longlong)&___7__TTaskWithResult_VFTaskEvent_Tasks_UE___Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____DependenciesPerfTest__0JG__0JG__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<UE::Tasks::FTaskEvent>)param_1;
}

// Launch<`UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>_> @ 141d63020

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::NestedTasksStressTest<10000>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____NestedTasksStressTest__0CHBA__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____NestedTasksStressTest__0CHBA__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>_> @ 141d63110

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::PipeStressTest<200,100>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FTaskBase *this;
  undefined7 in_register_00000081;
  longlong *plVar5;
  ETaskFlags in_stack_00000030;
  
  plVar5 = (longlong *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____PipeStressTest__0MI__0GE__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    lVar4 = plVar5[1];
    this[1]._padding_ = *plVar5;
    this[1]._padding_ = lVar4;
    lVar4 = plVar5[3];
    this[1]._padding_ = plVar5[2];
    this[1]._padding_ = lVar4;
    this[1]._padding_ = plVar5[4];
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____PipeStressTest__0MI__0GE__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>_> @ 141d63220

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FTaskBase *this;
  undefined7 in_register_00000081;
  longlong *plVar5;
  ETaskFlags in_stack_00000030;
  
  plVar5 = (longlong *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    lVar4 = plVar5[1];
    this[1]._padding_ = *plVar5;
    this[1]._padding_ = lVar4;
    lVar4 = plVar5[3];
    this[1]._padding_ = plVar5[2];
    this[1]._padding_ = lVar4;
    this[1]._padding_ = plVar5[4];
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestBatchSpawning<10000>'::__l4::<lambda_1>,UE::Tasks::FTaskEvent_&> @ 141d63330

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::TasksTests::TestBatchSpawning<10000>_::__l4::<lambda_1>,UE::Tasks::FTaskEvent_&>
          (wchar_t *param_1,<lambda_1> *param_2,FTaskEvent *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____TestBatchSpawning__0CHBA__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____TestBatchSpawning__0CHBA__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  if (*(FTaskBase **)CONCAT71(in_register_00000089,param_4) != (FTaskBase *)0x0) {
    Private::FTaskBase::AddPrerequisites(this,*(FTaskBase **)CONCAT71(in_register_00000089,param_4))
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestLatency<1000>'::__l4::<lambda_1>_> @ 141d63420

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::TestLatency<1000>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____TestLatency__0DOI__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____TestLatency__0DOI__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestPerfBasic<10000>'::__l4::<lambda_1>_> @ 141d63500

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::TestPerfBasic<10000>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____TestPerfBasic__0CHBA__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____TestPerfBasic__0CHBA__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>_> @ 141d635e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::TestPerfBatch<10000,100>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____TestPerfBatch__0CHBA__0GE__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____TestPerfBatch__0CHBA__0GE__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestPerfBatchOptimised<10000,100>'::__l4::<lambda_1>,UE::Tasks::FTaskEvent_&> @ 141d636d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::TasksTests::TestPerfBatchOptimised<10000,100>_::__l4::<lambda_1>,UE::Tasks::FTaskEvent_&>
          (wchar_t *param_1,<lambda_1> *param_2,FTaskEvent *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____TestPerfBatchOptimised__0CHBA__0GE__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____TestPerfBatchOptimised__0CHBA__0GE__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  if (*(FTaskBase **)CONCAT71(in_register_00000089,param_4) != (FTaskBase *)0x0) {
    Private::FTaskBase::AddPrerequisites(this,*(FTaskBase **)CONCAT71(in_register_00000089,param_4))
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>_> @ 141d637c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::TestWorkStealing<100,100>_::__l4::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__3____TestWorkStealing__0GE__0GE__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__3____TestWorkStealing__0GE__0GE__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestSpawning<10000>'::__l5::<lambda_1>_> @ 141d638b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::TestSpawning<10000>_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4____TestSpawning__0CHBA__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4____TestSpawning__0CHBA__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<``UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141d63990

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<__UE::TasksTests::DependenciesPerfTest<150,150>_::__l4::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4___R1_3____DependenciesPerfTest__0JG__0JG__TasksTests_UE__YAXXZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4___R1_3____DependenciesPerfTest__0JG__0JG__TasksTests_UE__YAXXZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<``UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141d63a70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<__UE::TasksTests::PipeStressTest<200,100>_::__l4::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar8;
  ETaskFlags in_stack_00000030;
  
  puVar8 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4___R1_3____PipeStressTest__0MI__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *(undefined4 *)&this[1]._padding_ = *puVar8;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    lVar7 = *(longlong *)(puVar8 + 6);
    this[1]._padding_ = *(longlong *)(puVar8 + 4);
    this[1]._padding_ = lVar7;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4___R1_3____PipeStressTest__0MI__0GE__TasksTests_UE__YAXXZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<``UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141d63b70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<__UE::TasksTests::TestPerfBatch<10000,100>_::__l4::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4___R1_3____TestPerfBatch__0CHBA__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4___R1_3____TestPerfBatch__0CHBA__0GE__TasksTests_UE__YAXXZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<``UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141d63c50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<__UE::TasksTests::TestWorkStealing<100,100>_::__l4::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4___R1_3____TestWorkStealing__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4___R1_3____TestWorkStealing__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<``UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141d63d30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<__UE::TasksTests::BasicStressTest<100,100,100>_::__l6::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4___R1_5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4___R1_5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>_> @ 141d63e20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::BasicStressTest<100,100,100>_::__l6::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this[1]._padding_ = *(longlong *)(puVar7 + 4);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l9::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&> @ 141d63f20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>_::__l9::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,FTaskHandle *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *pFVar4;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__8____Any_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_AVFTaskHandle_Private_23_AEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    pFVar4 = param_3[1].Pimpl.Reference;
    this[1]._padding_ = (longlong)(param_3->Pimpl).Reference;
    this[1]._padding_ = (longlong)pFVar4;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__8____Any_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_AVFTaskHandle_Private_23_AEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Z__Private_Tasks_UE__6B_
    ;
  }
  if (*(FTaskBase **)CONCAT71(in_register_00000089,param_4) != (FTaskBase *)0x0) {
    Private::FTaskBase::AddPrerequisites(this,*(FTaskBase **)CONCAT71(in_register_00000089,param_4))
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l12::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&> @ 141d64020

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>_::__l12::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,FTaskHandle *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  FTaskBase *pFVar3;
  undefined8 *puVar4;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__M_____WaitAny_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YAHAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this[1]._padding_ = (longlong)(param_3->Pimpl).Reference;
    pFVar3 = param_3[1].Pimpl.Reference;
    this[1]._padding_ = (longlong)pFVar3;
    if (pFVar3 != (FTaskBase *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    *(undefined4 *)&this[1]._padding_ = *(undefined4 *)&param_3[2].Pimpl.Reference;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__M_____WaitAny_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YAHAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z__Private_Tasks_UE__6B_
    ;
  }
  if (*(FTaskBase **)CONCAT71(in_register_00000089,param_4) != (FTaskBase *)0x0) {
    Private::FTaskBase::AddPrerequisites(this,*(FTaskBase **)CONCAT71(in_register_00000089,param_4))
    ;
  }
  puVar4 = *(undefined8 **)param_1;
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>_> @ 141d64140

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l145::<lambda_20>_>
          (wchar_t *param_1,<lambda_20> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`145'::<lambda_20>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`145'::<lambda_20>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l146::<lambda_21>_> @ 141d64220

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l146::<lambda_21>_>
          (wchar_t *param_1,<lambda_21> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`146'::<lambda_21>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this[1]._padding_ = *(longlong *)(puVar7 + 4);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`146'::<lambda_21>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>_> @ 141d64320

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l168::<lambda_22>_>
          (wchar_t *param_1,<lambda_22> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`168'::<lambda_22>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`168'::<lambda_22>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l177::<lambda_23>_> @ 141d64410

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __thiscall
UE::Tasks::FPipe::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l177::<lambda_23>_>
          (FPipe *this,wchar_t *param_1,<lambda_23> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FTaskBase *this_00;
  ETaskFlags in_stack_00000038;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`177'::<lambda_23>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000038);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`177'::<lambda_23>_>::
          _vftable_;
  }
  LOCK();
  this->TaskCount = (atomic<unsigned___int64>)((longlong)this->TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = this;
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  *(FTaskBase **)param_1 = this_00;
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l185::<lambda_24>_> @ 141d644d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l185::<lambda_24>_>
          (FTaskHandle *this,wchar_t *param_1,<lambda_24> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  
  if ((this->Pimpl).Reference != (FTaskBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x77,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`185'::<lambda_24>,void,void>
          ::_vftable_;
    FTaskBase::Init(this_00,param_1,param_3,param_4,param_5);
    this_00[1]._padding_ = (longlong)param_2->Task;
    this_00->_padding_ =
         (longlong)
         &TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`185'::<lambda_24>_>::
          _vftable_;
  }
  pFVar3 = (this->Pimpl).Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->Pimpl).Reference = this_00;
  FTaskBase::TryLaunch(this_00,0x100);
  return;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>_> @ 141d645e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l193::<lambda_25>_>
          (FTaskHandle *this,wchar_t *param_1,<lambda_25> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  
  if ((this->Pimpl).Reference != (FTaskBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x77,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`193'::<lambda_25>,void,void>
          ::_vftable_;
    FTaskBase::Init(this_00,param_1,param_3,param_4,param_5);
    this_00[1]._padding_ = (longlong)param_2->Outer;
    this_00->_padding_ =
         (longlong)
         &TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`193'::<lambda_25>_>::
          _vftable_;
  }
  pFVar3 = (this->Pimpl).Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->Pimpl).Reference = this_00;
  FTaskBase::TryLaunch(this_00,0x100);
  return;
}

// Launch<`UE::TasksTests::FTasksBasicTest::TestBody'::__l195::<lambda_26>_> @ 141d646f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l195::<lambda_26>_>
          (wchar_t *param_1,<lambda_26> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4
          ,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`195'::<lambda_26>,void,void>
          ::_vftable_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`195'::<lambda_26>_>
          ::_vftable_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l6::<lambda_2>_> @ 141d647d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>_::__l6::<lambda_2>_>
          (wchar_t *param_1,<lambda_2> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_2>__5____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_2>__5____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::TasksTests::TestSpawning<10000>'::__l8::<lambda_2>_> @ 141d648c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::TasksTests::TestSpawning<10000>_::__l8::<lambda_2>_>
          (wchar_t *param_1,<lambda_2> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_2>__7____TestSpawning__0CHBA__TasksTests_UE__YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_2>__7____TestSpawning__0CHBA__TasksTests_UE__YAXXZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_> @ 141d65520

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::
Push<_UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>_::__l4::<lambda_1>_>
          (FPimpl *this,wchar_t *param_1,<lambda_1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FTask *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPimpl *pFVar4;
  code *pcVar5;
  FEventRef *pFVar6;
  atomic<bool> *paVar7;
  bool bVar8;
  ETaskPriority EVar9;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar10;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *pTVar11;
  undefined8 *puVar12;
  FTask *pFVar13;
  undefined8 uVar14;
  TSharedRef<LowLevelTasks::FTask,1> local_88;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> local_78;
  FEventRef *local_68;
  atomic<bool> *paStack_60;
  
  pTVar10 = MakeShared<LowLevelTasks::FTask,1>(&local_88);
  pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar10->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FTask *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar11 = TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::AsShared
                      ((TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *)this,
                       &local_78);
  pFVar6 = param_2->Blocker;
  paVar7 = param_2->bDone;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar11->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar9 = this->TaskPriority;
  local_68 = pFVar6;
  paStack_60 = paVar7;
  if ((*(ulonglong *)&pFVar2->field_0x38 & 0x20) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                       ,0x1dd,L"State: %d");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*(longlong *)&pFVar2->field_0x28 + 0x18))(&pFVar2->field_0x28,pFVar2);
  *(undefined ***)&pFVar2->field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1____Push_V<lambda_1>__3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAXPEB_W__QEAV1_3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_5_YAXXZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1____Push_V<lambda_1>__3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAX0__QEAV1_3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_8_YAXXZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar12 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x38,8);
  *(undefined8 **)pFVar2 = puVar12;
  puVar12[2] = this;
  *puVar12 = pFVar6;
  puVar12[1] = paVar7;
  puVar12[3] = pFVar4;
  puVar12[4] = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12[5] = pFVar2;
  puVar12[6] = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar13 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar13 == (FTask *)0x0) {
    if (EVar9 == Inherit) {
      EVar9 = Default;
    }
    uVar14 = 0;
  }
  else {
    if (EVar9 == Inherit) {
      EVar9 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar13->field_0x38 >> 0x3b);
    }
    uVar14 = *(undefined8 *)&pFVar13->field_0x30;
  }
  *(undefined8 *)&pFVar2->field_0x30 = uVar14;
  *(ulonglong *)&pFVar2->field_0x38 =
       ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  AddWorkItem(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141d65750

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::
Push<__UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>_::__l4::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (FPimpl *this,wchar_t *param_1,<lambda_1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FTask *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPimpl *pFVar4;
  code *pcVar5;
  atomic<unsigned_int> *paVar6;
  atomic<unsigned_int> *paVar7;
  atomic<bool> (*paaVar8) [8];
  atomic<unsigned_int> *paVar9;
  bool bVar10;
  ETaskPriority EVar11;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar12;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *pTVar13;
  undefined8 *puVar14;
  FTask *pFVar15;
  undefined8 uVar16;
  TSharedRef<LowLevelTasks::FTask,1> local_98;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> local_88;
  atomic<unsigned_int> *local_78;
  atomic<unsigned_int> *paStack_70;
  atomic<bool> (*local_68) [8];
  atomic<unsigned_int> *paStack_60;
  
  pTVar12 = MakeShared<LowLevelTasks::FTask,1>(&local_98);
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar12->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FTask *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar13 = TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::AsShared
                      ((TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *)this,
                       &local_88);
  paVar6 = param_2->CurrentConcurrency;
  paVar7 = param_2->ActualMaxConcurrency;
  paaVar8 = param_2->Slots;
  paVar9 = param_2->NumProcessed;
  pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar13->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar11 = this->TaskPriority;
  local_78 = paVar6;
  paStack_70 = paVar7;
  local_68 = paaVar8;
  paStack_60 = paVar9;
  if ((*(ulonglong *)&pFVar2->field_0x38 & 0x20) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsCompleted()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                        ,0x1dd,L"State: %d");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*(longlong *)&pFVar2->field_0x28 + 0x18))(&pFVar2->field_0x28,pFVar2);
  *(undefined ***)&pFVar2->field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1____Push_V<lambda_1>__4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ_QEBA_XZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAXPEB_W__QEAV1_4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_5_YAXXZ_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1____Push_V<lambda_1>__4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ_QEBA_XZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAX0__QEAV1_4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_8_YAXXZ_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar14 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x48,8);
  *(undefined8 **)pFVar2 = puVar14;
  puVar14[4] = this;
  *puVar14 = paVar6;
  puVar14[1] = paVar7;
  puVar14[2] = paaVar8;
  puVar14[3] = paVar9;
  puVar14[5] = pFVar4;
  puVar14[6] = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar14[7] = pFVar2;
  puVar14[8] = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar15 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar15 == (FTask *)0x0) {
    if (EVar11 == Inherit) {
      EVar11 = Default;
    }
    uVar16 = 0;
  }
  else {
    if (EVar11 == Inherit) {
      EVar11 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar15->field_0x38 >> 0x3b);
    }
    uVar16 = *(undefined8 *)&pFVar15->field_0x30;
  }
  *(undefined8 *)&pFVar2->field_0x30 = uVar16;
  *(ulonglong *)&pFVar2->field_0x38 =
       ((longlong)(char)EVar11 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  AddWorkItem(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RadixSort64<1,`FTemplatesSortingTest::TestBody'::__l2::FRadixSort64Test,int,`FTemplatesSortingTest::TestBody'::__l2::SortKey> @ 141d659a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int,_FTemplatesSortingTest::TestBody_::__l2::SortKey>
          (FRadixSort64Test *param_1,FRadixSort64Test *param_2,int param_3,SortKey *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FRadixSort64Test *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FString *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FRadixSort64Test *pFVar17;
  FString *pFVar18;
  int local_a038 [1024];
  int local_9038 [1024];
  int local_8038 [1024];
  int aiStack_7038 [1024];
  int local_6038 [1024];
  int aiStack_5038 [1024];
  int local_4038 [1024];
  int aiStack_3038 [1024];
  int local_2038 [2048];
  
  local_2038[0x7fe] = 0x41d659b6;
  local_2038[0x7ff] = 1;
  uVar10 = (ulonglong)(uint)param_3;
  memset(local_a038,0,0xa000);
  if (0 < param_3) {
    uVar11 = (ulonglong)(uint)param_3;
    pFVar6 = param_1;
    do {
      uVar9 = pFVar6->Key;
      pFVar6 = pFVar6 + 1;
      local_a038[(uint)uVar9 & 0x3ff] = local_a038[(uint)uVar9 & 0x3ff] + 1;
      local_9038[(uint)(uVar9 >> 10) & 0x3ff] = local_9038[(uint)(uVar9 >> 10) & 0x3ff] + 1;
      local_8038[(uint)(uVar9 >> 0x14) & 0x7ff] = local_8038[(uint)(uVar9 >> 0x14) & 0x7ff] + 1;
      local_6038[(uint)(uVar9 >> 0x1f) & 0x7ff] = local_6038[(uint)(uVar9 >> 0x1f) & 0x7ff] + 1;
      local_4038[(uint)(uVar9 >> 0x2a) & 0x7ff] = local_4038[(uint)(uVar9 >> 0x2a) & 0x7ff] + 1;
      local_2038[uVar9 >> 0x35] = local_2038[uVar9 >> 0x35] + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar8 = 0;
  lVar7 = 0x400;
  uVar11 = uVar8;
  uVar9 = uVar8;
  uVar12 = uVar8;
  uVar14 = uVar8;
  uVar15 = uVar8;
  uVar16 = uVar8;
  do {
    iVar1 = local_a038[uVar8];
    local_a038[uVar8] = (int)uVar11;
    uVar11 = (ulonglong)(uint)(iVar1 + (int)uVar11);
    iVar1 = local_9038[uVar8];
    local_9038[uVar8] = (int)uVar16;
    uVar16 = (ulonglong)(uint)(iVar1 + (int)uVar16);
    iVar1 = local_8038[uVar8];
    local_8038[uVar8] = (int)uVar9;
    uVar9 = (ulonglong)(uint)(iVar1 + (int)uVar9);
    iVar1 = local_6038[uVar8];
    local_6038[uVar8] = (int)uVar12;
    uVar12 = (ulonglong)(uint)(iVar1 + (int)uVar12);
    iVar1 = local_4038[uVar8];
    local_4038[uVar8] = (int)uVar14;
    uVar14 = (ulonglong)(uint)(iVar1 + (int)uVar14);
    iVar1 = local_2038[uVar8];
    local_2038[uVar8] = (int)uVar15;
    uVar8 = uVar8 + 1;
    uVar15 = (ulonglong)(uint)(iVar1 + (int)uVar15);
  } while ((longlong)uVar8 < 0x400);
  do {
    iVar1 = local_8038[lVar7];
    local_8038[lVar7] = (int)uVar9;
    uVar9 = (ulonglong)(uint)(iVar1 + (int)uVar9);
    iVar1 = local_6038[lVar7];
    local_6038[lVar7] = (int)uVar12;
    uVar12 = (ulonglong)(uint)(iVar1 + (int)uVar12);
    iVar1 = local_4038[lVar7];
    local_4038[lVar7] = (int)uVar14;
    uVar14 = (ulonglong)(uint)(iVar1 + (int)uVar14);
    iVar1 = local_2038[lVar7];
    local_2038[lVar7] = (int)uVar15;
    lVar7 = lVar7 + 1;
    uVar15 = (ulonglong)(uint)(iVar1 + (int)uVar15);
  } while (lVar7 < 0x800);
  if (0 < param_3) {
    pFVar13 = &param_1->Value;
    pFVar6 = param_1;
    uVar11 = uVar10;
    do {
      uVar3 = pFVar6->Key;
      uVar5 = (uint)uVar3 & 0x3ff;
      pFVar6 = pFVar6 + 1;
      iVar1 = local_a038[uVar5];
      local_a038[uVar5] = iVar1 + 1;
      pFVar4 = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      param_2[iVar1].Key = uVar3;
      param_2[iVar1].Value.Data.AllocatorInstance.Data = pFVar4;
      param_2[iVar1].Value.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      iVar2 = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      param_2[iVar1].Value.Data.ArrayMax = iVar2;
      uVar11 = uVar11 - 1;
      uVar9 = uVar10;
      pFVar13 = (FString *)((longlong)(pFVar13 + 1) + 8);
      pFVar17 = param_2;
    } while (uVar11 != 0);
    do {
      uVar5 = (uint)(pFVar17->Key >> 10) & 0x3ff;
      pFVar18 = &pFVar17->Value;
      iVar1 = local_9038[uVar5];
      pFVar13 = &param_1[iVar1].Value;
      param_1[iVar1].Key = pFVar17->Key;
      local_9038[uVar5] = iVar1 + 1;
      if (pFVar13 != pFVar18) {
        pFVar4 = (pFVar13->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar13->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->Data).ArrayNum = (pFVar17->Value).Data.ArrayNum;
        (pFVar13->Data).ArrayMax = (pFVar17->Value).Data.ArrayMax;
        (pFVar17->Value).Data.ArrayNum = 0;
        (pFVar17->Value).Data.ArrayMax = 0;
      }
      uVar9 = uVar9 - 1;
      uVar11 = uVar10;
      pFVar6 = param_1;
      pFVar17 = pFVar17 + 1;
    } while (uVar9 != 0);
    do {
      uVar5 = (uint)(pFVar6->Key >> 0x14) & 0x7ff;
      pFVar18 = &pFVar6->Value;
      iVar1 = local_8038[uVar5];
      pFVar13 = &param_2[iVar1].Value;
      param_2[iVar1].Key = pFVar6->Key;
      local_8038[uVar5] = iVar1 + 1;
      if (pFVar13 != pFVar18) {
        pFVar4 = (pFVar13->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar13->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->Data).ArrayNum = (pFVar6->Value).Data.ArrayNum;
        (pFVar13->Data).ArrayMax = (pFVar6->Value).Data.ArrayMax;
        (pFVar6->Value).Data.ArrayNum = 0;
        (pFVar6->Value).Data.ArrayMax = 0;
      }
      uVar11 = uVar11 - 1;
      uVar9 = uVar10;
      pFVar17 = param_2;
      pFVar6 = pFVar6 + 1;
    } while (uVar11 != 0);
    do {
      uVar5 = (uint)(pFVar17->Key >> 0x1f) & 0x7ff;
      pFVar18 = &pFVar17->Value;
      iVar1 = local_6038[uVar5];
      pFVar13 = &param_1[iVar1].Value;
      param_1[iVar1].Key = pFVar17->Key;
      local_6038[uVar5] = iVar1 + 1;
      if (pFVar13 != pFVar18) {
        pFVar4 = (pFVar13->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar13->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->Data).ArrayNum = (pFVar17->Value).Data.ArrayNum;
        (pFVar13->Data).ArrayMax = (pFVar17->Value).Data.ArrayMax;
        (pFVar17->Value).Data.ArrayNum = 0;
        (pFVar17->Value).Data.ArrayMax = 0;
      }
      uVar9 = uVar9 - 1;
      uVar11 = uVar10;
      pFVar6 = param_1;
      pFVar17 = pFVar17 + 1;
    } while (uVar9 != 0);
    do {
      uVar5 = (uint)(pFVar6->Key >> 0x2a) & 0x7ff;
      pFVar18 = &pFVar6->Value;
      iVar1 = local_4038[uVar5];
      pFVar13 = &param_2[iVar1].Value;
      param_2[iVar1].Key = pFVar6->Key;
      local_4038[uVar5] = iVar1 + 1;
      if (pFVar13 != pFVar18) {
        pFVar4 = (pFVar13->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar13->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->Data).ArrayNum = (pFVar6->Value).Data.ArrayNum;
        (pFVar13->Data).ArrayMax = (pFVar6->Value).Data.ArrayMax;
        (pFVar6->Value).Data.ArrayNum = 0;
        (pFVar6->Value).Data.ArrayMax = 0;
      }
      uVar11 = uVar11 - 1;
      pFVar6 = pFVar6 + 1;
    } while (uVar11 != 0);
    do {
      uVar11 = param_2->Key >> 0x35;
      iVar1 = local_2038[uVar11];
      pFVar18 = &param_2->Value;
      pFVar13 = &param_1[iVar1].Value;
      param_1[iVar1].Key = param_2->Key;
      local_2038[uVar11] = iVar1 + 1;
      if (pFVar13 != pFVar18) {
        pFVar4 = (pFVar13->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar13->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->Data).ArrayNum = (param_2->Value).Data.ArrayNum;
        (pFVar13->Data).ArrayMax = (param_2->Value).Data.ArrayMax;
        (param_2->Value).Data.ArrayNum = 0;
        (param_2->Value).Data.ArrayMax = 0;
      }
      uVar10 = uVar10 - 1;
      param_2 = param_2 + 1;
    } while (uVar10 != 0);
  }
  return;
}

// RadixSort64<1,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_> @ 141d65e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
          (ulong64 *param_1,ulong64 *param_2,int param_3,
          TRadixSortKeyCastUint64<unsigned___int64> *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong *puVar13;
  ulong64 *puVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int local_a028 [1024];
  int local_9028 [1024];
  int local_8028 [1024];
  int aiStack_7028 [1024];
  int local_6028 [1024];
  int aiStack_5028 [1024];
  int local_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x41d65ea6;
  local_2028[0x7ff] = 1;
  uVar15 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  puVar8 = param_1;
  uVar11 = uVar15;
  if (0 < param_3) {
    do {
      uVar17 = *puVar8;
      local_a028[(uint)uVar17 & 0x3ff] = local_a028[(uint)uVar17 & 0x3ff] + 1;
      local_9028[(uint)(uVar17 >> 10) & 0x3ff] = local_9028[(uint)(uVar17 >> 10) & 0x3ff] + 1;
      local_8028[(uint)(uVar17 >> 0x14) & 0x7ff] = local_8028[(uint)(uVar17 >> 0x14) & 0x7ff] + 1;
      local_6028[(uint)(uVar17 >> 0x1f) & 0x7ff] = local_6028[(uint)(uVar17 >> 0x1f) & 0x7ff] + 1;
      local_4028[(uint)(uVar17 >> 0x2a) & 0x7ff] = local_4028[(uint)(uVar17 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar17 >> 0x35] = local_2028[uVar17 >> 0x35] + 1;
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 != 0);
  }
  lVar9 = 0x400;
  iVar7 = 0;
  lVar19 = 0;
  iVar10 = 0;
  iVar20 = 0;
  iVar18 = 0;
  iVar12 = 0;
  iVar16 = 0;
  do {
    iVar1 = local_a028[lVar19];
    local_a028[lVar19] = iVar10;
    iVar2 = local_9028[lVar19];
    local_9028[lVar19] = iVar20;
    iVar4 = local_8028[lVar19] + iVar12;
    local_8028[lVar19] = iVar12;
    iVar5 = local_6028[lVar19] + iVar16;
    local_6028[lVar19] = iVar16;
    iVar6 = local_4028[lVar19] + iVar18;
    local_4028[lVar19] = iVar18;
    iVar18 = local_2028[lVar19];
    local_2028[lVar19] = iVar7;
    iVar7 = iVar18 + iVar7;
    lVar19 = lVar19 + 1;
    iVar10 = iVar1 + iVar10;
    iVar20 = iVar2 + iVar20;
    iVar18 = iVar6;
    iVar12 = iVar4;
    iVar16 = iVar5;
  } while (lVar19 < 0x400);
  do {
    iVar10 = local_8028[lVar9];
    local_8028[lVar9] = iVar4;
    iVar20 = local_6028[lVar9];
    local_6028[lVar9] = iVar5;
    iVar18 = local_4028[lVar9];
    local_4028[lVar9] = iVar6;
    iVar12 = local_2028[lVar9];
    local_2028[lVar9] = iVar7;
    iVar7 = iVar12 + iVar7;
    lVar9 = lVar9 + 1;
    iVar6 = iVar18 + iVar6;
    iVar4 = iVar10 + iVar4;
    iVar5 = iVar20 + iVar5;
  } while (lVar9 < 0x800);
  puVar14 = param_1;
  uVar11 = uVar15;
  if (0 < param_3) {
    do {
      uVar3 = (uint)*puVar14 & 0x3ff;
      iVar10 = local_a028[uVar3];
      param_2[iVar10] = *puVar14;
      local_a028[uVar3] = iVar10 + 1;
      uVar11 = uVar11 - 1;
      puVar8 = param_2;
      puVar14 = puVar14 + 1;
      uVar17 = uVar15;
    } while (uVar11 != 0);
    do {
      uVar3 = (uint)(*puVar8 >> 10) & 0x3ff;
      iVar10 = local_9028[uVar3];
      param_1[iVar10] = *puVar8;
      local_9028[uVar3] = iVar10 + 1;
      uVar17 = uVar17 - 1;
      puVar13 = param_1;
      puVar8 = puVar8 + 1;
      uVar11 = uVar15;
    } while (uVar17 != 0);
    do {
      uVar3 = (uint)(*puVar13 >> 0x14) & 0x7ff;
      iVar10 = local_8028[uVar3];
      param_2[iVar10] = *puVar13;
      local_8028[uVar3] = iVar10 + 1;
      uVar11 = uVar11 - 1;
      puVar8 = param_2;
      puVar13 = puVar13 + 1;
      uVar17 = uVar15;
    } while (uVar11 != 0);
    do {
      uVar3 = (uint)(*puVar8 >> 0x1f) & 0x7ff;
      iVar10 = local_6028[uVar3];
      param_1[iVar10] = *puVar8;
      local_6028[uVar3] = iVar10 + 1;
      uVar17 = uVar17 - 1;
      puVar14 = param_1;
      puVar8 = puVar8 + 1;
      uVar11 = uVar15;
    } while (uVar17 != 0);
    do {
      uVar3 = (uint)(*puVar14 >> 0x2a) & 0x7ff;
      iVar10 = local_4028[uVar3];
      param_2[iVar10] = *puVar14;
      local_4028[uVar3] = iVar10 + 1;
      uVar11 = uVar11 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar11 != 0);
    do {
      uVar11 = *param_2;
      param_2 = param_2 + 1;
      uVar17 = uVar11 >> 0x35;
      iVar10 = local_2028[uVar17];
      param_1[iVar10] = uVar11;
      local_2028[uVar17] = iVar10 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}

// RadixSort64<0,`FTemplatesSortingTest::TestBody'::__l2::FRadixSort64Test,int,`FTemplatesSortingTest::TestBody'::__l2::SortKey> @ 141d661e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<0,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int,_FTemplatesSortingTest::TestBody_::__l2::SortKey>
          (FRadixSort64Test *param_1,FRadixSort64Test *param_2,int param_3,SortKey *param_4)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FRadixSort64Test *pFVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  FRadixSort64Test *pFVar22;
  FString *pFVar23;
  int local_a038 [1024];
  int local_9038 [1024];
  int local_8038 [1024];
  int aiStack_7038 [1024];
  int local_6038 [1024];
  int aiStack_5038 [1024];
  int local_4038 [1024];
  int aiStack_3038 [1024];
  int local_2038 [2048];
  
  local_2038[0x7fe] = 0x41d661f5;
  local_2038[0x7ff] = 1;
  uVar21 = (ulonglong)(uint)param_3;
  memset(local_a038,0,0xa000);
  if (0 < param_3) {
    uVar18 = (ulonglong)(uint)param_3;
    pFVar11 = param_1;
    do {
      uVar15 = pFVar11->Key;
      pFVar11 = pFVar11 + 1;
      local_a038[(uint)uVar15 & 0x3ff] = local_a038[(uint)uVar15 & 0x3ff] + 1;
      local_9038[(uint)(uVar15 >> 10) & 0x3ff] = local_9038[(uint)(uVar15 >> 10) & 0x3ff] + 1;
      local_8038[(uint)(uVar15 >> 0x14) & 0x7ff] = local_8038[(uint)(uVar15 >> 0x14) & 0x7ff] + 1;
      local_6038[(uint)(uVar15 >> 0x1f) & 0x7ff] = local_6038[(uint)(uVar15 >> 0x1f) & 0x7ff] + 1;
      local_4038[(uint)(uVar15 >> 0x2a) & 0x7ff] = local_4038[(uint)(uVar15 >> 0x2a) & 0x7ff] + 1;
      local_2038[uVar15 >> 0x35] = local_2038[uVar15 >> 0x35] + 1;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  iVar10 = 0;
  lVar13 = 0;
  lVar12 = 0x400;
  iVar16 = 0;
  iVar14 = 0;
  iVar17 = 0;
  iVar19 = 0;
  iVar20 = 0;
  do {
    iVar2 = local_a038[lVar13];
    local_a038[lVar13] = iVar16;
    iVar3 = local_9038[lVar13];
    local_9038[lVar13] = iVar14;
    iVar7 = local_8038[lVar13] + iVar17;
    local_8038[lVar13] = iVar17;
    iVar8 = local_6038[lVar13] + iVar19;
    local_6038[lVar13] = iVar19;
    iVar9 = local_4038[lVar13] + iVar20;
    local_4038[lVar13] = iVar20;
    iVar17 = local_2038[lVar13];
    local_2038[lVar13] = iVar10;
    iVar10 = iVar17 + iVar10;
    lVar13 = lVar13 + 1;
    iVar16 = iVar2 + iVar16;
    iVar14 = iVar3 + iVar14;
    iVar17 = iVar7;
    iVar19 = iVar8;
    iVar20 = iVar9;
  } while (lVar13 < 0x400);
  do {
    iVar16 = local_8038[lVar12];
    local_8038[lVar12] = iVar7;
    iVar14 = local_6038[lVar12];
    local_6038[lVar12] = iVar8;
    iVar17 = local_4038[lVar12];
    local_4038[lVar12] = iVar9;
    iVar19 = local_2038[lVar12];
    local_2038[lVar12] = iVar10;
    iVar10 = iVar19 + iVar10;
    lVar12 = lVar12 + 1;
    iVar7 = iVar16 + iVar7;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar17 + iVar9;
  } while (lVar12 < 0x800);
  uVar18 = uVar21;
  pFVar11 = param_1;
  if (0 < param_3) {
    do {
      uVar4 = pFVar11->Key;
      uVar6 = (uint)uVar4 & 0x3ff;
      iVar16 = local_a038[uVar6];
      pFVar23 = &pFVar11->Value;
      local_a038[uVar6] = iVar16 + 1;
      pFVar1 = &param_2[iVar16].Value;
      param_2[iVar16].Key = uVar4;
      if (pFVar1 != pFVar23) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar1->Data).ArrayNum = (pFVar11->Value).Data.ArrayNum;
        (pFVar1->Data).ArrayMax = (pFVar11->Value).Data.ArrayMax;
        (pFVar11->Value).Data.ArrayNum = 0;
        (pFVar11->Value).Data.ArrayMax = 0;
      }
      uVar18 = uVar18 - 1;
      pFVar22 = param_2;
      pFVar11 = pFVar11 + 1;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar22->Key >> 10) & 0x3ff;
      pFVar23 = &pFVar22->Value;
      iVar16 = local_9038[uVar6];
      pFVar1 = &param_1[iVar16].Value;
      param_1[iVar16].Key = pFVar22->Key;
      local_9038[uVar6] = iVar16 + 1;
      if (pFVar1 != pFVar23) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar1->Data).ArrayNum = (pFVar22->Value).Data.ArrayNum;
        (pFVar1->Data).ArrayMax = (pFVar22->Value).Data.ArrayMax;
        (pFVar22->Value).Data.ArrayNum = 0;
        (pFVar22->Value).Data.ArrayMax = 0;
      }
      uVar21 = uVar21 - 1;
      pFVar22 = pFVar22 + 1;
    } while (uVar21 != 0);
    uVar18 = (ulonglong)(uint)param_3;
    uVar21 = uVar18;
    pFVar11 = param_1;
    do {
      uVar6 = (uint)(pFVar11->Key >> 0x14) & 0x7ff;
      pFVar23 = &pFVar11->Value;
      iVar16 = local_8038[uVar6];
      pFVar1 = &param_2[iVar16].Value;
      param_2[iVar16].Key = pFVar11->Key;
      local_8038[uVar6] = iVar16 + 1;
      if (pFVar1 != pFVar23) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar1->Data).ArrayNum = (pFVar11->Value).Data.ArrayNum;
        (pFVar1->Data).ArrayMax = (pFVar11->Value).Data.ArrayMax;
        (pFVar11->Value).Data.ArrayNum = 0;
        (pFVar11->Value).Data.ArrayMax = 0;
      }
      uVar21 = uVar21 - 1;
      uVar15 = uVar18;
      pFVar22 = param_2;
      pFVar11 = pFVar11 + 1;
    } while (uVar21 != 0);
    do {
      uVar6 = (uint)(pFVar22->Key >> 0x1f) & 0x7ff;
      pFVar23 = &pFVar22->Value;
      iVar16 = local_6038[uVar6];
      pFVar1 = &param_1[iVar16].Value;
      param_1[iVar16].Key = pFVar22->Key;
      local_6038[uVar6] = iVar16 + 1;
      if (pFVar1 != pFVar23) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar1->Data).ArrayNum = (pFVar22->Value).Data.ArrayNum;
        (pFVar1->Data).ArrayMax = (pFVar22->Value).Data.ArrayMax;
        (pFVar22->Value).Data.ArrayNum = 0;
        (pFVar22->Value).Data.ArrayMax = 0;
      }
      uVar15 = uVar15 - 1;
      uVar21 = uVar18;
      pFVar11 = param_1;
      pFVar22 = pFVar22 + 1;
    } while (uVar15 != 0);
    do {
      uVar6 = (uint)(pFVar11->Key >> 0x2a) & 0x7ff;
      pFVar23 = &pFVar11->Value;
      iVar16 = local_4038[uVar6];
      pFVar1 = &param_2[iVar16].Value;
      param_2[iVar16].Key = pFVar11->Key;
      local_4038[uVar6] = iVar16 + 1;
      if (pFVar1 != pFVar23) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar1->Data).ArrayNum = (pFVar11->Value).Data.ArrayNum;
        (pFVar1->Data).ArrayMax = (pFVar11->Value).Data.ArrayMax;
        (pFVar11->Value).Data.ArrayNum = 0;
        (pFVar11->Value).Data.ArrayMax = 0;
      }
      uVar21 = uVar21 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar21 != 0);
    do {
      uVar21 = param_2->Key >> 0x35;
      iVar16 = local_2038[uVar21];
      pFVar23 = &param_2->Value;
      pFVar1 = &param_1[iVar16].Value;
      param_1[iVar16].Key = param_2->Key;
      local_2038[uVar21] = iVar16 + 1;
      if (pFVar1 != pFVar23) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar1->Data).ArrayNum = (param_2->Value).Data.ArrayNum;
        (pFVar1->Data).ArrayMax = (param_2->Value).Data.ArrayMax;
        (param_2->Value).Data.ArrayNum = 0;
        (param_2->Value).Data.ArrayMax = 0;
      }
      uVar18 = uVar18 - 1;
      param_2 = param_2 + 1;
    } while (uVar18 != 0);
  }
  return;
}

// RadixSort64<0,unsigned___int64,int> @ 141d66700

void __cdecl RadixSort64<0,unsigned___int64,int>(ulong64 *param_1,ulong64 *param_2,int param_3)

{
  TRadixSortKeyCastUint64<unsigned___int64> local_res20 [8];
  
  RadixSort64<0,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
            (param_1,param_2,param_3,local_res20);
  return;
}

// RadixSort64<0,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_> @ 141d66710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<0,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
          (ulong64 *param_1,ulong64 *param_2,int param_3,
          TRadixSortKeyCastUint64<unsigned___int64> *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong *puVar14;
  ulong64 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int local_a028 [1024];
  int local_9028 [1024];
  int local_8028 [1024];
  int aiStack_7028 [1024];
  int local_6028 [1024];
  int aiStack_5028 [1024];
  int local_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x41d66726;
  local_2028[0x7ff] = 1;
  uVar16 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  puVar8 = param_1;
  uVar12 = uVar16;
  if (0 < param_3) {
    do {
      uVar18 = *puVar8;
      local_a028[(uint)uVar18 & 0x3ff] = local_a028[(uint)uVar18 & 0x3ff] + 1;
      local_9028[(uint)(uVar18 >> 10) & 0x3ff] = local_9028[(uint)(uVar18 >> 10) & 0x3ff] + 1;
      local_8028[(uint)(uVar18 >> 0x14) & 0x7ff] = local_8028[(uint)(uVar18 >> 0x14) & 0x7ff] + 1;
      local_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] = local_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] + 1;
      local_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] = local_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar18 >> 0x35] = local_2028[uVar18 >> 0x35] + 1;
      uVar12 = uVar12 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar12 != 0);
  }
  lVar9 = 0x400;
  iVar7 = 0;
  lVar10 = 0;
  iVar11 = 0;
  iVar20 = 0;
  iVar19 = 0;
  iVar13 = 0;
  iVar17 = 0;
  do {
    iVar1 = local_a028[lVar10];
    local_a028[lVar10] = iVar11;
    iVar2 = local_9028[lVar10];
    local_9028[lVar10] = iVar20;
    iVar4 = local_8028[lVar10] + iVar13;
    local_8028[lVar10] = iVar13;
    iVar5 = local_6028[lVar10] + iVar17;
    local_6028[lVar10] = iVar17;
    iVar6 = local_4028[lVar10] + iVar19;
    local_4028[lVar10] = iVar19;
    iVar19 = local_2028[lVar10];
    local_2028[lVar10] = iVar7;
    iVar7 = iVar19 + iVar7;
    lVar10 = lVar10 + 1;
    iVar11 = iVar1 + iVar11;
    iVar20 = iVar2 + iVar20;
    iVar19 = iVar6;
    iVar13 = iVar4;
    iVar17 = iVar5;
  } while (lVar10 < 0x400);
  do {
    iVar11 = local_8028[lVar9];
    local_8028[lVar9] = iVar4;
    iVar20 = local_6028[lVar9];
    local_6028[lVar9] = iVar5;
    iVar19 = local_4028[lVar9];
    local_4028[lVar9] = iVar6;
    iVar13 = local_2028[lVar9];
    local_2028[lVar9] = iVar7;
    iVar7 = iVar13 + iVar7;
    lVar9 = lVar9 + 1;
    iVar6 = iVar19 + iVar6;
    iVar4 = iVar11 + iVar4;
    iVar5 = iVar20 + iVar5;
  } while (lVar9 < 0x800);
  puVar15 = param_1;
  uVar12 = uVar16;
  if (0 < param_3) {
    do {
      uVar3 = (uint)*puVar15 & 0x3ff;
      iVar11 = local_a028[uVar3];
      param_2[iVar11] = *puVar15;
      local_a028[uVar3] = iVar11 + 1;
      uVar12 = uVar12 - 1;
      puVar8 = param_2;
      puVar15 = puVar15 + 1;
      uVar18 = uVar16;
    } while (uVar12 != 0);
    do {
      uVar3 = (uint)(*puVar8 >> 10) & 0x3ff;
      iVar11 = local_9028[uVar3];
      param_1[iVar11] = *puVar8;
      local_9028[uVar3] = iVar11 + 1;
      uVar18 = uVar18 - 1;
      puVar14 = param_1;
      puVar8 = puVar8 + 1;
      uVar12 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar3 = (uint)(*puVar14 >> 0x14) & 0x7ff;
      iVar11 = local_8028[uVar3];
      param_2[iVar11] = *puVar14;
      local_8028[uVar3] = iVar11 + 1;
      uVar12 = uVar12 - 1;
      puVar8 = param_2;
      puVar14 = puVar14 + 1;
      uVar18 = uVar16;
    } while (uVar12 != 0);
    do {
      uVar3 = (uint)(*puVar8 >> 0x1f) & 0x7ff;
      iVar11 = local_6028[uVar3];
      param_1[iVar11] = *puVar8;
      local_6028[uVar3] = iVar11 + 1;
      uVar18 = uVar18 - 1;
      puVar15 = param_1;
      puVar8 = puVar8 + 1;
      uVar12 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar3 = (uint)(*puVar15 >> 0x2a) & 0x7ff;
      iVar11 = local_4028[uVar3];
      param_2[iVar11] = *puVar15;
      local_4028[uVar3] = iVar11 + 1;
      uVar12 = uVar12 - 1;
      puVar15 = puVar15 + 1;
    } while (uVar12 != 0);
    do {
      uVar12 = *param_2;
      param_2 = param_2 + 1;
      uVar18 = uVar12 >> 0x35;
      iVar11 = local_2028[uVar18];
      param_1[iVar11] = uVar12;
      local_2028[uVar18] = iVar11 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// RadixSort64<unsigned___int64,int> @ 141d66a50

void __cdecl RadixSort64<unsigned___int64,int>(ulong64 *param_1,int param_2)

{
  TRadixSortKeyCastUint64<unsigned___int64> local_res18 [16];
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
            (param_1,(ulong64 *)local_18.Data,param_2,local_res18);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_> @ 141d66ad0

void __cdecl
RadixSort64<unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
          (ulong64 *param_1,int param_2,TRadixSortKeyCastUint64<unsigned___int64> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
            (param_1,(ulong64 *)local_18.Data,param_2,param_3);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RelocateConstructItems<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest,`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource,int> @ 141d66b50

void __cdecl
RelocateConstructItems<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest,_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource,int>
          (void *param_1,FStringSource *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FStringDest *local_res18;
  FStringSource *local_res20;
  FStringSource *local_38 [2];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    local_38[0] = param_1;
    TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
    ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>
              (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
                Constructed,&local_res18,(bool *)local_38);
    (((FStringSource *)param_1)->Str).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (((FStringSource *)param_1)->Str).Data.AllocatorInstance.Data =
         (param_2->Str).Data.AllocatorInstance.Data;
    (param_2->Str).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (((FStringSource *)param_1)->Str).Data.ArrayNum = (param_2->Str).Data.ArrayNum;
    (((FStringSource *)param_1)->Str).Data.ArrayMax = (param_2->Str).Data.ArrayMax;
    param_1 = &((FStringSource *)param_1)->DummyFieldToMakeItADifferentSizeFromFStringDest;
    (param_2->Str).Data.ArrayNum = 0;
    (param_2->Str).Data.ArrayMax = 0;
    pFVar1 = (param_2->Str).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    local_38[0] = param_2;
    TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
    ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>
              (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
                Destructed,&local_res20,(bool *)local_38);
    param_2 = param_2 + 1;
  }
  return;
}

// __builtin_array_init_helper<std::atomic<bool>_> @ 141d69050

void __cdecl __builtin_array_init_helper<std::atomic<bool>_>(atomic<bool> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2);
    return;
  }
  return;
}

// ~<lambda_1> @ 141d6ce60

void __thiscall
`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000141d6cec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>,1,0> @ 141d6cf20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 141d6cf40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 141d6cf60

void __thiscall
TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 141d6d000

void __thiscall
TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable> @ 141d6d0a0

void __thiscall
UE::Tasks::TTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::
~TTask<_UE::TasksTests::FTasksBasicTest::TestBody_::__l119::FMoveConstructable>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6d0bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly> @ 141d6d150

void __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly>::
~TTaskWithResult<_UE::TasksTests::FTasksMakeCompletedTask::TestBody_::__l19::FCopyOnly>(void *this)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`19'::FCopyOnly>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  return;
}

// ~TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy> @ 141d6d170

void __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy>::
~TTaskWithResult<_UE::TasksTests::FTasksMakeCompletedTask::TestBody_::__l21::FDummy>(void *this)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`21'::FDummy>::
        _vftable_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  FTaskBase::~FTaskBase(this);
  return;
}

// ~TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable> @ 141d6d1b0

void __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::
~TTaskWithResult<_UE::TasksTests::FTasksBasicTest::TestBody_::__l119::FMoveConstructable>
          (void *this)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
        _vftable_;
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  FTaskBase::~FTaskBase(this);
  return;
}

// ~TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable> @ 141d6d1f0

void __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable>::
~TTaskWithResult<_UE::TasksTests::FTasksMakeCompletedTask::TestBody_::__l20::FNonMovable>
          (void *this)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`20'::FNonMovable>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  return;
}

// operator() @ 141d6d8d0

void __thiscall
``UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  
  if (**(char **)this == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bParentDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x440,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar3 = *(char **)((longlong)this + 8);
  if (*pcVar3 != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bNestedDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x442,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar3 = *(char **)((longlong)this + 8);
  }
  *pcVar3 = '\x01';
  return;
}

// operator() @ 141d6d950

void __thiscall
``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  FTaskBase *pFVar9;
  FTask *pFVar10;
  FTaskBase *pFVar11;
  undefined8 uVar12;
  longlong local_38;
  longlong local_30;
  
  pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar9 == (FTaskBase *)0x0) {
    pFVar9 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<```UE::TasksTests::TwoLevelsDeepRetractionTest'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(pFVar9->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar9->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar9->LowLevelTask).field_0x28,&pFVar9->LowLevelTask);
    *(undefined ***)&(pFVar9->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar9->LowLevelTask = pFVar9;
    *(FTaskBase **)&(pFVar9->LowLevelTask).field_0x8 = pFVar9;
    pFVar10 = LowLevelTasks::FTask::GetActiveTask();
    uVar12 = 0;
    if (pFVar10 != (FTask *)0x0) {
      uVar12 = *(undefined8 *)&pFVar10->field_0x30;
    }
    *(undefined8 *)&(pFVar9->LowLevelTask).field_0x30 = uVar12;
    *(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 = 0xc80000541e794a00;
    pFVar9->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar9->_padding_);
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<```UE::TasksTests::TwoLevelsDeepRetractionTest'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar9,0x100);
  plVar5 = *(longlong **)this;
  if (plVar5 != &local_38) {
    puVar6 = (undefined8 *)*plVar5;
    *plVar5 = (longlong)pFVar9;
    pFVar9 = (FTaskBase *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  pFVar11 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar11 == (FTaskBase *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar11,(FTaskBase *)*plVar5);
  if (pFVar9 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar9 == (FTaskBase *)0x0) {
    pFVar9 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<```UE::TasksTests::TwoLevelsDeepRetractionTest'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(pFVar9->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar9->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar9->LowLevelTask).field_0x28,&pFVar9->LowLevelTask);
    *(undefined ***)&(pFVar9->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar9->LowLevelTask = pFVar9;
    *(FTaskBase **)&(pFVar9->LowLevelTask).field_0x8 = pFVar9;
    pFVar10 = LowLevelTasks::FTask::GetActiveTask();
    uVar12 = 0;
    if (pFVar10 != (FTask *)0x0) {
      uVar12 = *(undefined8 *)&pFVar10->field_0x30;
    }
    *(undefined8 *)&(pFVar9->LowLevelTask).field_0x30 = uVar12;
    *(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 = 0xc80000541e794c00;
    pFVar9->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar9->_padding_);
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<```UE::TasksTests::TwoLevelsDeepRetractionTest'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar9,0x100);
  plVar5 = *(longlong **)((longlong)this + 8);
  if (plVar5 != &local_30) {
    puVar6 = (undefined8 *)*plVar5;
    *plVar5 = (longlong)pFVar9;
    pFVar9 = (FTaskBase *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  pFVar11 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar11 == (FTaskBase *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar11,(FTaskBase *)*plVar5);
  if (pFVar9 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  return;
}

// operator() @ 141d6ec00

void __thiscall
``UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this)

{
  atomic<unsigned___int64> *paVar1;
  int *piVar2;
  atomic<unsigned_int> *paVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  FPipe *pFVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  FTaskBase *this_00;
  FTask *pFVar11;
  undefined8 uVar12;
  longlong local_28;
  longlong local_20;
  longlong lStack_18;
  
  local_20 = *(longlong *)((longlong)this + 8);
  pFVar6 = *(FPipe **)((longlong)this + 0x18);
  lStack_18 = *(longlong *)((longlong)this + 0x10);
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1___R1_4___R1_3____PipeStressTest__0MI__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    uVar12 = 0;
    if (pFVar11 != (FTask *)0x0) {
      uVar12 = *(undefined8 *)&pFVar11->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar12;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e83f000;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = local_20;
    this_00[1]._padding_ = lStack_18;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1___R1_4___R1_3____PipeStressTest__0MI__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  LOCK();
  paVar1 = &pFVar6->TaskCount;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = pFVar6;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  plVar7 = *(longlong **)this;
  if (plVar7 == &local_28) {
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &this_00->RefCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6edc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)this_00->_padding_)(this_00,1);
        return;
      }
    }
  }
  else {
    puVar8 = (undefined8 *)*plVar7;
    *plVar7 = (longlong)this_00;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar8 + 6);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6ed9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar8)(puVar8,1);
        return;
      }
    }
  }
  return;
}

// operator() @ 141d6ede0

void __thiscall
``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::
__l5::<lambda_1>::operator()(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  undefined7 extraout_var;
  uint *puVar8;
  ulonglong uVar9;
  undefined7 extraout_var_00;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  uVar13 = (ulonglong)param_1;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:___cdecl_`void___cdecl_UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>(void)'::`4'::<lambda_1>::operator()(void)const___ptr64'::`5'::<lambda_1>::operator()(unsigned_int)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId1592,"Task",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
               ,0x638);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:___cdecl_`void___cdecl_UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>(void)'::`4'::<lambda_1>::operator()(void)const___ptr64'::`5'::<lambda_1>::operator()(unsigned_int)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId1592);
  }
  if ((7 < param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slot < MaxConcurrency",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x639,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(char *)(uVar13 + *(longlong *)((longlong)this + 0x10)) != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Slots[Slot].load(std::memory_order_relaxed)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x63a,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined1 *)(uVar13 + *(longlong *)((longlong)this + 0x10)) = 1;
  piVar2 = *(int **)this;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  uVar12 = iVar1 + 1;
  if ((8 < uVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentConcurrencyLocal <= MaxConcurrency",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x63e,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = **(uint **)((longlong)this + 8);
  puVar8 = *(uint **)((longlong)this + 8);
  puVar5 = (uint *)(ulonglong)uVar7;
  while (uVar7 < uVar12) {
    LOCK();
    uVar7 = **(uint **)((longlong)this + 8);
    bVar6 = (uint)puVar5 == uVar7;
    if (bVar6) {
      **(uint **)((longlong)this + 8) = uVar12;
      puVar8 = puVar5;
    }
    else {
      puVar8 = (uint *)(ulonglong)uVar7;
    }
    UNLOCK();
    uVar7 = (uint)puVar8;
    if (bVar6) break;
    puVar5 = puVar8;
    if (8 < uVar7) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActualMaxConcurrencyLocal <= MaxConcurrency",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x643,L"");
      puVar8 = (uint *)CONCAT71(extraout_var,bVar6);
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar9 = rdtsc();
  uVar9 = CONCAT44((int)((ulonglong)puVar8 >> 0x20),(int)uVar9) | uVar9 & 0xffffffff00000000;
  uVar14 = (ulonglong)(-(uint)(uVar9 != 0) & 10000);
  bVar6 = FWindowsPlatformMisc::HasTimedPauseCPUFeature();
  uVar10 = CONCAT71(extraout_var_00,bVar6);
  if (bVar6) {
    uVar9 = rdtsc();
    lVar11 = (uVar9 & 0xffffffff00000000 |
             CONCAT44((int)((uint7)extraout_var_00 >> 0x18),(int)uVar9)) + uVar14;
    tpause(0,(int)((ulonglong)lVar11 >> 0x20),(int)lVar11);
  }
  else {
    do {
      uVar4 = rdtsc();
      uVar10 = (CONCAT44((int)(uVar10 >> 0x20),(int)uVar4) | uVar4 & 0xffffffff00000000) - uVar9;
    } while (uVar10 < uVar14);
  }
  LOCK();
  **(int **)this = **(int **)this + -1;
  UNLOCK();
  *(undefined1 *)(uVar13 + *(longlong *)((longlong)this + 0x10)) = 0;
  LOCK();
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  UNLOCK();
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 141d6efd0

void __thiscall
``UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  FTaskBase *this_00;
  FTask *pFVar10;
  undefined8 uVar11;
  longlong local_18 [2];
  
  lVar5 = *(longlong *)((longlong)this + 8);
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1___R1_4___R1_5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar10 = LowLevelTasks::FTask::GetActiveTask();
    uVar11 = 0;
    if (pFVar10 != (FTask *)0x0) {
      uVar11 = *(undefined8 *)&pFVar10->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar11;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e82e400;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = lVar5;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1___R1_4___R1_5____BasicStressTest__0GE__0GE__0GE__TasksTests_UE__YAXXZ_QEBA_XZ_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  plVar6 = *(longlong **)this;
  if (plVar6 == local_18) {
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &this_00->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6f172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)this_00->_padding_)(this_00,1);
        return;
      }
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar6;
    *plVar6 = (longlong)this_00;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar7 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6f14b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar7)(puVar7,1);
        return;
      }
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 141d704b0

void * __thiscall
UE::Tasks::Private::TExecutableTask<void_(__cdecl*)(void)>::_scalar_deleting_destructor_
          (TExecutableTask<void_(__cdecl*)(void)> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70520

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l10::FFunctor>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70590

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l16::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70600

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l29::<lambda_10>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70670

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l111::<lambda_10>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d706e0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l16::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70750

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l29::<lambda_11>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d707c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l111::<lambda_11>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70830

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_12>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d708a0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l120::<lambda_12>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
        _vftable_;
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70920

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_13>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70990

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l121::<lambda_13>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
        _vftable_;
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70a10

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_14>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70a80

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l124::<lambda_14>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70af0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_15>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70b60

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_15>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70bd0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_16>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70c40

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_16>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70cb0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_17>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70d20

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'[::A]::<lambda_17>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70d90

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_18>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70e00

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'[::B]::<lambda_18>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70e70

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_19>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70ee0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70f50

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::Tasks::MakeCompletedTask<int,int>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d70fc0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`19'::FCopyOnly>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71030

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy,int,wchar_t_const_(&)[5]>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`21'::FDummy>::
        _vftable_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d710c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`20'::FNonMovable>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71130

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<TUniquePtr<int,TDefaultDelete<int>_>,TUniquePtr<int,TDefaultDelete<int>_>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_V__TUniquePtr_HU__TDefaultDelete_H_____Private_Tasks_UE__6B_;
  ::operator_delete(*(void **)((longlong)this + 0xd8),4);
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d711c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::FPipeSuspensionScope'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71230

void * __thiscall
UE::Tasks::Private::
TExecutableTask<```UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d712a0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71310

void * __thiscall
UE::Tasks::Private::
TExecutableTask<```UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71380

void * __thiscall
UE::Tasks::Private::
TExecutableTask<```UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d713f0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71460

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d714d0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71540

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d715b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71620

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksPipeTest::TestBody'::__l7::FAsyncClass::DoSomething'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71690

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksPipeTest::TestBody'::__l7::FAsyncClass::DoSomethingElse'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71700

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71770

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d717e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksPriorityCVarTest::TestBody'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71850

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d718c0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::__l3::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71930

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksCancellation::TestBody'::__l3::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d719a0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l3::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71a10

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l3::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71a80

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::__l3::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71af0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &___7__TTaskWithResult_VFTaskEvent_Tasks_UE___Private_Tasks_UE__6B_;
  puVar3 = *(undefined8 **)((longlong)this + 0xd8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71b90

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71c00

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71c70

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71ce0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::TestBatchSpawning<10000>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71d50

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::TestLatency<1000>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71dc0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::TestPerfBasic<10000>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71e30

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71ea0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TestPerfBatchOptimised<10000,100>'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71f10

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71f80

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>::operator()'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d71ff0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::BlockWorkers'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72060

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FAsymmetricThreadFence::TestBody'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d720d0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72140

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTaskGraphOversubscribeDuringRestartWorkers::TestBody'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d721b0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksEventTest::TestBody'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72220

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l4::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72290

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>::operator()<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>_>'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72300

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::TestSpawning<10000>'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72370

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d723e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72450

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d724c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72530

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d725a0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72610

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l6::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72680

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l6::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d726f0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l9::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72760

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l12::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d727d0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72840

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l146::<lambda_21>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d728b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72920

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l177::<lambda_23>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72990

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l185::<lambda_24>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72a00

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72a70

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l195::<lambda_26>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72ae0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<```UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72b50

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72bc0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72c30

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::__l2::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72ca0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72d10

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::__l3::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72d80

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksCancellation::TestBody'::__l3::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72df0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::__l3::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72e60

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72ed0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l4::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72f40

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l6::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d72fb0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l6::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73020

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73090

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::TestSpawning<10000>'::__l8::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73100

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73170

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l11::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d731e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73250

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d732c0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l8::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73330

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l9::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d733a0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::__l18::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73410

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l19::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73480

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l82::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d734f0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::__l11::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73560

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d735d0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_4>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73640

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l8::<lambda_4>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d736b0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::__l18::<lambda_4>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73720

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l19::<lambda_4>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73790

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73800

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l53::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73870

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::__l11::<lambda_4>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d738e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73950

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l27::<lambda_5>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d739c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l48::<lambda_5>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73a30

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l82::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73aa0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l11::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73b10

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l27::<lambda_6>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73b80

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l49::<lambda_6>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73bf0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l82::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73c60

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l11::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73cd0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_7>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73d40

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l49::<lambda_7>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73db0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l83::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73e20

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l12::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73e90

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_8>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73f00

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l93::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73f70

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l12::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d73fe0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_9>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74050

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l101::<lambda_9>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d740c0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::__l13::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74130

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<void_(__cdecl*)(void),void,void>::
_scalar_deleting_destructor_
          (TExecutableTaskBase<void_(__cdecl*)(void),void,void> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74170

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l10::FFunctor,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d741b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l16::<lambda_10>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d741f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l29::<lambda_10>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74230

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l111::<lambda_10>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74270

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l16::<lambda_11>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d742b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l29::<lambda_11>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d742f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l111::<lambda_11>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74330

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_12>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74370

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l120::<lambda_12>,`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
        _vftable_;
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d743d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_13>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74410

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l121::<lambda_13>,`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
        _vftable_;
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74470

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_14>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d744b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l124::<lambda_14>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d744f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_15>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74530

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_15>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74570

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_16>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d745b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_16>,bool,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74600

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_17>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74640

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::A]::<lambda_17>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74680

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_18>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d746c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::B]::<lambda_18>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74700

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_19>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74740

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74780

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<int,int>'::__l2::<lambda_1>,int,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d747d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly>'::__l2::<lambda_1>,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`19'::FCopyOnly>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74820

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy,int,wchar_t_const_(&)[5]>'::__l2::<lambda_1>,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`21'::FDummy>::
        _vftable_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74880

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable>'::__l2::<lambda_1>,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`20'::FNonMovable>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d748d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TUniquePtr<int,TDefaultDelete<int>_>,TUniquePtr<int,TDefaultDelete<int>_>_>'::__l2::<lambda_1>,TUniquePtr<int,TDefaultDelete<int>_>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_V__TUniquePtr_HU__TDefaultDelete_H_____Private_Tasks_UE__6B_;
  ::operator_delete(*(void **)((longlong)this + 0xd8),4);
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74930

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::FPipeSuspensionScope'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74970

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d749b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d749f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74a30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74a70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74ab0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74af0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74b30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74b70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74bb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksPipeTest::TestBody'::__l7::FAsyncClass::DoSomething'::__l2::<lambda_1>,bool,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74c00

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksPipeTest::TestBody'::__l7::FAsyncClass::DoSomethingElse'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74c40

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74c80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74cc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPriorityCVarTest::TestBody'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74d00

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74d40

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l3::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74d80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksCancellation::TestBody'::__l3::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74dc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l3::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74e00

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l3::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74e40

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l3::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74e80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>,UE::Tasks::FTaskEvent,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &___7__TTaskWithResult_VFTaskEvent_Tasks_UE___Private_Tasks_UE__6B_;
  puVar3 = *(undefined8 **)((longlong)this + 0xd8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74ef0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74f30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74f70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74fb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestBatchSpawning<10000>'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d74ff0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestLatency<1000>'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75030

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestPerfBasic<10000>'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75070

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d750b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestPerfBatchOptimised<10000,100>'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d750f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75130

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>::operator()'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75170

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`UE::TasksTests::BlockWorkers'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d751b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FAsymmetricThreadFence::TestBody'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d751f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75230

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTaskGraphOversubscribeDuringRestartWorkers::TestBody'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75270

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksEventTest::TestBody'::__l4::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d752b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l4::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d752f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>::operator()<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>_>'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75330

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestSpawning<10000>'::__l5::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75370

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d753b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d753f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75430

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75470

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d754b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d754f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l6::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75530

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l6::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75570

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l9::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d755b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l12::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d755f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75630

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l146::<lambda_21>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75670

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d756b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l177::<lambda_23>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d756f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l185::<lambda_24>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75730

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75770

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l195::<lambda_26>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d757b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d757f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75830

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75870

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::__l2::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d758b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d758f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l3::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75930

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksCancellation::TestBody'::__l3::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75970

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l3::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d759b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::__l4::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d759f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l4::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75a30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l6::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75a70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l6::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75ab0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l7::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75af0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestSpawning<10000>'::__l8::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75b30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75b70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l11::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75bb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_3>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75bf0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_3>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75c30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l8::<lambda_3>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75c70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l9::<lambda_3>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75cb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l18::<lambda_3>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75cf0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l19::<lambda_3>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75d30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l82::<lambda_3>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75d70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l11::<lambda_3>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75db0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_3>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75df0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_4>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75e30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l8::<lambda_4>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75e70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l18::<lambda_4>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75eb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l19::<lambda_4>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75ef0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75f30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l53::<lambda_4>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75f70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l11::<lambda_4>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75fb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d75ff0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l27::<lambda_5>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76030

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l48::<lambda_5>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76070

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l82::<lambda_5>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d760b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l11::<lambda_5>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d760f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l27::<lambda_6>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76130

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l49::<lambda_6>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76170

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l82::<lambda_6>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d761b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l11::<lambda_6>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d761f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_7>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76230

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l49::<lambda_7>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76270

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l83::<lambda_7>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d762b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l12::<lambda_7>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d762f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_8>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76330

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l93::<lambda_8>,int,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76380

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l12::<lambda_8>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d763c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_9>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76400

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l101::<lambda_9>,int,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76450

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l13::<lambda_9>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d764d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76520

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::FSharedData,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76560

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d765a0

void * __thiscall
UE::Tasks::Private::TTaskWithResult<int>::_scalar_deleting_destructor_
          (TTaskWithResult<int> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d765f0

void * __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`19'::FCopyOnly>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76640

void * __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`21'::FDummy>::
        _vftable_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d766a0

void * __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksBasicTest::TestBody'::`119'::FMoveConstructable>::
        _vftable_;
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76700

void * __thiscall
UE::Tasks::Private::
TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`20'::FNonMovable>::
        _vftable_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76750

void * __thiscall
UE::Tasks::Private::TTaskWithResult<TUniquePtr<int,TDefaultDelete<int>_>_>::
_scalar_deleting_destructor_
          (TTaskWithResult<TUniquePtr<int,TDefaultDelete<int>_>_> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TTaskWithResult_V__TUniquePtr_HU__TDefaultDelete_H_____Private_Tasks_UE__6B_
  ;
  ::operator_delete(*(void **)(this->ResultStorage).Pad,4);
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d767b0

void * __thiscall
UE::Tasks::Private::TTaskWithResult<UE::Tasks::FTaskEvent>::_scalar_deleting_destructor_
          (TTaskWithResult<UE::Tasks::FTaskEvent> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7__TTaskWithResult_VFTaskEvent_Tasks_UE___Private_Tasks_UE__6B_;
  puVar3 = *(undefined8 **)(this->ResultStorage).Pad;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d76820

void * __thiscall
UE::Tasks::Private::TTaskWithResult<bool>::_scalar_deleting_destructor_
          (TTaskWithResult<bool> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// fetch_add @ 141d8df70

/* WARNING: Enum "memory_order": Some values do not have unique names */

uint __thiscall
std::_Atomic_integral<unsigned_int,4>::fetch_add
          (_Atomic_integral<unsigned_int,4> *this,uint param_1,memory_order param_2)

{
  _Atomic_integral<unsigned_int,4> _Var1;
  
  LOCK();
  _Var1 = *this;
  *this = (_Atomic_integral<unsigned_int,4>)((int)*this + param_1);
  UNLOCK();
  return (uint)_Var1;
}

// load @ 141d8df80

/* WARNING: Enum "memory_order": Some values do not have unique names */

int __thiscall std::_Atomic_storage<int,4>::load(_Atomic_storage<int,4> *this,memory_order param_1)

{
  return (this->_Storage)._Value;
}

// load @ 141d8df90

/* WARNING: Enum "memory_order": Some values do not have unique names */

uint __thiscall
std::_Atomic_storage<unsigned_int,4>::load
          (_Atomic_storage<unsigned_int,4> *this,memory_order param_1)

{
  return (this->_Storage)._Value;
}

// Constructed'' @ 15034c460

void __cdecl
`dynamic_atexit_destructor_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::Constructed__(void)

{
  TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.HashSize
       = 0;
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.Hash
      .SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>
                          ::Constructed.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
              Constructed);
  return;
}

// Constructed'' @ 15034c4a0

void __cdecl
`dynamic_atexit_destructor_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::Constructed__(void)

{
  TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
  HashSize = 0;
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
      Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                          ::Constructed.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
              Constructed);
  return;
}

// Destructed'' @ 15034c4e0

void __cdecl
`dynamic_atexit_destructor_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::Destructed__(void)

{
  TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.HashSize
       = 0;
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.Hash.
      SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>
                          ::Destructed.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
              Destructed);
  return;
}

// Destructed'' @ 15034c520

void __cdecl
`dynamic_atexit_destructor_for_'`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::Destructed__(void)

{
  TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
  HashSize = 0;
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
      Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                          ::Destructed.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
              Destructed);
  return;
}

// `dynamic_atexit_destructor_for_'FAsymmetricThreadFenceInstance'' @ 15034c560

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAsymmetricThreadFenceInstance__(void)

{
  if (FAsymmetricThreadFenceInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FAsymmetricThreadFenceInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FAsymmetricThreadFenceInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FNoDestroyTestInstance'' @ 15034c590

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FNoDestroyTestInstance__(void)

{
  if (FNoDestroyTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FNoDestroyTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FNoDestroyTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRelocateConstructItemsTestInstance'' @ 15034c5c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRelocateConstructItemsTestInstance__(void)

{
  if (FRelocateConstructItemsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRelocateConstructItemsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRelocateConstructItemsTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringRemoveFromTestInstance'' @ 15034c5f0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringRemoveFromTestInstance__(void)

{
  if (FStringRemoveFromTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringRemoveFromTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringRemoveFromTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringSplitTestInstance'' @ 15034c620

void __cdecl
UE::String::`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringSplitTestInstance__(void)

{
  if (FStringSplitTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringSplitTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringSplitTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTaskGraphBackgroundWithNormalAsPrereqInstance'' @ 15034c650

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTaskGraphBackgroundWithNormalAsPrereqInstance__(void)

{
  if (FTaskGraphBackgroundWithNormalAsPrereqInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTaskGraphBackgroundWithNormalAsPrereqInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTaskGraphBackgroundWithNormalAsPrereqInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTaskGraphLaunchFromThreadDuringRestartWorkersInstance'' @ 15034c680

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTaskGraphLaunchFromThreadDuringRestartWorkersInstance__(void)

{
  if (FTaskGraphLaunchFromThreadDuringRestartWorkersInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTaskGraphLaunchFromThreadDuringRestartWorkersInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTaskGraphLaunchFromThreadDuringRestartWorkersInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTaskGraphOversubscribeDuringRestartWorkersInstance'' @ 15034c6b0

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTaskGraphOversubscribeDuringRestartWorkersInstance__(void)

{
  if (FTaskGraphOversubscribeDuringRestartWorkersInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTaskGraphOversubscribeDuringRestartWorkersInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTaskGraphOversubscribeDuringRestartWorkersInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksAnyInstance'' @ 15034c6e0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTasksAnyInstance__(void)

{
  if (FTasksAnyInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksAnyInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksAnyInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksBasicStressTestInstance'' @ 15034c710

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksBasicStressTestInstance__(void)

{
  if (FTasksBasicStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksBasicStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksBasicStressTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksBasicTestInstance'' @ 15034c740

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTasksBasicTestInstance__
          (void)

{
  if (FTasksBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksBasicTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksBenchmarkBlockUnblockWorkersInstance'' @ 15034c770

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksBenchmarkBlockUnblockWorkersInstance__(void)

{
  if (FTasksBenchmarkBlockUnblockWorkersInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksBenchmarkBlockUnblockWorkersInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksBenchmarkBlockUnblockWorkersInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksCancellationInstance'' @ 15034c7a0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTasksCancellationInstance__
          (void)

{
  if (FTasksCancellationInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksCancellationInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksCancellationInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksConcurrencyLimiterTestInstance'' @ 15034c7d0

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksConcurrencyLimiterTestInstance__(void)

{
  if (FTasksConcurrencyLimiterTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksConcurrencyLimiterTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksConcurrencyLimiterTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksConcurrencyLimiterWaitingTestInstance'' @ 15034c800

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksConcurrencyLimiterWaitingTestInstance__(void)

{
  if (FTasksConcurrencyLimiterWaitingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksConcurrencyLimiterWaitingTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksConcurrencyLimiterWaitingTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksDeepRetractionStressTestInstance'' @ 15034c830

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksDeepRetractionStressTestInstance__(void)

{
  if (FTasksDeepRetractionStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksDeepRetractionStressTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksDeepRetractionStressTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksDeepRetractionTestInstance'' @ 15034c860

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksDeepRetractionTestInstance__(void)

{
  if (FTasksDeepRetractionTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksDeepRetractionTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksDeepRetractionTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksDependenciesTestInstance'' @ 15034c890

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksDependenciesTestInstance__(void)

{
  if (FTasksDependenciesTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksDependenciesTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksDependenciesTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksEventTestInstance'' @ 15034c8c0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTasksEventTestInstance__
          (void)

{
  if (FTasksEventTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksEventTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksEventTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksLoneStandbyWorkerInstance'' @ 15034c8f0

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksLoneStandbyWorkerInstance__(void)

{
  if (FTasksLoneStandbyWorkerInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksLoneStandbyWorkerInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksLoneStandbyWorkerInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FTasksMakeCompletedTaskInstance'' @ 15034c920

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksMakeCompletedTaskInstance__(void)

{
  if (FTasksMakeCompletedTaskInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksMakeCompletedTaskInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksMakeCompletedTaskInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FTasksNestedTasksStressTestInstance'' @ 15034c950

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksNestedTasksStressTestInstance__(void)

{
  if (FTasksNestedTasksStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksNestedTasksStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksNestedTasksStressTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksPerfTestInstance'' @ 15034c980

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTasksPerfTestInstance__
          (void)

{
  if (FTasksPerfTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksPerfTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksPerfTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksPipeNoThreadingTestInstance'' @ 15034c9b0

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksPipeNoThreadingTestInstance__(void)

{
  if (FTasksPipeNoThreadingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksPipeNoThreadingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksPipeNoThreadingTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksPipeTestInstance'' @ 15034c9e0

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTasksPipeTestInstance__
          (void)

{
  if (FTasksPipeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksPipeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksPipeTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksPipeWaitUntilEmptyTestInstance'' @ 15034ca10

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksPipeWaitUntilEmptyTestInstance__(void)

{
  if (FTasksPipeWaitUntilEmptyTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksPipeWaitUntilEmptyTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksPipeWaitUntilEmptyTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksPriorityCVarTestInstance'' @ 15034ca40

void __cdecl
UE::TasksTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksPriorityCVarTestInstance__(void)

{
  if (FTasksPriorityCVarTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksPriorityCVarTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksPriorityCVarTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksWaitAnyInstance'' @ 15034ca70

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTasksWaitAnyInstance__(void)

{
  if (FTasksWaitAnyInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTasksWaitAnyInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTasksWaitAnyInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTemplatesSortingTestInstance'' @ 15034caa0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTemplatesSortingTestInstance__(void)

{
  if (FTemplatesSortingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTemplatesSortingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTemplatesSortingTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTemplatesValueOrErrorTestInstance'' @ 15034cad0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTemplatesValueOrErrorTestInstance__(void)

{
  if (FTemplatesValueOrErrorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTemplatesValueOrErrorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTemplatesValueOrErrorTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTlsTestInstance'' @ 15034cb00

void __cdecl
UE::TasksTests::`anonymous_namespace'::_dynamic_atexit_destructor_for__FTlsTestInstance__(void)

{
  if (FTlsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTlsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTlsTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'NoDestroyTestGlobal'' @ 15034cb30

void __cdecl _dynamic_atexit_destructor_for__NoDestroyTestGlobal__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Slot'' @ 15034cb40

void __cdecl
`UE::TasksTests::UeTlsStressTest<10000000>'::__l2::_dynamic_atexit_destructor_for__Slot__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015034cb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(`void___cdecl_UE::TasksTests::UeTlsStressTest<10000000>(void)'::__l2::Slot.Slot);
  return;
}

