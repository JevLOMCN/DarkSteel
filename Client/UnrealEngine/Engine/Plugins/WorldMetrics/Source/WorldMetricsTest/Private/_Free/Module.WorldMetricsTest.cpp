// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 174

// OnInitializeDeinitialize'' @ 141453ba0

void __cdecl
`dynamic_initializer_for_'UMockWorldMetricsExtensionBase::OnInitializeDeinitialize__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UMockWorldMetricsExtensionBase::OnInitializeDeinitialize__)
  ;
  return;
}

// `dynamic_initializer_for_'CmdWorldMetricsSelfTest'' @ 141453bc0

void __cdecl UE::WorldMetrics::Private::_dynamic_initializer_for__CmdWorldMetricsSelfTest__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,UE::WorldMetrics::Private::<lambda_24>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"WorldMetrics.SelfTest",
                      L"Toggles the World Metrics Subsystem self-test.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdWorldMetricsSelfTest,pIVar5);
  CmdWorldMetricsSelfTest._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CmdWorldMetricsSelfTest__);
  return;
}

// `dynamic_initializer_for_'MockExtensionClasses'' @ 141453d50

void __cdecl UE::WorldMetrics::Private::_dynamic_initializer_for__MockExtensionClasses__(void)

{
  MockExtensionClasses[0].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionA::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[0].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[0].Class.field0_0x0);
  }
  MockExtensionClasses[1].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionB::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[1].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[1].Class.field0_0x0);
  }
  MockExtensionClasses[2].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionC::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[2].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[2].Class.field0_0x0);
  }
  MockExtensionClasses[3].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionD::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[3].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[3].Class.field0_0x0);
  }
  MockExtensionClasses[4].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionE::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[4].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[4].Class.field0_0x0);
  }
  MockExtensionClasses[5].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionF::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[5].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[5].Class.field0_0x0);
  }
  MockExtensionClasses[6].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionG::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[6].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[6].Class.field0_0x0);
  }
  MockExtensionClasses[7].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionH::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[7].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[7].Class.field0_0x0);
  }
  MockExtensionClasses[8].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionI::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[8].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[8].Class.field0_0x0);
  }
  MockExtensionClasses[9].Class.field0_0x0 =
       (TObjectPtr<UClass>)UMockWorldMetricsExtensionJ::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockExtensionClasses[9].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockExtensionClasses[9].Class.field0_0x0);
    return;
  }
  return;
}

// `dynamic_initializer_for_'MockMetricClasses'' @ 141453ec0

void __cdecl UE::WorldMetrics::Private::_dynamic_initializer_for__MockMetricClasses__(void)

{
  MockMetricClasses[0].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricA::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[0].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[0].Class.field0_0x0);
  }
  MockMetricClasses[1].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricB::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[1].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[1].Class.field0_0x0);
  }
  MockMetricClasses[2].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricC::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[2].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[2].Class.field0_0x0);
  }
  MockMetricClasses[3].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricD::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[3].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[3].Class.field0_0x0);
  }
  MockMetricClasses[4].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricE::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[4].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[4].Class.field0_0x0);
  }
  MockMetricClasses[5].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricF::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[5].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[5].Class.field0_0x0);
  }
  MockMetricClasses[6].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricG::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[6].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[6].Class.field0_0x0);
  }
  MockMetricClasses[7].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricH::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[7].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[7].Class.field0_0x0);
  }
  MockMetricClasses[8].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricI::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[8].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[8].Class.field0_0x0);
  }
  MockMetricClasses[9].Class.field0_0x0 = (TObjectPtr<UClass>)UMockWorldMetricJ::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (MockMetricClasses[9].Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    GC::MarkAsReachable((UObject *)MockMetricClasses[9].Class.field0_0x0);
    return;
  }
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWorldMetricsTest'' @ 141454030

