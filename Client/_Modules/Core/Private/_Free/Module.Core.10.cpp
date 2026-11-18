// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 431

// EmbeddedToNativeDelegateMap'' @ 140f08ce0

void __cdecl `dynamic_initializer_for_'FEmbeddedDelegates::EmbeddedToNativeDelegateMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FEmbeddedDelegates::EmbeddedToNativeDelegateMap__);
  return;
}

// GetLocalNetworkVersionOverride'' @ 140f08d00

void __cdecl `dynamic_initializer_for_'FNetworkVersion::GetLocalNetworkVersionOverride__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetworkVersion::GetLocalNetworkVersionOverride__);
  return;
}

// GetReplayCompatibleChangeListOverride'' @ 140f08d20

void __cdecl
`dynamic_initializer_for_'FNetworkVersion::GetReplayCompatibleChangeListOverride__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetworkVersion::GetReplayCompatibleChangeListOverride__);
  return;
}

// Guid'' @ 140f08d40

void __cdecl `dynamic_initializer_for_'FEngineNetworkCustomVersion::Guid__(void)

{
  FEngineNetworkCustomVersion::Guid = Guid;
  return;
}

// Guid'' @ 140f08d60

void __cdecl `dynamic_initializer_for_'FGameNetworkCustomVersion::Guid__(void)

{
  FGameNetworkCustomVersion::Guid = Guid;
  return;
}

// IsNetworkCompatibleOverride'' @ 140f08d80

void __cdecl `dynamic_initializer_for_'FNetworkVersion::IsNetworkCompatibleOverride__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetworkVersion::IsNetworkCompatibleOverride__);
  return;
}

// NamedObjectRegistry'' @ 140f08da0

void __cdecl `dynamic_initializer_for_'FEmbeddedDelegates::NamedObjectRegistry__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FEmbeddedDelegates::NamedObjectRegistry__);
  return;
}

// NamedObjectRegistryLock'' @ 140f08dc0

void __cdecl `dynamic_initializer_for_'FEmbeddedDelegates::NamedObjectRegistryLock__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FEmbeddedDelegates::NamedObjectRegistryLock,4000);
  atexit(`dynamic_atexit_destructor_for_'FEmbeddedDelegates::NamedObjectRegistryLock__);
  return;
}

// NativeToEmbeddedDelegateMap'' @ 140f08df0

void __cdecl `dynamic_initializer_for_'FEmbeddedDelegates::NativeToEmbeddedDelegateMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FEmbeddedDelegates::NativeToEmbeddedDelegateMap__);
  return;
}

// Serializer'' @ 140f08e10

void __cdecl `dynamic_initializer_for_'FSerializedUATProcess::Serializer__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FSerializedUATProcess::Serializer,4000)
  ;
  atexit(`dynamic_atexit_destructor_for_'FSerializedUATProcess::Serializer__);
  return;
}

// SleepTickDelegate'' @ 140f08e40

void __cdecl `dynamic_initializer_for_'FEmbeddedDelegates::SleepTickDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FEmbeddedDelegates::SleepTickDelegate__);
  return;
}

// `dynamic_initializer_for_'AllSortedPlatformInfos'' @ 140f08e60

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__AllSortedPlatformInfos__(void)

{
  atexit(_dynamic_atexit_destructor_for__AllSortedPlatformInfos__);
  return;
}

// `dynamic_initializer_for_'AllSortedPlatformNames'' @ 140f08e80

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__AllSortedPlatformNames__(void)

{
  atexit(_dynamic_atexit_destructor_for__AllSortedPlatformNames__);
  return;
}

// `dynamic_initializer_for_'CSkipChangelistCompatibilityVersionCheck'' @ 140f08ea0

void __cdecl _dynamic_initializer_for__CSkipChangelistCompatibilityVersionCheck__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CSkipChangelistCompatibilityVersionCheck,L"s.SkipChangelistCompatibilityVersionCheck",
             &GSkipChangelistCompatibilityVersionCheck,
             L"If true, engine version compatibility checks will not use changelist numbers to determine compatibility. NOTE: Changelist compatibility checks are automatically skipped in licensee builds."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CSkipChangelistCompatibilityVersionCheck__);
  return;
}

// `dynamic_initializer_for_'CVarLogFlushInterval'' @ 140f08ef0

void __cdecl _dynamic_initializer_for__CVarLogFlushInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogFlushInterval,L"log.flushInterval",&GLogFlushIntervalSec,
             L"Logging interval in seconds",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogFlushInterval__);
  return;
}

// `dynamic_initializer_for_'DataDrivenPlatforms'' @ 140f08f40

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__DataDrivenPlatforms__(void)

{
  atexit(_dynamic_atexit_destructor_for__DataDrivenPlatforms__);
  return;
}

// `dynamic_initializer_for_'FBasicLexerTestAutomationTestInstance'' @ 140f08f60

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBasicLexerTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBasicLexerTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBasicLexerTestAutomationTestInstance,&local_18,false);
  FBasicLexerTestAutomationTestInstance._0_8_ = &___7FBasicLexerTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBasicLexerTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCStringGetVarArgsTestAutomationTestInstance'' @ 140f08fc0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCStringGetVarArgsTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCStringGetVarArgsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCStringGetVarArgsTestAutomationTestInstance,&local_18,false);
  FCStringGetVarArgsTestAutomationTestInstance._0_8_ = &___7FCStringGetVarArgsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCStringGetVarArgsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCStringStrcatTestAutomationTestInstance'' @ 140f09020

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCStringStrcatTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCStringStrcatTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrcatTestAutomationTestInstance,&local_18,false);
  FCStringStrcatTestAutomationTestInstance._0_8_ = &___7FCStringStrcatTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCStringStrcatTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCStringStrcpyTestAutomationTestInstance'' @ 140f09080

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCStringStrcpyTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCStringStrcpyTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrcpyTestAutomationTestInstance,&local_18,false);
  FCStringStrcpyTestAutomationTestInstance._0_8_ = &___7FCStringStrcpyTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCStringStrcpyTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCStringStrnstrTestAutomationTestInstance'' @ 140f090e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCStringStrnstrTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCStringStrnstrTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrnstrTestAutomationTestInstance,&local_18,false);
  FCStringStrnstrTestAutomationTestInstance._0_8_ = &___7FCStringStrnstrTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCStringStrnstrTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCStringStrstrTestAutomationTestInstance'' @ 140f09140

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCStringStrstrTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCStringStrstrTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrstrTestAutomationTestInstance,&local_18,false);
  FCStringStrstrTestAutomationTestInstance._0_8_ = &___7FCStringStrstrTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCStringStrstrTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FExpressionParserAllocatedTypesAutomationTestInstance'' @ 140f091a0

void __cdecl
Tests::`anonymous_namespace'::
_dynamic_initializer_for__FExpressionParserAllocatedTypesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FExpressionParserAllocatedTypes");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FExpressionParserAllocatedTypesAutomationTestInstance,&local_18
             ,false);
  FExpressionParserAllocatedTypesAutomationTestInstance._0_8_ =
       &___7FExpressionParserAllocatedTypes_Tests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FExpressionParserAllocatedTypesAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FExpressionParserMoveableTypesAutomationTestInstance'' @ 140f09200

void __cdecl
Tests::`anonymous_namespace'::
_dynamic_initializer_for__FExpressionParserMoveableTypesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FExpressionParserMoveableTypes");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FExpressionParserMoveableTypesAutomationTestInstance,&local_18,
             false);
  FExpressionParserMoveableTypesAutomationTestInstance._0_8_ =
       &___7FExpressionParserMoveableTypes_Tests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FExpressionParserMoveableTypesAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FLexerIgnoreWhitespaceTestAutomationTestInstance'' @ 140f09260

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FLexerIgnoreWhitespaceTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLexerIgnoreWhitespaceTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLexerIgnoreWhitespaceTestAutomationTestInstance,&local_18,
             false);
  FLexerIgnoreWhitespaceTestAutomationTestInstance._0_8_ = &___7FLexerIgnoreWhitespaceTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLexerIgnoreWhitespaceTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FLexerParseStringTestAutomationTestInstance'' @ 140f092c0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FLexerParseStringTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLexerParseStringTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLexerParseStringTestAutomationTestInstance,&local_18,false);
  FLexerParseStringTestAutomationTestInstance._0_8_ = &___7FLexerParseStringTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLexerParseStringTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance'' @ 140f09320

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMRSWRecursiveAccessDetectorMultiThreadTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance,&local_18,false);
  FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance._0_8_ =
       &___7FMRSWRecursiveAccessDetectorMultiThreadTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance'' @ 140f09380

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMRSWRecursiveAccessDetectorSingleThreadTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance,&local_18,false);
  FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance._0_8_ =
       &___7FMRSWRecursiveAccessDetectorSingleThreadTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance'' @ 140f093e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMRSWRecursiveAccessDetectorTrivialRelocationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance,&local_18,
             false);
  FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance._0_8_ =
       &___7FMRSWRecursiveAccessDetectorTrivialRelocationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FParseExpressionSimpleTestAutomationTestInstance'' @ 140f09440

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FParseExpressionSimpleTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FParseExpressionSimpleTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FParseExpressionSimpleTestAutomationTestInstance,&local_18,
             false);
  FParseExpressionSimpleTestAutomationTestInstance._0_8_ = &___7FParseExpressionSimpleTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FParseExpressionSimpleTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FParseLineExtendedTestAutomationTestInstance'' @ 140f094a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FParseLineExtendedTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FParseLineExtendedTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FParseLineExtendedTestAutomationTestInstance,&local_18,false);
  FParseLineExtendedTestAutomationTestInstance._0_8_ = &___7FParseLineExtendedTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FParseLineExtendedTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_ConcurentReadTestAutomationTestInstance'' @ 140f09500

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_ConcurentReadTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_ConcurentReadTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ConcurentReadTestAutomationTestInstance,
             &local_18,false);
  FRWAccessDetector_ConcurentReadTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_ConcurentReadTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRWAccessDetector_ConcurentReadTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance'' @ 140f09560

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_ConcurentReadWriteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance,
             &local_18,false);
  FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_ConcurentReadWriteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_ConcurentWriteTestAutomationTestInstance'' @ 140f095c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_ConcurentWriteTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_ConcurentWriteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ConcurentWriteTestAutomationTestInstance,
             &local_18,false);
  FRWAccessDetector_ConcurentWriteTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_ConcurentWriteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_ConcurentWriteTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance'' @ 140f09620

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_FullyRecursiveConcurentReadTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance,&local_18,
             false);
  FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_FullyRecursiveConcurentReadTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance'' @ 140f09680

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_FullyRecursiveConcurentReadWriteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance,&local_18
             ,false);
  FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_FullyRecursiveConcurentReadWriteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance'' @ 140f096e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_FullyRecursiveConcurentWriteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance,&local_18,
             false);
  FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_FullyRecursiveConcurentWriteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance'' @ 140f09740

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_FullyRecursiveReadReentrance");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance,&local_18,false);
  FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_FullyRecursiveReadReentrance__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance'' @ 140f097a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_FullyRecursiveWriteReentrance");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance,&local_18,false)
  ;
  FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_FullyRecursiveWriteReentrance__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_ReadReentranceAutomationTestInstance'' @ 140f09800

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_ReadReentranceAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_ReadReentrance");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ReadReentranceAutomationTestInstance,
             &local_18,false);
  FRWAccessDetector_ReadReentranceAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_ReadReentrance__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRWAccessDetector_ReadReentranceAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance'' @ 140f09860

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_RecursiveConcurentReadTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance,&local_18,false);
  FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_RecursiveConcurentReadTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance'' @ 140f098c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_RecursiveConcurentReadWriteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance,&local_18,
             false);
  FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_RecursiveConcurentReadWriteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance'' @ 140f09920

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_RecursiveConcurentWriteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance,&local_18,false);
  FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_RecursiveConcurentWriteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance'' @ 140f09980

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_RecursiveReadReentrance");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance
             ,&local_18,false);
  FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_RecursiveReadReentrance__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance'' @ 140f099e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_RecursiveWriteReentrance");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance,&local_18,false);
  FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_RecursiveWriteReentrance__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRWAccessDetector_WriteReentranceAutomationTestInstance'' @ 140f09a40

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWAccessDetector_WriteReentranceAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWAccessDetector_WriteReentrance");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_WriteReentranceAutomationTestInstance,
             &local_18,false);
  FRWAccessDetector_WriteReentranceAutomationTestInstance._0_8_ =
       &___7FRWAccessDetector_WriteReentrance__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRWAccessDetector_WriteReentranceAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRWRecursiveAccessDetectorPerfTestAutomationTestInstance'' @ 140f09aa0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FRWRecursiveAccessDetectorPerfTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRWRecursiveAccessDetectorPerfTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRWRecursiveAccessDetectorPerfTestAutomationTestInstance,
             &local_18,false);
  FRWRecursiveAccessDetectorPerfTestAutomationTestInstance._0_8_ =
       &___7FRWRecursiveAccessDetectorPerfTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRWRecursiveAccessDetectorPerfTestAutomationTestInstance__)
  ;
  return;
}

// `dynamic_initializer_for_'FShortCircuitParserTestAutomationTestInstance'' @ 140f09b00

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FShortCircuitParserTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FShortCircuitParserTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FShortCircuitParserTestAutomationTestInstance,&local_18,false);
  FShortCircuitParserTestAutomationTestInstance._0_8_ = &___7FShortCircuitParserTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FShortCircuitParserTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GCommandLinePrefix'' @ 140f09b60

void __cdecl _dynamic_initializer_for__GCommandLinePrefix__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCommandLinePrefix__);
  return;
}

// `dynamic_initializer_for_'GPhasesAlreadyRun'' @ 140f09b80

void __cdecl _dynamic_initializer_for__GPhasesAlreadyRun__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPhasesAlreadyRun__);
  return;
}

// `dynamic_initializer_for_'GRegisterEngineNetworkCustomVersion'' @ 140f09ba0

void __cdecl _dynamic_initializer_for__GRegisterEngineNetworkCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FEngineNetworkCustomVersion::Guid;
  GRegisterEngineNetworkCustomVersion.Key = FEngineNetworkCustomVersion::Guid;
  FCurrentCustomVersions::Register
            (&local_18,0x2b,L"EngineNetworkVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterEngineNetworkCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterGameNetworkCustomVersion'' @ 140f09bf0

void __cdecl _dynamic_initializer_for__GRegisterGameNetworkCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FGameNetworkCustomVersion::Guid;
  GRegisterGameNetworkCustomVersion.Key = FGameNetworkCustomVersion::Guid;
  FCurrentCustomVersions::Register
            (&local_18,0,L"GameNetworkVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterGameNetworkCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterReleaseObjectVersion'' @ 140f09c40

void __cdecl _dynamic_initializer_for__GRegisterReleaseObjectVersion__(void)

{
  FGuid local_18;
  
  local_18 = FReleaseObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0x2c,L"Release",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterReleaseObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GlobalPlatformNameAliases'' @ 140f09c80

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__GlobalPlatformNameAliases__(void)

{
  atexit(_dynamic_atexit_destructor_for__GlobalPlatformNameAliases__);
  return;
}

// `dynamic_initializer_for_'LogInteractiveProcess'' @ 140f09ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInteractiveProcess__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInteractiveProcess,L"LogInteractiveProcess",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInteractiveProcess__);
  return;
}

// `dynamic_initializer_for_'LogMonitoredProcess'' @ 140f09ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMonitoredProcess__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMonitoredProcess,L"LogMonitoredProcess",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMonitoredProcess__);
  return;
}

// `dynamic_initializer_for_'LogNetVersion'' @ 140f09d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetVersion__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNetVersion,L"LogNetVersion",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNetVersion__);
  return;
}

// `dynamic_initializer_for_'LogOutputDevice'' @ 140f09d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOutputDevice__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOutputDevice,L"LogOutputDevice",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOutputDevice__);
  return;
}

// `dynamic_initializer_for_'SortedPlatformInfos'' @ 140f09da0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__SortedPlatformInfos__(void)

{
  atexit(_dynamic_atexit_destructor_for__SortedPlatformInfos__);
  return;
}

// `dynamic_initializer_for_'SortedPlatformNames'' @ 140f09dc0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__SortedPlatformNames__(void)

{
  atexit(_dynamic_atexit_destructor_for__SortedPlatformNames__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MemStackLargeBLock'' @ 140f09de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MemStackLargeBLock__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MemStackLargeBLock == (FThreadSafeStaticStat<FStat_STAT_MemStackLargeBLock>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_MemStackLargeBLock");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MemStackLargeBLock,*pFVar1,
               L"MemStack Large Block","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PageAllocatorFree'' @ 140f09e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PageAllocatorFree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PageAllocatorFree == (FThreadSafeStaticStat<FStat_STAT_PageAllocatorFree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PageAllocatorFree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageAllocatorFree,*pFVar1,
               L"PageAllocator Free","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PageAllocatorUsed'' @ 140f09f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PageAllocatorUsed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PageAllocatorUsed == (FThreadSafeStaticStat<FStat_STAT_PageAllocatorUsed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PageAllocatorUsed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageAllocatorUsed,*pFVar1,
               L"PageAllocator Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `scalar_deleting_destructor' @ 14189b2f0

void * __thiscall
FLexerIgnoreWhitespaceTest::_scalar_deleting_destructor_
          (FLexerIgnoreWhitespaceTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14189bd50

void * __thiscall
FLexerParseStringTest::_scalar_deleting_destructor_(FLexerParseStringTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14189bd90

void * __thiscall
FCStringGetVarArgsTestBase::_scalar_deleting_destructor_
          (FCStringGetVarArgsTestBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14189c310

void * __thiscall
FCStringGetVarArgsTest::_scalar_deleting_destructor_(FCStringGetVarArgsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14189d450

void * __thiscall
FCStringStrstrTest::_scalar_deleting_destructor_(FCStringStrstrTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14189db60

void * __thiscall
FCStringStrnstrTest::_scalar_deleting_destructor_(FCStringStrnstrTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14189e580

void * __thiscall
FCStringStrcpyTest::_scalar_deleting_destructor_(FCStringStrcpyTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14189fd90

void * __thiscall
FCStringStrcatTest::_scalar_deleting_destructor_(FCStringStrcatTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a02a0

void * __thiscall
FRWAccessDetector_ConcurentReadTest::_scalar_deleting_destructor_
          (FRWAccessDetector_ConcurentReadTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a07e0

void * __thiscall
FRWAccessDetector_ConcurentWriteTest::_scalar_deleting_destructor_
          (FRWAccessDetector_ConcurentWriteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a0d20

void * __thiscall
FRWAccessDetector_ConcurentReadWriteTest::_scalar_deleting_destructor_
          (FRWAccessDetector_ConcurentReadWriteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a11f0

void * __thiscall
FRWAccessDetector_WriteReentrance::_scalar_deleting_destructor_
          (FRWAccessDetector_WriteReentrance *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a16b0

void * __thiscall
FRWAccessDetector_ReadReentrance::_scalar_deleting_destructor_
          (FRWAccessDetector_ReadReentrance *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a1bd0

void * __thiscall
FRWAccessDetector_RecursiveConcurentReadTest::_scalar_deleting_destructor_
          (FRWAccessDetector_RecursiveConcurentReadTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a21a0

void * __thiscall
FRWAccessDetector_RecursiveConcurentWriteTest::_scalar_deleting_destructor_
          (FRWAccessDetector_RecursiveConcurentWriteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a2770

void * __thiscall
FRWAccessDetector_RecursiveConcurentReadWriteTest::_scalar_deleting_destructor_
          (FRWAccessDetector_RecursiveConcurentReadWriteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a2d40

void * __thiscall
FRWAccessDetector_RecursiveWriteReentrance::_scalar_deleting_destructor_
          (FRWAccessDetector_RecursiveWriteReentrance *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a32a0

void * __thiscall
FRWAccessDetector_RecursiveReadReentrance::_scalar_deleting_destructor_
          (FRWAccessDetector_RecursiveReadReentrance *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a37e0

void * __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::_scalar_deleting_destructor_
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a3db0

void * __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::_scalar_deleting_destructor_
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a4380

void * __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::_scalar_deleting_destructor_
          (FRWAccessDetector_FullyRecursiveConcurentReadWriteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a4950

void * __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::_scalar_deleting_destructor_
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a4ea0

void * __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::_scalar_deleting_destructor_
          (FRWAccessDetector_FullyRecursiveReadReentrance *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a5520

void * __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::_scalar_deleting_destructor_
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a5f00

void * __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::_scalar_deleting_destructor_
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a63c0

void * __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::_scalar_deleting_destructor_
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a6a30

void * __thiscall
FParseLineExtendedTest::_scalar_deleting_destructor_(FParseLineExtendedTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a74e0

void * __thiscall
FParseExpressionSimpleTest::_scalar_deleting_destructor_
          (FParseExpressionSimpleTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a8170

void * __thiscall
FRWRecursiveAccessDetectorPerfTest::_scalar_deleting_destructor_
          (FRWRecursiveAccessDetectorPerfTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a8440

void * __thiscall
Tests::FExpressionParserMoveableTypes::_scalar_deleting_destructor_
          (FExpressionParserMoveableTypes *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a8710

void * __thiscall
Tests::FExpressionParserAllocatedTypes::_scalar_deleting_destructor_
          (FExpressionParserAllocatedTypes *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a8c50

void * __thiscall
FShortCircuitParserTest::_scalar_deleting_destructor_(FShortCircuitParserTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418a9340

void * __thiscall FBasicLexerTest::_scalar_deleting_destructor_(FBasicLexerTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 1418a93e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_1>::<lambda_invoker_cdecl>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  undefined ***pppuVar2;
  undefined1 auStack_4b8 [32];
  TStringToken<wchar_t> local_498;
  undefined1 local_480;
  FHugeType local_478;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_498.TokenStart = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if ((pwVar1 <= local_498.TokenStart) && (local_498.TokenStart <= (param_1->Stream).End + -1)) {
    local_498.TokenEnd = local_498.TokenStart + 1;
    local_498.LineNumber = 0;
    local_498.CharacterIndex = (int)((longlong)local_498.TokenStart - (longlong)pwVar1 >> 1);
    local_480 = 1;
    if (local_498.TokenStart < (param_1->Stream).End) {
      if (*local_498.TokenStart == L'+') {
        local_58[0] = &___7__FInlineDataStorage_UFOperator_Tests___Impl__6B_;
        local_68 = (undefined1  [16])
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                   ::__l2::Global;
        TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_498,(FExpressionNode *)local_68);
        pppuVar2 = local_58;
        if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
            local_68._0_4_ == 0) {
          pppuVar2 = (undefined ***)0x0;
        }
        if (pppuVar2 != (undefined ***)0x0) {
          (*(code *)**pppuVar2)(pppuVar2,0);
        }
      }
      else if (*local_498.TokenStart == L'a') {
        local_478._padding_._0_4_ = 1;
        local_478._padding_._4_1_ = 1;
        *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
        local_478._padding_ = (longlong)&___7FHugeType_Tests__6B_;
        FExpressionNode::FExpressionNode<Tests::FHugeType>((FExpressionNode *)local_68,&local_478);
        TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_498,(FExpressionNode *)local_68);
        pppuVar2 = local_58;
        if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
            local_68._0_4_ == 0) {
          pppuVar2 = (undefined ***)0x0;
        }
        if (pppuVar2 != (undefined ***)0x0) {
          (*(code *)**pppuVar2)(pppuVar2,0);
        }
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1418a9590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_1>::<lambda_invoker_cdecl>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  undefined ***pppuVar2;
  undefined1 auStack_98 [32];
  TStringToken<wchar_t> local_78;
  undefined1 local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  undefined **local_40;
  uchar local_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.TokenStart = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if ((pwVar1 <= local_78.TokenStart) && (local_78.TokenStart <= (param_1->Stream).End + -1)) {
    local_78.TokenEnd = local_78.TokenStart + 1;
    local_78.LineNumber = 0;
    local_78.CharacterIndex = (int)((longlong)local_78.TokenStart - (longlong)pwVar1 >> 1);
    local_60 = 1;
    if (local_78.TokenStart < (param_1->Stream).End) {
      if (*local_78.TokenStart == L'+') {
        local_48 = &___7__FInlineDataStorage_UFOperator_Tests___Impl__6B_;
        local_58 = (undefined1  [16])
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                   ::__l2::Global;
        TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78,(FExpressionNode *)local_58);
        pppuVar2 = &local_48;
        if (((local_58._12_4_ == 0 && local_58._8_4_ == 0) && local_58._4_4_ == 0) &&
            local_58._0_4_ == 0) {
          pppuVar2 = (undefined ***)0x0;
        }
        if (pppuVar2 != (undefined ***)0x0) {
          (*(code *)**pppuVar2)(pppuVar2,0);
        }
      }
      else if (*local_78.TokenStart == L'a') {
        *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
        local_48 = &___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
        local_40 = &___7FMoveableType_Tests__6B_;
        local_58._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
             ::__l2::Global.A;
        local_58._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
             ::__l2::Global.B;
        local_58._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
             ::__l2::Global.C;
        local_58._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
             ::__l2::Global.D;
        local_38[0] = '\x01';
        local_38[1] = '\0';
        local_38[2] = '\0';
        local_38[3] = '\0';
        local_38[4] = '\x01';
        TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78,(FExpressionNode *)local_58);
        pppuVar2 = &local_48;
        if (((local_58._12_4_ == 0 && local_58._8_4_ == 0) && local_58._4_4_ == 0) &&
            local_58._0_4_ == 0) {
          pppuVar2 = (undefined ***)0x0;
        }
        if (pppuVar2 != (undefined ***)0x0) {
          (*(code *)**pppuVar2)(pppuVar2,0);
        }
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// operator<<<char8_t,TStringView<char>_> @ 1418a9ce0

TStringBuilderBase<char8_t> * __cdecl
operator<<<char8_t,TStringView<char>_>
          (TStringBuilderBase<char8_t> *param_1,TStringView<char> *param_2)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  pcVar1 = param_2->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_2->Size;
  uVar4 = (ulong64)iVar3;
  if (param_1->End < param_1->CurPos + uVar4) {
    TStringBuilderBase<char8_t>::Extend(param_1,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pcVar1,uVar4);
    param_1->CurPos = (uchar *)((longlong)pvVar2 + uVar4);
  }
  return param_1;
}

// AddLambda<`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_> @ 1418aa060

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FPageAllocator::LatchProtectedMode_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar6 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_50.Accessor = &local_68.AccessDetector;
  *(undefined8 *)param_1 = 0;
  local_50.AccessType = Reader;
  local_50.bDestroyed = false;
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_68.AccessDetector,&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_50.Accessor,&local_50);
  }
  if (bVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    local_50.Accessor = &local_68.AccessDetector;
    local_50.AccessType = Reader;
    local_50.bDestroyed = false;
    FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_68.AccessDetector,&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar6 = *puVar4;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_50.Accessor,&local_50);
    }
    iVar3 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar6;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Benchmark<5,void_(__cdecl&)(void)> @ 1418aa9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Benchmark<5,void_(__cdecl&)(void)>(wchar_t *param_1,_func___cdecl_void *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar3 = 0;
  dVar2 = __real_7fefffffffffffff;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    (*param_2)();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    iVar3 = iVar3 + 1;
    if (dVar2 <= dVar1) {
      dVar1 = dVar2;
    }
    dVar2 = dVar1;
  } while (iVar3 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  return;
}

// Call<`UE::TEventCount<unsigned_int>::Wait'::__l5::<lambda_1>_> @ 1418aab30

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::TEventCount<unsigned_int>::Wait_::__l5::<lambda_1>_>(void *param_1)

{
  return (**(uint **)param_1 & 0xfffffffe) == *(uint *)((longlong)param_1 + 8);
}

// Compile<char> @ 1418aac50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError> * __cdecl
ExpressionParser::Compile<char>
          (TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
           *__return_storage_ptr__,char *param_1,TTokenDefinitions<char> *param_2,
          FExpressionGrammar *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  size_t sVar5;
  TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError> *pTVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 auStackY_148 [32];
  TExpressionCompiler<char> local_118;
  TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_> local_f0;
  TExpressionTokenConsumer<char> local_e0;
  FText local_b8;
  char local_a8;
  TExpressionToken<char> *local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [8];
  TOptional<FExpressionError> local_80;
  TOptional<FExpressionError> local_68;
  TExpressionToken<char> *local_50;
  undefined8 local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e0.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Tokens.ArrayNum = 0;
  local_e0.Tokens.ArrayMax = 0;
  local_e0.Stream.Start = param_1;
  sVar5 = strlen(param_1);
  local_e0.Stream.End = param_1 + (int)sVar5;
  local_e0.Stream.ReadPos = param_1;
  if (param_1 != local_e0.Stream.End) {
    do {
      TTokenDefinitions<char>::ConsumeToken(param_2,&local_68,&local_e0);
      if (local_68.bIsSet != false) {
        local_a8 = local_68.bIsSet;
        FText::FText(&local_b8,(FText *)&local_68);
        if ((local_68.bIsSet != false) &&
           (local_68.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_68.TypedValue.Text.TextData.Reference + 0x10))();
        }
        if (local_a8 == '\0') goto LAB_1418aacdb;
        local_50 = (TExpressionToken<char> *)local_b8.TextData.Reference;
        if ((TExpressionToken<char> *)local_b8.TextData.Reference != (TExpressionToken<char> *)0x0)
        {
          (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                    (local_b8.TextData.Reference,local_90);
        }
        local_48 = CONCAT44(local_48._4_4_,local_b8.Flags);
        local_40 = 1;
        goto joined_r0x0001418aaeb9;
      }
    } while (local_e0.Stream.ReadPos != local_e0.Stream.End);
  }
  local_a8 = '\0';
LAB_1418aacdb:
  uVar1 = local_e0.Tokens._8_8_;
  local_50 = (TExpressionToken<char> *)local_e0.Tokens.AllocatorInstance.Data;
  local_40 = 0;
  local_a0 = (TExpressionToken<char> *)local_e0.Tokens.AllocatorInstance.Data;
  uStack_98._0_4_ = local_e0.Tokens.ArrayNum;
  uStack_98._4_4_ = local_e0.Tokens.ArrayMax;
  local_e0.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Tokens.ArrayNum = 0;
  local_e0.Tokens.ArrayMax = 0;
  uVar2 = local_e0.Tokens._8_8_;
  local_e0.Tokens.ArrayNum = (int)uVar1;
  local_e0.Tokens.ArrayMax = SUB84(uVar1,4);
  local_48._0_4_ = local_e0.Tokens.ArrayNum;
  local_48._4_4_ = local_e0.Tokens.ArrayMax;
  local_e0.Tokens._8_8_ = uVar2;
  DestructItems<TExpressionToken<char>,int>((TExpressionToken<char> *)0x0,0);
joined_r0x0001418aaeb9:
  if ((local_a8 != '\0') &&
     ((TExpressionToken<char> *)local_b8.TextData.Reference != (TExpressionToken<char> *)0x0)) {
    (**(code **)(*(longlong *)
                  &(((TExpressionToken<char> *)local_b8.TextData.Reference)->Node).TypeId + 0x10))()
    ;
  }
  DestructItems<TExpressionToken<char>,int>
            ((TExpressionToken<char> *)local_e0.Tokens.AllocatorInstance.Data,
             local_e0.Tokens.ArrayNum);
  if ((TExpressionToken<char> *)local_e0.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<char> *)0x0) {
    FMemory::Free(local_e0.Tokens.AllocatorInstance.Data);
  }
  uVar8 = (ulonglong)local_40;
  if ((2 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar7 = (code *)swi(3);
    pTVar6 = (TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
              *)(*pcVar7)();
    return pTVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<char>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    if ((local_40 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_50;
    if (local_50 != (TExpressionToken<char> *)0x0) {
      (**(code **)(*(longlong *)&(local_50->Node).TypeId + 8))(local_50,local_8c);
    }
    uVar8 = (ulonglong)local_40;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = (int)local_48;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if ((2 < local_40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    pcVar7 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[uVar8];
    if (pcVar7 == UE::Core::Private::
                  TDestructorCaller<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>_>::
                  Destruct) {
LAB_1418ab05b:
      DestructItems<TExpressionToken<char>,int>(local_50,(int)local_48);
      if (local_50 == (TExpressionToken<char> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_50);
      return __return_storage_ptr__;
    }
  }
  else {
    if ((local_40 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    iVar3 = (int)local_48;
    uVar8 = local_48 & 0xffffffff;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)local_50;
    local_f0.ArrayMax = local_48._4_4_;
    local_118.Tokens = &local_f0;
    local_50 = (TExpressionToken<char> *)0x0;
    local_f0.ArrayNum = (int)local_48;
    local_48 = 0;
    local_118.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Commands.ArrayNum = 0;
    local_118.Commands.ArrayMax = 0;
    local_118.CurrentTokenIndex = 0;
    local_118.Grammar = param_3;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
    if (0 < iVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,iVar3,&local_118.Commands.AllocatorInstance,0,
                 &local_118.Commands.ArrayMax);
    }
    TExpressionCompiler<char>::CompileGroup
              (&local_118,&local_80,(TExpressionToken<char> *)0x0,(FGuid *)0x0);
    if (local_80.bIsSet == false) {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_118.Commands.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_118.Commands.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
           local_118.Commands.ArrayMax;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      local_118.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Commands.ArrayNum = 0;
      local_118.Commands.ArrayMax = 0;
    }
    else {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_80.TypedValue.Text.TextData.Reference;
      if (local_80.TypedValue.Text.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TypedValue.Text.TextData.Reference + 8))
                  (local_80.TypedValue.Text.TextData.Reference,local_88);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_80.TypedValue.Text.Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if ((local_80.bIsSet != false) &&
         (local_80.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_80.TypedValue.Text.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TCompiledToken<char>,int>
              ((TCompiledToken<char> *)local_118.Commands.AllocatorInstance.Data,
               local_118.Commands.ArrayNum);
    if ((TCompiledToken<char> *)local_118.Commands.AllocatorInstance.Data !=
        (TCompiledToken<char> *)0x0) {
      FMemory::Free(local_118.Commands.AllocatorInstance.Data);
    }
    DestructItems<TExpressionToken<char>,int>
              ((TExpressionToken<char> *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    if ((TExpressionToken<char> *)local_f0.AllocatorInstance.Data != (TExpressionToken<char> *)0x0)
    {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    uVar8 = (ulonglong)local_40;
    if ((2 < local_40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    pcVar7 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[uVar8];
    if (pcVar7 == UE::Core::Private::
                  TDestructorCaller<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>_>::
                  Destruct) goto LAB_1418ab05b;
  }
  (*pcVar7)(&local_50);
  return __return_storage_ptr__;
}

// Compile<char> @ 1418ab090

TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError> * __cdecl
ExpressionParser::Compile<char>
          (TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
           *__return_storage_ptr__,
          TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_> *param_1,
          FExpressionGrammar *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [8];
  TOptional<FExpressionError> local_48;
  TExpressionCompiler<char> local_30;
  
  local_30.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Commands.ArrayNum = 0;
  local_30.Commands.ArrayMax = 0;
  local_30.CurrentTokenIndex = 0;
  uVar1 = param_1->ArrayNum;
  local_30.Grammar = param_2;
  local_30.Tokens = param_1;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,uVar1,&local_30.Commands.AllocatorInstance,0,&local_30.Commands.ArrayMax)
      ;
    }
    TExpressionCompiler<char>::CompileGroup
              (&local_30,&local_48,(TExpressionToken<char> *)0x0,(FGuid *)0x0);
    if (local_48.bIsSet == false) {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_30.Commands.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_30.Commands.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
           local_30.Commands.ArrayMax;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      local_30.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.Commands.ArrayNum = 0;
      local_30.Commands.ArrayMax = 0;
    }
    else {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_48.TypedValue.Text.TextData.Reference;
      if (local_48.TypedValue.Text.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TypedValue.Text.TextData.Reference + 8))
                  (local_48.TypedValue.Text.TextData.Reference,local_res10);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_48.TypedValue.Text.Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if ((local_48.bIsSet != false) &&
         (local_48.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_48.TypedValue.Text.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TCompiledToken<char>,int>
              ((TCompiledToken<char> *)local_30.Commands.AllocatorInstance.Data,
               local_30.Commands.ArrayNum);
    if ((TCompiledToken<char> *)local_30.Commands.AllocatorInstance.Data !=
        (TCompiledToken<char> *)0x0) {
      FMemory::Free(local_30.Commands.AllocatorInstance.Data);
    }
    DestructItems<TExpressionToken<char>,int>
              ((TExpressionToken<char> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// Compile<char8_t> @ 1418ab1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError> *
__cdecl ExpressionParser::Compile<char8_t>
                  (TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                   *__return_storage_ptr__,uchar *param_1,TTokenDefinitions<char8_t> *param_2,
                  FExpressionGrammar *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  size_t sVar5;
  TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  *pTVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 auStackY_148 [32];
  TExpressionCompiler<char8_t> local_118;
  TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_> local_f0;
  TExpressionTokenConsumer<char8_t> local_e0;
  FText local_b8;
  char local_a8;
  TExpressionToken<char8_t> *local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [8];
  TOptional<FExpressionError> local_80;
  TOptional<FExpressionError> local_68;
  TExpressionToken<char8_t> *local_50;
  undefined8 local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e0.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Tokens.ArrayNum = 0;
  local_e0.Tokens.ArrayMax = 0;
  local_e0.Stream.Start = param_1;
  sVar5 = strlen((char *)param_1);
  local_e0.Stream.End = param_1 + (int)sVar5;
  local_e0.Stream.ReadPos = param_1;
  if (param_1 != local_e0.Stream.End) {
    do {
      TTokenDefinitions<char8_t>::ConsumeToken(param_2,&local_68,&local_e0);
      if (local_68.bIsSet != false) {
        local_a8 = local_68.bIsSet;
        FText::FText(&local_b8,(FText *)&local_68);
        if ((local_68.bIsSet != false) &&
           (local_68.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_68.TypedValue.Text.TextData.Reference + 0x10))();
        }
        if (local_a8 == '\0') goto LAB_1418ab24b;
        local_50 = (TExpressionToken<char8_t> *)local_b8.TextData.Reference;
        if ((TExpressionToken<char8_t> *)local_b8.TextData.Reference !=
            (TExpressionToken<char8_t> *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                    (local_b8.TextData.Reference,local_90);
        }
        local_48 = CONCAT44(local_48._4_4_,local_b8.Flags);
        local_40 = 1;
        goto joined_r0x0001418ab429;
      }
    } while (local_e0.Stream.ReadPos != local_e0.Stream.End);
  }
  local_a8 = '\0';
LAB_1418ab24b:
  uVar1 = local_e0.Tokens._8_8_;
  local_50 = (TExpressionToken<char8_t> *)local_e0.Tokens.AllocatorInstance.Data;
  local_40 = 0;
  local_a0 = (TExpressionToken<char8_t> *)local_e0.Tokens.AllocatorInstance.Data;
  uStack_98._0_4_ = local_e0.Tokens.ArrayNum;
  uStack_98._4_4_ = local_e0.Tokens.ArrayMax;
  local_e0.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Tokens.ArrayNum = 0;
  local_e0.Tokens.ArrayMax = 0;
  uVar2 = local_e0.Tokens._8_8_;
  local_e0.Tokens.ArrayNum = (int)uVar1;
  local_e0.Tokens.ArrayMax = SUB84(uVar1,4);
  local_48._0_4_ = local_e0.Tokens.ArrayNum;
  local_48._4_4_ = local_e0.Tokens.ArrayMax;
  local_e0.Tokens._8_8_ = uVar2;
  DestructItems<TExpressionToken<char8_t>,int>((TExpressionToken<char8_t> *)0x0,0);
joined_r0x0001418ab429:
  if ((local_a8 != '\0') &&
     ((TExpressionToken<char8_t> *)local_b8.TextData.Reference != (TExpressionToken<char8_t> *)0x0))
  {
    (**(code **)(*(longlong *)
                  &(((TExpressionToken<char8_t> *)local_b8.TextData.Reference)->Node).TypeId + 0x10)
    )();
  }
  DestructItems<TExpressionToken<char8_t>,int>
            ((TExpressionToken<char8_t> *)local_e0.Tokens.AllocatorInstance.Data,
             local_e0.Tokens.ArrayNum);
  if ((TExpressionToken<char8_t> *)local_e0.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<char8_t> *)0x0) {
    FMemory::Free(local_e0.Tokens.AllocatorInstance.Data);
  }
  uVar8 = (ulonglong)local_40;
  if ((2 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar7 = (code *)swi(3);
    pTVar6 = (TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
              *)(*pcVar7)();
    return pTVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<char>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8 + 4) == '\0') {
    if ((local_40 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_50;
    if (local_50 != (TExpressionToken<char8_t> *)0x0) {
      (**(code **)(*(longlong *)&(local_50->Node).TypeId + 8))(local_50,local_8c);
    }
    uVar8 = (ulonglong)local_40;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = (int)local_48;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if ((2 < local_40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    pcVar7 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<char8_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[uVar8];
    if (pcVar7 == UE::Core::Private::
                  TDestructorCaller<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>_>
                  ::Destruct) {
LAB_1418ab5cb:
      DestructItems<TExpressionToken<char8_t>,int>(local_50,(int)local_48);
      if (local_50 == (TExpressionToken<char8_t> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_50);
      return __return_storage_ptr__;
    }
  }
  else {
    if ((local_40 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    iVar3 = (int)local_48;
    uVar8 = local_48 & 0xffffffff;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)local_50;
    local_f0.ArrayMax = local_48._4_4_;
    local_118.Tokens = &local_f0;
    local_50 = (TExpressionToken<char8_t> *)0x0;
    local_f0.ArrayNum = (int)local_48;
    local_48 = 0;
    local_118.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Commands.ArrayNum = 0;
    local_118.Commands.ArrayMax = 0;
    local_118.CurrentTokenIndex = 0;
    local_118.Grammar = param_3;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
    if (0 < iVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,iVar3,&local_118.Commands.AllocatorInstance,0,
                 &local_118.Commands.ArrayMax);
    }
    TExpressionCompiler<char8_t>::CompileGroup
              (&local_118,&local_80,(TExpressionToken<char8_t> *)0x0,(FGuid *)0x0);
    if (local_80.bIsSet == false) {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_118.Commands.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_118.Commands.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
           local_118.Commands.ArrayMax;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      local_118.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Commands.ArrayNum = 0;
      local_118.Commands.ArrayMax = 0;
    }
    else {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_80.TypedValue.Text.TextData.Reference;
      if (local_80.TypedValue.Text.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TypedValue.Text.TextData.Reference + 8))
                  (local_80.TypedValue.Text.TextData.Reference,local_88);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_80.TypedValue.Text.Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if ((local_80.bIsSet != false) &&
         (local_80.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_80.TypedValue.Text.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TCompiledToken<char8_t>,int>
              ((TCompiledToken<char8_t> *)local_118.Commands.AllocatorInstance.Data,
               local_118.Commands.ArrayNum);
    if ((TCompiledToken<char8_t> *)local_118.Commands.AllocatorInstance.Data !=
        (TCompiledToken<char8_t> *)0x0) {
      FMemory::Free(local_118.Commands.AllocatorInstance.Data);
    }
    DestructItems<TExpressionToken<char8_t>,int>
              ((TExpressionToken<char8_t> *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    if ((TExpressionToken<char8_t> *)local_f0.AllocatorInstance.Data !=
        (TExpressionToken<char8_t> *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    uVar8 = (ulonglong)local_40;
    if ((2 < local_40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar7 = (code *)swi(3);
      pTVar6 = (TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar7)();
      return pTVar6;
    }
    pcVar7 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<char8_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[uVar8];
    if (pcVar7 == UE::Core::Private::
                  TDestructorCaller<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>_>
                  ::Destruct) goto LAB_1418ab5cb;
  }
  (*pcVar7)(&local_50);
  return __return_storage_ptr__;
}

// Compile<char8_t> @ 1418ab600

TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError> *
__cdecl ExpressionParser::Compile<char8_t>
                  (TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                   *__return_storage_ptr__,
                  TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_> *param_1,
                  FExpressionGrammar *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [8];
  TOptional<FExpressionError> local_48;
  TExpressionCompiler<char8_t> local_30;
  
  local_30.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Commands.ArrayNum = 0;
  local_30.Commands.ArrayMax = 0;
  local_30.CurrentTokenIndex = 0;
  uVar1 = param_1->ArrayNum;
  local_30.Grammar = param_2;
  local_30.Tokens = param_1;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,uVar1,&local_30.Commands.AllocatorInstance,0,&local_30.Commands.ArrayMax)
      ;
    }
    TExpressionCompiler<char8_t>::CompileGroup
              (&local_30,&local_48,(TExpressionToken<char8_t> *)0x0,(FGuid *)0x0);
    if (local_48.bIsSet == false) {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_30.Commands.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_30.Commands.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
           local_30.Commands.ArrayMax;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      local_30.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.Commands.ArrayNum = 0;
      local_30.Commands.ArrayMax = 0;
    }
    else {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_48.TypedValue.Text.TextData.Reference;
      if (local_48.TypedValue.Text.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TypedValue.Text.TextData.Reference + 8))
                  (local_48.TypedValue.Text.TextData.Reference,local_res10);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_48.TypedValue.Text.Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if ((local_48.bIsSet != false) &&
         (local_48.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_48.TypedValue.Text.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TCompiledToken<char8_t>,int>
              ((TCompiledToken<char8_t> *)local_30.Commands.AllocatorInstance.Data,
               local_30.Commands.ArrayNum);
    if ((TCompiledToken<char8_t> *)local_30.Commands.AllocatorInstance.Data !=
        (TCompiledToken<char8_t> *)0x0) {
      FMemory::Free(local_30.Commands.AllocatorInstance.Data);
    }
    DestructItems<TExpressionToken<char8_t>,int>
              ((TExpressionToken<char8_t> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// Compile<wchar_t> @ 1418ab730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError> *
__cdecl ExpressionParser::Compile<wchar_t>
                  (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                   *__return_storage_ptr__,wchar_t *param_1,TTokenDefinitions<wchar_t> *param_2,
                  FExpressionGrammar *param_3)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_60;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  Lex<wchar_t>(&local_50,param_1,param_2);
  uVar4 = (ulonglong)local_50.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    if (local_50.Variant.TypeIndex != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    (__return_storage_ptr__->Variant)._padding_ = local_50.Variant._padding_;
    if ((FScriptContainerElement *)local_50.Variant._padding_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_50.Variant._padding_ + 8))
                (local_50.Variant._padding_,local_68);
    }
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = (int)local_50.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  else {
    if (local_50.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)local_50.Variant._padding_;
    local_60.ArrayNum = (int)local_50.Variant._padding_;
    local_60.ArrayMax = local_50.Variant._padding_._4_4_;
    local_50.Variant._padding_ = 0;
    local_50.Variant._padding_ = 0;
    Compile<wchar_t>(__return_storage_ptr__,&local_60,param_3);
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  return __return_storage_ptr__;
}

// Compile<wchar_t> @ 1418ab900

TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError> *
__cdecl ExpressionParser::Compile<wchar_t>
                  (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                   *__return_storage_ptr__,
                  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> *param_1,
                  FExpressionGrammar *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res10 [8];
  TOptional<FExpressionError> local_48;
  TExpressionCompiler<wchar_t> local_30;
  
  local_30.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Commands.ArrayNum = 0;
  local_30.Commands.ArrayMax = 0;
  local_30.CurrentTokenIndex = 0;
  uVar1 = param_1->ArrayNum;
  local_30.Grammar = param_2;
  local_30.Tokens = param_1;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,uVar1,&local_30.Commands.AllocatorInstance,0,&local_30.Commands.ArrayMax)
      ;
    }
    TExpressionCompiler<wchar_t>::CompileGroup
              (&local_30,&local_48,(TExpressionToken<wchar_t> *)0x0,(FGuid *)0x0);
    if (local_48.bIsSet == false) {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_30.Commands.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_30.Commands.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
           local_30.Commands.ArrayMax;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      local_30.Commands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.Commands.ArrayNum = 0;
      local_30.Commands.ArrayMax = 0;
    }
    else {
      (__return_storage_ptr__->Variant)._padding_ =
           (longlong)local_48.TypedValue.Text.TextData.Reference;
      if (local_48.TypedValue.Text.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TypedValue.Text.TextData.Reference + 8))
                  (local_48.TypedValue.Text.TextData.Reference,local_res10);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_48.TypedValue.Text.Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if ((local_48.bIsSet != false) &&
         (local_48.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_48.TypedValue.Text.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TCompiledToken<wchar_t>,int>
              ((TCompiledToken<wchar_t> *)local_30.Commands.AllocatorInstance.Data,
               local_30.Commands.ArrayNum);
    if ((TCompiledToken<wchar_t> *)local_30.Commands.AllocatorInstance.Data !=
        (TCompiledToken<wchar_t> *)0x0) {
      FMemory::Free(local_30.Commands.AllocatorInstance.Data);
    }
    DestructItems<TExpressionToken<wchar_t>,int>
              ((TExpressionToken<wchar_t> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ConsumeSymbol<Tests::FAnd> @ 1418aba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<Tests::FAnd>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *_Str1;
  wchar_t *pwVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  TStringToken<wchar_t> local_88;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  _Str1 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if (((pwVar1 <= _Str1) && (_Str1 <= (param_1->Stream).End + -2)) && (*_Str1 == u___[0])) {
    iVar2 = wcsncmp(_Str1,L"&&",2);
    if (iVar2 == 0) {
      local_88.TokenEnd = _Str1 + 2;
      local_88.CharacterIndex = (int)((longlong)_Str1 - (longlong)pwVar1 >> 1);
      local_58[0] = &___7__FInlineDataStorage_UFAnd_Tests___Impl__6B_;
      local_88.LineNumber = 0;
      local_70 = 1;
      local_68._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
           ::__l2::Global.A;
      local_68._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
           ::__l2::Global.B;
      local_68._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
           ::__l2::Global.C;
      local_68._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
           ::__l2::Global.D;
      local_88.TokenStart = _Str1;
      TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88,(FExpressionNode *)local_68);
      pppuVar3 = local_58;
      if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
          local_68._0_4_ == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if (pppuVar3 != (undefined ***)0x0) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<`anonymous_namespace'::FDropFrame> @ 1418abb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FDropFrame>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *_Str1;
  wchar_t *pwVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  TStringToken<wchar_t> local_88;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  _Str1 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if (((pwVar1 <= _Str1) && (_Str1 <= (param_1->Stream).End + -2)) && (*_Str1 == u_df[0])) {
    iVar2 = wcsncmp(_Str1,L"df",2);
    if (iVar2 == 0) {
      local_88.TokenEnd = _Str1 + 2;
      local_88.CharacterIndex = (int)((longlong)_Str1 - (longlong)pwVar1 >> 1);
      local_58[0] = &::Impl::FInlineDataStorage<FDropFrame>::_vftable_;
      local_88.LineNumber = 0;
      local_70 = 1;
      local_68._0_4_ = _DAT_154b7f9b0;
      local_68._4_4_ = DAT_154b7f9b0_4;
      local_68._8_4_ = (uint)uRam0000000154b7f9b8;
      local_68._12_4_ = uRam0000000154b7f9b8._4_4_;
      local_88.TokenStart = _Str1;
      TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88,(FExpressionNode *)local_68);
      pppuVar3 = local_58;
      if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
          local_68._0_4_ == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if ((pppuVar3 != (undefined ***)0x0) &&
         ((code *)**pppuVar3 !=
          ::Impl::FInlineDataStorage<`anonymous_namespace'::FDropFrame>::
          _scalar_deleting_destructor_)) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<`anonymous_namespace'::FFramesPerSecond> @ 1418abc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FFramesPerSecond>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *_Str1;
  wchar_t *pwVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  TStringToken<wchar_t> local_88;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  _Str1 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if (((pwVar1 <= _Str1) && (_Str1 <= (param_1->Stream).End + -3)) && (*_Str1 == u_fps[0])) {
    iVar2 = wcsncmp(_Str1,L"fps",3);
    if (iVar2 == 0) {
      local_88.TokenEnd = _Str1 + 3;
      local_88.CharacterIndex = (int)((longlong)_Str1 - (longlong)pwVar1 >> 1);
      local_58[0] = &::Impl::FInlineDataStorage<FFramesPerSecond>::_vftable_;
      local_88.LineNumber = 0;
      local_70 = 1;
      local_68._0_4_ = _DAT_154b7f990;
      local_68._4_4_ = DAT_154b7f990_4;
      local_68._8_4_ = (uint)uRam0000000154b7f998;
      local_68._12_4_ = uRam0000000154b7f998._4_4_;
      local_88.TokenStart = _Str1;
      TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88,(FExpressionNode *)local_68);
      pppuVar3 = local_58;
      if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
          local_68._0_4_ == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if ((pppuVar3 != (undefined ***)0x0) &&
         ((code *)**pppuVar3 !=
          ::Impl::FInlineDataStorage<`anonymous_namespace'::FFramesPerSecond>::
          _scalar_deleting_destructor_)) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<`anonymous_namespace'::FNonDropFrame> @ 1418abdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FNonDropFrame>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *_Str1;
  wchar_t *pwVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  TStringToken<wchar_t> local_88;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  _Str1 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if (((pwVar1 <= _Str1) && (_Str1 <= (param_1->Stream).End + -3)) && (*_Str1 == u_ndf[0])) {
    iVar2 = wcsncmp(_Str1,L"ndf",3);
    if (iVar2 == 0) {
      local_88.TokenEnd = _Str1 + 3;
      local_88.CharacterIndex = (int)((longlong)_Str1 - (longlong)pwVar1 >> 1);
      local_58[0] = &::Impl::FInlineDataStorage<FNonDropFrame>::_vftable_;
      local_88.LineNumber = 0;
      local_70 = 1;
      local_68._0_4_ = _DAT_154b7f9a0;
      local_68._4_4_ = DAT_154b7f9a0_4;
      local_68._8_4_ = (uint)uRam0000000154b7f9a8;
      local_68._12_4_ = uRam0000000154b7f9a8._4_4_;
      local_88.TokenStart = _Str1;
      TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88,(FExpressionNode *)local_68);
      pppuVar3 = local_58;
      if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
          local_68._0_4_ == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if ((pppuVar3 != (undefined ***)0x0) &&
         ((code *)**pppuVar3 !=
          ::Impl::FInlineDataStorage<`anonymous_namespace'::FNonDropFrame>::
          _scalar_deleting_destructor_)) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<Tests::FOr> @ 1418abef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<Tests::FOr>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *_Str1;
  wchar_t *pwVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  TStringToken<wchar_t> local_88;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  _Str1 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if (((pwVar1 <= _Str1) && (_Str1 <= (param_1->Stream).End + -2)) && (*_Str1 == u___[0])) {
    iVar2 = wcsncmp(_Str1,L"||",2);
    if (iVar2 == 0) {
      local_88.TokenEnd = _Str1 + 2;
      local_88.CharacterIndex = (int)((longlong)_Str1 - (longlong)pwVar1 >> 1);
      local_58[0] = &___7__FInlineDataStorage_UFOr_Tests___Impl__6B_;
      local_88.LineNumber = 0;
      local_70 = 1;
      local_68._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
           ::__l2::Global.A;
      local_68._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
           ::__l2::Global.B;
      local_68._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
           ::__l2::Global.C;
      local_68._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
           ::__l2::Global.D;
      local_88.TokenStart = _Str1;
      TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88,(FExpressionNode *)local_68);
      pppuVar3 = local_58;
      if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
          local_68._0_4_ == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if (pppuVar3 != (undefined ***)0x0) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<`anonymous_namespace'::FSeconds> @ 1418ac010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FSeconds>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *_Str1;
  wchar_t *pwVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  TStringToken<wchar_t> local_88;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  _Str1 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if (((pwVar1 <= _Str1) && (_Str1 <= (param_1->Stream).End + -1)) && (*_Str1 == u_s[0])) {
    iVar2 = wcsncmp(_Str1,L"s",1);
    if (iVar2 == 0) {
      local_88.TokenEnd = _Str1 + 1;
      local_88.CharacterIndex = (int)((longlong)_Str1 - (longlong)pwVar1 >> 1);
      local_58[0] = &::Impl::FInlineDataStorage<FSeconds>::_vftable_;
      local_88.LineNumber = 0;
      local_70 = 1;
      local_68._0_4_ = _DAT_154b7f980;
      local_68._4_4_ = DAT_154b7f980_4;
      local_68._8_4_ = (uint)uRam0000000154b7f988;
      local_68._12_4_ = uRam0000000154b7f988._4_4_;
      local_88.TokenStart = _Str1;
      TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88,(FExpressionNode *)local_68);
      pppuVar3 = local_58;
      if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
          local_68._0_4_ == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if ((pppuVar3 != (undefined ***)0x0) &&
         ((code *)**pppuVar3 !=
          ::Impl::FInlineDataStorage<`anonymous_namespace'::FSeconds>::_scalar_deleting_destructor_)
         ) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// DefaultConstructItems<FMRSWRecursiveAccessDetector,int> @ 1418ac260

void __cdecl DefaultConstructItems<FMRSWRecursiveAccessDetector,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<TCompiledToken<char>,int> @ 1418ac800

void __cdecl DestructItems<TCompiledToken<char>,int>(TCompiledToken<char> *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)&param_1->field_0x4;
    do {
      piVar1 = piVar2 + 3;
      if (((piVar2[2] == 0 && piVar2[-1] == 0) && piVar2[1] == 0) && *piVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      piVar2 = piVar2 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TCompiledToken<char8_t>,int> @ 1418ac860

void __cdecl
DestructItems<TCompiledToken<char8_t>,int>(TCompiledToken<char8_t> *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)&param_1->field_0x4;
    do {
      piVar1 = piVar2 + 3;
      if (((piVar2[2] == 0 && piVar2[-1] == 0) && piVar2[1] == 0) && *piVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      piVar2 = piVar2 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TExpressionCompiler<char>::FWrappedOperator,int> @ 1418ac8c0

void __cdecl
DestructItems<TExpressionCompiler<char>::FWrappedOperator,int>
          (FWrappedOperator *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)&(param_1->Token).field_0x4;
    do {
      piVar1 = piVar2 + 3;
      if (((piVar2[2] == 0 && piVar2[-1] == 0) && piVar2[1] == 0) && *piVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      piVar2 = piVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TExpressionCompiler<char8_t>::FWrappedOperator,int> @ 1418ac920

void __cdecl
DestructItems<TExpressionCompiler<char8_t>::FWrappedOperator,int>
          (FWrappedOperator *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)&(param_1->Token).field_0x4;
    do {
      piVar1 = piVar2 + 3;
      if (((piVar2[2] == 0 && piVar2[-1] == 0) && piVar2[1] == 0) && *piVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      piVar2 = piVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TExpressionCompiler<wchar_t>::FWrappedOperator,int> @ 1418ac980

void __cdecl
DestructItems<TExpressionCompiler<wchar_t>::FWrappedOperator,int>
          (FWrappedOperator *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)&(param_1->Token).field_0x4;
    do {
      piVar1 = piVar2 + 3;
      if (((piVar2[2] == 0 && piVar2[-1] == 0) && piVar2[1] == 0) && *piVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      piVar2 = piVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TExpressionToken<char>,int> @ 1418ac9e0

void __cdecl DestructItems<TExpressionToken<char>,int>(TExpressionToken<char> *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    puVar2 = &(param_1->Node).TypeId.B;
    do {
      piVar1 = (int *)(puVar2 + 3);
      if (((puVar2[2] == 0 && ((FGuid *)(puVar2 + -1))->A == 0) && puVar2[1] == 0) && *puVar2 == 0)
      {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      puVar2 = puVar2 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TExpressionToken<char8_t>,int> @ 1418aca40

void __cdecl
DestructItems<TExpressionToken<char8_t>,int>(TExpressionToken<char8_t> *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    puVar2 = &(param_1->Node).TypeId.B;
    do {
      piVar1 = (int *)(puVar2 + 3);
      if (((puVar2[2] == 0 && ((FGuid *)(puVar2 + -1))->A == 0) && puVar2[1] == 0) && *puVar2 == 0)
      {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      puVar2 = puVar2 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_>,int> @ 1418acaa0

void __cdecl
DestructItems<TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_>,int>
          (TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_> *param_1,int param_2)

{
  FSlowTask *pFVar1;
  ITextData *pIVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlowTask *)0x0) {
      pIVar2 = (pFVar1->FrameMessage).TextData.Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pIVar2 = (pFVar1->DefaultMessage).TextData.Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      operator_delete(pFVar1,0x60);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMRSWRecursiveAccessDetector,int> @ 1418acb10

void __cdecl
DestructItems<FMRSWRecursiveAccessDetector,int>(FMRSWRecursiveAccessDetector *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *pFVar12;
  longlong lVar13;
  atomic<unsigned___int64> local_res18 [2];
  atomic<unsigned___int64> *local_48;
  atomic<unsigned___int64> *local_40;
  
  pvVar4 = ThreadLocalStoragePointer;
  do {
    if (param_2 == 0) {
      return;
    }
    uVar9 = 0;
    local_res18[0] = (atomic<unsigned___int64>)0x0;
    lVar13 = 0;
    while( true ) {
      lVar1 = *(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8);
      if ((*(uint *)(lVar1 + 0xb44) & 1) == 0) {
        *(uint *)(lVar1 + 0xb44) = *(uint *)(lVar1 + 0xb44) | 1;
        __tlregdtor(`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
                    _dynamic_atexit_destructor_for__DestructionSentinelStackTls__);
      }
      if (uVar9 == *(uint *)(lVar1 + 0xb30)) break;
      if ((*(uint *)(lVar1 + 0xb44) & 1) == 0) {
        *(uint *)(lVar1 + 0xb44) = *(uint *)(lVar1 + 0xb44) | 1;
        __tlregdtor(`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
                    _dynamic_atexit_destructor_for__DestructionSentinelStackTls__);
      }
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(lVar1 + 0xb30)) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = lVar1 + 0xb08;
      if (*(longlong *)(lVar1 + 0xb28) != 0) {
        lVar11 = *(longlong *)(lVar1 + 0xb28);
      }
      piVar2 = *(int **)(lVar13 + lVar11);
      if (*(FMRSWRecursiveAccessDetector **)(piVar2 + 2) == param_1) {
        *(undefined1 *)(piVar2 + 4) = 1;
        if (*piVar2 == 0) {
          local_res18[0]._0_4_ =
               local_res18[0]._0_4_ + 1 & 0xfffff | local_res18[0]._0_4_ & 0xfff00000;
          FMRSWRecursiveAccessDetector::RemoveReaderFromTls(param_1);
        }
        else {
          local_res18[0]._0_4_ =
               (local_res18[0]._0_4_ & 0xfff00000) + 0x100000 | local_res18[0]._0_4_ & 0xfffff;
          DVar7 = GetCurrentThreadId();
          local_res18[0]._4_4_ = DVar7 + 1;
        }
        lVar1 = *(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8);
        if ((*(uint *)(lVar1 + 0xb44) & 1) == 0) {
          *(uint *)(lVar1 + 0xb44) = *(uint *)(lVar1 + 0xb44) | 1;
          __tlregdtor(`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
                      _dynamic_atexit_destructor_for__DestructionSentinelStackTls__);
        }
        uVar6 = 0;
        if ((int)uVar9 < *(int *)(lVar1 + 0xb30)) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                  (lVar1 + 0xb08);
        if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)
             (lVar1 + 0xb28) !=
            (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)0x0) {
          pFVar12 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)
                     (lVar1 + 0xb28);
        }
        iVar8 = *(int *)(lVar1 + 0xb30) + ~uVar9;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar12->InlineData + (longlong)(int)uVar9 * 8,
                  pFVar12->InlineData + (longlong)(*(int *)(lVar1 + 0xb30) - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        *(int *)(lVar1 + 0xb30) = *(int *)(lVar1 + 0xb30) + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                  (8,8,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                       (lVar1 + 0xb08),*(int *)(lVar1 + 0xb30),(int *)(lVar1 + 0xb34));
        uVar9 = uVar9 - 1;
        lVar13 = lVar13 + -8;
      }
      uVar9 = uVar9 + 1;
      lVar13 = lVar13 + 8;
    }
    if ((param_1->State != local_res18[0]) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      local_40 = local_res18;
      local_48 = &param_1->State;
      `FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector'::__l15::<lambda_1>::operator()
                (&local_48);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

// DestructItems<UE::Tasks::Private::FTaskHandle,int> @ 1418acde0

void __cdecl DestructItems<UE::Tasks::Private::FTaskHandle,int>(FTaskHandle *param_1,int param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = (param_1->Pimpl).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar3->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Evaluate<char> @ 1418ae060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<char>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_> *param_1,
          TIOperatorEvaluationEnvironment<char> *param_2)

{
  ITextData *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  code *pcVar10;
  TExpressionToken<char> *pTVar11;
  FTextFormat *pFVar12;
  FText *pFVar13;
  uchar *puVar14;
  FExpressionNode *pFVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_4d8 [32];
  ForAnyElementType local_488;
  undefined8 local_480;
  ForAnyElementType local_478;
  undefined8 local_470;
  uint local_468;
  int local_464;
  int local_460 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_458;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_448;
  undefined4 local_438 [2];
  TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_> *local_430;
  ForAnyElementType *local_428;
  FFormatArgumentValue local_420;
  FFormatArgumentValue local_400;
  TIOperatorEvaluationEnvironment<char> *local_3e0;
  undefined1 local_3d8 [4];
  undefined1 local_3d4 [4];
  undefined1 local_3d0 [8];
  TValueOrError_ErrorProxy<FExpressionError_&> local_3c8;
  FAnsiString local_3c0;
  FAnsiString local_3b0;
  FExpressionNode local_398;
  FExpressionNode local_358;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FTextFormat local_2a8;
  FTextFormat local_298;
  FExpressionNode local_288;
  FExpressionNode local_248;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  FExpressionNode local_1e8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong *local_188;
  uint local_180;
  byte local_148;
  FExpressionNode local_138;
  byte local_f8;
  undefined1 local_e8 [64];
  byte local_a8;
  undefined1 local_98 [64];
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  uVar6 = 0;
  uVar22 = 0;
  local_438[0] = 0;
  local_428 = &local_478;
  iVar8 = param_1->ArrayNum;
  local_478.Data = (FScriptContainerElement *)0x0;
  local_470 = 0;
  local_488.Data = (FScriptContainerElement *)0x0;
  local_480 = 0;
  local_468 = 0;
  local_430 = param_1;
  local_3e0 = param_2;
  uVar21 = uVar6;
  if (0 < iVar8) {
    do {
      uVar22 = local_468;
      uVar5 = 0;
      if ((int)local_468 < iVar8) {
        uVar5 = ~local_468 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        uVar6 = (uint)local_480;
      }
      pFVar18 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x70;
      uVar22 = uVar6;
      switch(*(undefined4 *)(pFVar18 + 0x58)) {
      case 0:
        if ((local_488.Data <= (FScriptContainerElement *)&local_468) &&
           ((FScriptContainerElement *)&local_468 <
            local_488.Data + (longlong)(int)local_480._4_4_ * 4)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          uVar6 = (uint)local_480;
        }
        if (uVar6 == local_480._4_4_) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_488,(int *)((longlong)&local_480 + 4));
        }
        local_480 = CONCAT44(local_480._4_4_,uVar6 + 1);
        *(uint *)(local_488.Data + (longlong)(int)uVar6 * 4) = local_468;
        goto LAB_1418aead0;
      case 1:
      case 2:
        if ((int)uVar6 < 1) {
          local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_448.ArrayNum = 0;
          local_448.ArrayMax = 0;
          FAnsiString::ConstructFromPtrSize
                    (&local_3b0,*(char **)(pFVar18 + 0x40),
                     *(int *)(pFVar18 + 0x48) - *(int *)(pFVar18 + 0x40));
          pFVar13 = FText::FromString(&local_2b8,&local_3b0);
          local_400.Type = Text;
          FText::FText((FText *)&local_400.TextValue,pFVar13);
          if ((local_400.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (((local_448.AllocatorInstance.Data <= &local_400) &&
              (&local_400 <
               (FFormatArgumentValue *)
               (local_448.AllocatorInstance.Data + (longlong)local_448.ArrayMax * 0x20))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          iVar8 = local_448.ArrayNum;
          if (local_448.ArrayNum == local_448.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_448.AllocatorInstance,&local_448.ArrayMax);
          }
          local_448.ArrayNum = iVar8 + 1;
          lVar20 = (longlong)iVar8 * 0x20;
          *(Type *)&local_448.AllocatorInstance.Data[lVar20].field_0x0 = local_400.Type;
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(float *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               local_400.field1_0x8.FloatValue;
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(undefined8 *)&local_448.AllocatorInstance.Data[lVar20 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_448.AllocatorInstance.Data + lVar20 + 0x18) = 0;
          if ((local_400.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_448.AllocatorInstance.Data + lVar20 + 0x10),
                           (FText *)&local_400.TextValue),
             local_400.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_400.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_308,L"ExpressionParser",L"SyntaxError_NoUnaryOperand",
                               L"No operand for unary operator {0}");
          pFVar12 = FTextFormat::FTextFormat(&local_298,pFVar13,Default);
          pFVar13 = FText::Format(&local_318,pFVar12,&local_448);
          *(undefined8 *)&__return_storage_ptr__->Variant = 0;
          pIVar1 = (pFVar13->TextData).Reference;
          *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_3d4);
          }
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_318.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
          }
          if (local_308.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_448.AllocatorInstance.Data,local_448.ArrayNum);
          if ((FFormatArgumentValue *)local_448.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_448.AllocatorInstance.Data);
          }
        }
        else {
          iVar16 = uVar6 - 1;
          iVar8 = *(int *)(local_488.Data + (longlong)iVar16 * 4);
          iVar7 = (uVar6 - iVar16) + -1;
          if (iVar7 != 0) {
            memmove(local_488.Data + (longlong)iVar16 * 4,local_488.Data + (longlong)iVar16 * 4 + 4,
                    (longlong)iVar7 << 2);
            uVar6 = (uint)local_480;
          }
          local_480 = CONCAT44(local_480._4_4_,uVar6 - 1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_488,uVar6 - 1,(int *)((longlong)&local_480 + 4));
          pTVar11 = `ExpressionParser::Evaluate<char>'::__l2::<lambda_1>::operator()
                              (&local_430,iVar8);
          if (*(int *)(pFVar18 + 0x58) == 1) {
            uVar21 = uVar21 | 1;
            lVar20 = (**(code **)*param_2)(param_2,local_98);
          }
          else {
            uVar21 = uVar21 | 2;
            lVar20 = (**(code **)((longlong)*param_2 + 8))(param_2,local_e8,pFVar18,pTVar11);
          }
          local_148 = *(byte *)(lVar20 + 0x40);
          uVar19 = (ulonglong)local_148;
          if ((2 < local_148) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar19])(&local_188,lVar20);
          if ((uVar21 & 2) != 0) {
            uVar19 = (ulonglong)local_a8;
            uVar21 = uVar21 & 0xfffffffd;
            if ((2 < local_a8) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_e8);
          }
          if ((uVar21 & 1) != 0) {
            uVar19 = (ulonglong)local_58;
            uVar21 = uVar21 & 0xfffffffe;
            if ((2 < local_58) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_98);
          }
          uVar19 = (ulonglong)local_148;
          if ((2 < uVar19) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar19) != '\0') {
            if ((local_148 != 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            local_358.TypeId.A = 0;
            local_358.TypeId.B = 0;
            local_358.TypeId.C = 0;
            local_358.TypeId.D = 0;
            FExpressionNode::operator=(&local_358,(FExpressionNode *)&local_188);
            local_1e8.TypeId.A = 0;
            local_1e8.TypeId.B = 0;
            local_1e8.TypeId.C = 0;
            local_1e8.TypeId.D = 0;
            FExpressionNode::operator=(&local_1e8,&local_358);
            local_1a8 = *(undefined4 *)&(pTVar11->Context).TokenStart;
            puVar14 = local_358.InlineBytes;
            if (((local_358.TypeId.D == 0 && local_358.TypeId.C == 0) && local_358.TypeId.B == 0) &&
                local_358.TypeId.A == 0) {
              puVar14 = (uchar *)0x0;
            }
            uStack_1a4 = *(undefined4 *)((longlong)&(pTVar11->Context).TokenStart + 4);
            uStack_1a0 = *(undefined4 *)&(pTVar11->Context).TokenEnd;
            uStack_19c = *(undefined4 *)((longlong)&(pTVar11->Context).TokenEnd + 4);
            local_198._0_4_ = (pTVar11->Context).LineNumber;
            local_198._4_4_ = (pTVar11->Context).CharacterIndex;
            if (puVar14 != (uchar *)0x0) {
              (*(code *)**(undefined8 **)puVar14)(local_1a8,0);
            }
            iVar7 = (int)local_470;
            iVar8 = param_1->ArrayNum;
            iVar16 = (int)local_470;
            if ((int)local_470 == local_470._4_4_) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&local_478,(int *)((longlong)&local_470 + 4));
            }
            FVar2.Data = local_478.Data;
            local_470 = CONCAT44(local_470._4_4_,iVar16 + 1);
            lVar20 = (longlong)iVar16 * 0x60;
            (((FExpressionNode *)(local_478.Data + lVar20))->TypeId).A = 0;
            *(undefined8 *)(local_478.Data + lVar20 + 4) = 0;
            *(undefined4 *)(local_478.Data + lVar20 + 0xc) = 0;
            FExpressionNode::operator=((FExpressionNode *)(local_478.Data + lVar20),&local_1e8);
            local_460[0] = iVar7 + iVar8;
            pFVar18 = FVar2.Data + lVar20 + 0x40;
            *(ulonglong *)pFVar18 = CONCAT44(uStack_1a4,local_1a8);
            *(ulonglong *)(pFVar18 + 8) = CONCAT44(uStack_19c,uStack_1a0);
            *(undefined8 *)(FVar2.Data + lVar20 + 0x50) = local_198;
            if (((local_488.Data <= (FScriptContainerElement *)local_460) &&
                ((FScriptContainerElement *)local_460 <
                 local_488.Data + (longlong)(int)local_480._4_4_ * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            iVar8 = (uint)local_480;
            if ((uint)local_480 == local_480._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_488,(int *)((longlong)&local_480 + 4));
            }
            local_480 = CONCAT44(local_480._4_4_,iVar8 + 1);
            *(int *)(local_488.Data + (longlong)iVar8 * 4) = local_460[0];
            puVar14 = local_1e8.InlineBytes;
            if (((local_1e8.TypeId.D == 0 && local_1e8.TypeId.C == 0) && local_1e8.TypeId.B == 0) &&
                local_1e8.TypeId.A == 0) {
              puVar14 = (uchar *)0x0;
            }
            if (puVar14 != (uchar *)0x0) {
              (*(code *)**(undefined8 **)puVar14)(puVar14,0);
            }
            uVar19 = (ulonglong)local_148;
            if ((2 < local_148) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            pcVar10 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                ::__l2::Destructors)[uVar19];
            pFVar15 = (FExpressionNode *)&local_188;
            goto LAB_1418aeaca;
          }
          if ((local_148 != 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          *(longlong **)&__return_storage_ptr__->Variant = local_188;
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 8))(local_188,local_3d8);
          }
          uVar19 = (ulonglong)local_148;
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = local_180;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if ((2 < local_148) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])(&local_188);
        }
        goto LAB_1418af1cd;
      case 3:
        if ((int)uVar6 < 2) {
          local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.ArrayNum = 0;
          local_458.ArrayMax = 0;
          FAnsiString::ConstructFromPtrSize
                    (&local_3c0,*(char **)(pFVar18 + 0x40),
                     *(int *)(pFVar18 + 0x48) - *(int *)(pFVar18 + 0x40));
          pFVar13 = FText::FromString(&local_2e8,&local_3c0);
          local_420.Type = Text;
          FText::FText((FText *)&local_420.TextValue,pFVar13);
          if ((local_420.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (((local_458.AllocatorInstance.Data <= &local_420) &&
              (&local_420 <
               (FFormatArgumentValue *)
               (local_458.AllocatorInstance.Data + (longlong)local_458.ArrayMax * 0x20))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          iVar8 = local_458.ArrayNum;
          if (local_458.ArrayNum == local_458.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_458.AllocatorInstance,&local_458.ArrayMax);
          }
          local_458.ArrayNum = iVar8 + 1;
          lVar20 = (longlong)iVar8 * 0x20;
          *(Type *)&local_458.AllocatorInstance.Data[lVar20].field_0x0 = local_420.Type;
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(float *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               local_420.field1_0x8.FloatValue;
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(undefined8 *)&local_458.AllocatorInstance.Data[lVar20 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_458.AllocatorInstance.Data + lVar20 + 0x18) = 0;
          if ((local_420.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_458.AllocatorInstance.Data + lVar20 + 0x10),
                           (FText *)&local_420.TextValue),
             local_420.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_420.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
          }
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_2c8,L"ExpressionParser",L"SyntaxError_NotEnoughOperandsBinary"
                               ,L"Not enough operands for binary operator {0}");
          pFVar12 = FTextFormat::FTextFormat(&local_2a8,pFVar13,Default);
          pFVar13 = FText::Format(&local_2d8,pFVar12,&local_458);
          *(undefined8 *)&__return_storage_ptr__->Variant = 0;
          pIVar1 = (pFVar13->TextData).Reference;
          *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_438);
          }
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
          }
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_458.AllocatorInstance.Data,local_458.ArrayNum);
          if ((FFormatArgumentValue *)local_458.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_458.AllocatorInstance.Data);
          }
          goto LAB_1418af1cd;
        }
        iVar16 = uVar6 - 1;
        iVar8 = *(int *)(local_488.Data + (longlong)iVar16 * 4);
        iVar7 = (uVar6 - iVar16) + -1;
        if (iVar7 != 0) {
          memmove(local_488.Data + (longlong)iVar16 * 4,local_488.Data + (longlong)iVar16 * 4 + 4,
                  (longlong)iVar7 << 2);
          uVar6 = (uint)local_480;
        }
        local_480 = CONCAT44(local_480._4_4_,uVar6 - 1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_488,uVar6 - 1,(int *)((longlong)&local_480 + 4));
        `ExpressionParser::Evaluate<char>'::__l2::<lambda_1>::operator()(&local_430,iVar8);
        if ((int)(uint)local_480 < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
        }
        iVar17 = (uint)local_480 + -1;
        iVar8 = *(int *)(local_488.Data + (longlong)iVar17 * 4);
        iVar16 = ((uint)local_480 - iVar17) + -1;
        iVar7 = (uint)local_480;
        if (iVar16 != 0) {
          memmove(local_488.Data + (longlong)iVar17 * 4,local_488.Data + (longlong)iVar17 * 4 + 4,
                  (longlong)iVar16 << 2);
          iVar7 = (uint)local_480;
        }
        local_480 = CONCAT44(local_480._4_4_,iVar7 + -1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_488,iVar7 + -1,(int *)((longlong)&local_480 + 4));
        pTVar11 = `ExpressionParser::Evaluate<char>'::__l2::<lambda_1>::operator()(&local_430,iVar8)
        ;
        (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_138,pFVar18,pTVar11);
        uVar19 = (ulonglong)local_f8;
        if ((2 < uVar19) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar19) == '\0') {
          if ((local_f8 != 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          local_3c8.Args = (TTuple<FExpressionError_&>)&local_138;
          TValueOrError<FExpressionNode,FExpressionError>::
          TValueOrError<FExpressionNode,FExpressionError><FExpressionError_&>
                    (__return_storage_ptr__,&local_3c8);
          if ((2 < local_f8) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_f8])(&local_138);
          goto LAB_1418af1cd;
        }
        if ((local_f8 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        local_398.TypeId.A = 0;
        local_398.TypeId.B = 0;
        local_398.TypeId.C = 0;
        local_398.TypeId.D = 0;
        FExpressionNode::operator=(&local_398,&local_138);
        local_248.TypeId.A = 0;
        local_248.TypeId.B = 0;
        local_248.TypeId.C = 0;
        local_248.TypeId.D = 0;
        FExpressionNode::operator=(&local_248,&local_398);
        local_208 = *(undefined4 *)&(pTVar11->Context).TokenStart;
        puVar14 = local_398.InlineBytes;
        if (((local_398.TypeId.D == 0 && local_398.TypeId.C == 0) && local_398.TypeId.B == 0) &&
            local_398.TypeId.A == 0) {
          puVar14 = (uchar *)0x0;
        }
        uStack_204 = *(undefined4 *)((longlong)&(pTVar11->Context).TokenStart + 4);
        uStack_200 = *(undefined4 *)&(pTVar11->Context).TokenEnd;
        uStack_1fc = *(undefined4 *)((longlong)&(pTVar11->Context).TokenEnd + 4);
        local_1f8._0_4_ = (pTVar11->Context).LineNumber;
        local_1f8._4_4_ = (pTVar11->Context).CharacterIndex;
        if (puVar14 != (uchar *)0x0) {
          (*(code *)**(undefined8 **)puVar14)(local_208,0);
        }
        iVar7 = (int)local_470;
        iVar8 = param_1->ArrayNum;
        iVar16 = (int)local_470;
        if ((int)local_470 == local_470._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&local_478,(int *)((longlong)&local_470 + 4));
        }
        FVar2.Data = local_478.Data;
        local_470 = CONCAT44(local_470._4_4_,iVar16 + 1);
        lVar20 = (longlong)iVar16 * 0x60;
        (((FExpressionNode *)(local_478.Data + lVar20))->TypeId).A = 0;
        *(undefined8 *)(local_478.Data + lVar20 + 4) = 0;
        *(undefined4 *)(local_478.Data + lVar20 + 0xc) = 0;
        FExpressionNode::operator=((FExpressionNode *)(local_478.Data + lVar20),&local_248);
        local_464 = iVar8 + iVar7;
        pFVar18 = FVar2.Data + lVar20 + 0x40;
        *(ulonglong *)pFVar18 = CONCAT44(uStack_204,local_208);
        *(ulonglong *)(pFVar18 + 8) = CONCAT44(uStack_1fc,uStack_200);
        *(undefined8 *)(FVar2.Data + lVar20 + 0x50) = local_1f8;
        if (((local_488.Data <= (FScriptContainerElement *)&local_464) &&
            ((FScriptContainerElement *)&local_464 <
             local_488.Data + (longlong)(int)local_480._4_4_ * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        iVar8 = (uint)local_480;
        if ((uint)local_480 == local_480._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_488,(int *)((longlong)&local_480 + 4));
        }
        local_480 = CONCAT44(local_480._4_4_,iVar8 + 1);
        *(int *)(local_488.Data + (longlong)iVar8 * 4) = local_464;
        puVar14 = local_248.InlineBytes;
        if (((local_248.TypeId.D == 0 && local_248.TypeId.C == 0) && local_248.TypeId.B == 0) &&
            local_248.TypeId.A == 0) {
          puVar14 = (uchar *)0x0;
        }
        if (puVar14 != (uchar *)0x0) {
          (*(code *)**(undefined8 **)puVar14)(puVar14,0);
        }
        uVar19 = (ulonglong)local_f8;
        if ((2 < local_f8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        pcVar10 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar19];
        pFVar15 = &local_138;
LAB_1418aeaca:
        (*pcVar10)(pFVar15);
        param_2 = local_3e0;
LAB_1418aead0:
        uVar22 = (uint)local_480;
        break;
      case 4:
        if ((0 < (int)uVar6) && (pFVar18[0x60] != (FScriptContainerElement)0x0)) {
          pcVar10 = *(code **)((longlong)*param_2 + 0x18);
          uVar22 = 0;
          if ((int)(uVar6 - 1) < (int)uVar6) {
            uVar22 = ~(uVar6 - 1) >> 0x1f;
          }
          if (uVar22 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            uVar6 = (uint)local_480;
          }
          pTVar11 = `ExpressionParser::Evaluate<char>'::__l2::<lambda_1>::operator()
                              (&local_430,*(int *)(local_488.Data + (longlong)(int)uVar6 * 4 + -4));
          cVar4 = (*pcVar10)(param_2,pFVar18,pTVar11);
          if (cVar4 != '\0') {
            if ((pFVar18[0x60] == (FScriptContainerElement)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            local_468 = *(uint *)(pFVar18 + 0x5c);
          }
          goto LAB_1418aead0;
        }
      }
      iVar8 = param_1->ArrayNum;
      local_468 = local_468 + 1;
      uVar6 = uVar22;
    } while ((int)local_468 < iVar8);
  }
  if (uVar22 == 1) {
    pTVar11 = `ExpressionParser::Evaluate<char>'::__l2::<lambda_1>::operator()
                        (&local_430,*(uint *)local_488.Data);
    puVar14 = (pTVar11->Node).InlineBytes;
    if ((((pTVar11->Node).TypeId.D == 0 && (pTVar11->Node).TypeId.C == 0) &&
        (pTVar11->Node).TypeId.B == 0) && (pTVar11->Node).TypeId.A == 0) {
      puVar14 = (uchar *)0x0;
    }
    if (puVar14 == (uchar *)0x0) {
      local_288.TypeId.A = 0;
      local_288.TypeId.B = 0;
      local_288.InlineBytes[0] = '\0';
      local_288.InlineBytes[1] = '\0';
      local_288.InlineBytes[2] = '\0';
      local_288.InlineBytes[3] = '\0';
      local_288.InlineBytes[4] = '\0';
      local_288.InlineBytes[5] = '\0';
      local_288.InlineBytes[6] = '\0';
      local_288.InlineBytes[7] = '\0';
      local_288.InlineBytes[8] = '\0';
      local_288.InlineBytes[9] = '\0';
      local_288.InlineBytes[10] = '\0';
      local_288.InlineBytes[0xb] = '\0';
      local_288.InlineBytes[0xc] = '\0';
      local_288.InlineBytes[0xd] = '\0';
      local_288.InlineBytes[0xe] = '\0';
      local_288.InlineBytes[0xf] = '\0';
      local_288.InlineBytes[0x10] = '\0';
      local_288.InlineBytes[0x11] = '\0';
      local_288.InlineBytes[0x12] = '\0';
      local_288.InlineBytes[0x13] = '\0';
      local_288.InlineBytes[0x14] = '\0';
      local_288.InlineBytes[0x15] = '\0';
      local_288.InlineBytes[0x16] = '\0';
      local_288.InlineBytes[0x17] = '\0';
      local_288.InlineBytes[0x18] = '\0';
      local_288.InlineBytes[0x19] = '\0';
      local_288.InlineBytes[0x1a] = '\0';
      local_288.InlineBytes[0x1b] = '\0';
      local_288.InlineBytes[0x1c] = '\0';
      local_288.InlineBytes[0x1d] = '\0';
      local_288.InlineBytes[0x1e] = '\0';
      local_288.InlineBytes[0x1f] = '\0';
      local_288.InlineBytes[0x20] = '\0';
      local_288.InlineBytes[0x21] = '\0';
      local_288.InlineBytes[0x22] = '\0';
      local_288.InlineBytes[0x23] = '\0';
      local_288.InlineBytes[0x24] = '\0';
      local_288.InlineBytes[0x25] = '\0';
      local_288.InlineBytes[0x26] = '\0';
      local_288.InlineBytes[0x27] = '\0';
      local_288.InlineBytes[0x28] = '\0';
      local_288.InlineBytes[0x29] = '\0';
      local_288.InlineBytes[0x2a] = '\0';
      local_288.InlineBytes[0x2b] = '\0';
      local_288.InlineBytes[0x2c] = '\0';
      local_288.InlineBytes[0x2d] = '\0';
      local_288.InlineBytes[0x2e] = '\0';
      local_288.InlineBytes[0x2f] = '\0';
      local_288.TypeId.C = 0;
      local_288.TypeId.D = 0;
    }
    else {
      (**(code **)(*(longlong *)puVar14 + 0x18))(puVar14,&local_288);
    }
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    *(undefined8 *)&(__return_storage_ptr__->Variant).field_0x8 = 0;
    FExpressionNode::operator=((FExpressionNode *)__return_storage_ptr__,&local_288);
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    puVar14 = local_288.InlineBytes;
    if (((local_288.TypeId.D == 0 && local_288.TypeId.C == 0) && local_288.TypeId.B == 0) &&
        local_288.TypeId.A == 0) {
      puVar14 = (uchar *)0x0;
    }
    if (puVar14 != (uchar *)0x0) {
      (*(code *)**(undefined8 **)puVar14)(puVar14,0);
    }
  }
  else {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_2f8,L"ExpressionParser",L"SyntaxError_InvalidExpression",
                         L"Could not evaluate expression");
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar13->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_3d0);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
  }
LAB_1418af1cd:
  if (local_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data);
  }
  DestructItems<TExpressionToken<char>,int>((TExpressionToken<char> *)local_478.Data,(int)local_470)
  ;
  if ((TExpressionToken<char> *)local_478.Data != (TExpressionToken<char> *)0x0) {
    FMemory::Free(local_478.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate<char> @ 1418af250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<char>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,char *param_1,
          TTokenDefinitions<char> *param_2,FExpressionGrammar *param_3,
          TIOperatorEvaluationEnvironment<char> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  Compile<char>(&local_50,param_1,param_2,param_3);
  uVar4 = (ulonglong)local_50.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,TArray<struct_TCompiledToken<char>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    if (local_50.Variant.TypeIndex != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    *(longlong *)&__return_storage_ptr__->Variant = local_50.Variant._padding_;
    if ((FScriptContainerElement *)local_50.Variant._padding_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_50.Variant._padding_ + 8))
                (local_50.Variant._padding_,local_58);
    }
    *(int *)&(__return_storage_ptr__->Variant).field_0x8 = (int)local_50.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  else {
    if (local_50.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    Evaluate<char>(__return_storage_ptr__,
                   (TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_> *)&local_50,param_4);
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  return __return_storage_ptr__;
}

// Evaluate<char8_t> @ 1418af400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<char8_t>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_> *param_1,
          TIOperatorEvaluationEnvironment<char8_t> *param_2)

{
  ITextData *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  code *pcVar10;
  TExpressionToken<char8_t> *pTVar11;
  FTextFormat *pFVar12;
  FText *pFVar13;
  uchar *puVar14;
  FExpressionNode *pFVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_4d8 [32];
  ForAnyElementType local_488;
  undefined8 local_480;
  ForAnyElementType local_478;
  undefined8 local_470;
  uint local_468;
  int local_464;
  int local_460 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_458;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_448;
  undefined4 local_438 [2];
  TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_> *local_430;
  ForAnyElementType *local_428;
  FFormatArgumentValue local_420;
  FFormatArgumentValue local_400;
  TIOperatorEvaluationEnvironment<char8_t> *local_3e0;
  undefined1 local_3d8 [4];
  undefined1 local_3d4 [4];
  undefined1 local_3d0 [8];
  TValueOrError_ErrorProxy<FExpressionError_&> local_3c8;
  FUtf8String local_3c0;
  FUtf8String local_3b0;
  FExpressionNode local_398;
  FExpressionNode local_358;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FTextFormat local_2a8;
  FTextFormat local_298;
  FExpressionNode local_288;
  FExpressionNode local_248;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  FExpressionNode local_1e8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong *local_188;
  uint local_180;
  byte local_148;
  FExpressionNode local_138;
  byte local_f8;
  undefined1 local_e8 [64];
  byte local_a8;
  undefined1 local_98 [64];
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  uVar6 = 0;
  uVar22 = 0;
  local_438[0] = 0;
  local_428 = &local_478;
  iVar8 = param_1->ArrayNum;
  local_478.Data = (FScriptContainerElement *)0x0;
  local_470 = 0;
  local_488.Data = (FScriptContainerElement *)0x0;
  local_480 = 0;
  local_468 = 0;
  local_430 = param_1;
  local_3e0 = param_2;
  uVar21 = uVar6;
  if (0 < iVar8) {
    do {
      uVar22 = local_468;
      uVar5 = 0;
      if ((int)local_468 < iVar8) {
        uVar5 = ~local_468 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        uVar6 = (uint)local_480;
      }
      pFVar18 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x70;
      uVar22 = uVar6;
      switch(*(undefined4 *)(pFVar18 + 0x58)) {
      case 0:
        if ((local_488.Data <= (FScriptContainerElement *)&local_468) &&
           ((FScriptContainerElement *)&local_468 <
            local_488.Data + (longlong)(int)local_480._4_4_ * 4)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          uVar6 = (uint)local_480;
        }
        if (uVar6 == local_480._4_4_) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_488,(int *)((longlong)&local_480 + 4));
        }
        local_480 = CONCAT44(local_480._4_4_,uVar6 + 1);
        *(uint *)(local_488.Data + (longlong)(int)uVar6 * 4) = local_468;
        goto LAB_1418afe70;
      case 1:
      case 2:
        if ((int)uVar6 < 1) {
          local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_448.ArrayNum = 0;
          local_448.ArrayMax = 0;
          FUtf8String::ConstructFromPtrSize
                    (&local_3b0,*(uchar **)(pFVar18 + 0x40),
                     *(int *)(pFVar18 + 0x48) - *(int *)(pFVar18 + 0x40));
          pFVar13 = FText::FromString(&local_2b8,&local_3b0);
          local_400.Type = Text;
          FText::FText((FText *)&local_400.TextValue,pFVar13);
          if ((local_400.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (((local_448.AllocatorInstance.Data <= &local_400) &&
              (&local_400 <
               (FFormatArgumentValue *)
               (local_448.AllocatorInstance.Data + (longlong)local_448.ArrayMax * 0x20))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          iVar8 = local_448.ArrayNum;
          if (local_448.ArrayNum == local_448.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_448.AllocatorInstance,&local_448.ArrayMax);
          }
          local_448.ArrayNum = iVar8 + 1;
          lVar20 = (longlong)iVar8 * 0x20;
          *(Type *)&local_448.AllocatorInstance.Data[lVar20].field_0x0 = local_400.Type;
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(float *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               local_400.field1_0x8.FloatValue;
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(undefined8 *)&local_448.AllocatorInstance.Data[lVar20 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_448.AllocatorInstance.Data + lVar20 + 0x18) = 0;
          if ((local_400.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_448.AllocatorInstance.Data + lVar20 + 0x10),
                           (FText *)&local_400.TextValue),
             local_400.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_400.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_308,L"ExpressionParser",L"SyntaxError_NoUnaryOperand",
                               L"No operand for unary operator {0}");
          pFVar12 = FTextFormat::FTextFormat(&local_298,pFVar13,Default);
          pFVar13 = FText::Format(&local_318,pFVar12,&local_448);
          *(undefined8 *)&__return_storage_ptr__->Variant = 0;
          pIVar1 = (pFVar13->TextData).Reference;
          *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_3d4);
          }
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_318.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
          }
          if (local_308.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_448.AllocatorInstance.Data,local_448.ArrayNum);
          if ((FFormatArgumentValue *)local_448.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_448.AllocatorInstance.Data);
          }
        }
        else {
          iVar16 = uVar6 - 1;
          iVar8 = *(int *)(local_488.Data + (longlong)iVar16 * 4);
          iVar7 = (uVar6 - iVar16) + -1;
          if (iVar7 != 0) {
            memmove(local_488.Data + (longlong)iVar16 * 4,local_488.Data + (longlong)iVar16 * 4 + 4,
                    (longlong)iVar7 << 2);
            uVar6 = (uint)local_480;
          }
          local_480 = CONCAT44(local_480._4_4_,uVar6 - 1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_488,uVar6 - 1,(int *)((longlong)&local_480 + 4));
          pTVar11 = `ExpressionParser::Evaluate<char8_t>'::__l2::<lambda_1>::operator()
                              (&local_430,iVar8);
          if (*(int *)(pFVar18 + 0x58) == 1) {
            uVar21 = uVar21 | 1;
            lVar20 = (**(code **)*param_2)(param_2,local_98);
          }
          else {
            uVar21 = uVar21 | 2;
            lVar20 = (**(code **)((longlong)*param_2 + 8))(param_2,local_e8,pFVar18,pTVar11);
          }
          local_148 = *(byte *)(lVar20 + 0x40);
          uVar19 = (ulonglong)local_148;
          if ((2 < local_148) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar19])(&local_188,lVar20);
          if ((uVar21 & 2) != 0) {
            uVar19 = (ulonglong)local_a8;
            uVar21 = uVar21 & 0xfffffffd;
            if ((2 < local_a8) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_e8);
          }
          if ((uVar21 & 1) != 0) {
            uVar19 = (ulonglong)local_58;
            uVar21 = uVar21 & 0xfffffffe;
            if ((2 < local_58) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_98);
          }
          uVar19 = (ulonglong)local_148;
          if ((2 < uVar19) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar19) != '\0') {
            if ((local_148 != 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            local_358.TypeId.A = 0;
            local_358.TypeId.B = 0;
            local_358.TypeId.C = 0;
            local_358.TypeId.D = 0;
            FExpressionNode::operator=(&local_358,(FExpressionNode *)&local_188);
            local_1e8.TypeId.A = 0;
            local_1e8.TypeId.B = 0;
            local_1e8.TypeId.C = 0;
            local_1e8.TypeId.D = 0;
            FExpressionNode::operator=(&local_1e8,&local_358);
            local_1a8 = *(undefined4 *)&(pTVar11->Context).TokenStart;
            puVar14 = local_358.InlineBytes;
            if (((local_358.TypeId.D == 0 && local_358.TypeId.C == 0) && local_358.TypeId.B == 0) &&
                local_358.TypeId.A == 0) {
              puVar14 = (uchar *)0x0;
            }
            uStack_1a4 = *(undefined4 *)((longlong)&(pTVar11->Context).TokenStart + 4);
            uStack_1a0 = *(undefined4 *)&(pTVar11->Context).TokenEnd;
            uStack_19c = *(undefined4 *)((longlong)&(pTVar11->Context).TokenEnd + 4);
            local_198._0_4_ = (pTVar11->Context).LineNumber;
            local_198._4_4_ = (pTVar11->Context).CharacterIndex;
            if (puVar14 != (uchar *)0x0) {
              (*(code *)**(undefined8 **)puVar14)(local_1a8,0);
            }
            iVar7 = (int)local_470;
            iVar8 = param_1->ArrayNum;
            iVar16 = (int)local_470;
            if ((int)local_470 == local_470._4_4_) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&local_478,(int *)((longlong)&local_470 + 4));
            }
            FVar2.Data = local_478.Data;
            local_470 = CONCAT44(local_470._4_4_,iVar16 + 1);
            lVar20 = (longlong)iVar16 * 0x60;
            (((FExpressionNode *)(local_478.Data + lVar20))->TypeId).A = 0;
            *(undefined8 *)(local_478.Data + lVar20 + 4) = 0;
            *(undefined4 *)(local_478.Data + lVar20 + 0xc) = 0;
            FExpressionNode::operator=((FExpressionNode *)(local_478.Data + lVar20),&local_1e8);
            local_460[0] = iVar7 + iVar8;
            pFVar18 = FVar2.Data + lVar20 + 0x40;
            *(ulonglong *)pFVar18 = CONCAT44(uStack_1a4,local_1a8);
            *(ulonglong *)(pFVar18 + 8) = CONCAT44(uStack_19c,uStack_1a0);
            *(undefined8 *)(FVar2.Data + lVar20 + 0x50) = local_198;
            if (((local_488.Data <= (FScriptContainerElement *)local_460) &&
                ((FScriptContainerElement *)local_460 <
                 local_488.Data + (longlong)(int)local_480._4_4_ * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            iVar8 = (uint)local_480;
            if ((uint)local_480 == local_480._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_488,(int *)((longlong)&local_480 + 4));
            }
            local_480 = CONCAT44(local_480._4_4_,iVar8 + 1);
            *(int *)(local_488.Data + (longlong)iVar8 * 4) = local_460[0];
            puVar14 = local_1e8.InlineBytes;
            if (((local_1e8.TypeId.D == 0 && local_1e8.TypeId.C == 0) && local_1e8.TypeId.B == 0) &&
                local_1e8.TypeId.A == 0) {
              puVar14 = (uchar *)0x0;
            }
            if (puVar14 != (uchar *)0x0) {
              (*(code *)**(undefined8 **)puVar14)(puVar14,0);
            }
            uVar19 = (ulonglong)local_148;
            if ((2 < local_148) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            pcVar10 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                ::__l2::Destructors)[uVar19];
            pFVar15 = (FExpressionNode *)&local_188;
            goto LAB_1418afe6a;
          }
          if ((local_148 != 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          *(longlong **)&__return_storage_ptr__->Variant = local_188;
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 8))(local_188,local_3d8);
          }
          uVar19 = (ulonglong)local_148;
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = local_180;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if ((2 < local_148) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])(&local_188);
        }
        goto LAB_1418b056d;
      case 3:
        if ((int)uVar6 < 2) {
          local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.ArrayNum = 0;
          local_458.ArrayMax = 0;
          FUtf8String::ConstructFromPtrSize
                    (&local_3c0,*(uchar **)(pFVar18 + 0x40),
                     *(int *)(pFVar18 + 0x48) - *(int *)(pFVar18 + 0x40));
          pFVar13 = FText::FromString(&local_2e8,&local_3c0);
          local_420.Type = Text;
          FText::FText((FText *)&local_420.TextValue,pFVar13);
          if ((local_420.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (((local_458.AllocatorInstance.Data <= &local_420) &&
              (&local_420 <
               (FFormatArgumentValue *)
               (local_458.AllocatorInstance.Data + (longlong)local_458.ArrayMax * 0x20))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          iVar8 = local_458.ArrayNum;
          if (local_458.ArrayNum == local_458.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_458.AllocatorInstance,&local_458.ArrayMax);
          }
          local_458.ArrayNum = iVar8 + 1;
          lVar20 = (longlong)iVar8 * 0x20;
          *(Type *)&local_458.AllocatorInstance.Data[lVar20].field_0x0 = local_420.Type;
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(float *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               local_420.field1_0x8.FloatValue;
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(undefined8 *)&local_458.AllocatorInstance.Data[lVar20 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_458.AllocatorInstance.Data + lVar20 + 0x18) = 0;
          if ((local_420.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_458.AllocatorInstance.Data + lVar20 + 0x10),
                           (FText *)&local_420.TextValue),
             local_420.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_420.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
          }
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_2c8,L"ExpressionParser",L"SyntaxError_NotEnoughOperandsBinary"
                               ,L"Not enough operands for binary operator {0}");
          pFVar12 = FTextFormat::FTextFormat(&local_2a8,pFVar13,Default);
          pFVar13 = FText::Format(&local_2d8,pFVar12,&local_458);
          *(undefined8 *)&__return_storage_ptr__->Variant = 0;
          pIVar1 = (pFVar13->TextData).Reference;
          *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_438);
          }
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
          }
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_458.AllocatorInstance.Data,local_458.ArrayNum);
          if ((FFormatArgumentValue *)local_458.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_458.AllocatorInstance.Data);
          }
          goto LAB_1418b056d;
        }
        iVar16 = uVar6 - 1;
        iVar8 = *(int *)(local_488.Data + (longlong)iVar16 * 4);
        iVar7 = (uVar6 - iVar16) + -1;
        if (iVar7 != 0) {
          memmove(local_488.Data + (longlong)iVar16 * 4,local_488.Data + (longlong)iVar16 * 4 + 4,
                  (longlong)iVar7 << 2);
          uVar6 = (uint)local_480;
        }
        local_480 = CONCAT44(local_480._4_4_,uVar6 - 1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_488,uVar6 - 1,(int *)((longlong)&local_480 + 4));
        `ExpressionParser::Evaluate<char8_t>'::__l2::<lambda_1>::operator()(&local_430,iVar8);
        if ((int)(uint)local_480 < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
        }
        iVar17 = (uint)local_480 + -1;
        iVar8 = *(int *)(local_488.Data + (longlong)iVar17 * 4);
        iVar16 = ((uint)local_480 - iVar17) + -1;
        iVar7 = (uint)local_480;
        if (iVar16 != 0) {
          memmove(local_488.Data + (longlong)iVar17 * 4,local_488.Data + (longlong)iVar17 * 4 + 4,
                  (longlong)iVar16 << 2);
          iVar7 = (uint)local_480;
        }
        local_480 = CONCAT44(local_480._4_4_,iVar7 + -1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_488,iVar7 + -1,(int *)((longlong)&local_480 + 4));
        pTVar11 = `ExpressionParser::Evaluate<char8_t>'::__l2::<lambda_1>::operator()
                            (&local_430,iVar8);
        (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_138,pFVar18,pTVar11);
        uVar19 = (ulonglong)local_f8;
        if ((2 < uVar19) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar19) == '\0') {
          if ((local_f8 != 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          local_3c8.Args = (TTuple<FExpressionError_&>)&local_138;
          TValueOrError<FExpressionNode,FExpressionError>::
          TValueOrError<FExpressionNode,FExpressionError><FExpressionError_&>
                    (__return_storage_ptr__,&local_3c8);
          if ((2 < local_f8) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_f8])(&local_138);
          goto LAB_1418b056d;
        }
        if ((local_f8 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        local_398.TypeId.A = 0;
        local_398.TypeId.B = 0;
        local_398.TypeId.C = 0;
        local_398.TypeId.D = 0;
        FExpressionNode::operator=(&local_398,&local_138);
        local_248.TypeId.A = 0;
        local_248.TypeId.B = 0;
        local_248.TypeId.C = 0;
        local_248.TypeId.D = 0;
        FExpressionNode::operator=(&local_248,&local_398);
        local_208 = *(undefined4 *)&(pTVar11->Context).TokenStart;
        puVar14 = local_398.InlineBytes;
        if (((local_398.TypeId.D == 0 && local_398.TypeId.C == 0) && local_398.TypeId.B == 0) &&
            local_398.TypeId.A == 0) {
          puVar14 = (uchar *)0x0;
        }
        uStack_204 = *(undefined4 *)((longlong)&(pTVar11->Context).TokenStart + 4);
        uStack_200 = *(undefined4 *)&(pTVar11->Context).TokenEnd;
        uStack_1fc = *(undefined4 *)((longlong)&(pTVar11->Context).TokenEnd + 4);
        local_1f8._0_4_ = (pTVar11->Context).LineNumber;
        local_1f8._4_4_ = (pTVar11->Context).CharacterIndex;
        if (puVar14 != (uchar *)0x0) {
          (*(code *)**(undefined8 **)puVar14)(local_208,0);
        }
        iVar7 = (int)local_470;
        iVar8 = param_1->ArrayNum;
        iVar16 = (int)local_470;
        if ((int)local_470 == local_470._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&local_478,(int *)((longlong)&local_470 + 4));
        }
        FVar2.Data = local_478.Data;
        local_470 = CONCAT44(local_470._4_4_,iVar16 + 1);
        lVar20 = (longlong)iVar16 * 0x60;
        (((FExpressionNode *)(local_478.Data + lVar20))->TypeId).A = 0;
        *(undefined8 *)(local_478.Data + lVar20 + 4) = 0;
        *(undefined4 *)(local_478.Data + lVar20 + 0xc) = 0;
        FExpressionNode::operator=((FExpressionNode *)(local_478.Data + lVar20),&local_248);
        local_464 = iVar8 + iVar7;
        pFVar18 = FVar2.Data + lVar20 + 0x40;
        *(ulonglong *)pFVar18 = CONCAT44(uStack_204,local_208);
        *(ulonglong *)(pFVar18 + 8) = CONCAT44(uStack_1fc,uStack_200);
        *(undefined8 *)(FVar2.Data + lVar20 + 0x50) = local_1f8;
        if (((local_488.Data <= (FScriptContainerElement *)&local_464) &&
            ((FScriptContainerElement *)&local_464 <
             local_488.Data + (longlong)(int)local_480._4_4_ * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        iVar8 = (uint)local_480;
        if ((uint)local_480 == local_480._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_488,(int *)((longlong)&local_480 + 4));
        }
        local_480 = CONCAT44(local_480._4_4_,iVar8 + 1);
        *(int *)(local_488.Data + (longlong)iVar8 * 4) = local_464;
        puVar14 = local_248.InlineBytes;
        if (((local_248.TypeId.D == 0 && local_248.TypeId.C == 0) && local_248.TypeId.B == 0) &&
            local_248.TypeId.A == 0) {
          puVar14 = (uchar *)0x0;
        }
        if (puVar14 != (uchar *)0x0) {
          (*(code *)**(undefined8 **)puVar14)(puVar14,0);
        }
        uVar19 = (ulonglong)local_f8;
        if ((2 < local_f8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        pcVar10 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar19];
        pFVar15 = &local_138;
LAB_1418afe6a:
        (*pcVar10)(pFVar15);
        param_2 = local_3e0;
LAB_1418afe70:
        uVar22 = (uint)local_480;
        break;
      case 4:
        if ((0 < (int)uVar6) && (pFVar18[0x60] != (FScriptContainerElement)0x0)) {
          pcVar10 = *(code **)((longlong)*param_2 + 0x18);
          uVar22 = 0;
          if ((int)(uVar6 - 1) < (int)uVar6) {
            uVar22 = ~(uVar6 - 1) >> 0x1f;
          }
          if (uVar22 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            uVar6 = (uint)local_480;
          }
          pTVar11 = `ExpressionParser::Evaluate<char8_t>'::__l2::<lambda_1>::operator()
                              (&local_430,*(int *)(local_488.Data + (longlong)(int)uVar6 * 4 + -4));
          cVar4 = (*pcVar10)(param_2,pFVar18,pTVar11);
          if (cVar4 != '\0') {
            if ((pFVar18[0x60] == (FScriptContainerElement)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            local_468 = *(uint *)(pFVar18 + 0x5c);
          }
          goto LAB_1418afe70;
        }
      }
      iVar8 = param_1->ArrayNum;
      local_468 = local_468 + 1;
      uVar6 = uVar22;
    } while ((int)local_468 < iVar8);
  }
  if (uVar22 == 1) {
    pTVar11 = `ExpressionParser::Evaluate<char8_t>'::__l2::<lambda_1>::operator()
                        (&local_430,*(uint *)local_488.Data);
    puVar14 = (pTVar11->Node).InlineBytes;
    if ((((pTVar11->Node).TypeId.D == 0 && (pTVar11->Node).TypeId.C == 0) &&
        (pTVar11->Node).TypeId.B == 0) && (pTVar11->Node).TypeId.A == 0) {
      puVar14 = (uchar *)0x0;
    }
    if (puVar14 == (uchar *)0x0) {
      local_288.TypeId.A = 0;
      local_288.TypeId.B = 0;
      local_288.InlineBytes[0] = '\0';
      local_288.InlineBytes[1] = '\0';
      local_288.InlineBytes[2] = '\0';
      local_288.InlineBytes[3] = '\0';
      local_288.InlineBytes[4] = '\0';
      local_288.InlineBytes[5] = '\0';
      local_288.InlineBytes[6] = '\0';
      local_288.InlineBytes[7] = '\0';
      local_288.InlineBytes[8] = '\0';
      local_288.InlineBytes[9] = '\0';
      local_288.InlineBytes[10] = '\0';
      local_288.InlineBytes[0xb] = '\0';
      local_288.InlineBytes[0xc] = '\0';
      local_288.InlineBytes[0xd] = '\0';
      local_288.InlineBytes[0xe] = '\0';
      local_288.InlineBytes[0xf] = '\0';
      local_288.InlineBytes[0x10] = '\0';
      local_288.InlineBytes[0x11] = '\0';
      local_288.InlineBytes[0x12] = '\0';
      local_288.InlineBytes[0x13] = '\0';
      local_288.InlineBytes[0x14] = '\0';
      local_288.InlineBytes[0x15] = '\0';
      local_288.InlineBytes[0x16] = '\0';
      local_288.InlineBytes[0x17] = '\0';
      local_288.InlineBytes[0x18] = '\0';
      local_288.InlineBytes[0x19] = '\0';
      local_288.InlineBytes[0x1a] = '\0';
      local_288.InlineBytes[0x1b] = '\0';
      local_288.InlineBytes[0x1c] = '\0';
      local_288.InlineBytes[0x1d] = '\0';
      local_288.InlineBytes[0x1e] = '\0';
      local_288.InlineBytes[0x1f] = '\0';
      local_288.InlineBytes[0x20] = '\0';
      local_288.InlineBytes[0x21] = '\0';
      local_288.InlineBytes[0x22] = '\0';
      local_288.InlineBytes[0x23] = '\0';
      local_288.InlineBytes[0x24] = '\0';
      local_288.InlineBytes[0x25] = '\0';
      local_288.InlineBytes[0x26] = '\0';
      local_288.InlineBytes[0x27] = '\0';
      local_288.InlineBytes[0x28] = '\0';
      local_288.InlineBytes[0x29] = '\0';
      local_288.InlineBytes[0x2a] = '\0';
      local_288.InlineBytes[0x2b] = '\0';
      local_288.InlineBytes[0x2c] = '\0';
      local_288.InlineBytes[0x2d] = '\0';
      local_288.InlineBytes[0x2e] = '\0';
      local_288.InlineBytes[0x2f] = '\0';
      local_288.TypeId.C = 0;
      local_288.TypeId.D = 0;
    }
    else {
      (**(code **)(*(longlong *)puVar14 + 0x18))(puVar14,&local_288);
    }
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    *(undefined8 *)&(__return_storage_ptr__->Variant).field_0x8 = 0;
    FExpressionNode::operator=((FExpressionNode *)__return_storage_ptr__,&local_288);
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    puVar14 = local_288.InlineBytes;
    if (((local_288.TypeId.D == 0 && local_288.TypeId.C == 0) && local_288.TypeId.B == 0) &&
        local_288.TypeId.A == 0) {
      puVar14 = (uchar *)0x0;
    }
    if (puVar14 != (uchar *)0x0) {
      (*(code *)**(undefined8 **)puVar14)(puVar14,0);
    }
  }
  else {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_2f8,L"ExpressionParser",L"SyntaxError_InvalidExpression",
                         L"Could not evaluate expression");
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar13->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_3d0);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
  }
LAB_1418b056d:
  if (local_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data);
  }
  DestructItems<TExpressionToken<char8_t>,int>
            ((TExpressionToken<char8_t> *)local_478.Data,(int)local_470);
  if ((TExpressionToken<char8_t> *)local_478.Data != (TExpressionToken<char8_t> *)0x0) {
    FMemory::Free(local_478.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate<char8_t> @ 1418b05f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<char8_t>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,uchar *param_1,
          TTokenDefinitions<char8_t> *param_2,FExpressionGrammar *param_3,
          TIOperatorEvaluationEnvironment<char8_t> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  Compile<char8_t>(&local_50,param_1,param_2,param_3);
  uVar4 = (ulonglong)local_50.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,TArray<struct_TCompiledToken<char>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<char>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    if (local_50.Variant.TypeIndex != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    *(longlong *)&__return_storage_ptr__->Variant = local_50.Variant._padding_;
    if ((FScriptContainerElement *)local_50.Variant._padding_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_50.Variant._padding_ + 8))
                (local_50.Variant._padding_,local_58);
    }
    *(int *)&(__return_storage_ptr__->Variant).field_0x8 = (int)local_50.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<char8_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  else {
    if (local_50.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    Evaluate<char8_t>(__return_storage_ptr__,
                      (TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_> *)&local_50,
                      param_4);
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<char8_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  return __return_storage_ptr__;
}

// Evaluate<wchar_t> @ 1418b07a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<wchar_t>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *param_1,
          TIOperatorEvaluationEnvironment<wchar_t> *param_2)

{
  ITextData *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  code *pcVar10;
  TExpressionToken<wchar_t> *pTVar11;
  FTextFormat *pFVar12;
  FText *pFVar13;
  uchar *puVar14;
  FExpressionNode *pFVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_4d8 [32];
  ForAnyElementType local_488;
  undefined8 local_480;
  ForAnyElementType local_478;
  undefined8 local_470;
  uint local_468;
  int local_464;
  int local_460 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_458;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_448;
  undefined4 local_438 [2];
  TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *local_430;
  ForAnyElementType *local_428;
  FFormatArgumentValue local_420;
  FFormatArgumentValue local_400;
  TIOperatorEvaluationEnvironment<wchar_t> *local_3e0;
  undefined1 local_3d8 [4];
  undefined1 local_3d4 [4];
  undefined1 local_3d0 [8];
  TValueOrError_ErrorProxy<FExpressionError_&> local_3c8;
  FString local_3c0;
  FString local_3b0;
  FExpressionNode local_398;
  FExpressionNode local_358;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FTextFormat local_2a8;
  FTextFormat local_298;
  FExpressionNode local_288;
  FExpressionNode local_248;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  FExpressionNode local_1e8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong *local_188;
  uint local_180;
  byte local_148;
  FExpressionNode local_138;
  byte local_f8;
  undefined1 local_e8 [64];
  byte local_a8;
  undefined1 local_98 [64];
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  uVar6 = 0;
  uVar22 = 0;
  local_438[0] = 0;
  local_428 = &local_478;
  iVar8 = param_1->ArrayNum;
  local_478.Data = (FScriptContainerElement *)0x0;
  local_470 = 0;
  local_488.Data = (FScriptContainerElement *)0x0;
  local_480 = 0;
  local_468 = 0;
  local_430 = param_1;
  local_3e0 = param_2;
  uVar21 = uVar6;
  if (0 < iVar8) {
    do {
      uVar22 = local_468;
      uVar5 = 0;
      if ((int)local_468 < iVar8) {
        uVar5 = ~local_468 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        uVar6 = (uint)local_480;
      }
      pFVar18 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x70;
      uVar22 = uVar6;
      switch(*(undefined4 *)(pFVar18 + 0x58)) {
      case 0:
        if ((local_488.Data <= (FScriptContainerElement *)&local_468) &&
           ((FScriptContainerElement *)&local_468 <
            local_488.Data + (longlong)(int)local_480._4_4_ * 4)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          uVar6 = (uint)local_480;
        }
        if (uVar6 == local_480._4_4_) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_488,(int *)((longlong)&local_480 + 4));
        }
        local_480 = CONCAT44(local_480._4_4_,uVar6 + 1);
        *(uint *)(local_488.Data + (longlong)(int)uVar6 * 4) = local_468;
        goto LAB_1418b1210;
      case 1:
      case 2:
        if ((int)uVar6 < 1) {
          local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_448.ArrayNum = 0;
          local_448.ArrayMax = 0;
          ::FString::ConstructFromPtrSize
                    (&local_3b0,*(wchar_t **)(pFVar18 + 0x40),
                     (int)(*(longlong *)(pFVar18 + 0x48) - (longlong)*(wchar_t **)(pFVar18 + 0x40)
                          >> 1));
          pFVar13 = FText::FromString(&local_2b8,&local_3b0);
          local_400.Type = Text;
          FText::FText((FText *)&local_400.TextValue,pFVar13);
          if ((local_400.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (((local_448.AllocatorInstance.Data <= &local_400) &&
              (&local_400 <
               (FFormatArgumentValue *)
               (local_448.AllocatorInstance.Data + (longlong)local_448.ArrayMax * 0x20))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          iVar8 = local_448.ArrayNum;
          if (local_448.ArrayNum == local_448.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_448.AllocatorInstance,&local_448.ArrayMax);
          }
          local_448.ArrayNum = iVar8 + 1;
          lVar20 = (longlong)iVar8 * 0x20;
          *(Type *)&local_448.AllocatorInstance.Data[lVar20].field_0x0 = local_400.Type;
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(float *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               local_400.field1_0x8.FloatValue;
          *(ulonglong *)(local_448.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_400.field1_0x8.IntValue._4_4_,local_400.field1_0x8.FloatValue);
          *(undefined8 *)&local_448.AllocatorInstance.Data[lVar20 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_448.AllocatorInstance.Data + lVar20 + 0x18) = 0;
          if ((local_400.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_448.AllocatorInstance.Data + lVar20 + 0x10),
                           (FText *)&local_400.TextValue),
             local_400.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_400.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_308,L"ExpressionParser",L"SyntaxError_NoUnaryOperand",
                               L"No operand for unary operator {0}");
          pFVar12 = FTextFormat::FTextFormat(&local_298,pFVar13,Default);
          pFVar13 = FText::Format(&local_318,pFVar12,&local_448);
          *(undefined8 *)&__return_storage_ptr__->Variant = 0;
          pIVar1 = (pFVar13->TextData).Reference;
          *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_3d4);
          }
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_318.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
          }
          if (local_308.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_448.AllocatorInstance.Data,local_448.ArrayNum);
          if ((FFormatArgumentValue *)local_448.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_448.AllocatorInstance.Data);
          }
        }
        else {
          iVar16 = uVar6 - 1;
          iVar8 = *(int *)(local_488.Data + (longlong)iVar16 * 4);
          iVar7 = (uVar6 - iVar16) + -1;
          if (iVar7 != 0) {
            memmove(local_488.Data + (longlong)iVar16 * 4,local_488.Data + (longlong)iVar16 * 4 + 4,
                    (longlong)iVar7 << 2);
            uVar6 = (uint)local_480;
          }
          local_480 = CONCAT44(local_480._4_4_,uVar6 - 1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_488,uVar6 - 1,(int *)((longlong)&local_480 + 4));
          pTVar11 = `ExpressionParser::Evaluate<wchar_t>'::__l2::<lambda_1>::operator()
                              (&local_430,iVar8);
          if (*(int *)(pFVar18 + 0x58) == 1) {
            uVar21 = uVar21 | 1;
            lVar20 = (**(code **)*param_2)(param_2,local_98);
          }
          else {
            uVar21 = uVar21 | 2;
            lVar20 = (**(code **)((longlong)*param_2 + 8))(param_2,local_e8,pFVar18,pTVar11);
          }
          local_148 = *(byte *)(lVar20 + 0x40);
          uVar19 = (ulonglong)local_148;
          if ((2 < local_148) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar19])(&local_188,lVar20);
          if ((uVar21 & 2) != 0) {
            uVar19 = (ulonglong)local_a8;
            uVar21 = uVar21 & 0xfffffffd;
            if ((2 < local_a8) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_e8);
          }
          if ((uVar21 & 1) != 0) {
            uVar19 = (ulonglong)local_58;
            uVar21 = uVar21 & 0xfffffffe;
            if ((2 < local_58) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_98);
          }
          uVar19 = (ulonglong)local_148;
          if ((2 < uVar19) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar19) != '\0') {
            if ((local_148 != 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            local_358.TypeId.A = 0;
            local_358.TypeId.B = 0;
            local_358.TypeId.C = 0;
            local_358.TypeId.D = 0;
            FExpressionNode::operator=(&local_358,(FExpressionNode *)&local_188);
            local_1e8.TypeId.A = 0;
            local_1e8.TypeId.B = 0;
            local_1e8.TypeId.C = 0;
            local_1e8.TypeId.D = 0;
            FExpressionNode::operator=(&local_1e8,&local_358);
            local_1a8 = *(undefined4 *)&(pTVar11->Context).TokenStart;
            puVar14 = local_358.InlineBytes;
            if (((local_358.TypeId.D == 0 && local_358.TypeId.C == 0) && local_358.TypeId.B == 0) &&
                local_358.TypeId.A == 0) {
              puVar14 = (uchar *)0x0;
            }
            uStack_1a4 = *(undefined4 *)((longlong)&(pTVar11->Context).TokenStart + 4);
            uStack_1a0 = *(undefined4 *)&(pTVar11->Context).TokenEnd;
            uStack_19c = *(undefined4 *)((longlong)&(pTVar11->Context).TokenEnd + 4);
            local_198._0_4_ = (pTVar11->Context).LineNumber;
            local_198._4_4_ = (pTVar11->Context).CharacterIndex;
            if (puVar14 != (uchar *)0x0) {
              (*(code *)**(undefined8 **)puVar14)(local_1a8,0);
            }
            iVar7 = (int)local_470;
            iVar8 = param_1->ArrayNum;
            iVar16 = (int)local_470;
            if ((int)local_470 == local_470._4_4_) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&local_478,(int *)((longlong)&local_470 + 4));
            }
            FVar2.Data = local_478.Data;
            local_470 = CONCAT44(local_470._4_4_,iVar16 + 1);
            lVar20 = (longlong)iVar16 * 0x60;
            (((FExpressionNode *)(local_478.Data + lVar20))->TypeId).A = 0;
            *(undefined8 *)(local_478.Data + lVar20 + 4) = 0;
            *(undefined4 *)(local_478.Data + lVar20 + 0xc) = 0;
            FExpressionNode::operator=((FExpressionNode *)(local_478.Data + lVar20),&local_1e8);
            local_460[0] = iVar7 + iVar8;
            pFVar18 = FVar2.Data + lVar20 + 0x40;
            *(ulonglong *)pFVar18 = CONCAT44(uStack_1a4,local_1a8);
            *(ulonglong *)(pFVar18 + 8) = CONCAT44(uStack_19c,uStack_1a0);
            *(undefined8 *)(FVar2.Data + lVar20 + 0x50) = local_198;
            if (((local_488.Data <= (FScriptContainerElement *)local_460) &&
                ((FScriptContainerElement *)local_460 <
                 local_488.Data + (longlong)(int)local_480._4_4_ * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            iVar8 = (uint)local_480;
            if ((uint)local_480 == local_480._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_488,(int *)((longlong)&local_480 + 4));
            }
            local_480 = CONCAT44(local_480._4_4_,iVar8 + 1);
            *(int *)(local_488.Data + (longlong)iVar8 * 4) = local_460[0];
            puVar14 = local_1e8.InlineBytes;
            if (((local_1e8.TypeId.D == 0 && local_1e8.TypeId.C == 0) && local_1e8.TypeId.B == 0) &&
                local_1e8.TypeId.A == 0) {
              puVar14 = (uchar *)0x0;
            }
            if (puVar14 != (uchar *)0x0) {
              (*(code *)**(undefined8 **)puVar14)(puVar14,0);
            }
            uVar19 = (ulonglong)local_148;
            if ((2 < local_148) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            pcVar10 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                ::__l2::Destructors)[uVar19];
            pFVar15 = (FExpressionNode *)&local_188;
            goto LAB_1418b120a;
          }
          if ((local_148 != 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          *(longlong **)&__return_storage_ptr__->Variant = local_188;
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 8))(local_188,local_3d8);
          }
          uVar19 = (ulonglong)local_148;
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = local_180;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if ((2 < local_148) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])(&local_188);
        }
        goto LAB_1418b1911;
      case 3:
        if ((int)uVar6 < 2) {
          local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.ArrayNum = 0;
          local_458.ArrayMax = 0;
          ::FString::ConstructFromPtrSize
                    (&local_3c0,*(wchar_t **)(pFVar18 + 0x40),
                     (int)(*(longlong *)(pFVar18 + 0x48) - (longlong)*(wchar_t **)(pFVar18 + 0x40)
                          >> 1));
          pFVar13 = FText::FromString(&local_2e8,&local_3c0);
          local_420.Type = Text;
          FText::FText((FText *)&local_420.TextValue,pFVar13);
          if ((local_420.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          if (((local_458.AllocatorInstance.Data <= &local_420) &&
              (&local_420 <
               (FFormatArgumentValue *)
               (local_458.AllocatorInstance.Data + (longlong)local_458.ArrayMax * 0x20))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          iVar8 = local_458.ArrayNum;
          if (local_458.ArrayNum == local_458.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_458.AllocatorInstance,&local_458.ArrayMax);
          }
          local_458.ArrayNum = iVar8 + 1;
          lVar20 = (longlong)iVar8 * 0x20;
          *(Type *)&local_458.AllocatorInstance.Data[lVar20].field_0x0 = local_420.Type;
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(float *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               local_420.field1_0x8.FloatValue;
          *(ulonglong *)(local_458.AllocatorInstance.Data + lVar20 + 8) =
               CONCAT44(local_420.field1_0x8.IntValue._4_4_,local_420.field1_0x8.FloatValue);
          *(undefined8 *)&local_458.AllocatorInstance.Data[lVar20 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_458.AllocatorInstance.Data + lVar20 + 0x18) = 0;
          if ((local_420.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_458.AllocatorInstance.Data + lVar20 + 0x10),
                           (FText *)&local_420.TextValue),
             local_420.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_420.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
          }
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_2c8,L"ExpressionParser",L"SyntaxError_NotEnoughOperandsBinary"
                               ,L"Not enough operands for binary operator {0}");
          pFVar12 = FTextFormat::FTextFormat(&local_2a8,pFVar13,Default);
          pFVar13 = FText::Format(&local_2d8,pFVar12,&local_458);
          *(undefined8 *)&__return_storage_ptr__->Variant = 0;
          pIVar1 = (pFVar13->TextData).Reference;
          *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_438);
          }
          *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
          }
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_458.AllocatorInstance.Data,local_458.ArrayNum);
          if ((FFormatArgumentValue *)local_458.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_458.AllocatorInstance.Data);
          }
          goto LAB_1418b1911;
        }
        iVar16 = uVar6 - 1;
        iVar8 = *(int *)(local_488.Data + (longlong)iVar16 * 4);
        iVar7 = (uVar6 - iVar16) + -1;
        if (iVar7 != 0) {
          memmove(local_488.Data + (longlong)iVar16 * 4,local_488.Data + (longlong)iVar16 * 4 + 4,
                  (longlong)iVar7 << 2);
          uVar6 = (uint)local_480;
        }
        local_480 = CONCAT44(local_480._4_4_,uVar6 - 1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_488,uVar6 - 1,(int *)((longlong)&local_480 + 4));
        `ExpressionParser::Evaluate<wchar_t>'::__l2::<lambda_1>::operator()(&local_430,iVar8);
        if ((int)(uint)local_480 < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
        }
        iVar17 = (uint)local_480 + -1;
        iVar8 = *(int *)(local_488.Data + (longlong)iVar17 * 4);
        iVar16 = ((uint)local_480 - iVar17) + -1;
        iVar7 = (uint)local_480;
        if (iVar16 != 0) {
          memmove(local_488.Data + (longlong)iVar17 * 4,local_488.Data + (longlong)iVar17 * 4 + 4,
                  (longlong)iVar16 << 2);
          iVar7 = (uint)local_480;
        }
        local_480 = CONCAT44(local_480._4_4_,iVar7 + -1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_488,iVar7 + -1,(int *)((longlong)&local_480 + 4));
        pTVar11 = `ExpressionParser::Evaluate<wchar_t>'::__l2::<lambda_1>::operator()
                            (&local_430,iVar8);
        (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_138,pFVar18,pTVar11);
        uVar19 = (ulonglong)local_f8;
        if ((2 < uVar19) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar19) == '\0') {
          if ((local_f8 != 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          local_3c8.Args = (TTuple<FExpressionError_&>)&local_138;
          TValueOrError<FExpressionNode,FExpressionError>::
          TValueOrError<FExpressionNode,FExpressionError><FExpressionError_&>
                    (__return_storage_ptr__,&local_3c8);
          if ((2 < local_f8) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar10 = (code *)swi(3);
            pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_f8])(&local_138);
          goto LAB_1418b1911;
        }
        if ((local_f8 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        local_398.TypeId.A = 0;
        local_398.TypeId.B = 0;
        local_398.TypeId.C = 0;
        local_398.TypeId.D = 0;
        FExpressionNode::operator=(&local_398,&local_138);
        local_248.TypeId.A = 0;
        local_248.TypeId.B = 0;
        local_248.TypeId.C = 0;
        local_248.TypeId.D = 0;
        FExpressionNode::operator=(&local_248,&local_398);
        local_208 = *(undefined4 *)&(pTVar11->Context).TokenStart;
        puVar14 = local_398.InlineBytes;
        if (((local_398.TypeId.D == 0 && local_398.TypeId.C == 0) && local_398.TypeId.B == 0) &&
            local_398.TypeId.A == 0) {
          puVar14 = (uchar *)0x0;
        }
        uStack_204 = *(undefined4 *)((longlong)&(pTVar11->Context).TokenStart + 4);
        uStack_200 = *(undefined4 *)&(pTVar11->Context).TokenEnd;
        uStack_1fc = *(undefined4 *)((longlong)&(pTVar11->Context).TokenEnd + 4);
        local_1f8._0_4_ = (pTVar11->Context).LineNumber;
        local_1f8._4_4_ = (pTVar11->Context).CharacterIndex;
        if (puVar14 != (uchar *)0x0) {
          (*(code *)**(undefined8 **)puVar14)(local_208,0);
        }
        iVar7 = (int)local_470;
        iVar8 = param_1->ArrayNum;
        iVar16 = (int)local_470;
        if ((int)local_470 == local_470._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&local_478,(int *)((longlong)&local_470 + 4));
        }
        FVar2.Data = local_478.Data;
        local_470 = CONCAT44(local_470._4_4_,iVar16 + 1);
        lVar20 = (longlong)iVar16 * 0x60;
        (((FExpressionNode *)(local_478.Data + lVar20))->TypeId).A = 0;
        *(undefined8 *)(local_478.Data + lVar20 + 4) = 0;
        *(undefined4 *)(local_478.Data + lVar20 + 0xc) = 0;
        FExpressionNode::operator=((FExpressionNode *)(local_478.Data + lVar20),&local_248);
        local_464 = iVar8 + iVar7;
        pFVar18 = FVar2.Data + lVar20 + 0x40;
        *(ulonglong *)pFVar18 = CONCAT44(uStack_204,local_208);
        *(ulonglong *)(pFVar18 + 8) = CONCAT44(uStack_1fc,uStack_200);
        *(undefined8 *)(FVar2.Data + lVar20 + 0x50) = local_1f8;
        if (((local_488.Data <= (FScriptContainerElement *)&local_464) &&
            ((FScriptContainerElement *)&local_464 <
             local_488.Data + (longlong)(int)local_480._4_4_ * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        iVar8 = (uint)local_480;
        if ((uint)local_480 == local_480._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_488,(int *)((longlong)&local_480 + 4));
        }
        local_480 = CONCAT44(local_480._4_4_,iVar8 + 1);
        *(int *)(local_488.Data + (longlong)iVar8 * 4) = local_464;
        puVar14 = local_248.InlineBytes;
        if (((local_248.TypeId.D == 0 && local_248.TypeId.C == 0) && local_248.TypeId.B == 0) &&
            local_248.TypeId.A == 0) {
          puVar14 = (uchar *)0x0;
        }
        if (puVar14 != (uchar *)0x0) {
          (*(code *)**(undefined8 **)puVar14)(puVar14,0);
        }
        uVar19 = (ulonglong)local_f8;
        if ((2 < local_f8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar10 = (code *)swi(3);
          pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
          return pTVar9;
        }
        pcVar10 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar19];
        pFVar15 = &local_138;
LAB_1418b120a:
        (*pcVar10)(pFVar15);
        param_2 = local_3e0;
LAB_1418b1210:
        uVar22 = (uint)local_480;
        break;
      case 4:
        if ((0 < (int)uVar6) && (pFVar18[0x60] != (FScriptContainerElement)0x0)) {
          pcVar10 = *(code **)((longlong)*param_2 + 0x18);
          uVar22 = 0;
          if ((int)(uVar6 - 1) < (int)uVar6) {
            uVar22 = ~(uVar6 - 1) >> 0x1f;
          }
          if (uVar22 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            uVar6 = (uint)local_480;
          }
          pTVar11 = `ExpressionParser::Evaluate<wchar_t>'::__l2::<lambda_1>::operator()
                              (&local_430,*(int *)(local_488.Data + (longlong)(int)uVar6 * 4 + -4));
          cVar4 = (*pcVar10)(param_2,pFVar18,pTVar11);
          if (cVar4 != '\0') {
            if ((pFVar18[0x60] == (FScriptContainerElement)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar3)) {
              pcVar10 = (code *)swi(3);
              pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar10)();
              return pTVar9;
            }
            local_468 = *(uint *)(pFVar18 + 0x5c);
          }
          goto LAB_1418b1210;
        }
      }
      iVar8 = param_1->ArrayNum;
      local_468 = local_468 + 1;
      uVar6 = uVar22;
    } while ((int)local_468 < iVar8);
  }
  if (uVar22 == 1) {
    pTVar11 = `ExpressionParser::Evaluate<wchar_t>'::__l2::<lambda_1>::operator()
                        (&local_430,*(uint *)local_488.Data);
    puVar14 = (pTVar11->Node).InlineBytes;
    if ((((pTVar11->Node).TypeId.D == 0 && (pTVar11->Node).TypeId.C == 0) &&
        (pTVar11->Node).TypeId.B == 0) && (pTVar11->Node).TypeId.A == 0) {
      puVar14 = (uchar *)0x0;
    }
    if (puVar14 == (uchar *)0x0) {
      local_288.TypeId.A = 0;
      local_288.TypeId.B = 0;
      local_288.InlineBytes[0] = '\0';
      local_288.InlineBytes[1] = '\0';
      local_288.InlineBytes[2] = '\0';
      local_288.InlineBytes[3] = '\0';
      local_288.InlineBytes[4] = '\0';
      local_288.InlineBytes[5] = '\0';
      local_288.InlineBytes[6] = '\0';
      local_288.InlineBytes[7] = '\0';
      local_288.InlineBytes[8] = '\0';
      local_288.InlineBytes[9] = '\0';
      local_288.InlineBytes[10] = '\0';
      local_288.InlineBytes[0xb] = '\0';
      local_288.InlineBytes[0xc] = '\0';
      local_288.InlineBytes[0xd] = '\0';
      local_288.InlineBytes[0xe] = '\0';
      local_288.InlineBytes[0xf] = '\0';
      local_288.InlineBytes[0x10] = '\0';
      local_288.InlineBytes[0x11] = '\0';
      local_288.InlineBytes[0x12] = '\0';
      local_288.InlineBytes[0x13] = '\0';
      local_288.InlineBytes[0x14] = '\0';
      local_288.InlineBytes[0x15] = '\0';
      local_288.InlineBytes[0x16] = '\0';
      local_288.InlineBytes[0x17] = '\0';
      local_288.InlineBytes[0x18] = '\0';
      local_288.InlineBytes[0x19] = '\0';
      local_288.InlineBytes[0x1a] = '\0';
      local_288.InlineBytes[0x1b] = '\0';
      local_288.InlineBytes[0x1c] = '\0';
      local_288.InlineBytes[0x1d] = '\0';
      local_288.InlineBytes[0x1e] = '\0';
      local_288.InlineBytes[0x1f] = '\0';
      local_288.InlineBytes[0x20] = '\0';
      local_288.InlineBytes[0x21] = '\0';
      local_288.InlineBytes[0x22] = '\0';
      local_288.InlineBytes[0x23] = '\0';
      local_288.InlineBytes[0x24] = '\0';
      local_288.InlineBytes[0x25] = '\0';
      local_288.InlineBytes[0x26] = '\0';
      local_288.InlineBytes[0x27] = '\0';
      local_288.InlineBytes[0x28] = '\0';
      local_288.InlineBytes[0x29] = '\0';
      local_288.InlineBytes[0x2a] = '\0';
      local_288.InlineBytes[0x2b] = '\0';
      local_288.InlineBytes[0x2c] = '\0';
      local_288.InlineBytes[0x2d] = '\0';
      local_288.InlineBytes[0x2e] = '\0';
      local_288.InlineBytes[0x2f] = '\0';
      local_288.TypeId.C = 0;
      local_288.TypeId.D = 0;
    }
    else {
      (**(code **)(*(longlong *)puVar14 + 0x18))(puVar14,&local_288);
    }
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    *(undefined8 *)&(__return_storage_ptr__->Variant).field_0x8 = 0;
    FExpressionNode::operator=((FExpressionNode *)__return_storage_ptr__,&local_288);
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    puVar14 = local_288.InlineBytes;
    if (((local_288.TypeId.D == 0 && local_288.TypeId.C == 0) && local_288.TypeId.B == 0) &&
        local_288.TypeId.A == 0) {
      puVar14 = (uchar *)0x0;
    }
    if (puVar14 != (uchar *)0x0) {
      (*(code *)**(undefined8 **)puVar14)(puVar14,0);
    }
  }
  else {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_2f8,L"ExpressionParser",L"SyntaxError_InvalidExpression",
                         L"Could not evaluate expression");
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar13->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_3d0);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar13->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
  }
LAB_1418b1911:
  if (local_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data);
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)local_478.Data,(int)local_470);
  if ((TExpressionToken<wchar_t> *)local_478.Data != (TExpressionToken<wchar_t> *)0x0) {
    FMemory::Free(local_478.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate<wchar_t> @ 1418b1990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<wchar_t>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,wchar_t *param_1,
          TTokenDefinitions<wchar_t> *param_2,FExpressionGrammar *param_3,
          TIOperatorEvaluationEnvironment<wchar_t> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  Compile<wchar_t>(&local_50,param_1,param_2,param_3);
  uVar4 = (ulonglong)local_50.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    if (local_50.Variant.TypeIndex != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    *(longlong *)&__return_storage_ptr__->Variant = local_50.Variant._padding_;
    if ((FScriptContainerElement *)local_50.Variant._padding_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_50.Variant._padding_ + 8))
                (local_50.Variant._padding_,local_58);
    }
    *(int *)&(__return_storage_ptr__->Variant).field_0x8 = (int)local_50.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  else {
    if (local_50.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    Evaluate<wchar_t>(__return_storage_ptr__,
                      (TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *)&local_50,
                      param_4);
    if (2 < local_50.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  return __return_storage_ptr__;
}

// Evaluate<wchar_t,void> @ 1418b1b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<wchar_t,void>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,wchar_t *param_1,
          TTokenDefinitions<wchar_t> *param_2,FExpressionGrammar *param_3,
          TOperatorJumpTable<void,wchar_t> *param_4,void *param_5)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TIOperatorEvaluationEnvironment<wchar_t> local_50;
  TOperatorJumpTable<void,wchar_t> *local_48;
  void *local_40;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_50 = (TIOperatorEvaluationEnvironment<wchar_t>)
             &___7__TOperatorEvaluationEnvironment_X_W__6B_;
  local_48 = param_4;
  local_40 = param_5;
  Compile<wchar_t>(&local_38,param_1,param_2,param_3);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    if (local_38.Variant.TypeIndex != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    *(longlong *)&__return_storage_ptr__->Variant = local_38.Variant._padding_;
    if ((FScriptContainerElement *)local_38.Variant._padding_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_38.Variant._padding_ + 8))
                (local_38.Variant._padding_,local_58);
    }
    *(int *)&(__return_storage_ptr__->Variant).field_0x8 = (int)local_38.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    Evaluate<wchar_t>(__return_storage_ptr__,
                      (TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *)&local_38,
                      &local_50);
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_> @ 1418b2bb0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar12 = iVar11;
  iVar19 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_1418b2d22:
      if (iVar19 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar18 = param_1 + lVar13;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar18->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10);
            pTVar18->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10) = uVar3;
            iVar12 = 0;
            if (1 < iVar11) {
              do {
                iVar19 = iVar12 * 2;
                iVar9 = iVar19 + 1;
                if (iVar19 + 2 < iVar11) {
                  lVar14 = (longlong)iVar19;
                  if (*(int *)((longlong)param_1 + (lVar14 + 1) * 0x18 + 8) == 0) {
                    pwVar16 = L"";
                  }
                  else {
                    pwVar16 = *(wchar_t **)&param_1[lVar14 + 1]._s_1;
                  }
                  if (*(int *)((longlong)param_1 + lVar14 * 0x18 + 0x38) == 0) {
                    pwVar15 = L"";
                  }
                  else {
                    pwVar15 = *(wchar_t **)&param_1[lVar14 + 2]._s_1;
                  }
                  iVar17 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar16);
                  if (iVar17 < 0) {
                    iVar9 = iVar19;
                  }
                  iVar9 = iVar9 + 1;
                }
                pTVar1 = param_1 + iVar12;
                pTVar2 = param_1 + iVar9;
                if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 8) == 0) {
                  pwVar16 = L"";
                }
                else {
                  pwVar16 = *(wchar_t **)&pTVar2->_s_1;
                }
                if (*(int *)((pTVar1->ElementData).Pad + 8) == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = *(wchar_t **)&pTVar1->_s_1;
                }
                iVar12 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar16);
                if (-1 < iVar12) break;
                uVar5 = *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8);
                TVar6 = pTVar1->_s_1;
                uVar7 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                pTVar1->_s_1 = pTVar2->_s_1;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) =
                     *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x10);
                pTVar2->_s_1 = TVar6;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x10) = uVar3;
                iVar12 = iVar9;
              } while (iVar9 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pTVar18 = pTVar18 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar9 = iVar19 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar19 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar17 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      lVar13 = (longlong)iVar11;
      if (*(int *)((longlong)param_1 + (lVar13 + 1) * 0x18 + 8) == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = *(wchar_t **)&param_1[lVar13 + 1]._s_1;
      }
      if (*(int *)((longlong)param_1 + lVar13 * 0x18 + 0x38) == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)&param_1[lVar13 + 2]._s_1;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar16);
      if (iVar10 < 0) {
        iVar17 = iVar11;
      }
      iVar17 = iVar17 + 1;
    }
    pTVar18 = param_1 + iVar9;
    pTVar1 = param_1 + iVar17;
    if (*(int *)((longlong)param_1 + (longlong)iVar17 * 0x18 + 8) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = *(wchar_t **)&pTVar1->_s_1;
    }
    if (*(int *)((pTVar18->ElementData).Pad + 8) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = *(wchar_t **)&pTVar18->_s_1;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar16);
    if (-1 < iVar11) goto LAB_1418b2d22;
    uVar5 = *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8);
    iVar11 = iVar17 * 2 + 1;
    uVar3 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
    TVar6 = pTVar18->_s_1;
    uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
    pTVar18->_s_1 = pTVar1->_s_1;
    *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar5;
    *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x10);
    pTVar1->_s_1 = TVar6;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x10) = uVar3;
    iVar9 = iVar17;
  } while( true );
}

// HeapSortInternal<FName,int,FIdentityFunctor,`FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos'::__l5::<lambda_1>_> @ 1418b2ea0

void __cdecl
AlgoImpl::
HeapSortInternal<FName,int,FIdentityFunctor,_FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos_::__l5::<lambda_1>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar6 = iVar4 * 2 + 1;
  iVar8 = iVar4;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar6) {
LAB_1418b2fe1:
      if (iVar8 == 0) {
        iVar6 = param_2 + -1;
        lVar9 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar10 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar6) {
              do {
                iVar4 = iVar10 * 2;
                iVar8 = iVar4 + 1;
                if (iVar4 + 2 < iVar6) {
                  local_38 = param_1[iVar8];
                  local_30 = param_1[(longlong)iVar4 + 2];
                  iVar7 = ::FName::Compare(&local_30,&local_38);
                  if (iVar7 < 0) {
                    iVar8 = iVar4;
                  }
                  iVar8 = iVar8 + 1;
                }
                local_28 = param_1[iVar8];
                local_20 = param_1[iVar10];
                iVar4 = ::FName::Compare(&local_20,&local_28);
                if (-1 < iVar4) break;
                FVar1 = param_1[iVar10];
                param_1[iVar10] = param_1[iVar8];
                param_1[iVar8] = FVar1;
                iVar10 = iVar8;
              } while (iVar8 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar6 = iVar10 + -2;
      iVar8 = iVar4;
      iVar10 = iVar6;
    }
    iVar6 = iVar4 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      local_58 = param_1[iVar7];
      local_50 = param_1[(longlong)iVar6 + 2];
      iVar5 = ::FName::Compare(&local_50,&local_58);
      if (iVar5 < 0) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    local_48 = param_1[iVar7];
    local_40 = param_1[iVar4];
    iVar6 = ::FName::Compare(&local_40,&local_48);
    if (-1 < iVar6) goto LAB_1418b2fe1;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = FVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst>_> @ 1418b3100

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FMaintenance::DeleteOldLogs_::__l5::FSortByDateNewestFirst>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_public:_static_void___cdecl_FMaintenance::DeleteOldLogs(void)_::_5_::FSortByDateNewestFirst>
          param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FString *pFVar12;
  FString *pFVar13;
  int iVar14;
  FString *pFVar15;
  
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
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1418b3227:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar12 = param_1 + lVar11;
          do {
            iVar9 = (pFVar12->Data).ArrayNum;
            iVar6 = (pFVar12->Data).ArrayMax;
            iVar14 = 0;
            pFVar2 = (param_1->Data).AllocatorInstance.Data;
            iVar10 = (param_1->Data).ArrayNum;
            iVar8 = (param_1->Data).ArrayMax;
            (param_1->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
            (param_1->Data).ArrayNum = iVar9;
            (param_1->Data).ArrayMax = iVar6;
            (pFVar12->Data).AllocatorInstance.Data = pFVar2;
            (pFVar12->Data).ArrayNum = iVar10;
            (pFVar12->Data).ArrayMax = iVar8;
            if (1 < iVar7) {
              do {
                iVar6 = iVar14 * 2;
                iVar9 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  bVar5 = `FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
                                    (param_4.Predicate,param_1 + (iVar6 + 2),param_1 + iVar9);
                  if (bVar5) {
                    iVar9 = iVar6;
                  }
                  iVar9 = iVar9 + 1;
                }
                pFVar13 = param_1 + iVar9;
                pFVar15 = param_1 + iVar14;
                bVar5 = `FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
                                  (param_4.Predicate,pFVar15,pFVar13);
                if (!bVar5) break;
                pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
                iVar8 = (pFVar15->Data).ArrayNum;
                iVar14 = (pFVar15->Data).ArrayMax;
                iVar6 = (pFVar13->Data).ArrayNum;
                iVar10 = (pFVar13->Data).ArrayMax;
                (pFVar15->Data).AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
                (pFVar15->Data).ArrayNum = iVar6;
                (pFVar15->Data).ArrayMax = iVar10;
                (pFVar13->Data).AllocatorInstance.Data = pFVar2;
                (pFVar13->Data).ArrayNum = iVar8;
                (pFVar13->Data).ArrayMax = iVar14;
                iVar14 = iVar9;
              } while (iVar9 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar12 = param_1 + iVar8;
    pFVar13 = param_1 + iVar6;
    bVar5 = `FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
                      (param_4.Predicate,pFVar13,pFVar12);
    if (!bVar5) goto LAB_1418b3227;
    pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
    iVar3 = (pFVar13->Data).ArrayNum;
    iVar4 = (pFVar13->Data).ArrayMax;
    iVar7 = iVar8 * 2 + 1;
    iVar6 = (pFVar12->Data).ArrayNum;
    iVar14 = (pFVar12->Data).ArrayMax;
    (pFVar13->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar13->Data).ArrayNum = iVar6;
    (pFVar13->Data).ArrayMax = iVar14;
    (pFVar12->Data).AllocatorInstance.Data = pFVar2;
    (pFVar12->Data).ArrayNum = iVar3;
    (pFVar12->Data).ArrayMax = iVar4;
    iVar6 = iVar8;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_> @ 1418b3330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppTVar12 = &local_348;
    do {
      pTVar9 = ppTVar12[1];
      pTVar16 = *ppTVar12;
      local_358 = ppTVar12[2];
      iVar7 = (int)(((longlong)pTVar9 - (longlong)pTVar16) / 0x18) + 1;
      pTVar15 = pTVar16;
      iVar11 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1418b3410:
        if (8 < iVar7) {
          uVar2 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
          pTVar13 = pTVar9 + 1;
          lVar5 = (longlong)(iVar7 / 2);
          TVar3 = pTVar15[lVar5]._s_1;
          uVar4 = *(undefined8 *)((longlong)pTVar15[lVar5].ElementData.Pad + 8);
          uVar1 = *(undefined8 *)((longlong)pTVar15 + lVar5 * 0x18 + 0x10);
          pTVar15[lVar5]._s_1 = pTVar15->_s_1;
          *(undefined8 *)((longlong)pTVar15[lVar5].ElementData.Pad + 8) = uVar2;
          *(undefined8 *)((longlong)pTVar15 + lVar5 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
          pTVar15->_s_1 = TVar3;
          *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar1;
          pTVar16 = pTVar15;
LAB_1418b3460:
          pTVar10 = pTVar16;
          pTVar16 = pTVar10 + 1;
          if (pTVar16 <= pTVar9) goto code_r0x0001418b3469;
          goto LAB_1418b34a0;
        }
        for (; pTVar13 = pTVar15, pTVar16 = pTVar15, pTVar15 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar10 = pTVar13, pTVar16 = pTVar16 + 1, pTVar16 <= pTVar9) {
            if (*(int *)((pTVar16->ElementData).Pad + 8) == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = *(wchar_t **)&pTVar16->_s_1;
            }
            if (*(int *)((pTVar10->ElementData).Pad + 8) == 0) {
              pwVar6 = L"";
            }
            else {
              pwVar6 = *(wchar_t **)&pTVar10->_s_1;
            }
            iVar11 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar8);
            pTVar13 = pTVar16;
            if (-1 < iVar11) {
              pTVar13 = pTVar10;
            }
          }
          TVar3 = pTVar10->_s_1;
          uVar2 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          uVar1 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar9->ElementData).Pad + 8);
          pTVar10->_s_1 = pTVar9->_s_1;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar9->ElementData).Pad + 0x10);
          pTVar9->_s_1 = TVar3;
          *(undefined8 *)((pTVar9->ElementData).Pad + 8) = uVar2;
          *(undefined8 *)((pTVar9->ElementData).Pad + 0x10) = uVar1;
        }
        goto LAB_1418b3601;
      }
LAB_1418b35e8:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
                (pTVar16,iVar7,param_3,param_4);
LAB_1418b3601:
      ppTVar12 = ppTVar12 + -3;
    } while (&local_348 <= ppTVar12);
  }
  return;
code_r0x0001418b3469:
  if (*(int *)((longlong)pTVar10 + 0x20) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)&pTVar16->_s_1;
  }
  if (*(int *)((pTVar15->ElementData).Pad + 8) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = *(wchar_t **)&pTVar15->_s_1;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar8);
  if (-1 < iVar7) goto LAB_1418b3460;
LAB_1418b34a0:
  do {
    pTVar14 = pTVar13;
    pTVar13 = pTVar14 + -1;
    if (pTVar13 <= pTVar15) break;
    if (*(int *)((pTVar15->ElementData).Pad + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)&pTVar15->_s_1;
    }
    if (*(int *)((longlong)pTVar14 + -0x10) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)&pTVar13->_s_1;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar8);
  } while (-1 < iVar7);
  uVar1 = *(undefined8 *)((longlong)pTVar14 + -0x10);
  if (pTVar16 <= pTVar13) {
    TVar3 = pTVar16->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar10 + 0x20);
    uVar2 = *(undefined8 *)((longlong)pTVar10 + 0x28);
    pTVar16->_s_1 = pTVar13->_s_1;
    *(undefined8 *)((longlong)pTVar10 + 0x20) = uVar1;
    *(undefined8 *)((longlong)pTVar10 + 0x28) = *(undefined8 *)((longlong)pTVar14 + -8);
    pTVar13->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar4;
    *(undefined8 *)((longlong)pTVar14 + -8) = uVar2;
    goto LAB_1418b3460;
  }
  TVar3 = pTVar15->_s_1;
  uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
  uVar2 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
  lVar5 = (longlong)pTVar13 + (-0x18 - (longlong)pTVar15);
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  pTVar15->_s_1 = pTVar13->_s_1;
  *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar1;
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar14 + -8);
  iVar11 = iVar11 + -1;
  pTVar13->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar4;
  *(undefined8 *)((longlong)pTVar14 + -8) = uVar2;
  if ((lVar5 >> 2) - (lVar5 >> 0x3f) < ((longlong)pTVar9 - (longlong)pTVar16) / 0x18) {
    if (pTVar16 < pTVar9) {
      *ppTVar12 = pTVar16;
      ppTVar12[1] = pTVar9;
      *(int *)(ppTVar12 + 2) = iVar11;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar13 <= pTVar15 + 1) goto LAB_1418b3601;
    pTVar9 = pTVar14 + -2;
    pTVar16 = pTVar15;
  }
  else {
    if (pTVar15 + 1 < pTVar13) {
      *ppTVar12 = pTVar15;
      ppTVar12[1] = pTVar14 + -2;
      *(int *)(ppTVar12 + 2) = iVar11;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar9 <= pTVar16) goto LAB_1418b3601;
  }
  iVar7 = (int)(((longlong)pTVar9 - (longlong)pTVar16) / 0x18) + 1;
  pTVar15 = pTVar16;
  if (iVar11 == 0) goto LAB_1418b35e8;
  goto LAB_1418b3410;
}

// IntroSortInternal<FName,int,FIdentityFunctor,`FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos'::__l5::<lambda_1>_> @ 1418b3710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FName,int,FIdentityFunctor,_FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos_::__l5::<lambda_1>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FName *pFVar4;
  int iVar5;
  FName **ppFVar6;
  FName *pFVar7;
  FName *pFVar8;
  FName *pFVar9;
  float fVar10;
  undefined1 auStack_398 [32];
  FName local_378;
  FName local_370 [3];
  FName *local_358;
  FName *local_348;
  FName *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    ppFVar6 = &local_348;
    do {
      pFVar3 = ppFVar6[1];
      pFVar4 = *ppFVar6;
      local_358 = ppFVar6[2];
      iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar4 >> 3) + 1;
      pFVar9 = pFVar4;
      iVar5 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1418b37d0:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          pFVar7 = pFVar3 + 1;
          FVar1 = pFVar9[iVar2 >> 1];
          pFVar9[iVar2 >> 1] = *pFVar9;
          *pFVar9 = FVar1;
          pFVar4 = pFVar9;
LAB_1418b3800:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar3) goto code_r0x0001418b3809;
          goto LAB_1418b3830;
        }
        for (; pFVar7 = pFVar9, pFVar4 = pFVar9, pFVar9 < pFVar3; pFVar3 = pFVar3 + -1) {
          while (pFVar8 = pFVar7, pFVar4 = pFVar4 + 1, pFVar4 <= pFVar3) {
            local_370[0] = *pFVar4;
            local_378 = *pFVar8;
            iVar5 = ::FName::Compare(&local_378,local_370);
            pFVar7 = pFVar4;
            if (-1 < iVar5) {
              pFVar7 = pFVar8;
            }
          }
          FVar1 = *pFVar8;
          *pFVar8 = *pFVar3;
          *pFVar3 = FVar1;
        }
        goto LAB_1418b390b;
      }
LAB_1418b38f9:
      HeapSortInternal<FName,int,FIdentityFunctor,_FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos_::__l5::<lambda_1>_>
                (pFVar4,iVar2,param_3,param_4);
LAB_1418b390b:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_348 <= ppFVar6);
  }
  return;
code_r0x0001418b3809:
  local_378 = *pFVar4;
  local_370[0] = *pFVar9;
  iVar2 = ::FName::Compare(local_370,&local_378);
  if (-1 < iVar2) goto LAB_1418b3800;
LAB_1418b3830:
  do {
    pFVar8 = pFVar7;
    pFVar7 = pFVar8 + -1;
    if (pFVar7 <= pFVar9) break;
    local_370[0] = *pFVar9;
    local_378 = *pFVar7;
    iVar2 = ::FName::Compare(&local_378,local_370);
  } while (-1 < iVar2);
  if (pFVar4 <= pFVar7) {
    FVar1 = *pFVar4;
    *pFVar4 = *pFVar7;
    *pFVar7 = FVar1;
    goto LAB_1418b3800;
  }
  FVar1 = *pFVar9;
  iVar5 = iVar5 + -1;
  *pFVar9 = *pFVar7;
  *pFVar7 = FVar1;
  if ((longlong)((longlong)pFVar7 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar3 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar3) {
      *ppFVar6 = pFVar4;
      ppFVar6[1] = pFVar3;
      *(int *)(ppFVar6 + 2) = iVar5;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar7 <= pFVar9 + 1) goto LAB_1418b390b;
    pFVar3 = pFVar8 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar7) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar8 + -2;
      *(int *)(ppFVar6 + 2) = iVar5;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar3 <= pFVar4) goto LAB_1418b390b;
  }
  iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if (iVar5 == 0) goto LAB_1418b38f9;
  goto LAB_1418b37d0;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst>_> @ 1418b39e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FMaintenance::DeleteOldLogs_::__l5::FSortByDateNewestFirst>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_public:_static_void___cdecl_FMaintenance::DeleteOldLogs(void)_::_5_::FSortByDateNewestFirst>
          param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString **ppFVar14;
  int iVar15;
  FString *pFVar16;
  FString *pFVar17;
  FString *pFVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  FString *local_358;
  FString *local_348;
  FString *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppFVar14 = &local_348;
    do {
      pFVar18 = ppFVar14[1];
      pFVar17 = *ppFVar14;
      local_358 = ppFVar14[2];
      iVar10 = (int)((longlong)pFVar18 - (longlong)pFVar17 >> 4) + 1;
      pFVar16 = pFVar17;
      iVar15 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1418b3aa0:
        if (8 < iVar10) {
          iVar5 = (pFVar16->Data).ArrayNum;
          iVar6 = (pFVar16->Data).ArrayMax;
          pFVar11 = pFVar18 + 1;
          pFVar17 = pFVar16 + iVar10 / 2;
          pFVar1 = (pFVar17->Data).AllocatorInstance.Data;
          iVar7 = (pFVar17->Data).ArrayNum;
          iVar8 = (pFVar17->Data).ArrayMax;
          pFVar17 = pFVar16 + iVar10 / 2;
          (pFVar17->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar17->Data).ArrayNum = iVar5;
          (pFVar17->Data).ArrayMax = iVar6;
          (pFVar16->Data).AllocatorInstance.Data = pFVar1;
          (pFVar16->Data).ArrayNum = iVar7;
          (pFVar16->Data).ArrayMax = iVar8;
          pFVar17 = pFVar16;
LAB_1418b3ad0:
          pFVar13 = pFVar17;
          pFVar17 = pFVar13 + 1;
          if (pFVar17 <= pFVar18) goto code_r0x0001418b3ad9;
          goto LAB_1418b3af0;
        }
        for (; pFVar11 = pFVar16, pFVar17 = pFVar16, pFVar16 < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar13 = pFVar11, pFVar17 = pFVar17 + 1, pFVar17 <= pFVar18) {
            bVar9 = `FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
                              (param_4.Predicate,pFVar13,pFVar17);
            pFVar11 = pFVar17;
            if (!bVar9) {
              pFVar11 = pFVar13;
            }
          }
          pFVar1 = (pFVar13->Data).AllocatorInstance.Data;
          iVar5 = (pFVar13->Data).ArrayNum;
          iVar6 = (pFVar13->Data).ArrayMax;
          iVar15 = (pFVar18->Data).ArrayNum;
          iVar10 = (pFVar18->Data).ArrayMax;
          (pFVar13->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar13->Data).ArrayNum = iVar15;
          (pFVar13->Data).ArrayMax = iVar10;
          (pFVar18->Data).AllocatorInstance.Data = pFVar1;
          (pFVar18->Data).ArrayNum = iVar5;
          (pFVar18->Data).ArrayMax = iVar6;
        }
        goto LAB_1418b3bbf;
      }
LAB_1418b3bae:
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FMaintenance::DeleteOldLogs_::__l5::FSortByDateNewestFirst>_>
                (pFVar17,iVar10,param_3,param_4);
LAB_1418b3bbf:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_348 <= ppFVar14);
  }
  return;
code_r0x0001418b3ad9:
  bVar9 = `FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
                    (param_4.Predicate,pFVar16,pFVar17);
  if (!bVar9) goto LAB_1418b3ad0;
LAB_1418b3af0:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar16) break;
    bVar9 = `FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
                      (param_4.Predicate,pFVar11,pFVar16);
  } while (!bVar9);
  pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
  uVar2 = pFVar12[-1].Data.ArrayNum;
  uVar3 = pFVar12[-1].Data.ArrayMax;
  if (pFVar17 <= pFVar11) {
    pFVar4 = (pFVar17->Data).AllocatorInstance.Data;
    iVar10 = pFVar13[1].Data.ArrayNum;
    iVar5 = pFVar13[1].Data.ArrayMax;
    (pFVar17->Data).AllocatorInstance.Data = pFVar1;
    pFVar13[1].Data.ArrayNum = uVar2;
    pFVar13[1].Data.ArrayMax = uVar3;
    (pFVar11->Data).AllocatorInstance.Data = pFVar4;
    pFVar12[-1].Data.ArrayNum = iVar10;
    pFVar12[-1].Data.ArrayMax = iVar5;
    goto LAB_1418b3ad0;
  }
  pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
  iVar10 = (pFVar16->Data).ArrayNum;
  iVar5 = (pFVar16->Data).ArrayMax;
  iVar15 = iVar15 + -1;
  (pFVar16->Data).AllocatorInstance.Data = pFVar1;
  (pFVar16->Data).ArrayNum = uVar2;
  (pFVar16->Data).ArrayMax = uVar3;
  (pFVar11->Data).AllocatorInstance.Data = pFVar4;
  pFVar12[-1].Data.ArrayNum = iVar10;
  pFVar12[-1].Data.ArrayMax = iVar5;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)pFVar16) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar18 - (longlong)pFVar17 & 0xfffffffffffffff0U)) {
    if (pFVar17 < pFVar18) {
      *ppFVar14 = pFVar17;
      ppFVar14[1] = pFVar18;
      *(int *)(ppFVar14 + 2) = iVar15;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar11 <= pFVar16 + 1) goto LAB_1418b3bbf;
    pFVar18 = pFVar12 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar11) {
      *ppFVar14 = pFVar16;
      ppFVar14[1] = pFVar12 + -2;
      *(int *)(ppFVar14 + 2) = iVar15;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar18 <= pFVar17) goto LAB_1418b3bbf;
  }
  iVar10 = (int)((longlong)pFVar18 - (longlong)pFVar17 >> 4) + 1;
  pFVar16 = pFVar17;
  if (iVar15 == 0) goto LAB_1418b3bae;
  goto LAB_1418b3aa0;
}

// Launch<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>'::__l2::<lambda_1>_> @ 1418b3c80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>_::__l2::<lambda_1>_>
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
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ__Private_Tasks_UE__6B_
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

// Launch<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>'::__l2::<lambda_1>_> @ 1418b3d70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>_::__l2::<lambda_1>_>
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
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
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

// Launch<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>'::__l2::<lambda_1>_> @ 1418b3e60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>_::__l2::<lambda_1>_>
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
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
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

// Launch<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector>'::__l2::<lambda_1>_> @ 1418b3f50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector>_::__l2::<lambda_1>_>
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
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
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

// Launch<`UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_const_&> @ 1418b4040

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,
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
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____Wait_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_NAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____Wait_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_NAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z__Private_Tasks_UE__6B_
    ;
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

// Lex<char> @ 1418b4130

TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError> * __cdecl
ExpressionParser::Lex<char>
          (TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>
           *__return_storage_ptr__,char *param_1,TTokenDefinitions<char> *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined1 local_res10 [8];
  TOptional<FExpressionError> local_78;
  FText local_60;
  char local_50;
  TExpressionTokenConsumer<char> local_48;
  
  local_48.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Tokens.ArrayNum = 0;
  local_48.Tokens.ArrayMax = 0;
  local_48.Stream.Start = param_1;
  sVar3 = strlen(param_1);
  local_48.Stream.End = param_1 + (int)sVar3;
  local_48.Stream.ReadPos = param_1;
  if (param_1 != local_48.Stream.End) {
    do {
      TTokenDefinitions<char>::ConsumeToken(param_2,&local_78,&local_48);
      if (local_78.bIsSet != false) {
        local_50 = local_78.bIsSet;
        FText::FText(&local_60,(FText *)&local_78);
        if ((local_78.bIsSet != false) &&
           (local_78.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_78.TypedValue.Text.TextData.Reference + 0x10))();
        }
        if (local_50 == '\0') goto LAB_1418b41aa;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_60.TextData.Reference;
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 8))
                    (local_60.TextData.Reference,local_res10);
        }
        *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_60.Flags;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        goto joined_r0x0001418b428d;
      }
    } while (local_48.Stream.ReadPos != local_48.Stream.End);
  }
  local_50 = '\0';
LAB_1418b41aa:
  iVar1 = local_48.Tokens.ArrayNum;
  iVar2 = local_48.Tokens.ArrayMax;
  local_78.TypedValue.Text.TextData.Reference = (ITextData *)0x0;
  local_78.TypedValue.Text.Flags = 0;
  local_78.TypedValue.Text._12_4_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ =
       local_48.Tokens.AllocatorInstance.Data._0_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
       local_48.Tokens.AllocatorInstance.Data._4_4_;
  local_48.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Tokens.ArrayNum = 0;
  local_48.Tokens.ArrayMax = 0;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = iVar1;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = iVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  DestructItems<TExpressionToken<char>,int>((TExpressionToken<char> *)0x0,0);
joined_r0x0001418b428d:
  if ((local_50 != '\0') && (local_60.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  DestructItems<TExpressionToken<char>,int>
            ((TExpressionToken<char> *)local_48.Tokens.AllocatorInstance.Data,
             local_48.Tokens.ArrayNum);
  if ((TExpressionToken<char> *)local_48.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<char> *)0x0) {
    FMemory::Free(local_48.Tokens.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Lex<char8_t> @ 1418b42a0

TValueOrError<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError> *
__cdecl ExpressionParser::Lex<char8_t>
                  (TValueOrError<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                   *__return_storage_ptr__,uchar *param_1,TTokenDefinitions<char8_t> *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined1 local_res10 [8];
  TOptional<FExpressionError> local_78;
  FText local_60;
  char local_50;
  TExpressionTokenConsumer<char8_t> local_48;
  
  local_48.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Tokens.ArrayNum = 0;
  local_48.Tokens.ArrayMax = 0;
  local_48.Stream.Start = param_1;
  sVar3 = strlen((char *)param_1);
  local_48.Stream.End = param_1 + (int)sVar3;
  local_48.Stream.ReadPos = param_1;
  if (param_1 != local_48.Stream.End) {
    do {
      TTokenDefinitions<char8_t>::ConsumeToken(param_2,&local_78,&local_48);
      if (local_78.bIsSet != false) {
        local_50 = local_78.bIsSet;
        FText::FText(&local_60,(FText *)&local_78);
        if ((local_78.bIsSet != false) &&
           (local_78.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_78.TypedValue.Text.TextData.Reference + 0x10))();
        }
        if (local_50 == '\0') goto LAB_1418b431a;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_60.TextData.Reference;
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 8))
                    (local_60.TextData.Reference,local_res10);
        }
        *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_60.Flags;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        goto joined_r0x0001418b43fd;
      }
    } while (local_48.Stream.ReadPos != local_48.Stream.End);
  }
  local_50 = '\0';
LAB_1418b431a:
  iVar1 = local_48.Tokens.ArrayNum;
  iVar2 = local_48.Tokens.ArrayMax;
  local_78.TypedValue.Text.TextData.Reference = (ITextData *)0x0;
  local_78.TypedValue.Text.Flags = 0;
  local_78.TypedValue.Text._12_4_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ =
       local_48.Tokens.AllocatorInstance.Data._0_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
       local_48.Tokens.AllocatorInstance.Data._4_4_;
  local_48.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Tokens.ArrayNum = 0;
  local_48.Tokens.ArrayMax = 0;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = iVar1;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = iVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  DestructItems<TExpressionToken<char8_t>,int>((TExpressionToken<char8_t> *)0x0,0);
joined_r0x0001418b43fd:
  if ((local_50 != '\0') && (local_60.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  DestructItems<TExpressionToken<char8_t>,int>
            ((TExpressionToken<char8_t> *)local_48.Tokens.AllocatorInstance.Data,
             local_48.Tokens.ArrayNum);
  if ((TExpressionToken<char8_t> *)local_48.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<char8_t> *)0x0) {
    FMemory::Free(local_48.Tokens.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Lex<wchar_t> @ 1418b4410

TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError> *
__cdecl ExpressionParser::Lex<wchar_t>
                  (TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                   *__return_storage_ptr__,wchar_t *param_1,TTokenDefinitions<wchar_t> *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined1 local_res10 [8];
  TOptional<FExpressionError> local_78;
  FText local_60;
  char local_50;
  TExpressionTokenConsumer<wchar_t> local_48;
  
  local_48.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Tokens.ArrayNum = 0;
  local_48.Tokens.ArrayMax = 0;
  local_48.Stream.Start = param_1;
  sVar3 = wcslen(param_1);
  local_48.Stream.End = param_1 + (int)sVar3;
  local_48.Stream.ReadPos = param_1;
  if (param_1 != local_48.Stream.End) {
    do {
      TTokenDefinitions<wchar_t>::ConsumeToken(param_2,&local_78,&local_48);
      if (local_78.bIsSet != false) {
        local_50 = local_78.bIsSet;
        FText::FText(&local_60,(FText *)&local_78);
        if ((local_78.bIsSet != false) &&
           (local_78.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_78.TypedValue.Text.TextData.Reference + 0x10))();
        }
        if (local_50 == '\0') goto LAB_1418b448a;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_60.TextData.Reference;
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 8))
                    (local_60.TextData.Reference,local_res10);
        }
        *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_60.Flags;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        goto joined_r0x0001418b456d;
      }
    } while (local_48.Stream.ReadPos != local_48.Stream.End);
  }
  local_50 = '\0';
LAB_1418b448a:
  iVar1 = local_48.Tokens.ArrayNum;
  iVar2 = local_48.Tokens.ArrayMax;
  local_78.TypedValue.Text.TextData.Reference = (ITextData *)0x0;
  local_78.TypedValue.Text.Flags = 0;
  local_78.TypedValue.Text._12_4_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ =
       local_48.Tokens.AllocatorInstance.Data._0_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
       local_48.Tokens.AllocatorInstance.Data._4_4_;
  local_48.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Tokens.ArrayNum = 0;
  local_48.Tokens.ArrayMax = 0;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = iVar1;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = iVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  DestructItems<TExpressionToken<wchar_t>,int>((TExpressionToken<wchar_t> *)0x0,0);
joined_r0x0001418b456d:
  if ((local_50 != '\0') && (local_60.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)local_48.Tokens.AllocatorInstance.Data,
             local_48.Tokens.ArrayNum);
  if ((TExpressionToken<wchar_t> *)local_48.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<wchar_t> *)0x0) {
    FMemory::Free(local_48.Tokens.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MapBinary<Tests::FAnd,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_> @ 1418b4580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::
MapBinary<Tests::FAnd,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_2>_>
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,<lambda_2> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapBinary<ExpressionParser::FForwardSlash,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_> @ 1418b4650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapBinary<ExpressionParser::FForwardSlash,_FFrameRateParser::FFrameRateParser_::__l2::<lambda_5>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_5> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_NNXV<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapBinary<Tests::FOperator,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_> @ 1418b4720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapBinary<Tests::FOperator,_Tests::TestWithType<Tests::FHugeType>_::__l3::<lambda_3>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_3> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFHugeType_Tests__U12_XV<lambda_3>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapBinary<Tests::FOperator,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_> @ 1418b47f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapBinary<Tests::FOperator,_Tests::TestWithType<Tests::FMoveableType>_::__l3::<lambda_3>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_3> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFMoveableType_Tests__U12_XV<lambda_3>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapBinary<Tests::FOr,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_> @ 1418b48c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::
MapBinary<Tests::FOr,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_3>_>
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,<lambda_3> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapPreUnary<Tests::FOperator,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_> @ 1418b4990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapPreUnary<Tests::FOperator,_Tests::TestWithType<Tests::FHugeType>_::__l3::<lambda_2>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_2> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  undefined8 local_70;
  undefined8 local_68;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = 0;
  local_68 = 0;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFHugeType_Tests__XV<lambda_2>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapPreUnary<Tests::FOperator,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_> @ 1418b4a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapPreUnary<Tests::FOperator,_Tests::TestWithType<Tests::FMoveableType>_::__l3::<lambda_2>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_2> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  undefined8 local_70;
  undefined8 local_68;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = 0;
  local_68 = 0;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFMoveableType_Tests__XV<lambda_2>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapShortCircuit<Tests::FAnd,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>_> @ 1418b4b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::
MapShortCircuit<Tests::FAnd,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_5>_>
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,<lambda_5> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  undefined8 local_60;
  undefined8 local_58;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = 0;
  local_58 = 0;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,bool,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryShortCircuits,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapShortCircuit<Tests::FOr,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>_> @ 1418b4c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::
MapShortCircuit<Tests::FOr,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_4>_>
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,<lambda_4> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  undefined8 local_60;
  undefined8 local_58;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = 0;
  local_58 = 0;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,bool,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryShortCircuits,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// ParseLineExtended<TStringBuilderBase<wchar_t>_> @ 1418b4cd0

/* WARNING: Enum "ELineExtendedFlags": Some values do not have unique names */

bool __cdecl
ParseLineExtended<TStringBuilderBase<wchar_t>_>
          (wchar_t **param_1,TStringBuilderBase<wchar_t> *param_2,int *param_3,
          ELineExtendedFlags param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t wVar7;
  int iVar8;
  bool bVar9;
  
  pwVar5 = *param_1;
  bVar9 = false;
  iVar8 = 0;
  bVar2 = false;
  bVar4 = false;
  param_2->CurPos = param_2->Base;
  *param_3 = 0;
  wVar7 = L'\0';
  if (*pwVar5 != L'\0') {
    bVar3 = false;
    do {
      bVar9 = bVar3;
      if (((param_4 & BreakOnPipe) == None) || (bVar2)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      wVar7 = *pwVar5;
      if ((((wVar7 == L'\n') || (wVar7 == L'\r')) || ((bVar3 && (wVar7 == L'|')))) && (iVar8 < 1))
      goto LAB_1418b4f6f;
      if ((!bVar2) &&
         (((((param_4 & SwallowDoubleSlashComments) != None && (wVar7 == L'/')) &&
           (pwVar5[1] == L'/')) ||
          (((param_4 & SwallowSemicolonComments) != None && (wVar7 == L';')))))) {
        bVar4 = true;
      }
      if ((((param_4 & AllowBracketedMultiline) == None) || (iVar8 < 1)) ||
         ((wVar7 != L'\n' && (wVar7 != L'\r')))) {
        if ((((param_4 & AllowEscapedEOLMultiline) != None) && (wVar7 == L'\\')) &&
           ((wVar1 = pwVar5[1], wVar1 == L'\n' || (wVar1 == L'\r')))) {
          wVar7 = pwVar5[2];
          if ((wVar7 == L'\n') || (lVar6 = 1, wVar7 == L'\r')) {
            bVar9 = wVar1 == wVar7;
            goto LAB_1418b4e39;
          }
          goto LAB_1418b4e40;
        }
        if (bVar2) {
          if (((bVar4) || (wVar7 != L'\\')) || ((pwVar5[1] != L'\"' && (pwVar5[1] != L'\\')))) {
LAB_1418b4eed:
            pwVar5 = pwVar5 + 1;
            bVar2 = (bool)(bVar2 ^ wVar7 == L'\"');
            if (!bVar4) {
              if (param_2->End < param_2->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_2,1);
              }
              *param_2->CurPos = wVar7;
              param_2->CurPos = param_2->CurPos + 1;
            }
          }
          else {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar5,2);
            pwVar5 = pwVar5 + 2;
          }
        }
        else if (((param_4 & AllowBracketedMultiline) == None) || (wVar7 != L'{')) {
          if ((wVar7 != L'}') || (iVar8 < 1)) goto LAB_1418b4eed;
          iVar8 = iVar8 + -1;
          pwVar5 = pwVar5 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
          pwVar5 = pwVar5 + 1;
        }
      }
      else {
        wVar1 = pwVar5[1];
        if ((wVar1 == L'\n') || (lVar6 = 1, wVar1 == L'\r')) {
          bVar9 = wVar7 == wVar1;
LAB_1418b4e39:
          lVar6 = 1;
          if (!bVar9) {
            lVar6 = 2;
          }
        }
LAB_1418b4e40:
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L' ';
        param_2->CurPos = param_2->CurPos + 1;
        *param_3 = *param_3 + 1;
        if (*pwVar5 == L'\\') {
          pwVar5 = pwVar5 + 1;
        }
        pwVar5 = pwVar5 + lVar6;
      }
      bVar9 = true;
      bVar3 = true;
    } while (*pwVar5 != L'\0');
    wVar7 = L'\0';
  }
LAB_1418b4f6f:
  if (wVar7 == L'\0') {
    if (bVar9) {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    do {
      wVar7 = *pwVar5;
      if ((wVar7 == L'\n') || (wVar7 == L'\r')) {
        wVar1 = pwVar5[1];
        iVar8 = 1;
        if (((wVar1 == L'\n') || (lVar6 = 1, wVar1 == L'\r')) && (lVar6 = 1, wVar7 != wVar1)) {
          lVar6 = 2;
        }
      }
      else {
        if (((param_4 & BreakOnPipe) == None) || (wVar7 != L'|')) break;
        iVar8 = 0;
        lVar6 = 1;
      }
      *param_3 = *param_3 + iVar8;
      pwVar5 = pwVar5 + lVar6;
    } while ((param_4 & SwallowExtraEOLs) != None);
  }
  *param_1 = pwVar5;
  if ((*pwVar5 == L'\0') && (!bVar9)) {
    return false;
  }
  return true;
}

// ParseLineExtended<FString> @ 1418b5020

/* WARNING: Enum "ELineExtendedFlags": Some values do not have unique names */

bool __cdecl
ParseLineExtended<FString>
          (wchar_t **param_1,FString *param_2,int *param_3,ELineExtendedFlags param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  pwVar6 = *param_1;
  bVar9 = false;
  bVar4 = false;
  bVar3 = false;
  iVar7 = 0;
  FString::Reset(param_2,0);
  *param_3 = 0;
  if (*pwVar6 != L'\0') {
    bVar2 = false;
    do {
      bVar9 = bVar2;
      if (((param_4 & BreakOnPipe) == None) || (bVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      wVar5 = *pwVar6;
      if ((((wVar5 == L'\n') || (wVar5 == L'\r')) || ((bVar2 && (wVar5 == L'|')))) && (iVar7 < 1))
      goto LAB_1418b5233;
      if ((!bVar4) &&
         (((((param_4 & SwallowDoubleSlashComments) != None && (wVar5 == L'/')) &&
           (pwVar6[1] == L'/')) ||
          (((param_4 & SwallowSemicolonComments) != None && (wVar5 == L';')))))) {
        bVar3 = true;
      }
      if ((((param_4 & AllowBracketedMultiline) == None) || (iVar7 < 1)) ||
         ((wVar5 != L'\n' && (wVar5 != L'\r')))) {
        if ((((param_4 & AllowEscapedEOLMultiline) != None) && (wVar5 == L'\\')) &&
           ((wVar1 = pwVar6[1], wVar1 == L'\n' || (wVar1 == L'\r')))) {
          wVar5 = pwVar6[2];
          if ((wVar5 == L'\n') || (lVar8 = 1, wVar5 == L'\r')) {
            bVar9 = wVar1 == wVar5;
            goto LAB_1418b5160;
          }
          goto LAB_1418b5167;
        }
        if (bVar4) {
          if (((bVar3) || (wVar5 != L'\\')) || ((pwVar6[1] != L'\"' && (pwVar6[1] != L'\\')))) {
LAB_1418b51f4:
            pwVar6 = pwVar6 + 1;
            bVar4 = (bool)(bVar4 ^ wVar5 == L'\"');
            if (!bVar3) {
              FString::AppendChar(param_2,wVar5);
            }
          }
          else {
            FString::AppendChars(param_2,pwVar6,2);
            pwVar6 = pwVar6 + 2;
          }
        }
        else if (((param_4 & AllowBracketedMultiline) == None) || (wVar5 != L'{')) {
          if ((wVar5 != L'}') || (iVar7 < 1)) goto LAB_1418b51f4;
          iVar7 = iVar7 + -1;
          pwVar6 = pwVar6 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
          pwVar6 = pwVar6 + 1;
        }
      }
      else {
        wVar1 = pwVar6[1];
        if ((wVar1 == L'\n') || (lVar8 = 1, wVar1 == L'\r')) {
          bVar9 = wVar5 == wVar1;
LAB_1418b5160:
          lVar8 = 1;
          if (!bVar9) {
            lVar8 = 2;
          }
        }
LAB_1418b5167:
        FString::AppendChar(param_2,L' ');
        *param_3 = *param_3 + 1;
        if (*pwVar6 == L'\\') {
          pwVar6 = pwVar6 + 1;
        }
        pwVar6 = pwVar6 + lVar8;
      }
      bVar9 = true;
      bVar2 = true;
    } while (*pwVar6 != L'\0');
    wVar5 = L'\0';
LAB_1418b5233:
    if (wVar5 != L'\0') {
      do {
        wVar5 = *pwVar6;
        if ((wVar5 == L'\n') || (wVar5 == L'\r')) {
          wVar1 = pwVar6[1];
          iVar7 = 1;
          if (((wVar1 == L'\n') || (lVar8 = 1, wVar1 == L'\r')) && (lVar8 = 1, wVar5 != wVar1)) {
            lVar8 = 2;
          }
        }
        else {
          if (((param_4 & BreakOnPipe) == None) || (wVar5 != L'|')) break;
          iVar7 = 0;
          lVar8 = 1;
        }
        *param_3 = *param_3 + iVar7;
        pwVar6 = pwVar6 + lVar8;
      } while ((param_4 & SwallowExtraEOLs) != None);
      goto LAB_1418b5299;
    }
  }
  if (bVar9) {
    *param_3 = *param_3 + 1;
  }
LAB_1418b5299:
  *param_1 = pwVar6;
  if ((*pwVar6 != L'\0') || (bVar9)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ParseQuotedString<TStringBuilderBase<wchar_t>_> @ 1418b52d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
ParseQuotedString<TStringBuilderBase<wchar_t>_>
          (wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2,int *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  undefined1 auStack_1e8 [32];
  wchar_t local_1c8 [2];
  wchar32 local_1c4;
  int *local_1c0;
  wchar_t *local_1b8;
  TStringBuilderBase<wchar_t> local_1a8;
  wchar_t local_188 [4];
  undefined1 local_180 [24];
  TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar10 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  pwVar8 = param_1 + 1;
  local_1c0 = param_3;
  local_1b8 = param_1;
  if (*param_1 == L'\"') {
LAB_1418b5343:
    uVar3 = (ushort)*pwVar8 >> 6;
    uVar7 = uVar10;
    if (uVar3 == 0) {
      uVar7 = 0x400002401;
    }
    uVar6 = uVar10;
    if (uVar3 == 1) {
      uVar6 = 0x10000000;
    }
    pwVar9 = pwVar8;
    for (uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar8 & 0x3f); (uVar7 & 1) == 0;
        uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar1 & 0x3f)) {
      pwVar1 = pwVar9 + 1;
      pwVar9 = pwVar9 + 1;
      uVar3 = (ushort)*pwVar1 >> 6;
      uVar7 = uVar10;
      if (uVar3 == 0) {
        uVar7 = 0x400002401;
      }
      uVar6 = uVar10;
      if (uVar3 == 1) {
        uVar6 = 0x10000000;
      }
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,pwVar8,(int)((longlong)pwVar9 - (longlong)pwVar8 >> 1));
    if (*pwVar9 == L'\\') {
      wVar2 = pwVar9[1];
      pwVar1 = pwVar9 + 1;
      if (wVar2 == L'\\') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\\';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\"') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\"';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\'') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\'';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'n') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\n';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'r') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\r';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else {
        if (wVar2 == L't') {
          if (param_2->End < param_2->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_2,1);
          }
          *param_2->CurPos = L'\t';
          param_2->CurPos = param_2->CurPos + 1;
          pwVar8 = pwVar9 + 2;
          goto LAB_1418b5343;
        }
        if (7 < (ushort)wVar2 - 0x30) {
          if (wVar2 == L'x') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              local_1a8.Base = local_188;
              local_1a8.CurPos = local_188;
              local_1a8.End = (wchar_t *)&local_168;
              local_1a8.bIsDynamic = false;
              local_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while (((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (local_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (local_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
                }
                *local_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                local_1a8.CurPos = local_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (local_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (local_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
              }
              *local_1a8.CurPos = L'\0';
              iVar4 = 0x10;
              goto LAB_1418b5728;
            }
          }
          if (*pwVar1 == L'u') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              local_1a8.Base = local_188;
              local_1a8.CurPos = local_188;
              local_1a8.End = (wchar_t *)local_180;
              local_1a8.bIsDynamic = false;
              local_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1) < 4))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (local_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (local_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
                }
                *local_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                local_1a8.CurPos = local_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (local_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (local_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
              }
              *local_1a8.CurPos = L'\0';
              uVar5 = wcstoul(local_1a8.Base,(wchar_t **)0x0,0x10);
              local_1c8[0] = (wchar_t)uVar5;
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_2,local_1c8,(uint)((wchar_t)uVar5 != L'\0'));
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
              goto LAB_1418b5343;
            }
          }
          if (*pwVar1 == L'U') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              local_1a8.Base = local_188;
              local_1a8.CurPos = local_188;
              local_1a8.End = (wchar_t *)(local_180 + 8);
              local_1a8.bIsDynamic = false;
              local_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1) < 8))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (local_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (local_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
                }
                *local_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                local_1a8.CurPos = local_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (local_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (local_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
              }
              *local_1a8.CurPos = L'\0';
              local_1c4 = wcstoul(local_1a8.Base,(wchar_t **)0x0,0x10);
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128>::
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128><char32_t>
                        (&local_168,&local_1c4,1);
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_2,local_168.Ptr,local_168.StringLength);
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
              goto LAB_1418b5343;
            }
          }
          if (param_2->End < param_2->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_2,1);
          }
          *param_2->CurPos = L'\\';
          param_2->CurPos = param_2->CurPos + 1;
          wVar2 = *pwVar1;
          pwVar8 = pwVar9 + 2;
          if (param_2->End < param_2->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_2,1);
          }
          *param_2->CurPos = wVar2;
          param_2->CurPos = param_2->CurPos + 1;
          goto LAB_1418b5343;
        }
        local_1a8.bIsDynamic = false;
        local_1a8.bIsExternal = false;
        local_1a8.Base = local_188;
        local_1a8.End = (wchar_t *)&local_168;
        uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        pwVar8 = pwVar1;
        for (local_1a8.CurPos = local_188;
            (((uVar7 & 1) == 0 && ((ushort)wVar2 - 0x30 < 8)) &&
            ((int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1) < 3));
            local_1a8.CurPos = local_1a8.CurPos + 1) {
          wVar2 = *pwVar8;
          pwVar8 = pwVar8 + 1;
          if (local_1a8.End <
              (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
              (local_1a8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
          }
          *local_1a8.CurPos = wVar2;
          wVar2 = *pwVar8;
          uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        }
        if (local_1a8.End <
            (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)(local_1a8.CurPos + 1)
           ) {
          TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
        }
        *local_1a8.CurPos = L'\0';
        iVar4 = 8;
LAB_1418b5728:
        uVar5 = wcstoul(local_1a8.Base,(wchar_t **)0x0,iVar4);
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = (wchar_t)uVar5;
        param_2->CurPos = param_2->CurPos + 1;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
      }
      goto LAB_1418b5343;
    }
    if (*pwVar9 == L'\"') {
      if (local_1c0 != (int *)0x0) {
        *local_1c0 = (int)((longlong)pwVar9 + (2 - (longlong)local_1b8) >> 1);
      }
      return true;
    }
  }
  return false;
}

// ParseQuotedString<FString> @ 1418b5ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl ParseQuotedString<FString>(wchar_t *param_1,FString *param_2,int *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  undefined1 auStack_1d8 [32];
  wchar_t local_1b8 [2];
  wchar32 local_1b4 [3];
  TStringBuilderBase<wchar_t> local_1a8;
  wchar_t local_188 [4];
  undefined1 local_180 [24];
  TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  uVar10 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  pwVar8 = param_1 + 1;
  if (*param_1 == L'\"') {
LAB_1418b5b39:
    uVar3 = (ushort)*pwVar8 >> 6;
    uVar7 = uVar10;
    if (uVar3 == 0) {
      uVar7 = 0x400002401;
    }
    uVar6 = uVar10;
    if (uVar3 == 1) {
      uVar6 = 0x10000000;
    }
    pwVar9 = pwVar8;
    for (uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar8 & 0x3f); (uVar7 & 1) == 0;
        uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar1 & 0x3f)) {
      pwVar1 = pwVar9 + 1;
      pwVar9 = pwVar9 + 1;
      uVar3 = (ushort)*pwVar1 >> 6;
      uVar7 = uVar10;
      if (uVar3 == 0) {
        uVar7 = 0x400002401;
      }
      uVar6 = uVar10;
      if (uVar3 == 1) {
        uVar6 = 0x10000000;
      }
    }
    FString::AppendChars(param_2,pwVar8,(int)((longlong)pwVar9 - (longlong)pwVar8 >> 1));
    if (*pwVar9 == L'\\') {
      wVar2 = pwVar9[1];
      pwVar1 = pwVar9 + 1;
      if (wVar2 == L'\\') {
        FString::AppendChar(param_2,L'\\');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\"') {
        FString::AppendChar(param_2,L'\"');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\'') {
        FString::AppendChar(param_2,L'\'');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'n') {
        FString::AppendChar(param_2,L'\n');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'r') {
        FString::AppendChar(param_2,L'\r');
        pwVar8 = pwVar9 + 2;
      }
      else {
        if (wVar2 == L't') {
          FString::AppendChar(param_2,L'\t');
          pwVar8 = pwVar9 + 2;
          goto LAB_1418b5b39;
        }
        if (7 < (ushort)wVar2 - 0x30) {
          if (wVar2 == L'x') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              local_1a8.Base = local_188;
              local_1a8.CurPos = local_188;
              local_1a8.End = (wchar_t *)&local_168;
              local_1a8.bIsDynamic = false;
              local_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while (((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (local_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (local_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
                }
                *local_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                local_1a8.CurPos = local_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (local_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (local_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
              }
              *local_1a8.CurPos = L'\0';
              iVar4 = 0x10;
              goto LAB_1418b5e68;
            }
          }
          if (*pwVar1 == L'u') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              local_1a8.Base = local_188;
              local_1a8.CurPos = local_188;
              local_1a8.End = (wchar_t *)local_180;
              local_1a8.bIsDynamic = false;
              local_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1) < 4))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (local_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (local_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
                }
                *local_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                local_1a8.CurPos = local_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (local_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (local_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
              }
              *local_1a8.CurPos = L'\0';
              uVar5 = wcstoul(local_1a8.Base,(wchar_t **)0x0,0x10);
              local_1b8[0] = (wchar_t)uVar5;
              FString::AppendChars(param_2,local_1b8,(uint)((wchar_t)uVar5 != L'\0'));
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
              goto LAB_1418b5b39;
            }
          }
          if (*pwVar1 == L'U') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              local_1a8.Base = local_188;
              local_1a8.CurPos = local_188;
              local_1a8.End = (wchar_t *)(local_180 + 8);
              local_1a8.bIsDynamic = false;
              local_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1) < 8))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (local_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (local_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
                }
                *local_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                local_1a8.CurPos = local_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (local_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (local_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
              }
              *local_1a8.CurPos = L'\0';
              local_1b4[0] = wcstoul(local_1a8.Base,(wchar_t **)0x0,0x10);
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128>::
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128><char32_t>
                        (&local_168,local_1b4,1);
              FString::AppendChars(param_2,local_168.Ptr,local_168.StringLength);
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
              goto LAB_1418b5b39;
            }
          }
          FString::AppendChar(param_2,L'\\');
          pwVar8 = pwVar9 + 2;
          FString::AppendChar(param_2,*pwVar1);
          goto LAB_1418b5b39;
        }
        local_1a8.bIsDynamic = false;
        local_1a8.bIsExternal = false;
        local_1a8.Base = local_188;
        local_1a8.End = (wchar_t *)&local_168;
        uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        pwVar8 = pwVar1;
        for (local_1a8.CurPos = local_188;
            (((uVar7 & 1) == 0 && ((ushort)wVar2 - 0x30 < 8)) &&
            ((int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1) < 3));
            local_1a8.CurPos = local_1a8.CurPos + 1) {
          wVar2 = *pwVar8;
          pwVar8 = pwVar8 + 1;
          if (local_1a8.End <
              (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
              (local_1a8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
          }
          *local_1a8.CurPos = wVar2;
          wVar2 = *pwVar8;
          uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        }
        if (local_1a8.End <
            (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)(local_1a8.CurPos + 1)
           ) {
          TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
        }
        *local_1a8.CurPos = L'\0';
        iVar4 = 8;
LAB_1418b5e68:
        uVar5 = wcstoul(local_1a8.Base,(wchar_t **)0x0,iVar4);
        FString::AppendChar(param_2,(wchar_t)uVar5);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
      }
      goto LAB_1418b5b39;
    }
    if (*pwVar9 == L'\"') {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)((longlong)pwVar9 + (2 - (longlong)param_1) >> 1);
      }
      return true;
    }
  }
  return false;
}

// RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector> @ 1418b6280

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>(void)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FTaskHandle FVar4;
  bool bVar5;
  int iVar6;
  FTaskBase *pFVar7;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this;
  int local_res8 [2];
  int *local_res10;
  FTaskHandle local_48;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_40;
  
  this.Reference = (FTaskBase *)0x0;
  local_res8[0] = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_48.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  local_res10 = local_res8;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_res8;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  if (local_48.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_48.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_48.Pimpl.Reference)(local_48.Pimpl.Reference,1);
    }
  }
  local_48.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48.Pimpl.Reference;
  local_48.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_res8;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_48.Pimpl.Reference;
  if (local_48.Pimpl.Reference != (FTaskBase *)0x0) {
    local_48.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_48.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48.Pimpl.Reference;
  local_48.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_res8;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    this.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_48.Pimpl.Reference;
  if (local_48.Pimpl.Reference != (FTaskBase *)0x0) {
    local_48.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_48.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(this.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48.Pimpl.Reference;
  local_48.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  `RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>'::__l2::<lambda_1>::
  operator()(&local_res10);
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_40,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if ((local_res8[0] != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("AtomicValue.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x3a,L"Detector cannot be destroyed while other threads access it"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector> @ 1418b66d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>(void)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FTaskHandle FVar4;
  bool bVar5;
  int iVar6;
  FTaskBase *pFVar7;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this;
  int *local_res8;
  FTaskHandle local_58;
  int local_50 [4];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_40;
  
  this.Reference = (FTaskBase *)0x0;
  local_50[1] = 0xffffffff;
  local_50[0] = 0;
  local_50[2] = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  local_res8 = local_50;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_50;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  if (local_58.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_58.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_58.Pimpl.Reference)(local_58.Pimpl.Reference,1);
    }
  }
  local_58.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58.Pimpl.Reference;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_50;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_58.Pimpl.Reference;
  if (local_58.Pimpl.Reference != (FTaskBase *)0x0) {
    local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_58.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58.Pimpl.Reference;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_50;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWFullyRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    this.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_58.Pimpl.Reference;
  if (local_58.Pimpl.Reference != (FTaskBase *)0x0) {
    local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_58.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(this.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58.Pimpl.Reference;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  `RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>'::__l2::
  <lambda_1>::operator()(&local_res8);
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_40,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if ((local_50[0] != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("AtomicValue.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x3a,L"Detector cannot be destroyed while other threads access it"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector> @ 1418b6b30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>(void)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FTaskHandle FVar4;
  bool bVar5;
  int iVar6;
  FTaskBase *pFVar7;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this;
  int *local_res8;
  FTaskHandle local_58;
  int local_50 [4];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_40;
  
  this.Reference = (FTaskBase *)0x0;
  local_50[1] = 0xffffffff;
  local_50[0] = 0;
  local_50[2] = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  local_res8 = local_50;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_50;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  if (local_58.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_58.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_58.Pimpl.Reference)(local_58.Pimpl.Reference,1);
    }
  }
  local_58.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58.Pimpl.Reference;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_50;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_58.Pimpl.Reference;
  if (local_58.Pimpl.Reference != (FTaskBase *)0x0) {
    local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_58.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58.Pimpl.Reference;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_50;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_UFRWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    this.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_58.Pimpl.Reference;
  if (local_58.Pimpl.Reference != (FTaskBase *)0x0) {
    local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_58.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(this.Reference,0x100);
  if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_40.ArrayNum;
  if (local_40.ArrayNum == local_40.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
  }
  local_40.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58.Pimpl.Reference;
  local_58.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  `RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>'::__l2::<lambda_1>
  ::operator()(&local_res8);
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_40,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if ((local_50[0] != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("AtomicValue.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x3a,L"Detector cannot be destroyed while other threads access it"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector> @ 1418b6f90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector>(void)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FTaskHandle FVar4;
  bool bVar5;
  int iVar6;
  FTaskBase *pFVar7;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this;
  longlong lVar9;
  FMRSWRecursiveAccessDetector local_res8;
  FTaskHandle local_38;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_30;
  
  this.Reference = (FTaskBase *)0x0;
  local_res8.State = (atomic<unsigned___int64>)0x0;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  local_38.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)&local_res8;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  if (local_38.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_38.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_38.Pimpl.Reference)(local_38.Pimpl.Reference,1);
    }
  }
  local_38.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_30.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_30.ArrayNum;
  if (local_30.ArrayNum == local_30.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_30.AllocatorInstance,&local_30.ArrayMax);
  }
  local_30.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_30.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_30.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38.Pimpl.Reference;
  local_38.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  TVar8.Reference = this.Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)&local_res8;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    TVar8.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_38.Pimpl.Reference;
  if (local_38.Pimpl.Reference != (FTaskBase *)0x0) {
    local_38.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_38.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(TVar8.Reference,0x100);
  if (((local_30.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_30.ArrayNum;
  if (local_30.ArrayNum == local_30.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_30.AllocatorInstance,&local_30.ArrayMax);
  }
  local_30.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_30.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_30.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38.Pimpl.Reference;
  local_38.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(588)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)&local_res8;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____RWAccessDetectorConcurrentReadersPerfTest__0PECEA_VFMRSWRecursiveAccessDetector____YAXXZ__Private_Tasks_UE__6B_
    ;
    this.Reference = pFVar7;
  }
  FVar4.Pimpl.Reference = local_38.Pimpl.Reference;
  if (local_38.Pimpl.Reference != (FTaskBase *)0x0) {
    local_38.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4.Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)(FVar4.Pimpl.Reference,1);
    }
  }
  local_38.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this.Reference;
  UE::Tasks::Private::FTaskBase::TryLaunch(this.Reference,0x100);
  if (((local_30.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_30.ArrayNum;
  if (local_30.ArrayNum == local_30.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_30.AllocatorInstance,&local_30.ArrayMax);
  }
  lVar9 = 1000000;
  local_30.ArrayNum = iVar6 + 1;
  *(FTaskBase **)(local_30.AllocatorInstance.Data + (longlong)iVar6 * 8) = (FTaskBase *)0x0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_30.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38.Pimpl.Reference;
  do {
    FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_res8);
    FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_res8);
    LOCK();
    local_res8.State = local_res8.State + -1;
    UNLOCK();
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_30,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_res8);
  return;
}

// RWAccessDetectorPerfTest<1000000,FRWAccessDetector> @ 1418b73d0

/* WARNING: Removing unreachable block (ram,0x0001418b74d0) */
/* WARNING: Removing unreachable block (ram,0x0001418b74d9) */
/* WARNING: Removing unreachable block (ram,0x0001418b74fe) */
/* WARNING: Removing unreachable block (ram,0x0001418b7443) */
/* WARNING: Removing unreachable block (ram,0x0001418b744c) */
/* WARNING: Removing unreachable block (ram,0x0001418b7471) */
/* WARNING: Removing unreachable block (ram,0x0001418b7402) */
/* WARNING: Removing unreachable block (ram,0x0001418b740b) */
/* WARNING: Removing unreachable block (ram,0x0001418b7430) */
/* WARNING: Removing unreachable block (ram,0x0001418b748f) */
/* WARNING: Removing unreachable block (ram,0x0001418b7498) */
/* WARNING: Removing unreachable block (ram,0x0001418b74bd) */
/* WARNING: Removing unreachable block (ram,0x0001418b7511) */
/* WARNING: Removing unreachable block (ram,0x0001418b7536) */

void __cdecl RWAccessDetectorPerfTest<1000000,FRWAccessDetector>(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 1000000;
  lVar1 = 1000000;
  do {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  do {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// RWAccessDetectorPerfTest<1000000,FRWFullyRecursiveAccessDetector> @ 1418b7550

void __cdecl RWAccessDetectorPerfTest<1000000,FRWFullyRecursiveAccessDetector>(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  uint local_18;
  DWORD local_14;
  int local_10;
  
  local_14 = 0xffffffff;
  lVar7 = 1000000;
  local_18 = 0;
  local_10 = 0;
  lVar6 = 1000000;
  do {
    DVar5 = GetCurrentThreadId();
    if (DVar5 != 0xffffffff) {
      LOCK();
      uVar3 = local_18 + 1;
      UNLOCK();
      uVar2 = local_18 & 0xfff00000;
      local_18 = uVar3;
      if (((uVar2 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false))
         && (bVar4 = FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x5c,
                                L"Acquiring a read access while there is already a write access"),
            bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    DVar5 = GetCurrentThreadId();
    if (DVar5 != 0xffffffff) {
      LOCK();
      uVar3 = local_18 - 1;
      UNLOCK();
      uVar2 = local_18 & 0xfff00000;
      local_18 = uVar3;
      if (((uVar2 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false))
         && (bVar4 = FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x67,
                                L"Another thread asked to have a write access during this read access"
                               ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  do {
    DVar5 = GetCurrentThreadId();
    if (local_14 == DVar5) {
LAB_1418b7693:
      local_10 = local_10 + 1;
    }
    else {
      LOCK();
      uVar2 = local_18 + 0x100000;
      UNLOCK();
      if (local_18 == 0) {
        local_18 = uVar2;
        local_14 = DVar5;
        if ((local_10 != 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("RecursiveDepth == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                               ,0xb4,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        goto LAB_1418b7693;
      }
      local_18 = uVar2;
      if ((UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x72,
                             L"Acquiring a write access while there are ongoing read or write access"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    DVar5 = GetCurrentThreadId();
    if (local_14 == DVar5) {
      if ((local_10 < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("RecursiveDepth > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0xc5,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_10 = local_10 + -1;
      if (local_10 == 0) {
        local_14 = 0xffffffff;
        LOCK();
        uVar2 = local_18 - 0x100000;
        UNLOCK();
        bVar4 = local_18 != 0x100000;
        local_18 = uVar2;
        if (((bVar4) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                               ,0x7d,
                               L"Another thread asked to have a read or write access during this write access"
                              ), bVar4)) goto code_r0x0001418b7767;
      }
    }
    else {
      LOCK();
      uVar2 = local_18 - 0x100000;
      UNLOCK();
      bVar4 = local_18 != 0x100000;
      local_18 = uVar2;
      if (((bVar4) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x7d,
                             L"Another thread asked to have a read or write access during this write access"
                            ), bVar4)) {
code_r0x0001418b7767:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      if ((local_18 != 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("AtomicValue.load(std::memory_order_relaxed) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x3a,L"Detector cannot be destroyed while other threads access it"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
  } while( true );
}

// RWAccessDetectorPerfTest<1000000,FRWRecursiveAccessDetector> @ 1418b77c0

/* WARNING: Removing unreachable block (ram,0x0001418b7801) */
/* WARNING: Removing unreachable block (ram,0x0001418b780a) */
/* WARNING: Removing unreachable block (ram,0x0001418b782f) */
/* WARNING: Removing unreachable block (ram,0x0001418b7841) */
/* WARNING: Removing unreachable block (ram,0x0001418b784a) */
/* WARNING: Removing unreachable block (ram,0x0001418b786f) */

void __cdecl RWAccessDetectorPerfTest<1000000,FRWRecursiveAccessDetector>(void)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  int local_18;
  DWORD local_14;
  int local_10;
  
  local_14 = 0xffffffff;
  lVar6 = 1000000;
  local_18 = 0;
  local_10 = 0;
  lVar5 = 1000000;
  do {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  do {
    DVar4 = GetCurrentThreadId();
    if (local_14 == DVar4) {
LAB_1418b78fb:
      local_10 = local_10 + 1;
    }
    else {
      LOCK();
      iVar2 = local_18 + 0x100000;
      UNLOCK();
      if (local_18 == 0) {
        local_18 = iVar2;
        local_14 = DVar4;
        if ((local_10 != 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("RecursiveDepth == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                               ,0xb4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        goto LAB_1418b78fb;
      }
      local_18 = iVar2;
      if ((UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x72,
                             L"Acquiring a write access while there are ongoing read or write access"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    DVar4 = GetCurrentThreadId();
    if (local_14 == DVar4) {
      if ((local_10 < 1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("RecursiveDepth > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0xc5,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_10 = local_10 + -1;
      if (local_10 == 0) {
        local_14 = 0xffffffff;
        LOCK();
        iVar2 = local_18 + -0x100000;
        UNLOCK();
        bVar3 = local_18 != 0x100000;
        local_18 = iVar2;
        if (((bVar3) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                               ,0x7d,
                               L"Another thread asked to have a read or write access during this write access"
                              ), bVar3)) goto code_r0x0001418b79cf;
      }
    }
    else {
      LOCK();
      iVar2 = local_18 + -0x100000;
      UNLOCK();
      bVar3 = local_18 != 0x100000;
      local_18 = iVar2;
      if (((bVar3) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x7d,
                             L"Another thread asked to have a read or write access during this write access"
                            ), bVar3)) {
code_r0x0001418b79cf:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      if ((local_18 != 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("AtomicValue.load(std::memory_order_relaxed) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x3a,L"Detector cannot be destroyed while other threads access it"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
  } while( true );
}

// RWAccessDetectorPerfTest<1000000,FMRSWRecursiveAccessDetector> @ 1418b7a20

/* WARNING: Removing unreachable block (ram,0x0001418b7cd0) */
/* WARNING: Removing unreachable block (ram,0x0001418b7cd9) */

void __cdecl RWAccessDetectorPerfTest<1000000,FMRSWRecursiveAccessDetector>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  atomic<unsigned___int64> aVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  uint local_res8 [2];
  DWORD local_res10 [2];
  atomic<unsigned___int64> local_res18;
  atomic<unsigned___int64> local_res20;
  FMRSWRecursiveAccessDetector local_a8;
  atomic<unsigned___int64> *local_a0;
  atomic<unsigned___int64> local_98;
  atomic<unsigned___int64> local_90;
  atomic<unsigned___int64> *local_88;
  uint *local_80;
  DWORD *local_78;
  atomic<unsigned___int64> *local_70;
  DWORD *local_58;
  atomic<unsigned___int64> *local_50;
  atomic<unsigned___int64> *local_48;
  
  lVar11 = 1000000;
  lVar8 = 1000000;
  local_a8.State = (atomic<unsigned___int64>)0x0;
  do {
    FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_a8);
    FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_a8);
    LOCK();
    local_a8.State = local_a8.State - 1;
    UNLOCK();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  do {
    local_res18 = local_a8.State;
    if (((ulonglong)local_a8.State & 0xfffff) == 0) {
LAB_1418b7bef:
      local_res10[0] = GetCurrentThreadId();
      uVar6 = local_res18._0_4_;
      if (((((ulonglong)local_res18 & 0xfff00000) != 0) && (local_res18._4_4_ - 1 != local_res10[0])
          ) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
        local_78 = local_res10;
        local_70 = &local_res18;
        `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l17::<lambda_4>::operator()(&local_78)
        ;
        uVar6 = local_res18._0_4_;
      }
      aVar5 = (atomic<unsigned___int64>)
              (CONCAT44(local_res10[0] + 1,(uVar6 & 0xfff00000) + 0x100000) |
              (ulonglong)(uVar6 & 0xfffff));
      LOCK();
      UNLOCK();
      local_98 = local_a8.State;
      bVar2 = local_res18 != local_a8.State;
      local_a8.State = aVar5;
      if ((bVar2) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
        local_58 = local_res10;
        local_50 = &local_res18;
        local_48 = &local_98;
        `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l20::<lambda_5>::operator()(&local_58)
        ;
      }
    }
    else {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = (uint *)(lVar8 + 0xb40);
      if ((*puVar10 & 1) == 0) {
        *puVar10 = *puVar10 | 1;
        __tlregdtor(`FMRSWRecursiveAccessDetector::GetReadersTls'::__l2::
                    _dynamic_atexit_destructor_for__ReadersTls__);
      }
      plVar7 = (longlong *)(lVar8 + 0xab8);
      if (*(longlong **)(lVar8 + 0xaf8) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar8 + 0xaf8);
      }
      for (plVar9 = plVar7; plVar9 != plVar7 + (longlong)*(int *)(lVar8 + 0xb00) * 2;
          plVar9 = plVar9 + 2) {
        if ((FMRSWRecursiveAccessDetector *)*plVar9 == &local_a8) {
          local_res8[0] = (uint)((longlong)plVar9 - (longlong)plVar7 >> 4);
          if (local_res8[0] == 0xffffffff) goto LAB_1418b7b19;
          if ((*puVar10 & 1) == 0) {
            *puVar10 = *puVar10 | 1;
            __tlregdtor(`FMRSWRecursiveAccessDetector::GetReadersTls'::__l2::
                        _dynamic_atexit_destructor_for__ReadersTls__);
          }
          uVar6 = local_res8[0];
          uVar3 = 0;
          if ((int)local_res8[0] < *(int *)(lVar8 + 0xb00)) {
            uVar3 = ~local_res8[0] >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar7 = (longlong *)(lVar8 + 0xab8);
          if (*(longlong **)(lVar8 + 0xaf8) != (longlong *)0x0) {
            plVar7 = *(longlong **)(lVar8 + 0xaf8);
          }
          if ((*(uint *)(plVar7 + (longlong)(int)uVar6 * 2 + 1) != (local_res18._0_4_ & 0xfffff)) &&
             (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
            local_88 = &local_res18;
            local_80 = local_res8;
            `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l11::<lambda_3>::operator()
                      (&local_88);
          }
          goto LAB_1418b7bef;
        }
      }
      local_res8[0] = 0xffffffff;
LAB_1418b7b19:
      if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
        local_a0 = &local_res18;
        `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l8::<lambda_2>::operator()(&local_a0);
      }
    }
    local_res20 = local_a8.State;
    uVar6 = (uint)((ulonglong)local_a8.State >> 0x14) & 0xfff;
    uVar4 = 0;
    if (uVar6 != 1) {
      uVar4 = (ulonglong)local_a8.State >> 0x20;
    }
    aVar5 = (atomic<unsigned___int64>)
            (uVar4 << 0x20 | (ulonglong)((uVar6 - 1) * 0x100000) |
            (ulonglong)(local_a8.State._0_4_ & 0xfffff));
    LOCK();
    UNLOCK();
    local_90 = local_a8.State;
    local_90 = local_a8.State;
    local_res20 = local_a8.State;
    lVar11 = lVar11 + -1;
    local_a8.State = aVar5;
    if (lVar11 == 0) {
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8);
      return;
    }
  } while( true );
}

// Replace<TArrayView<char,int>_&,char> @ 1418b8210

void __cdecl
Algo::Replace<TArrayView<char,int>_&,char>
          (TArrayView<char,int> *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1->DataPtr;
  pcVar2 = pcVar1 + param_1->ArrayNum;
  for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 1) {
    if (*pcVar1 == *param_2) {
      *pcVar1 = *param_3;
    }
  }
  return;
}

// Replace<TArrayView<wchar_t,int>_&,char> @ 1418b8240

void __cdecl
Algo::Replace<TArrayView<wchar_t,int>_&,char>
          (TArrayView<wchar_t,int> *param_1,char *param_2,char *param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar2 = param_1->DataPtr;
  pwVar1 = pwVar2 + param_1->ArrayNum;
  for (; pwVar2 != pwVar1; pwVar2 = pwVar2 + 1) {
    if ((uint)(ushort)*pwVar2 == (int)*param_2) {
      *pwVar2 = (short)*param_3;
    }
  }
  return;
}

// Replace<TArrayView<wchar_t,int>,wchar_t> @ 1418b8280

void __cdecl
Algo::Replace<TArrayView<wchar_t,int>,wchar_t>
          (TArrayView<wchar_t,int> *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar2 = param_1->DataPtr;
  pwVar1 = pwVar2 + param_1->ArrayNum;
  for (; pwVar2 != pwVar1; pwVar2 = pwVar2 + 1) {
    if (*pwVar2 == *param_2) {
      *pwVar2 = *param_3;
    }
  }
  return;
}

// Reverse<int> @ 1418b82b0

void __cdecl AlgoImpl::Reverse<int>(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    piVar2 = param_1 + (param_2 + -1);
    do {
      iVar1 = param_1[lVar3];
      param_1[lVar3] = *piVar2;
      lVar3 = lVar3 + 1;
      *piVar2 = iVar1;
      piVar2 = piVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// TestWithType<Tests::FHugeType> @ 1418b8300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl Tests::TestWithType<Tests::FHugeType>(FAutomationTestBase *param_1)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FExpressionNode *pFVar6;
  uchar *puVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  FScriptContainerElement *pFVar10;
  uchar *puVar11;
  undefined1 auStackY_e28 [32];
  int local_df4;
  TTokenDefinitions<wchar_t> local_df0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined1 local_dc8 [8];
  undefined1 local_dc0 [24];
  undefined8 local_da8;
  undefined8 local_da0;
  uint local_d98;
  uint local_d94;
  uint local_d90;
  uint local_d8c;
  FGuid local_d88;
  uint local_d78;
  uint local_d74;
  uint local_d70;
  uint local_d6c;
  uint local_d68;
  uint local_d64;
  uint local_d60;
  uint local_d5c;
  FString local_d58;
  FString local_d48;
  undefined1 *local_d38;
  code **local_d30;
  FGuid *local_d28;
  code **local_d20;
  FString local_d18;
  FHugeType local_d08;
  FHugeType local_8f8;
  undefined1 local_4e8 [64];
  FExpressionNode local_4a8;
  code *local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  longlong local_448;
  longlong *local_440;
  code *local_438 [2];
  undefined **local_428 [3];
  undefined ***local_410;
  code *local_408 [2];
  undefined **local_3f8 [3];
  undefined ***local_3e0;
  FExpressionNode local_3d8;
  TValueOrError<FExpressionNode,FExpressionError> local_398;
  TValueOrError<FExpressionNode,FExpressionError> local_348;
  TValueOrError<FExpressionNode,FExpressionError> local_2f8;
  TOperatorJumpTable<void,wchar_t> local_2a8;
  FExpressionGrammar local_168;
  ulonglong local_28;
  
  piVar2 = FMoveableType::LeakCount;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e28;
  FMoveableType::LeakCount = &local_df4;
  local_d08._padding_._0_4_ = 1;
  local_d08._padding_ = (longlong)&___7FHugeType_Tests__6B_;
  local_d08._padding_._4_1_ = 1;
  local_df4 = 1;
  FExpressionNode::FExpressionNode<Tests::FHugeType>(&local_4a8,&local_d08);
  puVar11 = (uchar *)0x0;
  local_4e8._0_4_ = 0;
  local_4e8._4_4_ = 0;
  local_4e8._8_4_ = 0;
  local_4e8._12_4_ = 0;
  FExpressionNode::operator=((FExpressionNode *)local_4e8,&local_4a8);
  puVar7 = puVar11;
  if (((local_4e8._12_4_ ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.D &&
       local_4e8._8_4_ ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
       ::__l2::Global.C) &&
      local_4e8._4_4_ ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.B) &&
      local_4e8._0_4_ ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar7 = (uchar *)local_4e8._24_8_;
  }
  if (*(int *)(puVar7 + 8) == 1) {
    local_8f8._padding_._0_4_ = 1;
    local_8f8._padding_._4_1_ = 1;
    local_8f8._padding_ = (longlong)&___7FHugeType_Tests__6B_;
    *FMoveableType::LeakCount = *FMoveableType::LeakCount + 1;
    pFVar6 = FExpressionNode::FExpressionNode<Tests::FHugeType>(&local_3d8,&local_8f8);
    FExpressionNode::operator=(&local_4a8,pFVar6);
    puVar7 = local_3d8.InlineBytes;
    if (((local_3d8.TypeId.D == 0 && local_3d8.TypeId.C == 0) && local_3d8.TypeId.B == 0) &&
        local_3d8.TypeId.A == 0) {
      puVar7 = puVar11;
    }
    if (puVar7 != (uchar *)0x0) {
      (*(code *)**(undefined8 **)puVar7)(puVar7,0);
    }
    if ((((local_4a8.TypeId.D == local_4e8._12_4_ && local_4a8.TypeId.C == local_4e8._8_4_) &&
         local_4a8.TypeId.B == local_4e8._4_4_) && local_4a8.TypeId.A == local_4e8._0_4_) &&
       (((local_4e8._4_4_ != 0 || local_4e8._0_4_ != 0) || local_4e8._12_4_ != 0) ||
        local_4e8._8_4_ != 0)) {
      puVar7 = local_4a8.InlineBytes;
      if (((local_4a8.TypeId.D == 0 && local_4a8.TypeId.C == 0) && local_4a8.TypeId.B == 0) &&
          local_4a8.TypeId.A == 0) {
        puVar7 = puVar11;
      }
      (**(code **)(*(longlong *)puVar7 + 0x10))(puVar7,local_4e8 + 0x10);
    }
    else {
      puVar7 = local_4e8 + 0x10;
      if ((local_4e8._12_4_ == 0 && local_4e8._8_4_ == 0) &&
          (local_4e8._4_4_ == 0 && local_4e8._0_4_ == 0)) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
      local_4e8._0_4_ = local_4a8.TypeId.A;
      local_4e8._4_4_ = local_4a8.TypeId.B;
      local_4e8._8_4_ = local_4a8.TypeId.C;
      local_4e8._12_4_ = local_4a8.TypeId.D;
      puVar7 = local_4a8.InlineBytes;
      if (((local_4a8.TypeId.D == 0 && local_4a8.TypeId.C == 0) && local_4a8.TypeId.B == 0) &&
          local_4a8.TypeId.A == 0) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (**(code **)(*(longlong *)puVar7 + 8))(puVar7,local_4e8 + 0x10);
        local_dd8 = 0;
        uStack_dd0 = 0;
        local_4a8.TypeId.A = 0;
        local_4a8.TypeId.B = 0;
        local_4a8.TypeId.C = 0;
        local_4a8.TypeId.D = 0;
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
    }
    puVar7 = puVar11;
    if (((local_4e8._12_4_ ==
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
          ::__l2::Global.D &&
         local_4e8._8_4_ ==
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
         ::__l2::Global.C) &&
        local_4e8._4_4_ ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.B) &&
        local_4e8._0_4_ ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.A) {
      puVar7 = (uchar *)local_4e8._24_8_;
    }
    if (*(int *)(puVar7 + 8) == 1) {
      local_df0.bIgnoreWhitespace = false;
      local_df0.Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_df0.Definitions.ArrayNum = 0;
      local_df0.Definitions.ArrayMax = 0;
      FExpressionGrammar::FExpressionGrammar(&local_168);
      TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>(&local_2a8);
      local_440 = (longlong *)0x0;
      local_458 = &
                  ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_468 = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
      uStack_450 = `Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_1>::<lambda_invoker_cdecl>
      ;
      iVar5 = local_df0.Definitions.ArrayNum;
      if (local_df0.Definitions.ArrayNum == local_df0.Definitions.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&local_df0.Definitions.AllocatorInstance,
                           &local_df0.Definitions.ArrayMax);
      }
      local_df0.Definitions.ArrayNum = iVar5 + 1;
      pFVar10 = local_df0.Definitions.AllocatorInstance.Data + (longlong)iVar5 * 0x30;
      *(code **)pFVar10 = local_468;
      *(longlong **)(pFVar10 + 0x28) = local_440;
      *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_458;
      *(undefined4 *)(pFVar10 + 0x14) = local_458._4_4_;
      *(undefined4 *)(pFVar10 + 0x18) = (undefined4)uStack_450;
      *(undefined4 *)(pFVar10 + 0x1c) = uStack_450._4_4_;
      *(longlong *)(pFVar10 + 0x20) = local_448;
      if (*(longlong *)pFVar10 == 0) {
        if (local_468 != (code *)0x0) {
          plVar8 = &local_458;
          if (local_440 != (longlong *)0x0) {
            plVar8 = local_440;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      else {
        local_468 = (code *)0x0;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_168.PreUnaryOperators,(FGuid *)local_dc8,
                 (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                          ::__l2::Global);
      FExpressionGrammar::DefineBinaryOperator<Tests::FOperator>(&local_168,1,RightToLeft,false);
      local_d98 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.A;
      local_d94 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.B;
      local_d90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.C;
      local_d8c = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.D;
      local_428[0] = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFHugeType_Tests__XV<lambda_2>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_438[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                     ::Call;
      local_d38 = local_dc0 + 8;
      local_d30 = local_438;
      local_dc0._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.A;
      local_dc0._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.B;
      local_dc0._16_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.C;
      local_dc0._20_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.D;
      local_da8 = 0;
      local_da0 = 0;
      local_410 = (undefined ***)0x0;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&local_2a8,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                  *)(local_dc8 + 4),(bool *)&local_d38);
      if (local_438[0] != (code *)0x0) {
        pppuVar9 = local_428;
        if (local_410 != (undefined ***)0x0) {
          pppuVar9 = local_410;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      local_d6c = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.D;
      local_d5c = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.D;
      local_3f8[0] = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFHugeType_Tests__U12_XV<lambda_3>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_408[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                     ::Call;
      local_d28 = &local_d88;
      local_d20 = local_408;
      local_d78 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.A;
      local_d74 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.B;
      local_d70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.C;
      local_d68 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.A;
      local_d64 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.B;
      local_d60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                  ::__l2::Global.C;
      local_d88 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                  ::__l2::Global;
      local_3e0 = (undefined ***)0x0;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&local_2a8.BinaryOps,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                  *)local_dc0,(bool *)&local_d28);
      if (local_408[0] != (code *)0x0) {
        pppuVar9 = local_3f8;
        if (local_3e0 != (undefined ***)0x0) {
          pppuVar9 = local_3e0;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      ExpressionParser::Evaluate<wchar_t,void>
                (&local_398,L"+a",&local_df0,&local_168,&local_2a8,(void *)0x0);
      if ((2 < local_398.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_398.Variant.TypeIndex])(&local_398);
      ExpressionParser::Evaluate<wchar_t,void>
                (&local_348,L"a+a",&local_df0,&local_168,&local_2a8,(void *)0x0);
      if ((2 < local_348.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_348.Variant.TypeIndex])(&local_348);
      ExpressionParser::Evaluate<wchar_t,void>
                (&local_2f8,L"+a++a",&local_df0,&local_168,&local_2a8,(void *)0x0);
      if ((2 < local_2f8.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_2f8.Variant.TypeIndex])(&local_2f8);
      TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>(&local_2a8);
      FExpressionGrammar::~FExpressionGrammar(&local_168);
      DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
                ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                  *)local_df0.Definitions.AllocatorInstance.Data,local_df0.Definitions.ArrayNum);
      if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
          local_df0.Definitions.AllocatorInstance.Data !=
          (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0
         ) {
        FMemory::Free(local_df0.Definitions.AllocatorInstance.Data);
      }
      puVar7 = local_4e8 + 0x10;
      if (((local_4e8._12_4_ == 0 && local_4e8._8_4_ == 0) && local_4e8._4_4_ == 0) &&
          local_4e8._0_4_ == 0) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
      puVar7 = local_4a8.InlineBytes;
      if (((local_4a8.TypeId.D == 0 && local_4a8.TypeId.C == 0) && local_4a8.TypeId.B == 0) &&
          local_4a8.TypeId.A == 0) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
      if (local_df4 != 0) {
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        FMoveableType::LeakCount = piVar2;
        ::FString::PrintfImpl
                  (&local_d18,
                   L"Expression node did not call wrapped type\'s destructors correctly. Potentially resulted in %d leaks."
                  );
        (*pcVar1)(param_1,&local_d18,0);
        if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d18.Data.AllocatorInstance.Data);
        }
        return false;
      }
      FMoveableType::LeakCount = piVar2;
      return true;
    }
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_d48,
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(param_1,&local_d48,0);
    local_d58.Data.AllocatorInstance.Data = local_d48.Data.AllocatorInstance.Data;
  }
  else {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_d58,
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(param_1,&local_d58,0);
  }
  if (local_d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d58.Data.AllocatorInstance.Data);
  }
  puVar7 = local_4e8 + 0x10;
  if (((local_4e8._12_4_ == 0 && local_4e8._8_4_ == 0) && local_4e8._4_4_ == 0) &&
      local_4e8._0_4_ == 0) {
    puVar7 = puVar11;
  }
  if (puVar7 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar7)(puVar7,0);
  }
  puVar7 = local_4a8.InlineBytes;
  if (((local_4a8.TypeId.D == 0 && local_4a8.TypeId.C == 0) && local_4a8.TypeId.B == 0) &&
      local_4a8.TypeId.A == 0) {
    puVar7 = puVar11;
  }
  if (puVar7 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar7)(puVar7,0);
  }
  FMoveableType::LeakCount = piVar2;
  return false;
}

// TestWithType<Tests::FMoveableType> @ 1418b8b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl Tests::TestWithType<Tests::FMoveableType>(FAutomationTestBase *param_1)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  FInlineDataStorage<Tests::FMoveableType> *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FInlineDataStorage<Tests::FMoveableType> *pFVar15;
  undefined1 auStackY_618 [32];
  int local_5e4;
  TTokenDefinitions<wchar_t> local_5e0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8 [8];
  undefined1 local_5b0 [24];
  FString local_598;
  FGuid *local_588;
  code **local_580;
  FGuid *local_578;
  code **local_570;
  FString local_568;
  FGuid local_558;
  undefined8 local_548;
  undefined8 local_540;
  undefined1 local_538 [16];
  FGuid local_528;
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [32];
  int local_4d8 [8];
  undefined1 local_4b8 [16];
  FInlineDataStorage<Tests::FMoveableType> local_4a8 [2];
  code *local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  longlong local_458;
  longlong *local_450;
  undefined1 local_448 [16];
  FInlineDataStorage<Tests::FMoveableType> local_438 [2];
  code *local_408 [2];
  undefined **local_3f8 [3];
  undefined ***local_3e0;
  code *local_3d8 [2];
  undefined **local_3c8 [3];
  undefined ***local_3b0;
  TValueOrError<FExpressionNode,FExpressionError> local_3a8;
  TValueOrError<FExpressionNode,FExpressionError> local_358;
  TValueOrError<FExpressionNode,FExpressionError> local_308;
  TOperatorJumpTable<void,wchar_t> local_2b8;
  FExpressionGrammar local_178;
  ulonglong local_38;
  
  piVar2 = FMoveableType::LeakCount;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_618;
  local_4b8._4_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.B;
  local_4b8._0_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.A;
  local_4b8._8_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.C;
  local_4b8._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.D;
  FMoveableType::LeakCount = &local_5e4;
  pFVar15 = (FInlineDataStorage<Tests::FMoveableType> *)0x0;
  local_5e4 = 1;
  local_4a8[0]._padding_ = (longlong)&___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
  local_4a8[0].Value._padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  local_4a8[0].Value.Id = 1;
  local_4a8[0].Value.bOwnsLeak = true;
  local_4f8._0_4_ = 0;
  local_4f8._4_4_ = 0;
  local_4f8._8_4_ = 0;
  local_4f8._12_4_ = 0;
  FExpressionNode::operator=((FExpressionNode *)local_4f8,(FExpressionNode *)local_4b8);
  piVar6 = local_4d8;
  if (((local_4f8._12_4_ !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.D ||
       local_4f8._8_4_ !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.C) ||
      local_4f8._4_4_ !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.B) ||
      local_4f8._0_4_ !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.A) {
    piVar6 = (int *)&DAT_00000008;
  }
  if (*piVar6 == 1) {
    *FMoveableType::LeakCount = *FMoveableType::LeakCount + 1;
    local_448._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.B;
    local_448._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.A;
    local_448._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.C;
    local_448._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.D;
    local_438[0]._padding_ = (longlong)&___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
    local_438[0].Value._padding_ = (longlong)&___7FMoveableType_Tests__6B_;
    local_438[0].Value.Id = 1;
    local_438[0].Value.bOwnsLeak = true;
    FExpressionNode::operator=((FExpressionNode *)local_4b8,(FExpressionNode *)local_448);
    pFVar9 = local_438;
    if (((local_448._12_4_ == 0 && local_448._8_4_ == 0) && local_448._4_4_ == 0) &&
        local_448._0_4_ == 0) {
      pFVar9 = pFVar15;
    }
    if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
      (**(code **)pFVar9->_padding_)(pFVar9,0);
    }
    if ((((local_4b8._12_4_ == local_4f8._12_4_ && local_4b8._8_4_ == local_4f8._8_4_) &&
         local_4b8._4_4_ == local_4f8._4_4_) && local_4b8._0_4_ == local_4f8._0_4_) &&
       ((local_4f8._12_4_ != 0 || local_4f8._8_4_ != 0) ||
        (local_4f8._4_4_ != 0 || local_4f8._0_4_ != 0))) {
      pFVar9 = local_4a8;
      if (((local_4b8._12_4_ == 0 && local_4b8._8_4_ == 0) && local_4b8._4_4_ == 0) &&
          local_4b8._0_4_ == 0) {
        pFVar9 = pFVar15;
      }
      pcVar1 = *(code **)(pFVar9->_padding_ + 0x10);
      if (pcVar1 == ::Impl::FInlineDataStorage<Tests::FMoveableType>::MoveAssign) {
        ::Impl::FInlineDataStorage<Tests::FMoveableType>::MoveAssign(pFVar9,local_4f8 + 0x10);
      }
      else {
        (*pcVar1)();
      }
    }
    else {
      pFVar9 = (FInlineDataStorage<Tests::FMoveableType> *)(local_4f8 + 0x10);
      if ((local_4f8._12_4_ == 0 && local_4f8._8_4_ == 0) &&
          (local_4f8._4_4_ == 0 && local_4f8._0_4_ == 0)) {
        pFVar9 = pFVar15;
      }
      uVar10 = local_4b8._12_4_;
      uVar13 = local_4b8._8_4_;
      uVar14 = local_4b8._4_4_;
      uVar12 = local_4b8._0_4_;
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,0);
        uVar10 = local_4b8._12_4_;
        uVar13 = local_4b8._8_4_;
        uVar14 = local_4b8._4_4_;
        uVar12 = local_4b8._0_4_;
      }
      local_4f8._0_4_ = local_4b8._0_4_;
      local_4f8._4_4_ = local_4b8._4_4_;
      local_4f8._8_4_ = local_4b8._8_4_;
      local_4f8._12_4_ = local_4b8._12_4_;
      pFVar9 = local_4a8;
      if (((uVar10 == 0 && uVar13 == 0) && uVar14 == 0) && uVar12 == 0) {
        pFVar9 = pFVar15;
      }
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        pcVar1 = *(code **)(pFVar9->_padding_ + 8);
        if (pcVar1 == ::Impl::FInlineDataStorage<Tests::FMoveableType>::Reseat) {
          ::Impl::FInlineDataStorage<Tests::FMoveableType>::Reseat(pFVar9,local_4f8 + 0x10);
        }
        else {
          (*pcVar1)();
        }
        local_5c8 = 0;
        uStack_5c0 = 0;
        local_4b8._0_12_ = ZEXT812(0);
        local_4b8._12_4_ = 0;
        (**(code **)pFVar9->_padding_)(pFVar9,0);
      }
    }
    piVar6 = local_4d8;
    if (((local_4f8._12_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
          ::__l2::Global.D ||
         local_4f8._8_4_ !=
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.C) ||
        local_4f8._4_4_ !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.B) ||
        local_4f8._0_4_ !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.A) {
      piVar6 = (int *)&DAT_00000008;
    }
    if (*piVar6 == 1) {
      local_5e0.bIgnoreWhitespace = false;
      local_5e0.Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5e0.Definitions.ArrayNum = 0;
      local_5e0.Definitions.ArrayMax = 0;
      FExpressionGrammar::FExpressionGrammar(&local_178);
      TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>(&local_2b8);
      local_450 = (longlong *)0x0;
      local_468 = &
                  ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_478 = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
      uStack_460 = `Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_1>::
                   <lambda_invoker_cdecl>;
      iVar5 = local_5e0.Definitions.ArrayNum;
      if (local_5e0.Definitions.ArrayNum == local_5e0.Definitions.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&local_5e0.Definitions.AllocatorInstance,
                           &local_5e0.Definitions.ArrayMax);
      }
      local_5e0.Definitions.ArrayNum = iVar5 + 1;
      pFVar11 = local_5e0.Definitions.AllocatorInstance.Data + (longlong)iVar5 * 0x30;
      *(code **)pFVar11 = local_478;
      *(longlong **)(pFVar11 + 0x28) = local_450;
      *(undefined4 *)(pFVar11 + 0x10) = (undefined4)local_468;
      *(undefined4 *)(pFVar11 + 0x14) = local_468._4_4_;
      *(undefined4 *)(pFVar11 + 0x18) = (undefined4)uStack_460;
      *(undefined4 *)(pFVar11 + 0x1c) = uStack_460._4_4_;
      *(longlong *)(pFVar11 + 0x20) = local_458;
      if (*(longlong *)pFVar11 == 0) {
        if (local_478 != (code *)0x0) {
          plVar7 = &local_468;
          if (local_450 != (longlong *)0x0) {
            plVar7 = local_450;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      else {
        local_478 = (code *)0x0;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_178.PreUnaryOperators,(FGuid *)local_5b8,
                 (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                          ::__l2::Global);
      FExpressionGrammar::DefineBinaryOperator<Tests::FOperator>(&local_178,1,RightToLeft,false);
      local_548 = 0;
      local_3f8[0] = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFMoveableType_Tests__XV<lambda_2>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_540 = 0;
      local_408[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                     ::Call;
      local_588 = &local_558;
      local_3e0 = (undefined ***)0x0;
      local_558 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                  ::__l2::Global;
      local_580 = local_408;
      local_538._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.B;
      local_538._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.A;
      local_538._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.C;
      local_538._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.D;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&local_2b8,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                  *)(local_5b8 + 4),(bool *)&local_588);
      if (local_408[0] != (code *)0x0) {
        pppuVar8 = local_3f8;
        if (local_3e0 != (undefined ***)0x0) {
          pppuVar8 = local_3e0;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      local_518._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.B;
      local_518._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.A;
      local_518._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.C;
      local_518._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.D;
      local_3c8[0] = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFMoveableType_Tests__U12_XV<lambda_3>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_3b0 = (undefined ***)0x0;
      local_3d8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                     ::Call;
      local_578 = &local_528;
      local_570 = local_3d8;
      local_528 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                  ::__l2::Global;
      local_508 = local_518;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&local_2b8.BinaryOps,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                  *)local_5b0,(bool *)&local_578);
      if (local_3d8[0] != (code *)0x0) {
        pppuVar8 = local_3c8;
        if (local_3b0 != (undefined ***)0x0) {
          pppuVar8 = local_3b0;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      ExpressionParser::Evaluate<wchar_t,void>
                (&local_3a8,L"+a",&local_5e0,&local_178,&local_2b8,(void *)0x0);
      if ((2 < local_3a8.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_3a8.Variant.TypeIndex])(&local_3a8);
      ExpressionParser::Evaluate<wchar_t,void>
                (&local_358,L"a+a",&local_5e0,&local_178,&local_2b8,(void *)0x0);
      if ((2 < local_358.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_358.Variant.TypeIndex])(&local_358);
      ExpressionParser::Evaluate<wchar_t,void>
                (&local_308,L"+a++a",&local_5e0,&local_178,&local_2b8,(void *)0x0);
      if ((2 < local_308.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_308.Variant.TypeIndex])(&local_308);
      TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>(&local_2b8);
      FExpressionGrammar::~FExpressionGrammar(&local_178);
      DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
                ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                  *)local_5e0.Definitions.AllocatorInstance.Data,local_5e0.Definitions.ArrayNum);
      if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
          local_5e0.Definitions.AllocatorInstance.Data !=
          (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0
         ) {
        FMemory::Free(local_5e0.Definitions.AllocatorInstance.Data);
      }
      pFVar9 = (FInlineDataStorage<Tests::FMoveableType> *)(local_4f8 + 0x10);
      if (((local_4f8._12_4_ == 0 && local_4f8._8_4_ == 0) && local_4f8._4_4_ == 0) &&
          local_4f8._0_4_ == 0) {
        pFVar9 = pFVar15;
      }
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,0);
      }
      pFVar9 = local_4a8;
      if (((local_4b8._12_4_ == 0 && local_4b8._8_4_ == 0) && local_4b8._4_4_ == 0) &&
          local_4b8._0_4_ == 0) {
        pFVar9 = pFVar15;
      }
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,0);
      }
      if (local_5e4 != 0) {
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        FMoveableType::LeakCount = piVar2;
        ::FString::PrintfImpl
                  (&local_568,
                   L"Expression node did not call wrapped type\'s destructors correctly. Potentially resulted in %d leaks."
                  );
        (*pcVar1)(param_1,&local_568,0);
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
        return false;
      }
      FMoveableType::LeakCount = piVar2;
      return true;
    }
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_598,
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(param_1,&local_598,0);
    local_5b0._8_8_ = local_598.Data.AllocatorInstance.Data;
  }
  else {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)(local_5b0 + 8),
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(param_1,local_5b0 + 8,0);
  }
  if ((TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
       *)local_5b0._8_8_ !=
      (TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
       *)0x0) {
    FMemory::Free((void *)local_5b0._8_8_);
  }
  pFVar9 = (FInlineDataStorage<Tests::FMoveableType> *)(local_4f8 + 0x10);
  if (((local_4f8._12_4_ == 0 && local_4f8._8_4_ == 0) && local_4f8._4_4_ == 0) &&
      local_4f8._0_4_ == 0) {
    pFVar9 = pFVar15;
  }
  if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
    (**(code **)pFVar9->_padding_)(pFVar9,0);
  }
  pFVar9 = local_4a8;
  if (((local_4b8._12_4_ == 0 && local_4b8._8_4_ == 0) && local_4b8._4_4_ == 0) &&
      local_4b8._0_4_ == 0) {
    pFVar9 = pFVar15;
  }
  if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
    (**(code **)pFVar9->_padding_)(pFVar9,0);
  }
  FMoveableType::LeakCount = piVar2;
  return false;
}

// VisitApplyEncoded<1,0,``UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<`UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems'::__l2::FVisitor>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&> @ 1418b9360

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems_::__l2::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>
          (<lambda_1> *param_1,
          TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FOutputDevice *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64> *local_res10;
  int local_res18;
  FOutputDevice *local_res20;
  
  uVar10 = 0;
  lVar3 = **(longlong **)(param_1 + 8);
  lVar5 = (*(longlong **)(param_1 + 8))[1];
  local_res18 = *(int *)(lVar3 + 200);
  puVar13 = *(undefined8 **)(lVar3 + 0x48);
  iVar2 = *(int *)(lVar3 + 0x50);
  puVar1 = puVar13 + iVar2;
  local_res10 = param_2;
  do {
    if (*(int *)(lVar3 + 0x50) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar13 == puVar1) {
      return;
    }
    local_res20 = (FOutputDevice *)*puVar13;
    uVar12 = uVar10;
    if ((int)lVar5 == local_res18) {
      uVar12 = uVar10 + 1;
      if (((int)uVar10 < 0) || (*(int *)(lVar3 + 0xe0) <= (int)uVar10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar8 = lVar3 + 0xd0;
      if (*(longlong *)(lVar3 + 0xd8) != 0) {
        lVar8 = *(longlong *)(lVar3 + 0xd8);
      }
      uVar9 = uVar10 & 0x1f;
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 + 0x1f;
      }
      iVar11 = (int)uVar10 >> 5;
      uVar10 = uVar12;
      if ((*(uint *)(lVar8 + (longlong)iVar11 * 4) >> uVar9 & 1) != 0) goto LAB_1418b943b;
    }
    else {
LAB_1418b943b:
      pFVar7 = DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>(&local_res20);
      (**(code **)(pFVar7->_padding_ + 0x18))(pFVar7,local_res10);
      uVar10 = uVar12;
    }
    puVar13 = puVar13 + 1;
  } while( true );
}

// VisitApplyEncoded<1,0,``UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<`UE::Private::FOutputDeviceRedirectorState::EnableBacklog'::__l12::FVisitor>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&> @ 1418b9490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::EnableBacklog_::__l12::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>
          (<lambda_1> *param_1,
          TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64> *param_2)

{
  Type TVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStackY_498 [32];
  LARGE_INTEGER local_468 [2];
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [4];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_498;
  plVar2 = *(longlong **)(param_1 + 8);
  local_458.Base = local_438;
  local_458.CurPos = local_438;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  local_458.End = (wchar_t *)local_38;
  FLogRecord::FormatMessageTo((FLogRecord *)param_2,&local_458);
  lVar3 = *plVar2;
  QueryPerformanceCounter(local_468);
  TVar1 = *(Type *)((longlong)&param_2->_padding_ + 4);
  dVar4 = ((double)local_468[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - GStartTime;
  if (local_458.End < local_458.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,1);
  }
  pwVar5 = local_458.Base;
  *local_458.CurPos = L'\0';
  iVar6 = *(int *)(lVar3 + 0x70);
  if (iVar6 == *(int *)(lVar3 + 0x74)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)(lVar3 + 0x68),(int *)(lVar3 + 0x74));
  }
  *(int *)(lVar3 + 0x70) = iVar6 + 1;
  FBufferedLine::FBufferedLine
            ((FBufferedLine *)(*(longlong *)(lVar3 + 0x68) + (longlong)iVar6 * 0x28),pwVar5,
             (FName *)((longlong)&param_2->_padding_ + 4),TVar1,dVar4);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  return;
}

// VisitApplyEncoded<2,0,``UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<`UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems'::__l2::FVisitor>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&> @ 1418b95e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems_::__l2::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>
          (<lambda_1> *param_1,
          TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64> *param_2)

{
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar1;
  uint uVar2;
  FBucket *this;
  TRefCountPtr<UE::ParkingLot::Private::FThread> TVar3;
  ulonglong uVar4;
  atomic<UE::ParkingLot::Private::FTable_*> aVar5;
  int iVar6;
  ulonglong uVar7;
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [8];
  <lambda_1> <Stack_450;
  TArray<TRefCountPtr<UE::ParkingLot::Private::FThread>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  TStack_438;
  ulonglong uStack_28;
  
  uVar11 = param_2->_padding_;
  uVar4 = *(ulonglong *)(*(longlong *)param_1 + 0xb8);
  do {
    if (uVar11 <= uVar4) break;
    LOCK();
    uVar7 = *(ulonglong *)(*(longlong *)param_1 + 0xb8);
    bVar12 = uVar4 == uVar7;
    if (bVar12) {
      *(ulonglong *)(*(longlong *)param_1 + 0xb8) = uVar11;
      uVar7 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar7;
  } while (!bVar12);
  puVar9 = (uint *)(*(longlong *)param_1 + 0xa8);
  LOCK();
  uVar10 = *puVar9;
  *puVar9 = *puVar9;
  UNLOCK();
  if ((uVar10 & 1) != 0) {
    LOCK();
    uVar2 = *puVar9;
    if (uVar10 == uVar2) {
      *puVar9 = uVar10 + 1;
    }
    UNLOCK();
    if (uVar10 == uVar2) {
      uStack_28 = __security_cookie.value ^ (ulonglong)auStack_478;
      TStack_438.AllocatorInstance.SecondaryData =
           (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0;
      TStack_438.ArrayNum = 0;
      TStack_438.ArrayMax = 0x80;
      aVar5 = ParkingLot::Private::FTable::GlobalTable;
      while( true ) {
        ParkingLot::Private::FTable::GlobalTable = aVar5;
        if ((aVar5 == (atomic<UE::ParkingLot::Private::FTable_*>)0x0) ||
           (this = *(FBucket **)
                    ((uint *)((longlong)aVar5 + 8) +
                    ((((ulonglong)puVar9 & 0xffffffff) * -0x34efebe6d34d3a04 + 0x5b12db9242bd7ce7 +
                      ((ulonglong)puVar9 >> 0x20) * -0x23d4e82362d043d7 >> 0x20) %
                    (ulonglong)*(uint *)aVar5) * 2), this == (FBucket *)0x0)) goto LAB_1414b96fa;
        FWordMutex::Lock(&this->Mutex);
        if (aVar5 == ParkingLot::Private::FTable::GlobalTable) break;
        FWordMutex::Unlock(&this->Mutex);
        aVar5 = ParkingLot::Private::FTable::GlobalTable;
      }
      <Stack_450.WakeThreads = &TStack_438;
      <Stack_450.WakeCount = 0xffffffff;
      <Stack_450.Address = puVar9;
      ParkingLot::Private::FBucket::DequeueIf<_UE::ParkingLot::WakeMultiple_::__l5::<lambda_1>_>
                (this,&<Stack_450);
      FWordMutex::Unlock(&this->Mutex);
LAB_1414b96fa:
      iVar6 = TStack_438.ArrayNum;
      uVar11 = (ulonglong)TStack_438.ArrayNum;
      FVar8 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
      if (TStack_438.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FVar8 = TStack_438.AllocatorInstance.SecondaryData;
      }
      FVar1 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)
              ((longlong)FVar8 + uVar11 * 8);
      while( true ) {
        uVar10 = (uint)uVar11;
        if ((uint)uVar11 != iVar6) {
          `TCheckedPointerIterator<TRefCountPtr<UE::ParkingLot::Private::FThread>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(auStack_458);
          uVar10 = TStack_438.ArrayNum;
        }
        if (FVar8 == FVar1) break;
        TVar3.Reference = *(FThread **)FVar8;
        (TVar3.Reference)->WaitAddress = (atomic<void_const_*>)0x0;
        HAL::Private::FMicrosoftManualResetEvent::Notify(&(TVar3.Reference)->Event);
        uVar11 = (ulonglong)(uint)TStack_438.ArrayNum;
        FVar8 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)
                ((longlong)FVar8 + 8);
      }
      FVar8 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
      if (TStack_438.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FVar8 = TStack_438.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<UE::ParkingLot::Private::FThread>,int>
                ((TRefCountPtr<UE::ParkingLot::Private::FThread> *)FVar8,uVar10);
      if (TStack_438.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FMemory::Free((void *)TStack_438.AllocatorInstance.SecondaryData);
      }
      return;
    }
  }
  return;
}

// VisitApplyEncoded<2,0,``UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<`UE::Private::FOutputDeviceRedirectorState::EnableBacklog'::__l12::FVisitor>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&> @ 1418b9630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::EnableBacklog_::__l12::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>
          (<lambda_1> *param_1,
          TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64> *param_2)

{
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar1;
  uint uVar2;
  FBucket *this;
  TRefCountPtr<UE::ParkingLot::Private::FThread> TVar3;
  ulonglong uVar4;
  atomic<UE::ParkingLot::Private::FTable_*> aVar5;
  int iVar6;
  ulonglong uVar7;
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [8];
  <lambda_1> <Stack_450;
  TArray<TRefCountPtr<UE::ParkingLot::Private::FThread>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  TStack_438;
  ulonglong uStack_28;
  
  uVar11 = param_2->_padding_;
  uVar4 = *(ulonglong *)(*(longlong *)param_1 + 0xb8);
  do {
    if (uVar11 <= uVar4) break;
    LOCK();
    uVar7 = *(ulonglong *)(*(longlong *)param_1 + 0xb8);
    bVar12 = uVar4 == uVar7;
    if (bVar12) {
      *(ulonglong *)(*(longlong *)param_1 + 0xb8) = uVar11;
      uVar7 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar7;
  } while (!bVar12);
  puVar9 = (uint *)(*(longlong *)param_1 + 0xa8);
  LOCK();
  uVar10 = *puVar9;
  *puVar9 = *puVar9;
  UNLOCK();
  if ((uVar10 & 1) != 0) {
    LOCK();
    uVar2 = *puVar9;
    if (uVar10 == uVar2) {
      *puVar9 = uVar10 + 1;
    }
    UNLOCK();
    if (uVar10 == uVar2) {
      uStack_28 = __security_cookie.value ^ (ulonglong)auStack_478;
      TStack_438.AllocatorInstance.SecondaryData =
           (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0;
      TStack_438.ArrayNum = 0;
      TStack_438.ArrayMax = 0x80;
      aVar5 = ParkingLot::Private::FTable::GlobalTable;
      while( true ) {
        ParkingLot::Private::FTable::GlobalTable = aVar5;
        if ((aVar5 == (atomic<UE::ParkingLot::Private::FTable_*>)0x0) ||
           (this = *(FBucket **)
                    ((uint *)((longlong)aVar5 + 8) +
                    ((((ulonglong)puVar9 & 0xffffffff) * -0x34efebe6d34d3a04 + 0x5b12db9242bd7ce7 +
                      ((ulonglong)puVar9 >> 0x20) * -0x23d4e82362d043d7 >> 0x20) %
                    (ulonglong)*(uint *)aVar5) * 2), this == (FBucket *)0x0)) goto LAB_1414b96fa;
        FWordMutex::Lock(&this->Mutex);
        if (aVar5 == ParkingLot::Private::FTable::GlobalTable) break;
        FWordMutex::Unlock(&this->Mutex);
        aVar5 = ParkingLot::Private::FTable::GlobalTable;
      }
      <Stack_450.WakeThreads = &TStack_438;
      <Stack_450.WakeCount = 0xffffffff;
      <Stack_450.Address = puVar9;
      ParkingLot::Private::FBucket::DequeueIf<_UE::ParkingLot::WakeMultiple_::__l5::<lambda_1>_>
                (this,&<Stack_450);
      FWordMutex::Unlock(&this->Mutex);
LAB_1414b96fa:
      iVar6 = TStack_438.ArrayNum;
      uVar11 = (ulonglong)TStack_438.ArrayNum;
      FVar8 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
      if (TStack_438.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FVar8 = TStack_438.AllocatorInstance.SecondaryData;
      }
      FVar1 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)
              ((longlong)FVar8 + uVar11 * 8);
      while( true ) {
        uVar10 = (uint)uVar11;
        if ((uint)uVar11 != iVar6) {
          `TCheckedPointerIterator<TRefCountPtr<UE::ParkingLot::Private::FThread>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(auStack_458);
          uVar10 = TStack_438.ArrayNum;
        }
        if (FVar8 == FVar1) break;
        TVar3.Reference = *(FThread **)FVar8;
        (TVar3.Reference)->WaitAddress = (atomic<void_const_*>)0x0;
        HAL::Private::FMicrosoftManualResetEvent::Notify(&(TVar3.Reference)->Event);
        uVar11 = (ulonglong)(uint)TStack_438.ArrayNum;
        FVar8 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)
                ((longlong)FVar8 + 8);
      }
      FVar8 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
      if (TStack_438.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FVar8 = TStack_438.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<UE::ParkingLot::Private::FThread>,int>
                ((TRefCountPtr<UE::ParkingLot::Private::FThread> *)FVar8,uVar10);
      if (TStack_438.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FMemory::Free((void *)TStack_438.AllocatorInstance.SecondaryData);
      }
      return;
    }
  }
  return;
}

// VisitApplyEncoded<0,0,``UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<`UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems'::__l2::FVisitor>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&> @ 1418b9680

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems_::__l2::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>
          (<lambda_1> *param_1,
          TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FOutputDevice *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FOutputDevice *local_res20;
  
  uVar9 = 0;
  lVar3 = **(longlong **)(param_1 + 8);
  local_res10 = (int)(*(longlong **)(param_1 + 8))[1];
  local_res18 = *(int *)(lVar3 + 200);
  puVar12 = *(undefined8 **)(lVar3 + 0x48);
  iVar2 = *(int *)(lVar3 + 0x50);
  puVar1 = puVar12 + iVar2;
  do {
    if (*(int *)(lVar3 + 0x50) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar12 == puVar1) {
      return;
    }
    local_res20 = (FOutputDevice *)*puVar12;
    uVar11 = uVar9;
    if (local_res10 == local_res18) {
      uVar11 = uVar9 + 1;
      if (((int)uVar9 < 0) || (*(int *)(lVar3 + 0xe0) <= (int)uVar9)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar7 = lVar3 + 0xd0;
      if (*(longlong *)(lVar3 + 0xd8) != 0) {
        lVar7 = *(longlong *)(lVar3 + 0xd8);
      }
      uVar8 = uVar9 & 0x1f;
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 + 0x1f;
      }
      iVar10 = (int)uVar9 >> 5;
      uVar9 = uVar11;
      if ((*(uint *)(lVar7 + (longlong)iVar10 * 4) >> uVar8 & 1) != 0) goto LAB_1418b976c;
    }
    else {
LAB_1418b976c:
      pFVar6 = DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>(&local_res20);
      (**(code **)(pFVar6->_padding_ + 8))
                (pFVar6,param_2->_padding_,(char)param_2->_padding_,&param_2->_padding_,
                 param_2->_padding_);
      uVar9 = uVar11;
    }
    puVar12 = puVar12 + 1;
  } while( true );
}

// VisitApplyEncoded<0,0,``UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<`UE::Private::FOutputDeviceRedirectorState::EnableBacklog'::__l12::FVisitor>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&> @ 1418b97e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::EnableBacklog_::__l12::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>
          (<lambda_1> *param_1,
          TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64> *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  iVar2 = *(int *)(lVar1 + 0x70);
  if (iVar2 == *(int *)(lVar1 + 0x74)) {
    iVar2 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)(lVar1 + 0x68),(int *)(lVar1 + 0x74));
  }
  *(int *)(lVar1 + 0x70) = iVar2 + 1;
  FBufferedLine::FBufferedLine
            ((FBufferedLine *)(*(longlong *)(lVar1 + 0x68) + (longlong)iVar2 * 0x28),
             (wchar_t *)param_2->_padding_,(FName *)&param_2->_padding_,(Type)param_2->_padding_,
             (double)param_2->_padding_);
  return;
}

// WriteToString<256,TStringView<wchar_t>_&> @ 1418b9b90

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,TStringView<wchar_t>_&>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1->DataPtr,
             (int)*(undefined8 *)&param_1->Size);
  return __return_storage_ptr__;
}

// WriteToUtf8String<64,FName_const_&> @ 1418b9bd0

TStringBuilderWithBuffer<char8_t,64> * __cdecl
WriteToUtf8String<64,FName_const_&>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<char8_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>_> @ 1418b9c10

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>_> @ 1418b9c20

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FDateTime>_> @ 1418b9c30

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FDateTime>_>(_Atomic_padded<FDateTime> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FDateTime>_> @ 1418b9c40

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FDateTime>_>(_Atomic_padded<FDateTime> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*> @ 1418b9c50

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FDateTime> @ 1418b9c60

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FDateTime>(FDateTime *param_1)

{
  return param_1->Ticks;
}

// ConsoleCommandLibrary @ 1418ba500

ConsoleCommandLibrary * __thiscall
ConsoleCommandLibrary::ConsoleCommandLibrary
          (ConsoleCommandLibrary *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1->Size;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  (this->Prefix).DataPtr = param_1->DataPtr;
  (this->Prefix).Size = iVar1;
  *(undefined4 *)&(this->Prefix).field_0xc = uVar2;
  *(undefined8 *)&(this->KnownNames).Elements = 0;
  *(undefined8 *)&(this->KnownNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->KnownNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->KnownNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->KnownNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->KnownNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->KnownNames).Elements.field_0x30 = 0xffffffff;
  (this->KnownNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->KnownNames).HashSize = 0;
  GConsoleCommandLibrary = this;
  return this;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bde50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FRWAccessDetector_ConcurentReadTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadTest::RunTest'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bde70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FRWAccessDetector_ConcurentReadWriteTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_ConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bde90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_ConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FRWAccessDetector_ConcurentWriteTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_ConcurentWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bdeb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bded0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bdef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bdf10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRWAccessDetector_RecursiveConcurentReadTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bdf30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRWAccessDetector_RecursiveConcurentReadWriteTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1> @ 1418bdf50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRWAccessDetector_RecursiveConcurentWriteTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0> @ 1418bdf70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<double,double,void,_FFrameRateParser::FFrameRateParser_::__l2::<lambda_5>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_NNXV<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,0,0> @ 1418bdf90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,_Tests::TestWithType<Tests::FHugeType>_::__l3::<lambda_3>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFHugeType_Tests__U12_XV<lambda_3>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,0,0> @ 1418bdfb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,_Tests::TestWithType<Tests::FMoveableType>_::__l3::<lambda_3>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFMoveableType_Tests__U12_XV<lambda_3>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0> @ 1418bdfd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_2>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0> @ 1418bdff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_3>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0> @ 1418be010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_4>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0> @ 1418be030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,_FShortCircuitParser::FShortCircuitParser_::__l2::<lambda_5>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0> @ 1418be050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<double,void,_FFrameRateParser::FFrameRateParser_::__l2::<lambda_1>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_1>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V1_1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0> @ 1418be070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<double,void,_FFrameRateParser::FFrameRateParser_::__l2::<lambda_2>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_2>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0> @ 1418be090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<double,void,_FFrameRateParser::FFrameRateParser_::__l2::<lambda_3>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_3>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_3>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0> @ 1418be0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<double,void,_FFrameRateParser::FFrameRateParser_::__l2::<lambda_4>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_4>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_4>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,0,0> @ 1418be0d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<Tests::FHugeType,void,_Tests::TestWithType<Tests::FHugeType>_::__l3::<lambda_2>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFHugeType_Tests__XV<lambda_2>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,0,0> @ 1418be0f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<Tests::FMoveableType,void,_Tests::TestWithType<Tests::FMoveableType>_::__l3::<lambda_2>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFMoveableType_Tests__XV<lambda_2>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::__l5::<lambda_1>,1,0> @ 1418be110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UE::Private::FOutputDeviceRedirectorState::TryStartThread_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::__l1::<lambda_3_>,0,1> @ 1418be130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::__l1::<lambda_3_>,0,1>
::
~TFunction_OwnedObject<_FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper_::__l1::<lambda_3_>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::`1'::<lambda_3_>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001418be153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~ConsoleCommandLibrary @ 1418be830

void __thiscall ConsoleCommandLibrary::~ConsoleCommandLibrary(ConsoleCommandLibrary *this)

{
  ForElementType<FSetElementId> FVar1;
  
  GConsoleCommandLibrary = (ConsoleCommandLibrary *)0x0;
  (this->KnownNames).HashSize = 0;
  FVar1 = (this->KnownNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->KnownNames).Elements);
  return;
}

// operator<< @ 1418bf610

FArchive * __cdecl operator<<(FArchive *param_1,FFrameNumber *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Value = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return param_1;
}

// operator<< @ 1418bf680

FArchive * __cdecl operator<<(FArchive *param_1,FFrameRate *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Numerator = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->Denominator;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 1418bf750

FArchive * __cdecl operator<<(FArchive *param_1,FGuid *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->A);
    }
  }
  else {
    param_2->A = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->B;
  puVar1 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->C;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->D;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 1418bf8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl operator<<(FArchive *param_1,FEngineVersion *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  operator<<(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// operator<< @ 1418bf920

void __cdecl operator<<(FStructuredArchiveSlot param_1,FGuid *param_2)

{
  FArchive *pFVar1;
  uint *puVar2;
  uint *puVar3;
  FSlotBase FVar4;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar1 = (local_res8.StructuredArchive)->Formatter->Inner;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&param_2->A);
    }
  }
  else {
    param_2->A = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  puVar2 = &param_2->B;
  pFVar1 = (FVar4.StructuredArchive)->Formatter->Inner;
  puVar3 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  puVar2 = &param_2->C;
  pFVar1 = (FVar4.StructuredArchive)->Formatter->Inner;
  puVar3 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  puVar2 = &param_2->D;
  pFVar1 = (FVar4.StructuredArchive)->Formatter->Inner;
  puVar3 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *puVar2 = *puVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,puVar2);
  return;
}

// operator<< @ 1418bfa90

void __cdecl operator<<(FStructuredArchiveSlot param_1,FEngineVersion *param_2)

{
  ushort *puVar1;
  longlong *plVar2;
  FArchive *pFVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  FSlotBase FVar7;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar7.StructuredArchive = local_res8.StructuredArchive;
  pFVar3 = (local_res8.StructuredArchive)->Formatter->Inner;
  puVar4 = (undefined2 *)**(undefined8 **)&pFVar3->field_0x8;
  if ((undefined2 *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar4 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,(ushort *)param_2);
    }
  }
  else {
    *(undefined2 *)&param_2->_padding_ = *puVar4;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 2;
  }
  puVar1 = (ushort *)((longlong)&param_2->_padding_ + 2);
  pFVar3 = (FVar7.StructuredArchive)->Formatter->Inner;
  puVar5 = (ushort *)**(undefined8 **)&pFVar3->field_0x8;
  if ((ushort *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar5 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 2;
  }
  puVar1 = (ushort *)((longlong)&param_2->_padding_ + 4);
  pFVar3 = (FVar7.StructuredArchive)->Formatter->Inner;
  puVar5 = (ushort *)**(undefined8 **)&pFVar3->field_0x8;
  if ((ushort *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar5 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 2;
  }
  plVar2 = &param_2->_padding_;
  pFVar3 = (FVar7.StructuredArchive)->Formatter->Inner;
  puVar6 = (undefined4 *)**(undefined8 **)&pFVar3->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar6 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,plVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)plVar2);
    }
  }
  else {
    *(undefined4 *)plVar2 = *puVar6;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
  }
  operator<<((FVar7.StructuredArchive)->Formatter->Inner,&param_2->Branch);
  return;
}

// operator() @ 1418bfe30

TExpressionToken<char> * __thiscall
`ExpressionParser::Evaluate<char>'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TExpressionToken<char> *pTVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  iVar1 = (int)plVar2[1];
  if (iVar1 <= param_1) {
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar7 = param_1 - iVar1;
    uVar5 = 0;
    if ((int)uVar7 < (int)plVar2[1]) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TExpressionToken<char> *)(*pcVar3)();
        return pTVar6;
      }
    }
    return (TExpressionToken<char> *)((longlong)(int)uVar7 * 0x60 + *plVar2);
  }
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TExpressionToken<char> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TExpressionToken<char> *)((longlong)param_1 * 0x70 + *plVar2);
}

// operator() @ 1418bff00

TExpressionToken<char8_t> * __thiscall
`ExpressionParser::Evaluate<char8_t>'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TExpressionToken<char8_t> *pTVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  iVar1 = (int)plVar2[1];
  if (iVar1 <= param_1) {
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar7 = param_1 - iVar1;
    uVar5 = 0;
    if ((int)uVar7 < (int)plVar2[1]) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TExpressionToken<char8_t> *)(*pcVar3)();
        return pTVar6;
      }
    }
    return (TExpressionToken<char8_t> *)((longlong)(int)uVar7 * 0x60 + *plVar2);
  }
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TExpressionToken<char8_t> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TExpressionToken<char8_t> *)((longlong)param_1 * 0x70 + *plVar2);
}

// operator() @ 1418bffd0

TExpressionToken<wchar_t> * __thiscall
`ExpressionParser::Evaluate<wchar_t>'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TExpressionToken<wchar_t> *pTVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  iVar1 = (int)plVar2[1];
  if (iVar1 <= param_1) {
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar7 = param_1 - iVar1;
    uVar5 = 0;
    if ((int)uVar7 < (int)plVar2[1]) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TExpressionToken<wchar_t> *)(*pcVar3)();
        return pTVar6;
      }
    }
    return (TExpressionToken<wchar_t> *)((longlong)(int)uVar7 * 0x60 + *plVar2);
  }
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TExpressionToken<wchar_t> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TExpressionToken<wchar_t> *)((longlong)param_1 * 0x70 + *plVar2);
}

// operator() @ 1418c00a0

void __thiscall
`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>'::__l2::<lambda_1>::operator()
          (void *this)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  lVar5 = 1000000;
  do {
    puVar2 = *(uint **)this;
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if (((uVar1 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(uint **)this;
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (((uVar1 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// operator() @ 1418c0160

void __thiscall
`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>'::__l2::
<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  longlong lVar6;
  
  lVar6 = 1000000;
  do {
    puVar2 = *(uint **)this;
    DVar5 = GetCurrentThreadId();
    if (puVar2[1] != DVar5) {
      LOCK();
      uVar1 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if (((uVar1 & 0xfff00000) != 0) &&
         (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x5c,L"Acquiring a read access while there is already a write access");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    puVar2 = *(uint **)this;
    DVar5 = GetCurrentThreadId();
    if (puVar2[1] != DVar5) {
      LOCK();
      uVar1 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (((uVar1 & 0xfff00000) != 0) &&
         (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x67,
                           L"Another thread asked to have a write access during this read access");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

// operator() @ 1418c0240

void __thiscall
`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>'::__l2::<lambda_1>::
operator()(void *this)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  lVar5 = 1000000;
  do {
    puVar2 = *(uint **)this;
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if (((uVar1 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(uint **)this;
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (((uVar1 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// operator() @ 1418c1060

void __thiscall
`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  longlong lVar2;
  FString local_res18;
  FString local_18;
  
  uVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if ((uVar1 & 8) == 0) {
    lVar2 = (**(code **)(param_2->_padding_ + 0x80))(param_2);
    if (lVar2 != 0) {
      this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this;
      ::FString::FString(&local_18,param_1);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (this_00,&local_res18,(bool *)&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 1418c2590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::
__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar *puVar4;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar5;
  uchar *puVar6;
  undefined1 auStack_98 [32];
  TValueOrError<FExpressionNode,FExpressionError> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar6 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar6 = (uchar *)0x0;
  }
  puVar4 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  FFrameRateParser::MakeFrameRate(&local_78,*(double *)puVar4,*(double *)puVar6);
  uVar2 = local_78.Variant.TypeIndex;
  (__return_storage_ptr__->Variant).TypeIndex = local_78.Variant.TypeIndex;
  if (2 < local_78.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar2])(__return_storage_ptr__,&local_78);
  if (2 < local_78.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_78.Variant.TypeIndex])(&local_78);
  return __return_storage_ptr__;
}

// operator() @ 1418c26e0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  longlong lVar1;
  FHugeType local_418;
  
  if ((((param_1->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.D &&
       (param_1->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (param_1->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (param_1->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.A) {
    lVar1 = *(longlong *)(param_1->InlineBytes + 8);
  }
  else {
    lVar1 = 0;
  }
  local_418._padding_._0_4_ = *(undefined4 *)(lVar1 + 8);
  local_418._padding_._4_1_ = 1;
  local_418._padding_ = (longlong)&___7FHugeType_Tests__6B_;
  *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  FExpressionNode::FExpressionNode<Tests::FHugeType>
            ((FExpressionNode *)__return_storage_ptr__,&local_418);
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1418c2770

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,FShortCircuitTestContext *param_3)

{
  uchar uVar1;
  uchar uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  uchar *puVar5;
  
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  uVar1 = *puVar5;
  puVar5 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  uVar2 = *puVar5;
  param_3->NumOperatorsCalled = param_3->NumOperatorsCalled + 1;
  if ((uVar2 == '\0') || (uVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  auVar3._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar3._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar3._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar3._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar3;
  (__return_storage_ptr__->Variant).field_0x18 = uVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1418c2840

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,FShortCircuitTestContext *param_3)

{
  uchar uVar1;
  uchar uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  uchar *puVar5;
  
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  uVar1 = *puVar5;
  puVar5 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  uVar2 = *puVar5;
  param_3->NumOperatorsCalled = param_3->NumOperatorsCalled + 1;
  if ((uVar2 == '\0') && (uVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  auVar3._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar3._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar3._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar3._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar3;
  (__return_storage_ptr__->Variant).field_0x18 = uVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1418c2910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>_>'::__l3
::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,void *param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int iStack_74;
  FGuid local_68;
  undefined **local_58;
  undefined8 local_50;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar4 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar1 = *(double *)puVar4;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1 + __real_3fe0000000000000;
  auVar8 = roundpd(in_XMM0,auVar8,1);
  if (((auVar8._0_8_ != dVar1) || (dVar1 <= 0.0)) || (__real_41dfffffffc00000 <= dVar1)) {
    FFrameRateParser::MakeFrameRateFromInterval
              ((TValueOrError<FExpressionNode,FExpressionError> *)&local_68,dVar1);
  }
  else {
    local_78 = 1;
    iStack_74 = (int)dVar1;
    local_28 = 0;
    local_68 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
               ::__l2::Global;
    local_58 = &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
    local_50 = CONCAT44(iStack_74,1);
  }
  TValueOrError<FExpressionNode,FExpressionError>::TValueOrError<FExpressionNode,FExpressionError>
            (__return_storage_ptr__,(TValueOrError<FExpressionNode,FExpressionError> *)&local_68);
  uVar7 = (ulonglong)local_28;
  if (2 < local_28) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7] ==
      UE::Core::Private::TDestructorCaller<FExpressionNode>::Destruct) {
    pppuVar6 = &local_58;
    if (((local_68.D == 0 && local_68.C == 0) && local_68.B == 0) && local_68.A == 0) {
      pppuVar6 = (undefined ***)0x0;
    }
    if (pppuVar6 != (undefined ***)0x0) {
      (*(code *)**pppuVar6)(pppuVar6,0);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(&local_68);
  }
  return __return_storage_ptr__;
}

// operator() @ 1418c2aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>_>'::__l3
::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,void *param_2)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar *puVar4;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar5;
  undefined1 auStack_88 [32];
  TValueOrError<FExpressionNode,FExpressionError> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar4 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  FFrameRateParser::MakeFrameRateFromFPS(&local_68,*(double *)puVar4);
  uVar2 = local_68.Variant.TypeIndex;
  (__return_storage_ptr__->Variant).TypeIndex = local_68.Variant.TypeIndex;
  if (2 < local_68.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar2])(__return_storage_ptr__,&local_68);
  if (2 < local_68.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_68.Variant.TypeIndex])(&local_68);
  return __return_storage_ptr__;
}

// operator() @ 1418c2bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>_>'::__l3
::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,void *param_2)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar *puVar4;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar5;
  undefined1 auStack_88 [32];
  TValueOrError<FExpressionNode,FExpressionError> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar4 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  FFrameRateParser::MakeFrameRateFromFPS(&local_68,*(double *)puVar4);
  uVar2 = local_68.Variant.TypeIndex;
  (__return_storage_ptr__->Variant).TypeIndex = local_68.Variant.TypeIndex;
  if (2 < local_68.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar2])(__return_storage_ptr__,&local_68);
  if (2 < local_68.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_68.Variant.TypeIndex])(&local_68);
  return __return_storage_ptr__;
}

// operator() @ 1418c2d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>_>'::__l3
::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar4;
  undefined1 auStack_88 [32];
  TValueOrError<FExpressionNode,FExpressionError> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar3 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  pTVar4 = `FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>::operator()
                     (this,&local_68,*(double *)puVar3);
  TValueOrError<FExpressionNode,FExpressionError>::TValueOrError<FExpressionNode,FExpressionError>
            (__return_storage_ptr__,pTVar4);
  if (2 < local_68.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_68.Variant.TypeIndex])(&local_68);
  return __return_storage_ptr__;
}

// operator() @ 1418c2de0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,void *param_2)

{
  longlong lVar1;
  FHugeType local_418;
  
  if ((((param_1->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.D &&
       (param_1->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (param_1->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (param_1->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.A) {
    lVar1 = *(longlong *)(param_1->InlineBytes + 8);
  }
  else {
    lVar1 = 0;
  }
  local_418._padding_._0_4_ = *(undefined4 *)(lVar1 + 8);
  local_418._padding_._4_1_ = 1;
  local_418._padding_ = (longlong)&___7FHugeType_Tests__6B_;
  *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  FExpressionNode::FExpressionNode<Tests::FHugeType>
            ((FExpressionNode *)__return_storage_ptr__,&local_418);
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1418c3310

FHugeType * __thiscall
`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>::operator()
          (void *this,FHugeType *__return_storage_ptr__,FHugeType *param_1)

{
  int *piVar1;
  
  *(int *)&__return_storage_ptr__->_padding_ = (int)param_1->_padding_;
  piVar1 = Tests::FMoveableType::LeakCount;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 1;
  *piVar1 = *piVar1 + 1;
  __return_storage_ptr__->_padding_ = (longlong)&___7FHugeType_Tests__6B_;
  return __return_storage_ptr__;
}

// operator() @ 1418c3340

FMoveableType * __thiscall
`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>::operator()
          (void *this,FMoveableType *__return_storage_ptr__,FMoveableType *param_1)

{
  __return_storage_ptr__->bOwnsLeak = true;
  __return_storage_ptr__->_padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  __return_storage_ptr__->Id = param_1->Id;
  *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  return __return_storage_ptr__;
}

// operator() @ 1418c3710

FHugeType * __thiscall
`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>::operator()
          (void *this,FHugeType *__return_storage_ptr__,FHugeType *param_1,FHugeType *param_2)

{
  int *piVar1;
  
  *(int *)&__return_storage_ptr__->_padding_ = (int)param_1->_padding_;
  piVar1 = Tests::FMoveableType::LeakCount;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 1;
  *piVar1 = *piVar1 + 1;
  __return_storage_ptr__->_padding_ = (longlong)&___7FHugeType_Tests__6B_;
  return __return_storage_ptr__;
}

// operator() @ 1418c3740

FMoveableType * __thiscall
`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>::operator()
          (void *this,FMoveableType *__return_storage_ptr__,FMoveableType *param_1,
          FMoveableType *param_2)

{
  __return_storage_ptr__->bOwnsLeak = true;
  __return_storage_ptr__->_padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  __return_storage_ptr__->Id = param_1->Id;
  *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  return __return_storage_ptr__;
}

// `vcall'{32,{flat}}'_}' @ 1418c4010

/* [thunk]: __cdecl FOutputDevice::`vcall'{32,{flat}}' }' */

void __thiscall FOutputDevice::_vcall__32__flat______(FOutputDevice *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001418c4013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1418c401c

/* [thunk]:public: virtual void * __ptr64 __cdecl FAsyncWriter::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAsyncWriter::_vector_deleting_destructor__adjustor_8__(FAsyncWriter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FAsyncWriter *)&this[-1].LastArchiveFlushTime,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 1418c402c

/* [thunk]:public: virtual void * __ptr64 __cdecl FAsyncWriter::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FAsyncWriter::_vector_deleting_destructor__adjustor_16__(FAsyncWriter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAsyncWriter *)(this[-1].RunCritical.CriticalSection.Opaque3 + 2),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1418c403c

/* [thunk]:public: virtual void * __ptr64 __cdecl FMonitoredProcess::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMonitoredProcess::_vector_deleting_destructor__adjustor_8__(FMonitoredProcess *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMonitoredProcess *)&this[-1].OutputDelegate.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1418c404c

/* [thunk]:public: virtual void * __ptr64 __cdecl FSerializedUATProcess::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSerializedUATProcess::_vector_deleting_destructor__adjustor_8__
          (FSerializedUATProcess *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSerializedUATProcess *)&this[-1].LaunchFailedDelegate.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor' @ 1418c4060

void * __thiscall FString::_vector_deleting_destructor_(FString *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  if ((param_1 & 2) == 0) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x10);
    }
    return this;
  }
  lVar2 = *(longlong *)&this[-1].Data.ArrayNum;
  pFVar3 = this + lVar2;
  while (lVar2 != 0) {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  if ((param_1 & 1) != 0) {
    operator_delete__(&this[-1].Data.ArrayNum,*(longlong *)&this[-1].Data.ArrayNum * 0x10 + 8);
  }
  return &this[-1].Data.ArrayNum;
}

// `scalar_deleting_destructor' @ 1418c4130

void * __thiscall
Impl::FHeapDataStorage<Tests::FHugeType>::_scalar_deleting_destructor_
          (FHeapDataStorage<Tests::FHugeType> *this,uint param_1)

{
  FHugeType *pFVar1;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FHugeType *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4180

void * __thiscall
Impl::FInlineDataStorage<Tests::FAnd>::_scalar_deleting_destructor_
          (FInlineDataStorage<Tests::FAnd> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c41b0

void * __thiscall
Impl::FInlineDataStorage<Tests::FDigitsTokenTag>::_scalar_deleting_destructor_
          (FInlineDataStorage<Tests::FDigitsTokenTag> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c41e0

void * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FDropFrame>::_scalar_deleting_destructor_
          (FInlineDataStorage<_anonymous_namespace_::FDropFrame> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4210

void * __thiscall
Impl::FInlineDataStorage<FFrameRate>::_scalar_deleting_destructor_
          (FInlineDataStorage<FFrameRate> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4240

void * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FFramesPerSecond>::_scalar_deleting_destructor_
          (FInlineDataStorage<_anonymous_namespace_::FFramesPerSecond> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4270

void * __thiscall
Impl::FInlineDataStorage<Tests::FLowerAlphaTokenTag>::_scalar_deleting_destructor_
          (FInlineDataStorage<Tests::FLowerAlphaTokenTag> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c42a0

void * __thiscall
Impl::FInlineDataStorage<Tests::FMoveableType>::_scalar_deleting_destructor_
          (FInlineDataStorage<Tests::FMoveableType> *this,uint param_1)

{
  (this->Value)._padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  if ((this->Value).bOwnsLeak != false) {
    *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + -1;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c42f0

void * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FNonDropFrame>::_scalar_deleting_destructor_
          (FInlineDataStorage<_anonymous_namespace_::FNonDropFrame> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4320

void * __thiscall
Impl::FInlineDataStorage<Tests::FOperator>::_scalar_deleting_destructor_
          (FInlineDataStorage<Tests::FOperator> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4350

void * __thiscall
Impl::FInlineDataStorage<Tests::FOr>::_scalar_deleting_destructor_
          (FInlineDataStorage<Tests::FOr> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4380

void * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FSeconds>::_scalar_deleting_destructor_
          (FInlineDataStorage<_anonymous_namespace_::FSeconds> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c43b0

void * __thiscall
Impl::FInlineDataStorage<Tests::FStringTokenTag>::_scalar_deleting_destructor_
          (FInlineDataStorage<Tests::FStringTokenTag> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c43e0

void * __thiscall
Impl::FInlineDataStorage<bool>::_scalar_deleting_destructor_
          (FInlineDataStorage<bool> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4410

void * __thiscall
IBaseDelegateInstance<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4440

void * __thiscall
IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4470

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c44a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c44e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy,TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c45a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPageAllocator::LatchProtectedMode'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c45d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4610

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4640

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4670

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c46a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c46d0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l3::<lambda_1>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l3::<lambda_2>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c4740

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l4::<lambda_3>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l4::<lambda_4>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c47b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l5::<lambda_5>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l5::<lambda_6>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c4820

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c4890

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c4900

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c4970

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c49e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1418c4a50

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l3::<lambda_1>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l3::<lambda_2>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4a90

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l4::<lambda_3>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l4::<lambda_4>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4ad0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l5::<lambda_5>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l5::<lambda_6>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4b10

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4b50

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4b90

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4bd0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4c10

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadTest::RunTest'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_ConcurentReadWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_ConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_ConcurentWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentReadWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRWAccessDetector_RecursiveConcurentWriteTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_NNXV<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFHugeType_Tests__U12_XV<lambda_3>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFMoveableType_Tests__U12_XV<lambda_3>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c4fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_1>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V1_1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_2>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c50d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_3>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_3>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_4>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_4>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFHugeType_Tests__XV<lambda_2>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFMoveableType_Tests__XV<lambda_2>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c51d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::__l1::<lambda_3_>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::`1'::<lambda_3_>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5270

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMapErrorToken,SharedPointerInternals::DefaultDeleter<FMapErrorToken>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMapErrorToken,SharedPointerInternals::DefaultDeleter<FMapErrorToken>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c52b0

void * __thiscall FAsyncWriter::_scalar_deleting_destructor_(FAsyncWriter *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  lpCriticalSection = &this->BufferPosCritical;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FArchive__;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    (this->WantsArchiveFlush).Counter = (this->WantsArchiveFlush).Counter + 1;
    UNLOCK();
    FlushBuffer(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->RunCritical);
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferPosCritical);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FArchive::~FArchive((FArchive *)&this->_padding_);
    this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
    this->_padding_ = (longlong)&___7FRunnable__6B_;
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x130);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `scalar_deleting_destructor' @ 1418c53c0

void * __thiscall
FBufferReaderWithSHA::_scalar_deleting_destructor_(FBufferReaderWithSHA *this,uint param_1)

{
  ~FBufferReaderWithSHA(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5400

void * __thiscall FFbxErrorToken::_scalar_deleting_destructor_(FFbxErrorToken *this,uint param_1)

{
  FDocumentationToken::~FDocumentationToken((FDocumentationToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5440

void * __thiscall
FFeedbackContext::_scalar_deleting_destructor_(FFeedbackContext *this,uint param_1)

{
  ~FFeedbackContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5480

void * __thiscall
FHierarchicalLogArchive::_scalar_deleting_destructor_(FHierarchicalLogArchive *this,uint param_1)

{
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c54c0

void * __thiscall Tests::FHugeType::_scalar_deleting_destructor_(FHugeType *this,uint param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  this->_padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  if (cVar1 != '\0') {
    *FMoveableType::LeakCount = *FMoveableType::LeakCount + -1;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x410);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5500

void * __thiscall
FInteractiveProcess::_scalar_deleting_destructor_(FInteractiveProcess *this,uint param_1)

{
  ~FInteractiveProcess(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5540

void * __thiscall
FLocalTimestampDirectoryVisitor::_scalar_deleting_destructor_
          (FLocalTimestampDirectoryVisitor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FLocalTimestampDirectoryVisitor__6B_;
  DestructItems<FString,int>
            ((FString *)(this->DirectoriesToNotRecurse).AllocatorInstance.Data,
             (this->DirectoriesToNotRecurse).ArrayNum);
  pFVar1 = (this->DirectoriesToNotRecurse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DirectoriesToIgnore).AllocatorInstance.Data,
             (this->DirectoriesToIgnore).ArrayNum);
  pFVar1 = (this->DirectoriesToIgnore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FileTimes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileTimes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileTimes);
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c55f0

void * __thiscall FMapErrorToken::_scalar_deleting_destructor_(FMapErrorToken *this,uint param_1)

{
  FDocumentationToken::~FDocumentationToken((FDocumentationToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5630

void * __thiscall
FMemoryReadStreamBuffer::_scalar_deleting_destructor_(FMemoryReadStreamBuffer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMemoryReadStreamBuffer__6B_;
  if (this->OwnsPointer != false) {
    FMemory::Free(this->Memory);
  }
  this->_padding_ = (longlong)&___7IMemoryReadStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5690

void * __thiscall
FMonitoredProcess::_scalar_deleting_destructor_(FMonitoredProcess *this,uint param_1)

{
  ~FMonitoredProcess(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c56d0

void * __thiscall
Tests::FMoveableType::_scalar_deleting_destructor_(FMoveableType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  if (this->bOwnsLeak != false) {
    *LeakCount = *LeakCount + -1;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5710

void * __thiscall FOutputDevice::_scalar_deleting_destructor_(FOutputDevice *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5750

void * __thiscall
FOutputDeviceAnsiError::_scalar_deleting_destructor_(FOutputDeviceAnsiError *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5790

void * __thiscall
FOutputDeviceError::_scalar_deleting_destructor_(FOutputDeviceError *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c57d0

void * __thiscall
FOutputDeviceFile::_scalar_deleting_destructor_(FOutputDeviceFile *this,uint param_1)

{
  FAsyncWriter *pFVar1;
  FArchive *pFVar2;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FOutputDeviceFile__6B_;
  if (this->AsyncWriter != (FAsyncWriter *)0x0) {
    if ((char)this->_padding_ == '\0') {
      FGenericPlatformTime::StrTimestamp();
      FOutputDevice::LogfImpl((FOutputDevice *)this,L"Log file closed, %s");
    }
    pFVar1 = this->AsyncWriter;
    if (pFVar1 != (FAsyncWriter *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    this->AsyncWriter = (FAsyncWriter *)0x0;
  }
  pFVar2 = this->WriterArchive;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->WriterArchive = (FArchive *)0x0;
  this->Filename[0] = L'\0';
  this_00 = (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this->CategoryInclusionInternal).Ptr;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  if (*(longlong *)&this->OnFileOpenedFn != 0) {
    plVar3 = *(longlong **)&(this->OnFileOpenedFn).field_0x28;
    plVar4 = (longlong *)&(this->OnFileOpenedFn).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x860);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c58e0

void * __thiscall
FOutputDeviceMemory::_scalar_deleting_destructor_(FOutputDeviceMemory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOutputDeviceMemory__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferPosCritical);
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)&this->ArchiveProxy);
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5960

void * __thiscall
FOutputDeviceMemory::FOutputDeviceMemoryProxyArchive::_scalar_deleting_destructor_
          (FOutputDeviceMemoryProxyArchive *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c59a0

void * __thiscall
FOutputDeviceNull::_scalar_deleting_destructor_(FOutputDeviceNull *this,uint param_1)

{
  *(undefined ***)this = &___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c59e0

void * __thiscall
FOutputDeviceRedirector::_scalar_deleting_destructor_(FOutputDeviceRedirector *this,uint param_1)

{
  FOutputDeviceRedirectorState *pFVar1;
  FOutputDeviceRedirector *pFVar2;
  
  this->_padding_ = (longlong)&___7FOutputDeviceRedirector__6B_;
  pFVar2 = Get();
  if (this == pFVar2) {
    GWasGLogDestroyed = true;
  }
  pFVar1 = (this->State).Ptr;
  if (pFVar1 != (FOutputDeviceRedirectorState *)0x0) {
    (*(code *)pFVar1[-1].UnbufferedOutputDevicesCanBeUsedOnPanicThread.AllocatorInstance.
              SecondaryData)
              (&pFVar1[-1].UnbufferedOutputDevicesCanBeUsedOnPanicThread.AllocatorInstance.
                SecondaryData);
  }
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5a50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FOutputDeviceStdOutput::_scalar_deleting_destructor_(FOutputDeviceStdOutput *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418c5a90

void * __thiscall
FSerializedUATProcess::_scalar_deleting_destructor_(FSerializedUATProcess *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LaunchFailedDelegate);
  FMonitoredProcess::~FMonitoredProcess((FMonitoredProcess *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// CheckMatrixInTileOffsetRange @ 1418ca280

TMatrix<double> * __cdecl
CheckMatrixInTileOffsetRange(TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  TMatrix<double> *pTVar7;
  uint uVar8;
  uint uVar9;
  
  dVar1 = param_1->M[3][0];
  uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_4130000000000000 <= (double)CONCAT44(uVar9,uVar8) &&
        (double)CONCAT44(uVar9,uVar8) != __real_4130000000000000) ||
      (dVar1 = param_1->M[3][1],
      uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_4130000000000000 <= (double)CONCAT44(uVar9,uVar8) &&
      (double)CONCAT44(uVar9,uVar8) != __real_4130000000000000)) ||
     (dVar1 = param_1->M[3][2],
     uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_4130000000000000 <= (double)CONCAT44(uVar9,uVar8) &&
     (double)CONCAT44(uVar9,uVar8) != __real_4130000000000000)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7153277781063761971>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\LargeWorldRenderPosition.cpp"
                       ,0x33,"false");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TMatrix<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  dVar1 = param_1->M[0][1];
  dVar3 = param_1->M[0][2];
  dVar4 = param_1->M[0][3];
  __return_storage_ptr__->M[0][0] = param_1->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = param_1->M[1][0];
  dVar5 = param_1->M[1][1];
  __return_storage_ptr__->M[0][2] = dVar3;
  __return_storage_ptr__->M[0][3] = dVar4;
  dVar3 = param_1->M[1][2];
  dVar4 = param_1->M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar5;
  dVar1 = param_1->M[2][0];
  dVar5 = param_1->M[2][1];
  __return_storage_ptr__->M[1][2] = dVar3;
  __return_storage_ptr__->M[1][3] = dVar4;
  dVar3 = param_1->M[2][2];
  dVar4 = param_1->M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar5;
  dVar1 = param_1->M[3][0];
  dVar5 = param_1->M[3][1];
  __return_storage_ptr__->M[2][2] = dVar3;
  __return_storage_ptr__->M[2][3] = dVar4;
  dVar3 = param_1->M[3][2];
  dVar4 = param_1->M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar5;
  __return_storage_ptr__->M[3][2] = dVar3;
  __return_storage_ptr__->M[3][3] = dVar4;
  return __return_storage_ptr__;
}

// ConsoleCommandLibrary_DumpLibrary @ 1418cf3c0

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

bool __cdecl
ConsoleCommandLibrary_DumpLibrary
          (UWorld *param_1,FExec *param_2,FString *param_3,FOutputDevice *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  ulong64 uVar6;
  undefined1 auStack_c8 [32];
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [32];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  local_a8.Base = local_88;
  local_a8.bIsDynamic = false;
  local_a8.bIsExternal = false;
  local_a8.End = (wchar_t *)local_48;
  iVar1 = (param_3->Data).ArrayNum;
  local_a8.CurPos = local_88;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar5 + -1 < iVar5) {
    iVar5 = iVar5 + -1;
  }
  iVar1 = 0;
  if (0 < iVar5) {
    iVar1 = iVar5;
  }
  uVar6 = (ulong64)iVar1;
  if (local_48 < local_88 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_a8,uVar6);
  }
  if (iVar1 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_a8.CurPos,pFVar2,uVar6 * 2);
    local_a8.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
  }
  if (local_a8.End < local_a8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_a8,1);
  }
  *local_a8.CurPos = L'\0';
  bVar3 = ConsoleCommandLibrary_DumpLibrary(param_1,param_2,local_a8.Base,param_4);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
  return bVar3;
}

// ConsoleCommandLibrary_DumpLibrary @ 1418cf4f0

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

bool __cdecl
ConsoleCommandLibrary_DumpLibrary
          (UWorld *param_1,FExec *param_2,wchar_t *param_3,FOutputDevice *param_4)

{
  code *pcVar1;
  byte bVar2;
  IConsoleManager *pIVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  size_t sVar11;
  void *pvVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  FOverride *pFVar15;
  uint *puVar16;
  ForAnyElementType FVar17;
  ulong64 uVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  FOutputDevice *pFVar25;
  uint uVar26;
  wchar_t *pwVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined1 auStackY_298 [32];
  FIdentityFunctor local_257 [7];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  FDelegateAllocation local_248;
  ForAnyElementType local_238;
  int local_230;
  int local_22c;
  uint local_228;
  int local_224;
  int local_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_218;
  undefined4 local_210;
  int iStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_1d0;
  FOutputDevice *local_1c8;
  undefined **local_1c0;
  undefined2 local_1b8;
  FIdentityFunctor *local_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  wchar_t *local_180;
  int iStack_178;
  undefined4 uStack_174;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  uint *local_e8;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  uint local_d4;
  undefined1 local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [32];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar23 = 0;
  iStack_178 = iVar23;
  local_1c8 = param_4;
  local_180 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar11 = wcslen(param_3);
    iStack_178 = (int)sVar11;
  }
  GConsoleCommandLibrary = (ConsoleCommandLibrary *)local_118;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_58;
  local_108._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (uint *)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = -1;
  local_d4 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_118._12_4_ = uStack_174;
  local_118._8_4_ = iStack_178;
  local_118._0_8_ = local_180;
  local_b8.CurPos = local_98;
  if (param_3 != (wchar_t *)0x0) {
    sVar11 = wcslen(param_3);
    iVar23 = (int)sVar11;
  }
  uVar18 = (ulong64)iVar23;
  pwVar21 = local_98;
  if (local_58 < local_98 + uVar18) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar18);
    pwVar21 = local_b8.CurPos;
  }
  if (iVar23 != 0) {
    pvVar12 = FGenericPlatformString::Memcpy(pwVar21,param_3,uVar18 * 2);
    pwVar21 = (wchar_t *)((longlong)pvVar12 + uVar18 * 2);
    local_b8.CurPos = pwVar21;
  }
  if (local_b8.End < pwVar21 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
    pwVar21 = local_b8.CurPos;
  }
  *pwVar21 = L'*';
  pwVar27 = local_b8.CurPos + 1;
  local_1c0 = &___7FOutputDeviceNull__6B_;
  local_1b8 = 0x100;
  pcVar1 = *(code **)((longlong)*param_2 + 8);
  pwVar21 = local_b8.CurPos + 2;
  local_b8.CurPos = pwVar27;
  if (local_b8.End < pwVar21) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  cVar5 = (*pcVar1)(param_2,param_1,local_b8.Base,&local_1c0);
  local_1c0 = &___7FOutputDevice__6B_;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  pIVar3 = IConsoleManager::Singleton;
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_248.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_248.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xd8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_158);
  local_140 = &local_248;
  puVar13 = UE::Core::Private::DelegateAllocate(0x20,&local_248);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar18;
    *puVar13 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibrary'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar13[3] = local_108;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  (*pcVar1)(pIVar3,&local_250);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_170);
  if ((local_248.DelegateSize != 0) &&
     (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_248.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_248,0,0,0x10);
    local_248.DelegateSize = 0;
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  if (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_248.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  local_1b0 = local_257;
  uVar30 = local_108._8_4_ - local_d4;
  local_228 = local_d4;
  local_224 = local_108._8_4_;
  if (0 < (int)uVar30) {
    if (local_d4 != 0) {
      local_1d0 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_108._0_8_;
      pTVar19 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_108._0_8_;
      iVar23 = local_108._8_4_;
      iVar24 = local_d8;
      if (local_d8 != -1) {
        do {
          iVar10 = *(int *)((longlong)pTVar19 + (longlong)iVar24 * 0x18 + 4);
          if (iVar24 < (int)uVar30) {
            bVar2 = (byte)iVar23 & 0x1f;
            uVar26 = 1 << bVar2 | 1U >> 0x20 - bVar2;
            iVar22 = iVar23;
            do {
              uVar26 = uVar26 >> 1 | (uint)((uVar26 & 1) != 0) << 0x1f;
              iVar23 = iVar22 + -1;
              if (((iVar23 < 0) || (local_e0 <= iVar23)) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar6)) {
                pcVar1 = (code *)swi(3);
                uVar7 = (*pcVar1)();
                return (bool)uVar7;
              }
              puVar16 = (uint *)(local_108 + 0x10);
              if (local_e8 != (uint *)0x0) {
                puVar16 = local_e8;
              }
              iVar8 = iVar23;
              if (iVar23 < 0) {
                iVar8 = iVar22 + 0x1e;
              }
              iVar22 = iVar23;
            } while ((puVar16[iVar8 >> 5] & uVar26) == 0);
            memmove(pTVar19 + iVar24,local_1d0 + iVar23,0x18);
            if (((iVar24 < 0) || (local_e0 <= iVar24)) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar1 = (code *)swi(3);
              uVar7 = (*pcVar1)();
              return (bool)uVar7;
            }
            puVar16 = (uint *)(local_108 + 0x10);
            if (local_e8 != (uint *)0x0) {
              puVar16 = local_e8;
            }
            iVar22 = iVar24;
            if (iVar24 < 0) {
              iVar22 = iVar24 + 0x1f;
            }
            puVar16[iVar22 >> 5] = puVar16[iVar22 >> 5] | 1 << ((byte)iVar24 & 0x1f);
            pTVar19 = local_1d0;
          }
          iVar24 = iVar10;
        } while (iVar10 != -1);
      }
      iVar23 = local_224;
      uVar26 = local_228;
      uVar9 = 0;
      if (local_224 <= (int)local_108._8_4_) {
        uVar9 = ~(local_228 | uVar30) >> 0x1f;
      }
      iVar24 = local_108._8_4_;
      if (uVar9 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        iVar24 = local_108._8_4_;
      }
      iVar10 = (iVar24 - uVar26) - uVar30;
      if (iVar10 != 0) {
        memmove((FScriptContainerElement *)(local_108._0_8_ + (longlong)(int)uVar30 * 0x18),
                (FScriptContainerElement *)(local_108._0_8_ + (longlong)(int)uVar30 * 0x18) +
                (longlong)(int)uVar26 * 0x18,(longlong)iVar10 * 0x18);
        iVar24 = local_108._8_4_;
      }
      local_108._8_4_ = iVar24 - uVar26;
      if ((((int)uVar26 < 0) || (local_e0 < iVar23)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3ee,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      if (iVar23 != local_e0) {
        puVar16 = (uint *)(local_108 + 0x10);
        if (local_e8 != (uint *)0x0) {
          puVar16 = local_e8;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  (puVar16,uVar30,puVar16,iVar23,(local_e0 - uVar26) - uVar30);
      }
      local_e0 = local_e0 - uVar26;
      uVar26 = local_e0 >> 0x1f & 0x1f;
      uVar30 = local_e0 + uVar26;
      iVar23 = (uVar30 & 0x1f) - uVar26;
      if (iVar23 != 0) {
        puVar16 = (uint *)(local_108 + 0x10);
        if (local_e8 != (uint *)0x0) {
          puVar16 = local_e8;
        }
        puVar16[(int)uVar30 >> 5] =
             puVar16[(int)uVar30 >> 5] & 0xffffffffU >> (0x20U - (char)iVar23 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10));
      local_d4 = 0;
      local_d8 = -1;
      if (local_108._12_4_ != local_108._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_108._8_4_,(ForAnyElementType *)local_108,local_108._8_4_,
                   (int *)(local_108 + 0xc));
      }
    }
    uVar4 = local_108._0_8_;
    iVar23 = local_108._8_4_ - local_d4;
    if ((iVar23 < 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar4,iVar23,local_257[0],
               (FElementCompareClass<TLess<FString>_> *)&local_1b0);
  }
  uVar30 = local_c0;
  uVar29 = (ulonglong)local_c0;
  if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
  }
  if (uVar30 == 0) goto LAB_1418cfc71;
  uVar26 = uVar30;
  if (uVar30 < 2) {
    if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
      uVar26 = 0;
      goto LAB_1418cfc0e;
    }
  }
  else {
LAB_1418cfc0e:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar26,4);
  }
  uVar28 = 0;
  if (0 < (int)uVar30) {
    do {
      FVar17.Data = (FScriptContainerElement *)local_d0;
      if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar17.Data = local_c8.Data;
      }
      uVar14 = (longlong)(int)uVar30 - 1U & uVar28;
      uVar28 = uVar28 + 1;
      *(undefined4 *)((longlong)FVar17.Data + uVar14 * 4) = 0xffffffff;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
LAB_1418cfc71:
  iVar24 = 0;
  uVar30 = 1;
  iVar23 = 0;
  if (local_c0 != 0) {
    uStack_21c = 1;
    local_220 = 0;
    pTStack_218 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
    iStack_20c = 0;
    iStack_208 = 0;
    if (local_e0 != 0) {
      puVar16 = (uint *)(local_108 + 0x10);
      if (local_e8 != (uint *)0x0) {
        puVar16 = local_e8;
      }
      uVar26 = *puVar16;
      while (uVar26 == 0) {
        iStack_208 = iStack_208 + 0x20;
        lVar20 = (longlong)local_220;
        local_220 = local_220 + 1;
        if ((int)(local_e0 + -1 + (local_e0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_220)
        goto LAB_1418cfd3a;
        uVar26 = (puVar16 + 1)[lVar20];
      }
      uStack_21c = -uVar26 & uVar26;
      uVar29 = (ulonglong)uStack_21c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iStack_20c = iStack_208 + -1 + (int)lVar20;
      if (local_e0 < iStack_20c) {
LAB_1418cfd3a:
        iStack_20c = local_e0;
      }
    }
    local_210 = 0xffffffff;
    local_200 = (longlong *)local_108;
    TStack_1f8._padding_._0_4_ = local_220;
    TStack_1f8._padding_._4_4_ = uStack_21c;
    TStack_1f8.UnvisitedBitMask = 0xffffffff;
    TStack_1f8.CurrentBitIndex = iStack_20c;
    TStack_1f8._28_4_ = uStack_204;
    TStack_1f8.BaseBitIndex = iStack_208;
    TStack_1f8.Array = pTStack_218;
    if (iStack_20c < local_e0) {
      do {
        iVar22 = TStack_1f8.CurrentBitIndex;
        puVar13 = (undefined8 *)(*local_200 + (longlong)TStack_1f8.CurrentBitIndex * 0x18);
        iVar10 = *(int *)(*local_200 + 8 + (longlong)TStack_1f8.CurrentBitIndex * 0x18);
        if (iVar10 == 0) {
          pwVar21 = L"";
          iVar10 = iVar23;
        }
        else {
          pwVar21 = (wchar_t *)*puVar13;
          iVar10 = iVar10 + -1;
        }
        uVar26 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar21);
        uVar26 = local_c0 - 1 & uVar26;
        *(uint *)((longlong)puVar13 + 0x14) = uVar26;
        FVar17.Data = (FScriptContainerElement *)local_d0;
        if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar17.Data = local_c8.Data;
        }
        uVar29 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar26;
        *(undefined4 *)(puVar13 + 2) = *(undefined4 *)((longlong)FVar17.Data + uVar29 * 4);
        *(int *)((longlong)FVar17.Data + uVar29 * 4) = iVar22;
        TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
      } while (TStack_1f8.CurrentBitIndex < (TStack_1f8.Array)->NumBits);
    }
  }
  TStack_1f8.BaseBitIndex = iVar23;
  TStack_1a0.CurrentBitIndex = iVar24;
  if (local_e0 != 0) {
    puVar16 = (uint *)(local_108 + 0x10);
    if (local_e8 != (uint *)0x0) {
      puVar16 = local_e8;
    }
    uVar26 = *puVar16;
    TStack_1f8.BaseBitIndex = iVar24;
    iVar23 = iVar24;
    while (uVar26 == 0) {
      lVar20 = (longlong)iVar23;
      TStack_1f8.BaseBitIndex = TStack_1f8.BaseBitIndex + 0x20;
      iVar23 = iVar23 + 1;
      TStack_1a0.CurrentBitIndex = local_e0;
      if ((int)(local_e0 + -1 + (local_e0 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_1418cfe7f;
      uVar26 = (puVar16 + 1)[lVar20];
    }
    uVar30 = -uVar26 & uVar26;
    uVar29 = (ulonglong)uVar30 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    TStack_1a0.CurrentBitIndex = (int)lVar20 + -1 + TStack_1f8.BaseBitIndex;
    if (local_e0 < TStack_1a0.CurrentBitIndex) {
      TStack_1a0.CurrentBitIndex = local_e0;
    }
  }
LAB_1418cfe7f:
  local_200 = (longlong *)local_108;
  TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
  TStack_1f8._padding_ = CONCAT44(uVar30,iVar23);
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  uVar30 = TStack_1f8.UnvisitedBitMask;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  TStack_1f8._28_4_ = local_11c;
  TStack_1a0._padding_ = TStack_1f8._padding_;
  TStack_1a0.BaseBitIndex = TStack_1f8.BaseBitIndex;
  TStack_1a0._28_4_ = local_11c;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  pFVar25 = local_1c8;
  local_1a8 = local_200;
  TStack_1a0.Array = TStack_1f8.Array;
  TStack_1f8.CurrentBitIndex = TStack_1a0.CurrentBitIndex;
  if (TStack_1a0.CurrentBitIndex < local_e0) {
    do {
      local_238.Data = (FScriptContainerElement *)0x0;
      local_230 = *(int *)(*local_1a8 + 8 + (longlong)TStack_1a0.CurrentBitIndex * 0x18);
      lVar20 = (longlong)local_230;
      pvVar12 = *(void **)(*local_1a8 + (longlong)TStack_1a0.CurrentBitIndex * 0x18);
      if (local_230 == 0) {
        local_22c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_230,0,&local_238,local_230,&local_22c);
        memcpy(local_238.Data,pvVar12,lVar20 * 2);
      }
      pFVar25 = local_1c8;
      FOutputDevice::LogfImpl(local_1c8,L"%s");
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data);
      }
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
      uVar30 = TStack_1f8.UnvisitedBitMask;
    } while (TStack_1a0.CurrentBitIndex < (TStack_1a0.Array)->NumBits);
  }
  TStack_1f8.UnvisitedBitMask = uVar30;
  pFVar15 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
  (**(code **)(pFVar25->_padding_ + 0x10))(pFVar25,L"",pFVar15->Verbosity,&pFVar15->Category);
  if (cVar5 != '\0') {
    pFVar15 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
    (**(code **)(pFVar25->_padding_ + 0x10))
              (pFVar25,
               L"ERROR: The function was supposed to only find matching commands but not have any side effect."
               ,pFVar15->Verbosity,&pFVar15->Category);
    pFVar15 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
    (**(code **)(pFVar25->_padding_ + 0x10))
              (pFVar25,
               L"However Exec() returned true which means we either executed a command or the command parsing returned true where it shouldn\'t."
               ,pFVar15->Verbosity,&pFVar15->Category);
  }
  GConsoleCommandLibrary = (ConsoleCommandLibrary *)0x0;
  local_c0 = 0;
  if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_c8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  return true;
}

// ConsoleCommandLibrary_DumpLibraryHTML @ 1418d0070

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

bool __cdecl ConsoleCommandLibrary_DumpLibraryHTML(UWorld *param_1,FExec *param_2,FString *param_3)

{
  wchar_t wVar1;
  code *pcVar2;
  byte bVar3;
  IConsoleManager *pIVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  size_t sVar14;
  IFileManager *pIVar15;
  FArchive *pFVar16;
  longlong *plVar17;
  FDateTime this;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  uint *puVar21;
  ForAnyElementType FVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  undefined1 auStackY_3b8 [32];
  FIdentityFunctor local_377 [7];
  FLazyPrintf local_370;
  FString local_358;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_348;
  FDelegateAllocation local_340;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  FString local_328;
  FString local_318;
  ForAnyElementType local_308;
  int local_300;
  int local_2fc;
  int local_2f8;
  FString local_2f0;
  int local_2e0;
  uint uStack_2dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2d8;
  undefined4 local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  undefined **local_2c0;
  undefined2 local_2b8;
  FString local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a0;
  int local_280;
  FIdentityFunctor *local_278;
  FString *local_270;
  FString local_268;
  FString local_258;
  FString local_248;
  longlong *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  longlong *local_1a8;
  longlong lStack_1a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_198;
  uint uStack_190;
  int iStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  undefined1 local_178 [16];
  undefined1 local_168 [32];
  uint *local_148;
  int local_140;
  undefined4 local_13c;
  int local_138;
  uint local_134;
  undefined1 local_130 [8];
  ForAnyElementType local_128;
  uint local_120;
  FScriptContainerElement local_118 [128];
  ForAnyElementType local_98;
  FScriptContainerElement *local_90;
  int local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  GConsoleCommandLibrary = (ConsoleCommandLibrary *)local_178;
  local_178._0_8_ = L"";
  local_178._8_4_ = 0;
  local_2c0 = &___7FOutputDeviceNull__6B_;
  local_168._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_168._8_8_ = 0;
  local_148 = (uint *)0x0;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = -1;
  local_134 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_2b8 = 0x100;
  local_270 = param_3;
  (**(code **)((longlong)*param_2 + 8))(param_2,param_1,L"*",&local_2c0);
  local_2c0 = &___7FOutputDevice__6B_;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  pIVar4 = IConsoleManager::Singleton;
  local_348.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_340.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_340.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xd8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_348,(FWriteAccessScope *)&local_1d0);
  local_1b8 = &local_340;
  puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_340);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`ConsoleCommandLibrary_DumpLibraryHTML'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = local_168;
  }
  if (local_1d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
  }
  (*pcVar2)(pIVar4,&local_348);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_348,(FWriteAccessScope *)&local_1e8);
  if ((local_340.DelegateSize != 0) &&
     (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_340.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_340,0,0,0x10);
    local_340.DelegateSize = 0;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_340.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_348.AccessDetector);
  uVar10 = local_134;
  local_278 = local_377;
  lVar32 = (longlong)(int)local_134;
  uVar31 = local_168._8_4_ - local_134;
  local_2f8 = local_168._8_4_;
  if (0 < (int)uVar31) {
    if (local_134 != 0) {
      local_330 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_168._0_8_;
      pTVar23 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_168._0_8_;
      iVar25 = local_168._8_4_;
      iVar26 = local_138;
      if (local_138 != -1) {
        do {
          iVar9 = *(int *)((longlong)pTVar23 + (longlong)iVar26 * 0x18 + 4);
          if (iVar26 < (int)uVar31) {
            bVar3 = (byte)iVar25 & 0x1f;
            uVar28 = 1 << bVar3 | 1U >> 0x20 - bVar3;
            iVar24 = iVar25;
            do {
              uVar28 = uVar28 >> 1 | (uint)((uVar28 & 1) != 0) << 0x1f;
              iVar25 = iVar24 + -1;
              if (((iVar25 < 0) || (local_140 <= iVar25)) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                uVar7 = (*pcVar2)();
                return (bool)uVar7;
              }
              puVar21 = (uint *)(local_168 + 0x10);
              if (local_148 != (uint *)0x0) {
                puVar21 = local_148;
              }
              iVar8 = iVar25;
              if (iVar25 < 0) {
                iVar8 = iVar24 + 0x1e;
              }
              iVar24 = iVar25;
            } while ((puVar21[iVar8 >> 5] & uVar28) == 0);
            memmove(pTVar23 + iVar26,local_330 + iVar25,0x18);
            if (((iVar26 < 0) || (local_140 <= iVar26)) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return (bool)uVar7;
            }
            puVar21 = (uint *)(local_168 + 0x10);
            if (local_148 != (uint *)0x0) {
              puVar21 = local_148;
            }
            iVar24 = iVar26;
            if (iVar26 < 0) {
              iVar24 = iVar26 + 0x1f;
            }
            puVar21[iVar24 >> 5] = puVar21[iVar24 >> 5] | 1 << ((byte)iVar26 & 0x1f);
            pTVar23 = local_330;
          }
          iVar26 = iVar9;
        } while (iVar9 != -1);
      }
      iVar25 = local_2f8;
      uVar28 = 0;
      if (local_2f8 <= (int)local_168._8_4_) {
        uVar28 = ~(uVar31 | uVar10) >> 0x1f;
      }
      iVar26 = local_168._8_4_;
      if (uVar28 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar26 = local_168._8_4_;
      }
      iVar9 = (iVar26 - uVar31) - uVar10;
      if (iVar9 != 0) {
        memmove((FScriptContainerElement *)(local_168._0_8_ + (longlong)(int)uVar31 * 0x18),
                (FScriptContainerElement *)(local_168._0_8_ + (longlong)(int)uVar31 * 0x18) +
                lVar32 * 0x18,(longlong)iVar9 * 0x18);
        iVar26 = local_168._8_4_;
      }
      local_168._8_4_ = iVar26 - uVar10;
      if ((((int)uVar10 < 0) || (local_140 < iVar25)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3ee,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      if (iVar25 != local_140) {
        puVar21 = (uint *)(local_168 + 0x10);
        if (local_148 != (uint *)0x0) {
          puVar21 = local_148;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  (puVar21,uVar31,puVar21,iVar25,(local_140 - uVar31) - uVar10);
      }
      local_140 = local_140 - uVar10;
      uVar31 = local_140 >> 0x1f & 0x1f;
      uVar10 = local_140 + uVar31;
      iVar25 = (uVar10 & 0x1f) - uVar31;
      if (iVar25 != 0) {
        puVar21 = (uint *)(local_168 + 0x10);
        if (local_148 != (uint *)0x0) {
          puVar21 = local_148;
        }
        puVar21[(int)uVar10 >> 5] =
             puVar21[(int)uVar10 >> 5] & 0xffffffffU >> (0x20U - (char)iVar25 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10));
      local_134 = 0;
      local_138 = -1;
      if (local_168._12_4_ != local_168._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_168._8_4_,(ForAnyElementType *)local_168,local_168._8_4_,
                   (int *)(local_168 + 0xc));
      }
    }
    uVar5 = local_168._0_8_;
    iVar25 = local_168._8_4_ - local_134;
    if ((iVar25 < 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar5,iVar25,local_377[0],
               (FElementCompareClass<TLess<FString>_> *)&local_278);
  }
  uVar10 = local_120;
  uVar30 = (ulonglong)local_120;
  if ((ForElementType<FSetElementId>)local_128.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,0,4);
  }
  if (uVar10 != 0) {
    uVar31 = uVar10;
    if (uVar10 < 2) {
      if ((ForElementType<FSetElementId>)local_128.Data != (ForElementType<FSetElementId>)0x0) {
        uVar31 = 0;
        goto LAB_1418d0674;
      }
    }
    else {
LAB_1418d0674:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,uVar31,4);
    }
    uVar29 = 0;
    if (0 < (int)uVar10) {
      do {
        FVar22.Data = (FScriptContainerElement *)local_130;
        if ((ForElementType<FSetElementId>)local_128.Data != (ForElementType<FSetElementId>)0x0) {
          FVar22.Data = local_128.Data;
        }
        uVar13 = (longlong)(int)uVar10 - 1U & uVar29;
        uVar29 = uVar29 + 1;
        *(undefined4 *)((longlong)FVar22.Data + uVar13 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  iVar26 = 0;
  iVar25 = 0;
  if (local_120 != 0) {
    pTStack_2d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
    local_2e0 = 0;
    uStack_2dc = 1;
    iStack_2cc = 0;
    iStack_2c8 = 0;
    if (local_140 != 0) {
      puVar21 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar21 = local_148;
      }
      uVar10 = *puVar21;
      iStack_2c8 = iVar26;
      local_2e0 = iVar26;
      while (uVar10 == 0) {
        iStack_2c8 = iStack_2c8 + 0x20;
        lVar32 = (longlong)local_2e0;
        local_2e0 = local_2e0 + 1;
        if ((int)(local_140 + -1 + (local_140 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2e0)
        goto LAB_1418d078b;
        uVar10 = (puVar21 + 1)[lVar32];
      }
      uStack_2dc = -uVar10 & uVar10;
      uVar30 = (ulonglong)uStack_2dc * 2 + 1;
      lVar32 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      local_280 = (int)lVar32;
      iStack_2cc = local_280 + -1 + iStack_2c8;
      if (local_140 < iStack_2cc) {
LAB_1418d078b:
        iStack_2cc = local_140;
      }
    }
    local_2d0 = 0xffffffff;
    local_238 = (longlong *)local_168;
    local_230._padding_ = CONCAT44(uStack_2dc,local_2e0);
    local_230.CurrentBitIndex = iStack_2cc;
    local_230.UnvisitedBitMask = 0xffffffff;
    local_230._28_4_ = uStack_2c4;
    local_230.BaseBitIndex = iStack_2c8;
    local_230.Array = pTStack_2d8;
    iVar9 = iStack_2cc;
    if (iStack_2cc < local_140) {
      do {
        puVar11 = (undefined8 *)(*local_238 + (longlong)iVar9 * 0x18);
        iVar24 = *(int *)(*local_238 + 8 + (longlong)iVar9 * 0x18);
        if (iVar24 == 0) {
          pwVar20 = L"";
          iVar24 = iVar25;
        }
        else {
          pwVar20 = (wchar_t *)*puVar11;
          iVar24 = iVar24 + -1;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar24,pwVar20);
        uVar10 = local_120 - 1 & uVar10;
        *(uint *)((longlong)puVar11 + 0x14) = uVar10;
        FVar22.Data = (FScriptContainerElement *)local_130;
        if ((ForElementType<FSetElementId>)local_128.Data != (ForElementType<FSetElementId>)0x0) {
          FVar22.Data = local_128.Data;
        }
        uVar30 = (longlong)(int)local_120 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar11 + 2) = *(undefined4 *)((longlong)FVar22.Data + uVar30 * 4);
        *(int *)((longlong)FVar22.Data + uVar30 * 4) = iVar9;
        local_230.UnvisitedBitMask = local_230.UnvisitedBitMask & ~local_230._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
        iVar9 = local_230.CurrentBitIndex;
      } while (local_230.CurrentBitIndex < (local_230.Array)->NumBits);
    }
  }
  local_78.DataPtr = FWindowsPlatformProcess::BaseDir();
  if (local_78.DataPtr != (wchar_t *)0x0) {
    sVar14 = wcslen(local_78.DataPtr);
    iVar25 = (int)sVar14;
  }
  local_68 = L"../../Documentation/Extras";
  local_60 = 0x1a;
  local_58 = L"ConsoleHelpTemplate.html";
  local_50 = 0x18;
  local_78.Size = iVar25;
  FPaths::CombineInternal(&local_2b0,&local_78,3);
  local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_2b0.Data.ArrayNum != 0) {
    FVar22.Data = local_2b0.Data.AllocatorInstance.Data;
  }
  bVar6 = false;
  local_318.Data.ArrayNum = 0;
  local_318.Data.ArrayMax = 0;
  pIVar15 = IFileManager::Get();
  pFVar16 = (FArchive *)(**(code **)((longlong)*pIVar15 + 0x18))(pIVar15,FVar22.Data,0);
  if (pFVar16 != (FArchive *)0x0) {
    bVar6 = FFileHelper::LoadFileToString(&local_318,pFVar16,ErrorMissingHash|EnableVerify);
    (*(code *)**(undefined8 **)pFVar16)(pFVar16,1);
  }
  FVar22.Data = local_318.Data.AllocatorInstance.Data;
  iVar25 = local_318.Data.ArrayNum;
  local_330 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)
              local_318.Data.AllocatorInstance.Data;
  local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.Data.ArrayNum = 0;
  local_318.Data.ArrayMax = 0;
  if (bVar6 != false) {
    pIVar15 = IFileManager::Get();
    if ((local_270->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(local_270->Data).AllocatorInstance.Data;
    }
    plVar17 = (longlong *)(**(code **)((longlong)*pIVar15 + 0x28))(pIVar15,pwVar20,0);
    if (plVar17 != (longlong *)0x0) {
      local_370.CurrentState.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_370.CurrentState.Data.ArrayNum = 0;
      local_370.CurrentState.Data.ArrayMax = 0;
      local_370.CurrentInputPos = L"";
      if (iVar25 != 0) {
        local_370.CurrentInputPos = (wchar_t *)FVar22.Data;
      }
      FString::Empty(&local_370.CurrentState,0xc800);
      bVar6 = FLazyPrintf::ProcessUntilPercentS(&local_370);
      if (bVar6) {
        FString::AppendChars(&local_370.CurrentState,L"UE5 Console Variables and Commands",0x22);
      }
      else {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LazyPrintf.h"
                           ,0x2a,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      bVar6 = FLazyPrintf::ProcessUntilPercentS(&local_370);
      if (bVar6) {
        FString::AppendChars
                  (&local_370.CurrentState,L"Unreal Engine 5 Console Variables and Commands",0x2e);
      }
      else {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LazyPrintf.h"
                           ,0x2a,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      bVar6 = FLazyPrintf::ProcessUntilPercentS(&local_370);
      if (bVar6) {
        FString::AppendChars
                  (&local_370.CurrentState,L"Unreal Engine 5 console command \'Help\'",0x26);
      }
      else {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LazyPrintf.h"
                           ,0x2a,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      bVar6 = FLazyPrintf::ProcessUntilPercentS(&local_370);
      if (bVar6) {
        FString::AppendChars(&local_370.CurrentState,L"0.95",4);
      }
      else {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LazyPrintf.h"
                           ,0x2a,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      this = FDateTime::Now();
      FDateTime::ToString((FDateTime *)this.Ticks,&local_268,L"%Y.%m.%d-%H.%M.%S");
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_268.Data.ArrayNum != 0) {
        FVar27.Data = local_268.Data.AllocatorInstance.Data;
      }
      pFVar18 = (FScriptContainerElement *)wcsstr(local_370.CurrentInputPos,L"%s");
      if (pFVar18 == (FScriptContainerElement *)0x0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LazyPrintf.h"
                           ,0x2a,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      else {
        while (local_370.CurrentInputPos < pFVar18) {
          wVar1 = *local_370.CurrentInputPos;
          local_370.CurrentInputPos = (wchar_t *)((longlong)local_370.CurrentInputPos + 2);
          FString::AppendChar(&local_370.CurrentState,wVar1);
        }
        local_370.CurrentInputPos = (wchar_t *)((longlong)local_370.CurrentInputPos + 4);
        sVar14 = wcslen((wchar_t *)FVar27.Data);
        FString::AppendChars(&local_370.CurrentState,(wchar_t *)FVar27.Data,(int)sVar14);
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      local_2a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
      local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f0.Data.ArrayNum = 0;
      local_2f0.Data.ArrayMax = 0;
      local_2a0._padding_._0_4_ = 0;
      local_2a0._padding_._4_4_ = 1;
      local_2a0.UnvisitedBitMask = 0xffffffff;
      local_2a0.CurrentBitIndex = 0;
      local_2a0.BaseBitIndex = 0;
      if (local_140 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a0);
      }
      local_210 = (longlong *)local_168;
      TStack_208._padding_ = CONCAT44(local_2a0._padding_._4_4_,(undefined4)local_2a0._padding_);
      pTStack_198 = local_2a0.Array;
      uStack_190 = local_2a0.UnvisitedBitMask;
      iStack_18c = local_2a0.CurrentBitIndex;
      iStack_188 = local_2a0.BaseBitIndex;
      uStack_184 = local_2a0._28_4_;
      TStack_208.CurrentBitIndex = local_2a0.CurrentBitIndex;
      TStack_208.UnvisitedBitMask = local_2a0.UnvisitedBitMask;
      TStack_208.Array = local_2a0.Array;
      TStack_208.BaseBitIndex = local_2a0.BaseBitIndex;
      TStack_208._28_4_ = local_2a0._28_4_;
      iVar25 = local_2a0.CurrentBitIndex;
      local_1a8 = local_210;
      lStack_1a0 = TStack_208._padding_;
      if (local_2a0.CurrentBitIndex < (local_2a0.Array)->NumBits) {
        do {
          puVar11 = (undefined8 *)(*local_210 + (longlong)iVar25 * 0x18);
          if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
              (IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("Singleton != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x4fb,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          if (*(int *)(puVar11 + 1) == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = (wchar_t *)*puVar11;
          }
          plVar19 = (longlong *)
                    (**(code **)((longlong)*IConsoleManager::Singleton + 200))
                              (IConsoleManager::Singleton,pwVar20,1);
          if (plVar19 == (longlong *)0x0) {
            FString::PrintfImpl(&local_248,
                                L"{name: \"%s\", help:\"Sorry: Exec commands have no help\", type:\"Exec\"},\r\n"
                               );
            iVar25 = local_248.Data.ArrayNum + -1;
            if (local_248.Data.ArrayNum == 0) {
              iVar25 = iVar26;
            }
            FString::AppendChars(&local_2f0,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar25)
            ;
            FVar22.Data = local_248.Data.AllocatorInstance.Data;
          }
          else {
            pwVar20 = (wchar_t *)(**(code **)(*plVar19 + 8))(plVar19);
            FString::FString(&local_328,pwVar20);
            FVar22.Data = local_328.Data.AllocatorInstance.Data;
            lVar32 = (longlong)local_328.Data.ArrayNum;
            local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_358.Data.ArrayNum = local_328.Data.ArrayNum;
            if (local_328.Data.ArrayNum == 0) {
              local_358.Data.ArrayNum = 0;
              local_358.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)&local_358,
                         local_328.Data.ArrayNum,&local_358.Data.ArrayMax);
              memcpy(local_358.Data.AllocatorInstance.Data,FVar22.Data,lVar32 * 2);
            }
            FString::ReplaceCharWithEscapedCharInline
                      (&local_358,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
            if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_328.Data.AllocatorInstance.Data);
            }
            local_328.Data.AllocatorInstance.Data = local_358.Data.AllocatorInstance.Data;
            local_328.Data.ArrayNum = local_358.Data.ArrayNum;
            local_328.Data.ArrayMax = local_358.Data.ArrayMax;
            local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_358.Data.ArrayNum = 0;
            local_358.Data.ArrayMax = 0;
            lVar32 = (**(code **)(*plVar19 + 0x38))(plVar19);
            if (lVar32 == 0) {
              (**(code **)(*plVar19 + 0x80))(plVar19);
            }
            FString::PrintfImpl(&local_258,L"{name: \"%s\", help:\"%s\", type:\"%s\"},\r\n");
            iVar25 = local_258.Data.ArrayNum + -1;
            if (local_258.Data.ArrayNum == 0) {
              iVar25 = iVar26;
            }
            FString::AppendChars(&local_2f0,(wchar_t *)local_258.Data.AllocatorInstance.Data,iVar25)
            ;
            FVar22.Data = local_328.Data.AllocatorInstance.Data;
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
              FVar22.Data = local_328.Data.AllocatorInstance.Data;
            }
          }
          if (FVar22.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar22.Data);
          }
          TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
          FVar22.Data = (FScriptContainerElement *)local_330;
          iVar25 = TStack_208.CurrentBitIndex;
        } while (TStack_208.CurrentBitIndex < (TStack_208.Array)->NumBits);
      }
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_2f0.Data.ArrayNum != 0) {
        FVar27.Data = local_2f0.Data.AllocatorInstance.Data;
      }
      pFVar18 = (FScriptContainerElement *)wcsstr(local_370.CurrentInputPos,L"%s");
      if (pFVar18 == (FScriptContainerElement *)0x0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LazyPrintf.h"
                           ,0x2a,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      else {
        while (local_370.CurrentInputPos < pFVar18) {
          wVar1 = *local_370.CurrentInputPos;
          local_370.CurrentInputPos = (wchar_t *)((longlong)local_370.CurrentInputPos + 2);
          FString::AppendChar(&local_370.CurrentState,wVar1);
        }
        local_370.CurrentInputPos = (wchar_t *)((longlong)local_370.CurrentInputPos + 4);
        sVar14 = wcslen((wchar_t *)FVar27.Data);
        FString::AppendChars(&local_370.CurrentState,(wchar_t *)FVar27.Data,(int)sVar14);
      }
      pFVar18 = (FScriptContainerElement *)wcsstr(local_370.CurrentInputPos,L"%s");
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        while (local_370.CurrentInputPos < pFVar18) {
          wVar1 = *local_370.CurrentInputPos;
          local_370.CurrentInputPos = (wchar_t *)((longlong)local_370.CurrentInputPos + 2);
          FString::AppendChar(&local_370.CurrentState,wVar1);
        }
        local_370.CurrentInputPos = (wchar_t *)((longlong)local_370.CurrentInputPos + 4);
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("!ProcessUntilPercentS()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LazyPrintf.h"
                           ,0x18,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      sVar14 = wcslen(local_370.CurrentInputPos);
      FString::AppendChars(&local_370.CurrentState,local_370.CurrentInputPos,(int)sVar14);
      FVar27.Data = local_370.CurrentState.Data.AllocatorInstance.Data;
      lVar32 = (longlong)local_370.CurrentState.Data.ArrayNum;
      local_308.Data = (FScriptContainerElement *)0x0;
      local_300 = local_370.CurrentState.Data.ArrayNum;
      if (local_370.CurrentState.Data.ArrayNum == 0) {
        local_2fc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_370.CurrentState.Data.ArrayNum,0,&local_308,
                   local_370.CurrentState.Data.ArrayNum,&local_2fc);
        memcpy(local_308.Data,FVar27.Data,lVar32 * 2);
      }
      local_98.Data = (FScriptContainerElement *)0x0;
      if (local_300 == 0) {
        pwVar20 = L"";
LAB_1418d104c:
        sVar14 = wcslen(pwVar20);
        local_88 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar20,(int)sVar14);
        uVar10 = local_88 + 1;
        uVar31 = uVar10;
        if (uVar10 < 0x81) {
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            uVar31 = 0;
            goto LAB_1418d1089;
          }
        }
        else {
LAB_1418d1089:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar31,1)
          ;
        }
        local_90 = local_118;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          local_90 = local_98.Data;
        }
        UE::Core::Private::Convert((uchar *)local_90,uVar10,pwVar20,(int)sVar14 + 1);
      }
      else {
        pwVar20 = (wchar_t *)local_308.Data;
        if (local_308.Data != (FScriptContainerElement *)0x0) goto LAB_1418d104c;
        local_90 = (FScriptContainerElement *)0x0;
        local_88 = 0;
      }
      if (local_308.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data);
      }
      (**(code **)(*plVar17 + 0x188))(plVar17,local_90,(longlong)local_88);
      (**(code **)*plVar17)(plVar17,1);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
      if (local_370.CurrentState.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.CurrentState.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
      goto LAB_1418d1133;
    }
  }
  bVar6 = false;
LAB_1418d1133:
  if (FVar22.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar22.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  GConsoleCommandLibrary = (ConsoleCommandLibrary *)0x0;
  local_120 = 0;
  if ((ForElementType<FSetElementId>)local_128.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_128.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  return bVar6;
}

// ConsumeDigitsGreedy @ 1418d12e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001418d13c3) */
/* WARNING: Removing unreachable block (ram,0x0001418d13e8) */

TOptional<FExpressionError> * __cdecl
Tests::ConsumeDigitsGreedy
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined ***pppuVar3;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  TStringToken<wchar_t> local_90;
  undefined1 local_78;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if ((pwVar1 <= local_a8) && (pwVar2 = (param_1->Stream).End, local_a8 <= pwVar2 + -1)) {
    local_90._16_8_ = (longlong)local_a8 - (longlong)pwVar1 >> 1;
    local_98 = 0;
    uStack_94 = (undefined4)local_90._16_8_;
    pwStack_a0 = local_a8;
    if (local_a8 != pwVar2) {
      do {
        if (((ushort)*pwStack_a0 < 0x30) || (0x39 < (ushort)*pwStack_a0)) break;
        pwStack_a0 = pwStack_a0 + 1;
      } while (pwStack_a0 != pwVar2);
      if (pwStack_a0 != local_a8) {
        local_90._16_8_ = local_90._16_8_ << 0x20;
        local_78 = 1;
        local_68 = (undefined1  [16])
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FDigitsTokenTag>::GetTypeId(void)'
                   ::__l2::Global;
        local_58[0] = &___7__FInlineDataStorage_UFDigitsTokenTag_Tests___Impl__6B_;
        local_90.TokenStart = local_a8;
        local_90.TokenEnd = pwStack_a0;
        TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_90,(FExpressionNode *)local_68);
        pppuVar3 = local_58;
        if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
            local_68._0_4_ == 0) {
          pppuVar3 = (undefined ***)0x0;
        }
        if (pppuVar3 != (undefined ***)0x0) {
          (*(code *)**pppuVar3)(pppuVar3,0);
        }
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeLowerAlphaGreedy @ 1418d1460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001418d1543) */
/* WARNING: Removing unreachable block (ram,0x0001418d1568) */

TOptional<FExpressionError> * __cdecl
Tests::ConsumeLowerAlphaGreedy
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined ***pppuVar3;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  TStringToken<wchar_t> local_90;
  undefined1 local_78;
  undefined1 local_68 [16];
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = (param_1->Stream).ReadPos;
  pwVar1 = (param_1->Stream).Start;
  if ((pwVar1 <= local_a8) && (pwVar2 = (param_1->Stream).End, local_a8 <= pwVar2 + -1)) {
    local_90._16_8_ = (longlong)local_a8 - (longlong)pwVar1 >> 1;
    local_98 = 0;
    uStack_94 = (undefined4)local_90._16_8_;
    pwStack_a0 = local_a8;
    if (local_a8 != pwVar2) {
      do {
        if (((ushort)*pwStack_a0 < 0x61) || (0x7a < (ushort)*pwStack_a0)) break;
        pwStack_a0 = pwStack_a0 + 1;
      } while (pwStack_a0 != pwVar2);
      if (pwStack_a0 != local_a8) {
        local_90._16_8_ = local_90._16_8_ << 0x20;
        local_78 = 1;
        local_68 = (undefined1  [16])
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FLowerAlphaTokenTag>::GetTypeId(void)'
                   ::__l2::Global;
        local_58[0] = &___7__FInlineDataStorage_UFLowerAlphaTokenTag_Tests___Impl__6B_;
        local_90.TokenStart = local_a8;
        local_90.TokenEnd = pwStack_a0;
        TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_90,(FExpressionNode *)local_68);
        pppuVar3 = local_58;
        if (((local_68._12_4_ == 0 && local_68._8_4_ == 0) && local_68._4_4_ == 0) &&
            local_68._0_4_ == 0) {
          pppuVar3 = (undefined ***)0x0;
        }
        if (pppuVar3 != (undefined ***)0x0) {
          (*(code *)**pppuVar3)(pppuVar3,0);
        }
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// DDPIIniRedirect @ 1418d4990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl DDPIIniRedirect(FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FConfigSection *pFVar6;
  wchar_t *pwVar7;
  FConfigSection *this;
  wchar_t *pwVar8;
  undefined1 auStack_178 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_148;
  FString local_138;
  FString local_128;
  FConfigFile local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  FString::ParseIntoArray(param_1,&local_148,L":",true);
  if (local_148.ArrayNum == 5) {
    FConfigFile::FConfigFile(&local_118);
    if (local_148.ArrayNum < 3) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(local_148.AllocatorInstance.Data + 0x28) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(local_148.AllocatorInstance.Data + 0x20);
    }
    if ((local_148.ArrayNum < 2) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)(local_148.AllocatorInstance.Data + 0x18) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)(local_148.AllocatorInstance.Data + 0x10);
    }
    FConfigCacheIni::LoadLocalIniFile(&local_118,pwVar7,true,pwVar8,false);
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    if (local_148.ArrayNum < 5) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(local_148.AllocatorInstance.Data + 0x48) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(local_148.AllocatorInstance.Data + 0x40);
    }
    if ((local_148.ArrayNum < 4) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)(local_148.AllocatorInstance.Data + 0x38) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)(local_148.AllocatorInstance.Data + 0x30);
    }
    FString::FString(&local_128,pwVar7);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar5 = local_128.Data.ArrayNum + -1;
    FVar2.Data = local_128.Data.AllocatorInstance.Data;
    if (local_128.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)&local_118,uVar4,&local_128);
    pFVar6 = (FConfigSection *)0x0;
    if (iVar5 != -1) {
      pFVar6 = (FConfigSection *)((longlong)iVar5 * 0x110 + local_118._padding_);
    }
    this = (FConfigSection *)&pFVar6->_padding_;
    if (pFVar6 == (FConfigSection *)0x0) {
      this = (FConfigSection *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (this != (FConfigSection *)0x0) {
      FConfigSection::GetString(this,pwVar8,&local_138);
    }
    iVar5 = local_138.Data.ArrayNum + -1;
    if (local_138.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    FString::AssignRange(param_1,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar5);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    FConfigFile::~FConfigFile(&local_118);
  }
  else {
    FString::operator=(param_1,L"");
  }
  DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return;
}

// DDPITryRedirect @ 1418d4ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
DDPITryRedirect(FString *__return_storage_ptr__,FConfigFile *param_1,wchar_t *param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_1f8 [32];
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  wchar_t local_178 [128];
  void *local_78;
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  iVar5 = GCommandLinePrefix.Data.ArrayNum + -1;
  if (GCommandLinePrefix.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    FString::ConcatFC(&local_188,&GCommandLinePrefix,param_2);
    FString::ConcatFC(&local_1a8,&local_188,L"=");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar6.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Value(pwVar3,(wchar_t *)FVar6.Data,&local_1b8,true,(wchar_t **)0x0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    FVar6.Data = local_1b8.Data.AllocatorInstance.Data;
    if (bVar2) {
      iVar5 = local_1b8.Data.ArrayNum;
      if (3 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar6.Data;
      (__return_storage_ptr__->Data).ArrayNum = iVar5;
      (__return_storage_ptr__->Data).ArrayMax = local_1b8.Data.ArrayMax;
      return __return_storage_ptr__;
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  bVar2 = FConfigFile::GetString(param_1,L"DataDrivenPlatformInfo",param_2,&local_1c8);
  if (!bVar2) {
    local_78 = (void *)0x0;
    local_70 = local_178;
    local_68 = 7;
    pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(local_178,8,"Windows",8);
    if ((pwVar3 == (wchar_t *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    FString::PrintfImpl(&local_198,L"%s:%s");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar6.Data = local_198.Data.AllocatorInstance.Data;
    }
    bVar2 = FConfigFile::GetString
                      (param_1,L"DataDrivenPlatformInfo",(wchar_t *)FVar6.Data,&local_1c8);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (!bVar2) goto LAB_1418d4f7c;
  }
  bVar2 = FString::StartsWith(&local_1c8,L"ini:",4,IgnoreCase);
  if ((bVar2) || (bVar2 = FString::StartsWith(&local_1c8,L"!ini:",5,IgnoreCase), bVar2)) {
    if (param_3 != (bool *)0x0) {
      iVar5 = local_1c8.Data.ArrayNum + -1;
      if (local_1c8.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      if ((iVar5 < 1) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      *param_3 = *(short *)local_1c8.Data.AllocatorInstance.Data == 0x21;
    }
    DDPIIniRedirect(&local_1c8);
  }
LAB_1418d4f7c:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_1c8.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_1c8.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetDataDrivenIniFilenames @ 1418de190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPathConversion": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl GetDataDrivenIniFilenames(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  IFileManager *pIVar7;
  FString *pFVar8;
  ulonglong uVar9;
  FString *pFVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FString *pFVar17;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  undefined1 local_197 [7];
  FString local_190;
  FString *local_180;
  undefined8 local_178;
  FString *local_170;
  ulonglong local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TStringView<wchar_t> local_110;
  wchar_t *local_100;
  undefined4 local_f8;
  TStringView<wchar_t> local_f0;
  wchar_t *local_e0;
  undefined4 local_d8;
  TStringView<wchar_t> local_d0;
  wchar_t *local_c0;
  undefined4 local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  TStringView<wchar_t> local_60;
  wchar_t *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`GetDataDrivenIniFilenames'::__l2::
           _dynamic_atexit_destructor_for__DataDrivenIniFilenames__);
    _Init_thread_footer(&_TSS0);
  }
  if (bHasSearchedForFiles == false) {
    bHasSearchedForFiles = true;
    pIVar7 = IFileManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x88);
    pFVar8 = FPaths::EngineConfigDir(&local_b0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    (*pcVar3)(pIVar7,&DataDrivenIniFilenames,pwVar13,L"DataDrivenPlatformInfo.ini");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    local_170 = (FString *)0x0;
    local_168 = 0;
    pIVar7 = IFileManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x80);
    pFVar8 = FPaths::EngineDir(&local_a0);
    local_48 = 9;
    local_38 = 1;
    local_60.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    local_50 = L"Platforms";
    local_40 = L"*";
    local_60.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_60.Size = 0;
    }
    FPaths::CombineInternal(&local_150,&local_60,3);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar12.Data = local_150.Data.AllocatorInstance.Data;
    }
    (*pcVar3)(pIVar7,&local_170,FVar12.Data,0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    iVar1 = (int)local_168;
    uVar9 = (ulonglong)(int)local_168;
    pFVar17 = local_170 + uVar9;
    pFVar8 = local_170;
    while( true ) {
      if ((int)uVar9 != iVar1) {
        local_198 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_198);
      }
      if (pFVar8 == pFVar17) break;
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar10 = FPaths::EngineDir(&local_90);
      FPaths::ConvertPath(&local_140,pFVar10,Engine_PlatformExtension,pwVar13,(wchar_t *)0x0);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      local_110.DataPtr = (wchar_t *)local_140.Data.AllocatorInstance.Data;
      local_100 = L"Config/DataDrivenPlatformInfo.ini";
      local_f8 = 0x21;
      local_110.Size = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        local_110.Size = 0;
      }
      FPaths::CombineInternal(&local_160,&local_110,2);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      pIVar7 = IFileManager::Get();
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_160.Data.ArrayNum != 0) {
        FVar12.Data = local_160.Data.AllocatorInstance.Data;
      }
      cVar4 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,FVar12.Data);
      if (cVar4 != '\0') {
        if (((DataDrivenIniFilenames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_160
             ) && ((FScriptContainerElement *)&local_160 <
                   DataDrivenIniFilenames.AllocatorInstance.Data +
                   (longlong)DataDrivenIniFilenames.ArrayMax * 0x10)) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (DataDrivenIniFilenames.ArrayNum == DataDrivenIniFilenames.ArrayMax) {
          DataDrivenIniFilenames.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&DataDrivenIniFilenames.AllocatorInstance,
                          &DataDrivenIniFilenames.ArrayMax);
        }
        iVar6 = local_160.Data.ArrayNum;
        FVar12.Data = local_160.Data.AllocatorInstance.Data;
        lVar14 = (longlong)DataDrivenIniFilenames.ArrayNum;
        DataDrivenIniFilenames.ArrayNum = DataDrivenIniFilenames.ArrayNum + 1;
        pFVar15 = DataDrivenIniFilenames.AllocatorInstance.Data + lVar14 * 0x10;
        *(undefined8 *)pFVar15 = 0;
        *(int *)(pFVar15 + 8) = local_160.Data.ArrayNum;
        if (local_160.Data.ArrayNum == 0) {
          *(int *)(pFVar15 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_160.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                     local_160.Data.ArrayNum,(int *)(pFVar15 + 0xc));
          memcpy(*(void **)pFVar15,FVar12.Data,(longlong)iVar6 * 2);
        }
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      uVar9 = local_168 & 0xffffffff;
      pFVar8 = pFVar8 + 1;
    }
    local_180 = (FString *)0x0;
    local_178 = 0;
    pIVar7 = IFileManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x80);
    pFVar8 = FPaths::ProjectConfigDir(&local_80);
    local_d8 = 1;
    local_f0.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    local_e0 = L"*";
    local_f0.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_f0.Size = 0;
    }
    FPaths::CombineInternal(&local_130,&local_f0,2);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_130.Data.ArrayNum != 0) {
      FVar12.Data = local_130.Data.AllocatorInstance.Data;
    }
    (*pcVar3)(pIVar7,&local_180,FVar12.Data,0);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    iVar1 = (int)local_178;
    pFVar17 = local_180 + (int)local_178;
    pFVar8 = local_180;
    while( true ) {
      if ((int)local_178 != iVar1) {
        local_197[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_197);
      }
      if (pFVar8 == pFVar17) break;
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar10 = FPaths::ProjectDir(&local_70);
      FPaths::ConvertPath(&local_120,pFVar10,Project_First,pwVar13,(wchar_t *)0x0);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      local_d0.DataPtr = (wchar_t *)local_120.Data.AllocatorInstance.Data;
      local_b8 = 0x21;
      local_d0.Size = local_120.Data.ArrayNum + -1;
      if (local_120.Data.ArrayNum == 0) {
        local_d0.Size = 0;
      }
      local_c0 = L"Config/DataDrivenPlatformInfo.ini";
      FPaths::CombineInternal(&local_190,&local_d0,2);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      pIVar7 = IFileManager::Get();
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_190.Data.ArrayNum != 0) {
        FVar12.Data = local_190.Data.AllocatorInstance.Data;
      }
      cVar4 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,FVar12.Data);
      FVar12 = DataDrivenIniFilenames.AllocatorInstance;
      if (cVar4 != '\0') {
        pFVar15 = DataDrivenIniFilenames.AllocatorInstance.Data +
                  (longlong)DataDrivenIniFilenames.ArrayNum * 0x10;
        iVar6 = local_190.Data.ArrayNum;
        for (FVar16 = DataDrivenIniFilenames.AllocatorInstance; FVar16.Data != pFVar15;
            FVar16.Data = FVar16.Data + 0x10) {
          iVar2 = *(int *)(FVar16.Data + 8);
          if (iVar2 == iVar6) {
            if (1 < iVar2) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar16.Data,
                                 (wchar_t *)local_190.Data.AllocatorInstance.Data);
              bVar5 = iVar6 == 0;
              iVar6 = local_190.Data.ArrayNum;
              goto LAB_1418de747;
            }
LAB_1418de759:
            if ((int)((longlong)FVar16.Data - (longlong)FVar12.Data >> 4) != -1) goto LAB_1418de87a;
            break;
          }
          bVar5 = iVar2 + iVar6 == 1;
LAB_1418de747:
          if (bVar5) goto LAB_1418de759;
        }
        if (((DataDrivenIniFilenames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_190
             ) && ((FScriptContainerElement *)&local_190 <
                   DataDrivenIniFilenames.AllocatorInstance.Data +
                   (longlong)DataDrivenIniFilenames.ArrayMax * 0x10)) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (DataDrivenIniFilenames.ArrayNum == DataDrivenIniFilenames.ArrayMax) {
          DataDrivenIniFilenames.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&DataDrivenIniFilenames.AllocatorInstance,
                          &DataDrivenIniFilenames.ArrayMax);
        }
        iVar6 = local_190.Data.ArrayNum;
        FVar12.Data = local_190.Data.AllocatorInstance.Data;
        pFVar15 = DataDrivenIniFilenames.AllocatorInstance.Data +
                  (longlong)DataDrivenIniFilenames.ArrayNum * 0x10;
        DataDrivenIniFilenames.ArrayNum = DataDrivenIniFilenames.ArrayNum + 1;
        *(undefined8 *)pFVar15 = 0;
        *(int *)(pFVar15 + 8) = local_190.Data.ArrayNum;
        if (local_190.Data.ArrayNum == 0) {
          *(int *)(pFVar15 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_190.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                     local_190.Data.ArrayNum,(int *)(pFVar15 + 0xc));
          memcpy(*(void **)pFVar15,FVar12.Data,(longlong)iVar6 * 2);
        }
      }
LAB_1418de87a:
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      pFVar8 = pFVar8 + 1;
    }
    DestructItems<FString,int>(local_180,(int)local_178);
    if (local_180 != (FString *)0x0) {
      FMemory::Free(local_180);
    }
    DestructItems<FString,int>(local_170,(int)local_168);
    if (local_170 != (FString *)0x0) {
      FMemory::Free(local_170);
    }
  }
  return &DataDrivenIniFilenames;
}

// GetDefaultMessageTitle @ 1418dedd0

FText * __cdecl `anonymous_namespace'::GetDefaultMessageTitle(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `GetDefaultMessageTitle'::`2'::_TSS0) {
    _Init_thread_header(&`GetDefaultMessageTitle'::`2'::_TSS0);
    if (`GetDefaultMessageTitle'::`2'::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&`GetDefaultMessageTitle'::`2'::DefaultMessageTitle,L"MessageDialog",
                 L"DefaultMessageTitle",L"Message");
      atexit(``anonymous_namespace'::GetDefaultMessageTitle'::__l2::
             _dynamic_atexit_destructor_for__DefaultMessageTitle__);
      _Init_thread_footer(&`GetDefaultMessageTitle'::`2'::_TSS0);
      return &`GetDefaultMessageTitle'::`2'::DefaultMessageTitle;
    }
  }
  return &`GetDefaultMessageTitle'::`2'::DefaultMessageTitle;
}

// GetDelayedAutoRegisterDelegate @ 1418dee70

TMulticastDelegate<void___cdecl(EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy> * __cdecl
GetDelayedAutoRegisterDelegate(EDelayedRegisterRunPhase param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      lVar2 = 0xe;
      puVar1 = (undefined8 *)&Singleton[0].field_0x10;
      do {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 2;
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      atexit(`GetDelayedAutoRegisterDelegate'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return Singleton + param_1;
}

// GetGlobalLogSingleton @ 1418df5b0

FOutputDeviceRedirector * __cdecl GetGlobalLogSingleton(void)

{
  FOutputDeviceRedirector *pFVar1;
  
  if (GWasGLogDestroyed) {
    return (FOutputDeviceRedirector *)0x0;
  }
  pFVar1 = FOutputDeviceRedirector::Get();
  return pFVar1;
}

// GetLLMTagDeclaration_MemStack @ 1418df710

FLLMTagDeclaration * __cdecl GetLLMTagDeclaration_MemStack(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FLLMTagDeclaration::FLLMTagDeclaration
                (&LLMTagDeclaration_MemStack,L"MemStack",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0
                 ,None);
      _Init_thread_footer(&_TSS0);
      return &LLMTagDeclaration_MemStack;
    }
  }
  return &LLMTagDeclaration_MemStack;
}

// IsFakeForking @ 1418e2d00

bool __cdecl ForkInternal::IsFakeForking(void)

{
  return false;
}

// IsRealForkRequested @ 1418e35c0

bool __cdecl ForkInternal::IsRealForkRequested(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      bVar1 = FCommandLine::IsInitialized();
      if (bVar1) {
        pwVar2 = FCommandLine::Get();
      }
      else {
        pwVar2 = L"";
      }
      bRealForkRequested = FParse::Param(pwVar2,L"WaitAndFork");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bRealForkRequested;
}

// LoadDDPIIniSettings @ 1418e4e60

void __cdecl
LoadDDPIIniSettings(FConfigFile *param_1,FDataDrivenPlatformInfo *param_2,FName param_3)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  ulonglong uVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  wchar_t wVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t wVar14;
  uint local_res10 [2];
  FName local_res18;
  bool local_res20 [8];
  bool local_1d8;
  bool local_1d7;
  bool local_1d6;
  bool local_1d5;
  bool local_1d4;
  bool local_1d3;
  bool local_1d2;
  bool local_1d1;
  bool local_1d0;
  bool local_1cf [7];
  FString local_1c8;
  FGuid local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FString local_98;
  FString local_88;
  FName local_78;
  FString local_70;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  local_res18 = param_3;
  FName::ToString(&local_res18,&local_70);
  FString::PrintfImpl(&local_1c8,L"ddpi:%s:");
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  pwVar13 = (wchar_t *)local_1c8.Data.AllocatorInstance.Data;
  if (local_1c8.Data.ArrayNum == 0) {
    pwVar13 = L"";
    pwVar5 = FCommandLine::Get();
  }
  else {
    pwVar5 = FCommandLine::Get();
    if ((FScriptContainerElement *)pwVar13 == (FScriptContainerElement *)0x0) goto LAB_1418e4fce;
  }
  if (pwVar5 != (wchar_t *)0x0) {
    wVar1 = *pwVar13;
    bVar3 = false;
    wVar14 = wVar1 + L'￠';
    if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
      wVar14 = wVar1;
    }
    sVar6 = wcslen(pwVar13);
    uVar10 = (int)sVar6 - 1;
    wVar1 = *pwVar5;
    local_res10[0] = uVar10;
    while (wVar1 != L'\0') {
      pwVar12 = pwVar5 + 1;
      wVar11 = wVar1 + L'￠';
      if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
        wVar11 = wVar1;
      }
      if ((!bVar3) && (wVar11 == wVar14)) {
        iVar4 = FGenericPlatformStricmp::Strnicmp
                          (pwVar12,(wchar_t *)((longlong)pwVar13 + 2),(longlong)(int)uVar10);
        uVar10 = local_res10[0];
        if (iVar4 == 0) {
          if (pwVar5 != (wchar_t *)0x0) {
            iVar4 = local_1c8.Data.ArrayNum + -1;
            if (local_1c8.Data.ArrayNum == 0) {
              iVar4 = 0;
            }
            FString::AssignRange
                      (&GCommandLinePrefix,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar4);
          }
          break;
        }
      }
      if (((ushort)(wVar11 + L'﾿') < 0x1a) || ((ushort)(wVar11 + L'￐') < 10)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      pwVar5 = pwVar12;
      wVar1 = *pwVar12;
    }
  }
LAB_1418e4fce:
  local_res10[0] = local_res10[0] & 0xffffff00;
  DDPITryRedirect(&local_198,param_1,L"bIsConfidential",(bool *)local_res10);
  iVar4 = local_198.Data.ArrayNum + -1;
  if (local_198.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_198);
    if (local_res10[0]._0_1_ != false) {
      bVar3 = !bVar3;
    }
    param_2->bIsConfidential = bVar3;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  local_res20[0] = false;
  DDPITryRedirect(&local_188,param_1,L"bIsFakePlatform",local_res20);
  iVar4 = local_188.Data.ArrayNum + -1;
  if (local_188.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_188);
    if (local_res20[0] != false) {
      bVar3 = !bVar3;
    }
    param_2->bIsFakePlatform = bVar3;
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  DDPITryRedirect(&local_e8,param_1,L"TargetSettingsIniSectionName",(bool *)0x0);
  iVar4 = local_e8.Data.ArrayNum + -1;
  if (local_e8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FString::AssignRange
              (&param_2->TargetSettingsIniSectionName,
               (wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar4);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  DDPITryRedirect(&local_d8,param_1,L"HardwareCompressionFormat",(bool *)0x0);
  iVar4 = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FString::AssignRange
              (&param_2->HardwareCompressionFormat,(wchar_t *)local_d8.Data.AllocatorInstance.Data,
               iVar4);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FConfigFile::GetArray
            (param_1,L"DataDrivenPlatformInfo",L"AdditionalRestrictedFolders",
             &param_2->AdditionalRestrictedFolders);
  local_1d8 = false;
  DDPITryRedirect(&local_178,param_1,L"Freezing_b32Bit",&local_1d8);
  iVar4 = local_178.Data.ArrayNum + -1;
  if (local_178.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_178);
    if (local_1d8 != false) {
      bVar3 = !bVar3;
    }
    param_2->Freezing_b32Bit = bVar3;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pwVar13 = L"Freezing_MaxFieldAlignment64";
  if (param_2->Freezing_b32Bit != false) {
    pwVar13 = L"Freezing_MaxFieldAlignment32";
  }
  DDPITryRedirect(&local_c8,param_1,pwVar13,(bool *)0x0);
  iVar4 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar9.Data = local_c8.Data.AllocatorInstance.Data;
    }
    uVar7 = _wcstoui64((wchar_t *)FVar9.Data,(wchar_t **)0x0,10);
    param_2->Freezing_MaxFieldAlignment = (uint)uVar7;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_1d7 = false;
  DDPITryRedirect(&local_168,param_1,L"Freezing_bForce64BitMemoryImagePointers",&local_1d7);
  iVar4 = local_168.Data.ArrayNum + -1;
  if (local_168.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_168);
    if (local_1d7 != false) {
      bVar3 = !bVar3;
    }
    param_2->Freezing_bForce64BitMemoryImagePointers = bVar3;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  local_1d6 = false;
  DDPITryRedirect(&local_158,param_1,L"Freezing_bAlignBases",&local_1d6);
  iVar4 = local_158.Data.ArrayNum + -1;
  if (local_158.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_158);
    if (local_1d6 != false) {
      bVar3 = !bVar3;
    }
    param_2->Freezing_bAlignBases = bVar3;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  DDPITryRedirect(&local_b8,param_1,L"GlobalIdentifier",(bool *)0x0);
  iVar4 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    local_a8 = local_b8.Data.AllocatorInstance.Data;
    local_58._12_4_ = uStack_9c;
    local_58.Size = iVar4;
    local_58.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
    iStack_a0 = iVar4;
    bVar3 = FGuid::Parse(&local_58,&local_1b8);
    if (!bVar3) {
      local_1b8.C = 0;
      local_1b8.D = 0;
      local_1b8.A = 0;
      local_1b8.B = 0;
    }
    (param_2->GlobalIdentifier).A = local_1b8.A;
    (param_2->GlobalIdentifier).B = local_1b8.B;
    (param_2->GlobalIdentifier).C = local_1b8.C;
    (param_2->GlobalIdentifier).D = local_1b8.D;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((((param_2->GlobalIdentifier).D == 0 && (param_2->GlobalIdentifier).C == 0) &&
      (param_2->GlobalIdentifier).B == 0) && (param_2->GlobalIdentifier).A == 0) {
    FName::ToString(&local_res18,&local_48);
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Info.GlobalIdentifier != FGuid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DataDrivenPlatformInfoRegistry.cpp"
                       ,0x177,
                       L"Platform %s didn\'t have a valid GlobalIdentifier set in DataDrivenPlatformInfo.ini"
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_1d5 = false;
  DDPITryRedirect(&local_148,param_1,L"bHasDedicatedGamepad",&local_1d5);
  iVar4 = local_148.Data.ArrayNum + -1;
  if (local_148.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_148);
    if (local_1d5 != false) {
      bVar3 = !bVar3;
    }
    param_2->bHasDedicatedGamepad = bVar3;
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  local_1d4 = false;
  DDPITryRedirect(&local_138,param_1,L"bDefaultInputStandardKeyboard",&local_1d4);
  iVar4 = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_138);
    if (local_1d4 != false) {
      bVar3 = !bVar3;
    }
    param_2->bDefaultInputStandardKeyboard = bVar3;
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  local_1d3 = false;
  DDPITryRedirect(&local_128,param_1,L"bInputSupportConfigurable",&local_1d3);
  iVar4 = local_128.Data.ArrayNum + -1;
  if (local_128.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_128);
    if (local_1d3 != false) {
      bVar3 = !bVar3;
    }
    param_2->bInputSupportConfigurable = bVar3;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  DDPITryRedirect(&local_98,param_1,L"DefaultInputType",(bool *)0x0);
  iVar4 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FString::AssignRange
              (&param_2->DefaultInputType,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar4);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  local_1d2 = false;
  DDPITryRedirect(&local_118,param_1,L"bSupportsMouseAndKeyboard",&local_1d2);
  iVar4 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_118);
    if (local_1d2 != false) {
      bVar3 = !bVar3;
    }
    param_2->bSupportsMouseAndKeyboard = bVar3;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_1d1 = false;
  DDPITryRedirect(&local_108,param_1,L"bSupportsGamepad",&local_1d1);
  iVar4 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_108);
    if (local_1d1 != false) {
      bVar3 = !bVar3;
    }
    param_2->bSupportsGamepad = bVar3;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  local_1d0 = false;
  DDPITryRedirect(&local_f8,param_1,L"bCanChangeGamepadType",&local_1d0);
  iVar4 = local_f8.Data.ArrayNum + -1;
  if (local_f8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_f8);
    if (local_1d0 != false) {
      bVar3 = !bVar3;
    }
    param_2->bCanChangeGamepadType = bVar3;
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_1cf[0] = false;
  DDPITryRedirect(&local_1a8,param_1,L"bSupportsTouch",local_1cf);
  iVar4 = local_1a8.Data.ArrayNum + -1;
  if (local_1a8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    bVar3 = FString::ToBool(&local_1a8);
    if (local_1cf[0] != false) {
      bVar3 = !bVar3;
    }
    param_2->bSupportsTouch = bVar3;
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  DDPITryRedirect(&local_88,param_1,L"OverrideCookPlatformName",(bool *)0x0);
  iVar4 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar9.Data = local_88.Data.AllocatorInstance.Data;
    }
    pFVar8 = FName::FName(&local_78,(wchar_t *)FVar9.Data);
    param_2->OverrideCookPlatformName = *pFVar8;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return;
}

// ParseFrameRate @ 1418ec9a0

TValueOrError<FFrameRate,FExpressionError> * __cdecl
ParseFrameRate(TValueOrError<FFrameRate,FExpressionError> *__return_storage_ptr__,wchar_t *param_1)

{
  FFrameRateParser *this;
  
  this = FFrameRateParser::Get();
  FFrameRateParser::Evaluate(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TryParseString @ 1418fce90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl TryParseString(FFrameRate *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FFrameRateParser *this;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  TValueOrError<FFrameRate,FExpressionError> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this = FFrameRateParser::Get();
  FFrameRateParser::Evaluate(this,&local_28,param_2);
  uVar5 = (ulonglong)local_28.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FFrameRate,FFrameRate,TValueOrError<FFrameRate,FExpressionError>::FWrapErrorType,TValueOrError<struct_FFrameRate,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_28.Variant.TypeIndex != 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    param_1->Numerator = (undefined4)local_28.Variant._padding_;
    param_1->Denominator = local_28.Variant._padding_._4_4_;
    bVar2 = true;
  }
  if (2 < local_28.Variant.TypeIndex) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FFrameRate,TValueOrError<FFrameRate,FExpressionError>::FWrapErrorType,TValueOrError<struct_FFrameRate,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.Variant.TypeIndex])(&local_28);
  return bVar2;
}

// printf @ 141900980

int __cdecl printf(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong64 *puVar3;
  undefined1 local_res10 [24];
  
  uVar2 = __acrt_iob_func(1);
  puVar3 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vfprintf(*puVar3,uVar2,param_1,0,local_res10);
  return iVar1;
}

// EmbeddedToNativeDelegateMap'' @ 150343040

void __cdecl `dynamic_atexit_destructor_for_'FEmbeddedDelegates::EmbeddedToNativeDelegateMap__(void)

{
  FEmbeddedDelegates::EmbeddedToNativeDelegateMap._72_4_ = 0;
  if (FEmbeddedDelegates::EmbeddedToNativeDelegateMap._64_8_ != 0) {
    FMemory::Free((void *)FEmbeddedDelegates::EmbeddedToNativeDelegateMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FEmbeddedDelegates::EmbeddedToNativeDelegateMap);
  return;
}

// GetLocalNetworkVersionOverride'' @ 150343080

void __cdecl `dynamic_atexit_destructor_for_'FNetworkVersion::GetLocalNetworkVersionOverride__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetworkVersion::GetLocalNetworkVersionOverride,(FWriteAccessScope *)&local_28);
  if ((FNetworkVersion::GetLocalNetworkVersionOverride._16_4_ != 0) &&
     (FNetworkVersion::GetLocalNetworkVersionOverride._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetworkVersion::GetLocalNetworkVersionOverride._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetworkVersion::GetLocalNetworkVersionOverride.field_0x8,0,0,
               0x10);
    FNetworkVersion::GetLocalNetworkVersionOverride._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FNetworkVersion::GetLocalNetworkVersionOverride._8_8_ != 0) {
    FMemory::Free((void *)FNetworkVersion::GetLocalNetworkVersionOverride._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetworkVersion::GetLocalNetworkVersionOverride);
  return;
}

// GetReplayCompatibleChangeListOverride'' @ 150343120

void __cdecl
`dynamic_atexit_destructor_for_'FNetworkVersion::GetReplayCompatibleChangeListOverride__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetworkVersion::GetReplayCompatibleChangeListOverride,(FWriteAccessScope *)&local_28)
  ;
  if ((FNetworkVersion::GetReplayCompatibleChangeListOverride._16_4_ != 0) &&
     (FNetworkVersion::GetReplayCompatibleChangeListOverride._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetworkVersion::GetReplayCompatibleChangeListOverride._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &FNetworkVersion::GetReplayCompatibleChangeListOverride.field_0x8,0,0,0x10);
    FNetworkVersion::GetReplayCompatibleChangeListOverride._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FNetworkVersion::GetReplayCompatibleChangeListOverride._8_8_ != 0) {
    FMemory::Free((void *)FNetworkVersion::GetReplayCompatibleChangeListOverride._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetworkVersion::GetReplayCompatibleChangeListOverride
            );
  return;
}

// IsNetworkCompatibleOverride'' @ 1503431c0

void __cdecl `dynamic_atexit_destructor_for_'FNetworkVersion::IsNetworkCompatibleOverride__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetworkVersion::IsNetworkCompatibleOverride,(FWriteAccessScope *)&local_28);
  if ((FNetworkVersion::IsNetworkCompatibleOverride._16_4_ != 0) &&
     (FNetworkVersion::IsNetworkCompatibleOverride._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetworkVersion::IsNetworkCompatibleOverride._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetworkVersion::IsNetworkCompatibleOverride.field_0x8,0,0,0x10
              );
    FNetworkVersion::IsNetworkCompatibleOverride._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FNetworkVersion::IsNetworkCompatibleOverride._8_8_ != 0) {
    FMemory::Free((void *)FNetworkVersion::IsNetworkCompatibleOverride._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetworkVersion::IsNetworkCompatibleOverride);
  return;
}

// NamedObjectRegistry'' @ 150343260

void __cdecl `dynamic_atexit_destructor_for_'FEmbeddedDelegates::NamedObjectRegistry__(void)

{
  FEmbeddedDelegates::NamedObjectRegistry._72_4_ = 0;
  if (FEmbeddedDelegates::NamedObjectRegistry._64_8_ != 0) {
    FMemory::Free((void *)FEmbeddedDelegates::NamedObjectRegistry._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FEmbeddedDelegates::NamedObjectRegistry);
  return;
}

// NamedObjectRegistryLock'' @ 1503432a0

void __cdecl `dynamic_atexit_destructor_for_'FEmbeddedDelegates::NamedObjectRegistryLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503432a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FEmbeddedDelegates::NamedObjectRegistryLock);
  return;
}

// NativeToEmbeddedDelegateMap'' @ 1503432c0

void __cdecl `dynamic_atexit_destructor_for_'FEmbeddedDelegates::NativeToEmbeddedDelegateMap__(void)

{
  FEmbeddedDelegates::NativeToEmbeddedDelegateMap._72_4_ = 0;
  if (FEmbeddedDelegates::NativeToEmbeddedDelegateMap._64_8_ != 0) {
    FMemory::Free((void *)FEmbeddedDelegates::NativeToEmbeddedDelegateMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FEmbeddedDelegates::NativeToEmbeddedDelegateMap);
  return;
}

// Serializer'' @ 150343300

void __cdecl `dynamic_atexit_destructor_for_'FSerializedUATProcess::Serializer__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150343307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FSerializedUATProcess::Serializer);
  return;
}

// SleepTickDelegate'' @ 150343320

void __cdecl `dynamic_atexit_destructor_for_'FEmbeddedDelegates::SleepTickDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FEmbeddedDelegates::SleepTickDelegate._8_8_,
             FEmbeddedDelegates::SleepTickDelegate._16_4_);
  if (FEmbeddedDelegates::SleepTickDelegate._8_8_ != 0) {
    FMemory::Free((void *)FEmbeddedDelegates::SleepTickDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FEmbeddedDelegates::SleepTickDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'AllSortedPlatformInfos'' @ 150343360

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__AllSortedPlatformInfos__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AllSortedPlatformInfos.AllocatorInstance.Data;
  if (AllSortedPlatformInfos.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AllSortedPlatformInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AllSortedPlatformNames'' @ 150343380

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__AllSortedPlatformNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AllSortedPlatformNames.AllocatorInstance.Data;
  if (AllSortedPlatformNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AllSortedPlatformNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CSkipChangelistCompatibilityVersionCheck'' @ 1503433a0

void __cdecl _dynamic_atexit_destructor_for__CSkipChangelistCompatibilityVersionCheck__(void)

{
  CSkipChangelistCompatibilityVersionCheck._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CSkipChangelistCompatibilityVersionCheck);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogFlushInterval'' @ 1503433c0

void __cdecl _dynamic_atexit_destructor_for__CVarLogFlushInterval__(void)

{
  CVarLogFlushInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogFlushInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetworkVersionOverride'' @ 1503433e0

void __cdecl
`FNetworkVersion::GetNetworkCompatibleChangelist'::__l2::
_dynamic_atexit_destructor_for__CVarNetworkVersionOverride__(void)

{
  CVarNetworkVersionOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetworkVersionOverride);
  return;
}

// `dynamic_atexit_destructor_for_'Cleanup'' @ 150343400

void __cdecl
`TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::AllocateBlock'::__l5::
_dynamic_atexit_destructor_for__Cleanup__(void)

{
  uint uVar1;
  ulong64 uVar2;
  uint *puVar3;
  ulong64 *puVar4;
  
  puVar4 = (ulong64 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xb38);
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    *(ulong64 *)(uVar2 + 0x40) = uVar2 + 0x10000;
    puVar3 = (uint *)*puVar4;
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 - ~puVar3[0x12];
    UNLOCK();
    if (uVar1 == ~puVar3[0x12]) {
      MemoryTrace_UnmarkAllocAsHeap(*puVar4,0,0);
                    /* WARNING: Could not recover jumptable at 0x00015034346b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,*puVar4);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'CompatibleNetworkCustomVersions'' @ 150343480

void __cdecl
`UE::Net::Private::GetCompatibleNetworkCustomVersions'::__l2::
_dynamic_atexit_destructor_for__CompatibleNetworkCustomVersions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CompatibleNetworkCustomVersions.Versions.AllocatorInstance.Data;
  if (CompatibleNetworkCustomVersions.Versions.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (CompatibleNetworkCustomVersions.Versions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DataDrivenIniFilenames'' @ 1503434a0

void __cdecl
`GetDataDrivenIniFilenames'::__l2::_dynamic_atexit_destructor_for__DataDrivenIniFilenames__(void)

{
  DestructItems<FString,int>
            ((FString *)DataDrivenIniFilenames.AllocatorInstance.Data,
             DataDrivenIniFilenames.ArrayNum);
  if (DataDrivenIniFilenames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DataDrivenIniFilenames.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DataDrivenPlatforms'' @ 1503434e0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__DataDrivenPlatforms__(void)

{
  DataDrivenPlatforms._72_4_ = 0;
  if (DataDrivenPlatforms._64_8_ != 0) {
    FMemory::Free((void *)DataDrivenPlatforms._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DataDrivenPlatforms);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMessageTitle'' @ 150343520

void __cdecl
``anonymous_namespace'::GetDefaultMessageTitle'::__l2::
_dynamic_atexit_destructor_for__DefaultMessageTitle__(void)

{
  if (`GetDefaultMessageTitle'::`2'::DefaultMessageTitle.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015034352f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*`GetDefaultMessageTitle'::`2'::DefaultMessageTitle.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DestructionSentinelStackTls'' @ 150343540

void __cdecl
`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
_dynamic_atexit_destructor_for__DestructionSentinelStackTls__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xb28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 150343570

void __cdecl
`FDataDrivenPlatformInfoRegistry::GetPlatformInfo'::__l2::_dynamic_atexit_destructor_for__Empty__
          (void)

{
  if (::Empty.HardwareCompressionFormat.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(::Empty.HardwareCompressionFormat.Data.AllocatorInstance.Data);
  }
  if (::Empty.DefaultInputType.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Empty.DefaultInputType.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)::Empty.AdditionalRestrictedFolders.AllocatorInstance.Data,
             ::Empty.AdditionalRestrictedFolders.ArrayNum);
  if (::Empty.AdditionalRestrictedFolders.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(::Empty.AdditionalRestrictedFolders.AllocatorInstance.Data);
  }
  if (::Empty.TargetSettingsIniSectionName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(::Empty.TargetSettingsIniSectionName.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)::Empty.IniParentChain.AllocatorInstance.Data,
             ::Empty.IniParentChain.ArrayNum);
  if (::Empty.IniParentChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Empty.IniParentChain.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FBasicLexerTestAutomationTestInstance'' @ 150343600

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FBasicLexerTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBasicLexerTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCStringGetVarArgsTestAutomationTestInstance'' @ 150343620

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCStringGetVarArgsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCStringGetVarArgsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCStringStrcatTestAutomationTestInstance'' @ 150343640

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCStringStrcatTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrcatTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCStringStrcpyTestAutomationTestInstance'' @ 150343660

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCStringStrcpyTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrcpyTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCStringStrnstrTestAutomationTestInstance'' @ 150343680

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCStringStrnstrTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrnstrTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCStringStrstrTestAutomationTestInstance'' @ 1503436a0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCStringStrstrTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCStringStrstrTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FExpressionParserAllocatedTypesAutomationTestInstance'' @ 1503436c0

void __cdecl
Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FExpressionParserAllocatedTypesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FExpressionParserAllocatedTypesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FExpressionParserMoveableTypesAutomationTestInstance'' @ 1503436e0

void __cdecl
Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FExpressionParserMoveableTypesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FExpressionParserMoveableTypesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLexerIgnoreWhitespaceTestAutomationTestInstance'' @ 150343700

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLexerIgnoreWhitespaceTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLexerIgnoreWhitespaceTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLexerParseStringTestAutomationTestInstance'' @ 150343720

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FLexerParseStringTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLexerParseStringTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance'' @ 150343740

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMRSWRecursiveAccessDetectorMultiThreadTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance'' @ 150343760

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMRSWRecursiveAccessDetectorSingleThreadTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance'' @ 150343780

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMRSWRecursiveAccessDetectorTrivialRelocationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FParseExpressionSimpleTestAutomationTestInstance'' @ 1503437a0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FParseExpressionSimpleTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FParseExpressionSimpleTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FParseLineExtendedTestAutomationTestInstance'' @ 1503437c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FParseLineExtendedTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FParseLineExtendedTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_ConcurentReadTestAutomationTestInstance'' @ 1503437e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_ConcurentReadTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ConcurentReadTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance'' @ 150343800

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ConcurentReadWriteTestAutomationTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_ConcurentWriteTestAutomationTestInstance'' @ 150343820

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_ConcurentWriteTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ConcurentWriteTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance'' @ 150343840

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveConcurentReadTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance'' @ 150343860

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveConcurentReadWriteTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance'' @ 150343880

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveConcurentWriteTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance'' @ 1503438a0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveReadReentranceAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance'' @ 1503438c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_FullyRecursiveWriteReentranceAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_ReadReentranceAutomationTestInstance'' @ 1503438e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_ReadReentranceAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_ReadReentranceAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance'' @ 150343900

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveConcurentReadTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance'' @ 150343920

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveConcurentReadWriteTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance'' @ 150343940

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveConcurentWriteTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance'' @ 150343960

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_RecursiveReadReentranceAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance'' @ 150343980

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FRWAccessDetector_RecursiveWriteReentranceAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWAccessDetector_WriteReentranceAutomationTestInstance'' @ 1503439a0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWAccessDetector_WriteReentranceAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRWAccessDetector_WriteReentranceAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRWRecursiveAccessDetectorPerfTestAutomationTestInstance'' @ 1503439c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FRWRecursiveAccessDetectorPerfTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRWRecursiveAccessDetectorPerfTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FShortCircuitParserTestAutomationTestInstance'' @ 1503439e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FShortCircuitParserTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FShortCircuitParserTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FoundPlatforms'' @ 150343a00

void __cdecl
`FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms'::__l2::
_dynamic_atexit_destructor_for__FoundPlatforms__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FoundPlatforms.AllocatorInstance.Data;
  if (FoundPlatforms.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FoundPlatforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCommandLinePrefix'' @ 150343a20

void __cdecl _dynamic_atexit_destructor_for__GCommandLinePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GCommandLinePrefix.Data.AllocatorInstance.Data;
  if (GCommandLinePrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GCommandLinePrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPhasesAlreadyRun'' @ 150343a40

void __cdecl _dynamic_atexit_destructor_for__GPhasesAlreadyRun__(void)

{
  GPhasesAlreadyRun.HashSize = 0;
  if (GPhasesAlreadyRun.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GPhasesAlreadyRun.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<enum_EDelayedRegisterRunPhase>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EDelayedRegisterRunPhase>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GPhasesAlreadyRun);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterEngineNetworkCustomVersion'' @ 150343a80

void __cdecl _dynamic_atexit_destructor_for__GRegisterEngineNetworkCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterEngineNetworkCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterGameNetworkCustomVersion'' @ 150343aa0

void __cdecl _dynamic_atexit_destructor_for__GRegisterGameNetworkCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterGameNetworkCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterReleaseObjectVersion'' @ 150343ac0

void __cdecl _dynamic_atexit_destructor_for__GRegisterReleaseObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterReleaseObjectVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalPlatformNameAliases'' @ 150343ae0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__GlobalPlatformNameAliases__(void)

{
  GlobalPlatformNameAliases._72_4_ = 0;
  if (GlobalPlatformNameAliases._64_8_ != 0) {
    FMemory::Free((void *)GlobalPlatformNameAliases._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GlobalPlatformNameAliases);
  return;
}

// `dynamic_atexit_destructor_for_'LogInteractiveProcess'' @ 150343b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInteractiveProcess__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInteractiveProcess);
  return;
}

// `dynamic_atexit_destructor_for_'LogMonitoredProcess'' @ 150343b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMonitoredProcess__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMonitoredProcess);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetVersion'' @ 150343b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetVersion__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetVersion);
  return;
}

// `dynamic_atexit_destructor_for_'LogOutputDevice'' @ 150343b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOutputDevice__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOutputDevice);
  return;
}

// `dynamic_atexit_destructor_for_'Mgr'' @ 150343ba0

void __cdecl `UE::FEncryptionKeyManager::Get'::__l2::_dynamic_atexit_destructor_for__Mgr__(void)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
         FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this,&Mgr);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)Mgr.KeyAdded._8_8_,
             Mgr.KeyAdded._16_4_);
  if (Mgr.KeyAdded._8_8_ != 0) {
    FMemory::Free((void *)Mgr.KeyAdded._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&Mgr.KeyAdded);
  Mgr.Keys._72_4_ = 0;
  if (Mgr.Keys._64_8_ != 0) {
    FMemory::Free((void *)Mgr.Keys._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Mgr.Keys);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkCustomVersions'' @ 150343c20

void __cdecl
`UE::Net::Private::GetNetworkCustomVersions'::__l2::
_dynamic_atexit_destructor_for__NetworkCustomVersions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NetworkCustomVersions.Versions.AllocatorInstance.Data;
  if (NetworkCustomVersions.Versions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NetworkCustomVersions.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PageAllocator'' @ 150343c40

void __cdecl
`FPageAllocator::Construct'::__l2::_dynamic_atexit_destructor_for__PageAllocator__(void)

{
  code *pcVar1;
  bool bVar2;
  
  FPageAllocator::Instance = (FPageAllocator *)0x0;
  if (PageAllocator.TheAllocator.NumUsed.Counter != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetNumUsed() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter>::Trim(&PageAllocator.TheAllocator);
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)&PageAllocator);
  return;
}

// `dynamic_atexit_destructor_for_'PlatformDirectories'' @ 150343cb0

void __cdecl
`FDataDrivenPlatformInfoRegistry::GetPlatformDirectoryNames'::__l2::
_dynamic_atexit_destructor_for__PlatformDirectories__(void)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  
  pTVar3 = &FoundPlatforms;
  lVar4 = 2;
  do {
    pTVar2 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    DestructItems<FString,int>((FString *)(pTVar3->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'ProjectVersion'' @ 150343d10

void __cdecl
`FNetworkVersion::GetProjectVersion_Internal'::__l2::
_dynamic_atexit_destructor_for__ProjectVersion__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ProjectVersion.Data.AllocatorInstance.Data;
  if (ProjectVersion.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ProjectVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ReadersTls'' @ 150343d30

void __cdecl
`FMRSWRecursiveAccessDetector::GetReadersTls'::__l2::_dynamic_atexit_destructor_for__ReadersTls__
          (void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xaf8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150343d60

void __cdecl `FOutputDeviceRedirector::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FOutputDeviceRedirector *pFVar1;
  
  ::Singleton._padding_ = (longlong)&___7FOutputDeviceRedirector__6B_;
  pFVar1 = FOutputDeviceRedirector::Get();
  if (pFVar1 == &::Singleton) {
    GWasGLogDestroyed = true;
  }
  if (::Singleton.State.Ptr != (FOutputDeviceRedirectorState *)0x0) {
    (*(code *)::Singleton.State.Ptr[-1].UnbufferedOutputDevicesCanBeUsedOnPanicThread.
              AllocatorInstance.SecondaryData)
              (&::Singleton.State.Ptr[-1].UnbufferedOutputDevicesCanBeUsedOnPanicThread.
                AllocatorInstance.SecondaryData);
  }
  ::Singleton._padding_ = (longlong)&___7FOutputDevice__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150343dc0

void __cdecl `FShortCircuitParser::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::
  ~TOperatorJumpTable<FShortCircuitTestContext,wchar_t>
            (&`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
              ::__l2::Singleton.JumpTable);
  FExpressionGrammar::~FExpressionGrammar
            (&`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
              ::__l2::Singleton.Grammar);
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             `public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
             ::__l2::Singleton.TokenDefinitions.Definitions.AllocatorInstance.Data,
             `public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
             ::__l2::Singleton.TokenDefinitions.Definitions.ArrayNum);
  if (`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'::
      __l2::Singleton.TokenDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
                  ::__l2::Singleton.TokenDefinitions.Definitions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150343e10

void __cdecl
`GetDelayedAutoRegisterDelegate'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FThreadSafeStaticStat<_public:_static_bool___cdecl_FEmbeddedCommunication::TickGameThread(float)_::_2_::FStat_STAT_FEmbeddedCommunication_TickGameThread>
  *pFVar1;
  FThreadSafeStaticStat<_public:_static_bool___cdecl_FEmbeddedCommunication::TickGameThread(float)_::_2_::FStat_STAT_FEmbeddedCommunication_TickGameThread>
  *pFVar2;
  longlong lVar3;
  
  lVar3 = 0xe;
  pFVar2 = &StatPtr_STAT_FEmbeddedCommunication_TickGameThread;
  do {
    pFVar1 = pFVar2 + -4;
    lVar3 = lVar3 + -1;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)*pFVar1,*(int *)(pFVar2 + -3))
    ;
    if (*pFVar1 !=
        (FThreadSafeStaticStat<_public:_static_bool___cdecl_FEmbeddedCommunication::TickGameThread(float)_::_2_::FStat_STAT_FEmbeddedCommunication_TickGameThread>
         )0x0) {
      FMemory::Free((void *)*pFVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(pFVar2 + -5));
    pFVar2 = pFVar1;
  } while (lVar3 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150343e70

void __cdecl
`TLazySingleton<FGlobalEngineVersions>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  longlong lVar1;
  
  lVar1 = DAT_154f09f68;
  if (DAT_154f09f68 != 0) {
    if (*(void **)(DAT_154f09f68 + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)(DAT_154f09f68 + 0x30));
    }
    if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(lVar1 + 0x10));
    }
    DAT_154f09f68 = 0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SortedPlatformInfos'' @ 150343ec0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__SortedPlatformInfos__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SortedPlatformInfos.AllocatorInstance.Data;
  if (SortedPlatformInfos.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SortedPlatformInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SortedPlatformNames'' @ 150343ee0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__SortedPlatformNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SortedPlatformNames.AllocatorInstance.Data;
  if (SortedPlatformNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SortedPlatformNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFrameRateParser'' @ 150343f00

void __cdecl
`FFrameRateParser::Get'::__l2::_dynamic_atexit_destructor_for__StaticFrameRateParser__(void)

{
  TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>
            (&`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::
              __l2::StaticFrameRateParser.JumpTable);
  FExpressionGrammar::~FExpressionGrammar
            (&`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::
              __l2::StaticFrameRateParser.Grammar);
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             `public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::
             __l2::StaticFrameRateParser.TokenDefinitions.Definitions.AllocatorInstance.Data,
             `public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::
             __l2::StaticFrameRateParser.TokenDefinitions.Definitions.ArrayNum);
  if (`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::__l2::
      StaticFrameRateParser.TokenDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'
                  ::__l2::StaticFrameRateParser.TokenDefinitions.Definitions.AllocatorInstance.Data)
    ;
    return;
  }
  return;
}