void __cdecl _dynamic_initializer_for__ModuleRegistrantWorldMetricsTest__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WorldMetricsTest";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WorldMetricsTest",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'TestMetricCollectionInstance'' @ 141454080

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::_dynamic_initializer_for__TestMetricCollectionInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"TestMetricCollection");
  TestMetricCollection::TestMetricCollection(&TestMetricCollectionInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__TestMetricCollectionInstance__);
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestMultipleMetricIterationInstance'' @ 1414540d0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestMultipleMetricIterationInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestMultipleMetricIteration");
  WorldMetricsTestMultipleMetricIteration::WorldMetricsTestMultipleMetricIteration
            (&WorldMetricsTestMultipleMetricIterationInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricIterationInstance__);
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestMultipleMetricsAddRemoveInstance'' @ 141454120

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestMultipleMetricsAddRemoveInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestMultipleMetricsAddRemove");
  WorldMetricsTestMultipleMetricsAddRemove::WorldMetricsTestMultipleMetricsAddRemove
            (&WorldMetricsTestMultipleMetricsAddRemoveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsAddRemoveInstance__);
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance'' @ 141454170

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease");
  WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::
  WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease
            (&WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance__
        );
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance'' @ 1414541c0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,
                     L"WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval");
  WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::
  WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval
            (&WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance,&local_18
            );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance__
        );
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance'' @ 141454210

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,
                     L"WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension");
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension
            (&WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance__
        );
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance'' @ 141454260

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease");
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease
            (&WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance__
        );
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestSingleMetricAddRemoveInstance'' @ 1414542b0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestSingleMetricAddRemoveInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestSingleMetricAddRemove");
  WorldMetricsTestSingleMetricAddRemove::WorldMetricsTestSingleMetricAddRemove
            (&WorldMetricsTestSingleMetricAddRemoveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricAddRemoveInstance__);
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance'' @ 141454300

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval");
  WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::
  WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval
            (&WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance__
        );
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance'' @ 141454350

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestSingleMetricSingleExtensionAcquireRelease");
  WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::
  WorldMetricsTestSingleMetricSingleExtensionAcquireRelease
            (&WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance__
        );
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance'' @ 1414543a0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval");
  WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::
  WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval
            (&WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance__
        );
  return;
}

// `dynamic_initializer_for_'WorldMetricsTestZeroStateInstance'' @ 1414543f0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_initializer_for__WorldMetricsTestZeroStateInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"WorldMetricsTestZeroState");
  WorldMetricsTestZeroState::WorldMetricsTestZeroState(&WorldMetricsTestZeroStateInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__WorldMetricsTestZeroStateInstance__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsTest_Public_WorldMetricsTestTypes_h__Script_WorldMetricsTest_1086402428'' @ 141454440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsTest_Public_WorldMetricsTestTypes_h__Script_WorldMetricsTest_1086402428__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WorldMetricsTest",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsTest_Public_WorldMetricsTestTypes_h__Script_WorldMetricsTest_Statics
             ::ClassInfo,0x18,(FStructRegisterCompiledInInfo *)0x0,0,
             (FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WorldMetricsTest'' @ 141454480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WorldMetricsTest__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x5743f3a5;
  local_res8[0].DeclarationsHash = 0x77e57471;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WorldMetricsTest,L"/Script/WorldMetricsTest",
             &Z_Registration_Info_UPackage__Script_WorldMetricsTest,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14f13aba0

void * __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::_scalar_deleting_destructor_
          (WorldMetricsTestZeroState *this,uint param_1)

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

// Z_Construct_UPackage__Script_WorldMetricsTest @ 14f13acb0

UPackage * __cdecl Z_Construct_UPackage__Script_WorldMetricsTest(void)

{
  if (Z_Registration_Info_UPackage__Script_WorldMetricsTest.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WorldMetricsTest.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_WorldMetricsTest.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f13b100

void * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::_scalar_deleting_destructor_
          (WorldMetricsTestSingleMetricAddRemove *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13b620

void * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::_scalar_deleting_destructor_
          (WorldMetricsTestMultipleMetricsAddRemove *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13ba80

void * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::_scalar_deleting_destructor_
          (WorldMetricsTestMultipleMetricIteration *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13bfa0

void * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::
_scalar_deleting_destructor_
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13c400

void * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::
_scalar_deleting_destructor_
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13c920

void * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
_scalar_deleting_destructor_
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this,
          uint param_1)

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

// `scalar_deleting_destructor' @ 14f13cd80

void * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::
_scalar_deleting_destructor_
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13d060

void * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::
_scalar_deleting_destructor_
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13d340

void * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::
_scalar_deleting_destructor_
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13d620

void * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::
_scalar_deleting_destructor_
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14f13d900

void * __thiscall
UE::WorldMetrics::TestMetricCollection::_scalar_deleting_destructor_
          (TestMetricCollection *this,uint param_1)

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

// Z_Construct_UClass_UMockWorldMetricA @ 14f13d950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricA(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricA.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricA.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricA_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricA.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricB @ 14f13d990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricB(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricB.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricB.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricB_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricB.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricBarBase @ 14f13d9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricBarBase(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricBarBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricBarBase.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricBarBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBarBase.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricBase @ 14f13da10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricBase(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricBase.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBase.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricC @ 14f13da50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricC(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricC.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricC.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricC_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricC.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricD @ 14f13da90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricD(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricD.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricD.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricD_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricD.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricE @ 14f13dad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricE(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricE.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricE.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricE_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricE.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricF @ 14f13db10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricF(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricF.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricF.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricF_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricF.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricFooBase @ 14f13db50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricFooBase(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricFooBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricFooBase.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricFooBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricFooBase.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricG @ 14f13db90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricG(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricG.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricG.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricH @ 14f13dbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricH(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricH.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricH.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricH_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricH.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricI @ 14f13dc10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricI(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricI.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricI.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricI_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricI.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricJ @ 14f13dc50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricJ(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricJ.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricJ.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricJ_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricJ.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionA @ 14f13dc90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionA(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionA_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionB @ 14f13dcd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionB(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionB_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionBase @ 14f13dd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionBase(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionC @ 14f13dd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionC(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionC_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionD @ 14f13dd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionD(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionD_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionE @ 14f13ddd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionE(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionE_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionF @ 14f13de10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionF(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionF_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionG @ 14f13de50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionG(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionH @ 14f13de90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionH(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionH_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionI @ 14f13ded0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionI(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionI_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.OuterSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionJ @ 14f13df10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionJ(void)

{
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.OuterSingleton,
               &Z_Construct_UClass_UMockWorldMetricsExtensionJ_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f13e140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,UE::WorldMetrics::Private::<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,UE::WorldMetrics::Private::<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// DestructItems<TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_>,int> @ 14f13e420

void __cdecl
DestructItems<TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// InternalConstructor<UMockWorldMetricA> @ 14f13e460

void __cdecl InternalConstructor<UMockWorldMetricA>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricA__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricB> @ 14f13e4a0

void __cdecl InternalConstructor<UMockWorldMetricB>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricB__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricBarBase> @ 14f13e4e0

void __cdecl InternalConstructor<UMockWorldMetricBarBase>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricBarBase__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricBase> @ 14f13e520

void __cdecl InternalConstructor<UMockWorldMetricBase>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UMockWorldMetricC> @ 14f13e560

void __cdecl InternalConstructor<UMockWorldMetricC>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricC__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricD> @ 14f13e5a0

void __cdecl InternalConstructor<UMockWorldMetricD>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricD__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricE> @ 14f13e5e0

void __cdecl InternalConstructor<UMockWorldMetricE>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricE__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricF> @ 14f13e620

void __cdecl InternalConstructor<UMockWorldMetricF>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricF__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricFooBase> @ 14f13e660

void __cdecl InternalConstructor<UMockWorldMetricFooBase>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricFooBase__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricG> @ 14f13e6a0

void __cdecl InternalConstructor<UMockWorldMetricG>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricG__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricH> @ 14f13e6e0

void __cdecl InternalConstructor<UMockWorldMetricH>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricH__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricI> @ 14f13e720

void __cdecl InternalConstructor<UMockWorldMetricI>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricI__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricJ> @ 14f13e760

void __cdecl InternalConstructor<UMockWorldMetricJ>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMockWorldMetricJ__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionA> @ 14f13e7a0

void __cdecl InternalConstructor<UMockWorldMetricsExtensionA>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionA__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionB> @ 14f13e7e0

void __cdecl InternalConstructor<UMockWorldMetricsExtensionB>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionB__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionBase> @ 14f13e820

void __cdecl InternalConstructor<UMockWorldMetricsExtensionBase>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionC> @ 14f13e860

void __cdecl InternalConstructor<UMockWorldMetricsExtensionC>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionC__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionD> @ 14f13e8a0

void __cdecl InternalConstructor<UMockWorldMetricsExtensionD>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionD__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionE> @ 14f13e8e0

void __cdecl InternalConstructor<UMockWorldMetricsExtensionE>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionE__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionF> @ 14f13e920

void __cdecl InternalConstructor<UMockWorldMetricsExtensionF>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionF__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionG> @ 14f13e960

void __cdecl InternalConstructor<UMockWorldMetricsExtensionG>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionG__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionH> @ 14f13e9a0

void __cdecl InternalConstructor<UMockWorldMetricsExtensionH>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionH__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionI> @ 14f13e9e0

void __cdecl InternalConstructor<UMockWorldMetricsExtensionI>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionI__6B_;
  }
  return;
}

// InternalConstructor<UMockWorldMetricsExtensionJ> @ 14f13ea20

void __cdecl InternalConstructor<UMockWorldMetricsExtensionJ>(FObjectInitializer *param_1)

{
  UWorldMetricsExtension *this;
  
  this = (UWorldMetricsExtension *)param_1->Obj;
  if (this != (UWorldMetricsExtension *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMockWorldMetricsExtensionJ__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricA> @ 14f13ea60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricA>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricA::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricA__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricB> @ 14f13eb20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricB>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricB::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricB__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricBarBase> @ 14f13ebe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricBarBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricBarBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricBarBase__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricBase> @ 14f13eca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricC> @ 14f13ed60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricC>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricC::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricC__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricD> @ 14f13ee20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricD>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricD::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricD__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricE> @ 14f13eee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricE>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricE::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricE__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricF> @ 14f13efa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricF>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricF::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricF__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricFooBase> @ 14f13f060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricFooBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricFooBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricFooBase__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricG> @ 14f13f120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricG::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricG__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricH> @ 14f13f1e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricH>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricH::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricH__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricI> @ 14f13f2a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricI>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricI::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricI__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricJ> @ 14f13f360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMockWorldMetricJ>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricJ::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricJ__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionA> @ 14f13f420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionA>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionA::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionA__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionB> @ 14f13f4e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionB>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionB::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionB__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionBase> @ 14f13f5a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionBase__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionC> @ 14f13f660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionC>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionC::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionC__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionD> @ 14f13f720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionD>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionD::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionD__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionE> @ 14f13f7e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionE>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionE::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionE__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionF> @ 14f13f8a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionF>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionF::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionF__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionG> @ 14f13f960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionG::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionG__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionH> @ 14f13fa20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionH>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionH::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionH__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionI> @ 14f13fae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionI>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionI::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionI__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionJ> @ 14f13fba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionJ>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMockWorldMetricsExtensionJ::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMockWorldMetricsExtensionJ__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14f142b10

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142b40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy,`UE::WorldMetrics::Private::TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142b70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142ba0

void * __thiscall
UMockWorldMetricA::_scalar_deleting_destructor_(UMockWorldMetricA *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142c10

void * __thiscall
UMockWorldMetricB::_scalar_deleting_destructor_(UMockWorldMetricB *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142c80

void * __thiscall
UMockWorldMetricBarBase::_scalar_deleting_destructor_(UMockWorldMetricBarBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142cf0

void * __thiscall
UMockWorldMetricBase::_scalar_deleting_destructor_(UMockWorldMetricBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMockWorldMetricBase__6B_;
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142d60

void * __thiscall
UMockWorldMetricC::_scalar_deleting_destructor_(UMockWorldMetricC *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142dd0

void * __thiscall
UMockWorldMetricD::_scalar_deleting_destructor_(UMockWorldMetricD *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142e40

void * __thiscall
UMockWorldMetricE::_scalar_deleting_destructor_(UMockWorldMetricE *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142eb0

void * __thiscall
UMockWorldMetricF::_scalar_deleting_destructor_(UMockWorldMetricF *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142f20

void * __thiscall
UMockWorldMetricFooBase::_scalar_deleting_destructor_(UMockWorldMetricFooBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f142f90

void * __thiscall
UMockWorldMetricG::_scalar_deleting_destructor_(UMockWorldMetricG *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143000

void * __thiscall
UMockWorldMetricH::_scalar_deleting_destructor_(UMockWorldMetricH *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143070

void * __thiscall
UMockWorldMetricI::_scalar_deleting_destructor_(UMockWorldMetricI *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f1430e0

void * __thiscall
UMockWorldMetricJ::_scalar_deleting_destructor_(UMockWorldMetricJ *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143150

void * __thiscall
UMockWorldMetricsExtensionA::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionA *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f1431b0

void * __thiscall
UMockWorldMetricsExtensionB::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionB *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143210

void * __thiscall
UMockWorldMetricsExtensionBase::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143270

void * __thiscall
UMockWorldMetricsExtensionC::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionC *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f1432d0

void * __thiscall
UMockWorldMetricsExtensionD::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionD *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143330

void * __thiscall
UMockWorldMetricsExtensionE::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionE *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143390

void * __thiscall
UMockWorldMetricsExtensionF::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionF *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f1433f0

void * __thiscall
UMockWorldMetricsExtensionG::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionG *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143450

void * __thiscall
UMockWorldMetricsExtensionH::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionH *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f1434b0

void * __thiscall
UMockWorldMetricsExtensionI::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionI *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f143510

void * __thiscall
UMockWorldMetricsExtensionJ::_scalar_deleting_destructor_
          (UMockWorldMetricsExtensionJ *this,uint param_1)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricsTestTypes @ 14f143cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricsTestTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricsTest_init @ 14f143cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricsTest_init(void)

{
  return;
}

// Z_Construct_UClass_UMockWorldMetricA_NoRegister @ 14f148c40

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricA_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricA",
               &Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton,
               UMockWorldMetricA::StaticRegisterNativesUMockWorldMetricA,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricA>,
               InternalVTableHelperCtorCaller<UMockWorldMetricA>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricB_NoRegister @ 14f148d00

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricB_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricB",
               &Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton,
               UMockWorldMetricB::StaticRegisterNativesUMockWorldMetricB,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricB>,
               InternalVTableHelperCtorCaller<UMockWorldMetricB>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricBarBase_NoRegister @ 14f148dc0

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricBarBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricBarBase",
               &Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton,
               UMockWorldMetricBarBase::StaticRegisterNativesUMockWorldMetricBarBase,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricBarBase>
               ,InternalVTableHelperCtorCaller<UMockWorldMetricBarBase>,local_res8,
               UMockWorldMetricBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricBase_NoRegister @ 14f148e80

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricBase",
               &Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton,
               UMockWorldMetricBase::StaticRegisterNativesUMockWorldMetricBase,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricBase>,local_res8,
               UWorldMetricInterface::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricC_NoRegister @ 14f148f40

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricC_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricC",
               &Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton,
               UMockWorldMetricC::StaticRegisterNativesUMockWorldMetricC,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricC>,
               InternalVTableHelperCtorCaller<UMockWorldMetricC>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricD_NoRegister @ 14f149000

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricD_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricD",
               &Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton,
               UMockWorldMetricD::StaticRegisterNativesUMockWorldMetricD,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricD>,
               InternalVTableHelperCtorCaller<UMockWorldMetricD>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricE_NoRegister @ 14f1490c0

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricE_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricE",
               &Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton,
               UMockWorldMetricE::StaticRegisterNativesUMockWorldMetricE,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricE>,
               InternalVTableHelperCtorCaller<UMockWorldMetricE>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricF_NoRegister @ 14f149180

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricF_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricF",
               &Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton,
               UMockWorldMetricF::StaticRegisterNativesUMockWorldMetricF,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricF>,
               InternalVTableHelperCtorCaller<UMockWorldMetricF>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricFooBase_NoRegister @ 14f149240

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricFooBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricFooBase",
               &Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton,
               UMockWorldMetricFooBase::StaticRegisterNativesUMockWorldMetricFooBase,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricFooBase>
               ,InternalVTableHelperCtorCaller<UMockWorldMetricFooBase>,local_res8,
               UMockWorldMetricBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricG_NoRegister @ 14f149300

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricG",
               &Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton,
               UMockWorldMetricG::StaticRegisterNativesUMockWorldMetricG,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricG>,
               InternalVTableHelperCtorCaller<UMockWorldMetricG>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricH_NoRegister @ 14f1493c0

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricH_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricH",
               &Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton,
               UMockWorldMetricH::StaticRegisterNativesUMockWorldMetricH,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricH>,
               InternalVTableHelperCtorCaller<UMockWorldMetricH>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricI_NoRegister @ 14f149480

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricI_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricI",
               &Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton,
               UMockWorldMetricI::StaticRegisterNativesUMockWorldMetricI,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricI>,
               InternalVTableHelperCtorCaller<UMockWorldMetricI>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricJ_NoRegister @ 14f149540

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricJ_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricJ",
               &Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton,
               UMockWorldMetricJ::StaticRegisterNativesUMockWorldMetricJ,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricJ>,
               InternalVTableHelperCtorCaller<UMockWorldMetricJ>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionA_NoRegister @ 14f149600

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionA_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionA",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton,
               UMockWorldMetricsExtensionA::StaticRegisterNativesUMockWorldMetricsExtensionA,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionA>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionA>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionB_NoRegister @ 14f1496c0

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionB_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionB",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton,
               UMockWorldMetricsExtensionB::StaticRegisterNativesUMockWorldMetricsExtensionB,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionB>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionB>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionBase_NoRegister @ 14f149780

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionBase",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton,
               UMockWorldMetricsExtensionBase::StaticRegisterNativesUMockWorldMetricsExtensionBase,
               0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionBase>,local_res8,
               UWorldMetricsExtension::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionC_NoRegister @ 14f149840

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionC_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionC",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton,
               UMockWorldMetricsExtensionC::StaticRegisterNativesUMockWorldMetricsExtensionC,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionC>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionC>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionD_NoRegister @ 14f149900

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionD_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionD",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton,
               UMockWorldMetricsExtensionD::StaticRegisterNativesUMockWorldMetricsExtensionD,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionD>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionD>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionE_NoRegister @ 14f1499c0

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionE_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionE",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton,
               UMockWorldMetricsExtensionE::StaticRegisterNativesUMockWorldMetricsExtensionE,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionE>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionE>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionF_NoRegister @ 14f149a80

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionF_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionF",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton,
               UMockWorldMetricsExtensionF::StaticRegisterNativesUMockWorldMetricsExtensionF,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionF>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionF>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionG_NoRegister @ 14f149b40

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionG",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton,
               UMockWorldMetricsExtensionG::StaticRegisterNativesUMockWorldMetricsExtensionG,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionG>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionG>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionH_NoRegister @ 14f149c00

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionH_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionH",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton,
               UMockWorldMetricsExtensionH::StaticRegisterNativesUMockWorldMetricsExtensionH,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionH>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionH>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionI_NoRegister @ 14f149cc0

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionI_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionI",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton,
               UMockWorldMetricsExtensionI::StaticRegisterNativesUMockWorldMetricsExtensionI,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionI>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionI>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton;
}

// Z_Construct_UClass_UMockWorldMetricsExtensionJ_NoRegister @ 14f149d80

UClass * __cdecl Z_Construct_UClass_UMockWorldMetricsExtensionJ_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionJ",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton,
               UMockWorldMetricsExtensionJ::StaticRegisterNativesUMockWorldMetricsExtensionJ,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionJ>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionJ>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton;
}

// IMPLEMENT_MODULE_WorldMetricsTest @ 14f149e40

void __cdecl IMPLEMENT_MODULE_WorldMetricsTest(void)

{
  return;
}

// OnInitializeDeinitialize'' @ 1504723b0

void __cdecl
`dynamic_atexit_destructor_for_'UMockWorldMetricsExtensionBase::OnInitializeDeinitialize__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UMockWorldMetricsExtensionBase::OnInitializeDeinitialize,
             (FWriteAccessScope *)&local_28);
  if ((UMockWorldMetricsExtensionBase::OnInitializeDeinitialize._16_4_ != 0) &&
     (UMockWorldMetricsExtensionBase::OnInitializeDeinitialize._8_8_ != 0)) {
    (*(code *)**(undefined8 **)UMockWorldMetricsExtensionBase::OnInitializeDeinitialize._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &UMockWorldMetricsExtensionBase::OnInitializeDeinitialize.field_0x8,0,0,0x10);
    UMockWorldMetricsExtensionBase::OnInitializeDeinitialize._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (UMockWorldMetricsExtensionBase::OnInitializeDeinitialize._8_8_ != 0) {
    FMemory::Free((void *)UMockWorldMetricsExtensionBase::OnInitializeDeinitialize._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UMockWorldMetricsExtensionBase::OnInitializeDeinitialize);
  return;
}

// `dynamic_atexit_destructor_for_'CmdWorldMetricsSelfTest'' @ 150472450

void __cdecl
UE::WorldMetrics::Private::_dynamic_atexit_destructor_for__CmdWorldMetricsSelfTest__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdWorldMetricsSelfTest);
  return;
}

// `dynamic_atexit_destructor_for_'TestMetricCollectionInstance'' @ 150472470

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__TestMetricCollectionInstance__(void)

{
  if (TestMetricCollectionInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TestMetricCollectionInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&TestMetricCollectionInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestMultipleMetricIterationInstance'' @ 1504724a0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricIterationInstance__(void)

{
  if (WorldMetricsTestMultipleMetricIterationInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestMultipleMetricIterationInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&WorldMetricsTestMultipleMetricIterationInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestMultipleMetricsAddRemoveInstance'' @ 1504724d0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsAddRemoveInstance__(void)

{
  if (WorldMetricsTestMultipleMetricsAddRemoveInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestMultipleMetricsAddRemoveInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&WorldMetricsTestMultipleMetricsAddRemoveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance'' @ 150472500

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance__
          (void)

{
  if (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance.PrettyNameDotNotation.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &WorldMetricsTestMultipleMetricsMultipleExtensionAcquireReleaseInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance'' @ 150472530

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance__
          (void)

{
  if (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance.
      PrettyNameDotNotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemovalInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance'' @ 150472560

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance__
          (void)

{
  if (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance.
      PrettyNameDotNotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance
                  .PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtensionInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance'' @ 150472590

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance__
          (void)

{
  if (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance.PrettyNameDotNotation.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestSingleMetricAddRemoveInstance'' @ 1504725c0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricAddRemoveInstance__(void)

{
  if (WorldMetricsTestSingleMetricAddRemoveInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestSingleMetricAddRemoveInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&WorldMetricsTestSingleMetricAddRemoveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance'' @ 1504725f0

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance__
          (void)

{
  if (WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&WorldMetricsTestSingleMetricOrphanExtensionAutoRemovalInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance'' @ 150472620

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance__
          (void)

{
  if (WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &WorldMetricsTestSingleMetricSingleExtensionAcquireReleaseInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance'' @ 150472650

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance__
          (void)

{
  if (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance.PrettyNameDotNotation.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemovalInstance);
  return;
}

// `dynamic_atexit_destructor_for_'WorldMetricsTestZeroStateInstance'' @ 150472680

void __cdecl
UE::WorldMetrics::`anonymous_namespace'::
_dynamic_atexit_destructor_for__WorldMetricsTestZeroStateInstance__(void)

{
  if (WorldMetricsTestZeroStateInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(WorldMetricsTestZeroStateInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&WorldMetricsTestZeroStateInstance);
  return;
}

